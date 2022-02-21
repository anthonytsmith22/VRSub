using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
public class VRSubHandCollider : Valve.VR.InteractionSystem.HandCollider
{
    public override void Awake(){
        base.Awake();
    }

    public override void Start()
    {
        base.Start();
    }

    public override void SetPhysicMaterial(PhysicMaterial mat)
    {
        base.SetPhysicMaterial(mat);
    }

    public override void SetCollisionDetectionEnabled(bool value)
    {
        base.SetCollisionDetectionEnabled(value);
    }

    public override void MoveTo(Vector3 position, Quaternion rotation)
    {
        base.MoveTo(position, rotation);
    }

    public override void TeleportTo(Vector3 position, Quaternion rotation)
    {
        base.TeleportTo(position, rotation);
    }

    public override void SetCenterPoint(Vector3 newCenter)
    {
        base.SetCenterPoint(newCenter);
    }

    public override void ExecuteFixedUpdate()
    {
        base.ExecuteFixedUpdate();
    }

    public override bool GetTargetVelocities(out Vector3 velocityTarget, out Vector3 angularTarget)
    {
        return base.GetTargetVelocities(out velocityTarget, out angularTarget);
    }

    public override void OnCollisionEnter(Collision collision)
    {
        // If this is a NetworkPlayer Hand, Ignore Collisions with Client Hand
        if(this.gameObject.tag == "ClientHand")
        {
            if(collision.gameObject.tag == "NetworkHand"){
                Collider[] colliders = base.colliders;
                int i;
                for(i = 0; i < colliders.Length; i++){
                    Physics.IgnoreCollision(collision.collider, colliders[i]);
                }
            return;
            }   
        }
        base.OnCollisionEnter(collision);
    }
}
