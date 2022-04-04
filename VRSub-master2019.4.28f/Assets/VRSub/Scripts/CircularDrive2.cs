using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;
public class CircularDrive2 : Valve.VR.InteractionSystem.CircularDrive
{
        protected float initialMappingOffset;
        protected int numMappingChangeSamples = 5;
        protected float[] mappingChangeSamples;
        protected float prevMapping = 0.0f;
        protected float mappingChangeRate;
        protected int sampleCount = 0;
        public bool repositionGameObject = true;
		public bool maintainMomemntum = true;
		public float momemtumDampenRate = 5.0f;

    public override void UpdateLinearMapping()
    {
        base.UpdateLinearMapping();
        mappingChangeSamples[sampleCount % mappingChangeSamples.Length] = ( 1.0f / Time.deltaTime ) * ( linearMapping.value - prevMapping );
		sampleCount++;
    }

    
    void OnDetachedFromHand(Hand hand)
    {
        CalculateMappingChangeRate();
    }

    protected void CalculateMappingChangeRate()
    {
        //Compute the mapping change rate
        mappingChangeRate = 0.0f;
        int mappingSamplesCount = Mathf.Min( sampleCount, mappingChangeSamples.Length );
        if ( mappingSamplesCount != 0 )
        {
            for ( int i = 0; i < mappingSamplesCount; ++i )
            {
                mappingChangeRate += mappingChangeSamples[i];
            }
            mappingChangeRate /= mappingSamplesCount;
        }
    }

    void Update()
    {
        if ( maintainMomemntum && mappingChangeRate != 0.0f )
        {
            //Dampen the mapping change rate and apply it to the mapping
            mappingChangeRate = Mathf.Lerp( mappingChangeRate, 0.0f, momemtumDampenRate * Time.deltaTime );
            linearMapping.value = Mathf.Clamp01( linearMapping.value + ( mappingChangeRate * Time.deltaTime ) );

            if ( repositionGameObject )
            {
                
            }
        }
    }

    public override void UpdateAll()
    {
        
    }
}
