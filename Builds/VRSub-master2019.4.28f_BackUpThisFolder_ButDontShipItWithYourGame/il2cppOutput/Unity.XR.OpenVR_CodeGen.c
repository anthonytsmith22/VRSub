#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* OpenVRLoader_TickCallback_m2144F6BB6856DAD0BCAD5460F97F578F24A3B3C2_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 <assembly>j__TPar <>f__AnonymousType0`2::get_assembly()
// 0x00000002 <type>j__TPar <>f__AnonymousType0`2::get_type()
// 0x00000003 System.Void <>f__AnonymousType0`2::.ctor(<assembly>j__TPar,<type>j__TPar)
// 0x00000004 System.Boolean <>f__AnonymousType0`2::Equals(System.Object)
// 0x00000005 System.Int32 <>f__AnonymousType0`2::GetHashCode()
// 0x00000006 System.String <>f__AnonymousType0`2::ToString()
// 0x00000007 System.IntPtr Valve.VR.Utils::ToUtf8(System.String)
extern void Utils_ToUtf8_mB7A3E057C4ED92BDDD22F53891CBCECF6EB4E9CA (void);
// 0x00000008 System.Void Valve.VR.Utils::.ctor()
extern void Utils__ctor_m718053CFF69A0DBDC59BBA39543E48A586099C8F (void);
// 0x00000009 System.Void Valve.VR.Utils::.cctor()
extern void Utils__cctor_m041ED7361FE730538999B026C01F8A3DB43C0459 (void);
// 0x0000000A System.Void Valve.VR.CVRSystem::.ctor(System.IntPtr)
extern void CVRSystem__ctor_m817F25F8E29CEB31EAEAC4D613F71735D4AAA949 (void);
// 0x0000000B System.Void Valve.VR.CVRSystem::GetRecommendedRenderTargetSize(System.UInt32&,System.UInt32&)
extern void CVRSystem_GetRecommendedRenderTargetSize_mC5E15A34EDEB0279E20132E57B23CF323560A187 (void);
// 0x0000000C Valve.VR.HmdMatrix44_t Valve.VR.CVRSystem::GetProjectionMatrix(Valve.VR.EVREye,System.Single,System.Single)
extern void CVRSystem_GetProjectionMatrix_mB7B3A824DA75A0A65B601EE7A67AB7FD481C06F5 (void);
// 0x0000000D System.Void Valve.VR.CVRSystem::GetProjectionRaw(Valve.VR.EVREye,System.Single&,System.Single&,System.Single&,System.Single&)
extern void CVRSystem_GetProjectionRaw_mD908C7774AE702EE9477B88F58D167770F53176C (void);
// 0x0000000E System.Boolean Valve.VR.CVRSystem::ComputeDistortion(Valve.VR.EVREye,System.Single,System.Single,Valve.VR.DistortionCoordinates_t&)
extern void CVRSystem_ComputeDistortion_m5DCD40E3D24D289CA5EFC9A8BC6EE41D1D68CD02 (void);
// 0x0000000F Valve.VR.HmdMatrix34_t Valve.VR.CVRSystem::GetEyeToHeadTransform(Valve.VR.EVREye)
extern void CVRSystem_GetEyeToHeadTransform_m10D120B57AB846DA497E8B1C4F7E85069B4F36C7 (void);
// 0x00000010 System.Boolean Valve.VR.CVRSystem::GetTimeSinceLastVsync(System.Single&,System.UInt64&)
extern void CVRSystem_GetTimeSinceLastVsync_mCD036FF58EEC59EC78C6FF45D9909236B031EA63 (void);
// 0x00000011 System.Int32 Valve.VR.CVRSystem::GetD3D9AdapterIndex()
extern void CVRSystem_GetD3D9AdapterIndex_m3DF959E80399FB93978C340E4863D8FE074215A8 (void);
// 0x00000012 System.Void Valve.VR.CVRSystem::GetDXGIOutputInfo(System.Int32&)
extern void CVRSystem_GetDXGIOutputInfo_m10A6841483EC23E990C2AB3D892CCBA39DFB99D3 (void);
// 0x00000013 System.Void Valve.VR.CVRSystem::GetOutputDevice(System.UInt64&,Valve.VR.ETextureType,System.IntPtr)
extern void CVRSystem_GetOutputDevice_m6DADB5A6CEAB8E9B502DD795DE51EB2EA3703EDD (void);
// 0x00000014 System.Boolean Valve.VR.CVRSystem::IsDisplayOnDesktop()
extern void CVRSystem_IsDisplayOnDesktop_m71D4E42E84DC0C64F885A003FA10C0190F3D9AA3 (void);
// 0x00000015 System.Boolean Valve.VR.CVRSystem::SetDisplayVisibility(System.Boolean)
extern void CVRSystem_SetDisplayVisibility_m8A947F76CA57EA246D216134E63652B365A052A3 (void);
// 0x00000016 System.Void Valve.VR.CVRSystem::GetDeviceToAbsoluteTrackingPose(Valve.VR.ETrackingUniverseOrigin,System.Single,Valve.VR.TrackedDevicePose_t[])
extern void CVRSystem_GetDeviceToAbsoluteTrackingPose_mDFF0EB684B6A2EAB7CBE043219D1A1C5584DF963 (void);
// 0x00000017 Valve.VR.HmdMatrix34_t Valve.VR.CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose()
extern void CVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_m6E561D79A2C3333163D12C2CB88D549E1DB76B80 (void);
// 0x00000018 Valve.VR.HmdMatrix34_t Valve.VR.CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose()
extern void CVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose_m2B6E0B9E919268763FDC4C273BB27B20D59A74A4 (void);
// 0x00000019 System.UInt32 Valve.VR.CVRSystem::GetSortedTrackedDeviceIndicesOfClass(Valve.VR.ETrackedDeviceClass,System.UInt32[],System.UInt32)
extern void CVRSystem_GetSortedTrackedDeviceIndicesOfClass_m379493B847C0981B52A3A3FD43CD0B43390F7625 (void);
// 0x0000001A Valve.VR.EDeviceActivityLevel Valve.VR.CVRSystem::GetTrackedDeviceActivityLevel(System.UInt32)
extern void CVRSystem_GetTrackedDeviceActivityLevel_mD827DA0051DE2D9C310C6C0FF0A08C27F814C161 (void);
// 0x0000001B System.Void Valve.VR.CVRSystem::ApplyTransform(Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&,Valve.VR.HmdMatrix34_t&)
extern void CVRSystem_ApplyTransform_m0625B8B52B1485456479E03FA5158242CE9C8425 (void);
// 0x0000001C System.UInt32 Valve.VR.CVRSystem::GetTrackedDeviceIndexForControllerRole(Valve.VR.ETrackedControllerRole)
extern void CVRSystem_GetTrackedDeviceIndexForControllerRole_m2CAB92347C7A88AA11D361668C26D3C68229B492 (void);
// 0x0000001D Valve.VR.ETrackedControllerRole Valve.VR.CVRSystem::GetControllerRoleForTrackedDeviceIndex(System.UInt32)
extern void CVRSystem_GetControllerRoleForTrackedDeviceIndex_mFF0C26F6A3F1390347D60404C395933FDA3E4507 (void);
// 0x0000001E Valve.VR.ETrackedDeviceClass Valve.VR.CVRSystem::GetTrackedDeviceClass(System.UInt32)
extern void CVRSystem_GetTrackedDeviceClass_m3CB19F397A1AB529582A926008C34D01C74B88B0 (void);
// 0x0000001F System.Boolean Valve.VR.CVRSystem::IsTrackedDeviceConnected(System.UInt32)
extern void CVRSystem_IsTrackedDeviceConnected_mB9095E5661CA97E23DC57417040FFFD653F1501B (void);
// 0x00000020 System.Boolean Valve.VR.CVRSystem::GetBoolTrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetBoolTrackedDeviceProperty_m112152D9CABA8534A94296FFE52FEF266C2D5D90 (void);
// 0x00000021 System.Single Valve.VR.CVRSystem::GetFloatTrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetFloatTrackedDeviceProperty_m81B1B008BAE896DF6494B820C54A91A151747D93 (void);
// 0x00000022 System.Int32 Valve.VR.CVRSystem::GetInt32TrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetInt32TrackedDeviceProperty_mDD55E1AC64C65025DC163F29A8855BF36F022A9C (void);
// 0x00000023 System.UInt64 Valve.VR.CVRSystem::GetUint64TrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetUint64TrackedDeviceProperty_m80E3DC504F5D41339C9C91C7C705E984777B4329 (void);
// 0x00000024 Valve.VR.HmdMatrix34_t Valve.VR.CVRSystem::GetMatrix34TrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetMatrix34TrackedDeviceProperty_mB2D260ABA1A381FB196F4DA07CB45AC462EC39F0 (void);
// 0x00000025 System.UInt32 Valve.VR.CVRSystem::GetArrayTrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,System.UInt32,System.IntPtr,System.UInt32,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetArrayTrackedDeviceProperty_m4691DE76548A0B8913F6C8A5A62F32BA00D51BFA (void);
// 0x00000026 System.UInt32 Valve.VR.CVRSystem::GetStringTrackedDeviceProperty(System.UInt32,Valve.VR.ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,Valve.VR.ETrackedPropertyError&)
extern void CVRSystem_GetStringTrackedDeviceProperty_mAFD2CDC924AEBD1194DF3A6BB7A892E4FA903FFF (void);
// 0x00000027 System.String Valve.VR.CVRSystem::GetPropErrorNameFromEnum(Valve.VR.ETrackedPropertyError)
extern void CVRSystem_GetPropErrorNameFromEnum_mEF7DBC9C70ECAAE22B5E6BDC25AD91282B5A0A67 (void);
// 0x00000028 System.Boolean Valve.VR.CVRSystem::PollNextEvent(Valve.VR.VREvent_t&,System.UInt32)
extern void CVRSystem_PollNextEvent_mACBB2908F5E2D38B09A2CE266B5FF577CFADFDDD (void);
// 0x00000029 System.Boolean Valve.VR.CVRSystem::PollNextEventWithPose(Valve.VR.ETrackingUniverseOrigin,Valve.VR.VREvent_t&,System.UInt32,Valve.VR.TrackedDevicePose_t&)
extern void CVRSystem_PollNextEventWithPose_m4154693792D2FCE2A8A4977D9BE7671EAD4B9651 (void);
// 0x0000002A System.String Valve.VR.CVRSystem::GetEventTypeNameFromEnum(Valve.VR.EVREventType)
extern void CVRSystem_GetEventTypeNameFromEnum_m149AEF9CB0D23333E57C5C4398ED3CAD4D2A1854 (void);
// 0x0000002B Valve.VR.HiddenAreaMesh_t Valve.VR.CVRSystem::GetHiddenAreaMesh(Valve.VR.EVREye,Valve.VR.EHiddenAreaMeshType)
extern void CVRSystem_GetHiddenAreaMesh_m237BFB1EEF5F5400F8F0AE6B3AF89CD43B3899E9 (void);
// 0x0000002C System.Boolean Valve.VR.CVRSystem::GetControllerState(System.UInt32,Valve.VR.VRControllerState_t&,System.UInt32)
extern void CVRSystem_GetControllerState_mDA2AFEF909256FFE8469E1E5621EF54C17385833 (void);
// 0x0000002D System.Boolean Valve.VR.CVRSystem::GetControllerStateWithPose(Valve.VR.ETrackingUniverseOrigin,System.UInt32,Valve.VR.VRControllerState_t&,System.UInt32,Valve.VR.TrackedDevicePose_t&)
extern void CVRSystem_GetControllerStateWithPose_mC90DC7645959FFEA1A4D377CA7EF61DF6DEE17C2 (void);
// 0x0000002E System.Void Valve.VR.CVRSystem::TriggerHapticPulse(System.UInt32,System.UInt32,System.UInt16)
extern void CVRSystem_TriggerHapticPulse_m20FA0E1F3C2B2D20E4B56394C703B390E7585A91 (void);
// 0x0000002F System.String Valve.VR.CVRSystem::GetButtonIdNameFromEnum(Valve.VR.EVRButtonId)
extern void CVRSystem_GetButtonIdNameFromEnum_m91AFD0BA1B1D4924976665EBBC32B7B5EFF3C6D6 (void);
// 0x00000030 System.String Valve.VR.CVRSystem::GetControllerAxisTypeNameFromEnum(Valve.VR.EVRControllerAxisType)
extern void CVRSystem_GetControllerAxisTypeNameFromEnum_m9AF6D07221A049A8BE25E7198D18F63A50EEF82F (void);
// 0x00000031 System.Boolean Valve.VR.CVRSystem::IsInputAvailable()
extern void CVRSystem_IsInputAvailable_m349A68FFC17E94060449F034A962B3079F08950B (void);
// 0x00000032 System.Boolean Valve.VR.CVRSystem::IsSteamVRDrawingControllers()
extern void CVRSystem_IsSteamVRDrawingControllers_m7730BC71DC9758E492BCAF3C890A1BD508A4DA53 (void);
// 0x00000033 System.Boolean Valve.VR.CVRSystem::ShouldApplicationPause()
extern void CVRSystem_ShouldApplicationPause_mEE91DC4DF7173A2D23C77D421998D0E54018691E (void);
// 0x00000034 System.Boolean Valve.VR.CVRSystem::ShouldApplicationReduceRenderingWork()
extern void CVRSystem_ShouldApplicationReduceRenderingWork_m2C880F71D0B71A8396C35E3F2F12B7ABE787D72C (void);
// 0x00000035 Valve.VR.EVRFirmwareError Valve.VR.CVRSystem::PerformFirmwareUpdate(System.UInt32)
extern void CVRSystem_PerformFirmwareUpdate_m516FBEF9F231E5E8468A01F06FDBE9D81A0D5C2B (void);
// 0x00000036 System.Void Valve.VR.CVRSystem::AcknowledgeQuit_Exiting()
extern void CVRSystem_AcknowledgeQuit_Exiting_mBAC62F0BD43BFDDD3569B507DBEE6DCCD725CCBC (void);
// 0x00000037 System.UInt32 Valve.VR.CVRSystem::GetAppContainerFilePaths(System.Text.StringBuilder,System.UInt32)
extern void CVRSystem_GetAppContainerFilePaths_mAC7C0BC6F6190DBB4CEAB8A12BA3A94848B4A7D8 (void);
// 0x00000038 System.String Valve.VR.CVRSystem::GetRuntimeVersion()
extern void CVRSystem_GetRuntimeVersion_mFCA49FD5047848C823001C2CEEF99A972B72E51C (void);
// 0x00000039 System.Void Valve.VR.CVRExtendedDisplay::.ctor(System.IntPtr)
extern void CVRExtendedDisplay__ctor_mA2490706DD8DBB2C17628DC186603B3F2E8F3FE2 (void);
// 0x0000003A System.Void Valve.VR.CVRExtendedDisplay::GetWindowBounds(System.Int32&,System.Int32&,System.UInt32&,System.UInt32&)
extern void CVRExtendedDisplay_GetWindowBounds_m5CDC85D83FA4E5C19EABB0F565ECE8A3F40F19D7 (void);
// 0x0000003B System.Void Valve.VR.CVRExtendedDisplay::GetEyeOutputViewport(Valve.VR.EVREye,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&)
extern void CVRExtendedDisplay_GetEyeOutputViewport_m891074BEE593F3E11615F31E903B408D53A00F17 (void);
// 0x0000003C System.Void Valve.VR.CVRExtendedDisplay::GetDXGIOutputInfo(System.Int32&,System.Int32&)
extern void CVRExtendedDisplay_GetDXGIOutputInfo_mAA6150FAE6654A9F27C48B18C215A65C6542DB63 (void);
// 0x0000003D System.Void Valve.VR.CVRTrackedCamera::.ctor(System.IntPtr)
extern void CVRTrackedCamera__ctor_m26799891E484A6176B33FB34D55D08BF4D8F4BB5 (void);
// 0x0000003E System.String Valve.VR.CVRTrackedCamera::GetCameraErrorNameFromEnum(Valve.VR.EVRTrackedCameraError)
extern void CVRTrackedCamera_GetCameraErrorNameFromEnum_m4AE05163B3470C0803894B7CC114677FC87E7371 (void);
// 0x0000003F Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::HasCamera(System.UInt32,System.Boolean&)
extern void CVRTrackedCamera_HasCamera_mE40DB09F1DC3B431EBCFFD26272CC02CF27FB86B (void);
// 0x00000040 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetCameraFrameSize(System.UInt32,Valve.VR.EVRTrackedCameraFrameType,System.UInt32&,System.UInt32&,System.UInt32&)
extern void CVRTrackedCamera_GetCameraFrameSize_m5A89A48AEDCD10FC892EAA4F0E13BBDCF43F332D (void);
// 0x00000041 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetCameraIntrinsics(System.UInt32,System.UInt32,Valve.VR.EVRTrackedCameraFrameType,Valve.VR.HmdVector2_t&,Valve.VR.HmdVector2_t&)
extern void CVRTrackedCamera_GetCameraIntrinsics_m89D0A811486B76748CE42F30137C2B4CD5530B52 (void);
// 0x00000042 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetCameraProjection(System.UInt32,System.UInt32,Valve.VR.EVRTrackedCameraFrameType,System.Single,System.Single,Valve.VR.HmdMatrix44_t&)
extern void CVRTrackedCamera_GetCameraProjection_m050AFEA4E2B23C5A267454C1A6CAD5F554A76E75 (void);
// 0x00000043 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::AcquireVideoStreamingService(System.UInt32,System.UInt64&)
extern void CVRTrackedCamera_AcquireVideoStreamingService_m7BEF4E0A2EFDAE3B530BC1F9026D051BC217FF76 (void);
// 0x00000044 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::ReleaseVideoStreamingService(System.UInt64)
extern void CVRTrackedCamera_ReleaseVideoStreamingService_m159BECBB58862A1C52CF427A667B661FF4B2E48D (void);
// 0x00000045 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetVideoStreamFrameBuffer(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.IntPtr,System.UInt32,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32)
extern void CVRTrackedCamera_GetVideoStreamFrameBuffer_mDA47EBDB3C4E1DA1F45AA2014D0B33E6CBA3E9B2 (void);
// 0x00000046 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetVideoStreamTextureSize(System.UInt32,Valve.VR.EVRTrackedCameraFrameType,Valve.VR.VRTextureBounds_t&,System.UInt32&,System.UInt32&)
extern void CVRTrackedCamera_GetVideoStreamTextureSize_m3DB0F2F83DC4CA88E86DA0375B8388DF4BA285D3 (void);
// 0x00000047 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetVideoStreamTextureD3D11(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.IntPtr,System.IntPtr&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32)
extern void CVRTrackedCamera_GetVideoStreamTextureD3D11_mD44A0BD6B4ACBBF5BEFA6AEF674EB8A51900565F (void);
// 0x00000048 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::GetVideoStreamTextureGL(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.UInt32&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32)
extern void CVRTrackedCamera_GetVideoStreamTextureGL_m97B62F9240FE8C791BC6BB176CCBFA78C36D5E69 (void);
// 0x00000049 Valve.VR.EVRTrackedCameraError Valve.VR.CVRTrackedCamera::ReleaseVideoStreamTextureGL(System.UInt64,System.UInt32)
extern void CVRTrackedCamera_ReleaseVideoStreamTextureGL_m99EB794C202E95ED6359E2EF1EFD6C637499F606 (void);
// 0x0000004A System.Void Valve.VR.CVRTrackedCamera::SetCameraTrackingSpace(Valve.VR.ETrackingUniverseOrigin)
extern void CVRTrackedCamera_SetCameraTrackingSpace_m97B55221120D0374220DF2AC1588902EBA13E965 (void);
// 0x0000004B Valve.VR.ETrackingUniverseOrigin Valve.VR.CVRTrackedCamera::GetCameraTrackingSpace()
extern void CVRTrackedCamera_GetCameraTrackingSpace_mA71DB8593A9883FC7EEA7A8224D160F5E275AC03 (void);
// 0x0000004C System.Void Valve.VR.CVRApplications::.ctor(System.IntPtr)
extern void CVRApplications__ctor_m389CAC7523E6DBBE7E5657900A83F0C478CF2CD0 (void);
// 0x0000004D Valve.VR.EVRApplicationError Valve.VR.CVRApplications::AddApplicationManifest(System.String,System.Boolean)
extern void CVRApplications_AddApplicationManifest_m1594BB64F447915EED09FD0567D8210CFD8B90F2 (void);
// 0x0000004E Valve.VR.EVRApplicationError Valve.VR.CVRApplications::RemoveApplicationManifest(System.String)
extern void CVRApplications_RemoveApplicationManifest_mA0A6F84142194C5320480AC74F131933302B76D9 (void);
// 0x0000004F System.Boolean Valve.VR.CVRApplications::IsApplicationInstalled(System.String)
extern void CVRApplications_IsApplicationInstalled_m143BD4A564C6D673EED37DCA2A222F774E293926 (void);
// 0x00000050 System.UInt32 Valve.VR.CVRApplications::GetApplicationCount()
extern void CVRApplications_GetApplicationCount_m79EA298FED914145D4E57F5266665428415842DF (void);
// 0x00000051 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::GetApplicationKeyByIndex(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetApplicationKeyByIndex_mE9FB46E26EF32EC18E30BC5184C7A1B0E212D41D (void);
// 0x00000052 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::GetApplicationKeyByProcessId(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetApplicationKeyByProcessId_mFB7A9637E54FD00C488A4AF5C1E13433E439E450 (void);
// 0x00000053 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::LaunchApplication(System.String)
extern void CVRApplications_LaunchApplication_m0C6BC01A0CDF8E1C715A69605E93A2EE13660094 (void);
// 0x00000054 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::LaunchTemplateApplication(System.String,System.String,Valve.VR.AppOverrideKeys_t[])
extern void CVRApplications_LaunchTemplateApplication_m9F5DE774D8120458E06E0DF97901084ADA4E0ED3 (void);
// 0x00000055 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::LaunchApplicationFromMimeType(System.String,System.String)
extern void CVRApplications_LaunchApplicationFromMimeType_m0DD5DEC3904DC556B256D69A9FBD1604F29FC011 (void);
// 0x00000056 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::LaunchDashboardOverlay(System.String)
extern void CVRApplications_LaunchDashboardOverlay_m9F3EB4548EBBF6DCA5604944623C1391093FB288 (void);
// 0x00000057 System.Boolean Valve.VR.CVRApplications::CancelApplicationLaunch(System.String)
extern void CVRApplications_CancelApplicationLaunch_m867538E6CC408744BEFE85EFFD680A1848F2DE65 (void);
// 0x00000058 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::IdentifyApplication(System.UInt32,System.String)
extern void CVRApplications_IdentifyApplication_mE863CF3A8E4A363B1C1F4492EEDDA514C8B4C365 (void);
// 0x00000059 System.UInt32 Valve.VR.CVRApplications::GetApplicationProcessId(System.String)
extern void CVRApplications_GetApplicationProcessId_mF188609E7AAE80CD88AFC23554FD65E930FBFC5C (void);
// 0x0000005A System.String Valve.VR.CVRApplications::GetApplicationsErrorNameFromEnum(Valve.VR.EVRApplicationError)
extern void CVRApplications_GetApplicationsErrorNameFromEnum_m8C604AC7BF2D91963651E82ECB2E976D0706DA85 (void);
// 0x0000005B System.UInt32 Valve.VR.CVRApplications::GetApplicationPropertyString(System.String,Valve.VR.EVRApplicationProperty,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRApplicationError&)
extern void CVRApplications_GetApplicationPropertyString_mE69667524981E66189A467CA62E797DE885D1941 (void);
// 0x0000005C System.Boolean Valve.VR.CVRApplications::GetApplicationPropertyBool(System.String,Valve.VR.EVRApplicationProperty,Valve.VR.EVRApplicationError&)
extern void CVRApplications_GetApplicationPropertyBool_mA0EF751697CE79FED8C2C0EB7477DBF9E826CCF2 (void);
// 0x0000005D System.UInt64 Valve.VR.CVRApplications::GetApplicationPropertyUint64(System.String,Valve.VR.EVRApplicationProperty,Valve.VR.EVRApplicationError&)
extern void CVRApplications_GetApplicationPropertyUint64_m9763E1DF056100D601C4333DCBC2F4FD4731D33C (void);
// 0x0000005E Valve.VR.EVRApplicationError Valve.VR.CVRApplications::SetApplicationAutoLaunch(System.String,System.Boolean)
extern void CVRApplications_SetApplicationAutoLaunch_mAFB501415FC8271711D5FC1AAA41A2A51C8805CF (void);
// 0x0000005F System.Boolean Valve.VR.CVRApplications::GetApplicationAutoLaunch(System.String)
extern void CVRApplications_GetApplicationAutoLaunch_m0B5F2ADCCE2EF743BA23A885FF700D42A8BB2AE3 (void);
// 0x00000060 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::SetDefaultApplicationForMimeType(System.String,System.String)
extern void CVRApplications_SetDefaultApplicationForMimeType_m5BD3644F39BD97899E4449AD948C0EA254393A10 (void);
// 0x00000061 System.Boolean Valve.VR.CVRApplications::GetDefaultApplicationForMimeType(System.String,System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetDefaultApplicationForMimeType_mC1BA8BB2A94952F55AE011AA3D2B87B2C40889CE (void);
// 0x00000062 System.Boolean Valve.VR.CVRApplications::GetApplicationSupportedMimeTypes(System.String,System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetApplicationSupportedMimeTypes_m9E3AC458D80074113DB99FF36A211AC627E9B209 (void);
// 0x00000063 System.UInt32 Valve.VR.CVRApplications::GetApplicationsThatSupportMimeType(System.String,System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetApplicationsThatSupportMimeType_mC4FD1F2293634774380B68DF1BA8E0509CD366F2 (void);
// 0x00000064 System.UInt32 Valve.VR.CVRApplications::GetApplicationLaunchArguments(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetApplicationLaunchArguments_mE2927B6C482ECE35DA29056970A3BD0790C877F6 (void);
// 0x00000065 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::GetStartingApplication(System.Text.StringBuilder,System.UInt32)
extern void CVRApplications_GetStartingApplication_mADB17D2D1A61CEA148394B964FAE5B881E247C29 (void);
// 0x00000066 Valve.VR.EVRSceneApplicationState Valve.VR.CVRApplications::GetSceneApplicationState()
extern void CVRApplications_GetSceneApplicationState_m4175C1A35A06176AF73328E9CDAB5412E44B830B (void);
// 0x00000067 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::PerformApplicationPrelaunchCheck(System.String)
extern void CVRApplications_PerformApplicationPrelaunchCheck_mD5ACDF21AFF1CA58112D648FAD49E6DB0B683073 (void);
// 0x00000068 System.String Valve.VR.CVRApplications::GetSceneApplicationStateNameFromEnum(Valve.VR.EVRSceneApplicationState)
extern void CVRApplications_GetSceneApplicationStateNameFromEnum_m9F90E77631BA47C002CF48BE95A39A8BB11D5D08 (void);
// 0x00000069 Valve.VR.EVRApplicationError Valve.VR.CVRApplications::LaunchInternalProcess(System.String,System.String,System.String)
extern void CVRApplications_LaunchInternalProcess_m1A2A7D3AFB335A6E86F2E99599F16A8C282D5391 (void);
// 0x0000006A System.UInt32 Valve.VR.CVRApplications::GetCurrentSceneProcessId()
extern void CVRApplications_GetCurrentSceneProcessId_m850EB4BD17C1FF3D17C3783B2CD0519B5E8F943F (void);
// 0x0000006B System.Void Valve.VR.CVRChaperone::.ctor(System.IntPtr)
extern void CVRChaperone__ctor_mEB1D4CC6AA91E9F148C6B8CD00581F64A803CB9A (void);
// 0x0000006C Valve.VR.ChaperoneCalibrationState Valve.VR.CVRChaperone::GetCalibrationState()
extern void CVRChaperone_GetCalibrationState_mBFCD6C3A8068FC3FBDC9EB0E468C49F92BA33314 (void);
// 0x0000006D System.Boolean Valve.VR.CVRChaperone::GetPlayAreaSize(System.Single&,System.Single&)
extern void CVRChaperone_GetPlayAreaSize_mC7D9F992321A9A8EDFB39D20F77BDECC955CFC7F (void);
// 0x0000006E System.Boolean Valve.VR.CVRChaperone::GetPlayAreaRect(Valve.VR.HmdQuad_t&)
extern void CVRChaperone_GetPlayAreaRect_m693E15F42185A413880F2EB18D7688FA0E2BE423 (void);
// 0x0000006F System.Void Valve.VR.CVRChaperone::ReloadInfo()
extern void CVRChaperone_ReloadInfo_m12D74CD795F2D57F4B98F5AC250726B6DCADACFB (void);
// 0x00000070 System.Void Valve.VR.CVRChaperone::SetSceneColor(Valve.VR.HmdColor_t)
extern void CVRChaperone_SetSceneColor_mE8DE3212758F1C0AF23032A426FFB3637924583E (void);
// 0x00000071 System.Void Valve.VR.CVRChaperone::GetBoundsColor(Valve.VR.HmdColor_t&,System.Int32,System.Single,Valve.VR.HmdColor_t&)
extern void CVRChaperone_GetBoundsColor_m80AB40C3F2CD0BC7D3976D9BC585EC3E4E2659E3 (void);
// 0x00000072 System.Boolean Valve.VR.CVRChaperone::AreBoundsVisible()
extern void CVRChaperone_AreBoundsVisible_m28E079F0C15F08941ED58C33EB6B6E980967B240 (void);
// 0x00000073 System.Void Valve.VR.CVRChaperone::ForceBoundsVisible(System.Boolean)
extern void CVRChaperone_ForceBoundsVisible_mB14ADC3AF5368712018789227ABCC36331CCD971 (void);
// 0x00000074 System.Void Valve.VR.CVRChaperone::ResetZeroPose(Valve.VR.ETrackingUniverseOrigin)
extern void CVRChaperone_ResetZeroPose_mFF1DC3CECF6FB7DE7B4FDFD3957E8262633ECEB9 (void);
// 0x00000075 System.Void Valve.VR.CVRChaperoneSetup::.ctor(System.IntPtr)
extern void CVRChaperoneSetup__ctor_m812EEE54DF50320D260F397D3C39575332DE5DAF (void);
// 0x00000076 System.Boolean Valve.VR.CVRChaperoneSetup::CommitWorkingCopy(Valve.VR.EChaperoneConfigFile)
extern void CVRChaperoneSetup_CommitWorkingCopy_mD79F42CF913B0D308A6401369C41117E7386C3CA (void);
// 0x00000077 System.Void Valve.VR.CVRChaperoneSetup::RevertWorkingCopy()
extern void CVRChaperoneSetup_RevertWorkingCopy_mB53D55C8B48BDDA3097EA8366A73251D4820C516 (void);
// 0x00000078 System.Boolean Valve.VR.CVRChaperoneSetup::GetWorkingPlayAreaSize(System.Single&,System.Single&)
extern void CVRChaperoneSetup_GetWorkingPlayAreaSize_mE825DAD3AC8B327774C43406C6CB5D5541BD948B (void);
// 0x00000079 System.Boolean Valve.VR.CVRChaperoneSetup::GetWorkingPlayAreaRect(Valve.VR.HmdQuad_t&)
extern void CVRChaperoneSetup_GetWorkingPlayAreaRect_mC7B7AE179C2D773BA9AD812A0A568C3D3D98F9E3 (void);
// 0x0000007A System.Boolean Valve.VR.CVRChaperoneSetup::GetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[]&)
extern void CVRChaperoneSetup_GetWorkingCollisionBoundsInfo_m0FC000AC61652E21587B7F120CB04D079E0E13C8 (void);
// 0x0000007B System.Boolean Valve.VR.CVRChaperoneSetup::GetLiveCollisionBoundsInfo(Valve.VR.HmdQuad_t[]&)
extern void CVRChaperoneSetup_GetLiveCollisionBoundsInfo_mDF1DEF4E271E532A2F2ABA580FCC35822604D193 (void);
// 0x0000007C System.Boolean Valve.VR.CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t&)
extern void CVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose_m1E850681C417EC8AF204B90CD6417C3FCC343EA9 (void);
// 0x0000007D System.Boolean Valve.VR.CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t&)
extern void CVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose_m8F3BC9A85C6735E9C3033DF21F0AC38E12EDAB01 (void);
// 0x0000007E System.Void Valve.VR.CVRChaperoneSetup::SetWorkingPlayAreaSize(System.Single,System.Single)
extern void CVRChaperoneSetup_SetWorkingPlayAreaSize_mBE48414083E8638E05304C44929EC816449A9781 (void);
// 0x0000007F System.Void Valve.VR.CVRChaperoneSetup::SetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[])
extern void CVRChaperoneSetup_SetWorkingCollisionBoundsInfo_mCD38A8EE386AA7C62554768C32311A08BBF55776 (void);
// 0x00000080 System.Void Valve.VR.CVRChaperoneSetup::SetWorkingPerimeter(Valve.VR.HmdVector2_t[])
extern void CVRChaperoneSetup_SetWorkingPerimeter_m52359BB6972DEF564B0EF746CCCF33861A4D392F (void);
// 0x00000081 System.Void Valve.VR.CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t&)
extern void CVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose_m44F07206D4A6D034A041480D7B5AF8864C9E1D52 (void);
// 0x00000082 System.Void Valve.VR.CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t&)
extern void CVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose_mE0FE0D83112110422D64AC17F67096798E923A21 (void);
// 0x00000083 System.Void Valve.VR.CVRChaperoneSetup::ReloadFromDisk(Valve.VR.EChaperoneConfigFile)
extern void CVRChaperoneSetup_ReloadFromDisk_mFD3022FFB69FA3AB63B1BEF6D9E9882802744792 (void);
// 0x00000084 System.Boolean Valve.VR.CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t&)
extern void CVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose_mD28C4CA51D83268CDF7F57D714B6C69E587D886A (void);
// 0x00000085 System.Boolean Valve.VR.CVRChaperoneSetup::ExportLiveToBuffer(System.Text.StringBuilder,System.UInt32&)
extern void CVRChaperoneSetup_ExportLiveToBuffer_mEC43026C688937DCD78872CF91B339AD0D212E4F (void);
// 0x00000086 System.Boolean Valve.VR.CVRChaperoneSetup::ImportFromBufferToWorking(System.String,System.UInt32)
extern void CVRChaperoneSetup_ImportFromBufferToWorking_m2E12EC526FC50CD9E6DE37E1EC4A7C4073C6D521 (void);
// 0x00000087 System.Void Valve.VR.CVRChaperoneSetup::ShowWorkingSetPreview()
extern void CVRChaperoneSetup_ShowWorkingSetPreview_m33A9D2D5769E49CB266465E9890F3D50CF12B474 (void);
// 0x00000088 System.Void Valve.VR.CVRChaperoneSetup::HideWorkingSetPreview()
extern void CVRChaperoneSetup_HideWorkingSetPreview_m6A4042BDDB4DE57EFB8D96155CC5AA303C8D22F0 (void);
// 0x00000089 System.Void Valve.VR.CVRChaperoneSetup::RoomSetupStarting()
extern void CVRChaperoneSetup_RoomSetupStarting_m57DDA74B84F62E477613CA4AC946FB3C37A0E49E (void);
// 0x0000008A System.Void Valve.VR.CVRCompositor::.ctor(System.IntPtr)
extern void CVRCompositor__ctor_m5FAC08516E13A3DF1652ABFF161290B52CC5ED22 (void);
// 0x0000008B System.Void Valve.VR.CVRCompositor::SetTrackingSpace(Valve.VR.ETrackingUniverseOrigin)
extern void CVRCompositor_SetTrackingSpace_m25BF07407A92852D787ABA6B6380991C92BD0094 (void);
// 0x0000008C Valve.VR.ETrackingUniverseOrigin Valve.VR.CVRCompositor::GetTrackingSpace()
extern void CVRCompositor_GetTrackingSpace_mD8CE4300448DA53C5F6EC1D9F6D96271B2B93616 (void);
// 0x0000008D Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::WaitGetPoses(Valve.VR.TrackedDevicePose_t[],Valve.VR.TrackedDevicePose_t[])
extern void CVRCompositor_WaitGetPoses_mE138DF8727DB117BDC9DD4A1D9ACAE7434918BFB (void);
// 0x0000008E Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::GetLastPoses(Valve.VR.TrackedDevicePose_t[],Valve.VR.TrackedDevicePose_t[])
extern void CVRCompositor_GetLastPoses_m236D033E49CCFD67C47FC0A8679B70DCC215D720 (void);
// 0x0000008F Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::GetLastPoseForTrackedDeviceIndex(System.UInt32,Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&)
extern void CVRCompositor_GetLastPoseForTrackedDeviceIndex_mBB22EE8278EFA477FC440E25372A250CDB79B72A (void);
// 0x00000090 Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::Submit(Valve.VR.EVREye,Valve.VR.Texture_t&,Valve.VR.VRTextureBounds_t&,Valve.VR.EVRSubmitFlags)
extern void CVRCompositor_Submit_mBC62EB4B0B73C303B7F4203F86E7FC1254042E78 (void);
// 0x00000091 System.Void Valve.VR.CVRCompositor::ClearLastSubmittedFrame()
extern void CVRCompositor_ClearLastSubmittedFrame_mB1433A44512DE7D6878CC86DAEF11DDFA3F0E661 (void);
// 0x00000092 System.Void Valve.VR.CVRCompositor::PostPresentHandoff()
extern void CVRCompositor_PostPresentHandoff_m538D23EF57D509C139CB28EB768C940A84D323B8 (void);
// 0x00000093 System.Boolean Valve.VR.CVRCompositor::GetFrameTiming(Valve.VR.Compositor_FrameTiming&,System.UInt32)
extern void CVRCompositor_GetFrameTiming_m15D68C6643EB8763F9EB3784C3634467DEE86998 (void);
// 0x00000094 System.UInt32 Valve.VR.CVRCompositor::GetFrameTimings(Valve.VR.Compositor_FrameTiming[])
extern void CVRCompositor_GetFrameTimings_m9A8F20652E166877D35DC6B597273B2F46709426 (void);
// 0x00000095 System.Single Valve.VR.CVRCompositor::GetFrameTimeRemaining()
extern void CVRCompositor_GetFrameTimeRemaining_m6DF252F25C2BF0057798A6CEEDD95AB0F163772F (void);
// 0x00000096 System.Void Valve.VR.CVRCompositor::GetCumulativeStats(Valve.VR.Compositor_CumulativeStats&,System.UInt32)
extern void CVRCompositor_GetCumulativeStats_m7D14CAD741DF1FB10C3E4904085FE88C54F3D82E (void);
// 0x00000097 System.Void Valve.VR.CVRCompositor::FadeToColor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern void CVRCompositor_FadeToColor_mAE71DC4814F58340CB6D4E2EABF1D54A295065CD (void);
// 0x00000098 Valve.VR.HmdColor_t Valve.VR.CVRCompositor::GetCurrentFadeColor(System.Boolean)
extern void CVRCompositor_GetCurrentFadeColor_mD12C560842DD8BAC4B5BEEA0D2348DCA3BF4EB6B (void);
// 0x00000099 System.Void Valve.VR.CVRCompositor::FadeGrid(System.Single,System.Boolean)
extern void CVRCompositor_FadeGrid_m8032D7C24FD9CC44D24357F2F0646FE8AC4DCDFF (void);
// 0x0000009A System.Single Valve.VR.CVRCompositor::GetCurrentGridAlpha()
extern void CVRCompositor_GetCurrentGridAlpha_m8B1493BA54B71F170A65249BC31EF7F3F3012829 (void);
// 0x0000009B Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::SetSkyboxOverride(Valve.VR.Texture_t[])
extern void CVRCompositor_SetSkyboxOverride_m9D807C73DDE075749E495FCC8652E568316EB150 (void);
// 0x0000009C System.Void Valve.VR.CVRCompositor::ClearSkyboxOverride()
extern void CVRCompositor_ClearSkyboxOverride_mA2439568D8F2896FF68552C6B1216F16553DBAD7 (void);
// 0x0000009D System.Void Valve.VR.CVRCompositor::CompositorBringToFront()
extern void CVRCompositor_CompositorBringToFront_m318DA65C9699E5829D2BCDCCF7105DBA2A93484C (void);
// 0x0000009E System.Void Valve.VR.CVRCompositor::CompositorGoToBack()
extern void CVRCompositor_CompositorGoToBack_mA4DDDCE55C5BF25BEA99AF5945074F66BBF76CD3 (void);
// 0x0000009F System.Void Valve.VR.CVRCompositor::CompositorQuit()
extern void CVRCompositor_CompositorQuit_m077BBB14665CF9E7F1E9C2A2754474F5C287D80E (void);
// 0x000000A0 System.Boolean Valve.VR.CVRCompositor::IsFullscreen()
extern void CVRCompositor_IsFullscreen_mB6E79D65D7627B00FE98153F2C586A724049D5D8 (void);
// 0x000000A1 System.UInt32 Valve.VR.CVRCompositor::GetCurrentSceneFocusProcess()
extern void CVRCompositor_GetCurrentSceneFocusProcess_m9A2AD7C597A579C1C731A12A26CF7DEF4F2016B1 (void);
// 0x000000A2 System.UInt32 Valve.VR.CVRCompositor::GetLastFrameRenderer()
extern void CVRCompositor_GetLastFrameRenderer_mCAB3291B261C8C70D3AE08AA78F833EB85A493F2 (void);
// 0x000000A3 System.Boolean Valve.VR.CVRCompositor::CanRenderScene()
extern void CVRCompositor_CanRenderScene_m82ACFAE5E2BBB77E19321F862EAB25D081782F70 (void);
// 0x000000A4 System.Void Valve.VR.CVRCompositor::ShowMirrorWindow()
extern void CVRCompositor_ShowMirrorWindow_m82223EC06F9EC58B30E5C6D9CD0E2E0940199811 (void);
// 0x000000A5 System.Void Valve.VR.CVRCompositor::HideMirrorWindow()
extern void CVRCompositor_HideMirrorWindow_m06DBCBBCB7D3F92BD05BEA701FF28A86C67C4FAC (void);
// 0x000000A6 System.Boolean Valve.VR.CVRCompositor::IsMirrorWindowVisible()
extern void CVRCompositor_IsMirrorWindowVisible_mECF927E53CA09B35759BA44B687533B3773D6262 (void);
// 0x000000A7 System.Void Valve.VR.CVRCompositor::CompositorDumpImages()
extern void CVRCompositor_CompositorDumpImages_mDAF653F6285081389210ADC8FA3377A39594B96B (void);
// 0x000000A8 System.Boolean Valve.VR.CVRCompositor::ShouldAppRenderWithLowResources()
extern void CVRCompositor_ShouldAppRenderWithLowResources_m5890C0E88BA68B159653787233E8D6F334012F7C (void);
// 0x000000A9 System.Void Valve.VR.CVRCompositor::ForceInterleavedReprojectionOn(System.Boolean)
extern void CVRCompositor_ForceInterleavedReprojectionOn_mF1CBD22208E1CCECD503C32F51900465E0261BC2 (void);
// 0x000000AA System.Void Valve.VR.CVRCompositor::ForceReconnectProcess()
extern void CVRCompositor_ForceReconnectProcess_m286242E575E53170BFC8385C6DE3899D69A3E3FF (void);
// 0x000000AB System.Void Valve.VR.CVRCompositor::SuspendRendering(System.Boolean)
extern void CVRCompositor_SuspendRendering_mBD54CE4E3171186B72D8C9B79358BFE989979F9D (void);
// 0x000000AC Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::GetMirrorTextureD3D11(Valve.VR.EVREye,System.IntPtr,System.IntPtr&)
extern void CVRCompositor_GetMirrorTextureD3D11_mE89AF0C4C9722B8E3C358A99BFE8A926EED1202D (void);
// 0x000000AD System.Void Valve.VR.CVRCompositor::ReleaseMirrorTextureD3D11(System.IntPtr)
extern void CVRCompositor_ReleaseMirrorTextureD3D11_m170B2E7218D97789110D29CB0E270BA586A8004A (void);
// 0x000000AE Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::GetMirrorTextureGL(Valve.VR.EVREye,System.UInt32&,System.IntPtr)
extern void CVRCompositor_GetMirrorTextureGL_m0E73E0F9E40A437A0A5613E8E2C718E74CC048F0 (void);
// 0x000000AF System.Boolean Valve.VR.CVRCompositor::ReleaseSharedGLTexture(System.UInt32,System.IntPtr)
extern void CVRCompositor_ReleaseSharedGLTexture_mAECE7405168EF2196A98541A7B934C0F5BF87E9E (void);
// 0x000000B0 System.Void Valve.VR.CVRCompositor::LockGLSharedTextureForAccess(System.IntPtr)
extern void CVRCompositor_LockGLSharedTextureForAccess_mFE845EDC67C72F69881D5AFA0F843E05CFAB6088 (void);
// 0x000000B1 System.Void Valve.VR.CVRCompositor::UnlockGLSharedTextureForAccess(System.IntPtr)
extern void CVRCompositor_UnlockGLSharedTextureForAccess_m20792B101F00238F821217713D24FF3165E58655 (void);
// 0x000000B2 System.UInt32 Valve.VR.CVRCompositor::GetVulkanInstanceExtensionsRequired(System.Text.StringBuilder,System.UInt32)
extern void CVRCompositor_GetVulkanInstanceExtensionsRequired_mB1E2457B294C4A1638F5C9BC9956066EB3C6A62D (void);
// 0x000000B3 System.UInt32 Valve.VR.CVRCompositor::GetVulkanDeviceExtensionsRequired(System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void CVRCompositor_GetVulkanDeviceExtensionsRequired_m05A0C032C98356850A4DFB35D4EFB5DB13175FE2 (void);
// 0x000000B4 System.Void Valve.VR.CVRCompositor::SetExplicitTimingMode(Valve.VR.EVRCompositorTimingMode)
extern void CVRCompositor_SetExplicitTimingMode_mA30C1A9F5403D9E5E92C508A652DEF246B33D581 (void);
// 0x000000B5 Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::SubmitExplicitTimingData()
extern void CVRCompositor_SubmitExplicitTimingData_m9B49D53AB5529D671CCBD22F7121028894104797 (void);
// 0x000000B6 System.Boolean Valve.VR.CVRCompositor::IsMotionSmoothingEnabled()
extern void CVRCompositor_IsMotionSmoothingEnabled_m35005630B6AB8030B6D4EE795B593A16D3050BFD (void);
// 0x000000B7 System.Boolean Valve.VR.CVRCompositor::IsMotionSmoothingSupported()
extern void CVRCompositor_IsMotionSmoothingSupported_mC249E8ACAF3E28E3791E2532ED2EBC8CB1F81E2D (void);
// 0x000000B8 System.Boolean Valve.VR.CVRCompositor::IsCurrentSceneFocusAppLoading()
extern void CVRCompositor_IsCurrentSceneFocusAppLoading_m6573359B116CD4BC480E82ED390DAA0D3EF7E570 (void);
// 0x000000B9 Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::SetStageOverride_Async(System.String,Valve.VR.HmdMatrix34_t&,Valve.VR.Compositor_StageRenderSettings&,System.UInt32)
extern void CVRCompositor_SetStageOverride_Async_m299121512C78B96D76072B2049A882FB9C9D863C (void);
// 0x000000BA System.Void Valve.VR.CVRCompositor::ClearStageOverride()
extern void CVRCompositor_ClearStageOverride_mCDF7815144E75B8633D5200152F43C7156992430 (void);
// 0x000000BB System.Boolean Valve.VR.CVRCompositor::GetCompositorBenchmarkResults(Valve.VR.Compositor_BenchmarkResults&,System.UInt32)
extern void CVRCompositor_GetCompositorBenchmarkResults_m7971C47D8427444A1A7495C4CBBCAA17F9182764 (void);
// 0x000000BC Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::GetLastPosePredictionIDs(System.UInt32&,System.UInt32&)
extern void CVRCompositor_GetLastPosePredictionIDs_mC16CE21AB155F2EE0052BCC5FB54CC0C9C60F8D6 (void);
// 0x000000BD Valve.VR.EVRCompositorError Valve.VR.CVRCompositor::GetPosesForFrame(System.UInt32,Valve.VR.TrackedDevicePose_t[])
extern void CVRCompositor_GetPosesForFrame_m9C2B0A260F6FDD94B3F5361AC1E4ABD893C66B33 (void);
// 0x000000BE System.Void Valve.VR.CVROverlay::.ctor(System.IntPtr)
extern void CVROverlay__ctor_mB8515F79CC7DD8857A1266DABBDD0E500C2353E6 (void);
// 0x000000BF Valve.VR.EVROverlayError Valve.VR.CVROverlay::FindOverlay(System.String,System.UInt64&)
extern void CVROverlay_FindOverlay_m599A06CAA1A2D293BBAC6208331422FD6B93CDAE (void);
// 0x000000C0 Valve.VR.EVROverlayError Valve.VR.CVROverlay::CreateOverlay(System.String,System.String,System.UInt64&)
extern void CVROverlay_CreateOverlay_mD7168DF776EA620DF851807317EC68666522D5F4 (void);
// 0x000000C1 Valve.VR.EVROverlayError Valve.VR.CVROverlay::DestroyOverlay(System.UInt64)
extern void CVROverlay_DestroyOverlay_m389DB18EEA9B98697A092C713446D70D74C93086 (void);
// 0x000000C2 System.UInt32 Valve.VR.CVROverlay::GetOverlayKey(System.UInt64,System.Text.StringBuilder,System.UInt32,Valve.VR.EVROverlayError&)
extern void CVROverlay_GetOverlayKey_m1C563EB8323297EFF6A91B0AB6FB35FD9C91CDB7 (void);
// 0x000000C3 System.UInt32 Valve.VR.CVROverlay::GetOverlayName(System.UInt64,System.Text.StringBuilder,System.UInt32,Valve.VR.EVROverlayError&)
extern void CVROverlay_GetOverlayName_mC0669B135F5B836F81E52DFF1981E44B1A983132 (void);
// 0x000000C4 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayName(System.UInt64,System.String)
extern void CVROverlay_SetOverlayName_m7E96182324A17193E37C22C3F3BE42C5A33989C5 (void);
// 0x000000C5 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayImageData(System.UInt64,System.IntPtr,System.UInt32,System.UInt32&,System.UInt32&)
extern void CVROverlay_GetOverlayImageData_m0140BC6CA60F7ED597575DAA91B685CF4EB747E3 (void);
// 0x000000C6 System.String Valve.VR.CVROverlay::GetOverlayErrorNameFromEnum(Valve.VR.EVROverlayError)
extern void CVROverlay_GetOverlayErrorNameFromEnum_m21906D1EC1D6400B4844EBAF0AF7CE05596F1C83 (void);
// 0x000000C7 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayRenderingPid(System.UInt64,System.UInt32)
extern void CVROverlay_SetOverlayRenderingPid_mBB375CF912293B865C8F5E590E0DCF4EBAC8B50C (void);
// 0x000000C8 System.UInt32 Valve.VR.CVROverlay::GetOverlayRenderingPid(System.UInt64)
extern void CVROverlay_GetOverlayRenderingPid_m5AEED2F79EC33D41F86CEE647248266B0A758CF0 (void);
// 0x000000C9 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayFlag(System.UInt64,Valve.VR.VROverlayFlags,System.Boolean)
extern void CVROverlay_SetOverlayFlag_mE0B94F195931B9EDA23DF4DED409477FA752814D (void);
// 0x000000CA Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayFlag(System.UInt64,Valve.VR.VROverlayFlags,System.Boolean&)
extern void CVROverlay_GetOverlayFlag_m3E1512C427DCD4447604A8E9DA73E032F813BD79 (void);
// 0x000000CB Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayFlags(System.UInt64,System.UInt32&)
extern void CVROverlay_GetOverlayFlags_mD4B8A6841317A8F4FBB5D997212E9CA02DF1BA89 (void);
// 0x000000CC Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayColor(System.UInt64,System.Single,System.Single,System.Single)
extern void CVROverlay_SetOverlayColor_m1A1232BAB25B32AEA5D9806ED94D1AAB9E1F43B3 (void);
// 0x000000CD Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayColor(System.UInt64,System.Single&,System.Single&,System.Single&)
extern void CVROverlay_GetOverlayColor_m69E936A482F37C34B4C34D9C48AB7B09A3B49EC8 (void);
// 0x000000CE Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayAlpha(System.UInt64,System.Single)
extern void CVROverlay_SetOverlayAlpha_mBE57D6CECA6383F767F113379BE868BE04AE34A3 (void);
// 0x000000CF Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayAlpha(System.UInt64,System.Single&)
extern void CVROverlay_GetOverlayAlpha_mC44A9BAEC47829EE09214EF7EBA8BA47A9810973 (void);
// 0x000000D0 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTexelAspect(System.UInt64,System.Single)
extern void CVROverlay_SetOverlayTexelAspect_m227088E6B65DB26954528A97C9449622C5F99D3D (void);
// 0x000000D1 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTexelAspect(System.UInt64,System.Single&)
extern void CVROverlay_GetOverlayTexelAspect_m1B1956BDB726F01DDFBC378315B3A4FE379A5E26 (void);
// 0x000000D2 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlaySortOrder(System.UInt64,System.UInt32)
extern void CVROverlay_SetOverlaySortOrder_mE0C78FD436376568C07B3A81A0639F38D73D599C (void);
// 0x000000D3 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlaySortOrder(System.UInt64,System.UInt32&)
extern void CVROverlay_GetOverlaySortOrder_mD5FB25ABEDDE6AE9C007AE72297AB463FB62C391 (void);
// 0x000000D4 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayWidthInMeters(System.UInt64,System.Single)
extern void CVROverlay_SetOverlayWidthInMeters_m277C6E2B8E840BE4A30F8454B55E0D685525995C (void);
// 0x000000D5 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayWidthInMeters(System.UInt64,System.Single&)
extern void CVROverlay_GetOverlayWidthInMeters_m0379BBCCDCC95EF2E38C454D59D090D0CCA91285 (void);
// 0x000000D6 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayCurvature(System.UInt64,System.Single)
extern void CVROverlay_SetOverlayCurvature_m82C99F8A29ED2DCAD6B3680F85DC625B93C93EAA (void);
// 0x000000D7 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayCurvature(System.UInt64,System.Single&)
extern void CVROverlay_GetOverlayCurvature_m836DFD6CF1419BDE3D2F6571B06345D91C8FD7A6 (void);
// 0x000000D8 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTextureColorSpace(System.UInt64,Valve.VR.EColorSpace)
extern void CVROverlay_SetOverlayTextureColorSpace_m042FF1D91CA5FE02CC662DB2CD9985BDBD877A95 (void);
// 0x000000D9 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTextureColorSpace(System.UInt64,Valve.VR.EColorSpace&)
extern void CVROverlay_GetOverlayTextureColorSpace_m76B914A05A378F501C7F76DA34076EF214051568 (void);
// 0x000000DA Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTextureBounds(System.UInt64,Valve.VR.VRTextureBounds_t&)
extern void CVROverlay_SetOverlayTextureBounds_m0CCCCE8FBFCDCB8892CB0B90AEAB1EB348F5877A (void);
// 0x000000DB Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTextureBounds(System.UInt64,Valve.VR.VRTextureBounds_t&)
extern void CVROverlay_GetOverlayTextureBounds_m8F7015E29A7E7CF7AA0652F82E68983BBAD219CC (void);
// 0x000000DC Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTransformType(System.UInt64,Valve.VR.VROverlayTransformType&)
extern void CVROverlay_GetOverlayTransformType_m0A8EFAE63852C491FA28CA6C5A8699A0FB4BB622 (void);
// 0x000000DD Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTransformAbsolute(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_SetOverlayTransformAbsolute_m0EA37E53D61919D9DF1C3E8497B6576DE7FBA284 (void);
// 0x000000DE Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTransformAbsolute(System.UInt64,Valve.VR.ETrackingUniverseOrigin&,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_GetOverlayTransformAbsolute_mE3663E2BBF6E365A2CD9C6F8A9247A9F73447D1B (void);
// 0x000000DF Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTransformTrackedDeviceRelative(System.UInt64,System.UInt32,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_SetOverlayTransformTrackedDeviceRelative_m045921BE872D411D811B84CA5DA1E0244544AD5F (void);
// 0x000000E0 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTransformTrackedDeviceRelative(System.UInt64,System.UInt32&,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_GetOverlayTransformTrackedDeviceRelative_mE40DC9E8F5AFE6425316FC7C74805186D2F092DE (void);
// 0x000000E1 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTransformTrackedDeviceComponent(System.UInt64,System.UInt32,System.String)
extern void CVROverlay_SetOverlayTransformTrackedDeviceComponent_mC96AA19E738EA4AFF3B389188D17865C76291858 (void);
// 0x000000E2 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTransformTrackedDeviceComponent(System.UInt64,System.UInt32&,System.Text.StringBuilder,System.UInt32)
extern void CVROverlay_GetOverlayTransformTrackedDeviceComponent_mF071C30EA377D463A0CFBEFB67F1BD007A255B81 (void);
// 0x000000E3 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTransformOverlayRelative(System.UInt64,System.UInt64&,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_GetOverlayTransformOverlayRelative_m6F27B2D8A47BE4C9D0AAE5CC67D8A3DCEC8D9250 (void);
// 0x000000E4 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTransformOverlayRelative(System.UInt64,System.UInt64,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_SetOverlayTransformOverlayRelative_mC1D1B22B7ECB36756C71EB5467C777EF21AFD8E9 (void);
// 0x000000E5 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTransformCursor(System.UInt64,Valve.VR.HmdVector2_t&)
extern void CVROverlay_SetOverlayTransformCursor_mE10005C56C4B3C28A31877755CB40AABE43FEC19 (void);
// 0x000000E6 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTransformCursor(System.UInt64,Valve.VR.HmdVector2_t&)
extern void CVROverlay_GetOverlayTransformCursor_m7D960853FFF4014B4834A18A46E8F576BF3F5ABA (void);
// 0x000000E7 Valve.VR.EVROverlayError Valve.VR.CVROverlay::ShowOverlay(System.UInt64)
extern void CVROverlay_ShowOverlay_m6B3A7FAD0BDCDFBCB81C4677F7D5B81EA1B800D4 (void);
// 0x000000E8 Valve.VR.EVROverlayError Valve.VR.CVROverlay::HideOverlay(System.UInt64)
extern void CVROverlay_HideOverlay_m7856184C6459F2E9FCB300F59FEC8C9AE24E961D (void);
// 0x000000E9 System.Boolean Valve.VR.CVROverlay::IsOverlayVisible(System.UInt64)
extern void CVROverlay_IsOverlayVisible_mC4F787C6B0573C91753603E3FE242B7700964317 (void);
// 0x000000EA Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetTransformForOverlayCoordinates(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdVector2_t,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_GetTransformForOverlayCoordinates_mE1AC6F037D921587A6844D25522D43F55917053D (void);
// 0x000000EB System.Boolean Valve.VR.CVROverlay::PollNextOverlayEvent(System.UInt64,Valve.VR.VREvent_t&,System.UInt32)
extern void CVROverlay_PollNextOverlayEvent_mE18E3950A091A18ACF1FF6FDDE4ED467FE92570C (void);
// 0x000000EC Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayInputMethod(System.UInt64,Valve.VR.VROverlayInputMethod&)
extern void CVROverlay_GetOverlayInputMethod_m029ECA7AE8D685749C05361E2BE0661D88581466 (void);
// 0x000000ED Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayInputMethod(System.UInt64,Valve.VR.VROverlayInputMethod)
extern void CVROverlay_SetOverlayInputMethod_mDA08818A15930E4070AD70796D4F0F9B1114636D (void);
// 0x000000EE Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayMouseScale(System.UInt64,Valve.VR.HmdVector2_t&)
extern void CVROverlay_GetOverlayMouseScale_m767F573EEB2BFF05F09C204338DDDA03F18EF057 (void);
// 0x000000EF Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayMouseScale(System.UInt64,Valve.VR.HmdVector2_t&)
extern void CVROverlay_SetOverlayMouseScale_m0A4531B46046B7E4BEE87D0D52AF8084B8DF0CF5 (void);
// 0x000000F0 System.Boolean Valve.VR.CVROverlay::ComputeOverlayIntersection(System.UInt64,Valve.VR.VROverlayIntersectionParams_t&,Valve.VR.VROverlayIntersectionResults_t&)
extern void CVROverlay_ComputeOverlayIntersection_m4D0A35849B5A9BDC1F0B8BECBBC1A492F6EFB50E (void);
// 0x000000F1 System.Boolean Valve.VR.CVROverlay::IsHoverTargetOverlay(System.UInt64)
extern void CVROverlay_IsHoverTargetOverlay_m8B36952118842CB0E2ABA407EEF989C88DD54973 (void);
// 0x000000F2 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayIntersectionMask(System.UInt64,Valve.VR.VROverlayIntersectionMaskPrimitive_t&,System.UInt32,System.UInt32)
extern void CVROverlay_SetOverlayIntersectionMask_m4A3F610FC421184D22E73CDFE5B3146145816465 (void);
// 0x000000F3 Valve.VR.EVROverlayError Valve.VR.CVROverlay::TriggerLaserMouseHapticVibration(System.UInt64,System.Single,System.Single,System.Single)
extern void CVROverlay_TriggerLaserMouseHapticVibration_m280283981CE1CEE44613D87F166FD45FB62CFB3C (void);
// 0x000000F4 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayCursor(System.UInt64,System.UInt64)
extern void CVROverlay_SetOverlayCursor_mC679E24824D8980AE8A6EA4D2F7F6B34F91BF1B4 (void);
// 0x000000F5 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayCursorPositionOverride(System.UInt64,Valve.VR.HmdVector2_t&)
extern void CVROverlay_SetOverlayCursorPositionOverride_m3B36C3B0972BFB14C7DF38CF65AA9D553E7A0F59 (void);
// 0x000000F6 Valve.VR.EVROverlayError Valve.VR.CVROverlay::ClearOverlayCursorPositionOverride(System.UInt64)
extern void CVROverlay_ClearOverlayCursorPositionOverride_mE7482F451E5E82FB5BEAE47A839F2199C2371A3A (void);
// 0x000000F7 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayTexture(System.UInt64,Valve.VR.Texture_t&)
extern void CVROverlay_SetOverlayTexture_mB2FCE055DA5DD2D0788A39DEDC34DB0089214868 (void);
// 0x000000F8 Valve.VR.EVROverlayError Valve.VR.CVROverlay::ClearOverlayTexture(System.UInt64)
extern void CVROverlay_ClearOverlayTexture_m5463EAC9697D3A2D1586F88BD5C1DE099084A67F (void);
// 0x000000F9 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayRaw(System.UInt64,System.IntPtr,System.UInt32,System.UInt32,System.UInt32)
extern void CVROverlay_SetOverlayRaw_mB441B8369968D838EA3DB66666EF843AFF6B0692 (void);
// 0x000000FA Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetOverlayFromFile(System.UInt64,System.String)
extern void CVROverlay_SetOverlayFromFile_mC0753B4BB713CE3A544B334DB1A8617205B22F79 (void);
// 0x000000FB Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTexture(System.UInt64,System.IntPtr&,System.IntPtr,System.UInt32&,System.UInt32&,System.UInt32&,Valve.VR.ETextureType&,Valve.VR.EColorSpace&,Valve.VR.VRTextureBounds_t&)
extern void CVROverlay_GetOverlayTexture_m530C4F246AC094776BEDB1B70B9275B9813A9A0D (void);
// 0x000000FC Valve.VR.EVROverlayError Valve.VR.CVROverlay::ReleaseNativeOverlayHandle(System.UInt64,System.IntPtr)
extern void CVROverlay_ReleaseNativeOverlayHandle_mED794FB172081EBD1C249A47143636732EE8E4B3 (void);
// 0x000000FD Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetOverlayTextureSize(System.UInt64,System.UInt32&,System.UInt32&)
extern void CVROverlay_GetOverlayTextureSize_mC83C8EE7EBDC0AE9853CD5777B3F1ED50CA46B78 (void);
// 0x000000FE Valve.VR.EVROverlayError Valve.VR.CVROverlay::CreateDashboardOverlay(System.String,System.String,System.UInt64&,System.UInt64&)
extern void CVROverlay_CreateDashboardOverlay_mCE1773564493A56669595E6B34105CEA950A6E19 (void);
// 0x000000FF System.Boolean Valve.VR.CVROverlay::IsDashboardVisible()
extern void CVROverlay_IsDashboardVisible_m7643ED1DAE455ED7E48EBA3B50CF65E92819569F (void);
// 0x00000100 System.Boolean Valve.VR.CVROverlay::IsActiveDashboardOverlay(System.UInt64)
extern void CVROverlay_IsActiveDashboardOverlay_mF7ABCA4041217A36824016EF191259ACF57BFF8E (void);
// 0x00000101 Valve.VR.EVROverlayError Valve.VR.CVROverlay::SetDashboardOverlaySceneProcess(System.UInt64,System.UInt32)
extern void CVROverlay_SetDashboardOverlaySceneProcess_mB47A2F7095BEE57A0682E90FF64B2BF4B16E718E (void);
// 0x00000102 Valve.VR.EVROverlayError Valve.VR.CVROverlay::GetDashboardOverlaySceneProcess(System.UInt64,System.UInt32&)
extern void CVROverlay_GetDashboardOverlaySceneProcess_m0DBF8353997BB642A2B78AB087F646ED2B94B468 (void);
// 0x00000103 System.Void Valve.VR.CVROverlay::ShowDashboard(System.String)
extern void CVROverlay_ShowDashboard_mA217892207CB7D8480BE6B46B06F3ED985401CB4 (void);
// 0x00000104 System.UInt32 Valve.VR.CVROverlay::GetPrimaryDashboardDevice()
extern void CVROverlay_GetPrimaryDashboardDevice_m6C8D6406D49FE91950F06F3848C4BEEE8848AF0F (void);
// 0x00000105 Valve.VR.EVROverlayError Valve.VR.CVROverlay::ShowKeyboard(System.Int32,System.Int32,System.UInt32,System.String,System.UInt32,System.String,System.UInt64)
extern void CVROverlay_ShowKeyboard_mA80259F413D3728D47CA54070007EEDFA3EE1B09 (void);
// 0x00000106 Valve.VR.EVROverlayError Valve.VR.CVROverlay::ShowKeyboardForOverlay(System.UInt64,System.Int32,System.Int32,System.UInt32,System.String,System.UInt32,System.String,System.UInt64)
extern void CVROverlay_ShowKeyboardForOverlay_m5ADB581AD262ED53C971B2EE13DF338BB40EE6D3 (void);
// 0x00000107 System.UInt32 Valve.VR.CVROverlay::GetKeyboardText(System.Text.StringBuilder,System.UInt32)
extern void CVROverlay_GetKeyboardText_mC54026486AAE5AC69E5BEE0485772CA11D2BE387 (void);
// 0x00000108 System.Void Valve.VR.CVROverlay::HideKeyboard()
extern void CVROverlay_HideKeyboard_m07165FBC0BB505D23A9A3C49D49AB11E97CA2668 (void);
// 0x00000109 System.Void Valve.VR.CVROverlay::SetKeyboardTransformAbsolute(Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdMatrix34_t&)
extern void CVROverlay_SetKeyboardTransformAbsolute_mFA58505AFE5601F6C1EBC4707DC60C00E10D5F33 (void);
// 0x0000010A System.Void Valve.VR.CVROverlay::SetKeyboardPositionForOverlay(System.UInt64,Valve.VR.HmdRect2_t)
extern void CVROverlay_SetKeyboardPositionForOverlay_m7E5F9515664483B7B0113A57BA1D1A900FD1C5FC (void);
// 0x0000010B Valve.VR.VRMessageOverlayResponse Valve.VR.CVROverlay::ShowMessageOverlay(System.String,System.String,System.String,System.String,System.String,System.String)
extern void CVROverlay_ShowMessageOverlay_mF56684442812CA8E0AF24BF17D3D0040BF098810 (void);
// 0x0000010C System.Void Valve.VR.CVROverlay::CloseMessageOverlay()
extern void CVROverlay_CloseMessageOverlay_mEA874A6510F6818114D54879F9AF7B8B0674761F (void);
// 0x0000010D System.Void Valve.VR.CVROverlayView::.ctor(System.IntPtr)
extern void CVROverlayView__ctor_mEC9248E7B0B0BEB8C9C266DCFCC8844E75D41BC7 (void);
// 0x0000010E Valve.VR.EVROverlayError Valve.VR.CVROverlayView::AcquireOverlayView(System.UInt64,Valve.VR.VRNativeDevice_t&,Valve.VR.VROverlayView_t&,System.UInt32)
extern void CVROverlayView_AcquireOverlayView_m0BD1DF310B3E67D2714D343B5747E4296F2201A6 (void);
// 0x0000010F Valve.VR.EVROverlayError Valve.VR.CVROverlayView::ReleaseOverlayView(Valve.VR.VROverlayView_t&)
extern void CVROverlayView_ReleaseOverlayView_mFE71C67034CEC7D6E99F77116CC44B3A599099A6 (void);
// 0x00000110 System.Void Valve.VR.CVROverlayView::PostOverlayEvent(System.UInt64,Valve.VR.VREvent_t&)
extern void CVROverlayView_PostOverlayEvent_m944280A6D5827CA262DAE55C3F42C1064922522F (void);
// 0x00000111 System.Boolean Valve.VR.CVROverlayView::IsViewingPermitted(System.UInt64)
extern void CVROverlayView_IsViewingPermitted_mA248F8AD358923A144DB3E7C6A8ABCA495AF6B4F (void);
// 0x00000112 System.Void Valve.VR.CVRHeadsetView::.ctor(System.IntPtr)
extern void CVRHeadsetView__ctor_mDFDAB3B81F4BB8AA217444C9C608ADAB40AF21F4 (void);
// 0x00000113 System.Void Valve.VR.CVRHeadsetView::SetHeadsetViewSize(System.UInt32,System.UInt32)
extern void CVRHeadsetView_SetHeadsetViewSize_m960814E269C05BCA693FB46528C870B6DF1A463D (void);
// 0x00000114 System.Void Valve.VR.CVRHeadsetView::GetHeadsetViewSize(System.UInt32&,System.UInt32&)
extern void CVRHeadsetView_GetHeadsetViewSize_mB017717682A1E1A090415CFDD4845B394C43D44B (void);
// 0x00000115 System.Void Valve.VR.CVRHeadsetView::SetHeadsetViewMode(System.UInt32)
extern void CVRHeadsetView_SetHeadsetViewMode_mA92549FF870B41900BFFA072A3735DA968843246 (void);
// 0x00000116 System.UInt32 Valve.VR.CVRHeadsetView::GetHeadsetViewMode()
extern void CVRHeadsetView_GetHeadsetViewMode_m677735847C2F2B54F951E05CA943B5572F733D6D (void);
// 0x00000117 System.Void Valve.VR.CVRHeadsetView::SetHeadsetViewCropped(System.Boolean)
extern void CVRHeadsetView_SetHeadsetViewCropped_mA17F879A4A03E41B56864A3D8005DBA899D49D29 (void);
// 0x00000118 System.Boolean Valve.VR.CVRHeadsetView::GetHeadsetViewCropped()
extern void CVRHeadsetView_GetHeadsetViewCropped_mB4B79F9CF338852F351E2F523120A2A6A4B9A6C5 (void);
// 0x00000119 System.Single Valve.VR.CVRHeadsetView::GetHeadsetViewAspectRatio()
extern void CVRHeadsetView_GetHeadsetViewAspectRatio_m1E8B177B088E9349F99AD6124731F21D25EB2E62 (void);
// 0x0000011A System.Void Valve.VR.CVRHeadsetView::SetHeadsetViewBlendRange(System.Single,System.Single)
extern void CVRHeadsetView_SetHeadsetViewBlendRange_m9A4F0493F73B74FBE269A5E05F921C6DA1AD8B44 (void);
// 0x0000011B System.Void Valve.VR.CVRHeadsetView::GetHeadsetViewBlendRange(System.Single&,System.Single&)
extern void CVRHeadsetView_GetHeadsetViewBlendRange_mE7DA408DE6B728EB0FC6B839D3AD158737DBECD7 (void);
// 0x0000011C System.Void Valve.VR.CVRRenderModels::.ctor(System.IntPtr)
extern void CVRRenderModels__ctor_m3D6568AC7CA1F8606254DC4DA6005B7A45B6F332 (void);
// 0x0000011D Valve.VR.EVRRenderModelError Valve.VR.CVRRenderModels::LoadRenderModel_Async(System.String,System.IntPtr&)
extern void CVRRenderModels_LoadRenderModel_Async_mE1F55D75591AFC5296515CEDC40E1F821D6DA5A6 (void);
// 0x0000011E System.Void Valve.VR.CVRRenderModels::FreeRenderModel(System.IntPtr)
extern void CVRRenderModels_FreeRenderModel_m775D110B2691774D7D18415E6C8606206BAC2C89 (void);
// 0x0000011F Valve.VR.EVRRenderModelError Valve.VR.CVRRenderModels::LoadTexture_Async(System.Int32,System.IntPtr&)
extern void CVRRenderModels_LoadTexture_Async_mCCBC33D113F7FD978AD7B44CBBA2393EADC23720 (void);
// 0x00000120 System.Void Valve.VR.CVRRenderModels::FreeTexture(System.IntPtr)
extern void CVRRenderModels_FreeTexture_mEC3C83692F380BAD625BD81C45A712B11E9B4BD8 (void);
// 0x00000121 Valve.VR.EVRRenderModelError Valve.VR.CVRRenderModels::LoadTextureD3D11_Async(System.Int32,System.IntPtr,System.IntPtr&)
extern void CVRRenderModels_LoadTextureD3D11_Async_mB2271BCB4BEF69BEB88EEDC55563A52222FDCBFD (void);
// 0x00000122 Valve.VR.EVRRenderModelError Valve.VR.CVRRenderModels::LoadIntoTextureD3D11_Async(System.Int32,System.IntPtr)
extern void CVRRenderModels_LoadIntoTextureD3D11_Async_m8A7DA48CC24F189F25A61743FCFFF50713FD55AC (void);
// 0x00000123 System.Void Valve.VR.CVRRenderModels::FreeTextureD3D11(System.IntPtr)
extern void CVRRenderModels_FreeTextureD3D11_mFBF04F21EA2BB71FF3754EA315252189454B7FCF (void);
// 0x00000124 System.UInt32 Valve.VR.CVRRenderModels::GetRenderModelName(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void CVRRenderModels_GetRenderModelName_mF2B9D8068BABCE4DC964C7FD84D1C6E1A2B53224 (void);
// 0x00000125 System.UInt32 Valve.VR.CVRRenderModels::GetRenderModelCount()
extern void CVRRenderModels_GetRenderModelCount_m2D2724EB27D3C652C7747CCE8F2F57DA24A46F06 (void);
// 0x00000126 System.UInt32 Valve.VR.CVRRenderModels::GetComponentCount(System.String)
extern void CVRRenderModels_GetComponentCount_m51350209B57D73FF1E32C12FA2320EC03627582A (void);
// 0x00000127 System.UInt32 Valve.VR.CVRRenderModels::GetComponentName(System.String,System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void CVRRenderModels_GetComponentName_m39B0DF37F6A64746FEDFD197052A56A954E00589 (void);
// 0x00000128 System.UInt64 Valve.VR.CVRRenderModels::GetComponentButtonMask(System.String,System.String)
extern void CVRRenderModels_GetComponentButtonMask_m2C2BB4BF2B03185A0404BDC590506D37E0695E09 (void);
// 0x00000129 System.UInt32 Valve.VR.CVRRenderModels::GetComponentRenderModelName(System.String,System.String,System.Text.StringBuilder,System.UInt32)
extern void CVRRenderModels_GetComponentRenderModelName_m3BA521E4E962F5F57A2775FF6140F05E845FCACF (void);
// 0x0000012A System.Boolean Valve.VR.CVRRenderModels::GetComponentStateForDevicePath(System.String,System.String,System.UInt64,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&)
extern void CVRRenderModels_GetComponentStateForDevicePath_mDB8BB953501975DBF94EFF30C42FF3E25F2DED75 (void);
// 0x0000012B System.Boolean Valve.VR.CVRRenderModels::GetComponentState(System.String,System.String,Valve.VR.VRControllerState_t&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&)
extern void CVRRenderModels_GetComponentState_mAD3DF94786D0927D521EAB9855E7FAF3629BCC87 (void);
// 0x0000012C System.Boolean Valve.VR.CVRRenderModels::RenderModelHasComponent(System.String,System.String)
extern void CVRRenderModels_RenderModelHasComponent_m6B060981682F2362754C9AB8FD0A342BEA1DC71E (void);
// 0x0000012D System.UInt32 Valve.VR.CVRRenderModels::GetRenderModelThumbnailURL(System.String,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRRenderModelError&)
extern void CVRRenderModels_GetRenderModelThumbnailURL_m75A40908405536D10D6742551A704CB61F94CDD2 (void);
// 0x0000012E System.UInt32 Valve.VR.CVRRenderModels::GetRenderModelOriginalPath(System.String,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRRenderModelError&)
extern void CVRRenderModels_GetRenderModelOriginalPath_m45D846806A208C464137C0516F47F81C101DF2EB (void);
// 0x0000012F System.String Valve.VR.CVRRenderModels::GetRenderModelErrorNameFromEnum(Valve.VR.EVRRenderModelError)
extern void CVRRenderModels_GetRenderModelErrorNameFromEnum_m8EF80179A05C6E9776AA5E75DD877119874652EA (void);
// 0x00000130 System.Void Valve.VR.CVRNotifications::.ctor(System.IntPtr)
extern void CVRNotifications__ctor_m986A8FFB99902903663BFA1F4B42595B8D2B3AD9 (void);
// 0x00000131 Valve.VR.EVRNotificationError Valve.VR.CVRNotifications::CreateNotification(System.UInt64,System.UInt64,Valve.VR.EVRNotificationType,System.String,Valve.VR.EVRNotificationStyle,Valve.VR.NotificationBitmap_t&,System.UInt32&)
extern void CVRNotifications_CreateNotification_m34CB559361E0C222D75C74218D8DD8F67F8EDC76 (void);
// 0x00000132 Valve.VR.EVRNotificationError Valve.VR.CVRNotifications::RemoveNotification(System.UInt32)
extern void CVRNotifications_RemoveNotification_m7400324BEACB14343B5665B8ACA79415BE00F2E0 (void);
// 0x00000133 System.Void Valve.VR.CVRSettings::.ctor(System.IntPtr)
extern void CVRSettings__ctor_mE8D902E5648014112B2CACD5CA211953D1520FC6 (void);
// 0x00000134 System.String Valve.VR.CVRSettings::GetSettingsErrorNameFromEnum(Valve.VR.EVRSettingsError)
extern void CVRSettings_GetSettingsErrorNameFromEnum_m769A32F7EE33255DD46FB3F4F163241A47271C55 (void);
// 0x00000135 System.Void Valve.VR.CVRSettings::SetBool(System.String,System.String,System.Boolean,Valve.VR.EVRSettingsError&)
extern void CVRSettings_SetBool_mF313E403A2FCA386985E24FBEA26A2B4657BCA5B (void);
// 0x00000136 System.Void Valve.VR.CVRSettings::SetInt32(System.String,System.String,System.Int32,Valve.VR.EVRSettingsError&)
extern void CVRSettings_SetInt32_m1CC90282773B5EB4094B23E80210718EA4EDF3B9 (void);
// 0x00000137 System.Void Valve.VR.CVRSettings::SetFloat(System.String,System.String,System.Single,Valve.VR.EVRSettingsError&)
extern void CVRSettings_SetFloat_m43DBD665E382C39DD3CA29EB88D1E17D2065DCAD (void);
// 0x00000138 System.Void Valve.VR.CVRSettings::SetString(System.String,System.String,System.String,Valve.VR.EVRSettingsError&)
extern void CVRSettings_SetString_mC96E82952A136F1103EBE64EC48EBE18A71FFA45 (void);
// 0x00000139 System.Boolean Valve.VR.CVRSettings::GetBool(System.String,System.String,Valve.VR.EVRSettingsError&)
extern void CVRSettings_GetBool_m5AF6CA59E8F9C14B6B7D9002BAB7B1B874E003F3 (void);
// 0x0000013A System.Int32 Valve.VR.CVRSettings::GetInt32(System.String,System.String,Valve.VR.EVRSettingsError&)
extern void CVRSettings_GetInt32_m9C78C34611E2391F5666F77474309D398E7CDE96 (void);
// 0x0000013B System.Single Valve.VR.CVRSettings::GetFloat(System.String,System.String,Valve.VR.EVRSettingsError&)
extern void CVRSettings_GetFloat_m9FEF2DEC942AB29BA99DDAFD426538BB7A5F1427 (void);
// 0x0000013C System.Void Valve.VR.CVRSettings::GetString(System.String,System.String,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRSettingsError&)
extern void CVRSettings_GetString_m2C2BA0785D4EE74A0A530435D6E41CD36B4A5695 (void);
// 0x0000013D System.Void Valve.VR.CVRSettings::RemoveSection(System.String,Valve.VR.EVRSettingsError&)
extern void CVRSettings_RemoveSection_m0F61E10C9D3052A3CA6DBC09B0ADF7A4B15A6D40 (void);
// 0x0000013E System.Void Valve.VR.CVRSettings::RemoveKeyInSection(System.String,System.String,Valve.VR.EVRSettingsError&)
extern void CVRSettings_RemoveKeyInSection_mD08DE854E70CEC27E0B7ECB42789EA06DEE64901 (void);
// 0x0000013F System.Void Valve.VR.CVRScreenshots::.ctor(System.IntPtr)
extern void CVRScreenshots__ctor_mF7CA6E2049FE9E8F9EC2C0547EA9686F60C7CF00 (void);
// 0x00000140 Valve.VR.EVRScreenshotError Valve.VR.CVRScreenshots::RequestScreenshot(System.UInt32&,Valve.VR.EVRScreenshotType,System.String,System.String)
extern void CVRScreenshots_RequestScreenshot_mDD3B44BD2ED29D2FE3BEB9B742332305147FAB01 (void);
// 0x00000141 Valve.VR.EVRScreenshotError Valve.VR.CVRScreenshots::HookScreenshot(Valve.VR.EVRScreenshotType[])
extern void CVRScreenshots_HookScreenshot_m3BD811B1426A812F027AE3F40DB8036965572DDC (void);
// 0x00000142 Valve.VR.EVRScreenshotType Valve.VR.CVRScreenshots::GetScreenshotPropertyType(System.UInt32,Valve.VR.EVRScreenshotError&)
extern void CVRScreenshots_GetScreenshotPropertyType_mA58DD36582673515ADEEE7C49BBE7F192BB68E0C (void);
// 0x00000143 System.UInt32 Valve.VR.CVRScreenshots::GetScreenshotPropertyFilename(System.UInt32,Valve.VR.EVRScreenshotPropertyFilenames,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRScreenshotError&)
extern void CVRScreenshots_GetScreenshotPropertyFilename_m78EBC59A770064BAA068B688AB47771056DE8E04 (void);
// 0x00000144 Valve.VR.EVRScreenshotError Valve.VR.CVRScreenshots::UpdateScreenshotProgress(System.UInt32,System.Single)
extern void CVRScreenshots_UpdateScreenshotProgress_m483AC53A33B8A6C05ED621CC56205E011F6BCB2E (void);
// 0x00000145 Valve.VR.EVRScreenshotError Valve.VR.CVRScreenshots::TakeStereoScreenshot(System.UInt32&,System.String,System.String)
extern void CVRScreenshots_TakeStereoScreenshot_m855CB237762A8CF886FF2929B5983DB4F41B64B7 (void);
// 0x00000146 Valve.VR.EVRScreenshotError Valve.VR.CVRScreenshots::SubmitScreenshot(System.UInt32,Valve.VR.EVRScreenshotType,System.String,System.String)
extern void CVRScreenshots_SubmitScreenshot_mD8A3CFDE40FA5C2268708ADC120EFFCFF6E86A49 (void);
// 0x00000147 System.Void Valve.VR.CVRResources::.ctor(System.IntPtr)
extern void CVRResources__ctor_m25462F525F953100C8E64DAD763C3CE0A9A608D6 (void);
// 0x00000148 System.UInt32 Valve.VR.CVRResources::LoadSharedResource(System.String,System.String,System.UInt32)
extern void CVRResources_LoadSharedResource_m0812E3C6D9F0139C29B3D2CB1EC2C695D42599D9 (void);
// 0x00000149 System.UInt32 Valve.VR.CVRResources::GetResourceFullPath(System.String,System.String,System.Text.StringBuilder,System.UInt32)
extern void CVRResources_GetResourceFullPath_m3B66E36960277449974EC3F2BF47033A8FFD2A86 (void);
// 0x0000014A System.Void Valve.VR.CVRDriverManager::.ctor(System.IntPtr)
extern void CVRDriverManager__ctor_mA5FFFDA542D382F7542F130CC0058E0448242C0C (void);
// 0x0000014B System.UInt32 Valve.VR.CVRDriverManager::GetDriverCount()
extern void CVRDriverManager_GetDriverCount_mD2C146A78F7DAEF3ED75951F3EF27933463803EA (void);
// 0x0000014C System.UInt32 Valve.VR.CVRDriverManager::GetDriverName(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void CVRDriverManager_GetDriverName_m722A6EBDF488DE28852EA198806FE0A17A83A635 (void);
// 0x0000014D System.UInt64 Valve.VR.CVRDriverManager::GetDriverHandle(System.String)
extern void CVRDriverManager_GetDriverHandle_m002B45B4D019C1EF80EA851FEA5D068D3F38B224 (void);
// 0x0000014E System.Boolean Valve.VR.CVRDriverManager::IsEnabled(System.UInt32)
extern void CVRDriverManager_IsEnabled_m56E6462D51454FE004ECD61DA5979642C40A8659 (void);
// 0x0000014F System.Void Valve.VR.CVRInput::.ctor(System.IntPtr)
extern void CVRInput__ctor_mA455C821968662A0278C196EB0479885D2748455 (void);
// 0x00000150 Valve.VR.EVRInputError Valve.VR.CVRInput::SetActionManifestPath(System.String)
extern void CVRInput_SetActionManifestPath_mC1A5D1EB13EA40C1565F04F74C2F484974C18B91 (void);
// 0x00000151 Valve.VR.EVRInputError Valve.VR.CVRInput::GetActionSetHandle(System.String,System.UInt64&)
extern void CVRInput_GetActionSetHandle_m5AC9D624F35B6FC4028574D08EC40B7D2E8C0C5E (void);
// 0x00000152 Valve.VR.EVRInputError Valve.VR.CVRInput::GetActionHandle(System.String,System.UInt64&)
extern void CVRInput_GetActionHandle_mF3DB37B5ED5E47F0E024CB4CDA9CC952CFFABF36 (void);
// 0x00000153 Valve.VR.EVRInputError Valve.VR.CVRInput::GetInputSourceHandle(System.String,System.UInt64&)
extern void CVRInput_GetInputSourceHandle_mB6B9CCCA8DA0B9D4F9DA8510E93576D850D9B192 (void);
// 0x00000154 Valve.VR.EVRInputError Valve.VR.CVRInput::UpdateActionState(Valve.VR.VRActiveActionSet_t[],System.UInt32)
extern void CVRInput_UpdateActionState_mDBAA09FD7D60951BC6FA62ACACFE4E57CFAB2C7B (void);
// 0x00000155 Valve.VR.EVRInputError Valve.VR.CVRInput::GetDigitalActionData(System.UInt64,Valve.VR.InputDigitalActionData_t&,System.UInt32,System.UInt64)
extern void CVRInput_GetDigitalActionData_m28C971587E9BF5AE9D507A5DBB11C78C5A3181E3 (void);
// 0x00000156 Valve.VR.EVRInputError Valve.VR.CVRInput::GetAnalogActionData(System.UInt64,Valve.VR.InputAnalogActionData_t&,System.UInt32,System.UInt64)
extern void CVRInput_GetAnalogActionData_m3FEB4E2D5AE96E97C2D73EEED945E547AE36741A (void);
// 0x00000157 Valve.VR.EVRInputError Valve.VR.CVRInput::GetPoseActionDataRelativeToNow(System.UInt64,Valve.VR.ETrackingUniverseOrigin,System.Single,Valve.VR.InputPoseActionData_t&,System.UInt32,System.UInt64)
extern void CVRInput_GetPoseActionDataRelativeToNow_mBAEDD17710ECA793901F7A42DB84C84B5C3D5841 (void);
// 0x00000158 Valve.VR.EVRInputError Valve.VR.CVRInput::GetPoseActionDataForNextFrame(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.InputPoseActionData_t&,System.UInt32,System.UInt64)
extern void CVRInput_GetPoseActionDataForNextFrame_m2EA9535E25E060B4C24DB4947ABC493F1B0D0152 (void);
// 0x00000159 Valve.VR.EVRInputError Valve.VR.CVRInput::GetSkeletalActionData(System.UInt64,Valve.VR.InputSkeletalActionData_t&,System.UInt32)
extern void CVRInput_GetSkeletalActionData_mD08DD4FDBE1F6CCF87ACBB5DDC9B3C7C5FEA2BD9 (void);
// 0x0000015A Valve.VR.EVRInputError Valve.VR.CVRInput::GetDominantHand(Valve.VR.ETrackedControllerRole&)
extern void CVRInput_GetDominantHand_m9C0B4EEF21C0B22EE21BAC920C3C527B3CD806E6 (void);
// 0x0000015B Valve.VR.EVRInputError Valve.VR.CVRInput::SetDominantHand(Valve.VR.ETrackedControllerRole)
extern void CVRInput_SetDominantHand_mC9C6ADB1AAE6214A7C332E47A7A609E6D5115B2F (void);
// 0x0000015C Valve.VR.EVRInputError Valve.VR.CVRInput::GetBoneCount(System.UInt64,System.UInt32&)
extern void CVRInput_GetBoneCount_m8EB7B9FA9695F9D7D48ACE6C9FEBC27B0D0D6F7B (void);
// 0x0000015D Valve.VR.EVRInputError Valve.VR.CVRInput::GetBoneHierarchy(System.UInt64,System.Int32[])
extern void CVRInput_GetBoneHierarchy_mBDD91998A6017809EFA6B91E8F6DC726974D2E0D (void);
// 0x0000015E Valve.VR.EVRInputError Valve.VR.CVRInput::GetBoneName(System.UInt64,System.Int32,System.Text.StringBuilder,System.UInt32)
extern void CVRInput_GetBoneName_mBAE82D02F085E0B3DDCE21EA4BDCEB94A1A72297 (void);
// 0x0000015F Valve.VR.EVRInputError Valve.VR.CVRInput::GetSkeletalReferenceTransforms(System.UInt64,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.EVRSkeletalReferencePose,Valve.VR.VRBoneTransform_t[])
extern void CVRInput_GetSkeletalReferenceTransforms_m39DC7D8210062B9512F7CECF5F60E361C1D729AF (void);
// 0x00000160 Valve.VR.EVRInputError Valve.VR.CVRInput::GetSkeletalTrackingLevel(System.UInt64,Valve.VR.EVRSkeletalTrackingLevel&)
extern void CVRInput_GetSkeletalTrackingLevel_m47B8F2D722E0599DCFEA1E815F878C0A9439F6CC (void);
// 0x00000161 Valve.VR.EVRInputError Valve.VR.CVRInput::GetSkeletalBoneData(System.UInt64,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.EVRSkeletalMotionRange,Valve.VR.VRBoneTransform_t[])
extern void CVRInput_GetSkeletalBoneData_m3008E4A3FBB4A3C03948F1EC5C54FC314399F112 (void);
// 0x00000162 Valve.VR.EVRInputError Valve.VR.CVRInput::GetSkeletalSummaryData(System.UInt64,Valve.VR.EVRSummaryType,Valve.VR.VRSkeletalSummaryData_t&)
extern void CVRInput_GetSkeletalSummaryData_mF6F87A491E5F5A4C029BB33E77BCE55BC326D44C (void);
// 0x00000163 Valve.VR.EVRInputError Valve.VR.CVRInput::GetSkeletalBoneDataCompressed(System.UInt64,Valve.VR.EVRSkeletalMotionRange,System.IntPtr,System.UInt32,System.UInt32&)
extern void CVRInput_GetSkeletalBoneDataCompressed_mBB581771AD4927F6CD74B8FCB4441B5FD75467F7 (void);
// 0x00000164 Valve.VR.EVRInputError Valve.VR.CVRInput::DecompressSkeletalBoneData(System.IntPtr,System.UInt32,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.VRBoneTransform_t[])
extern void CVRInput_DecompressSkeletalBoneData_m1DE2687A22DDD239EBAF1F462FC619C8261B9A23 (void);
// 0x00000165 Valve.VR.EVRInputError Valve.VR.CVRInput::TriggerHapticVibrationAction(System.UInt64,System.Single,System.Single,System.Single,System.Single,System.UInt64)
extern void CVRInput_TriggerHapticVibrationAction_m889FF2B09BBB27A333C8D2AA759D5E8D7D280234 (void);
// 0x00000166 Valve.VR.EVRInputError Valve.VR.CVRInput::GetActionOrigins(System.UInt64,System.UInt64,System.UInt64[])
extern void CVRInput_GetActionOrigins_mF85347FEC2A81A859EA4CA8E8B88AB66413070FD (void);
// 0x00000167 Valve.VR.EVRInputError Valve.VR.CVRInput::GetOriginLocalizedName(System.UInt64,System.Text.StringBuilder,System.UInt32,System.Int32)
extern void CVRInput_GetOriginLocalizedName_mBA00DB64940FC32C5057C8AF2A1D65DF6DC68BFF (void);
// 0x00000168 Valve.VR.EVRInputError Valve.VR.CVRInput::GetOriginTrackedDeviceInfo(System.UInt64,Valve.VR.InputOriginInfo_t&,System.UInt32)
extern void CVRInput_GetOriginTrackedDeviceInfo_m0814AD2AE828ED9D5351D6D0B0F7F17674336030 (void);
// 0x00000169 Valve.VR.EVRInputError Valve.VR.CVRInput::GetActionBindingInfo(System.UInt64,Valve.VR.InputBindingInfo_t&,System.UInt32,System.UInt32,System.UInt32&)
extern void CVRInput_GetActionBindingInfo_m790F32A28918200BE5DE41B87738B421AFDBDC80 (void);
// 0x0000016A Valve.VR.EVRInputError Valve.VR.CVRInput::ShowActionOrigins(System.UInt64,System.UInt64)
extern void CVRInput_ShowActionOrigins_m8D16939A3028E32DC76BD24643C7366C3E96992B (void);
// 0x0000016B Valve.VR.EVRInputError Valve.VR.CVRInput::ShowBindingsForActionSet(Valve.VR.VRActiveActionSet_t[],System.UInt32,System.UInt64)
extern void CVRInput_ShowBindingsForActionSet_m7E3EC7E7E619E71F8BD7C8D3A1B4687F773E7F8F (void);
// 0x0000016C Valve.VR.EVRInputError Valve.VR.CVRInput::GetComponentStateForBinding(System.String,System.String,Valve.VR.InputBindingInfo_t&,System.UInt32,System.UInt32,Valve.VR.RenderModel_ComponentState_t&)
extern void CVRInput_GetComponentStateForBinding_m79CB7447B304702076BFF60F1025C9E28D36AA85 (void);
// 0x0000016D System.Boolean Valve.VR.CVRInput::IsUsingLegacyInput()
extern void CVRInput_IsUsingLegacyInput_m82470F1F200B02EBB4E51E35458A86E7F7B83371 (void);
// 0x0000016E Valve.VR.EVRInputError Valve.VR.CVRInput::OpenBindingUI(System.String,System.UInt64,System.UInt64,System.Boolean)
extern void CVRInput_OpenBindingUI_m5C8B898ECFF4007D238E80E9EA0E74E952CCFCF7 (void);
// 0x0000016F Valve.VR.EVRInputError Valve.VR.CVRInput::GetBindingVariant(System.UInt64,System.Text.StringBuilder,System.UInt32)
extern void CVRInput_GetBindingVariant_m3F7FFA30B0170676BB0830249FE7E7291AC7B3FD (void);
// 0x00000170 System.Void Valve.VR.CVRIOBuffer::.ctor(System.IntPtr)
extern void CVRIOBuffer__ctor_mAC5BCC8623AF01807BF1BF33CABACCE5F0B757E3 (void);
// 0x00000171 Valve.VR.EIOBufferError Valve.VR.CVRIOBuffer::Open(System.String,Valve.VR.EIOBufferMode,System.UInt32,System.UInt32,System.UInt64&)
extern void CVRIOBuffer_Open_mFE5CF686A72F257D74EB882481AD640EBE65B62D (void);
// 0x00000172 Valve.VR.EIOBufferError Valve.VR.CVRIOBuffer::Close(System.UInt64)
extern void CVRIOBuffer_Close_m661267536FC37D7A1599443E14DC9ACC7C797CA9 (void);
// 0x00000173 Valve.VR.EIOBufferError Valve.VR.CVRIOBuffer::Read(System.UInt64,System.IntPtr,System.UInt32,System.UInt32&)
extern void CVRIOBuffer_Read_m3A73322159BFF556F7072196AA3568970C841405 (void);
// 0x00000174 Valve.VR.EIOBufferError Valve.VR.CVRIOBuffer::Write(System.UInt64,System.IntPtr,System.UInt32)
extern void CVRIOBuffer_Write_m9CE7B082F594077BB21D6785349745E6E2D756A6 (void);
// 0x00000175 System.UInt64 Valve.VR.CVRIOBuffer::PropertyContainer(System.UInt64)
extern void CVRIOBuffer_PropertyContainer_mF83528C1AEDF973073A0D12FABCF4D43016B3AF6 (void);
// 0x00000176 System.Boolean Valve.VR.CVRIOBuffer::HasReaders(System.UInt64)
extern void CVRIOBuffer_HasReaders_mB7554CDB91B4388349CAB47E353A6D404A815D35 (void);
// 0x00000177 System.Void Valve.VR.CVRSpatialAnchors::.ctor(System.IntPtr)
extern void CVRSpatialAnchors__ctor_m8E63DC098E759C173F6E13E2F479E8C6B2C13315 (void);
// 0x00000178 Valve.VR.EVRSpatialAnchorError Valve.VR.CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor(System.String,System.UInt32&)
extern void CVRSpatialAnchors_CreateSpatialAnchorFromDescriptor_m80D6F0C3C0067978D4151992A37C41EC952088CA (void);
// 0x00000179 Valve.VR.EVRSpatialAnchorError Valve.VR.CVRSpatialAnchors::CreateSpatialAnchorFromPose(System.UInt32,Valve.VR.ETrackingUniverseOrigin,Valve.VR.SpatialAnchorPose_t&,System.UInt32&)
extern void CVRSpatialAnchors_CreateSpatialAnchorFromPose_mE176ECB3BC3591EB722E20B229DC9261B93F37A8 (void);
// 0x0000017A Valve.VR.EVRSpatialAnchorError Valve.VR.CVRSpatialAnchors::GetSpatialAnchorPose(System.UInt32,Valve.VR.ETrackingUniverseOrigin,Valve.VR.SpatialAnchorPose_t&)
extern void CVRSpatialAnchors_GetSpatialAnchorPose_m9D777FE706CE40AF20165C32E8034FD22FDC1DE6 (void);
// 0x0000017B Valve.VR.EVRSpatialAnchorError Valve.VR.CVRSpatialAnchors::GetSpatialAnchorDescriptor(System.UInt32,System.Text.StringBuilder,System.UInt32&)
extern void CVRSpatialAnchors_GetSpatialAnchorDescriptor_mBB0028CB8A9BABEEECEE9086F1728EBE2EBEA756 (void);
// 0x0000017C System.Void Valve.VR.CVRDebug::.ctor(System.IntPtr)
extern void CVRDebug__ctor_m51EF2513CAFBFC67B84BC14B6D33B764841E7657 (void);
// 0x0000017D Valve.VR.EVRDebugError Valve.VR.CVRDebug::EmitVrProfilerEvent(System.String)
extern void CVRDebug_EmitVrProfilerEvent_m71E3A1E77698239B5E922FA781C85350694F325B (void);
// 0x0000017E Valve.VR.EVRDebugError Valve.VR.CVRDebug::BeginVrProfilerEvent(System.UInt64&)
extern void CVRDebug_BeginVrProfilerEvent_mB76CACDB9B56405310CC56A2829014B165A8FC66 (void);
// 0x0000017F Valve.VR.EVRDebugError Valve.VR.CVRDebug::FinishVrProfilerEvent(System.UInt64,System.String)
extern void CVRDebug_FinishVrProfilerEvent_mEE23E131A71A701F8315A802E8C80AD459D7E89D (void);
// 0x00000180 System.UInt32 Valve.VR.CVRDebug::DriverDebugRequest(System.UInt32,System.String,System.Text.StringBuilder,System.UInt32)
extern void CVRDebug_DriverDebugRequest_mBA00168FC2BD7831BBBD2CAE5112616CDC995253 (void);
// 0x00000181 System.Void Valve.VR.CVRProperties::.ctor(System.IntPtr)
extern void CVRProperties__ctor_mB1D5567CFEA03E3DE55E9BDB9CC122066E3FFAAF (void);
// 0x00000182 Valve.VR.ETrackedPropertyError Valve.VR.CVRProperties::ReadPropertyBatch(System.UInt64,Valve.VR.PropertyRead_t&,System.UInt32)
extern void CVRProperties_ReadPropertyBatch_mC5D26EAFA21269701CD99B3F74D8AA72BFC413D9 (void);
// 0x00000183 Valve.VR.ETrackedPropertyError Valve.VR.CVRProperties::WritePropertyBatch(System.UInt64,Valve.VR.PropertyWrite_t&,System.UInt32)
extern void CVRProperties_WritePropertyBatch_mA83B529161F068EFA336C88B5A9BD65A906A7795 (void);
// 0x00000184 System.String Valve.VR.CVRProperties::GetPropErrorNameFromEnum(Valve.VR.ETrackedPropertyError)
extern void CVRProperties_GetPropErrorNameFromEnum_m600853AC49A7248C4658D3BC1D8D9A01FDB86A2A (void);
// 0x00000185 System.UInt64 Valve.VR.CVRProperties::TrackedDeviceToPropertyContainer(System.UInt32)
extern void CVRProperties_TrackedDeviceToPropertyContainer_mE147605766B75A7E55DF43CC459D097222204F40 (void);
// 0x00000186 System.Void Valve.VR.CVRPaths::.ctor(System.IntPtr)
extern void CVRPaths__ctor_m13676A8B913C09838E8B1A6DDB0E35693122FA93 (void);
// 0x00000187 Valve.VR.ETrackedPropertyError Valve.VR.CVRPaths::ReadPathBatch(System.UInt64,Valve.VR.PathRead_t&,System.UInt32)
extern void CVRPaths_ReadPathBatch_m8F8F2AAC109A9009DD9B9694C589561345EFA483 (void);
// 0x00000188 Valve.VR.ETrackedPropertyError Valve.VR.CVRPaths::WritePathBatch(System.UInt64,Valve.VR.PathWrite_t&,System.UInt32)
extern void CVRPaths_WritePathBatch_m630C5D4A234C0C20C058719BE1C238A73E164EC2 (void);
// 0x00000189 Valve.VR.ETrackedPropertyError Valve.VR.CVRPaths::StringToHandle(System.UInt64&,System.String)
extern void CVRPaths_StringToHandle_mEEB3688E5A25419390A1F495AF59B6579C953EAD (void);
// 0x0000018A Valve.VR.ETrackedPropertyError Valve.VR.CVRPaths::HandleToString(System.UInt64,System.String,System.UInt32,System.UInt32&)
extern void CVRPaths_HandleToString_mA66ADADECF0BEFB9C55F5EFE0F6205C8B2C309EC (void);
// 0x0000018B System.Void Valve.VR.CVRBlockQueue::.ctor(System.IntPtr)
extern void CVRBlockQueue__ctor_m2A206BE93905EC0EC696FEDDE89977595B26FC02 (void);
// 0x0000018C Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::Create(System.UInt64&,System.String,System.UInt32,System.UInt32,System.UInt32)
extern void CVRBlockQueue_Create_mACEB24379458AACBA44D1CA7D77E1FBBEACBA40F (void);
// 0x0000018D Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::Connect(System.UInt64&,System.String)
extern void CVRBlockQueue_Connect_m4721DBB0DCD5730562C79367A853E905C9586C03 (void);
// 0x0000018E Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::Destroy(System.UInt64)
extern void CVRBlockQueue_Destroy_m721D572F37DE5C8D2BF5EABE467A525630AD6E2D (void);
// 0x0000018F Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::AcquireWriteOnlyBlock(System.UInt64,System.UInt64&,System.IntPtr&)
extern void CVRBlockQueue_AcquireWriteOnlyBlock_m32CE939C2B35E5F40A6F7BD8055090A5A93501B1 (void);
// 0x00000190 Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::ReleaseWriteOnlyBlock(System.UInt64,System.UInt64)
extern void CVRBlockQueue_ReleaseWriteOnlyBlock_m859C162B008BD7B9FCC2A1B594049459AAFC9C0A (void);
// 0x00000191 Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::WaitAndAcquireReadOnlyBlock(System.UInt64,System.UInt64&,System.IntPtr&,Valve.VR.EBlockQueueReadType,System.UInt32)
extern void CVRBlockQueue_WaitAndAcquireReadOnlyBlock_m89E58FE10D9EF0855AC94720B41FFEA9725D170F (void);
// 0x00000192 Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::AcquireReadOnlyBlock(System.UInt64,System.UInt64&,System.IntPtr&,Valve.VR.EBlockQueueReadType)
extern void CVRBlockQueue_AcquireReadOnlyBlock_m0AD32FAB371E02F36ECB05D00B0A28712035140E (void);
// 0x00000193 Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::ReleaseReadOnlyBlock(System.UInt64,System.UInt64)
extern void CVRBlockQueue_ReleaseReadOnlyBlock_m777DBF7BECCE935936645D5CE6163C4871B52DED (void);
// 0x00000194 Valve.VR.EBlockQueueError Valve.VR.CVRBlockQueue::QueueHasReader(System.UInt64,System.Boolean&)
extern void CVRBlockQueue_QueueHasReader_mA42970D5EC7F6152681710D04837FCD1E3D148B9 (void);
// 0x00000195 System.UInt32 Valve.VR.OpenVRInterop::InitInternal(Valve.VR.EVRInitError&,Valve.VR.EVRApplicationType)
extern void OpenVRInterop_InitInternal_m915C3D01CF5204B8DCCBD85A5FA4220363B71A04 (void);
// 0x00000196 System.UInt32 Valve.VR.OpenVRInterop::InitInternal2(Valve.VR.EVRInitError&,Valve.VR.EVRApplicationType,System.String)
extern void OpenVRInterop_InitInternal2_mC287B0A418BC6E06511F9F221AC43D3A3FBA43F8 (void);
// 0x00000197 System.Void Valve.VR.OpenVRInterop::ShutdownInternal()
extern void OpenVRInterop_ShutdownInternal_mBFDE0FA70232BF22591F58E717B9E2857CDD0F1D (void);
// 0x00000198 System.Boolean Valve.VR.OpenVRInterop::IsHmdPresent()
extern void OpenVRInterop_IsHmdPresent_mE387B80B0F0E9039641736375A4755BED7765C74 (void);
// 0x00000199 System.Boolean Valve.VR.OpenVRInterop::IsRuntimeInstalled()
extern void OpenVRInterop_IsRuntimeInstalled_m4CDBF12F7A51A57CA531678308EA11AB8085257C (void);
// 0x0000019A System.String Valve.VR.OpenVRInterop::RuntimePath()
extern void OpenVRInterop_RuntimePath_m25D1D1DA79F7DFF6DBB8BB1B587840A6BD748540 (void);
// 0x0000019B System.Boolean Valve.VR.OpenVRInterop::GetRuntimePath(System.Text.StringBuilder,System.UInt32,System.UInt32&)
extern void OpenVRInterop_GetRuntimePath_m27183912B10CC1145E6BB1F5FF6CBE3A4ECC950E (void);
// 0x0000019C System.IntPtr Valve.VR.OpenVRInterop::GetStringForHmdError(Valve.VR.EVRInitError)
extern void OpenVRInterop_GetStringForHmdError_mA1A3A86C53F32CE5F3A1D943D597BDFAEF34936C (void);
// 0x0000019D System.IntPtr Valve.VR.OpenVRInterop::GetGenericInterface(System.String,Valve.VR.EVRInitError&)
extern void OpenVRInterop_GetGenericInterface_m8A4669013986D2F1386627BC9AD3DB06B19EAC7A (void);
// 0x0000019E System.Boolean Valve.VR.OpenVRInterop::IsInterfaceVersionValid(System.String)
extern void OpenVRInterop_IsInterfaceVersionValid_m70E1E5E161148353375189618F5EC3D400BD3542 (void);
// 0x0000019F System.UInt32 Valve.VR.OpenVRInterop::GetInitToken()
extern void OpenVRInterop_GetInitToken_m7C319DFE048E6143243FFD5FE0A92AFAD26086C4 (void);
// 0x000001A0 System.Void Valve.VR.OpenVRInterop::.ctor()
extern void OpenVRInterop__ctor_m0C82855E86DB2CB0A191C989E1FD0D7F4121BC63 (void);
// 0x000001A1 UnityEngine.Vector3 Valve.VR.HmdMatrix34_t::GetPosition()
extern void HmdMatrix34_t_GetPosition_mAAB6339034207A72B318AC783E2244B07D962AB6 (void);
// 0x000001A2 System.Boolean Valve.VR.HmdMatrix34_t::IsRotationValid()
extern void HmdMatrix34_t_IsRotationValid_m6A9C6BC2A4D1138D24A32663590300D319EEC6D9 (void);
// 0x000001A3 UnityEngine.Quaternion Valve.VR.HmdMatrix34_t::GetRotation()
extern void HmdMatrix34_t_GetRotation_mC38BF33EF009CC61DC1F5ABA90E548772DEEEF79 (void);
// 0x000001A4 System.Void Valve.VR.HmdMatrix34_t::_copysign(System.Single&,System.Single)
extern void HmdMatrix34_t__copysign_mAC041F9983236ECF0FC919C78716D28AFD3AFAF9 (void);
// 0x000001A5 System.String Valve.VR.VREvent_Keyboard_t::get_cNewInput()
extern void VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB (void);
// 0x000001A6 System.Void Valve.VR.VREvent_t_Packed::.ctor(Valve.VR.VREvent_t)
extern void VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA (void);
// 0x000001A7 System.Void Valve.VR.VREvent_t_Packed::Unpack(Valve.VR.VREvent_t&)
extern void VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57 (void);
// 0x000001A8 System.Void Valve.VR.VRControllerState_t_Packed::.ctor(Valve.VR.VRControllerState_t)
extern void VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C (void);
// 0x000001A9 System.Void Valve.VR.VRControllerState_t_Packed::Unpack(Valve.VR.VRControllerState_t&)
extern void VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B (void);
// 0x000001AA System.Void Valve.VR.RenderModel_TextureMap_t_Packed::.ctor(Valve.VR.RenderModel_TextureMap_t)
extern void RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA (void);
// 0x000001AB System.Void Valve.VR.RenderModel_TextureMap_t_Packed::Unpack(Valve.VR.RenderModel_TextureMap_t&)
extern void RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E (void);
// 0x000001AC System.Void Valve.VR.RenderModel_t_Packed::.ctor(Valve.VR.RenderModel_t)
extern void RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8 (void);
// 0x000001AD System.Void Valve.VR.RenderModel_t_Packed::Unpack(Valve.VR.RenderModel_t&)
extern void RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036 (void);
// 0x000001AE System.String Valve.VR.InputOriginInfo_t::get_rchRenderModelComponentName()
extern void InputOriginInfo_t_get_rchRenderModelComponentName_mD0E80E21A3391B748D801C757D386E53159AFC93 (void);
// 0x000001AF System.String Valve.VR.InputBindingInfo_t::get_rchDevicePathName()
extern void InputBindingInfo_t_get_rchDevicePathName_m7CCD66BC22B7864AB8C6D3A9FFA8138FF77403E9 (void);
// 0x000001B0 System.String Valve.VR.InputBindingInfo_t::get_rchInputPathName()
extern void InputBindingInfo_t_get_rchInputPathName_m701591073264DE94EED11ED8548BDF293C58D55D (void);
// 0x000001B1 System.String Valve.VR.InputBindingInfo_t::get_rchModeName()
extern void InputBindingInfo_t_get_rchModeName_m533AD53F39404722A176E5617BB5EED0465233A3 (void);
// 0x000001B2 System.String Valve.VR.InputBindingInfo_t::get_rchSlotName()
extern void InputBindingInfo_t_get_rchSlotName_mD39A9BCAD1352ABA8AB1E2E4D3849096478F5044 (void);
// 0x000001B3 System.String Valve.VR.InputBindingInfo_t::get_rchInputSourceType()
extern void InputBindingInfo_t_get_rchInputSourceType_m1B9791DA1D6711892CDB973103FD80648A9A57ED (void);
// 0x000001B4 System.UInt32 Valve.VR.OpenVR::InitInternal(Valve.VR.EVRInitError&,Valve.VR.EVRApplicationType)
extern void OpenVR_InitInternal_m860AB64589B7AFE0BDEE81A4DB3DD3C16A21413F (void);
// 0x000001B5 System.UInt32 Valve.VR.OpenVR::InitInternal2(Valve.VR.EVRInitError&,Valve.VR.EVRApplicationType,System.String)
extern void OpenVR_InitInternal2_m52BD06E21584586973E94C2C13101E571C07AC7F (void);
// 0x000001B6 System.Void Valve.VR.OpenVR::ShutdownInternal()
extern void OpenVR_ShutdownInternal_m14F9618ABA2254DEDC24052D9B2EB1D0D5561047 (void);
// 0x000001B7 System.Boolean Valve.VR.OpenVR::IsHmdPresent()
extern void OpenVR_IsHmdPresent_m1DD36E080A9355831BC80F9E9D438961541EE357 (void);
// 0x000001B8 System.Boolean Valve.VR.OpenVR::IsRuntimeInstalled()
extern void OpenVR_IsRuntimeInstalled_m25333E04DF045AF45E7DBCBCE20751A1785EDE8D (void);
// 0x000001B9 System.String Valve.VR.OpenVR::RuntimePath()
extern void OpenVR_RuntimePath_mF42B97D52D579C7ED03457E25914CE02326CC376 (void);
// 0x000001BA System.String Valve.VR.OpenVR::GetStringForHmdError(Valve.VR.EVRInitError)
extern void OpenVR_GetStringForHmdError_m89675FFC50CD88F609DF618925984302594045E9 (void);
// 0x000001BB System.IntPtr Valve.VR.OpenVR::GetGenericInterface(System.String,Valve.VR.EVRInitError&)
extern void OpenVR_GetGenericInterface_mC8BB00374381A8299A4C24A62499ACB39E95911D (void);
// 0x000001BC System.Boolean Valve.VR.OpenVR::IsInterfaceVersionValid(System.String)
extern void OpenVR_IsInterfaceVersionValid_mBF28E705B8B919587AD637167715989BE3ECD693 (void);
// 0x000001BD System.UInt32 Valve.VR.OpenVR::GetInitToken()
extern void OpenVR_GetInitToken_mA33A9A10B7627E695149ED69A42B80119CB9A66D (void);
// 0x000001BE System.UInt32 Valve.VR.OpenVR::get_VRToken()
extern void OpenVR_get_VRToken_mBCCA818FB9C3CD3F15DE5938EDB8548960A0FFD9 (void);
// 0x000001BF System.Void Valve.VR.OpenVR::set_VRToken(System.UInt32)
extern void OpenVR_set_VRToken_mF74A7FBF445B1D8851D1BB644B5CEC673AD1269F (void);
// 0x000001C0 Valve.VR.OpenVR/COpenVRContext Valve.VR.OpenVR::get_OpenVRInternal_ModuleContext()
extern void OpenVR_get_OpenVRInternal_ModuleContext_m3FA9FDB0BEA3BE90B132005604417AA59BC3E134 (void);
// 0x000001C1 Valve.VR.CVRSystem Valve.VR.OpenVR::get_System()
extern void OpenVR_get_System_mD6EEBD2924CD8EAA959F61DA26F30D7ACED06B7C (void);
// 0x000001C2 Valve.VR.CVRChaperone Valve.VR.OpenVR::get_Chaperone()
extern void OpenVR_get_Chaperone_m1409650FAA1FB6917BF9DEBBFD46DC42384DDAAF (void);
// 0x000001C3 Valve.VR.CVRChaperoneSetup Valve.VR.OpenVR::get_ChaperoneSetup()
extern void OpenVR_get_ChaperoneSetup_m7AB73F896B7498D7EB7DACFCCA5C0E2BD0AB1A15 (void);
// 0x000001C4 Valve.VR.CVRCompositor Valve.VR.OpenVR::get_Compositor()
extern void OpenVR_get_Compositor_m2FB93BF84700DFCE6493B5FCF0BFAD2B334A5444 (void);
// 0x000001C5 Valve.VR.CVRHeadsetView Valve.VR.OpenVR::get_HeadsetView()
extern void OpenVR_get_HeadsetView_mF11F346C999764BDE3FCA8B14A7DBA3FA868D7A9 (void);
// 0x000001C6 Valve.VR.CVROverlay Valve.VR.OpenVR::get_Overlay()
extern void OpenVR_get_Overlay_mCB578AE474115947293B4F132296C15457AFCAF5 (void);
// 0x000001C7 Valve.VR.CVROverlayView Valve.VR.OpenVR::get_OverlayView()
extern void OpenVR_get_OverlayView_mE7E200B3DC0B4255E46B92B688DAE82A8E0801BC (void);
// 0x000001C8 Valve.VR.CVRRenderModels Valve.VR.OpenVR::get_RenderModels()
extern void OpenVR_get_RenderModels_m6A9CA2E1B1790165D18F3A0DA96653551622E5DA (void);
// 0x000001C9 Valve.VR.CVRExtendedDisplay Valve.VR.OpenVR::get_ExtendedDisplay()
extern void OpenVR_get_ExtendedDisplay_m894158B695EFFF5020A89EEBBBED5462A6979D4E (void);
// 0x000001CA Valve.VR.CVRSettings Valve.VR.OpenVR::get_Settings()
extern void OpenVR_get_Settings_mDC736D1B142678ED696794470B8C4DFCC6475400 (void);
// 0x000001CB Valve.VR.CVRApplications Valve.VR.OpenVR::get_Applications()
extern void OpenVR_get_Applications_m3B3A771422932127705F7C0DB41290747DF7161C (void);
// 0x000001CC Valve.VR.CVRScreenshots Valve.VR.OpenVR::get_Screenshots()
extern void OpenVR_get_Screenshots_mA52CAE3566EF64A431C8D7F270CCB8936C937B72 (void);
// 0x000001CD Valve.VR.CVRTrackedCamera Valve.VR.OpenVR::get_TrackedCamera()
extern void OpenVR_get_TrackedCamera_mB97AE3584F804190F69630E9741C763E1ABFF6B3 (void);
// 0x000001CE Valve.VR.CVRInput Valve.VR.OpenVR::get_Input()
extern void OpenVR_get_Input_mF290A715AD07D4B7F8844AA79293934B7999CE04 (void);
// 0x000001CF Valve.VR.CVRIOBuffer Valve.VR.OpenVR::get_IOBuffer()
extern void OpenVR_get_IOBuffer_mD7357279C924044E0F405E95BD76DC658EF6FB88 (void);
// 0x000001D0 Valve.VR.CVRSpatialAnchors Valve.VR.OpenVR::get_SpatialAnchors()
extern void OpenVR_get_SpatialAnchors_m063C45D436CB4629F41E33176370213416B7E929 (void);
// 0x000001D1 Valve.VR.CVRNotifications Valve.VR.OpenVR::get_Notifications()
extern void OpenVR_get_Notifications_m1A1405095FBAE65159A516A5B265412B7E7EC6D2 (void);
// 0x000001D2 Valve.VR.CVRDebug Valve.VR.OpenVR::get_Debug()
extern void OpenVR_get_Debug_m0AAB7E869FC955BA293F29F2D8A7315BCBD84FC8 (void);
// 0x000001D3 Valve.VR.CVRSystem Valve.VR.OpenVR::Init(Valve.VR.EVRInitError&,Valve.VR.EVRApplicationType,System.String)
extern void OpenVR_Init_m967D524F384B2E39CEEB416B4E626D02DF03D0A1 (void);
// 0x000001D4 System.Void Valve.VR.OpenVR::Shutdown()
extern void OpenVR_Shutdown_mEEE2C766313F8F5D238929208930E04BE4620127 (void);
// 0x000001D5 System.Void Valve.VR.OpenVR::.ctor()
extern void OpenVR__ctor_m093C95C897F9C227CDAC6894395B04E02798556B (void);
// 0x000001D6 System.Void Valve.VR.OpenVR::.cctor()
extern void OpenVR__cctor_mE9E06C715E417C1D2F200E14DC93D1CD3519193A (void);
// 0x000001D7 System.Void Unity.XR.OpenVR.OpenVREvent::.ctor()
extern void OpenVREvent__ctor_mC28EBE09310BE3B883AF4625C73EA798FDD52B46 (void);
// 0x000001D8 System.Void Unity.XR.OpenVR.OpenVREvents::Initialize(System.Boolean)
extern void OpenVREvents_Initialize_m300E0C490D83CCF5D7FEA9401F0B8C7F9D1B20AC (void);
// 0x000001D9 System.Boolean Unity.XR.OpenVR.OpenVREvents::IsInitialized()
extern void OpenVREvents_IsInitialized_m605E4794FEB1719C2BC4754EA2E0EB1E080850DA (void);
// 0x000001DA System.Void Unity.XR.OpenVR.OpenVREvents::.ctor(System.Boolean)
extern void OpenVREvents__ctor_m86FB651C9D9B89DD766355B15A915BC1845D9833 (void);
// 0x000001DB System.Void Unity.XR.OpenVR.OpenVREvents::RegisterDefaultEvents()
extern void OpenVREvents_RegisterDefaultEvents_m2165EA8EA8B1222D4CFAE7A5AD71E70FF0F844ED (void);
// 0x000001DC System.Void Unity.XR.OpenVR.OpenVREvents::AddListener(Valve.VR.EVREventType,UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>,System.Boolean)
extern void OpenVREvents_AddListener_m12A0A9AF918844CBBEEFB6234A2CBEE395E4C7A9 (void);
// 0x000001DD System.Void Unity.XR.OpenVR.OpenVREvents::Add(Valve.VR.EVREventType,UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>,System.Boolean)
extern void OpenVREvents_Add_m8EF19355ACB11218D11A62EBC9867960136DE200 (void);
// 0x000001DE System.Void Unity.XR.OpenVR.OpenVREvents::RemoveListener(Valve.VR.EVREventType,UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>)
extern void OpenVREvents_RemoveListener_m46EA8F125728A7CFCE58AC683340700F3BC413D2 (void);
// 0x000001DF System.Void Unity.XR.OpenVR.OpenVREvents::Remove(Valve.VR.EVREventType,UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>)
extern void OpenVREvents_Remove_m7DC90F3979C2E6ED103E2B4B6A929B66FC484949 (void);
// 0x000001E0 System.Void Unity.XR.OpenVR.OpenVREvents::Update()
extern void OpenVREvents_Update_mEB9FD2D8C8DEB7BAD4ADBA02BC84EC9D0F804ED9 (void);
// 0x000001E1 System.Void Unity.XR.OpenVR.OpenVREvents::PollEvents()
extern void OpenVREvents_PollEvents_m11E5D0374D52806D5ED8CC5FF49DF74DC48421B6 (void);
// 0x000001E2 System.Void Unity.XR.OpenVR.OpenVREvents::On_VREvent_Quit(Valve.VR.VREvent_t)
extern void OpenVREvents_On_VREvent_Quit_mB7C8DBB4D82C559EE88FB9DAE34DA64956219F59 (void);
// 0x000001E3 System.Void Unity.XR.OpenVR.OpenVREvents::.cctor()
extern void OpenVREvents__cctor_m575664CFEA1295F564A937640D2119EEEB72275B (void);
// 0x000001E4 System.Boolean Unity.XR.OpenVR.OpenVRHelpers::IsUsingSteamVRInput()
extern void OpenVRHelpers_IsUsingSteamVRInput_m37FB3C3EDE0197208E50135FC30EC112F97A0B97 (void);
// 0x000001E5 System.Boolean Unity.XR.OpenVR.OpenVRHelpers::DoesTypeExist(System.String,System.Boolean)
extern void OpenVRHelpers_DoesTypeExist_m0E7401AE97FE08588563D32575A73F2910D3471E (void);
// 0x000001E6 System.Type Unity.XR.OpenVR.OpenVRHelpers::GetType(System.String,System.Boolean)
extern void OpenVRHelpers_GetType_mE4016FC4D93B1898FA441CFE1CD16FF96579AADD (void);
// 0x000001E7 System.String Unity.XR.OpenVR.OpenVRHelpers::GetActionManifestPathFromPlugin()
extern void OpenVRHelpers_GetActionManifestPathFromPlugin_m15C4072FCF3504BEABDDF4EB305287E72BA3CD9D (void);
// 0x000001E8 System.String Unity.XR.OpenVR.OpenVRHelpers::GetActionManifestNameFromPlugin()
extern void OpenVRHelpers_GetActionManifestNameFromPlugin_mF282426A044A09ACD3086C5CC27C5FC1CB5A4F87 (void);
// 0x000001E9 System.String Unity.XR.OpenVR.OpenVRHelpers::GetEditorAppKeyFromPlugin()
extern void OpenVRHelpers_GetEditorAppKeyFromPlugin_m8445355BFAAAFFA0BA983AEBBD2B08897E7EE6C8 (void);
// 0x000001EA System.Void Unity.XR.OpenVR.OpenVRHelpers::.ctor()
extern void OpenVRHelpers__ctor_m7EC38230DEF6A796436DB750CD94D413B75624AF (void);
// 0x000001EB UnityEngine.XR.XRDisplaySubsystem Unity.XR.OpenVR.OpenVRLoader::get_displaySubsystem()
extern void OpenVRLoader_get_displaySubsystem_m331A65FEFDACDEA4DA5E6C3EC84C9700E2F1DC0D (void);
// 0x000001EC UnityEngine.XR.XRInputSubsystem Unity.XR.OpenVR.OpenVRLoader::get_inputSubsystem()
extern void OpenVRLoader_get_inputSubsystem_mDB35FE04B4EF7E6E5542C7DC34C2AE30F9C29441 (void);
// 0x000001ED System.Boolean Unity.XR.OpenVR.OpenVRLoader::Initialize()
extern void OpenVRLoader_Initialize_m4B6C5F0F8FF49C2EE7792BFC1CB3AC25D8CADB3E (void);
// 0x000001EE System.String Unity.XR.OpenVR.OpenVRLoader::GetEscapedApplicationName()
extern void OpenVRLoader_GetEscapedApplicationName_m813CB7642D5A7F9E2905A1C46C84D9CF61BD35AF (void);
// 0x000001EF System.Void Unity.XR.OpenVR.OpenVRLoader::WatchForReload()
extern void OpenVRLoader_WatchForReload_m05447F2FE3639ECA80B84607ACDA678AEF6507C3 (void);
// 0x000001F0 System.Void Unity.XR.OpenVR.OpenVRLoader::CleanupReloadWatcher()
extern void OpenVRLoader_CleanupReloadWatcher_m5A759227FE5B9C85154008A015FB9AFA3F6D82A6 (void);
// 0x000001F1 System.Boolean Unity.XR.OpenVR.OpenVRLoader::Start()
extern void OpenVRLoader_Start_m89A3AB22445E04D273EF23788791945281A581D9 (void);
// 0x000001F2 System.Void Unity.XR.OpenVR.OpenVRLoader::SetupFileSystemWatchers()
extern void OpenVRLoader_SetupFileSystemWatchers_mE4F33754C6F3C449B6836E1B4CE61CF8B4DC2498 (void);
// 0x000001F3 System.Void Unity.XR.OpenVR.OpenVRLoader::SetupFileSystemWatcher()
extern void OpenVRLoader_SetupFileSystemWatcher_m375FA90918A0611EF2847AB0BF26407641BD662E (void);
// 0x000001F4 System.Void Unity.XR.OpenVR.OpenVRLoader::ManualFileWatcherLoop()
extern void OpenVRLoader_ManualFileWatcherLoop_mB828866E26170D19D78F7D2CE2FE88D65E6AB866 (void);
// 0x000001F5 System.Void Unity.XR.OpenVR.OpenVRLoader::DestroyMirrorModeWatcher()
extern void OpenVRLoader_DestroyMirrorModeWatcher_m70C7E5364DEF7ED23FB59C057F2B2CB3F9ACFF48 (void);
// 0x000001F6 System.Void Unity.XR.OpenVR.OpenVRLoader::OnChanged(System.Object,System.IO.FileSystemEventArgs)
extern void OpenVRLoader_OnChanged_m6DEC47D654C8E2A679F29C7AF10E2C7D0601ABE2 (void);
// 0x000001F7 System.Void Unity.XR.OpenVR.OpenVRLoader::ReadMirrorModeConfig()
extern void OpenVRLoader_ReadMirrorModeConfig_mA946FF0E37FD85B82D02914EFC599A9D9CC1FE70 (void);
// 0x000001F8 System.Boolean Unity.XR.OpenVR.OpenVRLoader::Stop()
extern void OpenVRLoader_Stop_mB66EA823443B09F726B05B17743103D5300FDD78 (void);
// 0x000001F9 System.Boolean Unity.XR.OpenVR.OpenVRLoader::Deinitialize()
extern void OpenVRLoader_Deinitialize_m4FC5E0C0B7695E96CCC5AA625C2251B4F278610E (void);
// 0x000001FA System.Void Unity.XR.OpenVR.OpenVRLoader::CleanupTick()
extern void OpenVRLoader_CleanupTick_mDDCC960BC8B6DD143268098D6892F65FFAF5C52F (void);
// 0x000001FB System.Void Unity.XR.OpenVR.OpenVRLoader::SetUserDefinedSettings(Unity.XR.OpenVR.OpenVRLoader/UserDefinedSettings)
extern void OpenVRLoader_SetUserDefinedSettings_m8F612D38202D2FB2576D08545B0543D52D12CEE7 (void);
// 0x000001FC Valve.VR.EVRInitError Unity.XR.OpenVR.OpenVRLoader::GetInitializationResult()
extern void OpenVRLoader_GetInitializationResult_m9F177D419298320FB29535A3396FB993CCD7B4A8 (void);
// 0x000001FD System.Void Unity.XR.OpenVR.OpenVRLoader::RegisterTickCallback(Unity.XR.OpenVR.OpenVRLoader/TickCallbackDelegate)
extern void OpenVRLoader_RegisterTickCallback_mD92BD358ECCC17CDB6ED49804D982637FCDEA155 (void);
// 0x000001FE System.Void Unity.XR.OpenVR.OpenVRLoader::TickCallback(System.Int32)
extern void OpenVRLoader_TickCallback_m2144F6BB6856DAD0BCAD5460F97F578F24A3B3C2 (void);
// 0x000001FF System.Void Unity.XR.OpenVR.OpenVRLoader::.ctor()
extern void OpenVRLoader__ctor_mEFB387F96350ADA82C2DD7C752D84D0F24E2D98E (void);
// 0x00000200 System.Void Unity.XR.OpenVR.OpenVRLoader::.cctor()
extern void OpenVRLoader__cctor_m7C6D93C626384E3975811E3C6E458C1FBD34028A (void);
// 0x00000201 System.String Unity.XR.OpenVR.OpenVRSettings::GetStreamingSteamVRPath(System.Boolean)
extern void OpenVRSettings_GetStreamingSteamVRPath_m9A1062F85B08A0A073C6C82078D968CDB411A17C (void);
// 0x00000202 System.Void Unity.XR.OpenVR.OpenVRSettings::CreateDirectory(System.IO.DirectoryInfo)
extern void OpenVRSettings_CreateDirectory_mB8FAEBC3E5A5E1F16841DC8C7ED17A16BF4CDFA2 (void);
// 0x00000203 System.UInt16 Unity.XR.OpenVR.OpenVRSettings::GetStereoRenderingMode()
extern void OpenVRSettings_GetStereoRenderingMode_m29E8E8513290C03A70004B083E33A9CE8882824B (void);
// 0x00000204 System.UInt16 Unity.XR.OpenVR.OpenVRSettings::GetInitializationType()
extern void OpenVRSettings_GetInitializationType_m28AD2708CB64A7A1CD7122BBBAC915409926DC41 (void);
// 0x00000205 Unity.XR.OpenVR.OpenVRSettings/MirrorViewModes Unity.XR.OpenVR.OpenVRSettings::GetMirrorViewMode()
extern void OpenVRSettings_GetMirrorViewMode_mC44DE0EE27621DD9332F686346F7921D53F7E8D3 (void);
// 0x00000206 System.Void Unity.XR.OpenVR.OpenVRSettings::SetMirrorViewMode(Unity.XR.OpenVR.OpenVRSettings/MirrorViewModes)
extern void OpenVRSettings_SetMirrorViewMode_m89BF283F61A7744576526A11746BF694093228E6 (void);
// 0x00000207 System.String Unity.XR.OpenVR.OpenVRSettings::GenerateEditorAppKey()
extern void OpenVRSettings_GenerateEditorAppKey_mF13B511C5C33BFEDCE0D817523993443508DFBAE (void);
// 0x00000208 System.String Unity.XR.OpenVR.OpenVRSettings::CleanProductName()
extern void OpenVRSettings_CleanProductName_mF7CFC17A7C470B983B9B4787A90D849704C567F2 (void);
// 0x00000209 Unity.XR.OpenVR.OpenVRSettings Unity.XR.OpenVR.OpenVRSettings::GetSettings(System.Boolean)
extern void OpenVRSettings_GetSettings_m0F324793971BDB12F9EEAD5A9E3D1CE28584AA96 (void);
// 0x0000020A System.Void Unity.XR.OpenVR.OpenVRSettings::SetMirrorViewMode(System.UInt16)
extern void OpenVRSettings_SetMirrorViewMode_mA6DC3340FB187C3F3EA570506BC64497F7E18BF8 (void);
// 0x0000020B System.Boolean Unity.XR.OpenVR.OpenVRSettings::InitializeActionManifestFileRelativeFilePath()
extern void OpenVRSettings_InitializeActionManifestFileRelativeFilePath_m72911C7A39E6BBDD20E3415ECDA2937A14CDCD5E (void);
// 0x0000020C System.Void Unity.XR.OpenVR.OpenVRSettings::Awake()
extern void OpenVRSettings_Awake_m5C50F25C13541B8BB97DA283B91477DF9625168A (void);
// 0x0000020D System.Void Unity.XR.OpenVR.OpenVRSettings::.ctor()
extern void OpenVRSettings__ctor_m424811DF21376988745EAC7F63A2B221E82EC452 (void);
// 0x0000020E System.Void Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize::.ctor(System.Object,System.IntPtr)
extern void _GetRecommendedRenderTargetSize__ctor_m11F47D59C7645C52A1896B361D94C5DBADDC66A5 (void);
// 0x0000020F System.Void Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize::Invoke(System.UInt32&,System.UInt32&)
extern void _GetRecommendedRenderTargetSize_Invoke_m53CDFF0575E15A7DE2BEA8952BCDBD791A475B20 (void);
// 0x00000210 System.IAsyncResult Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize::BeginInvoke(System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetRecommendedRenderTargetSize_BeginInvoke_m75DCD48C44A2E53DBC5B18A6F45353C3A2E27655 (void);
// 0x00000211 System.Void Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetRecommendedRenderTargetSize_EndInvoke_m78ABFDEC98ACE66FFE1E8BCC58F5CC73EC0A7364 (void);
// 0x00000212 System.Void Valve.VR.IVRSystem/_GetProjectionMatrix::.ctor(System.Object,System.IntPtr)
extern void _GetProjectionMatrix__ctor_m04BCA2E759D82300D5580A5130AC3C2EFB9671B9 (void);
// 0x00000213 Valve.VR.HmdMatrix44_t Valve.VR.IVRSystem/_GetProjectionMatrix::Invoke(Valve.VR.EVREye,System.Single,System.Single)
extern void _GetProjectionMatrix_Invoke_mA3473A34495462D991BBA436BBA67A97C4027CB3 (void);
// 0x00000214 System.IAsyncResult Valve.VR.IVRSystem/_GetProjectionMatrix::BeginInvoke(Valve.VR.EVREye,System.Single,System.Single,System.AsyncCallback,System.Object)
extern void _GetProjectionMatrix_BeginInvoke_m66F0C8F6E6A2F079815074DF762EFA3BF5CE98CA (void);
// 0x00000215 Valve.VR.HmdMatrix44_t Valve.VR.IVRSystem/_GetProjectionMatrix::EndInvoke(System.IAsyncResult)
extern void _GetProjectionMatrix_EndInvoke_mF621A3684D79E5D68FB804FF0D5CDE3A2862402A (void);
// 0x00000216 System.Void Valve.VR.IVRSystem/_GetProjectionRaw::.ctor(System.Object,System.IntPtr)
extern void _GetProjectionRaw__ctor_mB60C6B27019592F807DAA2F29D0B9FC350406842 (void);
// 0x00000217 System.Void Valve.VR.IVRSystem/_GetProjectionRaw::Invoke(Valve.VR.EVREye,System.Single&,System.Single&,System.Single&,System.Single&)
extern void _GetProjectionRaw_Invoke_mC95681905AE563D579FB971DA1D18E586A3246BA (void);
// 0x00000218 System.IAsyncResult Valve.VR.IVRSystem/_GetProjectionRaw::BeginInvoke(Valve.VR.EVREye,System.Single&,System.Single&,System.Single&,System.Single&,System.AsyncCallback,System.Object)
extern void _GetProjectionRaw_BeginInvoke_m523DF03E5125698DB55DC8861E97481467517F56 (void);
// 0x00000219 System.Void Valve.VR.IVRSystem/_GetProjectionRaw::EndInvoke(System.Single&,System.Single&,System.Single&,System.Single&,System.IAsyncResult)
extern void _GetProjectionRaw_EndInvoke_m71224F3C349590A3E601E84593307B935D760977 (void);
// 0x0000021A System.Void Valve.VR.IVRSystem/_ComputeDistortion::.ctor(System.Object,System.IntPtr)
extern void _ComputeDistortion__ctor_m794FAF4753ACAA52FF1B8FDA209FD97370FF7BB1 (void);
// 0x0000021B System.Boolean Valve.VR.IVRSystem/_ComputeDistortion::Invoke(Valve.VR.EVREye,System.Single,System.Single,Valve.VR.DistortionCoordinates_t&)
extern void _ComputeDistortion_Invoke_m35790368795AD03D0862AFDF51BABD6E60CC1EC2 (void);
// 0x0000021C System.IAsyncResult Valve.VR.IVRSystem/_ComputeDistortion::BeginInvoke(Valve.VR.EVREye,System.Single,System.Single,Valve.VR.DistortionCoordinates_t&,System.AsyncCallback,System.Object)
extern void _ComputeDistortion_BeginInvoke_m609942608A877E6D8853FF76818F16D5018FED54 (void);
// 0x0000021D System.Boolean Valve.VR.IVRSystem/_ComputeDistortion::EndInvoke(Valve.VR.DistortionCoordinates_t&,System.IAsyncResult)
extern void _ComputeDistortion_EndInvoke_mE49FFCFF181801EEF00D080CE3F0705C128AB401 (void);
// 0x0000021E System.Void Valve.VR.IVRSystem/_GetEyeToHeadTransform::.ctor(System.Object,System.IntPtr)
extern void _GetEyeToHeadTransform__ctor_mBBB95B4516378389ED81D39BA8A879E6D9A5C4A7 (void);
// 0x0000021F Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetEyeToHeadTransform::Invoke(Valve.VR.EVREye)
extern void _GetEyeToHeadTransform_Invoke_m3C91496C55669F2ECD65A754458E5C116792B0CF (void);
// 0x00000220 System.IAsyncResult Valve.VR.IVRSystem/_GetEyeToHeadTransform::BeginInvoke(Valve.VR.EVREye,System.AsyncCallback,System.Object)
extern void _GetEyeToHeadTransform_BeginInvoke_m86FB37988568795DCE30D017F25993C04B808AC0 (void);
// 0x00000221 Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetEyeToHeadTransform::EndInvoke(System.IAsyncResult)
extern void _GetEyeToHeadTransform_EndInvoke_mB81D93E521CEED7AA0653F0710162940C8A0DA64 (void);
// 0x00000222 System.Void Valve.VR.IVRSystem/_GetTimeSinceLastVsync::.ctor(System.Object,System.IntPtr)
extern void _GetTimeSinceLastVsync__ctor_m866C2D35D1B46EAD9B026C1591AB0FA4B56F7399 (void);
// 0x00000223 System.Boolean Valve.VR.IVRSystem/_GetTimeSinceLastVsync::Invoke(System.Single&,System.UInt64&)
extern void _GetTimeSinceLastVsync_Invoke_mA0B29C3F6EAAA6723DF1EF73B733666BB9C94E6F (void);
// 0x00000224 System.IAsyncResult Valve.VR.IVRSystem/_GetTimeSinceLastVsync::BeginInvoke(System.Single&,System.UInt64&,System.AsyncCallback,System.Object)
extern void _GetTimeSinceLastVsync_BeginInvoke_m2C9BAFEC19B336243FC45596369107A281DF2F1C (void);
// 0x00000225 System.Boolean Valve.VR.IVRSystem/_GetTimeSinceLastVsync::EndInvoke(System.Single&,System.UInt64&,System.IAsyncResult)
extern void _GetTimeSinceLastVsync_EndInvoke_m47F0F13BAB87F9A96557C10D3F3A4E482D11B8FE (void);
// 0x00000226 System.Void Valve.VR.IVRSystem/_GetD3D9AdapterIndex::.ctor(System.Object,System.IntPtr)
extern void _GetD3D9AdapterIndex__ctor_m0E8C8989AEC461B856E0F27B1FB6ED331F7A50FF (void);
// 0x00000227 System.Int32 Valve.VR.IVRSystem/_GetD3D9AdapterIndex::Invoke()
extern void _GetD3D9AdapterIndex_Invoke_m220DE83F58701B69FB24DF92855A7EBFD0455C37 (void);
// 0x00000228 System.IAsyncResult Valve.VR.IVRSystem/_GetD3D9AdapterIndex::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetD3D9AdapterIndex_BeginInvoke_m27791C4AF61135571CF49D76CEA4D7AE05CA56B8 (void);
// 0x00000229 System.Int32 Valve.VR.IVRSystem/_GetD3D9AdapterIndex::EndInvoke(System.IAsyncResult)
extern void _GetD3D9AdapterIndex_EndInvoke_m8B2015DA3042FCC8A87217811DBA7B0714A87553 (void);
// 0x0000022A System.Void Valve.VR.IVRSystem/_GetDXGIOutputInfo::.ctor(System.Object,System.IntPtr)
extern void _GetDXGIOutputInfo__ctor_mA7CF0997F9028A74AD8AA7A8B6A6C669F2308B31 (void);
// 0x0000022B System.Void Valve.VR.IVRSystem/_GetDXGIOutputInfo::Invoke(System.Int32&)
extern void _GetDXGIOutputInfo_Invoke_m209F84C1A24960F7AB209445779C84D738A7F6AD (void);
// 0x0000022C System.IAsyncResult Valve.VR.IVRSystem/_GetDXGIOutputInfo::BeginInvoke(System.Int32&,System.AsyncCallback,System.Object)
extern void _GetDXGIOutputInfo_BeginInvoke_mF92ADD0F243896DB9A2017BDEDAB0BDA5392C02C (void);
// 0x0000022D System.Void Valve.VR.IVRSystem/_GetDXGIOutputInfo::EndInvoke(System.Int32&,System.IAsyncResult)
extern void _GetDXGIOutputInfo_EndInvoke_mE49D722EB41CC6697888436216EDEBE30C9665E4 (void);
// 0x0000022E System.Void Valve.VR.IVRSystem/_GetOutputDevice::.ctor(System.Object,System.IntPtr)
extern void _GetOutputDevice__ctor_m58542C3AC4E240A9FABE8E4B3B2081DE5938F6B2 (void);
// 0x0000022F System.Void Valve.VR.IVRSystem/_GetOutputDevice::Invoke(System.UInt64&,Valve.VR.ETextureType,System.IntPtr)
extern void _GetOutputDevice_Invoke_mE4424AC63BDCD1E76BD6F52CC543A5EFC7ADE560 (void);
// 0x00000230 System.IAsyncResult Valve.VR.IVRSystem/_GetOutputDevice::BeginInvoke(System.UInt64&,Valve.VR.ETextureType,System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetOutputDevice_BeginInvoke_m2EB8B57B8E0B749CC7EDFA15D7EF5CBDF8DD2BFE (void);
// 0x00000231 System.Void Valve.VR.IVRSystem/_GetOutputDevice::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _GetOutputDevice_EndInvoke_m25A7E11DDB629EA662F764067AAAD818E735BAEF (void);
// 0x00000232 System.Void Valve.VR.IVRSystem/_IsDisplayOnDesktop::.ctor(System.Object,System.IntPtr)
extern void _IsDisplayOnDesktop__ctor_mB659AE268C2083EFAC0E86943836510D4C494EDD (void);
// 0x00000233 System.Boolean Valve.VR.IVRSystem/_IsDisplayOnDesktop::Invoke()
extern void _IsDisplayOnDesktop_Invoke_mB3315D4C3D43C2EE36A476E954B10C12E63D8B7F (void);
// 0x00000234 System.IAsyncResult Valve.VR.IVRSystem/_IsDisplayOnDesktop::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsDisplayOnDesktop_BeginInvoke_m8D862D9E77FF4DC6A3150DEFE0AFDD4EEAE1F36B (void);
// 0x00000235 System.Boolean Valve.VR.IVRSystem/_IsDisplayOnDesktop::EndInvoke(System.IAsyncResult)
extern void _IsDisplayOnDesktop_EndInvoke_m6A22F54D295D4F15C80A205248DEA5480CDEA05A (void);
// 0x00000236 System.Void Valve.VR.IVRSystem/_SetDisplayVisibility::.ctor(System.Object,System.IntPtr)
extern void _SetDisplayVisibility__ctor_mA576CC2742EB17435D6FDBEB671E374A1B00419B (void);
// 0x00000237 System.Boolean Valve.VR.IVRSystem/_SetDisplayVisibility::Invoke(System.Boolean)
extern void _SetDisplayVisibility_Invoke_m704B1EE72C8335A4DF2EF99E0DE48E0E2D56F43E (void);
// 0x00000238 System.IAsyncResult Valve.VR.IVRSystem/_SetDisplayVisibility::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void _SetDisplayVisibility_BeginInvoke_mB31165EAD1BB713CA3CAEEA7CFE632B2534C2D7B (void);
// 0x00000239 System.Boolean Valve.VR.IVRSystem/_SetDisplayVisibility::EndInvoke(System.IAsyncResult)
extern void _SetDisplayVisibility_EndInvoke_m712ED83BAB3A045C6C2C7A2F3640750B41290473 (void);
// 0x0000023A System.Void Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _GetDeviceToAbsoluteTrackingPose__ctor_m1793DE068FED13452D3D28BF8FAE23F0D94902AF (void);
// 0x0000023B System.Void Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose::Invoke(Valve.VR.ETrackingUniverseOrigin,System.Single,Valve.VR.TrackedDevicePose_t[],System.UInt32)
extern void _GetDeviceToAbsoluteTrackingPose_Invoke_mA5F9A17CB8250C3344C445379DB97BBF2165A6C8 (void);
// 0x0000023C System.IAsyncResult Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,System.Single,Valve.VR.TrackedDevicePose_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetDeviceToAbsoluteTrackingPose_BeginInvoke_m0D270C283A344284E7E853CCC565A79F1242385C (void);
// 0x0000023D System.Void Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
extern void _GetDeviceToAbsoluteTrackingPose_EndInvoke_m1BB26B0D9301DC04E1EBE38835DB55859953A876 (void);
// 0x0000023E System.Void Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _GetSeatedZeroPoseToStandingAbsoluteTrackingPose__ctor_mB85F2FBF8D1655D3D97803A4C92993F584F8FFCC (void);
// 0x0000023F Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke()
extern void _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m026A0EF5B969D2762FFB3135EE623A4FE53A27A8 (void);
// 0x00000240 System.IAsyncResult Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_m5F8DE9D30BA98E039F828AD30B4690047967C1AB (void);
// 0x00000241 Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
extern void _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_m3B60322EE444BB4416340150E250335F71A2267B (void);
// 0x00000242 System.Void Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _GetRawZeroPoseToStandingAbsoluteTrackingPose__ctor_mA98713CB9DDA1875B5B1F21B13957E1F8AFDED97 (void);
// 0x00000243 Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke()
extern void _GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m0DA91EFCC4A7585FD15EFEF31D990CC51BF92266 (void);
// 0x00000244 System.IAsyncResult Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetRawZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_mD2C5DE8DC5DEF3FE99660D77EB80CFE0048352B4 (void);
// 0x00000245 Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System.IAsyncResult)
extern void _GetRawZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_mCEA291EF482CF3972704B0A63633A406C4EC38AD (void);
// 0x00000246 System.Void Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::.ctor(System.Object,System.IntPtr)
extern void _GetSortedTrackedDeviceIndicesOfClass__ctor_mBDE145F84EA86DB5283EF4B11A3F58C816E5E59A (void);
// 0x00000247 System.UInt32 Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::Invoke(Valve.VR.ETrackedDeviceClass,System.UInt32[],System.UInt32,System.UInt32)
extern void _GetSortedTrackedDeviceIndicesOfClass_Invoke_m1E20EDF76B2ED78A9C3D589F425C8D723C6E1514 (void);
// 0x00000248 System.IAsyncResult Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke(Valve.VR.ETrackedDeviceClass,System.UInt32[],System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetSortedTrackedDeviceIndicesOfClass_BeginInvoke_mED0BF29F04EC74FCADCF14EBED9100EE33F266F2 (void);
// 0x00000249 System.UInt32 Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass::EndInvoke(System.IAsyncResult)
extern void _GetSortedTrackedDeviceIndicesOfClass_EndInvoke_m77DD5AB348AE62C907C677FA295B4A922BA0AB6D (void);
// 0x0000024A System.Void Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel::.ctor(System.Object,System.IntPtr)
extern void _GetTrackedDeviceActivityLevel__ctor_m049518CF857399A3C4A1E65A0F77C15390FA4308 (void);
// 0x0000024B Valve.VR.EDeviceActivityLevel Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel::Invoke(System.UInt32)
extern void _GetTrackedDeviceActivityLevel_Invoke_m683A3170910FE54C8D1BA0BC80E528DEE7194711 (void);
// 0x0000024C System.IAsyncResult Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _GetTrackedDeviceActivityLevel_BeginInvoke_m5758422355B50D1A19391E560AE7A9C4FB541B77 (void);
// 0x0000024D Valve.VR.EDeviceActivityLevel Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel::EndInvoke(System.IAsyncResult)
extern void _GetTrackedDeviceActivityLevel_EndInvoke_mD39F541AC2362D951456B8C71E7C2D6BE64AF06E (void);
// 0x0000024E System.Void Valve.VR.IVRSystem/_ApplyTransform::.ctor(System.Object,System.IntPtr)
extern void _ApplyTransform__ctor_m60A24F406469009C771B1B9D11E12018204C955F (void);
// 0x0000024F System.Void Valve.VR.IVRSystem/_ApplyTransform::Invoke(Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&,Valve.VR.HmdMatrix34_t&)
extern void _ApplyTransform_Invoke_mA55266FAA70AAA654A36F1C873A303C7CDE219D1 (void);
// 0x00000250 System.IAsyncResult Valve.VR.IVRSystem/_ApplyTransform::BeginInvoke(Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _ApplyTransform_BeginInvoke_m73EB3C67664AAA50F1EB363BF3B46428B5A6A890 (void);
// 0x00000251 System.Void Valve.VR.IVRSystem/_ApplyTransform::EndInvoke(Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&,Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _ApplyTransform_EndInvoke_mD0399387463986C2AED28D76BDF2243DF7C703E6 (void);
// 0x00000252 System.Void Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole::.ctor(System.Object,System.IntPtr)
extern void _GetTrackedDeviceIndexForControllerRole__ctor_mE8A5F6D0B1DD27D003B40B1239DA7681EA51477E (void);
// 0x00000253 System.UInt32 Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole::Invoke(Valve.VR.ETrackedControllerRole)
extern void _GetTrackedDeviceIndexForControllerRole_Invoke_mA042B8BBCE2D32E7F89C469B8FF8F40E0201DE8B (void);
// 0x00000254 System.IAsyncResult Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole::BeginInvoke(Valve.VR.ETrackedControllerRole,System.AsyncCallback,System.Object)
extern void _GetTrackedDeviceIndexForControllerRole_BeginInvoke_m3BECA8EF9A226549BD79876165D60AA003496ADD (void);
// 0x00000255 System.UInt32 Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole::EndInvoke(System.IAsyncResult)
extern void _GetTrackedDeviceIndexForControllerRole_EndInvoke_m249D791E934BE735225094E5629664B20AEFB003 (void);
// 0x00000256 System.Void Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex::.ctor(System.Object,System.IntPtr)
extern void _GetControllerRoleForTrackedDeviceIndex__ctor_mEBF09891756ED59CAE9DAAB4CEEEEF2392382BDF (void);
// 0x00000257 Valve.VR.ETrackedControllerRole Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex::Invoke(System.UInt32)
extern void _GetControllerRoleForTrackedDeviceIndex_Invoke_m44601E6681E54B44B538106E19FD5663B1F54805 (void);
// 0x00000258 System.IAsyncResult Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _GetControllerRoleForTrackedDeviceIndex_BeginInvoke_mD3EA6B0ECD2765FAFF8071CB66E6C9852B992385 (void);
// 0x00000259 Valve.VR.ETrackedControllerRole Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex::EndInvoke(System.IAsyncResult)
extern void _GetControllerRoleForTrackedDeviceIndex_EndInvoke_m6D38390A44C507487D8BFE1F96E14C5B0B197F36 (void);
// 0x0000025A System.Void Valve.VR.IVRSystem/_GetTrackedDeviceClass::.ctor(System.Object,System.IntPtr)
extern void _GetTrackedDeviceClass__ctor_mA534556EA6B3CB76532C3A7A57CF487545F29C19 (void);
// 0x0000025B Valve.VR.ETrackedDeviceClass Valve.VR.IVRSystem/_GetTrackedDeviceClass::Invoke(System.UInt32)
extern void _GetTrackedDeviceClass_Invoke_m0587912FDDE081A4652A530151739A9A9D7B8BA1 (void);
// 0x0000025C System.IAsyncResult Valve.VR.IVRSystem/_GetTrackedDeviceClass::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _GetTrackedDeviceClass_BeginInvoke_m489F21BD7228BBEBE0B5EB49F6B6315AD06D1E53 (void);
// 0x0000025D Valve.VR.ETrackedDeviceClass Valve.VR.IVRSystem/_GetTrackedDeviceClass::EndInvoke(System.IAsyncResult)
extern void _GetTrackedDeviceClass_EndInvoke_m94AEA6157711FDB6199E304979F55DC5F95EFA80 (void);
// 0x0000025E System.Void Valve.VR.IVRSystem/_IsTrackedDeviceConnected::.ctor(System.Object,System.IntPtr)
extern void _IsTrackedDeviceConnected__ctor_m9213AE41D4D0A052CAAD376877DBC2E51C484E09 (void);
// 0x0000025F System.Boolean Valve.VR.IVRSystem/_IsTrackedDeviceConnected::Invoke(System.UInt32)
extern void _IsTrackedDeviceConnected_Invoke_mBDAC04B1DCC4ACBA5B7FA4CEE78C9EDD9F33426C (void);
// 0x00000260 System.IAsyncResult Valve.VR.IVRSystem/_IsTrackedDeviceConnected::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _IsTrackedDeviceConnected_BeginInvoke_mD07B026F7861F6F92811965EAA6A99C9E6FB7603 (void);
// 0x00000261 System.Boolean Valve.VR.IVRSystem/_IsTrackedDeviceConnected::EndInvoke(System.IAsyncResult)
extern void _IsTrackedDeviceConnected_EndInvoke_mCDE5A5684F1293DE0CB50F10FA8DA20D67F6F07C (void);
// 0x00000262 System.Void Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetBoolTrackedDeviceProperty__ctor_mE9F771B0B1ED9D8E9B761B2231676CA9DBC3CD2C (void);
// 0x00000263 System.Boolean Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void _GetBoolTrackedDeviceProperty_Invoke_mC3155BC4A7531A2BCD1B47AAF3382875206EC470 (void);
// 0x00000264 System.IAsyncResult Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetBoolTrackedDeviceProperty_BeginInvoke_m5DDEF0CB4E53EAE37ED03F3584D1A4F54A676BE0 (void);
// 0x00000265 System.Boolean Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetBoolTrackedDeviceProperty_EndInvoke_m0AEE395E67D0EC3098C167E6A093865AD67FF700 (void);
// 0x00000266 System.Void Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetFloatTrackedDeviceProperty__ctor_m935D82EF2EDBF9A19C04DB054A309E062A4A3A8C (void);
// 0x00000267 System.Single Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void _GetFloatTrackedDeviceProperty_Invoke_mD413AEAF14A9E7CD7C2D3286EC2A218A387930C8 (void);
// 0x00000268 System.IAsyncResult Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetFloatTrackedDeviceProperty_BeginInvoke_m7CC561927C2528B90DD2BE83654311E010074B0B (void);
// 0x00000269 System.Single Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetFloatTrackedDeviceProperty_EndInvoke_m402BC314278CFD4FAFF4E945D1E59BE05FAC9FEE (void);
// 0x0000026A System.Void Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetInt32TrackedDeviceProperty__ctor_mB6A3F9222F8B9479C4317BD86D6D87982DA39E92 (void);
// 0x0000026B System.Int32 Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void _GetInt32TrackedDeviceProperty_Invoke_mF458AFF9D93C9662FBE87A1AF8BC492B29DCBF13 (void);
// 0x0000026C System.IAsyncResult Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetInt32TrackedDeviceProperty_BeginInvoke_mAAD5E772C6BDE58A6454E6C23860D585643C5F19 (void);
// 0x0000026D System.Int32 Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetInt32TrackedDeviceProperty_EndInvoke_mD731D9FDB2908D381E8A3E9F1B38F4DE83C4F35B (void);
// 0x0000026E System.Void Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetUint64TrackedDeviceProperty__ctor_mF54F167BD329A8071818DCAF4CB0712CE4C7733C (void);
// 0x0000026F System.UInt64 Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void _GetUint64TrackedDeviceProperty_Invoke_m6B266DD8A4BB59844C6835CC6C2035BC919C031E (void);
// 0x00000270 System.IAsyncResult Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetUint64TrackedDeviceProperty_BeginInvoke_m05ABFD6F9FBCBD73207A593A62DC43E2E3DDB3EA (void);
// 0x00000271 System.UInt64 Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetUint64TrackedDeviceProperty_EndInvoke_m2235F901E40ECF18D38D3A56670EFC50B6B57CF3 (void);
// 0x00000272 System.Void Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetMatrix34TrackedDeviceProperty__ctor_m0AC79E5C8D7971C0BEC142D09E3AB0DB5A244926 (void);
// 0x00000273 Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&)
extern void _GetMatrix34TrackedDeviceProperty_Invoke_mF54462882130A74DE4917DC614D9281FA469901F (void);
// 0x00000274 System.IAsyncResult Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetMatrix34TrackedDeviceProperty_BeginInvoke_m01254845A707135CA988CDA82164ED93BEBC8E16 (void);
// 0x00000275 Valve.VR.HmdMatrix34_t Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetMatrix34TrackedDeviceProperty_EndInvoke_mFD77FA21B5568F3B1E6ACD731F681B87531A5316 (void);
// 0x00000276 System.Void Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetArrayTrackedDeviceProperty__ctor_mC65F53377896B5BF2C89F1B22EC845D795AFBD85 (void);
// 0x00000277 System.UInt32 Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,System.UInt32,System.IntPtr,System.UInt32,Valve.VR.ETrackedPropertyError&)
extern void _GetArrayTrackedDeviceProperty_Invoke_m3B15B4E73C15C7B5EC35A68A9001F121A347F5E3 (void);
// 0x00000278 System.IAsyncResult Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,System.UInt32,System.IntPtr,System.UInt32,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetArrayTrackedDeviceProperty_BeginInvoke_m88426B688AD60C46088C0CC77F357A517E30F477 (void);
// 0x00000279 System.UInt32 Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetArrayTrackedDeviceProperty_EndInvoke_mD0CCEDA5C585AF0769AFC914FAEF771F82E2CC35 (void);
// 0x0000027A System.Void Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty::.ctor(System.Object,System.IntPtr)
extern void _GetStringTrackedDeviceProperty__ctor_m4ED987D2B5BBECB2FD4D96B706E195285C15043E (void);
// 0x0000027B System.UInt32 Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty::Invoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,Valve.VR.ETrackedPropertyError&)
extern void _GetStringTrackedDeviceProperty_Invoke_mF1B06DD986713F2F59E6CBC27AF0F5439C1F393F (void);
// 0x0000027C System.IAsyncResult Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty::BeginInvoke(System.UInt32,Valve.VR.ETrackedDeviceProperty,System.Text.StringBuilder,System.UInt32,Valve.VR.ETrackedPropertyError&,System.AsyncCallback,System.Object)
extern void _GetStringTrackedDeviceProperty_BeginInvoke_m0CAE08DF27A2F1B80DBE808514D329AAA8196D70 (void);
// 0x0000027D System.UInt32 Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty::EndInvoke(Valve.VR.ETrackedPropertyError&,System.IAsyncResult)
extern void _GetStringTrackedDeviceProperty_EndInvoke_m1681AB062EE9E642A52DC6DC69C731477B72FAC3 (void);
// 0x0000027E System.Void Valve.VR.IVRSystem/_GetPropErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetPropErrorNameFromEnum__ctor_mABDE17032C13D8DF13619CF540936254F712B008 (void);
// 0x0000027F System.IntPtr Valve.VR.IVRSystem/_GetPropErrorNameFromEnum::Invoke(Valve.VR.ETrackedPropertyError)
extern void _GetPropErrorNameFromEnum_Invoke_m980B18E65A1DB2822A29B9894FF46BA1BC18195E (void);
// 0x00000280 System.IAsyncResult Valve.VR.IVRSystem/_GetPropErrorNameFromEnum::BeginInvoke(Valve.VR.ETrackedPropertyError,System.AsyncCallback,System.Object)
extern void _GetPropErrorNameFromEnum_BeginInvoke_m04EE7783268F827B4A27A9642146F2F0D94FF2A3 (void);
// 0x00000281 System.IntPtr Valve.VR.IVRSystem/_GetPropErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetPropErrorNameFromEnum_EndInvoke_m86B09A116AD37822F8F77AEC55E0CFEEB51E42BF (void);
// 0x00000282 System.Void Valve.VR.IVRSystem/_PollNextEvent::.ctor(System.Object,System.IntPtr)
extern void _PollNextEvent__ctor_m519D0CE0E17D851B00BFE63869279B0D12B84ACB (void);
// 0x00000283 System.Boolean Valve.VR.IVRSystem/_PollNextEvent::Invoke(Valve.VR.VREvent_t&,System.UInt32)
extern void _PollNextEvent_Invoke_mFD634F982EAF818777CF7A055B7237817B544628 (void);
// 0x00000284 System.IAsyncResult Valve.VR.IVRSystem/_PollNextEvent::BeginInvoke(Valve.VR.VREvent_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _PollNextEvent_BeginInvoke_m30419A3CC225578A610946E0508BCEDE925621BC (void);
// 0x00000285 System.Boolean Valve.VR.IVRSystem/_PollNextEvent::EndInvoke(Valve.VR.VREvent_t&,System.IAsyncResult)
extern void _PollNextEvent_EndInvoke_m48B5DE23839C2437FC230D1FDAD08F69467F0AE8 (void);
// 0x00000286 System.Void Valve.VR.IVRSystem/_PollNextEventWithPose::.ctor(System.Object,System.IntPtr)
extern void _PollNextEventWithPose__ctor_mA3ACA274CA2DB25AEFDA30851D4E4ED63E488E27 (void);
// 0x00000287 System.Boolean Valve.VR.IVRSystem/_PollNextEventWithPose::Invoke(Valve.VR.ETrackingUniverseOrigin,Valve.VR.VREvent_t&,System.UInt32,Valve.VR.TrackedDevicePose_t&)
extern void _PollNextEventWithPose_Invoke_mFA2D48526CE35A3B80537719159D11244942D43B (void);
// 0x00000288 System.IAsyncResult Valve.VR.IVRSystem/_PollNextEventWithPose::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,Valve.VR.VREvent_t&,System.UInt32,Valve.VR.TrackedDevicePose_t&,System.AsyncCallback,System.Object)
extern void _PollNextEventWithPose_BeginInvoke_mA43083D1E3F8E714B8DE06124D49D42BAA1D620D (void);
// 0x00000289 System.Boolean Valve.VR.IVRSystem/_PollNextEventWithPose::EndInvoke(Valve.VR.VREvent_t&,Valve.VR.TrackedDevicePose_t&,System.IAsyncResult)
extern void _PollNextEventWithPose_EndInvoke_m2759DE1C3E78B8990F32459E554FF87460F8167D (void);
// 0x0000028A System.Void Valve.VR.IVRSystem/_GetEventTypeNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetEventTypeNameFromEnum__ctor_m6B42B277DACCCC2A47AA9563D6FF0105790B9A92 (void);
// 0x0000028B System.IntPtr Valve.VR.IVRSystem/_GetEventTypeNameFromEnum::Invoke(Valve.VR.EVREventType)
extern void _GetEventTypeNameFromEnum_Invoke_m9C6C0E78BCE61FE8B4B5983FFF1BD34CE19DC211 (void);
// 0x0000028C System.IAsyncResult Valve.VR.IVRSystem/_GetEventTypeNameFromEnum::BeginInvoke(Valve.VR.EVREventType,System.AsyncCallback,System.Object)
extern void _GetEventTypeNameFromEnum_BeginInvoke_m88AA994519D9F9CDC8BE52BC9BB5B847A6AB15FB (void);
// 0x0000028D System.IntPtr Valve.VR.IVRSystem/_GetEventTypeNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetEventTypeNameFromEnum_EndInvoke_m8BBAC930CE7E2AF1585CF5560235FEEA7BED92E0 (void);
// 0x0000028E System.Void Valve.VR.IVRSystem/_GetHiddenAreaMesh::.ctor(System.Object,System.IntPtr)
extern void _GetHiddenAreaMesh__ctor_m85783B5C580BC3C1845A747250CC866329B6E3A1 (void);
// 0x0000028F Valve.VR.HiddenAreaMesh_t Valve.VR.IVRSystem/_GetHiddenAreaMesh::Invoke(Valve.VR.EVREye,Valve.VR.EHiddenAreaMeshType)
extern void _GetHiddenAreaMesh_Invoke_mCA44C9DD262375D26525DC3CD0EFF0B4399C93B4 (void);
// 0x00000290 System.IAsyncResult Valve.VR.IVRSystem/_GetHiddenAreaMesh::BeginInvoke(Valve.VR.EVREye,Valve.VR.EHiddenAreaMeshType,System.AsyncCallback,System.Object)
extern void _GetHiddenAreaMesh_BeginInvoke_mFA90D2971DF6E9ECAC943BE2FEC737BF1447334F (void);
// 0x00000291 Valve.VR.HiddenAreaMesh_t Valve.VR.IVRSystem/_GetHiddenAreaMesh::EndInvoke(System.IAsyncResult)
extern void _GetHiddenAreaMesh_EndInvoke_mF0FDC9A58DDCE3B4600C012CD3E070616537164C (void);
// 0x00000292 System.Void Valve.VR.IVRSystem/_GetControllerState::.ctor(System.Object,System.IntPtr)
extern void _GetControllerState__ctor_m8B7BEAE44777B59C9C6EF287A82661524F3E4602 (void);
// 0x00000293 System.Boolean Valve.VR.IVRSystem/_GetControllerState::Invoke(System.UInt32,Valve.VR.VRControllerState_t&,System.UInt32)
extern void _GetControllerState_Invoke_mC49A05EE34529E9000B1DB13A44955FF58FCACB0 (void);
// 0x00000294 System.IAsyncResult Valve.VR.IVRSystem/_GetControllerState::BeginInvoke(System.UInt32,Valve.VR.VRControllerState_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetControllerState_BeginInvoke_mF2B30A48739192DA228EACFE3B3D7404A9AB5B22 (void);
// 0x00000295 System.Boolean Valve.VR.IVRSystem/_GetControllerState::EndInvoke(Valve.VR.VRControllerState_t&,System.IAsyncResult)
extern void _GetControllerState_EndInvoke_m6561207639D5B1A27231FD4FA1CB2A9E29D44904 (void);
// 0x00000296 System.Void Valve.VR.IVRSystem/_GetControllerStateWithPose::.ctor(System.Object,System.IntPtr)
extern void _GetControllerStateWithPose__ctor_mE136827560979DE1146A0515E4E4D88807374A29 (void);
// 0x00000297 System.Boolean Valve.VR.IVRSystem/_GetControllerStateWithPose::Invoke(Valve.VR.ETrackingUniverseOrigin,System.UInt32,Valve.VR.VRControllerState_t&,System.UInt32,Valve.VR.TrackedDevicePose_t&)
extern void _GetControllerStateWithPose_Invoke_m99A27D778ED22062C7D0DEC171FEB67D8266C6AA (void);
// 0x00000298 System.IAsyncResult Valve.VR.IVRSystem/_GetControllerStateWithPose::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,System.UInt32,Valve.VR.VRControllerState_t&,System.UInt32,Valve.VR.TrackedDevicePose_t&,System.AsyncCallback,System.Object)
extern void _GetControllerStateWithPose_BeginInvoke_mDA95DC005693A991B1803D8D848AA93CD25DA855 (void);
// 0x00000299 System.Boolean Valve.VR.IVRSystem/_GetControllerStateWithPose::EndInvoke(Valve.VR.VRControllerState_t&,Valve.VR.TrackedDevicePose_t&,System.IAsyncResult)
extern void _GetControllerStateWithPose_EndInvoke_mCB6083E2CE6ECAA8711A67B60752C831C427639C (void);
// 0x0000029A System.Void Valve.VR.IVRSystem/_TriggerHapticPulse::.ctor(System.Object,System.IntPtr)
extern void _TriggerHapticPulse__ctor_m64DF24CB793025727D9606535C495F39C39B72C6 (void);
// 0x0000029B System.Void Valve.VR.IVRSystem/_TriggerHapticPulse::Invoke(System.UInt32,System.UInt32,System.UInt16)
extern void _TriggerHapticPulse_Invoke_mEF483F162A74ED08652AB0DDBEC348881211CBB3 (void);
// 0x0000029C System.IAsyncResult Valve.VR.IVRSystem/_TriggerHapticPulse::BeginInvoke(System.UInt32,System.UInt32,System.UInt16,System.AsyncCallback,System.Object)
extern void _TriggerHapticPulse_BeginInvoke_mDC1FD3CD3AD896ED63B52B80A6BA6002D25DB3BF (void);
// 0x0000029D System.Void Valve.VR.IVRSystem/_TriggerHapticPulse::EndInvoke(System.IAsyncResult)
extern void _TriggerHapticPulse_EndInvoke_mF091BC36B7F678BBA86679AD07C410968D0E48BD (void);
// 0x0000029E System.Void Valve.VR.IVRSystem/_GetButtonIdNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetButtonIdNameFromEnum__ctor_m0D54AE72575A9DFCD2600EC5AD345A79DA2D96D7 (void);
// 0x0000029F System.IntPtr Valve.VR.IVRSystem/_GetButtonIdNameFromEnum::Invoke(Valve.VR.EVRButtonId)
extern void _GetButtonIdNameFromEnum_Invoke_mC7ED445AEE6182ADC096E831AFEE58D8D971C388 (void);
// 0x000002A0 System.IAsyncResult Valve.VR.IVRSystem/_GetButtonIdNameFromEnum::BeginInvoke(Valve.VR.EVRButtonId,System.AsyncCallback,System.Object)
extern void _GetButtonIdNameFromEnum_BeginInvoke_mFE4E91C3AA11267B8831599C54FFC546FE5E940B (void);
// 0x000002A1 System.IntPtr Valve.VR.IVRSystem/_GetButtonIdNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetButtonIdNameFromEnum_EndInvoke_mEEAA5DB06DF59151B320ECE5BA3779C1BA1823D3 (void);
// 0x000002A2 System.Void Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetControllerAxisTypeNameFromEnum__ctor_m94CC27F21F9511F6560130C103885A7EA8C49EF5 (void);
// 0x000002A3 System.IntPtr Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum::Invoke(Valve.VR.EVRControllerAxisType)
extern void _GetControllerAxisTypeNameFromEnum_Invoke_m19B53878CDBC2EC1453B96D8AC2C4C108B05DC3F (void);
// 0x000002A4 System.IAsyncResult Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum::BeginInvoke(Valve.VR.EVRControllerAxisType,System.AsyncCallback,System.Object)
extern void _GetControllerAxisTypeNameFromEnum_BeginInvoke_mBB885A2CC787202AD57F6A119D591C2ACB424F74 (void);
// 0x000002A5 System.IntPtr Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetControllerAxisTypeNameFromEnum_EndInvoke_mE25DB79D4B8DC39EC4FF512DE311391FBFA703C6 (void);
// 0x000002A6 System.Void Valve.VR.IVRSystem/_IsInputAvailable::.ctor(System.Object,System.IntPtr)
extern void _IsInputAvailable__ctor_mD3F4C57A19679B5E293CC29551742C1B1844D27F (void);
// 0x000002A7 System.Boolean Valve.VR.IVRSystem/_IsInputAvailable::Invoke()
extern void _IsInputAvailable_Invoke_m7769F5851380F3ACCB4C7AE2AECBADC629A0936F (void);
// 0x000002A8 System.IAsyncResult Valve.VR.IVRSystem/_IsInputAvailable::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsInputAvailable_BeginInvoke_m6EF1C7BE6758243EE525FC64FE0AD491C0F44C3C (void);
// 0x000002A9 System.Boolean Valve.VR.IVRSystem/_IsInputAvailable::EndInvoke(System.IAsyncResult)
extern void _IsInputAvailable_EndInvoke_m6DB2951C06F4770B60B1CEACA3E051BD01FA3B4F (void);
// 0x000002AA System.Void Valve.VR.IVRSystem/_IsSteamVRDrawingControllers::.ctor(System.Object,System.IntPtr)
extern void _IsSteamVRDrawingControllers__ctor_m2914F525630BAF785FA8A0208CE8867A259CCA85 (void);
// 0x000002AB System.Boolean Valve.VR.IVRSystem/_IsSteamVRDrawingControllers::Invoke()
extern void _IsSteamVRDrawingControllers_Invoke_m28E102456F36A2F65ED39D851A54DCDB197D9CCC (void);
// 0x000002AC System.IAsyncResult Valve.VR.IVRSystem/_IsSteamVRDrawingControllers::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsSteamVRDrawingControllers_BeginInvoke_mE858C9875E972F14639F7CD9F930E69A0D5D8455 (void);
// 0x000002AD System.Boolean Valve.VR.IVRSystem/_IsSteamVRDrawingControllers::EndInvoke(System.IAsyncResult)
extern void _IsSteamVRDrawingControllers_EndInvoke_m2CAF330D1FB707252244BE9ABF46DB74736B3DBE (void);
// 0x000002AE System.Void Valve.VR.IVRSystem/_ShouldApplicationPause::.ctor(System.Object,System.IntPtr)
extern void _ShouldApplicationPause__ctor_m60F7E637AB12DB44F3ED4B4D828DC3F2523EE600 (void);
// 0x000002AF System.Boolean Valve.VR.IVRSystem/_ShouldApplicationPause::Invoke()
extern void _ShouldApplicationPause_Invoke_m63926482AE112BB12E15E0DE10520C346D3D5BFE (void);
// 0x000002B0 System.IAsyncResult Valve.VR.IVRSystem/_ShouldApplicationPause::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ShouldApplicationPause_BeginInvoke_m76898066C357FC64F26D5143330D471186DC6102 (void);
// 0x000002B1 System.Boolean Valve.VR.IVRSystem/_ShouldApplicationPause::EndInvoke(System.IAsyncResult)
extern void _ShouldApplicationPause_EndInvoke_m8B1249CE2839B4715221BC62C7453E1CC2C901F8 (void);
// 0x000002B2 System.Void Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork::.ctor(System.Object,System.IntPtr)
extern void _ShouldApplicationReduceRenderingWork__ctor_m24F78F6C65BECAA16CE0648D343A582BE5FA4AF6 (void);
// 0x000002B3 System.Boolean Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork::Invoke()
extern void _ShouldApplicationReduceRenderingWork_Invoke_m4FEA3FD5DD2CA174AD795BABB981F26916B35920 (void);
// 0x000002B4 System.IAsyncResult Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ShouldApplicationReduceRenderingWork_BeginInvoke_m73FDEB059077333A02E5E919315A98AEDD20EC99 (void);
// 0x000002B5 System.Boolean Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork::EndInvoke(System.IAsyncResult)
extern void _ShouldApplicationReduceRenderingWork_EndInvoke_m22905356BFAE092E85F1941B6B4B6E371AD3880B (void);
// 0x000002B6 System.Void Valve.VR.IVRSystem/_PerformFirmwareUpdate::.ctor(System.Object,System.IntPtr)
extern void _PerformFirmwareUpdate__ctor_mC78DE85F0FC66689A97DD95F7855483AC25CFFC0 (void);
// 0x000002B7 Valve.VR.EVRFirmwareError Valve.VR.IVRSystem/_PerformFirmwareUpdate::Invoke(System.UInt32)
extern void _PerformFirmwareUpdate_Invoke_m733FE67049584B7B937D9C18B3200BCBE357F810 (void);
// 0x000002B8 System.IAsyncResult Valve.VR.IVRSystem/_PerformFirmwareUpdate::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _PerformFirmwareUpdate_BeginInvoke_m54ECB33A1CC9CF6FD7D527DA202992C6048BCBC8 (void);
// 0x000002B9 Valve.VR.EVRFirmwareError Valve.VR.IVRSystem/_PerformFirmwareUpdate::EndInvoke(System.IAsyncResult)
extern void _PerformFirmwareUpdate_EndInvoke_m92B1A3658D2DA55CC362415ED5FC7D8E3CBAE8A2 (void);
// 0x000002BA System.Void Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting::.ctor(System.Object,System.IntPtr)
extern void _AcknowledgeQuit_Exiting__ctor_m8DB0C25ADCA632828B02613B1CC358869D0164EE (void);
// 0x000002BB System.Void Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting::Invoke()
extern void _AcknowledgeQuit_Exiting_Invoke_m7919D251DB56A1AB59B072C1AF0F551FB7E214C5 (void);
// 0x000002BC System.IAsyncResult Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting::BeginInvoke(System.AsyncCallback,System.Object)
extern void _AcknowledgeQuit_Exiting_BeginInvoke_m0A05199EEC86FCA7303F2BE7F855476B67749A6E (void);
// 0x000002BD System.Void Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting::EndInvoke(System.IAsyncResult)
extern void _AcknowledgeQuit_Exiting_EndInvoke_mC082B9F1BCF7B1202ED42B990E6E7D0901641E65 (void);
// 0x000002BE System.Void Valve.VR.IVRSystem/_GetAppContainerFilePaths::.ctor(System.Object,System.IntPtr)
extern void _GetAppContainerFilePaths__ctor_mBD1A5F3C9922D8A7916FF576B72D89AE9A5C3352 (void);
// 0x000002BF System.UInt32 Valve.VR.IVRSystem/_GetAppContainerFilePaths::Invoke(System.Text.StringBuilder,System.UInt32)
extern void _GetAppContainerFilePaths_Invoke_m16F47AECFE97FA04DBEA7FE97DC27B962FE68536 (void);
// 0x000002C0 System.IAsyncResult Valve.VR.IVRSystem/_GetAppContainerFilePaths::BeginInvoke(System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetAppContainerFilePaths_BeginInvoke_mCB712A698A2C0576CC47CCB402F39E9E4DAFAAB5 (void);
// 0x000002C1 System.UInt32 Valve.VR.IVRSystem/_GetAppContainerFilePaths::EndInvoke(System.IAsyncResult)
extern void _GetAppContainerFilePaths_EndInvoke_m603E8CC6E28775CEF003015324CAECA5F576E8E2 (void);
// 0x000002C2 System.Void Valve.VR.IVRSystem/_GetRuntimeVersion::.ctor(System.Object,System.IntPtr)
extern void _GetRuntimeVersion__ctor_m9E18E355724622642AC948C17AE51BB09FE10B44 (void);
// 0x000002C3 System.IntPtr Valve.VR.IVRSystem/_GetRuntimeVersion::Invoke()
extern void _GetRuntimeVersion_Invoke_m22EDE141333A7E1F04D241F9FE68441F222DE585 (void);
// 0x000002C4 System.IAsyncResult Valve.VR.IVRSystem/_GetRuntimeVersion::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetRuntimeVersion_BeginInvoke_m43770594B888ADAD182E0C1E84A41351FDDAA8BF (void);
// 0x000002C5 System.IntPtr Valve.VR.IVRSystem/_GetRuntimeVersion::EndInvoke(System.IAsyncResult)
extern void _GetRuntimeVersion_EndInvoke_mE7566A36793874759D82D7477AED06240AC2D250 (void);
// 0x000002C6 System.Void Valve.VR.IVRExtendedDisplay/_GetWindowBounds::.ctor(System.Object,System.IntPtr)
extern void _GetWindowBounds__ctor_mD12E3E5CAB2D021535F8C27FA28D72EAA870B128 (void);
// 0x000002C7 System.Void Valve.VR.IVRExtendedDisplay/_GetWindowBounds::Invoke(System.Int32&,System.Int32&,System.UInt32&,System.UInt32&)
extern void _GetWindowBounds_Invoke_m9A39CA5C72883C0BF952A0FC9F9F15B8F901447C (void);
// 0x000002C8 System.IAsyncResult Valve.VR.IVRExtendedDisplay/_GetWindowBounds::BeginInvoke(System.Int32&,System.Int32&,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetWindowBounds_BeginInvoke_mA37CC0B6FD4AB9CB3634E81A65760FAC79799486 (void);
// 0x000002C9 System.Void Valve.VR.IVRExtendedDisplay/_GetWindowBounds::EndInvoke(System.Int32&,System.Int32&,System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetWindowBounds_EndInvoke_mC8A22C426F59E3D3BA93582599379417C33C43A8 (void);
// 0x000002CA System.Void Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport::.ctor(System.Object,System.IntPtr)
extern void _GetEyeOutputViewport__ctor_m7D25E9AE4B10A3A1DD4A0F7F19DDE9B229FE39F4 (void);
// 0x000002CB System.Void Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport::Invoke(Valve.VR.EVREye,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&)
extern void _GetEyeOutputViewport_Invoke_mAC57DE5222227C044E9C6E7F576B1E700D4AE57E (void);
// 0x000002CC System.IAsyncResult Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport::BeginInvoke(Valve.VR.EVREye,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetEyeOutputViewport_BeginInvoke_m78E1A5E5DF5D734DB0EA74CA5D084537E5152943 (void);
// 0x000002CD System.Void Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport::EndInvoke(System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetEyeOutputViewport_EndInvoke_mC1AF268A13D646590B82860D11B5DE46EDC37DA8 (void);
// 0x000002CE System.Void Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo::.ctor(System.Object,System.IntPtr)
extern void _GetDXGIOutputInfo__ctor_mBBEBCEBD365CD9C3804503A06D424FED71B9E62E (void);
// 0x000002CF System.Void Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo::Invoke(System.Int32&,System.Int32&)
extern void _GetDXGIOutputInfo_Invoke_mEB5BA6DD0CF52F7C98CD41643433B998DDF6645E (void);
// 0x000002D0 System.IAsyncResult Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo::BeginInvoke(System.Int32&,System.Int32&,System.AsyncCallback,System.Object)
extern void _GetDXGIOutputInfo_BeginInvoke_m701EB7F651D9D14550D2FF9E72E56F4155C2BB6F (void);
// 0x000002D1 System.Void Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo::EndInvoke(System.Int32&,System.Int32&,System.IAsyncResult)
extern void _GetDXGIOutputInfo_EndInvoke_m9E85139BFAD32B339FBE5D79DA75A212D2FCE638 (void);
// 0x000002D2 System.Void Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetCameraErrorNameFromEnum__ctor_mA821FADBF297CD6E8822136639B769C225DCB59E (void);
// 0x000002D3 System.IntPtr Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum::Invoke(Valve.VR.EVRTrackedCameraError)
extern void _GetCameraErrorNameFromEnum_Invoke_mF4710BFBF79821E706B42AEDB908FF057B8B9D9D (void);
// 0x000002D4 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum::BeginInvoke(Valve.VR.EVRTrackedCameraError,System.AsyncCallback,System.Object)
extern void _GetCameraErrorNameFromEnum_BeginInvoke_mB59F0285AAFECAEF70D24F3A0352D6C27ACFEA91 (void);
// 0x000002D5 System.IntPtr Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetCameraErrorNameFromEnum_EndInvoke_mAB8E417F0EB1D63974CBCCA694FEA76CF0F2F7C3 (void);
// 0x000002D6 System.Void Valve.VR.IVRTrackedCamera/_HasCamera::.ctor(System.Object,System.IntPtr)
extern void _HasCamera__ctor_mACC94DCEB28A1C3E8DEB9154AA150EEB71D8A8DE (void);
// 0x000002D7 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_HasCamera::Invoke(System.UInt32,System.Boolean&)
extern void _HasCamera_Invoke_m35365232480ACA0FDE6F0CC1020971E7A54835DB (void);
// 0x000002D8 System.IAsyncResult Valve.VR.IVRTrackedCamera/_HasCamera::BeginInvoke(System.UInt32,System.Boolean&,System.AsyncCallback,System.Object)
extern void _HasCamera_BeginInvoke_m88BB2E02A9CF7DA40F2739DDA0933FE5F1D1B758 (void);
// 0x000002D9 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_HasCamera::EndInvoke(System.Boolean&,System.IAsyncResult)
extern void _HasCamera_EndInvoke_m0577E65E53E3AB00B7B96A17A5DD81E1DCA9F56B (void);
// 0x000002DA System.Void Valve.VR.IVRTrackedCamera/_GetCameraFrameSize::.ctor(System.Object,System.IntPtr)
extern void _GetCameraFrameSize__ctor_m8D5AC818932DCBB5C2D02E7EAAAFE898F808FFFF (void);
// 0x000002DB Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetCameraFrameSize::Invoke(System.UInt32,Valve.VR.EVRTrackedCameraFrameType,System.UInt32&,System.UInt32&,System.UInt32&)
extern void _GetCameraFrameSize_Invoke_mB167273ACF8323D2E75EBB451C54338AB781508E (void);
// 0x000002DC System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetCameraFrameSize::BeginInvoke(System.UInt32,Valve.VR.EVRTrackedCameraFrameType,System.UInt32&,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetCameraFrameSize_BeginInvoke_m22F7E03C57353CFD214FE46FFBE9356DB62EB022 (void);
// 0x000002DD Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetCameraFrameSize::EndInvoke(System.UInt32&,System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetCameraFrameSize_EndInvoke_m05C4ECB6524C716B532FAF4775717D854AB1BC0E (void);
// 0x000002DE System.Void Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics::.ctor(System.Object,System.IntPtr)
extern void _GetCameraIntrinsics__ctor_m0E42AAA912D5794EDCB7D6B79925EF0387276CE7 (void);
// 0x000002DF Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics::Invoke(System.UInt32,System.UInt32,Valve.VR.EVRTrackedCameraFrameType,Valve.VR.HmdVector2_t&,Valve.VR.HmdVector2_t&)
extern void _GetCameraIntrinsics_Invoke_m6792C911D5C33FE070D1310F8844CA6AD3D64793 (void);
// 0x000002E0 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics::BeginInvoke(System.UInt32,System.UInt32,Valve.VR.EVRTrackedCameraFrameType,Valve.VR.HmdVector2_t&,Valve.VR.HmdVector2_t&,System.AsyncCallback,System.Object)
extern void _GetCameraIntrinsics_BeginInvoke_m796DBBD48DED26FABE4224431944AB2C9DC9559B (void);
// 0x000002E1 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics::EndInvoke(Valve.VR.HmdVector2_t&,Valve.VR.HmdVector2_t&,System.IAsyncResult)
extern void _GetCameraIntrinsics_EndInvoke_m6EB7ABDA2EE38C7F1B3DD0E9FD0886BDD25A375E (void);
// 0x000002E2 System.Void Valve.VR.IVRTrackedCamera/_GetCameraProjection::.ctor(System.Object,System.IntPtr)
extern void _GetCameraProjection__ctor_mBB0664F059AC70327C08DF89BF70EDD4AE264DF5 (void);
// 0x000002E3 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetCameraProjection::Invoke(System.UInt32,System.UInt32,Valve.VR.EVRTrackedCameraFrameType,System.Single,System.Single,Valve.VR.HmdMatrix44_t&)
extern void _GetCameraProjection_Invoke_m14E4B7EC37C3DCF5C91799C480F919C452477D54 (void);
// 0x000002E4 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetCameraProjection::BeginInvoke(System.UInt32,System.UInt32,Valve.VR.EVRTrackedCameraFrameType,System.Single,System.Single,Valve.VR.HmdMatrix44_t&,System.AsyncCallback,System.Object)
extern void _GetCameraProjection_BeginInvoke_mA3D841B3023FA7C0AC8BDCB115787A164A156374 (void);
// 0x000002E5 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetCameraProjection::EndInvoke(Valve.VR.HmdMatrix44_t&,System.IAsyncResult)
extern void _GetCameraProjection_EndInvoke_mCC4D489CF12909090AA32A7E0100E98811CA2153 (void);
// 0x000002E6 System.Void Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService::.ctor(System.Object,System.IntPtr)
extern void _AcquireVideoStreamingService__ctor_mBCE2C386F9CBFDC834E6B7D6265832AE9A4B9F52 (void);
// 0x000002E7 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService::Invoke(System.UInt32,System.UInt64&)
extern void _AcquireVideoStreamingService_Invoke_mD91959AAA9A35E3C383BB45375E591F16E5688C8 (void);
// 0x000002E8 System.IAsyncResult Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService::BeginInvoke(System.UInt32,System.UInt64&,System.AsyncCallback,System.Object)
extern void _AcquireVideoStreamingService_BeginInvoke_mBC2DBD9204EEBA61A993BBCE4E321E877513AF9F (void);
// 0x000002E9 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _AcquireVideoStreamingService_EndInvoke_mDC8DA3925ABDADFC008172EE276972DDF5E1F9CB (void);
// 0x000002EA System.Void Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService::.ctor(System.Object,System.IntPtr)
extern void _ReleaseVideoStreamingService__ctor_mF1517FDCAD9457EE004784F896C91B15E2AF8F8B (void);
// 0x000002EB Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService::Invoke(System.UInt64)
extern void _ReleaseVideoStreamingService_Invoke_mF19390EF96E48BB9BEF1C7091127A37FC0A3308F (void);
// 0x000002EC System.IAsyncResult Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _ReleaseVideoStreamingService_BeginInvoke_m7C3D61537ACDC6E46B11D1ACAEC25339B2411CB4 (void);
// 0x000002ED Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService::EndInvoke(System.IAsyncResult)
extern void _ReleaseVideoStreamingService_EndInvoke_mB87332AFA043AA2310EB171C115D49E72C4B28B0 (void);
// 0x000002EE System.Void Valve.VR.IVRTrackedCamera/_GetVideoStreamFrameBuffer::.ctor(System.Object,System.IntPtr)
extern void _GetVideoStreamFrameBuffer__ctor_m19E310D8272A4EFB9CAFE8FE8446BCFEA9AEB3FF (void);
// 0x000002EF Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamFrameBuffer::Invoke(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.IntPtr,System.UInt32,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32)
extern void _GetVideoStreamFrameBuffer_Invoke_mB1F758E65F7FD6B7E02D20316B60E724E961B98F (void);
// 0x000002F0 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetVideoStreamFrameBuffer::BeginInvoke(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.IntPtr,System.UInt32,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetVideoStreamFrameBuffer_BeginInvoke_m4092D412900D04FEC48BF1AFA37545777E435B40 (void);
// 0x000002F1 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamFrameBuffer::EndInvoke(Valve.VR.CameraVideoStreamFrameHeader_t&,System.IAsyncResult)
extern void _GetVideoStreamFrameBuffer_EndInvoke_mD16CE39E508B47114545E23DE50267062B00B2BB (void);
// 0x000002F2 System.Void Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureSize::.ctor(System.Object,System.IntPtr)
extern void _GetVideoStreamTextureSize__ctor_m19F6A1B45517F36E520D743043B5365D58414216 (void);
// 0x000002F3 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureSize::Invoke(System.UInt32,Valve.VR.EVRTrackedCameraFrameType,Valve.VR.VRTextureBounds_t&,System.UInt32&,System.UInt32&)
extern void _GetVideoStreamTextureSize_Invoke_mCE14C2952CFDCFC4AB1B45DCCC269C0A754B375C (void);
// 0x000002F4 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureSize::BeginInvoke(System.UInt32,Valve.VR.EVRTrackedCameraFrameType,Valve.VR.VRTextureBounds_t&,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetVideoStreamTextureSize_BeginInvoke_m6C1688814E13AA1F61CAE558DF40DD6024A6F9C4 (void);
// 0x000002F5 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureSize::EndInvoke(Valve.VR.VRTextureBounds_t&,System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetVideoStreamTextureSize_EndInvoke_mE76AA2DEA6DBF6FE150B51AAB12F79B06611909B (void);
// 0x000002F6 System.Void Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureD3D11::.ctor(System.Object,System.IntPtr)
extern void _GetVideoStreamTextureD3D11__ctor_m8543DFD72F354D6B55BECAC21A9572F436244B95 (void);
// 0x000002F7 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureD3D11::Invoke(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.IntPtr,System.IntPtr&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32)
extern void _GetVideoStreamTextureD3D11_Invoke_m83CAEB8E2DCB45B43AAC4029DDC042E7FAB34F33 (void);
// 0x000002F8 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureD3D11::BeginInvoke(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.IntPtr,System.IntPtr&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetVideoStreamTextureD3D11_BeginInvoke_m7D30937B9B3D434EB3DBE10F51C20B97D803F72C (void);
// 0x000002F9 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureD3D11::EndInvoke(System.IntPtr&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.IAsyncResult)
extern void _GetVideoStreamTextureD3D11_EndInvoke_m7EE17F9F15C9497B5912D05BC5F1E7011C2680EC (void);
// 0x000002FA System.Void Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL::.ctor(System.Object,System.IntPtr)
extern void _GetVideoStreamTextureGL__ctor_m15586F1A17F5506304F62FB87C21632BED4BACB5 (void);
// 0x000002FB Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL::Invoke(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.UInt32&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32)
extern void _GetVideoStreamTextureGL_Invoke_mD1B1116E6A3DC5C5FEDF6356C73F696EA4649253 (void);
// 0x000002FC System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL::BeginInvoke(System.UInt64,Valve.VR.EVRTrackedCameraFrameType,System.UInt32&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetVideoStreamTextureGL_BeginInvoke_m4325F3E1E4D83659DA45FBCC4BB27227DEBFB084 (void);
// 0x000002FD Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL::EndInvoke(System.UInt32&,Valve.VR.CameraVideoStreamFrameHeader_t&,System.IAsyncResult)
extern void _GetVideoStreamTextureGL_EndInvoke_m4D7F6F0ED413E07FB6BE0CB58986ADFFFBF2FB7F (void);
// 0x000002FE System.Void Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL::.ctor(System.Object,System.IntPtr)
extern void _ReleaseVideoStreamTextureGL__ctor_m0616D5B74436B30843F16501712A186115D52C63 (void);
// 0x000002FF Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL::Invoke(System.UInt64,System.UInt32)
extern void _ReleaseVideoStreamTextureGL_Invoke_m369675A1F35E836F4234DF2E2660E7FDC4D81FCD (void);
// 0x00000300 System.IAsyncResult Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL::BeginInvoke(System.UInt64,System.UInt32,System.AsyncCallback,System.Object)
extern void _ReleaseVideoStreamTextureGL_BeginInvoke_mD6642B5B802BC99A696B4891E09BA12541BF003B (void);
// 0x00000301 Valve.VR.EVRTrackedCameraError Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL::EndInvoke(System.IAsyncResult)
extern void _ReleaseVideoStreamTextureGL_EndInvoke_mF264035E9351063D4293806AC4FA5B853C654E44 (void);
// 0x00000302 System.Void Valve.VR.IVRTrackedCamera/_SetCameraTrackingSpace::.ctor(System.Object,System.IntPtr)
extern void _SetCameraTrackingSpace__ctor_m4F66C135643CCDCEB45B34D5C59C754F57E26157 (void);
// 0x00000303 System.Void Valve.VR.IVRTrackedCamera/_SetCameraTrackingSpace::Invoke(Valve.VR.ETrackingUniverseOrigin)
extern void _SetCameraTrackingSpace_Invoke_mB6A7A398AAD810332913F6C41B40A8B42E862CB5 (void);
// 0x00000304 System.IAsyncResult Valve.VR.IVRTrackedCamera/_SetCameraTrackingSpace::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,System.AsyncCallback,System.Object)
extern void _SetCameraTrackingSpace_BeginInvoke_m27CA0FD8AF7B2668DA924AF291BB5EE66217EBE3 (void);
// 0x00000305 System.Void Valve.VR.IVRTrackedCamera/_SetCameraTrackingSpace::EndInvoke(System.IAsyncResult)
extern void _SetCameraTrackingSpace_EndInvoke_m9EBF7DECC41051FE178A0C4E5AB601D726EB2020 (void);
// 0x00000306 System.Void Valve.VR.IVRTrackedCamera/_GetCameraTrackingSpace::.ctor(System.Object,System.IntPtr)
extern void _GetCameraTrackingSpace__ctor_m00F188D69537F7A2DB8904B6CBA8B8D827422ABD (void);
// 0x00000307 Valve.VR.ETrackingUniverseOrigin Valve.VR.IVRTrackedCamera/_GetCameraTrackingSpace::Invoke()
extern void _GetCameraTrackingSpace_Invoke_m217201D9B5CBF8B68730C98F586D5C9819C18819 (void);
// 0x00000308 System.IAsyncResult Valve.VR.IVRTrackedCamera/_GetCameraTrackingSpace::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetCameraTrackingSpace_BeginInvoke_m37B993591EFE5198F9FCE50A0F2C70699EF96F0D (void);
// 0x00000309 Valve.VR.ETrackingUniverseOrigin Valve.VR.IVRTrackedCamera/_GetCameraTrackingSpace::EndInvoke(System.IAsyncResult)
extern void _GetCameraTrackingSpace_EndInvoke_m4E14029D33530B5B9047C5814FEC39BFFD4D83EE (void);
// 0x0000030A System.Void Valve.VR.IVRApplications/_AddApplicationManifest::.ctor(System.Object,System.IntPtr)
extern void _AddApplicationManifest__ctor_mE921177092FB009F47141BF4B1E5CC6994960A46 (void);
// 0x0000030B Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_AddApplicationManifest::Invoke(System.IntPtr,System.Boolean)
extern void _AddApplicationManifest_Invoke_m13253FF3E1626A61C5CEDE82B3C2A7C61944F115 (void);
// 0x0000030C System.IAsyncResult Valve.VR.IVRApplications/_AddApplicationManifest::BeginInvoke(System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
extern void _AddApplicationManifest_BeginInvoke_m160719B06C579A1C8B67B7766D9EAC92B7C0C89F (void);
// 0x0000030D Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_AddApplicationManifest::EndInvoke(System.IAsyncResult)
extern void _AddApplicationManifest_EndInvoke_mCABE2B52D0755C0514E1E79E8F5B14A3A9325BDD (void);
// 0x0000030E System.Void Valve.VR.IVRApplications/_RemoveApplicationManifest::.ctor(System.Object,System.IntPtr)
extern void _RemoveApplicationManifest__ctor_m098B5B0568E1BD95ED07F93680A17FFEB5370AA7 (void);
// 0x0000030F Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_RemoveApplicationManifest::Invoke(System.IntPtr)
extern void _RemoveApplicationManifest_Invoke_m955D53414048A815540B392318F767FADF663BC5 (void);
// 0x00000310 System.IAsyncResult Valve.VR.IVRApplications/_RemoveApplicationManifest::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _RemoveApplicationManifest_BeginInvoke_m2148C62AC9E0A25DB453FDF7A21879A5BB6E5717 (void);
// 0x00000311 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_RemoveApplicationManifest::EndInvoke(System.IAsyncResult)
extern void _RemoveApplicationManifest_EndInvoke_mFC10638A90BE739DCC0DE10AA03C24D836DD0BFC (void);
// 0x00000312 System.Void Valve.VR.IVRApplications/_IsApplicationInstalled::.ctor(System.Object,System.IntPtr)
extern void _IsApplicationInstalled__ctor_mF97DE386DD08E9A8E2F1744058F586D4A90F054E (void);
// 0x00000313 System.Boolean Valve.VR.IVRApplications/_IsApplicationInstalled::Invoke(System.IntPtr)
extern void _IsApplicationInstalled_Invoke_m85222DC1B440AD62545168C3B6E50853A64570CD (void);
// 0x00000314 System.IAsyncResult Valve.VR.IVRApplications/_IsApplicationInstalled::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _IsApplicationInstalled_BeginInvoke_m63E00D00C752F636DB683C1F2338D8754F189216 (void);
// 0x00000315 System.Boolean Valve.VR.IVRApplications/_IsApplicationInstalled::EndInvoke(System.IAsyncResult)
extern void _IsApplicationInstalled_EndInvoke_m35DFCDDB62DAD7D20971B6F77A5319D066C9E782 (void);
// 0x00000316 System.Void Valve.VR.IVRApplications/_GetApplicationCount::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationCount__ctor_mB13D1FBC6DF5F90635EEA9D14F76CED30FF3D55B (void);
// 0x00000317 System.UInt32 Valve.VR.IVRApplications/_GetApplicationCount::Invoke()
extern void _GetApplicationCount_Invoke_mC0729ABF4F4946149ADDD90CA2E8008D6DF6C107 (void);
// 0x00000318 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationCount::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetApplicationCount_BeginInvoke_m1CE099273DEB4C471C87AC4196C60C4FEC8687C9 (void);
// 0x00000319 System.UInt32 Valve.VR.IVRApplications/_GetApplicationCount::EndInvoke(System.IAsyncResult)
extern void _GetApplicationCount_EndInvoke_m8215063378D1E4D5CEA4C4E32CD5420EC23E4803 (void);
// 0x0000031A System.Void Valve.VR.IVRApplications/_GetApplicationKeyByIndex::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationKeyByIndex__ctor_mA39E195F7E80E2846CC51EF72613E7DC7E09ECDD (void);
// 0x0000031B Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_GetApplicationKeyByIndex::Invoke(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void _GetApplicationKeyByIndex_Invoke_mFE9B29465080238D0869FE2420973E79E0E7F2E4 (void);
// 0x0000031C System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationKeyByIndex::BeginInvoke(System.UInt32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetApplicationKeyByIndex_BeginInvoke_m7FA4AA91EE1138A8A715610BF06FAB33A4E3F89A (void);
// 0x0000031D Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_GetApplicationKeyByIndex::EndInvoke(System.IAsyncResult)
extern void _GetApplicationKeyByIndex_EndInvoke_mDC602E2AF209DFD471033850288C8383B9BD6F7E (void);
// 0x0000031E System.Void Valve.VR.IVRApplications/_GetApplicationKeyByProcessId::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationKeyByProcessId__ctor_m5A45EA06187F8872373063B343B0F9B7B05FD673 (void);
// 0x0000031F Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_GetApplicationKeyByProcessId::Invoke(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void _GetApplicationKeyByProcessId_Invoke_m609B32C9CE935757C3FE53844191444D5C89E62C (void);
// 0x00000320 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationKeyByProcessId::BeginInvoke(System.UInt32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetApplicationKeyByProcessId_BeginInvoke_m57C19B47688536F2DD1FC9512BA5E83DA250338C (void);
// 0x00000321 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_GetApplicationKeyByProcessId::EndInvoke(System.IAsyncResult)
extern void _GetApplicationKeyByProcessId_EndInvoke_m7C7DBA892AD3F64D5E295EA25227CED7080DDBB5 (void);
// 0x00000322 System.Void Valve.VR.IVRApplications/_LaunchApplication::.ctor(System.Object,System.IntPtr)
extern void _LaunchApplication__ctor_mD5D89DD02ABF154DAD53CA5DD3A16DF4C357A591 (void);
// 0x00000323 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchApplication::Invoke(System.IntPtr)
extern void _LaunchApplication_Invoke_m632E2C0F515BC9413ED63FC74A58E16204A66E1D (void);
// 0x00000324 System.IAsyncResult Valve.VR.IVRApplications/_LaunchApplication::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _LaunchApplication_BeginInvoke_m1D60ED268088414CEC80928AF46E81B3ACC62314 (void);
// 0x00000325 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchApplication::EndInvoke(System.IAsyncResult)
extern void _LaunchApplication_EndInvoke_m834427DCBCE5A1833364592E505075285C1F371B (void);
// 0x00000326 System.Void Valve.VR.IVRApplications/_LaunchTemplateApplication::.ctor(System.Object,System.IntPtr)
extern void _LaunchTemplateApplication__ctor_m7F8E8086C4940BA19C95A946811B612C943F48EE (void);
// 0x00000327 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchTemplateApplication::Invoke(System.IntPtr,System.IntPtr,Valve.VR.AppOverrideKeys_t[],System.UInt32)
extern void _LaunchTemplateApplication_Invoke_mD2B1E3465534228B6ABD3F88C14856BF06E3D06D (void);
// 0x00000328 System.IAsyncResult Valve.VR.IVRApplications/_LaunchTemplateApplication::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.AppOverrideKeys_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _LaunchTemplateApplication_BeginInvoke_m757CCEE2075E8147A7A55ABDFA2741E9DD8E7B79 (void);
// 0x00000329 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchTemplateApplication::EndInvoke(System.IAsyncResult)
extern void _LaunchTemplateApplication_EndInvoke_m4EA6E0A4EC800F776002E2A02D22FD0CC0CFD0D7 (void);
// 0x0000032A System.Void Valve.VR.IVRApplications/_LaunchApplicationFromMimeType::.ctor(System.Object,System.IntPtr)
extern void _LaunchApplicationFromMimeType__ctor_m87319361A420EBC891BC37C76E07FC2B1891A734 (void);
// 0x0000032B Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchApplicationFromMimeType::Invoke(System.IntPtr,System.IntPtr)
extern void _LaunchApplicationFromMimeType_Invoke_m122A4EC3DC263B5676908683712EACEAEDC7C7CD (void);
// 0x0000032C System.IAsyncResult Valve.VR.IVRApplications/_LaunchApplicationFromMimeType::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _LaunchApplicationFromMimeType_BeginInvoke_m4F5834DB125C0502FA34CFAB6CFCD391767B8609 (void);
// 0x0000032D Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchApplicationFromMimeType::EndInvoke(System.IAsyncResult)
extern void _LaunchApplicationFromMimeType_EndInvoke_mD4F7B1C16B40FEB0306C7507679569D1BD8CECE8 (void);
// 0x0000032E System.Void Valve.VR.IVRApplications/_LaunchDashboardOverlay::.ctor(System.Object,System.IntPtr)
extern void _LaunchDashboardOverlay__ctor_mBF4EEECF41B66FE1C2EA3F334B42F08196FD2E7C (void);
// 0x0000032F Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchDashboardOverlay::Invoke(System.IntPtr)
extern void _LaunchDashboardOverlay_Invoke_mA32F420A9A1889AE47474D8591B52203278B5133 (void);
// 0x00000330 System.IAsyncResult Valve.VR.IVRApplications/_LaunchDashboardOverlay::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _LaunchDashboardOverlay_BeginInvoke_mA79E5CAD6368629B4C993E7FE8BD08BE5B582204 (void);
// 0x00000331 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchDashboardOverlay::EndInvoke(System.IAsyncResult)
extern void _LaunchDashboardOverlay_EndInvoke_mFA0721BFF576A748BAF345A3223AC84BDC8253BD (void);
// 0x00000332 System.Void Valve.VR.IVRApplications/_CancelApplicationLaunch::.ctor(System.Object,System.IntPtr)
extern void _CancelApplicationLaunch__ctor_m8084B4CA30723602A6345C6BDBE4DF6F43E844E2 (void);
// 0x00000333 System.Boolean Valve.VR.IVRApplications/_CancelApplicationLaunch::Invoke(System.IntPtr)
extern void _CancelApplicationLaunch_Invoke_m2C01811A7EF78B92CA551FB5D8FBEEA8E3795300 (void);
// 0x00000334 System.IAsyncResult Valve.VR.IVRApplications/_CancelApplicationLaunch::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _CancelApplicationLaunch_BeginInvoke_m099B3AF9BE09D822A055F2AC807DD7DB02081729 (void);
// 0x00000335 System.Boolean Valve.VR.IVRApplications/_CancelApplicationLaunch::EndInvoke(System.IAsyncResult)
extern void _CancelApplicationLaunch_EndInvoke_mECDCDEC099303426A063586C2DF08CE64D32E8F5 (void);
// 0x00000336 System.Void Valve.VR.IVRApplications/_IdentifyApplication::.ctor(System.Object,System.IntPtr)
extern void _IdentifyApplication__ctor_mECC337F8E060732DF71C8DF575B7E410EF466445 (void);
// 0x00000337 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_IdentifyApplication::Invoke(System.UInt32,System.IntPtr)
extern void _IdentifyApplication_Invoke_m15E39C398ADEEEEBEFC7021B058D789DA30FA06B (void);
// 0x00000338 System.IAsyncResult Valve.VR.IVRApplications/_IdentifyApplication::BeginInvoke(System.UInt32,System.IntPtr,System.AsyncCallback,System.Object)
extern void _IdentifyApplication_BeginInvoke_m54AD3A3FA131EF6A3ABA387F104E4809EEF5D78B (void);
// 0x00000339 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_IdentifyApplication::EndInvoke(System.IAsyncResult)
extern void _IdentifyApplication_EndInvoke_m3FABDF80EDDAF8F33C6AE3E4A8D34ECA482F90D3 (void);
// 0x0000033A System.Void Valve.VR.IVRApplications/_GetApplicationProcessId::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationProcessId__ctor_m8E6DAB57F3DC74DCAF969BD34B78D666FE145145 (void);
// 0x0000033B System.UInt32 Valve.VR.IVRApplications/_GetApplicationProcessId::Invoke(System.IntPtr)
extern void _GetApplicationProcessId_Invoke_mF66FD312EF46879D12CF5832F6C57AEAF1B85B9D (void);
// 0x0000033C System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationProcessId::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetApplicationProcessId_BeginInvoke_mDB39CCA2DF78463D770972C463624FCD9F55B9A3 (void);
// 0x0000033D System.UInt32 Valve.VR.IVRApplications/_GetApplicationProcessId::EndInvoke(System.IAsyncResult)
extern void _GetApplicationProcessId_EndInvoke_m92E30449375CE4BA24E30CC11402F362809AAF3C (void);
// 0x0000033E System.Void Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationsErrorNameFromEnum__ctor_m04D5D7E89554675621FBDBCE1CED6CD863CB049F (void);
// 0x0000033F System.IntPtr Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum::Invoke(Valve.VR.EVRApplicationError)
extern void _GetApplicationsErrorNameFromEnum_Invoke_m28B6278D464110D19D177898F873311FE601ACB0 (void);
// 0x00000340 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum::BeginInvoke(Valve.VR.EVRApplicationError,System.AsyncCallback,System.Object)
extern void _GetApplicationsErrorNameFromEnum_BeginInvoke_m5539CB5FE499335BBF9DE007622DAB0E0385826B (void);
// 0x00000341 System.IntPtr Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetApplicationsErrorNameFromEnum_EndInvoke_m13FA5841D33891441AFFEF4DA593410CCD397006 (void);
// 0x00000342 System.Void Valve.VR.IVRApplications/_GetApplicationPropertyString::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationPropertyString__ctor_mD0817691B945C2AB92E99BF1A3F9D1487D02B229 (void);
// 0x00000343 System.UInt32 Valve.VR.IVRApplications/_GetApplicationPropertyString::Invoke(System.IntPtr,Valve.VR.EVRApplicationProperty,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRApplicationError&)
extern void _GetApplicationPropertyString_Invoke_m4BAEE912C73B4BE6CEBD5C925A3B5967F6A43D98 (void);
// 0x00000344 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationPropertyString::BeginInvoke(System.IntPtr,Valve.VR.EVRApplicationProperty,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRApplicationError&,System.AsyncCallback,System.Object)
extern void _GetApplicationPropertyString_BeginInvoke_m66CC078AA726E4B1B97D4A9183962B2F51FCF71B (void);
// 0x00000345 System.UInt32 Valve.VR.IVRApplications/_GetApplicationPropertyString::EndInvoke(Valve.VR.EVRApplicationError&,System.IAsyncResult)
extern void _GetApplicationPropertyString_EndInvoke_m0FA3315FA0E989ECCC12EADEFF22199D69E7760F (void);
// 0x00000346 System.Void Valve.VR.IVRApplications/_GetApplicationPropertyBool::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationPropertyBool__ctor_mEA3FBAFC5334418B06AB12726BF072552E29E978 (void);
// 0x00000347 System.Boolean Valve.VR.IVRApplications/_GetApplicationPropertyBool::Invoke(System.IntPtr,Valve.VR.EVRApplicationProperty,Valve.VR.EVRApplicationError&)
extern void _GetApplicationPropertyBool_Invoke_mA59DD56D761005EDCF74344B4EE3E4BC83DB3203 (void);
// 0x00000348 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationPropertyBool::BeginInvoke(System.IntPtr,Valve.VR.EVRApplicationProperty,Valve.VR.EVRApplicationError&,System.AsyncCallback,System.Object)
extern void _GetApplicationPropertyBool_BeginInvoke_m5F9B759D0A70B2A7995957CCBE811ACBEBE7EE52 (void);
// 0x00000349 System.Boolean Valve.VR.IVRApplications/_GetApplicationPropertyBool::EndInvoke(Valve.VR.EVRApplicationError&,System.IAsyncResult)
extern void _GetApplicationPropertyBool_EndInvoke_m60044E96D146AE6C607CFFF4EC87988B41FAFBD7 (void);
// 0x0000034A System.Void Valve.VR.IVRApplications/_GetApplicationPropertyUint64::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationPropertyUint64__ctor_m329D01ABD6E833601944B42DBAF4CF4D3478E114 (void);
// 0x0000034B System.UInt64 Valve.VR.IVRApplications/_GetApplicationPropertyUint64::Invoke(System.IntPtr,Valve.VR.EVRApplicationProperty,Valve.VR.EVRApplicationError&)
extern void _GetApplicationPropertyUint64_Invoke_m7AA7DF6ECEC3486EE001B9B6F12B44BC07D7F88F (void);
// 0x0000034C System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationPropertyUint64::BeginInvoke(System.IntPtr,Valve.VR.EVRApplicationProperty,Valve.VR.EVRApplicationError&,System.AsyncCallback,System.Object)
extern void _GetApplicationPropertyUint64_BeginInvoke_m121ACA3C6494872900E9F07A29E116820F32E13D (void);
// 0x0000034D System.UInt64 Valve.VR.IVRApplications/_GetApplicationPropertyUint64::EndInvoke(Valve.VR.EVRApplicationError&,System.IAsyncResult)
extern void _GetApplicationPropertyUint64_EndInvoke_m18BD5E391ADB14C575F1E6B721C8432256543C59 (void);
// 0x0000034E System.Void Valve.VR.IVRApplications/_SetApplicationAutoLaunch::.ctor(System.Object,System.IntPtr)
extern void _SetApplicationAutoLaunch__ctor_m25A6245499453A7486676CE64CF8CC6F13DCA4FA (void);
// 0x0000034F Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_SetApplicationAutoLaunch::Invoke(System.IntPtr,System.Boolean)
extern void _SetApplicationAutoLaunch_Invoke_mD5B05F8991DDC19A50F372714A02964D695A21A7 (void);
// 0x00000350 System.IAsyncResult Valve.VR.IVRApplications/_SetApplicationAutoLaunch::BeginInvoke(System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
extern void _SetApplicationAutoLaunch_BeginInvoke_m8856CD75103C0FEA05EED1285F32F0C3939377A0 (void);
// 0x00000351 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_SetApplicationAutoLaunch::EndInvoke(System.IAsyncResult)
extern void _SetApplicationAutoLaunch_EndInvoke_m7AC225AB775B0199AADFFA4B8C8690AEAD16BD61 (void);
// 0x00000352 System.Void Valve.VR.IVRApplications/_GetApplicationAutoLaunch::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationAutoLaunch__ctor_mEA367838C3B25F822609560801F4E418BE644759 (void);
// 0x00000353 System.Boolean Valve.VR.IVRApplications/_GetApplicationAutoLaunch::Invoke(System.IntPtr)
extern void _GetApplicationAutoLaunch_Invoke_m68E78E8DF47AF44C4307F8D5112900460C5BFCDA (void);
// 0x00000354 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationAutoLaunch::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetApplicationAutoLaunch_BeginInvoke_mFA36B7A28C6CF1DF153EC9D7B3686982D545E7D8 (void);
// 0x00000355 System.Boolean Valve.VR.IVRApplications/_GetApplicationAutoLaunch::EndInvoke(System.IAsyncResult)
extern void _GetApplicationAutoLaunch_EndInvoke_m6F335B56A30708D72AFD5E409168AD89242877B0 (void);
// 0x00000356 System.Void Valve.VR.IVRApplications/_SetDefaultApplicationForMimeType::.ctor(System.Object,System.IntPtr)
extern void _SetDefaultApplicationForMimeType__ctor_mE681B033278112D305896DE653D4C1784B82C450 (void);
// 0x00000357 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_SetDefaultApplicationForMimeType::Invoke(System.IntPtr,System.IntPtr)
extern void _SetDefaultApplicationForMimeType_Invoke_mB3F8425C5C75E41D7B135D8B494F2677A9BCEF62 (void);
// 0x00000358 System.IAsyncResult Valve.VR.IVRApplications/_SetDefaultApplicationForMimeType::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _SetDefaultApplicationForMimeType_BeginInvoke_m2ACB9A204CB396649BD941A4A62D539F556F8585 (void);
// 0x00000359 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_SetDefaultApplicationForMimeType::EndInvoke(System.IAsyncResult)
extern void _SetDefaultApplicationForMimeType_EndInvoke_m2BF07D8E169262C3C524DF72B846A8866D0195AE (void);
// 0x0000035A System.Void Valve.VR.IVRApplications/_GetDefaultApplicationForMimeType::.ctor(System.Object,System.IntPtr)
extern void _GetDefaultApplicationForMimeType__ctor_m42F35237ABBA4BCCBCE5D2DE4CFA2787D253620C (void);
// 0x0000035B System.Boolean Valve.VR.IVRApplications/_GetDefaultApplicationForMimeType::Invoke(System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _GetDefaultApplicationForMimeType_Invoke_mC236ADF0872CD04D637736F1A11B64A14E3AA3C7 (void);
// 0x0000035C System.IAsyncResult Valve.VR.IVRApplications/_GetDefaultApplicationForMimeType::BeginInvoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetDefaultApplicationForMimeType_BeginInvoke_mC7BD7CD20EFE7FCD2A5CEB0E6725BDCFB4B4BCE7 (void);
// 0x0000035D System.Boolean Valve.VR.IVRApplications/_GetDefaultApplicationForMimeType::EndInvoke(System.IAsyncResult)
extern void _GetDefaultApplicationForMimeType_EndInvoke_mF659831113C37FEB3ED05EC9CC2C859EF452A257 (void);
// 0x0000035E System.Void Valve.VR.IVRApplications/_GetApplicationSupportedMimeTypes::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationSupportedMimeTypes__ctor_mAEFA0E967CDB9BDBBCD47B6588D4E27640F73D9E (void);
// 0x0000035F System.Boolean Valve.VR.IVRApplications/_GetApplicationSupportedMimeTypes::Invoke(System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _GetApplicationSupportedMimeTypes_Invoke_m86D1D429C68AEFC23A82DA56EF261ED3C2161D2A (void);
// 0x00000360 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationSupportedMimeTypes::BeginInvoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetApplicationSupportedMimeTypes_BeginInvoke_m88074A7FEADCE370BF9C1B87A407A310C736D40D (void);
// 0x00000361 System.Boolean Valve.VR.IVRApplications/_GetApplicationSupportedMimeTypes::EndInvoke(System.IAsyncResult)
extern void _GetApplicationSupportedMimeTypes_EndInvoke_m08FE63D1743679941C5AEBADBDB19D9DA9F8ECDA (void);
// 0x00000362 System.Void Valve.VR.IVRApplications/_GetApplicationsThatSupportMimeType::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationsThatSupportMimeType__ctor_m09C250D1FEA70F2F8272F71FFC0F18DA13EFAC77 (void);
// 0x00000363 System.UInt32 Valve.VR.IVRApplications/_GetApplicationsThatSupportMimeType::Invoke(System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _GetApplicationsThatSupportMimeType_Invoke_m2E44CA60342C46ADD38AEA3B650D8E45D9C25B90 (void);
// 0x00000364 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationsThatSupportMimeType::BeginInvoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetApplicationsThatSupportMimeType_BeginInvoke_mB449C045D93EDE136156F5BD6A7DA500BBFC364D (void);
// 0x00000365 System.UInt32 Valve.VR.IVRApplications/_GetApplicationsThatSupportMimeType::EndInvoke(System.IAsyncResult)
extern void _GetApplicationsThatSupportMimeType_EndInvoke_m52149F47CE82D4F0407ECB5B0107F07E23E8FA4D (void);
// 0x00000366 System.Void Valve.VR.IVRApplications/_GetApplicationLaunchArguments::.ctor(System.Object,System.IntPtr)
extern void _GetApplicationLaunchArguments__ctor_m5B415E5A50BF36FED3064BAD9299D32152D6BCE7 (void);
// 0x00000367 System.UInt32 Valve.VR.IVRApplications/_GetApplicationLaunchArguments::Invoke(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void _GetApplicationLaunchArguments_Invoke_mFD00354633C9F588A367FA39D5EDEDD4869E0D6B (void);
// 0x00000368 System.IAsyncResult Valve.VR.IVRApplications/_GetApplicationLaunchArguments::BeginInvoke(System.UInt32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetApplicationLaunchArguments_BeginInvoke_m8E0909026D3960B7D6216F1123615B924ADE684A (void);
// 0x00000369 System.UInt32 Valve.VR.IVRApplications/_GetApplicationLaunchArguments::EndInvoke(System.IAsyncResult)
extern void _GetApplicationLaunchArguments_EndInvoke_m3DCB3395D1A824A5465997038827E812260E46B6 (void);
// 0x0000036A System.Void Valve.VR.IVRApplications/_GetStartingApplication::.ctor(System.Object,System.IntPtr)
extern void _GetStartingApplication__ctor_m6358DBAB31D800587816943B21C5C67996E8C51A (void);
// 0x0000036B Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_GetStartingApplication::Invoke(System.Text.StringBuilder,System.UInt32)
extern void _GetStartingApplication_Invoke_m21A9C1890FBEBA71368CD45CD20B7A9FDD4B5539 (void);
// 0x0000036C System.IAsyncResult Valve.VR.IVRApplications/_GetStartingApplication::BeginInvoke(System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetStartingApplication_BeginInvoke_m8F896B0DD0051D25D239818665B8E196FA9F0D4F (void);
// 0x0000036D Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_GetStartingApplication::EndInvoke(System.IAsyncResult)
extern void _GetStartingApplication_EndInvoke_m194185DEDC3608DCD06036855A1AD63D20679DC9 (void);
// 0x0000036E System.Void Valve.VR.IVRApplications/_GetSceneApplicationState::.ctor(System.Object,System.IntPtr)
extern void _GetSceneApplicationState__ctor_m3D75EC080D244C8899BEF8C92387CEEBC14D2FEA (void);
// 0x0000036F Valve.VR.EVRSceneApplicationState Valve.VR.IVRApplications/_GetSceneApplicationState::Invoke()
extern void _GetSceneApplicationState_Invoke_m542DB784BA10AE93AE1838092FD8FDEEC588EB0D (void);
// 0x00000370 System.IAsyncResult Valve.VR.IVRApplications/_GetSceneApplicationState::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetSceneApplicationState_BeginInvoke_mA5A03BD8C6695B9C41BF64ED3CD783ED752AC438 (void);
// 0x00000371 Valve.VR.EVRSceneApplicationState Valve.VR.IVRApplications/_GetSceneApplicationState::EndInvoke(System.IAsyncResult)
extern void _GetSceneApplicationState_EndInvoke_m8526A4318C0BCBFF85FD70E84F901065767130F8 (void);
// 0x00000372 System.Void Valve.VR.IVRApplications/_PerformApplicationPrelaunchCheck::.ctor(System.Object,System.IntPtr)
extern void _PerformApplicationPrelaunchCheck__ctor_m9D7A16C8F59CC82FD39E677E70F3616C4F02B5A8 (void);
// 0x00000373 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_PerformApplicationPrelaunchCheck::Invoke(System.IntPtr)
extern void _PerformApplicationPrelaunchCheck_Invoke_m8D6EF01D0CB9E75F2A8B15D08398E961F2A5E382 (void);
// 0x00000374 System.IAsyncResult Valve.VR.IVRApplications/_PerformApplicationPrelaunchCheck::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _PerformApplicationPrelaunchCheck_BeginInvoke_m6D6142684A17C5B2A4E655C954B92222D2A05FE7 (void);
// 0x00000375 Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_PerformApplicationPrelaunchCheck::EndInvoke(System.IAsyncResult)
extern void _PerformApplicationPrelaunchCheck_EndInvoke_m6B8EF0B50574EC85A5993D6F945CA60D8B5585B6 (void);
// 0x00000376 System.Void Valve.VR.IVRApplications/_GetSceneApplicationStateNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetSceneApplicationStateNameFromEnum__ctor_m3A0C085883CC1C3C21C69B13CCF2F948D79382A7 (void);
// 0x00000377 System.IntPtr Valve.VR.IVRApplications/_GetSceneApplicationStateNameFromEnum::Invoke(Valve.VR.EVRSceneApplicationState)
extern void _GetSceneApplicationStateNameFromEnum_Invoke_m052BE2700BFEAC0B9C2C02D7EEDDE1A678140CCC (void);
// 0x00000378 System.IAsyncResult Valve.VR.IVRApplications/_GetSceneApplicationStateNameFromEnum::BeginInvoke(Valve.VR.EVRSceneApplicationState,System.AsyncCallback,System.Object)
extern void _GetSceneApplicationStateNameFromEnum_BeginInvoke_m71CBDAA62544972F7E9A2F4B1C6CACBB78403D97 (void);
// 0x00000379 System.IntPtr Valve.VR.IVRApplications/_GetSceneApplicationStateNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetSceneApplicationStateNameFromEnum_EndInvoke_m7C576D40A1B6483A4B7353450DA3C653BBB39C02 (void);
// 0x0000037A System.Void Valve.VR.IVRApplications/_LaunchInternalProcess::.ctor(System.Object,System.IntPtr)
extern void _LaunchInternalProcess__ctor_mD715D4E53C6502A839513630F9512A22B1D372EE (void);
// 0x0000037B Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchInternalProcess::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void _LaunchInternalProcess_Invoke_m2F475AA428329139DCA7BE848602D64AF5B73843 (void);
// 0x0000037C System.IAsyncResult Valve.VR.IVRApplications/_LaunchInternalProcess::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _LaunchInternalProcess_BeginInvoke_m18EBBC862ECC7DE3A8B8A3DFEAA16D15E50E432D (void);
// 0x0000037D Valve.VR.EVRApplicationError Valve.VR.IVRApplications/_LaunchInternalProcess::EndInvoke(System.IAsyncResult)
extern void _LaunchInternalProcess_EndInvoke_m234BB770068DB6B7694D534A7C553650B1923E86 (void);
// 0x0000037E System.Void Valve.VR.IVRApplications/_GetCurrentSceneProcessId::.ctor(System.Object,System.IntPtr)
extern void _GetCurrentSceneProcessId__ctor_m13E5F36329A701A41F0DCF4867AED8696B7B2F6A (void);
// 0x0000037F System.UInt32 Valve.VR.IVRApplications/_GetCurrentSceneProcessId::Invoke()
extern void _GetCurrentSceneProcessId_Invoke_m7BC66763C751577BB5DD8F7319404E7B52C651B6 (void);
// 0x00000380 System.IAsyncResult Valve.VR.IVRApplications/_GetCurrentSceneProcessId::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetCurrentSceneProcessId_BeginInvoke_mC6303D67D5A46292C796F7259D93FCC55026E81C (void);
// 0x00000381 System.UInt32 Valve.VR.IVRApplications/_GetCurrentSceneProcessId::EndInvoke(System.IAsyncResult)
extern void _GetCurrentSceneProcessId_EndInvoke_m27704B16B69B2EDFC47E56DB7F2C4F24D09B9B47 (void);
// 0x00000382 System.Void Valve.VR.IVRChaperone/_GetCalibrationState::.ctor(System.Object,System.IntPtr)
extern void _GetCalibrationState__ctor_m05816C9069E933CAC9EB3F09CE59B9861196965E (void);
// 0x00000383 Valve.VR.ChaperoneCalibrationState Valve.VR.IVRChaperone/_GetCalibrationState::Invoke()
extern void _GetCalibrationState_Invoke_m2B2B8DC361E167628CAE8AD7CCCF7548FE089DDD (void);
// 0x00000384 System.IAsyncResult Valve.VR.IVRChaperone/_GetCalibrationState::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetCalibrationState_BeginInvoke_m60D7C7EF72A75155F1BF0627311E3D4F30CD1FD4 (void);
// 0x00000385 Valve.VR.ChaperoneCalibrationState Valve.VR.IVRChaperone/_GetCalibrationState::EndInvoke(System.IAsyncResult)
extern void _GetCalibrationState_EndInvoke_mC2E5F8AD80FC8C005A1C6F4D05F1FFA504CA67C5 (void);
// 0x00000386 System.Void Valve.VR.IVRChaperone/_GetPlayAreaSize::.ctor(System.Object,System.IntPtr)
extern void _GetPlayAreaSize__ctor_mC55E2A073376E46A91ACB787860A03AEC35462FF (void);
// 0x00000387 System.Boolean Valve.VR.IVRChaperone/_GetPlayAreaSize::Invoke(System.Single&,System.Single&)
extern void _GetPlayAreaSize_Invoke_m0A94C0DE871EA2CF0410D702813001431F2EF64E (void);
// 0x00000388 System.IAsyncResult Valve.VR.IVRChaperone/_GetPlayAreaSize::BeginInvoke(System.Single&,System.Single&,System.AsyncCallback,System.Object)
extern void _GetPlayAreaSize_BeginInvoke_m9FE0ED4E0F091C11335979839771EB4FF5E08231 (void);
// 0x00000389 System.Boolean Valve.VR.IVRChaperone/_GetPlayAreaSize::EndInvoke(System.Single&,System.Single&,System.IAsyncResult)
extern void _GetPlayAreaSize_EndInvoke_m7F3C97C1C6E6880CA800CFD8A63EDBD9DE5015E1 (void);
// 0x0000038A System.Void Valve.VR.IVRChaperone/_GetPlayAreaRect::.ctor(System.Object,System.IntPtr)
extern void _GetPlayAreaRect__ctor_m1B8144CCCBA3CD4677DE614A8CB97F474873089F (void);
// 0x0000038B System.Boolean Valve.VR.IVRChaperone/_GetPlayAreaRect::Invoke(Valve.VR.HmdQuad_t&)
extern void _GetPlayAreaRect_Invoke_m5AC0A6524F4E2B4077861EAA543C3A4E97427467 (void);
// 0x0000038C System.IAsyncResult Valve.VR.IVRChaperone/_GetPlayAreaRect::BeginInvoke(Valve.VR.HmdQuad_t&,System.AsyncCallback,System.Object)
extern void _GetPlayAreaRect_BeginInvoke_mC523C600D167A790D0558A29768A7869B86083F0 (void);
// 0x0000038D System.Boolean Valve.VR.IVRChaperone/_GetPlayAreaRect::EndInvoke(Valve.VR.HmdQuad_t&,System.IAsyncResult)
extern void _GetPlayAreaRect_EndInvoke_mDBE3F23A61A08FEDAF6B09575B8C17103AAA992F (void);
// 0x0000038E System.Void Valve.VR.IVRChaperone/_ReloadInfo::.ctor(System.Object,System.IntPtr)
extern void _ReloadInfo__ctor_mB2C1474FF6F843660B8E09104CE382301071F646 (void);
// 0x0000038F System.Void Valve.VR.IVRChaperone/_ReloadInfo::Invoke()
extern void _ReloadInfo_Invoke_m21BC6A5CF9319DAA91D199CBDD06B4667E8D6F9F (void);
// 0x00000390 System.IAsyncResult Valve.VR.IVRChaperone/_ReloadInfo::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ReloadInfo_BeginInvoke_m1E4886EE3E3CBDF49B4C0403024DD1712A585182 (void);
// 0x00000391 System.Void Valve.VR.IVRChaperone/_ReloadInfo::EndInvoke(System.IAsyncResult)
extern void _ReloadInfo_EndInvoke_mBC7344077A463B3D65C4BC35BE374F3CA0647A96 (void);
// 0x00000392 System.Void Valve.VR.IVRChaperone/_SetSceneColor::.ctor(System.Object,System.IntPtr)
extern void _SetSceneColor__ctor_m73BF4D2E9531B83DC175A92B96DE33ABA6AE487A (void);
// 0x00000393 System.Void Valve.VR.IVRChaperone/_SetSceneColor::Invoke(Valve.VR.HmdColor_t)
extern void _SetSceneColor_Invoke_mE8523EB4577CF4C0F46B6AE21E80754900A0AE3A (void);
// 0x00000394 System.IAsyncResult Valve.VR.IVRChaperone/_SetSceneColor::BeginInvoke(Valve.VR.HmdColor_t,System.AsyncCallback,System.Object)
extern void _SetSceneColor_BeginInvoke_m0CA41297A4483EFEC8C05112800D4AFCFCC35DE2 (void);
// 0x00000395 System.Void Valve.VR.IVRChaperone/_SetSceneColor::EndInvoke(System.IAsyncResult)
extern void _SetSceneColor_EndInvoke_m5F5CC03A800A4AC822B3E79F000FB17035C3344A (void);
// 0x00000396 System.Void Valve.VR.IVRChaperone/_GetBoundsColor::.ctor(System.Object,System.IntPtr)
extern void _GetBoundsColor__ctor_m3DF01EFBFD2D1B70279741AFCEC3DE440603654F (void);
// 0x00000397 System.Void Valve.VR.IVRChaperone/_GetBoundsColor::Invoke(Valve.VR.HmdColor_t&,System.Int32,System.Single,Valve.VR.HmdColor_t&)
extern void _GetBoundsColor_Invoke_m56F7FB72D6E562E5D493D1AA10CF578EE0AAB2E3 (void);
// 0x00000398 System.IAsyncResult Valve.VR.IVRChaperone/_GetBoundsColor::BeginInvoke(Valve.VR.HmdColor_t&,System.Int32,System.Single,Valve.VR.HmdColor_t&,System.AsyncCallback,System.Object)
extern void _GetBoundsColor_BeginInvoke_mFD91558B5B96CD1C508DF876DB4BF5E963B175D1 (void);
// 0x00000399 System.Void Valve.VR.IVRChaperone/_GetBoundsColor::EndInvoke(Valve.VR.HmdColor_t&,Valve.VR.HmdColor_t&,System.IAsyncResult)
extern void _GetBoundsColor_EndInvoke_mB04612CD131DE880E66D56B9D0B8D0413CBC243D (void);
// 0x0000039A System.Void Valve.VR.IVRChaperone/_AreBoundsVisible::.ctor(System.Object,System.IntPtr)
extern void _AreBoundsVisible__ctor_m6C7A9771FD5B6A48E76C19EBC2CF6BFEEFDE2683 (void);
// 0x0000039B System.Boolean Valve.VR.IVRChaperone/_AreBoundsVisible::Invoke()
extern void _AreBoundsVisible_Invoke_m427C43D6B0081E3AB82613BB6C199E0B25DC806F (void);
// 0x0000039C System.IAsyncResult Valve.VR.IVRChaperone/_AreBoundsVisible::BeginInvoke(System.AsyncCallback,System.Object)
extern void _AreBoundsVisible_BeginInvoke_mF790CCD2F35C99E5A47095F3FFE5117C817F14AF (void);
// 0x0000039D System.Boolean Valve.VR.IVRChaperone/_AreBoundsVisible::EndInvoke(System.IAsyncResult)
extern void _AreBoundsVisible_EndInvoke_m20D94A618BA9556C844DB44C6F59702EE6A1203B (void);
// 0x0000039E System.Void Valve.VR.IVRChaperone/_ForceBoundsVisible::.ctor(System.Object,System.IntPtr)
extern void _ForceBoundsVisible__ctor_mA21DEB58F585C2652977E85D545B68ECA4ABD2B3 (void);
// 0x0000039F System.Void Valve.VR.IVRChaperone/_ForceBoundsVisible::Invoke(System.Boolean)
extern void _ForceBoundsVisible_Invoke_m4837D163BA640E68D1C3916668E6E6C25620FED4 (void);
// 0x000003A0 System.IAsyncResult Valve.VR.IVRChaperone/_ForceBoundsVisible::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void _ForceBoundsVisible_BeginInvoke_mC7E31937D46FA2C7CC29CEA6B3F3D4D7C4D99F6B (void);
// 0x000003A1 System.Void Valve.VR.IVRChaperone/_ForceBoundsVisible::EndInvoke(System.IAsyncResult)
extern void _ForceBoundsVisible_EndInvoke_m1ED903EF7A3C4ADE8EBFB71194232AAE8408D37F (void);
// 0x000003A2 System.Void Valve.VR.IVRChaperone/_ResetZeroPose::.ctor(System.Object,System.IntPtr)
extern void _ResetZeroPose__ctor_mD59967DE4458235FE163B5DF2B174963DC4B27F4 (void);
// 0x000003A3 System.Void Valve.VR.IVRChaperone/_ResetZeroPose::Invoke(Valve.VR.ETrackingUniverseOrigin)
extern void _ResetZeroPose_Invoke_m60A75C4921A07A59498413F07C9EDEF6F0DC0125 (void);
// 0x000003A4 System.IAsyncResult Valve.VR.IVRChaperone/_ResetZeroPose::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,System.AsyncCallback,System.Object)
extern void _ResetZeroPose_BeginInvoke_mEDCD2B2B7B9E9D4D3E4E58F093050701D2816320 (void);
// 0x000003A5 System.Void Valve.VR.IVRChaperone/_ResetZeroPose::EndInvoke(System.IAsyncResult)
extern void _ResetZeroPose_EndInvoke_mD93A3BF7C3AEF290051AF1ED1FADCB92E52B09F8 (void);
// 0x000003A6 System.Void Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy::.ctor(System.Object,System.IntPtr)
extern void _CommitWorkingCopy__ctor_m0B3EE2119D388B97C113164B287EEA61CD64F2C7 (void);
// 0x000003A7 System.Boolean Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy::Invoke(Valve.VR.EChaperoneConfigFile)
extern void _CommitWorkingCopy_Invoke_mD62C7580ADC1DA19A15F1DC99DC7A3705C78412F (void);
// 0x000003A8 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy::BeginInvoke(Valve.VR.EChaperoneConfigFile,System.AsyncCallback,System.Object)
extern void _CommitWorkingCopy_BeginInvoke_m3FC64C890F01DB5B2487D87FD8E13DA89CE0A81D (void);
// 0x000003A9 System.Boolean Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy::EndInvoke(System.IAsyncResult)
extern void _CommitWorkingCopy_EndInvoke_m3E0FB3F2AD49C31D8986926757614C3976753002 (void);
// 0x000003AA System.Void Valve.VR.IVRChaperoneSetup/_RevertWorkingCopy::.ctor(System.Object,System.IntPtr)
extern void _RevertWorkingCopy__ctor_m5C1806CA913C0C370DC9865CD96EF6F6D7E9E453 (void);
// 0x000003AB System.Void Valve.VR.IVRChaperoneSetup/_RevertWorkingCopy::Invoke()
extern void _RevertWorkingCopy_Invoke_m2AB452ED37B1CBB8A06BCAA4CF918C1E114F3DBB (void);
// 0x000003AC System.IAsyncResult Valve.VR.IVRChaperoneSetup/_RevertWorkingCopy::BeginInvoke(System.AsyncCallback,System.Object)
extern void _RevertWorkingCopy_BeginInvoke_mE95C3E30A84CFB49F5D7435144ED347EC68845B2 (void);
// 0x000003AD System.Void Valve.VR.IVRChaperoneSetup/_RevertWorkingCopy::EndInvoke(System.IAsyncResult)
extern void _RevertWorkingCopy_EndInvoke_m06FDEE74EFE549EEA92BFFB4BD4F456963AF9281 (void);
// 0x000003AE System.Void Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaSize::.ctor(System.Object,System.IntPtr)
extern void _GetWorkingPlayAreaSize__ctor_m3667369E47690D904264434DD7C3D39E7CF48C2C (void);
// 0x000003AF System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaSize::Invoke(System.Single&,System.Single&)
extern void _GetWorkingPlayAreaSize_Invoke_m20BF12F418068B088279BDC8FC687731578C9956 (void);
// 0x000003B0 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaSize::BeginInvoke(System.Single&,System.Single&,System.AsyncCallback,System.Object)
extern void _GetWorkingPlayAreaSize_BeginInvoke_mB3635B13628A87049BA9CF7738C28716AC1EB1EA (void);
// 0x000003B1 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaSize::EndInvoke(System.Single&,System.Single&,System.IAsyncResult)
extern void _GetWorkingPlayAreaSize_EndInvoke_mAB6A0E61F2501D0ABC1CF421604CC65509824C18 (void);
// 0x000003B2 System.Void Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect::.ctor(System.Object,System.IntPtr)
extern void _GetWorkingPlayAreaRect__ctor_m631C66E95163B9A1E9A5245DD12690C6A5742A48 (void);
// 0x000003B3 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect::Invoke(Valve.VR.HmdQuad_t&)
extern void _GetWorkingPlayAreaRect_Invoke_m79F78E9709EF90F57E553BCD3A218F2864F7D3FA (void);
// 0x000003B4 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect::BeginInvoke(Valve.VR.HmdQuad_t&,System.AsyncCallback,System.Object)
extern void _GetWorkingPlayAreaRect_BeginInvoke_m0C3273FF5DA4B1956D6E7649F667158FD69223FA (void);
// 0x000003B5 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect::EndInvoke(Valve.VR.HmdQuad_t&,System.IAsyncResult)
extern void _GetWorkingPlayAreaRect_EndInvoke_m43F737067B84D43D2D0330FE3253E43CAF82DD23 (void);
// 0x000003B6 System.Void Valve.VR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo::.ctor(System.Object,System.IntPtr)
extern void _GetWorkingCollisionBoundsInfo__ctor_mD7A0476968978F48C5A0CBF08C21F953294534EF (void);
// 0x000003B7 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo::Invoke(Valve.VR.HmdQuad_t[],System.UInt32&)
extern void _GetWorkingCollisionBoundsInfo_Invoke_mA6A533EC8435C95C0ADCBCDBE8C8BF36D11BA409 (void);
// 0x000003B8 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo::BeginInvoke(Valve.VR.HmdQuad_t[],System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetWorkingCollisionBoundsInfo_BeginInvoke_m994C90F35BC31146FA9ABD13FBACC5A99DDB184C (void);
// 0x000003B9 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetWorkingCollisionBoundsInfo_EndInvoke_m97820427E415E3188435B1485DAB9C13842A2094 (void);
// 0x000003BA System.Void Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo::.ctor(System.Object,System.IntPtr)
extern void _GetLiveCollisionBoundsInfo__ctor_m04060CCAEEE014C837C132B5E04E3AFD98B5D45A (void);
// 0x000003BB System.Boolean Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo::Invoke(Valve.VR.HmdQuad_t[],System.UInt32&)
extern void _GetLiveCollisionBoundsInfo_Invoke_mE1F91F1678A05D342FC8A2F50C928DB931B85A2E (void);
// 0x000003BC System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo::BeginInvoke(Valve.VR.HmdQuad_t[],System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetLiveCollisionBoundsInfo_BeginInvoke_mE922BEA3BFAD6750524DBA3997E4DE7C848F1A43 (void);
// 0x000003BD System.Boolean Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetLiveCollisionBoundsInfo_EndInvoke_mC2D0CDE61E07BB4D66F25ADC20A8F1A851CE2515 (void);
// 0x000003BE System.Void Valve.VR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _GetWorkingSeatedZeroPoseToRawTrackingPose__ctor_m5D2092D41B58AF9F2A9B9FE4B2CB69503150EB46 (void);
// 0x000003BF System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose::Invoke(Valve.VR.HmdMatrix34_t&)
extern void _GetWorkingSeatedZeroPoseToRawTrackingPose_Invoke_m179283D07C19038F28E64D0073CDA650B7F28C03 (void);
// 0x000003C0 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke(Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetWorkingSeatedZeroPoseToRawTrackingPose_BeginInvoke_mCF775FEC50DF1A0DF39FB6EFC5FCF4F16AF17E7F (void);
// 0x000003C1 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetWorkingSeatedZeroPoseToRawTrackingPose_EndInvoke_m296FE95B2B8EFDCF8DB65318473631D6B4831B46 (void);
// 0x000003C2 System.Void Valve.VR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _GetWorkingStandingZeroPoseToRawTrackingPose__ctor_mD56A8894F92C655C323E19E0828DDE4D4047E8C7 (void);
// 0x000003C3 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose::Invoke(Valve.VR.HmdMatrix34_t&)
extern void _GetWorkingStandingZeroPoseToRawTrackingPose_Invoke_m8F3F25032C7BA054E29DD370079FAEE1B78EC060 (void);
// 0x000003C4 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose::BeginInvoke(Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetWorkingStandingZeroPoseToRawTrackingPose_BeginInvoke_mF989CED7AB16DE03E92DCACF5BF182C06718A5A5 (void);
// 0x000003C5 System.Boolean Valve.VR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetWorkingStandingZeroPoseToRawTrackingPose_EndInvoke_mC8786E0AD136A0223F18EF7616C26A55D18455E4 (void);
// 0x000003C6 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize::.ctor(System.Object,System.IntPtr)
extern void _SetWorkingPlayAreaSize__ctor_m58731A7114B09A63B35C76D7C259CF3443E2AD0E (void);
// 0x000003C7 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize::Invoke(System.Single,System.Single)
extern void _SetWorkingPlayAreaSize_Invoke_mEFE190AEB9D54F460A5FF463B287655FE56B1C78 (void);
// 0x000003C8 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize::BeginInvoke(System.Single,System.Single,System.AsyncCallback,System.Object)
extern void _SetWorkingPlayAreaSize_BeginInvoke_mE06A231917648D9BD1BAF7B31C6BB050EFC2B0C2 (void);
// 0x000003C9 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize::EndInvoke(System.IAsyncResult)
extern void _SetWorkingPlayAreaSize_EndInvoke_m6BAE0EF8F189D971D13A08C1F9548C6BD57AB92D (void);
// 0x000003CA System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo::.ctor(System.Object,System.IntPtr)
extern void _SetWorkingCollisionBoundsInfo__ctor_m71ED70F8282065AD2153145684BFC04A45C2BF9C (void);
// 0x000003CB System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo::Invoke(Valve.VR.HmdQuad_t[],System.UInt32)
extern void _SetWorkingCollisionBoundsInfo_Invoke_m1A1E45AE96BBD86A213EA297873F3E8532E36064 (void);
// 0x000003CC System.IAsyncResult Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo::BeginInvoke(Valve.VR.HmdQuad_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _SetWorkingCollisionBoundsInfo_BeginInvoke_mB5D8627059B84564F58C592848914C33E93C6710 (void);
// 0x000003CD System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo::EndInvoke(System.IAsyncResult)
extern void _SetWorkingCollisionBoundsInfo_EndInvoke_mF685AC46B645886DA746547BE4D8FFD4AE58E63E (void);
// 0x000003CE System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingPerimeter::.ctor(System.Object,System.IntPtr)
extern void _SetWorkingPerimeter__ctor_m14D52FBE600DFC016A8BE1BAEFFCBDE2BA39E53A (void);
// 0x000003CF System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingPerimeter::Invoke(Valve.VR.HmdVector2_t[],System.UInt32)
extern void _SetWorkingPerimeter_Invoke_m9A0E89B9DCC7CD8F731E125922E7D3EC418EAF5F (void);
// 0x000003D0 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_SetWorkingPerimeter::BeginInvoke(Valve.VR.HmdVector2_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _SetWorkingPerimeter_BeginInvoke_m3301CF999483A712D92F2CC2D56E8E800B400A0C (void);
// 0x000003D1 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingPerimeter::EndInvoke(System.IAsyncResult)
extern void _SetWorkingPerimeter_EndInvoke_m6B9F9CA839F36BC19CACA253DF6C73D66A859F0D (void);
// 0x000003D2 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _SetWorkingSeatedZeroPoseToRawTrackingPose__ctor_mED640B6E5BF461BD9E7FF4F43FE20B10D7FB9FA6 (void);
// 0x000003D3 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke(Valve.VR.HmdMatrix34_t&)
extern void _SetWorkingSeatedZeroPoseToRawTrackingPose_Invoke_m8A6DB8AC6AE63773FAC6873512D10743A4B0D61F (void);
// 0x000003D4 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke(Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _SetWorkingSeatedZeroPoseToRawTrackingPose_BeginInvoke_m25D734EF380BC995A2B6C41E4400520422C4FE85 (void);
// 0x000003D5 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _SetWorkingSeatedZeroPoseToRawTrackingPose_EndInvoke_mCC81A7C1256690C86DA6B79C2983F18A613D41A6 (void);
// 0x000003D6 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _SetWorkingStandingZeroPoseToRawTrackingPose__ctor_m66208500CDA2DB3ACE7A625063D1D741A1F3E900 (void);
// 0x000003D7 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose::Invoke(Valve.VR.HmdMatrix34_t&)
extern void _SetWorkingStandingZeroPoseToRawTrackingPose_Invoke_m8B641482AC27DF4012D657655A6B30FCDE02680B (void);
// 0x000003D8 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose::BeginInvoke(Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _SetWorkingStandingZeroPoseToRawTrackingPose_BeginInvoke_m4DF872A865DEF23ACDBB58770AC96B84E9FC0710 (void);
// 0x000003D9 System.Void Valve.VR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _SetWorkingStandingZeroPoseToRawTrackingPose_EndInvoke_m2104B6B4E56F12273654A9714C6E08A013C78328 (void);
// 0x000003DA System.Void Valve.VR.IVRChaperoneSetup/_ReloadFromDisk::.ctor(System.Object,System.IntPtr)
extern void _ReloadFromDisk__ctor_m9EA3FF3F16EA5A27C1E7E9E4DBF46B264D68312E (void);
// 0x000003DB System.Void Valve.VR.IVRChaperoneSetup/_ReloadFromDisk::Invoke(Valve.VR.EChaperoneConfigFile)
extern void _ReloadFromDisk_Invoke_m9BBD49785CB41BEB169BDB39AB0B1087AF79F7B1 (void);
// 0x000003DC System.IAsyncResult Valve.VR.IVRChaperoneSetup/_ReloadFromDisk::BeginInvoke(Valve.VR.EChaperoneConfigFile,System.AsyncCallback,System.Object)
extern void _ReloadFromDisk_BeginInvoke_mE79F28BD6525B3EE0990EE8E12DE03DD1A0ECBBC (void);
// 0x000003DD System.Void Valve.VR.IVRChaperoneSetup/_ReloadFromDisk::EndInvoke(System.IAsyncResult)
extern void _ReloadFromDisk_EndInvoke_m8461A306F8F2E0E124ABBC4ABE222DB38B27494C (void);
// 0x000003DE System.Void Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose::.ctor(System.Object,System.IntPtr)
extern void _GetLiveSeatedZeroPoseToRawTrackingPose__ctor_m444EB65768D7C4DA60996F40C5FFB61C4D041FEF (void);
// 0x000003DF System.Boolean Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose::Invoke(Valve.VR.HmdMatrix34_t&)
extern void _GetLiveSeatedZeroPoseToRawTrackingPose_Invoke_m95CC5E17B1B02EC957F523CEA586611A5E07B7F0 (void);
// 0x000003E0 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose::BeginInvoke(Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetLiveSeatedZeroPoseToRawTrackingPose_BeginInvoke_m487B08FD6D888863594CC6AB0A9F8958C9A09324 (void);
// 0x000003E1 System.Boolean Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetLiveSeatedZeroPoseToRawTrackingPose_EndInvoke_m8E0D7260344B6F9EB10E84FDA852689E8CAF39D9 (void);
// 0x000003E2 System.Void Valve.VR.IVRChaperoneSetup/_ExportLiveToBuffer::.ctor(System.Object,System.IntPtr)
extern void _ExportLiveToBuffer__ctor_m67143B1FF4B60EAB8FDB642C5D1814F9F6B8B3DD (void);
// 0x000003E3 System.Boolean Valve.VR.IVRChaperoneSetup/_ExportLiveToBuffer::Invoke(System.Text.StringBuilder,System.UInt32&)
extern void _ExportLiveToBuffer_Invoke_mC0A49C5584DF7287952A9673E28ED474F129EB79 (void);
// 0x000003E4 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_ExportLiveToBuffer::BeginInvoke(System.Text.StringBuilder,System.UInt32&,System.AsyncCallback,System.Object)
extern void _ExportLiveToBuffer_BeginInvoke_mA649694C80092626E183BC654E53BC4154F4565E (void);
// 0x000003E5 System.Boolean Valve.VR.IVRChaperoneSetup/_ExportLiveToBuffer::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _ExportLiveToBuffer_EndInvoke_m9C8453AC3EA9CCCD0E2F5DA1C7A0E2C1F7854D18 (void);
// 0x000003E6 System.Void Valve.VR.IVRChaperoneSetup/_ImportFromBufferToWorking::.ctor(System.Object,System.IntPtr)
extern void _ImportFromBufferToWorking__ctor_m03C04DCA4E988E0F053C31516BA73B5A33286C47 (void);
// 0x000003E7 System.Boolean Valve.VR.IVRChaperoneSetup/_ImportFromBufferToWorking::Invoke(System.IntPtr,System.UInt32)
extern void _ImportFromBufferToWorking_Invoke_m89C838DC82C4FA2E80B285EF3817AC5E4071F44D (void);
// 0x000003E8 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_ImportFromBufferToWorking::BeginInvoke(System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern void _ImportFromBufferToWorking_BeginInvoke_m71845D4D9C04D788F8773BB234983756B259DCD6 (void);
// 0x000003E9 System.Boolean Valve.VR.IVRChaperoneSetup/_ImportFromBufferToWorking::EndInvoke(System.IAsyncResult)
extern void _ImportFromBufferToWorking_EndInvoke_m67E4B06D03482CBD81FA277F33EFEE48256A3C88 (void);
// 0x000003EA System.Void Valve.VR.IVRChaperoneSetup/_ShowWorkingSetPreview::.ctor(System.Object,System.IntPtr)
extern void _ShowWorkingSetPreview__ctor_mF5C14B4EF5153E41F7D18CD9EC57CB8DC68EEB6E (void);
// 0x000003EB System.Void Valve.VR.IVRChaperoneSetup/_ShowWorkingSetPreview::Invoke()
extern void _ShowWorkingSetPreview_Invoke_mF51C59677F90E915899B56BBD1431B63F8B1EC00 (void);
// 0x000003EC System.IAsyncResult Valve.VR.IVRChaperoneSetup/_ShowWorkingSetPreview::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ShowWorkingSetPreview_BeginInvoke_m9EF3B5B395CE548C0AEED133F0D5BAA306286303 (void);
// 0x000003ED System.Void Valve.VR.IVRChaperoneSetup/_ShowWorkingSetPreview::EndInvoke(System.IAsyncResult)
extern void _ShowWorkingSetPreview_EndInvoke_m57B4D862C497E75466FA033BC8BE2B66E2970098 (void);
// 0x000003EE System.Void Valve.VR.IVRChaperoneSetup/_HideWorkingSetPreview::.ctor(System.Object,System.IntPtr)
extern void _HideWorkingSetPreview__ctor_m2F6FAB41550DDA62E93A74673F73FA8F01A3D706 (void);
// 0x000003EF System.Void Valve.VR.IVRChaperoneSetup/_HideWorkingSetPreview::Invoke()
extern void _HideWorkingSetPreview_Invoke_mD229818C545E61780513820FE3432132B4BE874F (void);
// 0x000003F0 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_HideWorkingSetPreview::BeginInvoke(System.AsyncCallback,System.Object)
extern void _HideWorkingSetPreview_BeginInvoke_m009163C7BFC1713680E4B22C12E3976DED6A6C8B (void);
// 0x000003F1 System.Void Valve.VR.IVRChaperoneSetup/_HideWorkingSetPreview::EndInvoke(System.IAsyncResult)
extern void _HideWorkingSetPreview_EndInvoke_mB41CC379B283C2AF99082DFAA5065590FB052B84 (void);
// 0x000003F2 System.Void Valve.VR.IVRChaperoneSetup/_RoomSetupStarting::.ctor(System.Object,System.IntPtr)
extern void _RoomSetupStarting__ctor_m066B440F1F9D883B5090A3F9CAA15C63E72842A0 (void);
// 0x000003F3 System.Void Valve.VR.IVRChaperoneSetup/_RoomSetupStarting::Invoke()
extern void _RoomSetupStarting_Invoke_m2820BAB50828E1FDFC795907788C5DF2B1B57000 (void);
// 0x000003F4 System.IAsyncResult Valve.VR.IVRChaperoneSetup/_RoomSetupStarting::BeginInvoke(System.AsyncCallback,System.Object)
extern void _RoomSetupStarting_BeginInvoke_m1748D39A287C01030FF1063AD0F25F3D80F641CA (void);
// 0x000003F5 System.Void Valve.VR.IVRChaperoneSetup/_RoomSetupStarting::EndInvoke(System.IAsyncResult)
extern void _RoomSetupStarting_EndInvoke_mE88EF2A9054DD63B14C519D21ED0B6764759019A (void);
// 0x000003F6 System.Void Valve.VR.IVRCompositor/_SetTrackingSpace::.ctor(System.Object,System.IntPtr)
extern void _SetTrackingSpace__ctor_m03ABCB9B79457CCC5A8BE21F7336DA07EA15C676 (void);
// 0x000003F7 System.Void Valve.VR.IVRCompositor/_SetTrackingSpace::Invoke(Valve.VR.ETrackingUniverseOrigin)
extern void _SetTrackingSpace_Invoke_m67D4984251B73BE8EC3BC0664607D207FCCB4851 (void);
// 0x000003F8 System.IAsyncResult Valve.VR.IVRCompositor/_SetTrackingSpace::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,System.AsyncCallback,System.Object)
extern void _SetTrackingSpace_BeginInvoke_m6EEAA541CAB9346D7343882D93FD62453D4E259C (void);
// 0x000003F9 System.Void Valve.VR.IVRCompositor/_SetTrackingSpace::EndInvoke(System.IAsyncResult)
extern void _SetTrackingSpace_EndInvoke_m6CE9A966E908CC0301491505F4E0530D7B66D132 (void);
// 0x000003FA System.Void Valve.VR.IVRCompositor/_GetTrackingSpace::.ctor(System.Object,System.IntPtr)
extern void _GetTrackingSpace__ctor_m37F6503512CD44801A572516F8E70117A1BE739F (void);
// 0x000003FB Valve.VR.ETrackingUniverseOrigin Valve.VR.IVRCompositor/_GetTrackingSpace::Invoke()
extern void _GetTrackingSpace_Invoke_mBCE98E49C7819603F0F250922E14C08ABBF120D6 (void);
// 0x000003FC System.IAsyncResult Valve.VR.IVRCompositor/_GetTrackingSpace::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetTrackingSpace_BeginInvoke_m6A63D6711E6A3240471C89AF0D168E4281BD2D52 (void);
// 0x000003FD Valve.VR.ETrackingUniverseOrigin Valve.VR.IVRCompositor/_GetTrackingSpace::EndInvoke(System.IAsyncResult)
extern void _GetTrackingSpace_EndInvoke_mD3A8C0F98BD118183A2D288FCCA6A8D5B9FDD7C0 (void);
// 0x000003FE System.Void Valve.VR.IVRCompositor/_WaitGetPoses::.ctor(System.Object,System.IntPtr)
extern void _WaitGetPoses__ctor_mF08E51B4A262A11BF811BAEB6741B22CEEC182D9 (void);
// 0x000003FF Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_WaitGetPoses::Invoke(Valve.VR.TrackedDevicePose_t[],System.UInt32,Valve.VR.TrackedDevicePose_t[],System.UInt32)
extern void _WaitGetPoses_Invoke_m5E40A435F4B70853F9529122C0D2CF038A333860 (void);
// 0x00000400 System.IAsyncResult Valve.VR.IVRCompositor/_WaitGetPoses::BeginInvoke(Valve.VR.TrackedDevicePose_t[],System.UInt32,Valve.VR.TrackedDevicePose_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _WaitGetPoses_BeginInvoke_m023950A600C3CA77F8E36686C4C3CBE6F49465C9 (void);
// 0x00000401 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_WaitGetPoses::EndInvoke(System.IAsyncResult)
extern void _WaitGetPoses_EndInvoke_m6FB653ED757797EC261ABCF44AEE3EC63088A174 (void);
// 0x00000402 System.Void Valve.VR.IVRCompositor/_GetLastPoses::.ctor(System.Object,System.IntPtr)
extern void _GetLastPoses__ctor_m7F1182FD3316EEDBDCB8D8B50843F024C07AD10A (void);
// 0x00000403 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetLastPoses::Invoke(Valve.VR.TrackedDevicePose_t[],System.UInt32,Valve.VR.TrackedDevicePose_t[],System.UInt32)
extern void _GetLastPoses_Invoke_m0D2CE329D7570AA242AEF11A0E8AEAE3E8DC6D62 (void);
// 0x00000404 System.IAsyncResult Valve.VR.IVRCompositor/_GetLastPoses::BeginInvoke(Valve.VR.TrackedDevicePose_t[],System.UInt32,Valve.VR.TrackedDevicePose_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetLastPoses_BeginInvoke_m70C0000BED51025CD7982AB7D96F74F02B0170FA (void);
// 0x00000405 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetLastPoses::EndInvoke(System.IAsyncResult)
extern void _GetLastPoses_EndInvoke_m3DC6DA8C1F4C95E5158393160612CAF03220914A (void);
// 0x00000406 System.Void Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex::.ctor(System.Object,System.IntPtr)
extern void _GetLastPoseForTrackedDeviceIndex__ctor_m7855230C7B92004877C9555E2A9E5D3C8269C1DC (void);
// 0x00000407 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex::Invoke(System.UInt32,Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&)
extern void _GetLastPoseForTrackedDeviceIndex_Invoke_mB61532E38E0883AECD2B935057BAA76791BB64EE (void);
// 0x00000408 System.IAsyncResult Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex::BeginInvoke(System.UInt32,Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&,System.AsyncCallback,System.Object)
extern void _GetLastPoseForTrackedDeviceIndex_BeginInvoke_m815409E75D9F9171428E023B8E97B7DDE84A58AB (void);
// 0x00000409 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex::EndInvoke(Valve.VR.TrackedDevicePose_t&,Valve.VR.TrackedDevicePose_t&,System.IAsyncResult)
extern void _GetLastPoseForTrackedDeviceIndex_EndInvoke_mF331F63253EEA967A6FDE1E1D92F4320A1799247 (void);
// 0x0000040A System.Void Valve.VR.IVRCompositor/_Submit::.ctor(System.Object,System.IntPtr)
extern void _Submit__ctor_m308CB6F484FB7CFFBA95811A76C8E707EB2F3E6F (void);
// 0x0000040B Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_Submit::Invoke(Valve.VR.EVREye,Valve.VR.Texture_t&,Valve.VR.VRTextureBounds_t&,Valve.VR.EVRSubmitFlags)
extern void _Submit_Invoke_m5A46D9E4C920B04568E8535B997E70E9DDAFA05D (void);
// 0x0000040C System.IAsyncResult Valve.VR.IVRCompositor/_Submit::BeginInvoke(Valve.VR.EVREye,Valve.VR.Texture_t&,Valve.VR.VRTextureBounds_t&,Valve.VR.EVRSubmitFlags,System.AsyncCallback,System.Object)
extern void _Submit_BeginInvoke_m8B75E18B928AC9DC3FF2C6F479CCB413418749F0 (void);
// 0x0000040D Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_Submit::EndInvoke(Valve.VR.Texture_t&,Valve.VR.VRTextureBounds_t&,System.IAsyncResult)
extern void _Submit_EndInvoke_m5E85F1CED9F6BDA1888BDCA9E71BB70294BB104F (void);
// 0x0000040E System.Void Valve.VR.IVRCompositor/_ClearLastSubmittedFrame::.ctor(System.Object,System.IntPtr)
extern void _ClearLastSubmittedFrame__ctor_mC5651FBB66083C473F251C466C9D7AEBD957C5FF (void);
// 0x0000040F System.Void Valve.VR.IVRCompositor/_ClearLastSubmittedFrame::Invoke()
extern void _ClearLastSubmittedFrame_Invoke_mE53E90D4630F66D5A8AC8993E3DC2175AAD18F44 (void);
// 0x00000410 System.IAsyncResult Valve.VR.IVRCompositor/_ClearLastSubmittedFrame::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ClearLastSubmittedFrame_BeginInvoke_mECF47C3E172B849925514BB5FA01B3B31EF774D0 (void);
// 0x00000411 System.Void Valve.VR.IVRCompositor/_ClearLastSubmittedFrame::EndInvoke(System.IAsyncResult)
extern void _ClearLastSubmittedFrame_EndInvoke_mB2F3523A2A9E064816CCF430041697A696665E1C (void);
// 0x00000412 System.Void Valve.VR.IVRCompositor/_PostPresentHandoff::.ctor(System.Object,System.IntPtr)
extern void _PostPresentHandoff__ctor_m562E65CC7A18A0B006C67436FFD6874872F62BB8 (void);
// 0x00000413 System.Void Valve.VR.IVRCompositor/_PostPresentHandoff::Invoke()
extern void _PostPresentHandoff_Invoke_mA9F3F0CE66F18CF3D2FF648C7FBBD80AF18C6CAD (void);
// 0x00000414 System.IAsyncResult Valve.VR.IVRCompositor/_PostPresentHandoff::BeginInvoke(System.AsyncCallback,System.Object)
extern void _PostPresentHandoff_BeginInvoke_m1D8B79CBF7927B011A8B9587080E9892C84E101E (void);
// 0x00000415 System.Void Valve.VR.IVRCompositor/_PostPresentHandoff::EndInvoke(System.IAsyncResult)
extern void _PostPresentHandoff_EndInvoke_m25111B8F210A0F30052DEB1966C6AF49B1C67FFD (void);
// 0x00000416 System.Void Valve.VR.IVRCompositor/_GetFrameTiming::.ctor(System.Object,System.IntPtr)
extern void _GetFrameTiming__ctor_m8A3BBEA403E4B0572A61CC729A81FE68BC48D4C2 (void);
// 0x00000417 System.Boolean Valve.VR.IVRCompositor/_GetFrameTiming::Invoke(Valve.VR.Compositor_FrameTiming&,System.UInt32)
extern void _GetFrameTiming_Invoke_mFFD8DE2BE77A8D576B3167C33FC11B007DCF35EA (void);
// 0x00000418 System.IAsyncResult Valve.VR.IVRCompositor/_GetFrameTiming::BeginInvoke(Valve.VR.Compositor_FrameTiming&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetFrameTiming_BeginInvoke_m5756D98BD03797ED57CBBF4288C7CDDC399F4FA0 (void);
// 0x00000419 System.Boolean Valve.VR.IVRCompositor/_GetFrameTiming::EndInvoke(Valve.VR.Compositor_FrameTiming&,System.IAsyncResult)
extern void _GetFrameTiming_EndInvoke_m044B9BE4388C2B40EF1879B499E9E362D83A3F94 (void);
// 0x0000041A System.Void Valve.VR.IVRCompositor/_GetFrameTimings::.ctor(System.Object,System.IntPtr)
extern void _GetFrameTimings__ctor_m4D8B978E09F87A2A9F76B2FF82BDD60B1E8DAB73 (void);
// 0x0000041B System.UInt32 Valve.VR.IVRCompositor/_GetFrameTimings::Invoke(Valve.VR.Compositor_FrameTiming[],System.UInt32)
extern void _GetFrameTimings_Invoke_m1ECBCA45242D34E054574DEAD5A29E58EF483149 (void);
// 0x0000041C System.IAsyncResult Valve.VR.IVRCompositor/_GetFrameTimings::BeginInvoke(Valve.VR.Compositor_FrameTiming[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetFrameTimings_BeginInvoke_m754CC37E30C8DA3A1E2D8313F5C605687DBE6B06 (void);
// 0x0000041D System.UInt32 Valve.VR.IVRCompositor/_GetFrameTimings::EndInvoke(System.IAsyncResult)
extern void _GetFrameTimings_EndInvoke_m8321184C97B2F9F6344E14E4E66042EC384F10DE (void);
// 0x0000041E System.Void Valve.VR.IVRCompositor/_GetFrameTimeRemaining::.ctor(System.Object,System.IntPtr)
extern void _GetFrameTimeRemaining__ctor_mF07E58AE1F8C6D0848045FC55D70E7D041AA732E (void);
// 0x0000041F System.Single Valve.VR.IVRCompositor/_GetFrameTimeRemaining::Invoke()
extern void _GetFrameTimeRemaining_Invoke_m9F36795A553B849104DD4B84E93DE113E2A02D09 (void);
// 0x00000420 System.IAsyncResult Valve.VR.IVRCompositor/_GetFrameTimeRemaining::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetFrameTimeRemaining_BeginInvoke_m2887A4DBDE83E31060F49863B1B7FC5FCE941C93 (void);
// 0x00000421 System.Single Valve.VR.IVRCompositor/_GetFrameTimeRemaining::EndInvoke(System.IAsyncResult)
extern void _GetFrameTimeRemaining_EndInvoke_mEB14113A65B100E9C8F274BFB782D41C37CB5BF1 (void);
// 0x00000422 System.Void Valve.VR.IVRCompositor/_GetCumulativeStats::.ctor(System.Object,System.IntPtr)
extern void _GetCumulativeStats__ctor_mFEE0AE41B64F0E7457424CE5FE95C6C54BA80351 (void);
// 0x00000423 System.Void Valve.VR.IVRCompositor/_GetCumulativeStats::Invoke(Valve.VR.Compositor_CumulativeStats&,System.UInt32)
extern void _GetCumulativeStats_Invoke_m0443B8625EDEB1D5B11AA478C684286FD855FA38 (void);
// 0x00000424 System.IAsyncResult Valve.VR.IVRCompositor/_GetCumulativeStats::BeginInvoke(Valve.VR.Compositor_CumulativeStats&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetCumulativeStats_BeginInvoke_m01D69C93CDB84BB8296D739BA67CABDB9562E09F (void);
// 0x00000425 System.Void Valve.VR.IVRCompositor/_GetCumulativeStats::EndInvoke(Valve.VR.Compositor_CumulativeStats&,System.IAsyncResult)
extern void _GetCumulativeStats_EndInvoke_mDB1C61972CEB8262AB77EC6AC3D733C0CDA2EC4E (void);
// 0x00000426 System.Void Valve.VR.IVRCompositor/_FadeToColor::.ctor(System.Object,System.IntPtr)
extern void _FadeToColor__ctor_m0F314D8748E1C605407C6308AD42E6A963EB2848 (void);
// 0x00000427 System.Void Valve.VR.IVRCompositor/_FadeToColor::Invoke(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern void _FadeToColor_Invoke_mEDD58F09A857B0F17BB3958103F83C60530EEE7B (void);
// 0x00000428 System.IAsyncResult Valve.VR.IVRCompositor/_FadeToColor::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.AsyncCallback,System.Object)
extern void _FadeToColor_BeginInvoke_mCBEDD02A23615C9E5BD2551D391E48539D26A750 (void);
// 0x00000429 System.Void Valve.VR.IVRCompositor/_FadeToColor::EndInvoke(System.IAsyncResult)
extern void _FadeToColor_EndInvoke_m0D605F60C8110603D71B6680B486FB4F0B875A81 (void);
// 0x0000042A System.Void Valve.VR.IVRCompositor/_GetCurrentFadeColor::.ctor(System.Object,System.IntPtr)
extern void _GetCurrentFadeColor__ctor_m4FF98250992DCCA34BE8C09783259231EAC268C9 (void);
// 0x0000042B Valve.VR.HmdColor_t Valve.VR.IVRCompositor/_GetCurrentFadeColor::Invoke(System.Boolean)
extern void _GetCurrentFadeColor_Invoke_m3A565A37FCC39B533667415F023E9C782EF42029 (void);
// 0x0000042C System.IAsyncResult Valve.VR.IVRCompositor/_GetCurrentFadeColor::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void _GetCurrentFadeColor_BeginInvoke_m4E840E08E93AD28A6659FF46766F84E78C7174F2 (void);
// 0x0000042D Valve.VR.HmdColor_t Valve.VR.IVRCompositor/_GetCurrentFadeColor::EndInvoke(System.IAsyncResult)
extern void _GetCurrentFadeColor_EndInvoke_m7AD3F1FA50A6823563B1AA7E9F14751AAAE991D5 (void);
// 0x0000042E System.Void Valve.VR.IVRCompositor/_FadeGrid::.ctor(System.Object,System.IntPtr)
extern void _FadeGrid__ctor_m73C4BBD52B2434CD9A7C770A70095289E21D88F5 (void);
// 0x0000042F System.Void Valve.VR.IVRCompositor/_FadeGrid::Invoke(System.Single,System.Boolean)
extern void _FadeGrid_Invoke_m9E05D8ACC2212ECB8BEBAC27F9A4B042E8AFF7FA (void);
// 0x00000430 System.IAsyncResult Valve.VR.IVRCompositor/_FadeGrid::BeginInvoke(System.Single,System.Boolean,System.AsyncCallback,System.Object)
extern void _FadeGrid_BeginInvoke_m35A6FB560544D72D1805D6027205EDBFC2EDF3D9 (void);
// 0x00000431 System.Void Valve.VR.IVRCompositor/_FadeGrid::EndInvoke(System.IAsyncResult)
extern void _FadeGrid_EndInvoke_m3F789E9C6034E1B56090A5AE79ED970BF0DB017B (void);
// 0x00000432 System.Void Valve.VR.IVRCompositor/_GetCurrentGridAlpha::.ctor(System.Object,System.IntPtr)
extern void _GetCurrentGridAlpha__ctor_mE82C9F3E387EAF1683526D774665DC1A3D8E443A (void);
// 0x00000433 System.Single Valve.VR.IVRCompositor/_GetCurrentGridAlpha::Invoke()
extern void _GetCurrentGridAlpha_Invoke_mAE5612038EEDB66EDA1553D057B16A9BC56F8483 (void);
// 0x00000434 System.IAsyncResult Valve.VR.IVRCompositor/_GetCurrentGridAlpha::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetCurrentGridAlpha_BeginInvoke_mCE2482577BC96B55A87AC03D3CFC218E76F1F899 (void);
// 0x00000435 System.Single Valve.VR.IVRCompositor/_GetCurrentGridAlpha::EndInvoke(System.IAsyncResult)
extern void _GetCurrentGridAlpha_EndInvoke_m5C80FAF5C8875312B7DEF753A851F002FBBD8660 (void);
// 0x00000436 System.Void Valve.VR.IVRCompositor/_SetSkyboxOverride::.ctor(System.Object,System.IntPtr)
extern void _SetSkyboxOverride__ctor_m3558ED217E55B2B89B9762A56C3D68C6B2FB72EC (void);
// 0x00000437 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_SetSkyboxOverride::Invoke(Valve.VR.Texture_t[],System.UInt32)
extern void _SetSkyboxOverride_Invoke_m422FA534BE787AD97B611EBC82438E658A531E23 (void);
// 0x00000438 System.IAsyncResult Valve.VR.IVRCompositor/_SetSkyboxOverride::BeginInvoke(Valve.VR.Texture_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _SetSkyboxOverride_BeginInvoke_m7703A2643EE36421272F6C65C56DC05B700F218F (void);
// 0x00000439 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_SetSkyboxOverride::EndInvoke(System.IAsyncResult)
extern void _SetSkyboxOverride_EndInvoke_m97E5B9DA41EAB2181162F2900BA60AF8EDA10A6C (void);
// 0x0000043A System.Void Valve.VR.IVRCompositor/_ClearSkyboxOverride::.ctor(System.Object,System.IntPtr)
extern void _ClearSkyboxOverride__ctor_m1819B611D9A1DBC47F8E46D2BF3FAEAC434F7E3C (void);
// 0x0000043B System.Void Valve.VR.IVRCompositor/_ClearSkyboxOverride::Invoke()
extern void _ClearSkyboxOverride_Invoke_mFFE28DE9FBA73A8A082FC095FFF6D036EBB5D064 (void);
// 0x0000043C System.IAsyncResult Valve.VR.IVRCompositor/_ClearSkyboxOverride::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ClearSkyboxOverride_BeginInvoke_m934CF4879D4FD64B9EF84D19E2B51D1F1801A85B (void);
// 0x0000043D System.Void Valve.VR.IVRCompositor/_ClearSkyboxOverride::EndInvoke(System.IAsyncResult)
extern void _ClearSkyboxOverride_EndInvoke_mE02AD8C47C3B208F5650CAB19739E6D0332D7A11 (void);
// 0x0000043E System.Void Valve.VR.IVRCompositor/_CompositorBringToFront::.ctor(System.Object,System.IntPtr)
extern void _CompositorBringToFront__ctor_m084E5461F2A104D0A54463BA680F279151715B94 (void);
// 0x0000043F System.Void Valve.VR.IVRCompositor/_CompositorBringToFront::Invoke()
extern void _CompositorBringToFront_Invoke_mF465711A893D1529D201ADD0D85BF269E49B02E3 (void);
// 0x00000440 System.IAsyncResult Valve.VR.IVRCompositor/_CompositorBringToFront::BeginInvoke(System.AsyncCallback,System.Object)
extern void _CompositorBringToFront_BeginInvoke_m137FE38E18ED27023FAC12ED5EFCC1CD5E919707 (void);
// 0x00000441 System.Void Valve.VR.IVRCompositor/_CompositorBringToFront::EndInvoke(System.IAsyncResult)
extern void _CompositorBringToFront_EndInvoke_m3786F23B48C0CE4AC05BD2A7A63AD13E43C6FCC9 (void);
// 0x00000442 System.Void Valve.VR.IVRCompositor/_CompositorGoToBack::.ctor(System.Object,System.IntPtr)
extern void _CompositorGoToBack__ctor_mD5EE05F7D57D609161E98BC8584A9B101D40103E (void);
// 0x00000443 System.Void Valve.VR.IVRCompositor/_CompositorGoToBack::Invoke()
extern void _CompositorGoToBack_Invoke_mE437B66B5AF43D1342B601B8346C96520EF5E208 (void);
// 0x00000444 System.IAsyncResult Valve.VR.IVRCompositor/_CompositorGoToBack::BeginInvoke(System.AsyncCallback,System.Object)
extern void _CompositorGoToBack_BeginInvoke_m9249A23BF61F0546EBE8E653B74AA005ABBF4851 (void);
// 0x00000445 System.Void Valve.VR.IVRCompositor/_CompositorGoToBack::EndInvoke(System.IAsyncResult)
extern void _CompositorGoToBack_EndInvoke_mABA579DDDFD294CE7350329D72BEBD4F5760BA09 (void);
// 0x00000446 System.Void Valve.VR.IVRCompositor/_CompositorQuit::.ctor(System.Object,System.IntPtr)
extern void _CompositorQuit__ctor_mA9A03F9E5358D6B3B0CDFB87EE94D29A6893B403 (void);
// 0x00000447 System.Void Valve.VR.IVRCompositor/_CompositorQuit::Invoke()
extern void _CompositorQuit_Invoke_m0BFBC0F7101144FC3BF8E88A6696B634A36DF091 (void);
// 0x00000448 System.IAsyncResult Valve.VR.IVRCompositor/_CompositorQuit::BeginInvoke(System.AsyncCallback,System.Object)
extern void _CompositorQuit_BeginInvoke_m5F210A4E2B77C8F79E252BD452FE4C0A72C7ECE9 (void);
// 0x00000449 System.Void Valve.VR.IVRCompositor/_CompositorQuit::EndInvoke(System.IAsyncResult)
extern void _CompositorQuit_EndInvoke_m2B4013E3809607C99B333E76395EE32FF88A9E96 (void);
// 0x0000044A System.Void Valve.VR.IVRCompositor/_IsFullscreen::.ctor(System.Object,System.IntPtr)
extern void _IsFullscreen__ctor_m5DC9E1CD122A8D4B2AE927DD40FC01E7336A1C8E (void);
// 0x0000044B System.Boolean Valve.VR.IVRCompositor/_IsFullscreen::Invoke()
extern void _IsFullscreen_Invoke_mBDF9AE1B73859A1F229271303B1288A7EEA53507 (void);
// 0x0000044C System.IAsyncResult Valve.VR.IVRCompositor/_IsFullscreen::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsFullscreen_BeginInvoke_mF652F4D0F66C33C4C1D1D4D96CC3AA3EB9BB1C1F (void);
// 0x0000044D System.Boolean Valve.VR.IVRCompositor/_IsFullscreen::EndInvoke(System.IAsyncResult)
extern void _IsFullscreen_EndInvoke_m503956881818EA240482A8C82882DCAA517E7F63 (void);
// 0x0000044E System.Void Valve.VR.IVRCompositor/_GetCurrentSceneFocusProcess::.ctor(System.Object,System.IntPtr)
extern void _GetCurrentSceneFocusProcess__ctor_mD3FD522CA07C2AFC4EBCD6C9ACF982CB8D8BC336 (void);
// 0x0000044F System.UInt32 Valve.VR.IVRCompositor/_GetCurrentSceneFocusProcess::Invoke()
extern void _GetCurrentSceneFocusProcess_Invoke_mF0DAE9B6DC891E8009C74BB03EEFAF77E6B293BF (void);
// 0x00000450 System.IAsyncResult Valve.VR.IVRCompositor/_GetCurrentSceneFocusProcess::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetCurrentSceneFocusProcess_BeginInvoke_mA90E21D8B098B2109DD521B268EDEDD434477142 (void);
// 0x00000451 System.UInt32 Valve.VR.IVRCompositor/_GetCurrentSceneFocusProcess::EndInvoke(System.IAsyncResult)
extern void _GetCurrentSceneFocusProcess_EndInvoke_mF4822CE83C78E4A55F7F665E6239C927D16FE558 (void);
// 0x00000452 System.Void Valve.VR.IVRCompositor/_GetLastFrameRenderer::.ctor(System.Object,System.IntPtr)
extern void _GetLastFrameRenderer__ctor_m2179DC52FE4E92E6818B4070CD6A9345DAF9FB85 (void);
// 0x00000453 System.UInt32 Valve.VR.IVRCompositor/_GetLastFrameRenderer::Invoke()
extern void _GetLastFrameRenderer_Invoke_m4D0612BCE129E02FDBB80986E3828186F716ABCE (void);
// 0x00000454 System.IAsyncResult Valve.VR.IVRCompositor/_GetLastFrameRenderer::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetLastFrameRenderer_BeginInvoke_m81A1E51DD46E4D9732D70D5A5374E5532883C9B1 (void);
// 0x00000455 System.UInt32 Valve.VR.IVRCompositor/_GetLastFrameRenderer::EndInvoke(System.IAsyncResult)
extern void _GetLastFrameRenderer_EndInvoke_m1A7164A5B2E4CAB0083905236C2A479BA5D35AC0 (void);
// 0x00000456 System.Void Valve.VR.IVRCompositor/_CanRenderScene::.ctor(System.Object,System.IntPtr)
extern void _CanRenderScene__ctor_mE4787BEE8167286F417D66C2757E6AE0EF376314 (void);
// 0x00000457 System.Boolean Valve.VR.IVRCompositor/_CanRenderScene::Invoke()
extern void _CanRenderScene_Invoke_m3C7BCC94FCB6B4D943C4BFE5884E2F615633D619 (void);
// 0x00000458 System.IAsyncResult Valve.VR.IVRCompositor/_CanRenderScene::BeginInvoke(System.AsyncCallback,System.Object)
extern void _CanRenderScene_BeginInvoke_mA822BEE077B0DA2D0C40F84E1F13F9D6C48E9A75 (void);
// 0x00000459 System.Boolean Valve.VR.IVRCompositor/_CanRenderScene::EndInvoke(System.IAsyncResult)
extern void _CanRenderScene_EndInvoke_mF4B9945B818E3380154479443794104D8B76329C (void);
// 0x0000045A System.Void Valve.VR.IVRCompositor/_ShowMirrorWindow::.ctor(System.Object,System.IntPtr)
extern void _ShowMirrorWindow__ctor_m2BC14AD23258C8A096032DD0CF542661D62432D5 (void);
// 0x0000045B System.Void Valve.VR.IVRCompositor/_ShowMirrorWindow::Invoke()
extern void _ShowMirrorWindow_Invoke_mD86E5BFF353813A054A8922006EC9F756B2CED67 (void);
// 0x0000045C System.IAsyncResult Valve.VR.IVRCompositor/_ShowMirrorWindow::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ShowMirrorWindow_BeginInvoke_m3CD82722E68FF3D517B32DCC0CE0785135AFDA9E (void);
// 0x0000045D System.Void Valve.VR.IVRCompositor/_ShowMirrorWindow::EndInvoke(System.IAsyncResult)
extern void _ShowMirrorWindow_EndInvoke_mECAF3460DFEB870E7A1A61FD5AE4E27ED78C5398 (void);
// 0x0000045E System.Void Valve.VR.IVRCompositor/_HideMirrorWindow::.ctor(System.Object,System.IntPtr)
extern void _HideMirrorWindow__ctor_mEBB4BAE85431B97E3DBE110304DA458004E23A12 (void);
// 0x0000045F System.Void Valve.VR.IVRCompositor/_HideMirrorWindow::Invoke()
extern void _HideMirrorWindow_Invoke_m26F72485CA84A28E60DAB7894ECD4759B083BA0F (void);
// 0x00000460 System.IAsyncResult Valve.VR.IVRCompositor/_HideMirrorWindow::BeginInvoke(System.AsyncCallback,System.Object)
extern void _HideMirrorWindow_BeginInvoke_m0E25073817687F25B32BD7BD4761F929F919414E (void);
// 0x00000461 System.Void Valve.VR.IVRCompositor/_HideMirrorWindow::EndInvoke(System.IAsyncResult)
extern void _HideMirrorWindow_EndInvoke_m793EAC87AD33C58266E4CD85146B347B6755A6A0 (void);
// 0x00000462 System.Void Valve.VR.IVRCompositor/_IsMirrorWindowVisible::.ctor(System.Object,System.IntPtr)
extern void _IsMirrorWindowVisible__ctor_mABE2F258EAB706A178283C6F212A76592FEB81ED (void);
// 0x00000463 System.Boolean Valve.VR.IVRCompositor/_IsMirrorWindowVisible::Invoke()
extern void _IsMirrorWindowVisible_Invoke_m52EE0CD1467395E4D5993909FAB6EB6CE082FACB (void);
// 0x00000464 System.IAsyncResult Valve.VR.IVRCompositor/_IsMirrorWindowVisible::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsMirrorWindowVisible_BeginInvoke_m7EA1332D3120CAF9AB1A5D08344C02F0CB7FCB00 (void);
// 0x00000465 System.Boolean Valve.VR.IVRCompositor/_IsMirrorWindowVisible::EndInvoke(System.IAsyncResult)
extern void _IsMirrorWindowVisible_EndInvoke_m2FAE2BF44B43CEEFF20B2349AE7F3CBA6F8F5CC9 (void);
// 0x00000466 System.Void Valve.VR.IVRCompositor/_CompositorDumpImages::.ctor(System.Object,System.IntPtr)
extern void _CompositorDumpImages__ctor_mC952E8A7A37910F8B167793AB7FAEA11BB9A88BF (void);
// 0x00000467 System.Void Valve.VR.IVRCompositor/_CompositorDumpImages::Invoke()
extern void _CompositorDumpImages_Invoke_m3CCE0252E1EC04C8F85A735B7F6EA5CAEC4849FF (void);
// 0x00000468 System.IAsyncResult Valve.VR.IVRCompositor/_CompositorDumpImages::BeginInvoke(System.AsyncCallback,System.Object)
extern void _CompositorDumpImages_BeginInvoke_mF2D9EB426E84AD9BD2CB99966724297D63CAB029 (void);
// 0x00000469 System.Void Valve.VR.IVRCompositor/_CompositorDumpImages::EndInvoke(System.IAsyncResult)
extern void _CompositorDumpImages_EndInvoke_m6328B57E9474FCF5D99F571D239D5F0746C90ED8 (void);
// 0x0000046A System.Void Valve.VR.IVRCompositor/_ShouldAppRenderWithLowResources::.ctor(System.Object,System.IntPtr)
extern void _ShouldAppRenderWithLowResources__ctor_m654877BEABC8C33886E9DB203BB9B855471F25BA (void);
// 0x0000046B System.Boolean Valve.VR.IVRCompositor/_ShouldAppRenderWithLowResources::Invoke()
extern void _ShouldAppRenderWithLowResources_Invoke_mF118E5E924B64F2813EA5F9D19F6CD92602FB5FD (void);
// 0x0000046C System.IAsyncResult Valve.VR.IVRCompositor/_ShouldAppRenderWithLowResources::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ShouldAppRenderWithLowResources_BeginInvoke_m5B134155B6BAF58EF0F1B7B4E48D4DDD6132F546 (void);
// 0x0000046D System.Boolean Valve.VR.IVRCompositor/_ShouldAppRenderWithLowResources::EndInvoke(System.IAsyncResult)
extern void _ShouldAppRenderWithLowResources_EndInvoke_mEE359B7BE4A06C6864CB07A5FAED79454486389F (void);
// 0x0000046E System.Void Valve.VR.IVRCompositor/_ForceInterleavedReprojectionOn::.ctor(System.Object,System.IntPtr)
extern void _ForceInterleavedReprojectionOn__ctor_m9660BCD609B9E79C49BBC32696A5DC0433F5D568 (void);
// 0x0000046F System.Void Valve.VR.IVRCompositor/_ForceInterleavedReprojectionOn::Invoke(System.Boolean)
extern void _ForceInterleavedReprojectionOn_Invoke_mC8C683058C003C3D766311C51E5993B9673674B9 (void);
// 0x00000470 System.IAsyncResult Valve.VR.IVRCompositor/_ForceInterleavedReprojectionOn::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void _ForceInterleavedReprojectionOn_BeginInvoke_mDBB23B0A6FE9918C7EAF81F872C1332A30BC32BA (void);
// 0x00000471 System.Void Valve.VR.IVRCompositor/_ForceInterleavedReprojectionOn::EndInvoke(System.IAsyncResult)
extern void _ForceInterleavedReprojectionOn_EndInvoke_m9A517993A9A5A681D6B435931B295AA2F3B2BD5C (void);
// 0x00000472 System.Void Valve.VR.IVRCompositor/_ForceReconnectProcess::.ctor(System.Object,System.IntPtr)
extern void _ForceReconnectProcess__ctor_m83BFA35D718A9252370FEC0F14036869880E6C95 (void);
// 0x00000473 System.Void Valve.VR.IVRCompositor/_ForceReconnectProcess::Invoke()
extern void _ForceReconnectProcess_Invoke_m467CC0287CBCD3EF9342B10862B1F5CC8685099F (void);
// 0x00000474 System.IAsyncResult Valve.VR.IVRCompositor/_ForceReconnectProcess::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ForceReconnectProcess_BeginInvoke_mFA702A433D06C0846CFD5BB65C55532BCB3D466D (void);
// 0x00000475 System.Void Valve.VR.IVRCompositor/_ForceReconnectProcess::EndInvoke(System.IAsyncResult)
extern void _ForceReconnectProcess_EndInvoke_mD76611B40307EC4B36C3C08B32E0CB4236C6A281 (void);
// 0x00000476 System.Void Valve.VR.IVRCompositor/_SuspendRendering::.ctor(System.Object,System.IntPtr)
extern void _SuspendRendering__ctor_m693458BF320080B17FFC4C9C407606CB49581936 (void);
// 0x00000477 System.Void Valve.VR.IVRCompositor/_SuspendRendering::Invoke(System.Boolean)
extern void _SuspendRendering_Invoke_mF96E3321CA979767C1053939615DC010D29A6E8B (void);
// 0x00000478 System.IAsyncResult Valve.VR.IVRCompositor/_SuspendRendering::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void _SuspendRendering_BeginInvoke_m3DFC85EA6AB4F7537A4B043CE8ECE78B81FF004D (void);
// 0x00000479 System.Void Valve.VR.IVRCompositor/_SuspendRendering::EndInvoke(System.IAsyncResult)
extern void _SuspendRendering_EndInvoke_m37BECA92630A80D6BD864E2C7EF9317D9C2BE744 (void);
// 0x0000047A System.Void Valve.VR.IVRCompositor/_GetMirrorTextureD3D11::.ctor(System.Object,System.IntPtr)
extern void _GetMirrorTextureD3D11__ctor_m1E610C849D1983A74288D4794F37B8F74D67D068 (void);
// 0x0000047B Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetMirrorTextureD3D11::Invoke(Valve.VR.EVREye,System.IntPtr,System.IntPtr&)
extern void _GetMirrorTextureD3D11_Invoke_mEFF88E3EC2360B3809049822F265F1D0493DE849 (void);
// 0x0000047C System.IAsyncResult Valve.VR.IVRCompositor/_GetMirrorTextureD3D11::BeginInvoke(Valve.VR.EVREye,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
extern void _GetMirrorTextureD3D11_BeginInvoke_m2C90E8B34B5484D947DEB99BFCC34DB7C3F5D825 (void);
// 0x0000047D Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetMirrorTextureD3D11::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern void _GetMirrorTextureD3D11_EndInvoke_m7EFA5BD889ED185F15BE4271771C7098BCDAF7D9 (void);
// 0x0000047E System.Void Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11::.ctor(System.Object,System.IntPtr)
extern void _ReleaseMirrorTextureD3D11__ctor_m8FE1869645E0C239BA812E8EEC837DD0731D21C4 (void);
// 0x0000047F System.Void Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11::Invoke(System.IntPtr)
extern void _ReleaseMirrorTextureD3D11_Invoke_m00CBE05E5720705AC506EFFDEB1BDF898075FD23 (void);
// 0x00000480 System.IAsyncResult Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _ReleaseMirrorTextureD3D11_BeginInvoke_m02F2948E6CBAAA1E962C45C465F4AAAF94E96C3B (void);
// 0x00000481 System.Void Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11::EndInvoke(System.IAsyncResult)
extern void _ReleaseMirrorTextureD3D11_EndInvoke_m6E3D3D4642F81E84A4D1EF3BB1D951847F8614B2 (void);
// 0x00000482 System.Void Valve.VR.IVRCompositor/_GetMirrorTextureGL::.ctor(System.Object,System.IntPtr)
extern void _GetMirrorTextureGL__ctor_m6A8267BD3BA9381B4E95CDC500EEA3877D1FD61E (void);
// 0x00000483 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetMirrorTextureGL::Invoke(Valve.VR.EVREye,System.UInt32&,System.IntPtr)
extern void _GetMirrorTextureGL_Invoke_m8F8CD0986A1956C923C54F34CABFCD97BBDA8A96 (void);
// 0x00000484 System.IAsyncResult Valve.VR.IVRCompositor/_GetMirrorTextureGL::BeginInvoke(Valve.VR.EVREye,System.UInt32&,System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetMirrorTextureGL_BeginInvoke_m39B3E5F444F7860DAD869AF1B36A02B167AF23F0 (void);
// 0x00000485 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetMirrorTextureGL::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetMirrorTextureGL_EndInvoke_m67BE3FB60C043DDA43ABD4D746D1596B3EF519D2 (void);
// 0x00000486 System.Void Valve.VR.IVRCompositor/_ReleaseSharedGLTexture::.ctor(System.Object,System.IntPtr)
extern void _ReleaseSharedGLTexture__ctor_mE0CD1D5CABDA39E20151368700AA73158466B524 (void);
// 0x00000487 System.Boolean Valve.VR.IVRCompositor/_ReleaseSharedGLTexture::Invoke(System.UInt32,System.IntPtr)
extern void _ReleaseSharedGLTexture_Invoke_m9543DCD559083CEE2FCFE47D7762F142119DB9E1 (void);
// 0x00000488 System.IAsyncResult Valve.VR.IVRCompositor/_ReleaseSharedGLTexture::BeginInvoke(System.UInt32,System.IntPtr,System.AsyncCallback,System.Object)
extern void _ReleaseSharedGLTexture_BeginInvoke_m7689EC4980AF0B52752E141934BD4BA785DE6A2E (void);
// 0x00000489 System.Boolean Valve.VR.IVRCompositor/_ReleaseSharedGLTexture::EndInvoke(System.IAsyncResult)
extern void _ReleaseSharedGLTexture_EndInvoke_mD0EC29CBB0B7C9CEA787950751CD9FE8E41B9318 (void);
// 0x0000048A System.Void Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess::.ctor(System.Object,System.IntPtr)
extern void _LockGLSharedTextureForAccess__ctor_m866FAD610EF57D871CC2FE5EA69AB81252E7A366 (void);
// 0x0000048B System.Void Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess::Invoke(System.IntPtr)
extern void _LockGLSharedTextureForAccess_Invoke_mB74C3046204B4AD38685242C3D29325BC8C08AB8 (void);
// 0x0000048C System.IAsyncResult Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _LockGLSharedTextureForAccess_BeginInvoke_m687D6D0682846B55C6B0CC7EAA4716764138274B (void);
// 0x0000048D System.Void Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess::EndInvoke(System.IAsyncResult)
extern void _LockGLSharedTextureForAccess_EndInvoke_mA557AF9DFBEB117D7DCE79A90E81198C4F487087 (void);
// 0x0000048E System.Void Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess::.ctor(System.Object,System.IntPtr)
extern void _UnlockGLSharedTextureForAccess__ctor_mC37ACB44C3732B9B2FD8E8819773F27BE3459F79 (void);
// 0x0000048F System.Void Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess::Invoke(System.IntPtr)
extern void _UnlockGLSharedTextureForAccess_Invoke_mF6A9ED79624E455EE6186C90B266F46A3369D870 (void);
// 0x00000490 System.IAsyncResult Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _UnlockGLSharedTextureForAccess_BeginInvoke_m034B6D5BF010591F8CB1A5B432DF998FDE3A51FD (void);
// 0x00000491 System.Void Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess::EndInvoke(System.IAsyncResult)
extern void _UnlockGLSharedTextureForAccess_EndInvoke_m5A5D18F06E7E8AD0A4635D28AA3ADF65B7D61550 (void);
// 0x00000492 System.Void Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired::.ctor(System.Object,System.IntPtr)
extern void _GetVulkanInstanceExtensionsRequired__ctor_mF177FC7690CCD79F3FF2F4CB500800FC10B4E7EA (void);
// 0x00000493 System.UInt32 Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired::Invoke(System.Text.StringBuilder,System.UInt32)
extern void _GetVulkanInstanceExtensionsRequired_Invoke_m8006FB981A90ED7D3753F1782A8F21F638476A51 (void);
// 0x00000494 System.IAsyncResult Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired::BeginInvoke(System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetVulkanInstanceExtensionsRequired_BeginInvoke_m3DD6E278EDD84EA2BB18ED5A31FA7F1BD9AB5A20 (void);
// 0x00000495 System.UInt32 Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired::EndInvoke(System.IAsyncResult)
extern void _GetVulkanInstanceExtensionsRequired_EndInvoke_m07C9914623B2101D9257494ABC6EE62F7B35A0B7 (void);
// 0x00000496 System.Void Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired::.ctor(System.Object,System.IntPtr)
extern void _GetVulkanDeviceExtensionsRequired__ctor_mBD60E09C70FE9AE1E108346A94E4FCFFD19A4BBF (void);
// 0x00000497 System.UInt32 Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired::Invoke(System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _GetVulkanDeviceExtensionsRequired_Invoke_mCA270DABE586BE08C7D8F1E3BCA0D3B7F286C44E (void);
// 0x00000498 System.IAsyncResult Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired::BeginInvoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetVulkanDeviceExtensionsRequired_BeginInvoke_mADE7B09828025CC2CDF86A30EF703E8E2A787ED7 (void);
// 0x00000499 System.UInt32 Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired::EndInvoke(System.IAsyncResult)
extern void _GetVulkanDeviceExtensionsRequired_EndInvoke_mE27BCEEF86D83DC36D569869CBCC2E9C58047CA8 (void);
// 0x0000049A System.Void Valve.VR.IVRCompositor/_SetExplicitTimingMode::.ctor(System.Object,System.IntPtr)
extern void _SetExplicitTimingMode__ctor_mCB9ECC791DE99F2B9D9D5A376CB5FEE4C764746C (void);
// 0x0000049B System.Void Valve.VR.IVRCompositor/_SetExplicitTimingMode::Invoke(Valve.VR.EVRCompositorTimingMode)
extern void _SetExplicitTimingMode_Invoke_m642B0EA68F439C4B8BC1C76D01CED2925F343BB0 (void);
// 0x0000049C System.IAsyncResult Valve.VR.IVRCompositor/_SetExplicitTimingMode::BeginInvoke(Valve.VR.EVRCompositorTimingMode,System.AsyncCallback,System.Object)
extern void _SetExplicitTimingMode_BeginInvoke_m4934D668E784652649BB8E173754F9642383531D (void);
// 0x0000049D System.Void Valve.VR.IVRCompositor/_SetExplicitTimingMode::EndInvoke(System.IAsyncResult)
extern void _SetExplicitTimingMode_EndInvoke_mBBE5CD0D84716EA15C5C69558ADA23A568246E35 (void);
// 0x0000049E System.Void Valve.VR.IVRCompositor/_SubmitExplicitTimingData::.ctor(System.Object,System.IntPtr)
extern void _SubmitExplicitTimingData__ctor_m057F9C4315B91421957555242B3837F9999BE219 (void);
// 0x0000049F Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_SubmitExplicitTimingData::Invoke()
extern void _SubmitExplicitTimingData_Invoke_mD5E8D4923393AEB95EE9D6369F459CD6541E9DA9 (void);
// 0x000004A0 System.IAsyncResult Valve.VR.IVRCompositor/_SubmitExplicitTimingData::BeginInvoke(System.AsyncCallback,System.Object)
extern void _SubmitExplicitTimingData_BeginInvoke_mD1282B0214D2FBD461C9F786C0F99A1C738D4103 (void);
// 0x000004A1 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_SubmitExplicitTimingData::EndInvoke(System.IAsyncResult)
extern void _SubmitExplicitTimingData_EndInvoke_m2DA94C1D562DD3041380FEB8633ECC5D48C3F39D (void);
// 0x000004A2 System.Void Valve.VR.IVRCompositor/_IsMotionSmoothingEnabled::.ctor(System.Object,System.IntPtr)
extern void _IsMotionSmoothingEnabled__ctor_mE30A3770F028A237B0C49DAC33A4BF91D6305D23 (void);
// 0x000004A3 System.Boolean Valve.VR.IVRCompositor/_IsMotionSmoothingEnabled::Invoke()
extern void _IsMotionSmoothingEnabled_Invoke_mAED56BF20FC684632769C1DFA38CBBCFADCB1E41 (void);
// 0x000004A4 System.IAsyncResult Valve.VR.IVRCompositor/_IsMotionSmoothingEnabled::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsMotionSmoothingEnabled_BeginInvoke_m3FF7068C4CD4DEA0185F5019DDC40E24170E7CA6 (void);
// 0x000004A5 System.Boolean Valve.VR.IVRCompositor/_IsMotionSmoothingEnabled::EndInvoke(System.IAsyncResult)
extern void _IsMotionSmoothingEnabled_EndInvoke_m4208EA8A489A026577E91074181CC7D76AF30F07 (void);
// 0x000004A6 System.Void Valve.VR.IVRCompositor/_IsMotionSmoothingSupported::.ctor(System.Object,System.IntPtr)
extern void _IsMotionSmoothingSupported__ctor_m932A6B760A8C2B27D2F180512372602D9F8CD9AB (void);
// 0x000004A7 System.Boolean Valve.VR.IVRCompositor/_IsMotionSmoothingSupported::Invoke()
extern void _IsMotionSmoothingSupported_Invoke_mAA26D9EF78630D63B988369CFA518D135A4E6B84 (void);
// 0x000004A8 System.IAsyncResult Valve.VR.IVRCompositor/_IsMotionSmoothingSupported::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsMotionSmoothingSupported_BeginInvoke_mCC83A2C143F01E31A8C63B08EB75E6876996CBC8 (void);
// 0x000004A9 System.Boolean Valve.VR.IVRCompositor/_IsMotionSmoothingSupported::EndInvoke(System.IAsyncResult)
extern void _IsMotionSmoothingSupported_EndInvoke_m03F727257C9CCE05F14190FD0528A9AA63FD6E5F (void);
// 0x000004AA System.Void Valve.VR.IVRCompositor/_IsCurrentSceneFocusAppLoading::.ctor(System.Object,System.IntPtr)
extern void _IsCurrentSceneFocusAppLoading__ctor_m1F283E4445151B32BBE9C923CAF78ACA53F951FD (void);
// 0x000004AB System.Boolean Valve.VR.IVRCompositor/_IsCurrentSceneFocusAppLoading::Invoke()
extern void _IsCurrentSceneFocusAppLoading_Invoke_mD4D5BA2E5190925C5FDAE41F20E3608A6DCDA5CA (void);
// 0x000004AC System.IAsyncResult Valve.VR.IVRCompositor/_IsCurrentSceneFocusAppLoading::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsCurrentSceneFocusAppLoading_BeginInvoke_mAE9B3694C0B494667E2BEB55101B0B8090701694 (void);
// 0x000004AD System.Boolean Valve.VR.IVRCompositor/_IsCurrentSceneFocusAppLoading::EndInvoke(System.IAsyncResult)
extern void _IsCurrentSceneFocusAppLoading_EndInvoke_m90CADCDE9BB8BD43AE3800915CC2FF063211D73C (void);
// 0x000004AE System.Void Valve.VR.IVRCompositor/_SetStageOverride_Async::.ctor(System.Object,System.IntPtr)
extern void _SetStageOverride_Async__ctor_m5038A9F8CB80951CFA951E0E163A4C8FA039B129 (void);
// 0x000004AF Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_SetStageOverride_Async::Invoke(System.IntPtr,Valve.VR.HmdMatrix34_t&,Valve.VR.Compositor_StageRenderSettings&,System.UInt32)
extern void _SetStageOverride_Async_Invoke_m9086E07D92B15FE92ACE65CD7BEEF4A3657A1E46 (void);
// 0x000004B0 System.IAsyncResult Valve.VR.IVRCompositor/_SetStageOverride_Async::BeginInvoke(System.IntPtr,Valve.VR.HmdMatrix34_t&,Valve.VR.Compositor_StageRenderSettings&,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetStageOverride_Async_BeginInvoke_mE365D658DD06C30902A8150ABA598BB39CBF6CA7 (void);
// 0x000004B1 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_SetStageOverride_Async::EndInvoke(Valve.VR.HmdMatrix34_t&,Valve.VR.Compositor_StageRenderSettings&,System.IAsyncResult)
extern void _SetStageOverride_Async_EndInvoke_mD8E10C7CEEC1E99ED7BCD1F7F867083EDBE289D9 (void);
// 0x000004B2 System.Void Valve.VR.IVRCompositor/_ClearStageOverride::.ctor(System.Object,System.IntPtr)
extern void _ClearStageOverride__ctor_mD9EC581B15975C815A209805E00D997441E43AB6 (void);
// 0x000004B3 System.Void Valve.VR.IVRCompositor/_ClearStageOverride::Invoke()
extern void _ClearStageOverride_Invoke_m0D4B0FE7F41CFAB388779CB1507E0F74667BE56D (void);
// 0x000004B4 System.IAsyncResult Valve.VR.IVRCompositor/_ClearStageOverride::BeginInvoke(System.AsyncCallback,System.Object)
extern void _ClearStageOverride_BeginInvoke_mF91F0BF2FB43EE1B6F6768670F9932116D364645 (void);
// 0x000004B5 System.Void Valve.VR.IVRCompositor/_ClearStageOverride::EndInvoke(System.IAsyncResult)
extern void _ClearStageOverride_EndInvoke_mD3451D5EAFABBA1D77573A207413EAF1DDF431EA (void);
// 0x000004B6 System.Void Valve.VR.IVRCompositor/_GetCompositorBenchmarkResults::.ctor(System.Object,System.IntPtr)
extern void _GetCompositorBenchmarkResults__ctor_mF8946895D40106FED34A121785155FFCED4B17D8 (void);
// 0x000004B7 System.Boolean Valve.VR.IVRCompositor/_GetCompositorBenchmarkResults::Invoke(Valve.VR.Compositor_BenchmarkResults&,System.UInt32)
extern void _GetCompositorBenchmarkResults_Invoke_mAADACC2AA396EC519D2228C6D252F9D22596AEA8 (void);
// 0x000004B8 System.IAsyncResult Valve.VR.IVRCompositor/_GetCompositorBenchmarkResults::BeginInvoke(Valve.VR.Compositor_BenchmarkResults&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetCompositorBenchmarkResults_BeginInvoke_mEB49FF9A77BB5CFCF1128C02FB437ED492F83CA8 (void);
// 0x000004B9 System.Boolean Valve.VR.IVRCompositor/_GetCompositorBenchmarkResults::EndInvoke(Valve.VR.Compositor_BenchmarkResults&,System.IAsyncResult)
extern void _GetCompositorBenchmarkResults_EndInvoke_mA8C74AA345F4ACBCB367187CC631686EEC760B80 (void);
// 0x000004BA System.Void Valve.VR.IVRCompositor/_GetLastPosePredictionIDs::.ctor(System.Object,System.IntPtr)
extern void _GetLastPosePredictionIDs__ctor_mEB096903655592B3EFD087203AA7A997122E37BD (void);
// 0x000004BB Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetLastPosePredictionIDs::Invoke(System.UInt32&,System.UInt32&)
extern void _GetLastPosePredictionIDs_Invoke_mC3D427D0D9D8EFADA74A323AD0A5BCF40C703A5F (void);
// 0x000004BC System.IAsyncResult Valve.VR.IVRCompositor/_GetLastPosePredictionIDs::BeginInvoke(System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetLastPosePredictionIDs_BeginInvoke_mED057EE2FC67505DFE12C6A235A64F0802BB6831 (void);
// 0x000004BD Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetLastPosePredictionIDs::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetLastPosePredictionIDs_EndInvoke_mD28F1964B58CD98386345403BC81116D9228CC86 (void);
// 0x000004BE System.Void Valve.VR.IVRCompositor/_GetPosesForFrame::.ctor(System.Object,System.IntPtr)
extern void _GetPosesForFrame__ctor_m5E2EE50BA821D5BCBCF259078F5F3073299543DC (void);
// 0x000004BF Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetPosesForFrame::Invoke(System.UInt32,Valve.VR.TrackedDevicePose_t[],System.UInt32)
extern void _GetPosesForFrame_Invoke_m87B8A0C118CCBB5ABE61D305F19FE6BB9A6E1D11 (void);
// 0x000004C0 System.IAsyncResult Valve.VR.IVRCompositor/_GetPosesForFrame::BeginInvoke(System.UInt32,Valve.VR.TrackedDevicePose_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetPosesForFrame_BeginInvoke_mF17517396F65B200D1B3400805AC493E015F5177 (void);
// 0x000004C1 Valve.VR.EVRCompositorError Valve.VR.IVRCompositor/_GetPosesForFrame::EndInvoke(System.IAsyncResult)
extern void _GetPosesForFrame_EndInvoke_mCE02224230450BD1628A3A643DEA32F55647430F (void);
// 0x000004C2 System.Void Valve.VR.IVROverlay/_FindOverlay::.ctor(System.Object,System.IntPtr)
extern void _FindOverlay__ctor_mDC69473CDBB3705D9EA4A0B9C1F92FBCD20DAAA2 (void);
// 0x000004C3 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_FindOverlay::Invoke(System.IntPtr,System.UInt64&)
extern void _FindOverlay_Invoke_m1309636D78D94EEA5F6FB26FE60A81D3037B4E2F (void);
// 0x000004C4 System.IAsyncResult Valve.VR.IVROverlay/_FindOverlay::BeginInvoke(System.IntPtr,System.UInt64&,System.AsyncCallback,System.Object)
extern void _FindOverlay_BeginInvoke_mB8135F178228F130B09AB33F352CECEC47729023 (void);
// 0x000004C5 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_FindOverlay::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _FindOverlay_EndInvoke_mEFAB7DFBFD0D0F441B5EC694C08AF7BC4C0E2BC6 (void);
// 0x000004C6 System.Void Valve.VR.IVROverlay/_CreateOverlay::.ctor(System.Object,System.IntPtr)
extern void _CreateOverlay__ctor_m436F63E2E98545CE9C24DAFE4E22EDD4D05B4454 (void);
// 0x000004C7 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_CreateOverlay::Invoke(System.IntPtr,System.IntPtr,System.UInt64&)
extern void _CreateOverlay_Invoke_mD80FF0E4D9A03A87AD41CF853882392032B10653 (void);
// 0x000004C8 System.IAsyncResult Valve.VR.IVROverlay/_CreateOverlay::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt64&,System.AsyncCallback,System.Object)
extern void _CreateOverlay_BeginInvoke_m675E3622D0A23533ACC19B1E7DC76AF7CB857D5C (void);
// 0x000004C9 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_CreateOverlay::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _CreateOverlay_EndInvoke_m649C861BEE0C4EA3FD255DDABDBCCB9DAFEE0635 (void);
// 0x000004CA System.Void Valve.VR.IVROverlay/_DestroyOverlay::.ctor(System.Object,System.IntPtr)
extern void _DestroyOverlay__ctor_m0D876DEEA9FE374E3B7D775000E05BE43BD7B336 (void);
// 0x000004CB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_DestroyOverlay::Invoke(System.UInt64)
extern void _DestroyOverlay_Invoke_mC9B703C32D5CE2E7CDE27E9B1212969D72B3BD33 (void);
// 0x000004CC System.IAsyncResult Valve.VR.IVROverlay/_DestroyOverlay::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _DestroyOverlay_BeginInvoke_m7EFB0B7DCB87D0972774D09CE604CF4F52546187 (void);
// 0x000004CD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_DestroyOverlay::EndInvoke(System.IAsyncResult)
extern void _DestroyOverlay_EndInvoke_m606AD6FF618656CA0462C2ADB81D0526C9403DA7 (void);
// 0x000004CE System.Void Valve.VR.IVROverlay/_GetOverlayKey::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayKey__ctor_mD247E80C9DCF16665605304E0DC45055D34CE44B (void);
// 0x000004CF System.UInt32 Valve.VR.IVROverlay/_GetOverlayKey::Invoke(System.UInt64,System.Text.StringBuilder,System.UInt32,Valve.VR.EVROverlayError&)
extern void _GetOverlayKey_Invoke_m765D98778ED2AE43FD026B6477DD51A4335BB1A1 (void);
// 0x000004D0 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayKey::BeginInvoke(System.UInt64,System.Text.StringBuilder,System.UInt32,Valve.VR.EVROverlayError&,System.AsyncCallback,System.Object)
extern void _GetOverlayKey_BeginInvoke_mD98463AF0FBA49ECDDA4B3B2064002828C58FE0D (void);
// 0x000004D1 System.UInt32 Valve.VR.IVROverlay/_GetOverlayKey::EndInvoke(Valve.VR.EVROverlayError&,System.IAsyncResult)
extern void _GetOverlayKey_EndInvoke_mB37153CC22DACEDD8A66924DEF9AE8D551FFC881 (void);
// 0x000004D2 System.Void Valve.VR.IVROverlay/_GetOverlayName::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayName__ctor_m415E701A501C1AAF0D0B10C5DDDB1CC8E44D20D0 (void);
// 0x000004D3 System.UInt32 Valve.VR.IVROverlay/_GetOverlayName::Invoke(System.UInt64,System.Text.StringBuilder,System.UInt32,Valve.VR.EVROverlayError&)
extern void _GetOverlayName_Invoke_m4D06E85E87CC98EC3AB15D972E6585A9A5644BA5 (void);
// 0x000004D4 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayName::BeginInvoke(System.UInt64,System.Text.StringBuilder,System.UInt32,Valve.VR.EVROverlayError&,System.AsyncCallback,System.Object)
extern void _GetOverlayName_BeginInvoke_mA919008675EA92571A9FE90316FE1EB6A6DFFA1B (void);
// 0x000004D5 System.UInt32 Valve.VR.IVROverlay/_GetOverlayName::EndInvoke(Valve.VR.EVROverlayError&,System.IAsyncResult)
extern void _GetOverlayName_EndInvoke_mB98A549234E84832DB52709E7B84D751CDA2EB55 (void);
// 0x000004D6 System.Void Valve.VR.IVROverlay/_SetOverlayName::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayName__ctor_m41B138E7E3F95DBADA74954A9246D7AD159D1000 (void);
// 0x000004D7 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayName::Invoke(System.UInt64,System.IntPtr)
extern void _SetOverlayName_Invoke_mADC1E9F5A7386608A1BF58E9D2FF06E2F2967594 (void);
// 0x000004D8 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayName::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void _SetOverlayName_BeginInvoke_mE64B50169F1BD5547ADB0D3A84F6321943184EC5 (void);
// 0x000004D9 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayName::EndInvoke(System.IAsyncResult)
extern void _SetOverlayName_EndInvoke_m8AE28C0B4D9F0B450304DC324007C109A60227AB (void);
// 0x000004DA System.Void Valve.VR.IVROverlay/_GetOverlayImageData::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayImageData__ctor_m44DC86BD9BEF05DB6B324520E8115E3EC183E0C5 (void);
// 0x000004DB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayImageData::Invoke(System.UInt64,System.IntPtr,System.UInt32,System.UInt32&,System.UInt32&)
extern void _GetOverlayImageData_Invoke_m2DE11E030C5F8F0B7CB014CD5A1C21485E79E207 (void);
// 0x000004DC System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayImageData::BeginInvoke(System.UInt64,System.IntPtr,System.UInt32,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetOverlayImageData_BeginInvoke_m3A024E1DDDBBF406A80894532B85ADA5787D5339 (void);
// 0x000004DD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayImageData::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetOverlayImageData_EndInvoke_m529B988C4E1E952313DC632059A1082120B6B287 (void);
// 0x000004DE System.Void Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayErrorNameFromEnum__ctor_m7DDF9A0E38ABC32421EE82F4623CA83D6AFF66B4 (void);
// 0x000004DF System.IntPtr Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum::Invoke(Valve.VR.EVROverlayError)
extern void _GetOverlayErrorNameFromEnum_Invoke_m1C7AFFF5ED0869009757799BDE7395B81E96C795 (void);
// 0x000004E0 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum::BeginInvoke(Valve.VR.EVROverlayError,System.AsyncCallback,System.Object)
extern void _GetOverlayErrorNameFromEnum_BeginInvoke_mC089FD8F3BECC89D165D6A42F11CD3B6283F3E75 (void);
// 0x000004E1 System.IntPtr Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetOverlayErrorNameFromEnum_EndInvoke_m474D9E57E7477FAF47A1CE83EBFDB403FCCB115F (void);
// 0x000004E2 System.Void Valve.VR.IVROverlay/_SetOverlayRenderingPid::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayRenderingPid__ctor_mBAB87FF6E373A938B503DBF6049CB62C78576A7E (void);
// 0x000004E3 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayRenderingPid::Invoke(System.UInt64,System.UInt32)
extern void _SetOverlayRenderingPid_Invoke_m7D02279F6804EBCA1EB4E2A4BFF429CFF8A02BF5 (void);
// 0x000004E4 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayRenderingPid::BeginInvoke(System.UInt64,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetOverlayRenderingPid_BeginInvoke_mD7F1A7EC4B4741EB9E81F8330AE2217DA643CAB2 (void);
// 0x000004E5 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayRenderingPid::EndInvoke(System.IAsyncResult)
extern void _SetOverlayRenderingPid_EndInvoke_m9AE773289C915DE0246F08DE9916C170198EEC26 (void);
// 0x000004E6 System.Void Valve.VR.IVROverlay/_GetOverlayRenderingPid::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayRenderingPid__ctor_mBB7AB1BEB9A036C942081AA15D04634A6C3981A5 (void);
// 0x000004E7 System.UInt32 Valve.VR.IVROverlay/_GetOverlayRenderingPid::Invoke(System.UInt64)
extern void _GetOverlayRenderingPid_Invoke_mC8C52BF0588EEE213C9B9B483E9CCFD57F3A166B (void);
// 0x000004E8 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayRenderingPid::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _GetOverlayRenderingPid_BeginInvoke_m0F551EB55FCC5600ECF3FC82796A2A05FD15A0B2 (void);
// 0x000004E9 System.UInt32 Valve.VR.IVROverlay/_GetOverlayRenderingPid::EndInvoke(System.IAsyncResult)
extern void _GetOverlayRenderingPid_EndInvoke_m252089002F24146B9D356E0278F36E1DA53FAB0F (void);
// 0x000004EA System.Void Valve.VR.IVROverlay/_SetOverlayFlag::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayFlag__ctor_m845440878206A23ECD144639786377F3B2D83556 (void);
// 0x000004EB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayFlag::Invoke(System.UInt64,Valve.VR.VROverlayFlags,System.Boolean)
extern void _SetOverlayFlag_Invoke_m98328C03FB01443B63736CE50104106DE8428657 (void);
// 0x000004EC System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayFlag::BeginInvoke(System.UInt64,Valve.VR.VROverlayFlags,System.Boolean,System.AsyncCallback,System.Object)
extern void _SetOverlayFlag_BeginInvoke_m008B783F59F5093F2F818CC700E07CA48EAB9506 (void);
// 0x000004ED Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayFlag::EndInvoke(System.IAsyncResult)
extern void _SetOverlayFlag_EndInvoke_m3394DF3106A8CA2738CF6A5895BB25E1F86EB335 (void);
// 0x000004EE System.Void Valve.VR.IVROverlay/_GetOverlayFlag::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayFlag__ctor_mA96DF19074BE8A4D932F431CC0779A434DF1FF4F (void);
// 0x000004EF Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayFlag::Invoke(System.UInt64,Valve.VR.VROverlayFlags,System.Boolean&)
extern void _GetOverlayFlag_Invoke_m44994953A32DA86DAFB81C2617A0F5C528E639F1 (void);
// 0x000004F0 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayFlag::BeginInvoke(System.UInt64,Valve.VR.VROverlayFlags,System.Boolean&,System.AsyncCallback,System.Object)
extern void _GetOverlayFlag_BeginInvoke_mF3D87AEAF8A0D8CD59462FCA59238FD7EA701A54 (void);
// 0x000004F1 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayFlag::EndInvoke(System.Boolean&,System.IAsyncResult)
extern void _GetOverlayFlag_EndInvoke_mFFCA3BD15B4A7BBC008E047CD3A927828E1FC60C (void);
// 0x000004F2 System.Void Valve.VR.IVROverlay/_GetOverlayFlags::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayFlags__ctor_m2A815C4CC04686F76EECC8A9F4A6F4E64A8F6C7C (void);
// 0x000004F3 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayFlags::Invoke(System.UInt64,System.UInt32&)
extern void _GetOverlayFlags_Invoke_m04F3B3E9F59A4C883F700761748ACCC1346561A5 (void);
// 0x000004F4 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayFlags::BeginInvoke(System.UInt64,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetOverlayFlags_BeginInvoke_mD1AF34963E99FD474E6014588C62779110F70518 (void);
// 0x000004F5 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayFlags::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetOverlayFlags_EndInvoke_m2F2834FC5B840D8BFE66D2C53D84D32F49D3E907 (void);
// 0x000004F6 System.Void Valve.VR.IVROverlay/_SetOverlayColor::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayColor__ctor_mAB957B84ED5ADB15B789E80E2F9B81AC7DF25D10 (void);
// 0x000004F7 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayColor::Invoke(System.UInt64,System.Single,System.Single,System.Single)
extern void _SetOverlayColor_Invoke_m3C6A3C05EEBB49800D8CDEE9AFBC9DAC7EA482A5 (void);
// 0x000004F8 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayColor::BeginInvoke(System.UInt64,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern void _SetOverlayColor_BeginInvoke_m50A5FBD640A135417D6A77D3F30CFBA5493285F7 (void);
// 0x000004F9 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayColor::EndInvoke(System.IAsyncResult)
extern void _SetOverlayColor_EndInvoke_mBA21938899FCFBD1A59D2BAA5693C513B94C128A (void);
// 0x000004FA System.Void Valve.VR.IVROverlay/_GetOverlayColor::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayColor__ctor_mBDFC5DDDD4A2DEAFC52B8FF2FBB44BEEFD422631 (void);
// 0x000004FB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayColor::Invoke(System.UInt64,System.Single&,System.Single&,System.Single&)
extern void _GetOverlayColor_Invoke_m509C1A5966A1CF68735076EA09F221FE33BC8980 (void);
// 0x000004FC System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayColor::BeginInvoke(System.UInt64,System.Single&,System.Single&,System.Single&,System.AsyncCallback,System.Object)
extern void _GetOverlayColor_BeginInvoke_m9D858989A3D0E2CA38DBF10175E80E3AF2789B4B (void);
// 0x000004FD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayColor::EndInvoke(System.Single&,System.Single&,System.Single&,System.IAsyncResult)
extern void _GetOverlayColor_EndInvoke_m4214318634098CD2EAFC9E3E9FFE6EA2F2ACA69E (void);
// 0x000004FE System.Void Valve.VR.IVROverlay/_SetOverlayAlpha::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayAlpha__ctor_mBD3CAA53A8A06A0C4AC5134FE74277206D783306 (void);
// 0x000004FF Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayAlpha::Invoke(System.UInt64,System.Single)
extern void _SetOverlayAlpha_Invoke_mD6B9EF0C0A0AE85D644882871E19D16AC4CE9B28 (void);
// 0x00000500 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayAlpha::BeginInvoke(System.UInt64,System.Single,System.AsyncCallback,System.Object)
extern void _SetOverlayAlpha_BeginInvoke_mF2EAEF9FB12D4D9DE212046F0500F66C5800983D (void);
// 0x00000501 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayAlpha::EndInvoke(System.IAsyncResult)
extern void _SetOverlayAlpha_EndInvoke_mBC95C6695955824B658B0B726AB95619E045910F (void);
// 0x00000502 System.Void Valve.VR.IVROverlay/_GetOverlayAlpha::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayAlpha__ctor_m56FAD94E438D8B018B315D5F5DF9EF882EE76AF9 (void);
// 0x00000503 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayAlpha::Invoke(System.UInt64,System.Single&)
extern void _GetOverlayAlpha_Invoke_mA9EED8232ACDDA4F9CBA14FD8E86444285538AD6 (void);
// 0x00000504 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayAlpha::BeginInvoke(System.UInt64,System.Single&,System.AsyncCallback,System.Object)
extern void _GetOverlayAlpha_BeginInvoke_m6A4EA6640345D01DA59CD8F1B31A463A9D833AE5 (void);
// 0x00000505 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayAlpha::EndInvoke(System.Single&,System.IAsyncResult)
extern void _GetOverlayAlpha_EndInvoke_m6FACB9CC1C8C136FDFE2AF86F4EE7DF2990C9D5C (void);
// 0x00000506 System.Void Valve.VR.IVROverlay/_SetOverlayTexelAspect::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTexelAspect__ctor_m3AF191E74637F0CD53968027D35E57333580B49D (void);
// 0x00000507 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTexelAspect::Invoke(System.UInt64,System.Single)
extern void _SetOverlayTexelAspect_Invoke_mAFC33FE7F48C64E8C62BB9E4F26E398575AEB132 (void);
// 0x00000508 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTexelAspect::BeginInvoke(System.UInt64,System.Single,System.AsyncCallback,System.Object)
extern void _SetOverlayTexelAspect_BeginInvoke_m030005DFD2D11536C41730B2839A183D378412F6 (void);
// 0x00000509 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTexelAspect::EndInvoke(System.IAsyncResult)
extern void _SetOverlayTexelAspect_EndInvoke_mE55D914A632C8C25218A903718C46BA95A0454AE (void);
// 0x0000050A System.Void Valve.VR.IVROverlay/_GetOverlayTexelAspect::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTexelAspect__ctor_mCCF9B91FC88FE0241AD8DAA9508F86C0609B8E5B (void);
// 0x0000050B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTexelAspect::Invoke(System.UInt64,System.Single&)
extern void _GetOverlayTexelAspect_Invoke_m85A4237FC605FA6B69B66DD4123660DBA45E3D5F (void);
// 0x0000050C System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTexelAspect::BeginInvoke(System.UInt64,System.Single&,System.AsyncCallback,System.Object)
extern void _GetOverlayTexelAspect_BeginInvoke_mDCB91DA7607208EDC0C58FB06C27243A522A335F (void);
// 0x0000050D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTexelAspect::EndInvoke(System.Single&,System.IAsyncResult)
extern void _GetOverlayTexelAspect_EndInvoke_m76E1A98518A333E9163F11BA3DBB36728D21B5D5 (void);
// 0x0000050E System.Void Valve.VR.IVROverlay/_SetOverlaySortOrder::.ctor(System.Object,System.IntPtr)
extern void _SetOverlaySortOrder__ctor_mC60B087F756E7790550BFA45B04FD77B676945CD (void);
// 0x0000050F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlaySortOrder::Invoke(System.UInt64,System.UInt32)
extern void _SetOverlaySortOrder_Invoke_mA410E6BB15F26F591B91115CB19BEC38E712A7C1 (void);
// 0x00000510 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlaySortOrder::BeginInvoke(System.UInt64,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetOverlaySortOrder_BeginInvoke_m96A1AC544FD67192F203925A1D8D2A75774D4F86 (void);
// 0x00000511 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlaySortOrder::EndInvoke(System.IAsyncResult)
extern void _SetOverlaySortOrder_EndInvoke_mEE2B0605BDCB5768D6AAC281ABF479A38C679BB2 (void);
// 0x00000512 System.Void Valve.VR.IVROverlay/_GetOverlaySortOrder::.ctor(System.Object,System.IntPtr)
extern void _GetOverlaySortOrder__ctor_mE5BDF312E483C92D9B07382B6D57F0A656A5CACB (void);
// 0x00000513 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlaySortOrder::Invoke(System.UInt64,System.UInt32&)
extern void _GetOverlaySortOrder_Invoke_m38F7588D3566314C1B69029EE191245A2BDDE391 (void);
// 0x00000514 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlaySortOrder::BeginInvoke(System.UInt64,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetOverlaySortOrder_BeginInvoke_m3F170CED51E4F27F7C32D948F1ED654817EB1C9A (void);
// 0x00000515 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlaySortOrder::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetOverlaySortOrder_EndInvoke_mCE69FB133D03429A9F26DC28AD2E895EB6C78855 (void);
// 0x00000516 System.Void Valve.VR.IVROverlay/_SetOverlayWidthInMeters::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayWidthInMeters__ctor_m23ED9B8BF5BF4156DA902EE82EBA0D69301D73FA (void);
// 0x00000517 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayWidthInMeters::Invoke(System.UInt64,System.Single)
extern void _SetOverlayWidthInMeters_Invoke_m70225658063BBFDC1B99707ADE844B62A61D73C1 (void);
// 0x00000518 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayWidthInMeters::BeginInvoke(System.UInt64,System.Single,System.AsyncCallback,System.Object)
extern void _SetOverlayWidthInMeters_BeginInvoke_m27A0A5B3D855A30BB2DA5CCA0C8CD2FE0A40B1DE (void);
// 0x00000519 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayWidthInMeters::EndInvoke(System.IAsyncResult)
extern void _SetOverlayWidthInMeters_EndInvoke_mD0DBE082AB611DCD27835B13F43E54CB419451D1 (void);
// 0x0000051A System.Void Valve.VR.IVROverlay/_GetOverlayWidthInMeters::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayWidthInMeters__ctor_mAD8393AD05897730E2F71F844F18357CAB98EEDD (void);
// 0x0000051B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayWidthInMeters::Invoke(System.UInt64,System.Single&)
extern void _GetOverlayWidthInMeters_Invoke_m438DA364D7A6BC756BE95F35F512F3C0902C04BB (void);
// 0x0000051C System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayWidthInMeters::BeginInvoke(System.UInt64,System.Single&,System.AsyncCallback,System.Object)
extern void _GetOverlayWidthInMeters_BeginInvoke_m61B487390EE06B0C710CC3E62FEA937F4653EB2A (void);
// 0x0000051D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayWidthInMeters::EndInvoke(System.Single&,System.IAsyncResult)
extern void _GetOverlayWidthInMeters_EndInvoke_m5C0F663F4693A431ACFD8295FBA1B62011D6F333 (void);
// 0x0000051E System.Void Valve.VR.IVROverlay/_SetOverlayCurvature::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayCurvature__ctor_m2EDCAFF2A3967EA768909B3C820FDE2DFBA2CD81 (void);
// 0x0000051F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayCurvature::Invoke(System.UInt64,System.Single)
extern void _SetOverlayCurvature_Invoke_m171EEAF0D65BADDAE288C8A33E276E4F552A3997 (void);
// 0x00000520 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayCurvature::BeginInvoke(System.UInt64,System.Single,System.AsyncCallback,System.Object)
extern void _SetOverlayCurvature_BeginInvoke_m97CD00E08DDA1282B7BFC5290D03735B10643A7E (void);
// 0x00000521 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayCurvature::EndInvoke(System.IAsyncResult)
extern void _SetOverlayCurvature_EndInvoke_mD9DBEEE802F66FE5B9DD85C8F3FBF833C5EB8ED1 (void);
// 0x00000522 System.Void Valve.VR.IVROverlay/_GetOverlayCurvature::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayCurvature__ctor_m31C314C011642A70996E658C3243B4F04A9FE9F0 (void);
// 0x00000523 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayCurvature::Invoke(System.UInt64,System.Single&)
extern void _GetOverlayCurvature_Invoke_m3DA4EEA610AF77B13890BA123BC83FB9A02AF8C5 (void);
// 0x00000524 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayCurvature::BeginInvoke(System.UInt64,System.Single&,System.AsyncCallback,System.Object)
extern void _GetOverlayCurvature_BeginInvoke_m77B57D476BB9F577F7C178BBBC4E67B425D5040C (void);
// 0x00000525 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayCurvature::EndInvoke(System.Single&,System.IAsyncResult)
extern void _GetOverlayCurvature_EndInvoke_m38C5B5C3CC6113BFAB849EDA7FD77577198FE079 (void);
// 0x00000526 System.Void Valve.VR.IVROverlay/_SetOverlayTextureColorSpace::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTextureColorSpace__ctor_mE0C5193EDE7C4E2A4189F6195831B03D95B5D088 (void);
// 0x00000527 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTextureColorSpace::Invoke(System.UInt64,Valve.VR.EColorSpace)
extern void _SetOverlayTextureColorSpace_Invoke_mB815463EE384034D38FD80027A5933D8869460AE (void);
// 0x00000528 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTextureColorSpace::BeginInvoke(System.UInt64,Valve.VR.EColorSpace,System.AsyncCallback,System.Object)
extern void _SetOverlayTextureColorSpace_BeginInvoke_m80743359FAC19B27FF555943CAD6B638307155E2 (void);
// 0x00000529 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTextureColorSpace::EndInvoke(System.IAsyncResult)
extern void _SetOverlayTextureColorSpace_EndInvoke_m2DE31E6B163150F337AA9C6EB6BEA375AC5FFD0F (void);
// 0x0000052A System.Void Valve.VR.IVROverlay/_GetOverlayTextureColorSpace::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTextureColorSpace__ctor_m4B0323C513C395D62C29024CF78CE9C52EEB6731 (void);
// 0x0000052B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTextureColorSpace::Invoke(System.UInt64,Valve.VR.EColorSpace&)
extern void _GetOverlayTextureColorSpace_Invoke_m54E43BCCDB69F3061CB2277EECC805A44E768DC8 (void);
// 0x0000052C System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTextureColorSpace::BeginInvoke(System.UInt64,Valve.VR.EColorSpace&,System.AsyncCallback,System.Object)
extern void _GetOverlayTextureColorSpace_BeginInvoke_m49CEBD8F37E6202A9D1AF6DCC293ACF4043685D9 (void);
// 0x0000052D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTextureColorSpace::EndInvoke(Valve.VR.EColorSpace&,System.IAsyncResult)
extern void _GetOverlayTextureColorSpace_EndInvoke_m227047911089AAF1B8404BCBE6F524509CB9B1DB (void);
// 0x0000052E System.Void Valve.VR.IVROverlay/_SetOverlayTextureBounds::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTextureBounds__ctor_mFB62F5E7A02B03C1B95CE96B6CF51A657A34C678 (void);
// 0x0000052F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTextureBounds::Invoke(System.UInt64,Valve.VR.VRTextureBounds_t&)
extern void _SetOverlayTextureBounds_Invoke_m162BCC0137216BC4B965FD8A017CAC681BFA2AD9 (void);
// 0x00000530 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTextureBounds::BeginInvoke(System.UInt64,Valve.VR.VRTextureBounds_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayTextureBounds_BeginInvoke_mD6A5270C3E79FB79E0785B9F528D1008582A4C0A (void);
// 0x00000531 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTextureBounds::EndInvoke(Valve.VR.VRTextureBounds_t&,System.IAsyncResult)
extern void _SetOverlayTextureBounds_EndInvoke_m2D0576967F0F55FFE4C253698D4F82F227D15ABE (void);
// 0x00000532 System.Void Valve.VR.IVROverlay/_GetOverlayTextureBounds::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTextureBounds__ctor_m55C23717BCF06DC500D52CB60EC84F4DB3700506 (void);
// 0x00000533 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTextureBounds::Invoke(System.UInt64,Valve.VR.VRTextureBounds_t&)
extern void _GetOverlayTextureBounds_Invoke_mA8A0F7D7A442D0A11214D73148CE159EA354E1F0 (void);
// 0x00000534 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTextureBounds::BeginInvoke(System.UInt64,Valve.VR.VRTextureBounds_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayTextureBounds_BeginInvoke_m97A6C3E85FA46333C5ED3B21F4DA6BD432683CDB (void);
// 0x00000535 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTextureBounds::EndInvoke(Valve.VR.VRTextureBounds_t&,System.IAsyncResult)
extern void _GetOverlayTextureBounds_EndInvoke_mBBFF1AD5FFD957E3057320DD8398557F99E8A0AB (void);
// 0x00000536 System.Void Valve.VR.IVROverlay/_GetOverlayTransformType::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTransformType__ctor_m3A3F6B8C72F99EDBFA55FF405FFD0CC41B71B933 (void);
// 0x00000537 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformType::Invoke(System.UInt64,Valve.VR.VROverlayTransformType&)
extern void _GetOverlayTransformType_Invoke_m63F5F14B2640E6246D90DEA21583DFA026BC0C3C (void);
// 0x00000538 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTransformType::BeginInvoke(System.UInt64,Valve.VR.VROverlayTransformType&,System.AsyncCallback,System.Object)
extern void _GetOverlayTransformType_BeginInvoke_m1BB0830D47868BB4897BBF62A63FE1F1C724B59A (void);
// 0x00000539 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformType::EndInvoke(Valve.VR.VROverlayTransformType&,System.IAsyncResult)
extern void _GetOverlayTransformType_EndInvoke_mE22DDED2AB1C49FD621A637F97E7A50EEEA78B6C (void);
// 0x0000053A System.Void Valve.VR.IVROverlay/_SetOverlayTransformAbsolute::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTransformAbsolute__ctor_m46C5EF534060C9D7097266B3D7253B948756C5B5 (void);
// 0x0000053B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformAbsolute::Invoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdMatrix34_t&)
extern void _SetOverlayTransformAbsolute_Invoke_m7D01B4161BD59745320136A328C07AB0B2CDEE21 (void);
// 0x0000053C System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTransformAbsolute::BeginInvoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayTransformAbsolute_BeginInvoke_m5B5EBEC982975C234CDDD6DF7722A652E555B988 (void);
// 0x0000053D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformAbsolute::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _SetOverlayTransformAbsolute_EndInvoke_m83183057949BD7749D19658497D0ECA4FA66E0EC (void);
// 0x0000053E System.Void Valve.VR.IVROverlay/_GetOverlayTransformAbsolute::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTransformAbsolute__ctor_mC9693ED182F36AFF3A4D08B3A68C513689106F2A (void);
// 0x0000053F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformAbsolute::Invoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin&,Valve.VR.HmdMatrix34_t&)
extern void _GetOverlayTransformAbsolute_Invoke_m67969C7F1330BAEACD2EB68EE7487DC9F6B925E2 (void);
// 0x00000540 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTransformAbsolute::BeginInvoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin&,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayTransformAbsolute_BeginInvoke_m6DB2930663ADA2DC05F48A02C8B9BE110D1C6C3C (void);
// 0x00000541 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformAbsolute::EndInvoke(Valve.VR.ETrackingUniverseOrigin&,Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetOverlayTransformAbsolute_EndInvoke_mBA533A7FC08A99CCC5BC7C3D41CEF444CA3E20AC (void);
// 0x00000542 System.Void Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTransformTrackedDeviceRelative__ctor_mE16E0EF15BC85AEACB13021FE1DB8476DF4A69AA (void);
// 0x00000543 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative::Invoke(System.UInt64,System.UInt32,Valve.VR.HmdMatrix34_t&)
extern void _SetOverlayTransformTrackedDeviceRelative_Invoke_m7B01D22DA27BB7E173DA34C733810A8E5D33FE70 (void);
// 0x00000544 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative::BeginInvoke(System.UInt64,System.UInt32,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayTransformTrackedDeviceRelative_BeginInvoke_m3BCE81EDE82DBA1B8781B3F378CFB4D55286AD1A (void);
// 0x00000545 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _SetOverlayTransformTrackedDeviceRelative_EndInvoke_m0F8A0B9706093CD3CE76A7C7F0FBC6882D3A0D1A (void);
// 0x00000546 System.Void Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTransformTrackedDeviceRelative__ctor_m1682E4F42D8C45A942B8E3B321A1A66F4B4453F2 (void);
// 0x00000547 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative::Invoke(System.UInt64,System.UInt32&,Valve.VR.HmdMatrix34_t&)
extern void _GetOverlayTransformTrackedDeviceRelative_Invoke_m8742D0DA6348D9CD234941CEB40977BBB4B4F335 (void);
// 0x00000548 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative::BeginInvoke(System.UInt64,System.UInt32&,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayTransformTrackedDeviceRelative_BeginInvoke_m8B12001111D347C16B1CBE29DBB76D50F7878C67 (void);
// 0x00000549 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative::EndInvoke(System.UInt32&,Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetOverlayTransformTrackedDeviceRelative_EndInvoke_mB7A59CADC90B149826AEF27D61784EC26C5E259B (void);
// 0x0000054A System.Void Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTransformTrackedDeviceComponent__ctor_mE8555D40DA5DF5A77843A7228685344BA8AB9295 (void);
// 0x0000054B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent::Invoke(System.UInt64,System.UInt32,System.IntPtr)
extern void _SetOverlayTransformTrackedDeviceComponent_Invoke_m375EBC28B437C74814E2209E47E208CE5FB9B99C (void);
// 0x0000054C System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent::BeginInvoke(System.UInt64,System.UInt32,System.IntPtr,System.AsyncCallback,System.Object)
extern void _SetOverlayTransformTrackedDeviceComponent_BeginInvoke_m25C94F007EC41F193D691A02139E9C8CE28195CF (void);
// 0x0000054D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent::EndInvoke(System.IAsyncResult)
extern void _SetOverlayTransformTrackedDeviceComponent_EndInvoke_mDD81F421471BD13BF0DFF8F70A69290E533E99AB (void);
// 0x0000054E System.Void Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTransformTrackedDeviceComponent__ctor_mE2B7F4C45DBEAE58557137988A33BA068778157C (void);
// 0x0000054F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent::Invoke(System.UInt64,System.UInt32&,System.Text.StringBuilder,System.UInt32)
extern void _GetOverlayTransformTrackedDeviceComponent_Invoke_mC3A14C21F24A72254F95E3F3A583DD8F068B0C3C (void);
// 0x00000550 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent::BeginInvoke(System.UInt64,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetOverlayTransformTrackedDeviceComponent_BeginInvoke_mB8BC095B53A20768668B91275A724DE60ADEEAA9 (void);
// 0x00000551 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetOverlayTransformTrackedDeviceComponent_EndInvoke_m9ED81DBB008776A95376E61B6FD162FC6E9A52EE (void);
// 0x00000552 System.Void Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTransformOverlayRelative__ctor_m04FEAFDF099DB4702599F4010DB57A5990B4782F (void);
// 0x00000553 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative::Invoke(System.UInt64,System.UInt64&,Valve.VR.HmdMatrix34_t&)
extern void _GetOverlayTransformOverlayRelative_Invoke_mFCE2CD7303258304E5D342DE9CC7DFBC8A89C40D (void);
// 0x00000554 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative::BeginInvoke(System.UInt64,System.UInt64&,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayTransformOverlayRelative_BeginInvoke_mC7B56BF35930ED8C83B9A921FABE03718623C5F7 (void);
// 0x00000555 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative::EndInvoke(System.UInt64&,Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetOverlayTransformOverlayRelative_EndInvoke_m7C9EF1099F4126184C751C97184D6FE9418D5813 (void);
// 0x00000556 System.Void Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTransformOverlayRelative__ctor_m8860005ECA3319448F4D508BF625532C999B0F6A (void);
// 0x00000557 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative::Invoke(System.UInt64,System.UInt64,Valve.VR.HmdMatrix34_t&)
extern void _SetOverlayTransformOverlayRelative_Invoke_mE6C0CD18B813C7DC2096A02CC57A14EDCD625368 (void);
// 0x00000558 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative::BeginInvoke(System.UInt64,System.UInt64,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayTransformOverlayRelative_BeginInvoke_mB7DBBE18FF6AB657E9008D93DBD1F618FF03DA09 (void);
// 0x00000559 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _SetOverlayTransformOverlayRelative_EndInvoke_m060EE8929F5F26771E20C4E498FB362B97B1B120 (void);
// 0x0000055A System.Void Valve.VR.IVROverlay/_SetOverlayTransformCursor::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTransformCursor__ctor_mFCB02815F79333165E1F33849CC6CAE5A4F3D032 (void);
// 0x0000055B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformCursor::Invoke(System.UInt64,Valve.VR.HmdVector2_t&)
extern void _SetOverlayTransformCursor_Invoke_mD16E0829C75AE40C8E76F6B633F2D95BD4795072 (void);
// 0x0000055C System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTransformCursor::BeginInvoke(System.UInt64,Valve.VR.HmdVector2_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayTransformCursor_BeginInvoke_m7B49BF9EB0A218D6BB1163825D8AC86938B8E705 (void);
// 0x0000055D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTransformCursor::EndInvoke(Valve.VR.HmdVector2_t&,System.IAsyncResult)
extern void _SetOverlayTransformCursor_EndInvoke_mAB23F0846C5F50B243B528A7884219E949304094 (void);
// 0x0000055E System.Void Valve.VR.IVROverlay/_GetOverlayTransformCursor::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTransformCursor__ctor_m86972F1A76A4DDE282BE3E01FA21A41D61661FEF (void);
// 0x0000055F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformCursor::Invoke(System.UInt64,Valve.VR.HmdVector2_t&)
extern void _GetOverlayTransformCursor_Invoke_m713A68C2C9CDEA0526F6336E98D4DBBD5468B36B (void);
// 0x00000560 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTransformCursor::BeginInvoke(System.UInt64,Valve.VR.HmdVector2_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayTransformCursor_BeginInvoke_mEF542A639ED5EAECFDF4EF73CC543A91592D5B9D (void);
// 0x00000561 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTransformCursor::EndInvoke(Valve.VR.HmdVector2_t&,System.IAsyncResult)
extern void _GetOverlayTransformCursor_EndInvoke_m6CBC8727C8EC6CAF66435DAB208AB14F6678E2E6 (void);
// 0x00000562 System.Void Valve.VR.IVROverlay/_ShowOverlay::.ctor(System.Object,System.IntPtr)
extern void _ShowOverlay__ctor_mB5C6B2F474C7A4C0A6F1053774EDC8E16CC84242 (void);
// 0x00000563 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ShowOverlay::Invoke(System.UInt64)
extern void _ShowOverlay_Invoke_m5350AEA48E1598EE546A9CAAF8D49DC61043F99F (void);
// 0x00000564 System.IAsyncResult Valve.VR.IVROverlay/_ShowOverlay::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _ShowOverlay_BeginInvoke_m50EC21D48CCF15F03640A362ECAA88454C7B0CD2 (void);
// 0x00000565 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ShowOverlay::EndInvoke(System.IAsyncResult)
extern void _ShowOverlay_EndInvoke_m9B0A71D80F7281960AA4BC1DE0EC760319FD125D (void);
// 0x00000566 System.Void Valve.VR.IVROverlay/_HideOverlay::.ctor(System.Object,System.IntPtr)
extern void _HideOverlay__ctor_mC56DECE330C9655BCC51812100FF943603C1E9B6 (void);
// 0x00000567 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_HideOverlay::Invoke(System.UInt64)
extern void _HideOverlay_Invoke_m6765FCD147D087248E92A2A06596BA4356AF3D24 (void);
// 0x00000568 System.IAsyncResult Valve.VR.IVROverlay/_HideOverlay::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _HideOverlay_BeginInvoke_m0DB3C616DE1A84E364BFF5FC19B460A22F6ECE63 (void);
// 0x00000569 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_HideOverlay::EndInvoke(System.IAsyncResult)
extern void _HideOverlay_EndInvoke_m443AC72CEC448EB04138281A83C84601ABDAEDC4 (void);
// 0x0000056A System.Void Valve.VR.IVROverlay/_IsOverlayVisible::.ctor(System.Object,System.IntPtr)
extern void _IsOverlayVisible__ctor_m96D8597FBD59ABCC466726BD3A02946F68C9AD80 (void);
// 0x0000056B System.Boolean Valve.VR.IVROverlay/_IsOverlayVisible::Invoke(System.UInt64)
extern void _IsOverlayVisible_Invoke_mEDF4D82889067AF3F03D600D514F1748FA6261C6 (void);
// 0x0000056C System.IAsyncResult Valve.VR.IVROverlay/_IsOverlayVisible::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _IsOverlayVisible_BeginInvoke_m5999A107583C980AC5641D798495EF69ECE1AFB4 (void);
// 0x0000056D System.Boolean Valve.VR.IVROverlay/_IsOverlayVisible::EndInvoke(System.IAsyncResult)
extern void _IsOverlayVisible_EndInvoke_m15B937877A7BD85DD47E3BA00FA9E34FF851B5D5 (void);
// 0x0000056E System.Void Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates::.ctor(System.Object,System.IntPtr)
extern void _GetTransformForOverlayCoordinates__ctor_m8B33CC1AF9DAECFBB64AF60782320A62225053A0 (void);
// 0x0000056F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates::Invoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdVector2_t,Valve.VR.HmdMatrix34_t&)
extern void _GetTransformForOverlayCoordinates_Invoke_mE3E3D84DCD6AEC364E53F07F6BE33E58E701CA79 (void);
// 0x00000570 System.IAsyncResult Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates::BeginInvoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdVector2_t,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _GetTransformForOverlayCoordinates_BeginInvoke_m7286D566E2F29C1FF7202BE05DAFCC836897DBA2 (void);
// 0x00000571 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _GetTransformForOverlayCoordinates_EndInvoke_m8FDF6360AD8ADFB8AFCCB05B04DE8CACB19BAF0A (void);
// 0x00000572 System.Void Valve.VR.IVROverlay/_PollNextOverlayEvent::.ctor(System.Object,System.IntPtr)
extern void _PollNextOverlayEvent__ctor_m126904775AB1B46FBB487D184BA191C016813857 (void);
// 0x00000573 System.Boolean Valve.VR.IVROverlay/_PollNextOverlayEvent::Invoke(System.UInt64,Valve.VR.VREvent_t&,System.UInt32)
extern void _PollNextOverlayEvent_Invoke_m43024125C2E4A4566D60FF4E837F113C731D68FA (void);
// 0x00000574 System.IAsyncResult Valve.VR.IVROverlay/_PollNextOverlayEvent::BeginInvoke(System.UInt64,Valve.VR.VREvent_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _PollNextOverlayEvent_BeginInvoke_m08952287C916B96843D99861E709AB1B4B378FD9 (void);
// 0x00000575 System.Boolean Valve.VR.IVROverlay/_PollNextOverlayEvent::EndInvoke(Valve.VR.VREvent_t&,System.IAsyncResult)
extern void _PollNextOverlayEvent_EndInvoke_mF159DF12D56A8C0C7E936849B64ECDE1D1C326D8 (void);
// 0x00000576 System.Void Valve.VR.IVROverlay/_GetOverlayInputMethod::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayInputMethod__ctor_m46DC04F1173ECA972A406B748E4968BBFFC09CD0 (void);
// 0x00000577 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayInputMethod::Invoke(System.UInt64,Valve.VR.VROverlayInputMethod&)
extern void _GetOverlayInputMethod_Invoke_mA799A72D57B52EE30BFC271E2EF0811E4BBE2490 (void);
// 0x00000578 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayInputMethod::BeginInvoke(System.UInt64,Valve.VR.VROverlayInputMethod&,System.AsyncCallback,System.Object)
extern void _GetOverlayInputMethod_BeginInvoke_m8C5E13835CB25E9E21AA9BD64FA51559A24FC41A (void);
// 0x00000579 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayInputMethod::EndInvoke(Valve.VR.VROverlayInputMethod&,System.IAsyncResult)
extern void _GetOverlayInputMethod_EndInvoke_m03B62F51F640EE3ECFBA2C7D88A94295DA8B69EE (void);
// 0x0000057A System.Void Valve.VR.IVROverlay/_SetOverlayInputMethod::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayInputMethod__ctor_mCBF4292B0F5058F5100EBC99E750B01035379884 (void);
// 0x0000057B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayInputMethod::Invoke(System.UInt64,Valve.VR.VROverlayInputMethod)
extern void _SetOverlayInputMethod_Invoke_m8CE29526D4BCDA6202DEEA74D2EC5DE55D8098BE (void);
// 0x0000057C System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayInputMethod::BeginInvoke(System.UInt64,Valve.VR.VROverlayInputMethod,System.AsyncCallback,System.Object)
extern void _SetOverlayInputMethod_BeginInvoke_mB9B982E01FFEC9A7D3EF589B51D3811F131B753C (void);
// 0x0000057D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayInputMethod::EndInvoke(System.IAsyncResult)
extern void _SetOverlayInputMethod_EndInvoke_m4616965C1F02EADED2C4F68B3C0A9946E8934B66 (void);
// 0x0000057E System.Void Valve.VR.IVROverlay/_GetOverlayMouseScale::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayMouseScale__ctor_mE4E47B7CA85724BD4A6AB84454100309E0A300E6 (void);
// 0x0000057F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayMouseScale::Invoke(System.UInt64,Valve.VR.HmdVector2_t&)
extern void _GetOverlayMouseScale_Invoke_m91EA2E522A246C8DF6EE7233D537821F9307C55B (void);
// 0x00000580 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayMouseScale::BeginInvoke(System.UInt64,Valve.VR.HmdVector2_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayMouseScale_BeginInvoke_mAD6DC7A20FA32DD653CF401873AE2EC2DB1E4321 (void);
// 0x00000581 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayMouseScale::EndInvoke(Valve.VR.HmdVector2_t&,System.IAsyncResult)
extern void _GetOverlayMouseScale_EndInvoke_m2A9C49C9B3DAD4F2BA8D2C4A23FA1437E66B7268 (void);
// 0x00000582 System.Void Valve.VR.IVROverlay/_SetOverlayMouseScale::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayMouseScale__ctor_m9930F605B1B546E8933ACC0DA31FD06CEC9775F2 (void);
// 0x00000583 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayMouseScale::Invoke(System.UInt64,Valve.VR.HmdVector2_t&)
extern void _SetOverlayMouseScale_Invoke_mA79F34381BDF2ED5E2F22FD9D8F034C7B6650B32 (void);
// 0x00000584 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayMouseScale::BeginInvoke(System.UInt64,Valve.VR.HmdVector2_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayMouseScale_BeginInvoke_mC3C0E1C0E77B3CDA89F775098BAD68CCE720F316 (void);
// 0x00000585 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayMouseScale::EndInvoke(Valve.VR.HmdVector2_t&,System.IAsyncResult)
extern void _SetOverlayMouseScale_EndInvoke_m708D113A1DD778D2DAB8517B31A527EA1CA71948 (void);
// 0x00000586 System.Void Valve.VR.IVROverlay/_ComputeOverlayIntersection::.ctor(System.Object,System.IntPtr)
extern void _ComputeOverlayIntersection__ctor_m783CFCE8DC89620A722AC7316E908E46F20E04C5 (void);
// 0x00000587 System.Boolean Valve.VR.IVROverlay/_ComputeOverlayIntersection::Invoke(System.UInt64,Valve.VR.VROverlayIntersectionParams_t&,Valve.VR.VROverlayIntersectionResults_t&)
extern void _ComputeOverlayIntersection_Invoke_m5134957003DF00882BF9E02F77A6362C7C63565B (void);
// 0x00000588 System.IAsyncResult Valve.VR.IVROverlay/_ComputeOverlayIntersection::BeginInvoke(System.UInt64,Valve.VR.VROverlayIntersectionParams_t&,Valve.VR.VROverlayIntersectionResults_t&,System.AsyncCallback,System.Object)
extern void _ComputeOverlayIntersection_BeginInvoke_m631E2FB6BE6B8DF6D08AA4C7928EF3E229CA3212 (void);
// 0x00000589 System.Boolean Valve.VR.IVROverlay/_ComputeOverlayIntersection::EndInvoke(Valve.VR.VROverlayIntersectionParams_t&,Valve.VR.VROverlayIntersectionResults_t&,System.IAsyncResult)
extern void _ComputeOverlayIntersection_EndInvoke_m2310E1405C3A55D6394D07434899FFB957CF242A (void);
// 0x0000058A System.Void Valve.VR.IVROverlay/_IsHoverTargetOverlay::.ctor(System.Object,System.IntPtr)
extern void _IsHoverTargetOverlay__ctor_mF592DF56E2848D073882039B879DCB3260375D0E (void);
// 0x0000058B System.Boolean Valve.VR.IVROverlay/_IsHoverTargetOverlay::Invoke(System.UInt64)
extern void _IsHoverTargetOverlay_Invoke_m3B81B442CE9483BC39B0F09D68EE69CEBD9A293D (void);
// 0x0000058C System.IAsyncResult Valve.VR.IVROverlay/_IsHoverTargetOverlay::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _IsHoverTargetOverlay_BeginInvoke_mEB5BA966DF94FFA070A5E41A9AD91A3DFBB4FA79 (void);
// 0x0000058D System.Boolean Valve.VR.IVROverlay/_IsHoverTargetOverlay::EndInvoke(System.IAsyncResult)
extern void _IsHoverTargetOverlay_EndInvoke_m07DD92C0402F7CA8FE7BAEFE06D8539C6F720080 (void);
// 0x0000058E System.Void Valve.VR.IVROverlay/_SetOverlayIntersectionMask::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayIntersectionMask__ctor_m854C5C0AF96B9D36B772514F7A24E8FA57B2DBC2 (void);
// 0x0000058F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayIntersectionMask::Invoke(System.UInt64,Valve.VR.VROverlayIntersectionMaskPrimitive_t&,System.UInt32,System.UInt32)
extern void _SetOverlayIntersectionMask_Invoke_mD7D360E7B6AC17EA3A491E71470331E1CB2EED2E (void);
// 0x00000590 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayIntersectionMask::BeginInvoke(System.UInt64,Valve.VR.VROverlayIntersectionMaskPrimitive_t&,System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetOverlayIntersectionMask_BeginInvoke_m4F44FCECD14922E779A6AE23FA1EAC8CE15ADE10 (void);
// 0x00000591 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayIntersectionMask::EndInvoke(Valve.VR.VROverlayIntersectionMaskPrimitive_t&,System.IAsyncResult)
extern void _SetOverlayIntersectionMask_EndInvoke_m98AD117CAA3B49C14C1C50B2DDA1A065CFE5BB8E (void);
// 0x00000592 System.Void Valve.VR.IVROverlay/_TriggerLaserMouseHapticVibration::.ctor(System.Object,System.IntPtr)
extern void _TriggerLaserMouseHapticVibration__ctor_m45F2DBD26554063EC177A7597DA6D27D22C8C48E (void);
// 0x00000593 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_TriggerLaserMouseHapticVibration::Invoke(System.UInt64,System.Single,System.Single,System.Single)
extern void _TriggerLaserMouseHapticVibration_Invoke_mB75AA555B5361EAEEA818072B3C9B7CCAA6B83BC (void);
// 0x00000594 System.IAsyncResult Valve.VR.IVROverlay/_TriggerLaserMouseHapticVibration::BeginInvoke(System.UInt64,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern void _TriggerLaserMouseHapticVibration_BeginInvoke_m386A28519C9A30DAAB843096B817595EC97C7FC9 (void);
// 0x00000595 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_TriggerLaserMouseHapticVibration::EndInvoke(System.IAsyncResult)
extern void _TriggerLaserMouseHapticVibration_EndInvoke_m0D367994315F710AFA67DD6C71358533705FF23A (void);
// 0x00000596 System.Void Valve.VR.IVROverlay/_SetOverlayCursor::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayCursor__ctor_m485FDEC1F4F3ABD3B8C0BFB8FDD2335BA6E00588 (void);
// 0x00000597 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayCursor::Invoke(System.UInt64,System.UInt64)
extern void _SetOverlayCursor_Invoke_m6446EAF54D929745476A89CD5D02A9A605773BBC (void);
// 0x00000598 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayCursor::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
extern void _SetOverlayCursor_BeginInvoke_mE7287B22F90411FAC3C80DA6C7C093AB09F34110 (void);
// 0x00000599 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayCursor::EndInvoke(System.IAsyncResult)
extern void _SetOverlayCursor_EndInvoke_mE80EF242587645845D38A3B80180BD4453A6B407 (void);
// 0x0000059A System.Void Valve.VR.IVROverlay/_SetOverlayCursorPositionOverride::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayCursorPositionOverride__ctor_mECE50B636188003C498C4C4EAD62B95DC9CB1291 (void);
// 0x0000059B Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayCursorPositionOverride::Invoke(System.UInt64,Valve.VR.HmdVector2_t&)
extern void _SetOverlayCursorPositionOverride_Invoke_m4F063A39F2ECE669FC840422D83BE6029AAD9DBB (void);
// 0x0000059C System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayCursorPositionOverride::BeginInvoke(System.UInt64,Valve.VR.HmdVector2_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayCursorPositionOverride_BeginInvoke_m8390B8597CACFA76A84C2402193F81A3408EFF9A (void);
// 0x0000059D Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayCursorPositionOverride::EndInvoke(Valve.VR.HmdVector2_t&,System.IAsyncResult)
extern void _SetOverlayCursorPositionOverride_EndInvoke_m6410CB5BDCF574A50DA677992C15E1C36D0B5C60 (void);
// 0x0000059E System.Void Valve.VR.IVROverlay/_ClearOverlayCursorPositionOverride::.ctor(System.Object,System.IntPtr)
extern void _ClearOverlayCursorPositionOverride__ctor_m5955F6FE98827FC5AE6E88F448EE24AD191FE17D (void);
// 0x0000059F Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ClearOverlayCursorPositionOverride::Invoke(System.UInt64)
extern void _ClearOverlayCursorPositionOverride_Invoke_mBE390A62257A778CFE35EF5ADF7E7E1791B51A93 (void);
// 0x000005A0 System.IAsyncResult Valve.VR.IVROverlay/_ClearOverlayCursorPositionOverride::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _ClearOverlayCursorPositionOverride_BeginInvoke_mE5CC64CC555A1E240FB7752C3F6218DB799FA4BC (void);
// 0x000005A1 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ClearOverlayCursorPositionOverride::EndInvoke(System.IAsyncResult)
extern void _ClearOverlayCursorPositionOverride_EndInvoke_mB7E9CE2034E390B3C96EF14DE9F263DC7B3623F0 (void);
// 0x000005A2 System.Void Valve.VR.IVROverlay/_SetOverlayTexture::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayTexture__ctor_m19A66B96C7B3703E897E303F2D7A9E57D3133F34 (void);
// 0x000005A3 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTexture::Invoke(System.UInt64,Valve.VR.Texture_t&)
extern void _SetOverlayTexture_Invoke_mE5CB0D9C94F898CDAA9D545C5F60724B12B623B3 (void);
// 0x000005A4 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayTexture::BeginInvoke(System.UInt64,Valve.VR.Texture_t&,System.AsyncCallback,System.Object)
extern void _SetOverlayTexture_BeginInvoke_m8A1960D476EAA5BCD882C6FF1A1EC2B25100B7E7 (void);
// 0x000005A5 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayTexture::EndInvoke(Valve.VR.Texture_t&,System.IAsyncResult)
extern void _SetOverlayTexture_EndInvoke_mAB2DD53E79FB3FD49EECD204FA92C37B23074903 (void);
// 0x000005A6 System.Void Valve.VR.IVROverlay/_ClearOverlayTexture::.ctor(System.Object,System.IntPtr)
extern void _ClearOverlayTexture__ctor_mBB9B3430C6262F65E289A9AD17EFD8BDAD199DE9 (void);
// 0x000005A7 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ClearOverlayTexture::Invoke(System.UInt64)
extern void _ClearOverlayTexture_Invoke_m7B0868A4FE8787023314B393060060859D15DAD3 (void);
// 0x000005A8 System.IAsyncResult Valve.VR.IVROverlay/_ClearOverlayTexture::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _ClearOverlayTexture_BeginInvoke_m0C57191DFAA8E737BC1E352CEF2FCB6C80F974E3 (void);
// 0x000005A9 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ClearOverlayTexture::EndInvoke(System.IAsyncResult)
extern void _ClearOverlayTexture_EndInvoke_mDC0A67CBD9AAF725A5093ADB78D14FBDAC011737 (void);
// 0x000005AA System.Void Valve.VR.IVROverlay/_SetOverlayRaw::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayRaw__ctor_m6E9AA31A3C35DBE80FAFFFD1408D2EDD7E97569F (void);
// 0x000005AB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayRaw::Invoke(System.UInt64,System.IntPtr,System.UInt32,System.UInt32,System.UInt32)
extern void _SetOverlayRaw_Invoke_m6039CC764031C8BCCFCDB3A00408D442CBB0F913 (void);
// 0x000005AC System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayRaw::BeginInvoke(System.UInt64,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetOverlayRaw_BeginInvoke_m47FCD2E4C7462518F6C984AB8428FF06D39F019F (void);
// 0x000005AD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayRaw::EndInvoke(System.IAsyncResult)
extern void _SetOverlayRaw_EndInvoke_m79ED121C9BB172B73D2E075C00875FE37548715C (void);
// 0x000005AE System.Void Valve.VR.IVROverlay/_SetOverlayFromFile::.ctor(System.Object,System.IntPtr)
extern void _SetOverlayFromFile__ctor_mBB1DE9D3AAD0C844FD937859575F5F838AA435DC (void);
// 0x000005AF Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayFromFile::Invoke(System.UInt64,System.IntPtr)
extern void _SetOverlayFromFile_Invoke_m667C820D7BA362B8659F63E473B3FEA50F824AA2 (void);
// 0x000005B0 System.IAsyncResult Valve.VR.IVROverlay/_SetOverlayFromFile::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void _SetOverlayFromFile_BeginInvoke_mBCB3E567635888CED47732074FFD847910A4756A (void);
// 0x000005B1 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetOverlayFromFile::EndInvoke(System.IAsyncResult)
extern void _SetOverlayFromFile_EndInvoke_mE22B446C6E9C1389B4DFED9AB37866205132686B (void);
// 0x000005B2 System.Void Valve.VR.IVROverlay/_GetOverlayTexture::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTexture__ctor_mEA498E68E8DABBC89C6F1DE918913575A67259FB (void);
// 0x000005B3 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTexture::Invoke(System.UInt64,System.IntPtr&,System.IntPtr,System.UInt32&,System.UInt32&,System.UInt32&,Valve.VR.ETextureType&,Valve.VR.EColorSpace&,Valve.VR.VRTextureBounds_t&)
extern void _GetOverlayTexture_Invoke_mC57FC13E89A53B023F6D1F281DBD377AF6440A67 (void);
// 0x000005B4 System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTexture::BeginInvoke(System.UInt64,System.IntPtr&,System.IntPtr,System.UInt32&,System.UInt32&,System.UInt32&,Valve.VR.ETextureType&,Valve.VR.EColorSpace&,Valve.VR.VRTextureBounds_t&,System.AsyncCallback,System.Object)
extern void _GetOverlayTexture_BeginInvoke_mEF9F1CAB63606D8C2FD4BF127BD151BD464C9A38 (void);
// 0x000005B5 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTexture::EndInvoke(System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,Valve.VR.ETextureType&,Valve.VR.EColorSpace&,Valve.VR.VRTextureBounds_t&,System.IAsyncResult)
extern void _GetOverlayTexture_EndInvoke_mC6B7960B16859A12733C118D95BE2C6112F6A7A7 (void);
// 0x000005B6 System.Void Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle::.ctor(System.Object,System.IntPtr)
extern void _ReleaseNativeOverlayHandle__ctor_mF3FCA6EBDF25DC3C14968EC5301A6EA72EF5FDF4 (void);
// 0x000005B7 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle::Invoke(System.UInt64,System.IntPtr)
extern void _ReleaseNativeOverlayHandle_Invoke_m3FDFF05640AF46F9F6CA47B47EEE6ED272FA180E (void);
// 0x000005B8 System.IAsyncResult Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void _ReleaseNativeOverlayHandle_BeginInvoke_m52097E9630B36139C3F7E04D37BB109EB0983297 (void);
// 0x000005B9 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle::EndInvoke(System.IAsyncResult)
extern void _ReleaseNativeOverlayHandle_EndInvoke_m371849D5667B52C3C5ED631A78611ECE6F96BA1C (void);
// 0x000005BA System.Void Valve.VR.IVROverlay/_GetOverlayTextureSize::.ctor(System.Object,System.IntPtr)
extern void _GetOverlayTextureSize__ctor_m09A72F94CE30180CA6B5C154F25323238A6C6CCD (void);
// 0x000005BB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTextureSize::Invoke(System.UInt64,System.UInt32&,System.UInt32&)
extern void _GetOverlayTextureSize_Invoke_mED526DB8B008AB259A388C2B4562EED9DE555ADF (void);
// 0x000005BC System.IAsyncResult Valve.VR.IVROverlay/_GetOverlayTextureSize::BeginInvoke(System.UInt64,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetOverlayTextureSize_BeginInvoke_m77B42F37D0B9453E630C372D5D20C33CBC58572A (void);
// 0x000005BD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetOverlayTextureSize::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetOverlayTextureSize_EndInvoke_m7656E0B18543B4B7501D5425B286EF5893896377 (void);
// 0x000005BE System.Void Valve.VR.IVROverlay/_CreateDashboardOverlay::.ctor(System.Object,System.IntPtr)
extern void _CreateDashboardOverlay__ctor_m87F874E652A88187F70F46E3231D499C12BDFEBF (void);
// 0x000005BF Valve.VR.EVROverlayError Valve.VR.IVROverlay/_CreateDashboardOverlay::Invoke(System.IntPtr,System.IntPtr,System.UInt64&,System.UInt64&)
extern void _CreateDashboardOverlay_Invoke_m14C5F020924949BBC03B4423793E0218AB4134AB (void);
// 0x000005C0 System.IAsyncResult Valve.VR.IVROverlay/_CreateDashboardOverlay::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt64&,System.UInt64&,System.AsyncCallback,System.Object)
extern void _CreateDashboardOverlay_BeginInvoke_mF6EB565ECD064D7CA3D6D60FAD4BF34B0788333A (void);
// 0x000005C1 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_CreateDashboardOverlay::EndInvoke(System.UInt64&,System.UInt64&,System.IAsyncResult)
extern void _CreateDashboardOverlay_EndInvoke_m67358612202E86784CB18E4A1F192FB00EBEA085 (void);
// 0x000005C2 System.Void Valve.VR.IVROverlay/_IsDashboardVisible::.ctor(System.Object,System.IntPtr)
extern void _IsDashboardVisible__ctor_mF9684B921A8204B29BD368C846830784908E6593 (void);
// 0x000005C3 System.Boolean Valve.VR.IVROverlay/_IsDashboardVisible::Invoke()
extern void _IsDashboardVisible_Invoke_m69FEBE575C03FBC034D4C7EE6B00299840A7B556 (void);
// 0x000005C4 System.IAsyncResult Valve.VR.IVROverlay/_IsDashboardVisible::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsDashboardVisible_BeginInvoke_m5ED996DF87F642595A3087294E9D8EA4B7CFB752 (void);
// 0x000005C5 System.Boolean Valve.VR.IVROverlay/_IsDashboardVisible::EndInvoke(System.IAsyncResult)
extern void _IsDashboardVisible_EndInvoke_m1B8BB53854A4C2E3DAE13ED840EAEFB0680CA528 (void);
// 0x000005C6 System.Void Valve.VR.IVROverlay/_IsActiveDashboardOverlay::.ctor(System.Object,System.IntPtr)
extern void _IsActiveDashboardOverlay__ctor_mA9813E091DB0E68BE7F64519CE89E04B16224261 (void);
// 0x000005C7 System.Boolean Valve.VR.IVROverlay/_IsActiveDashboardOverlay::Invoke(System.UInt64)
extern void _IsActiveDashboardOverlay_Invoke_m2579B84F899FC9DC6B9B402194A5471FC53723CC (void);
// 0x000005C8 System.IAsyncResult Valve.VR.IVROverlay/_IsActiveDashboardOverlay::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _IsActiveDashboardOverlay_BeginInvoke_m98FEB1F07C46BC0D2AA504B17FEC28B7F3987E0C (void);
// 0x000005C9 System.Boolean Valve.VR.IVROverlay/_IsActiveDashboardOverlay::EndInvoke(System.IAsyncResult)
extern void _IsActiveDashboardOverlay_EndInvoke_m28150CD1FDBA00EF6C3AA83F683FD18FD4B52C32 (void);
// 0x000005CA System.Void Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess::.ctor(System.Object,System.IntPtr)
extern void _SetDashboardOverlaySceneProcess__ctor_m5213293D09F49B984D4361F96EAE504D36183C84 (void);
// 0x000005CB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess::Invoke(System.UInt64,System.UInt32)
extern void _SetDashboardOverlaySceneProcess_Invoke_m5C52DDFFF56FDA54090EAC1ECDC4C2B275FAF3D3 (void);
// 0x000005CC System.IAsyncResult Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess::BeginInvoke(System.UInt64,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetDashboardOverlaySceneProcess_BeginInvoke_m5E50BBDDA88C76797CBA8D4565B2862A88DC34A5 (void);
// 0x000005CD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess::EndInvoke(System.IAsyncResult)
extern void _SetDashboardOverlaySceneProcess_EndInvoke_mB2BB2E0758743B4FB90E0DEE682F8DCFB720C8D6 (void);
// 0x000005CE System.Void Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess::.ctor(System.Object,System.IntPtr)
extern void _GetDashboardOverlaySceneProcess__ctor_mE17075FD4FD34BCA48B8D137C663C66DBC2A1F70 (void);
// 0x000005CF Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess::Invoke(System.UInt64,System.UInt32&)
extern void _GetDashboardOverlaySceneProcess_Invoke_mCC0B418A305609F937243F87572D4CAA14453B52 (void);
// 0x000005D0 System.IAsyncResult Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess::BeginInvoke(System.UInt64,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetDashboardOverlaySceneProcess_BeginInvoke_m0EC46F71E97F93EDAC6101ECFAE69C774389FA6E (void);
// 0x000005D1 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetDashboardOverlaySceneProcess_EndInvoke_m2101D140F164F50AC59E79EE18102F74BF70F8C5 (void);
// 0x000005D2 System.Void Valve.VR.IVROverlay/_ShowDashboard::.ctor(System.Object,System.IntPtr)
extern void _ShowDashboard__ctor_m6A5428E3D7AAA9B98C87B669D1ED0976BC365329 (void);
// 0x000005D3 System.Void Valve.VR.IVROverlay/_ShowDashboard::Invoke(System.IntPtr)
extern void _ShowDashboard_Invoke_m00CCFFAE121A689D65DC8945669686B072326C59 (void);
// 0x000005D4 System.IAsyncResult Valve.VR.IVROverlay/_ShowDashboard::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _ShowDashboard_BeginInvoke_m5FBB295199B8E9C72391F61D43271E8A0E0846F6 (void);
// 0x000005D5 System.Void Valve.VR.IVROverlay/_ShowDashboard::EndInvoke(System.IAsyncResult)
extern void _ShowDashboard_EndInvoke_m9A66E1B685F1C06F0A0E71C8476283C31D5AE239 (void);
// 0x000005D6 System.Void Valve.VR.IVROverlay/_GetPrimaryDashboardDevice::.ctor(System.Object,System.IntPtr)
extern void _GetPrimaryDashboardDevice__ctor_m1A71524FB2F909391492531D8AFC9D24E49D46B3 (void);
// 0x000005D7 System.UInt32 Valve.VR.IVROverlay/_GetPrimaryDashboardDevice::Invoke()
extern void _GetPrimaryDashboardDevice_Invoke_mB8E768D50C0E9262A507A7498DE3D35643B0AAB2 (void);
// 0x000005D8 System.IAsyncResult Valve.VR.IVROverlay/_GetPrimaryDashboardDevice::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetPrimaryDashboardDevice_BeginInvoke_mF07A6DA83C3DE155E5A04AD9E6ADAB88DA4892DE (void);
// 0x000005D9 System.UInt32 Valve.VR.IVROverlay/_GetPrimaryDashboardDevice::EndInvoke(System.IAsyncResult)
extern void _GetPrimaryDashboardDevice_EndInvoke_m124450F9495D775C5AA20C1DDE36CDD60EE3A35B (void);
// 0x000005DA System.Void Valve.VR.IVROverlay/_ShowKeyboard::.ctor(System.Object,System.IntPtr)
extern void _ShowKeyboard__ctor_m59129F1335C2A88F10873D5A357BA5BC69E19C24 (void);
// 0x000005DB Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ShowKeyboard::Invoke(System.Int32,System.Int32,System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt64)
extern void _ShowKeyboard_Invoke_m27668A45152F6154576B736E0E6E86F0CE754647 (void);
// 0x000005DC System.IAsyncResult Valve.VR.IVROverlay/_ShowKeyboard::BeginInvoke(System.Int32,System.Int32,System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt64,System.AsyncCallback,System.Object)
extern void _ShowKeyboard_BeginInvoke_m6A768566D3ECA11B3727BC0027D95DAE44E0F08D (void);
// 0x000005DD Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ShowKeyboard::EndInvoke(System.IAsyncResult)
extern void _ShowKeyboard_EndInvoke_mC9E4B0E1713F806E5EE2EA32141534376A7BC64F (void);
// 0x000005DE System.Void Valve.VR.IVROverlay/_ShowKeyboardForOverlay::.ctor(System.Object,System.IntPtr)
extern void _ShowKeyboardForOverlay__ctor_mB4270A1D210E7A2E21B9D15EE1D0B96C30F21B36 (void);
// 0x000005DF Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ShowKeyboardForOverlay::Invoke(System.UInt64,System.Int32,System.Int32,System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt64)
extern void _ShowKeyboardForOverlay_Invoke_mC1C66E56757CAA313B21C485464E6221A11C6D1B (void);
// 0x000005E0 System.IAsyncResult Valve.VR.IVROverlay/_ShowKeyboardForOverlay::BeginInvoke(System.UInt64,System.Int32,System.Int32,System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt64,System.AsyncCallback,System.Object)
extern void _ShowKeyboardForOverlay_BeginInvoke_mC7FBFBCDC69F9F0277928BC542EE8A15D0B3155E (void);
// 0x000005E1 Valve.VR.EVROverlayError Valve.VR.IVROverlay/_ShowKeyboardForOverlay::EndInvoke(System.IAsyncResult)
extern void _ShowKeyboardForOverlay_EndInvoke_mC14645C092CEE66C32D6D9FD6889861D567B4E5A (void);
// 0x000005E2 System.Void Valve.VR.IVROverlay/_GetKeyboardText::.ctor(System.Object,System.IntPtr)
extern void _GetKeyboardText__ctor_mF12002B343CF7D28FC2F07B99C37A6186D59DDA4 (void);
// 0x000005E3 System.UInt32 Valve.VR.IVROverlay/_GetKeyboardText::Invoke(System.Text.StringBuilder,System.UInt32)
extern void _GetKeyboardText_Invoke_mC761F8D868709A539264BBA4AE2F31899C10558E (void);
// 0x000005E4 System.IAsyncResult Valve.VR.IVROverlay/_GetKeyboardText::BeginInvoke(System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetKeyboardText_BeginInvoke_mE607F6BCD40ADA76BC8DDDC2B85D90D7DC19E42B (void);
// 0x000005E5 System.UInt32 Valve.VR.IVROverlay/_GetKeyboardText::EndInvoke(System.IAsyncResult)
extern void _GetKeyboardText_EndInvoke_mB9199C71F7E5E008C421770A05A1D018AF34CC78 (void);
// 0x000005E6 System.Void Valve.VR.IVROverlay/_HideKeyboard::.ctor(System.Object,System.IntPtr)
extern void _HideKeyboard__ctor_m263FDE276D1AE98B7898F0FBB398367628693E3A (void);
// 0x000005E7 System.Void Valve.VR.IVROverlay/_HideKeyboard::Invoke()
extern void _HideKeyboard_Invoke_mEBD5F7EC51EE6C25081D60A5D9E4DA45DED36C6B (void);
// 0x000005E8 System.IAsyncResult Valve.VR.IVROverlay/_HideKeyboard::BeginInvoke(System.AsyncCallback,System.Object)
extern void _HideKeyboard_BeginInvoke_mCC3FC1E3ED9A8EE1B90C9FF3652B127FC21FE077 (void);
// 0x000005E9 System.Void Valve.VR.IVROverlay/_HideKeyboard::EndInvoke(System.IAsyncResult)
extern void _HideKeyboard_EndInvoke_mB9BF6816F43ECC3145515C727B7EC654D2C2841F (void);
// 0x000005EA System.Void Valve.VR.IVROverlay/_SetKeyboardTransformAbsolute::.ctor(System.Object,System.IntPtr)
extern void _SetKeyboardTransformAbsolute__ctor_mAC440F3B6D4D8273ACC3EF5528DCC76D3536E48E (void);
// 0x000005EB System.Void Valve.VR.IVROverlay/_SetKeyboardTransformAbsolute::Invoke(Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdMatrix34_t&)
extern void _SetKeyboardTransformAbsolute_Invoke_m8BC682103DEAE22724FF3999CEE5070AF013AD53 (void);
// 0x000005EC System.IAsyncResult Valve.VR.IVROverlay/_SetKeyboardTransformAbsolute::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,Valve.VR.HmdMatrix34_t&,System.AsyncCallback,System.Object)
extern void _SetKeyboardTransformAbsolute_BeginInvoke_m67513E844B5C7D4F785F04C2BA0A6AC74784B8DC (void);
// 0x000005ED System.Void Valve.VR.IVROverlay/_SetKeyboardTransformAbsolute::EndInvoke(Valve.VR.HmdMatrix34_t&,System.IAsyncResult)
extern void _SetKeyboardTransformAbsolute_EndInvoke_m5A1B819D368DF22D0750D4AE731D39BD0325F7B8 (void);
// 0x000005EE System.Void Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay::.ctor(System.Object,System.IntPtr)
extern void _SetKeyboardPositionForOverlay__ctor_mDDF970144B76AB1AE700442060A8C7FE524B566C (void);
// 0x000005EF System.Void Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay::Invoke(System.UInt64,Valve.VR.HmdRect2_t)
extern void _SetKeyboardPositionForOverlay_Invoke_m7F8CA209767ECD2385729267CFC94CBE32BCAA9C (void);
// 0x000005F0 System.IAsyncResult Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay::BeginInvoke(System.UInt64,Valve.VR.HmdRect2_t,System.AsyncCallback,System.Object)
extern void _SetKeyboardPositionForOverlay_BeginInvoke_m5793D662FA02F868B90A9FFE72E8807D2B0A15D4 (void);
// 0x000005F1 System.Void Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay::EndInvoke(System.IAsyncResult)
extern void _SetKeyboardPositionForOverlay_EndInvoke_m4A672819C1017830DF815BBBD92CF17B2912F5AB (void);
// 0x000005F2 System.Void Valve.VR.IVROverlay/_ShowMessageOverlay::.ctor(System.Object,System.IntPtr)
extern void _ShowMessageOverlay__ctor_m1A8DDDEB3C55103ACE81EAC32A517FF6BF3C7D6A (void);
// 0x000005F3 Valve.VR.VRMessageOverlayResponse Valve.VR.IVROverlay/_ShowMessageOverlay::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void _ShowMessageOverlay_Invoke_m488C8BEA95A3399DBE565BE5B92CFDFB5783DFAF (void);
// 0x000005F4 System.IAsyncResult Valve.VR.IVROverlay/_ShowMessageOverlay::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _ShowMessageOverlay_BeginInvoke_m811691F6F45ADE7517F46AC7A519DB7C9535B3D7 (void);
// 0x000005F5 Valve.VR.VRMessageOverlayResponse Valve.VR.IVROverlay/_ShowMessageOverlay::EndInvoke(System.IAsyncResult)
extern void _ShowMessageOverlay_EndInvoke_m372B0E873ADCCC7B1D8EF70889E11355DBC88EB4 (void);
// 0x000005F6 System.Void Valve.VR.IVROverlay/_CloseMessageOverlay::.ctor(System.Object,System.IntPtr)
extern void _CloseMessageOverlay__ctor_m9EB65D00F0EBEDE11A97C2023003C2CE4E927A5A (void);
// 0x000005F7 System.Void Valve.VR.IVROverlay/_CloseMessageOverlay::Invoke()
extern void _CloseMessageOverlay_Invoke_m607E3C021A6B7085A316A0A337BFA9927A898132 (void);
// 0x000005F8 System.IAsyncResult Valve.VR.IVROverlay/_CloseMessageOverlay::BeginInvoke(System.AsyncCallback,System.Object)
extern void _CloseMessageOverlay_BeginInvoke_mC065A5F308BB4B460BD83F34475010A43F5DBF24 (void);
// 0x000005F9 System.Void Valve.VR.IVROverlay/_CloseMessageOverlay::EndInvoke(System.IAsyncResult)
extern void _CloseMessageOverlay_EndInvoke_m9E9A14C9E790E6C12F69E3BA16F71DB668CCD603 (void);
// 0x000005FA System.Void Valve.VR.IVROverlayView/_AcquireOverlayView::.ctor(System.Object,System.IntPtr)
extern void _AcquireOverlayView__ctor_m4BED43468D8A664C50E587490691F6F86D50F108 (void);
// 0x000005FB Valve.VR.EVROverlayError Valve.VR.IVROverlayView/_AcquireOverlayView::Invoke(System.UInt64,Valve.VR.VRNativeDevice_t&,Valve.VR.VROverlayView_t&,System.UInt32)
extern void _AcquireOverlayView_Invoke_m9AC87B184A2A762BB2EFFEC72F0726E1B602A6DC (void);
// 0x000005FC System.IAsyncResult Valve.VR.IVROverlayView/_AcquireOverlayView::BeginInvoke(System.UInt64,Valve.VR.VRNativeDevice_t&,Valve.VR.VROverlayView_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _AcquireOverlayView_BeginInvoke_mD9CBA0DE667B1CFC76917E9641FF252DF57C0972 (void);
// 0x000005FD Valve.VR.EVROverlayError Valve.VR.IVROverlayView/_AcquireOverlayView::EndInvoke(Valve.VR.VRNativeDevice_t&,Valve.VR.VROverlayView_t&,System.IAsyncResult)
extern void _AcquireOverlayView_EndInvoke_mAD6DCC820618403DB566C4F3D73BB15FF749E890 (void);
// 0x000005FE System.Void Valve.VR.IVROverlayView/_ReleaseOverlayView::.ctor(System.Object,System.IntPtr)
extern void _ReleaseOverlayView__ctor_m9C11714B283491B0F5C2AD36622393D8D7A73957 (void);
// 0x000005FF Valve.VR.EVROverlayError Valve.VR.IVROverlayView/_ReleaseOverlayView::Invoke(Valve.VR.VROverlayView_t&)
extern void _ReleaseOverlayView_Invoke_m254AC33805919FC2128F552552B0C53CF8F80F8F (void);
// 0x00000600 System.IAsyncResult Valve.VR.IVROverlayView/_ReleaseOverlayView::BeginInvoke(Valve.VR.VROverlayView_t&,System.AsyncCallback,System.Object)
extern void _ReleaseOverlayView_BeginInvoke_mE2DC7DC01D3FD9B3D4E8E3169A26D004D4A728BE (void);
// 0x00000601 Valve.VR.EVROverlayError Valve.VR.IVROverlayView/_ReleaseOverlayView::EndInvoke(Valve.VR.VROverlayView_t&,System.IAsyncResult)
extern void _ReleaseOverlayView_EndInvoke_m2681DFBE00130D6EBFC36D02D92140F2DEA5077C (void);
// 0x00000602 System.Void Valve.VR.IVROverlayView/_PostOverlayEvent::.ctor(System.Object,System.IntPtr)
extern void _PostOverlayEvent__ctor_mAC88FF8C815EEB6C4BE89EDE478F86C54DFE4EE2 (void);
// 0x00000603 System.Void Valve.VR.IVROverlayView/_PostOverlayEvent::Invoke(System.UInt64,Valve.VR.VREvent_t&)
extern void _PostOverlayEvent_Invoke_m9005535BDDAEF0692347A97CA0BD3FD94F17AAE2 (void);
// 0x00000604 System.IAsyncResult Valve.VR.IVROverlayView/_PostOverlayEvent::BeginInvoke(System.UInt64,Valve.VR.VREvent_t&,System.AsyncCallback,System.Object)
extern void _PostOverlayEvent_BeginInvoke_mC96774100353A22CA2C2117CC4D4BB5107E746B6 (void);
// 0x00000605 System.Void Valve.VR.IVROverlayView/_PostOverlayEvent::EndInvoke(Valve.VR.VREvent_t&,System.IAsyncResult)
extern void _PostOverlayEvent_EndInvoke_mF52151F3CE5377BFCBF4E17A1C92183E7BACDDA2 (void);
// 0x00000606 System.Void Valve.VR.IVROverlayView/_IsViewingPermitted::.ctor(System.Object,System.IntPtr)
extern void _IsViewingPermitted__ctor_m0A08201F2FEA0F53BF2C14F4AC6CDA625C94FD79 (void);
// 0x00000607 System.Boolean Valve.VR.IVROverlayView/_IsViewingPermitted::Invoke(System.UInt64)
extern void _IsViewingPermitted_Invoke_m4ABED1B1CB33B001B78A5FCB31999AA38A690F21 (void);
// 0x00000608 System.IAsyncResult Valve.VR.IVROverlayView/_IsViewingPermitted::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _IsViewingPermitted_BeginInvoke_m6B92347984EC37B99EE51BACFBAA4E93BBA4EE16 (void);
// 0x00000609 System.Boolean Valve.VR.IVROverlayView/_IsViewingPermitted::EndInvoke(System.IAsyncResult)
extern void _IsViewingPermitted_EndInvoke_m35E7A499A1E0C62A2F851934DA1EF7D28316907B (void);
// 0x0000060A System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewSize::.ctor(System.Object,System.IntPtr)
extern void _SetHeadsetViewSize__ctor_m8AA0BCB0FEE1D510366A9FC7BD96CBDC9CE6BA57 (void);
// 0x0000060B System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewSize::Invoke(System.UInt32,System.UInt32)
extern void _SetHeadsetViewSize_Invoke_m770BA13B7624B753507667DC70A69D2D05EAB589 (void);
// 0x0000060C System.IAsyncResult Valve.VR.IVRHeadsetView/_SetHeadsetViewSize::BeginInvoke(System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern void _SetHeadsetViewSize_BeginInvoke_mCF99CB41FB5645FA5B562FBE06108BD20DB9F0DE (void);
// 0x0000060D System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewSize::EndInvoke(System.IAsyncResult)
extern void _SetHeadsetViewSize_EndInvoke_m4C3AEDCDEED41E5926732234FECA1721CFF5C4E1 (void);
// 0x0000060E System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewSize::.ctor(System.Object,System.IntPtr)
extern void _GetHeadsetViewSize__ctor_m24016BED4D93C2B663BC509787421845DA404788 (void);
// 0x0000060F System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewSize::Invoke(System.UInt32&,System.UInt32&)
extern void _GetHeadsetViewSize_Invoke_mC9368F5A9AB30581A5D48E7C5BD864F31A98AA70 (void);
// 0x00000610 System.IAsyncResult Valve.VR.IVRHeadsetView/_GetHeadsetViewSize::BeginInvoke(System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetHeadsetViewSize_BeginInvoke_m7D10EF32CC4FBF6C87969B34E50D1A66077D09F7 (void);
// 0x00000611 System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewSize::EndInvoke(System.UInt32&,System.UInt32&,System.IAsyncResult)
extern void _GetHeadsetViewSize_EndInvoke_mC6C6761F27DA9FF11070CA2F2D5AD52D797B57A5 (void);
// 0x00000612 System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewMode::.ctor(System.Object,System.IntPtr)
extern void _SetHeadsetViewMode__ctor_mB0CB1C0A55E5088D3532B1E8F4A264CFAC11F63D (void);
// 0x00000613 System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewMode::Invoke(System.UInt32)
extern void _SetHeadsetViewMode_Invoke_mDB6A16EA43DE21879EB0B5C562337149E605648B (void);
// 0x00000614 System.IAsyncResult Valve.VR.IVRHeadsetView/_SetHeadsetViewMode::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _SetHeadsetViewMode_BeginInvoke_mE49EA73D27505A6ABF7303B9B68A8C1D44A6039E (void);
// 0x00000615 System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewMode::EndInvoke(System.IAsyncResult)
extern void _SetHeadsetViewMode_EndInvoke_mD938D39D86D2E9F7A665F7EBB0CE79EEE5B0DA82 (void);
// 0x00000616 System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewMode::.ctor(System.Object,System.IntPtr)
extern void _GetHeadsetViewMode__ctor_mF1743EFA9D9AB0BEF4DDF5AD895E09A75447C7D5 (void);
// 0x00000617 System.UInt32 Valve.VR.IVRHeadsetView/_GetHeadsetViewMode::Invoke()
extern void _GetHeadsetViewMode_Invoke_m09EFADA01868113FD600E25EE35DA10674B2FB60 (void);
// 0x00000618 System.IAsyncResult Valve.VR.IVRHeadsetView/_GetHeadsetViewMode::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetHeadsetViewMode_BeginInvoke_mA4300BD6151FB086353C423C677BA44926E2D048 (void);
// 0x00000619 System.UInt32 Valve.VR.IVRHeadsetView/_GetHeadsetViewMode::EndInvoke(System.IAsyncResult)
extern void _GetHeadsetViewMode_EndInvoke_mE39B9231D295AF74FEA2266F2AEBAFB90240B49B (void);
// 0x0000061A System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewCropped::.ctor(System.Object,System.IntPtr)
extern void _SetHeadsetViewCropped__ctor_mBDC6BDB9316222AF589EB91499E7EC117C9DF5AA (void);
// 0x0000061B System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewCropped::Invoke(System.Boolean)
extern void _SetHeadsetViewCropped_Invoke_m0B9CEB6F794C7420E63380C19648C0C1018C2389 (void);
// 0x0000061C System.IAsyncResult Valve.VR.IVRHeadsetView/_SetHeadsetViewCropped::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void _SetHeadsetViewCropped_BeginInvoke_mA0D9B2681B58191CA6026955407516AD93047955 (void);
// 0x0000061D System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewCropped::EndInvoke(System.IAsyncResult)
extern void _SetHeadsetViewCropped_EndInvoke_mD2B9B0B9E57A7926FBEB2576130BC231541CEBAF (void);
// 0x0000061E System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewCropped::.ctor(System.Object,System.IntPtr)
extern void _GetHeadsetViewCropped__ctor_mE9FF1D1D0655B0512443ED6D630CE3C11C4D8B1B (void);
// 0x0000061F System.Boolean Valve.VR.IVRHeadsetView/_GetHeadsetViewCropped::Invoke()
extern void _GetHeadsetViewCropped_Invoke_mE1F4CF171713397D63390E1AFC32F32D47B52023 (void);
// 0x00000620 System.IAsyncResult Valve.VR.IVRHeadsetView/_GetHeadsetViewCropped::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetHeadsetViewCropped_BeginInvoke_m799FFD5379E1006AA632E312D1E5353BA978F838 (void);
// 0x00000621 System.Boolean Valve.VR.IVRHeadsetView/_GetHeadsetViewCropped::EndInvoke(System.IAsyncResult)
extern void _GetHeadsetViewCropped_EndInvoke_m3007422A9D74BA5A63AFFE7A8F865C650D418A48 (void);
// 0x00000622 System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewAspectRatio::.ctor(System.Object,System.IntPtr)
extern void _GetHeadsetViewAspectRatio__ctor_mA329AFDFBD98ADEF1E29745727B9BCAEDF7DA3EF (void);
// 0x00000623 System.Single Valve.VR.IVRHeadsetView/_GetHeadsetViewAspectRatio::Invoke()
extern void _GetHeadsetViewAspectRatio_Invoke_mAF3886D5599FB9E3B2F353B97288E4C3F1AFBFE5 (void);
// 0x00000624 System.IAsyncResult Valve.VR.IVRHeadsetView/_GetHeadsetViewAspectRatio::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetHeadsetViewAspectRatio_BeginInvoke_m0C02626372397413CAA9476E69743B8D4ED61A30 (void);
// 0x00000625 System.Single Valve.VR.IVRHeadsetView/_GetHeadsetViewAspectRatio::EndInvoke(System.IAsyncResult)
extern void _GetHeadsetViewAspectRatio_EndInvoke_mF26C6E1E59BC003E69FAF14699FB25E254C7E5E0 (void);
// 0x00000626 System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewBlendRange::.ctor(System.Object,System.IntPtr)
extern void _SetHeadsetViewBlendRange__ctor_m4D416ECE0CFEA85750537E611960938530C32C1A (void);
// 0x00000627 System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewBlendRange::Invoke(System.Single,System.Single)
extern void _SetHeadsetViewBlendRange_Invoke_mDC62D96CF4AFBFDDEF369F4EDB2EB85F1527E827 (void);
// 0x00000628 System.IAsyncResult Valve.VR.IVRHeadsetView/_SetHeadsetViewBlendRange::BeginInvoke(System.Single,System.Single,System.AsyncCallback,System.Object)
extern void _SetHeadsetViewBlendRange_BeginInvoke_mC288416CF968D5CE91BB4DB24306A3D794E0504F (void);
// 0x00000629 System.Void Valve.VR.IVRHeadsetView/_SetHeadsetViewBlendRange::EndInvoke(System.IAsyncResult)
extern void _SetHeadsetViewBlendRange_EndInvoke_m261D026D16D403742BFD1F6DE8F1C85A5878D487 (void);
// 0x0000062A System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewBlendRange::.ctor(System.Object,System.IntPtr)
extern void _GetHeadsetViewBlendRange__ctor_m73F53004889DC3814382BAF091ADC71F57660457 (void);
// 0x0000062B System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewBlendRange::Invoke(System.Single&,System.Single&)
extern void _GetHeadsetViewBlendRange_Invoke_m2C854C4214B52312C1A85C07BF5BE429F83BD3BC (void);
// 0x0000062C System.IAsyncResult Valve.VR.IVRHeadsetView/_GetHeadsetViewBlendRange::BeginInvoke(System.Single&,System.Single&,System.AsyncCallback,System.Object)
extern void _GetHeadsetViewBlendRange_BeginInvoke_mD1E96057E58802034CDBD39E08CB62F0F606488B (void);
// 0x0000062D System.Void Valve.VR.IVRHeadsetView/_GetHeadsetViewBlendRange::EndInvoke(System.Single&,System.Single&,System.IAsyncResult)
extern void _GetHeadsetViewBlendRange_EndInvoke_mB510DC3DDEDE346CBFD5AA367E3281BB7483C67F (void);
// 0x0000062E System.Void Valve.VR.IVRRenderModels/_LoadRenderModel_Async::.ctor(System.Object,System.IntPtr)
extern void _LoadRenderModel_Async__ctor_m9EA75500144338EE48B74FA47038C136FAAC1860 (void);
// 0x0000062F Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadRenderModel_Async::Invoke(System.IntPtr,System.IntPtr&)
extern void _LoadRenderModel_Async_Invoke_mFEE7C5EF97C282AC731B50035DCDF5759DEE8737 (void);
// 0x00000630 System.IAsyncResult Valve.VR.IVRRenderModels/_LoadRenderModel_Async::BeginInvoke(System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
extern void _LoadRenderModel_Async_BeginInvoke_m941B184724539D7FB111326812FCFB7012E81EBF (void);
// 0x00000631 Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadRenderModel_Async::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern void _LoadRenderModel_Async_EndInvoke_m4B46FD76A949193A6DD045620F87F6B9B6DBD7A2 (void);
// 0x00000632 System.Void Valve.VR.IVRRenderModels/_FreeRenderModel::.ctor(System.Object,System.IntPtr)
extern void _FreeRenderModel__ctor_m5B4DA286C5F60A55F187C24B6E9F76ADAD715554 (void);
// 0x00000633 System.Void Valve.VR.IVRRenderModels/_FreeRenderModel::Invoke(System.IntPtr)
extern void _FreeRenderModel_Invoke_m29D89F511F5435D90887AB904409CF70F41DF98B (void);
// 0x00000634 System.IAsyncResult Valve.VR.IVRRenderModels/_FreeRenderModel::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _FreeRenderModel_BeginInvoke_m5001005A6BDAE3D273DDFCEF22CAF007137F86CF (void);
// 0x00000635 System.Void Valve.VR.IVRRenderModels/_FreeRenderModel::EndInvoke(System.IAsyncResult)
extern void _FreeRenderModel_EndInvoke_mBBB36EEA3F2B411662762D5F77B0CEB5916D069F (void);
// 0x00000636 System.Void Valve.VR.IVRRenderModels/_LoadTexture_Async::.ctor(System.Object,System.IntPtr)
extern void _LoadTexture_Async__ctor_mF0BE48DF775883A293DECFF6AEFA56FA6CC5E496 (void);
// 0x00000637 Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadTexture_Async::Invoke(System.Int32,System.IntPtr&)
extern void _LoadTexture_Async_Invoke_m9F256F73347775431DFA1B17B20EC0F0CCF7E9E2 (void);
// 0x00000638 System.IAsyncResult Valve.VR.IVRRenderModels/_LoadTexture_Async::BeginInvoke(System.Int32,System.IntPtr&,System.AsyncCallback,System.Object)
extern void _LoadTexture_Async_BeginInvoke_m618FEA7CA767A41F559C1B3C91F612D0469456C8 (void);
// 0x00000639 Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadTexture_Async::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern void _LoadTexture_Async_EndInvoke_mA26101B310AB7CBA8228481F87E18C02F359206A (void);
// 0x0000063A System.Void Valve.VR.IVRRenderModels/_FreeTexture::.ctor(System.Object,System.IntPtr)
extern void _FreeTexture__ctor_m350618779DC5E1E30EFB8B3B4319C98ADB054C00 (void);
// 0x0000063B System.Void Valve.VR.IVRRenderModels/_FreeTexture::Invoke(System.IntPtr)
extern void _FreeTexture_Invoke_mB99F04CB36ACEAF27A2C1AABB6A1E1A3B0A57F35 (void);
// 0x0000063C System.IAsyncResult Valve.VR.IVRRenderModels/_FreeTexture::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _FreeTexture_BeginInvoke_mEACE426A9589140F2DD4EB4CE09FCFD2A46CDFC4 (void);
// 0x0000063D System.Void Valve.VR.IVRRenderModels/_FreeTexture::EndInvoke(System.IAsyncResult)
extern void _FreeTexture_EndInvoke_m76D4F109FBCA6421FC9E0B9915B4EE1466C51830 (void);
// 0x0000063E System.Void Valve.VR.IVRRenderModels/_LoadTextureD3D11_Async::.ctor(System.Object,System.IntPtr)
extern void _LoadTextureD3D11_Async__ctor_m3F5183475A30FDE377A6CA088FABA595AF93C420 (void);
// 0x0000063F Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadTextureD3D11_Async::Invoke(System.Int32,System.IntPtr,System.IntPtr&)
extern void _LoadTextureD3D11_Async_Invoke_m76D74F9705980C9EC95BB813CE98DD75588C6195 (void);
// 0x00000640 System.IAsyncResult Valve.VR.IVRRenderModels/_LoadTextureD3D11_Async::BeginInvoke(System.Int32,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
extern void _LoadTextureD3D11_Async_BeginInvoke_m5DCD35D2894343A5642E5EE6803F23C1652C2FF8 (void);
// 0x00000641 Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadTextureD3D11_Async::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern void _LoadTextureD3D11_Async_EndInvoke_mADDA29026BBCE19CED0CBFA6F1BFA5FDE91475C7 (void);
// 0x00000642 System.Void Valve.VR.IVRRenderModels/_LoadIntoTextureD3D11_Async::.ctor(System.Object,System.IntPtr)
extern void _LoadIntoTextureD3D11_Async__ctor_m22D911A926E06026AB2A563171CC2F320223E775 (void);
// 0x00000643 Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadIntoTextureD3D11_Async::Invoke(System.Int32,System.IntPtr)
extern void _LoadIntoTextureD3D11_Async_Invoke_m382B168A1A3013A1B74F4FF1CA309E4BCC60BA9D (void);
// 0x00000644 System.IAsyncResult Valve.VR.IVRRenderModels/_LoadIntoTextureD3D11_Async::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern void _LoadIntoTextureD3D11_Async_BeginInvoke_mEA007EDF4E5A2F466EBE5B34C8BFFF9711565ADE (void);
// 0x00000645 Valve.VR.EVRRenderModelError Valve.VR.IVRRenderModels/_LoadIntoTextureD3D11_Async::EndInvoke(System.IAsyncResult)
extern void _LoadIntoTextureD3D11_Async_EndInvoke_m598E307087A336A18FF92D222F4DEA52F5073BFC (void);
// 0x00000646 System.Void Valve.VR.IVRRenderModels/_FreeTextureD3D11::.ctor(System.Object,System.IntPtr)
extern void _FreeTextureD3D11__ctor_mD91F3C75B170CCB2FD1FA6F9C9775441284088ED (void);
// 0x00000647 System.Void Valve.VR.IVRRenderModels/_FreeTextureD3D11::Invoke(System.IntPtr)
extern void _FreeTextureD3D11_Invoke_m9A5AB3EB44129774344AD51560CCB5C6BA81C57A (void);
// 0x00000648 System.IAsyncResult Valve.VR.IVRRenderModels/_FreeTextureD3D11::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _FreeTextureD3D11_BeginInvoke_m9FAF4887B84F92DE2542E9240D264D88D782EB5F (void);
// 0x00000649 System.Void Valve.VR.IVRRenderModels/_FreeTextureD3D11::EndInvoke(System.IAsyncResult)
extern void _FreeTextureD3D11_EndInvoke_mB3E22CABA4A3216D77870F7F0535016CE7045256 (void);
// 0x0000064A System.Void Valve.VR.IVRRenderModels/_GetRenderModelName::.ctor(System.Object,System.IntPtr)
extern void _GetRenderModelName__ctor_m7B892AE17CB1F80381C7CEE007D5CFC48D2504E5 (void);
// 0x0000064B System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelName::Invoke(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void _GetRenderModelName_Invoke_m5AC4B7B238FA0FFC615F9DF890FFB4D1270BFF71 (void);
// 0x0000064C System.IAsyncResult Valve.VR.IVRRenderModels/_GetRenderModelName::BeginInvoke(System.UInt32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetRenderModelName_BeginInvoke_m7EC24C14D9C19C1F2330C4853E37909AD092EED3 (void);
// 0x0000064D System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelName::EndInvoke(System.IAsyncResult)
extern void _GetRenderModelName_EndInvoke_m94F38E1F6C2513A62F5377E71AD89565CF29D526 (void);
// 0x0000064E System.Void Valve.VR.IVRRenderModels/_GetRenderModelCount::.ctor(System.Object,System.IntPtr)
extern void _GetRenderModelCount__ctor_m1A380BEADB43536A8DDF3CB18373CFD66E81A84B (void);
// 0x0000064F System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelCount::Invoke()
extern void _GetRenderModelCount_Invoke_m96A1F24AC8C18257D17AFC6CE5BE4E40AA7AB558 (void);
// 0x00000650 System.IAsyncResult Valve.VR.IVRRenderModels/_GetRenderModelCount::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetRenderModelCount_BeginInvoke_m01B065AE764AE58C69D1D476606C8BB5F9B33BA0 (void);
// 0x00000651 System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelCount::EndInvoke(System.IAsyncResult)
extern void _GetRenderModelCount_EndInvoke_mBF491CE6BCD9256C2844F2EE6DEE74D9F67E66B9 (void);
// 0x00000652 System.Void Valve.VR.IVRRenderModels/_GetComponentCount::.ctor(System.Object,System.IntPtr)
extern void _GetComponentCount__ctor_m29EA0E943D7800535C4D8ED42B01FFD161656641 (void);
// 0x00000653 System.UInt32 Valve.VR.IVRRenderModels/_GetComponentCount::Invoke(System.IntPtr)
extern void _GetComponentCount_Invoke_mBAA30657F5DD96716DAA1C9C8D9A0139BBA3ADBC (void);
// 0x00000654 System.IAsyncResult Valve.VR.IVRRenderModels/_GetComponentCount::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetComponentCount_BeginInvoke_m5F66EC2D9971C4C8C6065B1029E1C55014C24A2B (void);
// 0x00000655 System.UInt32 Valve.VR.IVRRenderModels/_GetComponentCount::EndInvoke(System.IAsyncResult)
extern void _GetComponentCount_EndInvoke_mB6CDF1E6889BD27CC189371A92A3157C28A4CB5C (void);
// 0x00000656 System.Void Valve.VR.IVRRenderModels/_GetComponentName::.ctor(System.Object,System.IntPtr)
extern void _GetComponentName__ctor_mECC3684C9278ABB4EFE5617C3527534FE9DAEF8C (void);
// 0x00000657 System.UInt32 Valve.VR.IVRRenderModels/_GetComponentName::Invoke(System.IntPtr,System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void _GetComponentName_Invoke_m190A8F02215B688CF96F8D660E3987E71967E800 (void);
// 0x00000658 System.IAsyncResult Valve.VR.IVRRenderModels/_GetComponentName::BeginInvoke(System.IntPtr,System.UInt32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetComponentName_BeginInvoke_m7A5C4CA3DF80CBF8D7751ED0DD198D9BECF09A85 (void);
// 0x00000659 System.UInt32 Valve.VR.IVRRenderModels/_GetComponentName::EndInvoke(System.IAsyncResult)
extern void _GetComponentName_EndInvoke_m35819944DF39BFC6EB6AF1F557C471E3563FEA66 (void);
// 0x0000065A System.Void Valve.VR.IVRRenderModels/_GetComponentButtonMask::.ctor(System.Object,System.IntPtr)
extern void _GetComponentButtonMask__ctor_m0EAA121F78F0668A158CCD880B9B0891CCCC462D (void);
// 0x0000065B System.UInt64 Valve.VR.IVRRenderModels/_GetComponentButtonMask::Invoke(System.IntPtr,System.IntPtr)
extern void _GetComponentButtonMask_Invoke_m87D4790D31477ABE5F0780AA71B7BFAEEB64FE2A (void);
// 0x0000065C System.IAsyncResult Valve.VR.IVRRenderModels/_GetComponentButtonMask::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetComponentButtonMask_BeginInvoke_mB00EE5D1A1083DB47BDA5C6D47061660A23591AE (void);
// 0x0000065D System.UInt64 Valve.VR.IVRRenderModels/_GetComponentButtonMask::EndInvoke(System.IAsyncResult)
extern void _GetComponentButtonMask_EndInvoke_mC847E6B1112B2B96A5B9AD1F7C9E8DE858DDD8FE (void);
// 0x0000065E System.Void Valve.VR.IVRRenderModels/_GetComponentRenderModelName::.ctor(System.Object,System.IntPtr)
extern void _GetComponentRenderModelName__ctor_mE69CAB8CC79E3B3547FFB56240A5C580B8759012 (void);
// 0x0000065F System.UInt32 Valve.VR.IVRRenderModels/_GetComponentRenderModelName::Invoke(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _GetComponentRenderModelName_Invoke_mDCEEFE3ECE81E989AB5739A1A4AFDD4CE0FB5440 (void);
// 0x00000660 System.IAsyncResult Valve.VR.IVRRenderModels/_GetComponentRenderModelName::BeginInvoke(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetComponentRenderModelName_BeginInvoke_m32F4AB6469BA2C6EFEA3F99BAEEF5EB08352FA54 (void);
// 0x00000661 System.UInt32 Valve.VR.IVRRenderModels/_GetComponentRenderModelName::EndInvoke(System.IAsyncResult)
extern void _GetComponentRenderModelName_EndInvoke_mD1115B34C97A81A4E009812A8583C781E4B9B70A (void);
// 0x00000662 System.Void Valve.VR.IVRRenderModels/_GetComponentStateForDevicePath::.ctor(System.Object,System.IntPtr)
extern void _GetComponentStateForDevicePath__ctor_m1F5ED2E8E4A394FB9BC27928C5AE5A061F075992 (void);
// 0x00000663 System.Boolean Valve.VR.IVRRenderModels/_GetComponentStateForDevicePath::Invoke(System.IntPtr,System.IntPtr,System.UInt64,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&)
extern void _GetComponentStateForDevicePath_Invoke_mB184D2217D15E4FE24AE9205E2F58A8C3AD92C99 (void);
// 0x00000664 System.IAsyncResult Valve.VR.IVRRenderModels/_GetComponentStateForDevicePath::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt64,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&,System.AsyncCallback,System.Object)
extern void _GetComponentStateForDevicePath_BeginInvoke_mF1D0D4DF99FA0CFD230D1AC0715C2099B97B2D0A (void);
// 0x00000665 System.Boolean Valve.VR.IVRRenderModels/_GetComponentStateForDevicePath::EndInvoke(Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&,System.IAsyncResult)
extern void _GetComponentStateForDevicePath_EndInvoke_m7D6E44EFEF0CBF43B0835C9378201D90DC314743 (void);
// 0x00000666 System.Void Valve.VR.IVRRenderModels/_GetComponentState::.ctor(System.Object,System.IntPtr)
extern void _GetComponentState__ctor_mCC63CA93D89FDEA096C7DC84EACB4E915154548A (void);
// 0x00000667 System.Boolean Valve.VR.IVRRenderModels/_GetComponentState::Invoke(System.IntPtr,System.IntPtr,Valve.VR.VRControllerState_t&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&)
extern void _GetComponentState_Invoke_m8750D276155EEB444BFF6B8FABB56E4A4B7D4000 (void);
// 0x00000668 System.IAsyncResult Valve.VR.IVRRenderModels/_GetComponentState::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.VRControllerState_t&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&,System.AsyncCallback,System.Object)
extern void _GetComponentState_BeginInvoke_m5F41416628933F038DD8E488A3CCEA8BF7ED63C6 (void);
// 0x00000669 System.Boolean Valve.VR.IVRRenderModels/_GetComponentState::EndInvoke(Valve.VR.VRControllerState_t&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&,System.IAsyncResult)
extern void _GetComponentState_EndInvoke_mA93923E8584E60BC36292C0818108CB821A0214C (void);
// 0x0000066A System.Void Valve.VR.IVRRenderModels/_RenderModelHasComponent::.ctor(System.Object,System.IntPtr)
extern void _RenderModelHasComponent__ctor_mC3414A8AC98E451F1D296FD4590D1AE23A05D310 (void);
// 0x0000066B System.Boolean Valve.VR.IVRRenderModels/_RenderModelHasComponent::Invoke(System.IntPtr,System.IntPtr)
extern void _RenderModelHasComponent_Invoke_m1BF04DC50F7BACC116546AF62CD8B253A806A47C (void);
// 0x0000066C System.IAsyncResult Valve.VR.IVRRenderModels/_RenderModelHasComponent::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _RenderModelHasComponent_BeginInvoke_mBB37CC1B6E7BE67E1C9F569A148C8B90DE04720A (void);
// 0x0000066D System.Boolean Valve.VR.IVRRenderModels/_RenderModelHasComponent::EndInvoke(System.IAsyncResult)
extern void _RenderModelHasComponent_EndInvoke_m1195F974EF0A98574E687A66C5E550B93469D9AA (void);
// 0x0000066E System.Void Valve.VR.IVRRenderModels/_GetRenderModelThumbnailURL::.ctor(System.Object,System.IntPtr)
extern void _GetRenderModelThumbnailURL__ctor_mBBF0E2B621FC695914DDB1C2A9F622DC51CE8AB4 (void);
// 0x0000066F System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelThumbnailURL::Invoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRRenderModelError&)
extern void _GetRenderModelThumbnailURL_Invoke_mC3B7041EFD53A2D461460D8DF317EE0837A60722 (void);
// 0x00000670 System.IAsyncResult Valve.VR.IVRRenderModels/_GetRenderModelThumbnailURL::BeginInvoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRRenderModelError&,System.AsyncCallback,System.Object)
extern void _GetRenderModelThumbnailURL_BeginInvoke_m255932F997F702F19EA37BDAD882A3BF62B3A320 (void);
// 0x00000671 System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelThumbnailURL::EndInvoke(Valve.VR.EVRRenderModelError&,System.IAsyncResult)
extern void _GetRenderModelThumbnailURL_EndInvoke_mE1E5A92AEF5AE13DADC6081C3947F58D805A47A9 (void);
// 0x00000672 System.Void Valve.VR.IVRRenderModels/_GetRenderModelOriginalPath::.ctor(System.Object,System.IntPtr)
extern void _GetRenderModelOriginalPath__ctor_m9FD2841CD0F351E0A148590EC660198AD2E22320 (void);
// 0x00000673 System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelOriginalPath::Invoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRRenderModelError&)
extern void _GetRenderModelOriginalPath_Invoke_m55078883A2431057619E4A0D69DC8D0645D116FD (void);
// 0x00000674 System.IAsyncResult Valve.VR.IVRRenderModels/_GetRenderModelOriginalPath::BeginInvoke(System.IntPtr,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRRenderModelError&,System.AsyncCallback,System.Object)
extern void _GetRenderModelOriginalPath_BeginInvoke_m77395CE36EE8D853E44D43B5298D1F3184B2648D (void);
// 0x00000675 System.UInt32 Valve.VR.IVRRenderModels/_GetRenderModelOriginalPath::EndInvoke(Valve.VR.EVRRenderModelError&,System.IAsyncResult)
extern void _GetRenderModelOriginalPath_EndInvoke_m3983AA998B7E60700A9B84C90B7FF2D5FD87BC0A (void);
// 0x00000676 System.Void Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetRenderModelErrorNameFromEnum__ctor_m394CA65BDF4EAB21315967FFE2223D48D9A404BE (void);
// 0x00000677 System.IntPtr Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum::Invoke(Valve.VR.EVRRenderModelError)
extern void _GetRenderModelErrorNameFromEnum_Invoke_mCF8D1C85CB94C13024081410259D503AB6B4F1AD (void);
// 0x00000678 System.IAsyncResult Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum::BeginInvoke(Valve.VR.EVRRenderModelError,System.AsyncCallback,System.Object)
extern void _GetRenderModelErrorNameFromEnum_BeginInvoke_mC3C5B5F66D3DA8B50B812CC8374272D4C49CBA05 (void);
// 0x00000679 System.IntPtr Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetRenderModelErrorNameFromEnum_EndInvoke_mE05519B2F4F86E9868D37297A9644E43C9D2F563 (void);
// 0x0000067A System.Void Valve.VR.IVRNotifications/_CreateNotification::.ctor(System.Object,System.IntPtr)
extern void _CreateNotification__ctor_mCB2B20CC78C92CFF613076FA6E7CF56723FD7587 (void);
// 0x0000067B Valve.VR.EVRNotificationError Valve.VR.IVRNotifications/_CreateNotification::Invoke(System.UInt64,System.UInt64,Valve.VR.EVRNotificationType,System.IntPtr,Valve.VR.EVRNotificationStyle,Valve.VR.NotificationBitmap_t&,System.UInt32&)
extern void _CreateNotification_Invoke_mD9FDFBA3CCCB8ECE71032FA58D174ADD30545193 (void);
// 0x0000067C System.IAsyncResult Valve.VR.IVRNotifications/_CreateNotification::BeginInvoke(System.UInt64,System.UInt64,Valve.VR.EVRNotificationType,System.IntPtr,Valve.VR.EVRNotificationStyle,Valve.VR.NotificationBitmap_t&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _CreateNotification_BeginInvoke_m22F6F5CC16CE13D61438400C24E255B2D23118D2 (void);
// 0x0000067D Valve.VR.EVRNotificationError Valve.VR.IVRNotifications/_CreateNotification::EndInvoke(Valve.VR.NotificationBitmap_t&,System.UInt32&,System.IAsyncResult)
extern void _CreateNotification_EndInvoke_mCDBACBCCA28D336F1511C5C222952886AF7A7E87 (void);
// 0x0000067E System.Void Valve.VR.IVRNotifications/_RemoveNotification::.ctor(System.Object,System.IntPtr)
extern void _RemoveNotification__ctor_m71C897093FB2A1EAA64829CC44313884DF63AA58 (void);
// 0x0000067F Valve.VR.EVRNotificationError Valve.VR.IVRNotifications/_RemoveNotification::Invoke(System.UInt32)
extern void _RemoveNotification_Invoke_m241FE0C743166658D5E350F2826C74EACCF34CEB (void);
// 0x00000680 System.IAsyncResult Valve.VR.IVRNotifications/_RemoveNotification::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _RemoveNotification_BeginInvoke_mF5685E8A4CAA142A6595AAC8CF7E33A11A28C8A7 (void);
// 0x00000681 Valve.VR.EVRNotificationError Valve.VR.IVRNotifications/_RemoveNotification::EndInvoke(System.IAsyncResult)
extern void _RemoveNotification_EndInvoke_m8C75F1DC43C1FEFC7E47D233C2729E35F243E871 (void);
// 0x00000682 System.Void Valve.VR.IVRSettings/_GetSettingsErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetSettingsErrorNameFromEnum__ctor_m26867DE7DA4546432A9E5B8D0F39CDD5C5FD1E08 (void);
// 0x00000683 System.IntPtr Valve.VR.IVRSettings/_GetSettingsErrorNameFromEnum::Invoke(Valve.VR.EVRSettingsError)
extern void _GetSettingsErrorNameFromEnum_Invoke_mCFFEF7057D8724DD7DE35777F49457F2B9F58896 (void);
// 0x00000684 System.IAsyncResult Valve.VR.IVRSettings/_GetSettingsErrorNameFromEnum::BeginInvoke(Valve.VR.EVRSettingsError,System.AsyncCallback,System.Object)
extern void _GetSettingsErrorNameFromEnum_BeginInvoke_m63DB21AC50B14450B6AF1FC18FDA4B6190B63652 (void);
// 0x00000685 System.IntPtr Valve.VR.IVRSettings/_GetSettingsErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetSettingsErrorNameFromEnum_EndInvoke_mAEB222B9DFC27759B4E5A14C37D71DE49A4B53B4 (void);
// 0x00000686 System.Void Valve.VR.IVRSettings/_SetBool::.ctor(System.Object,System.IntPtr)
extern void _SetBool__ctor_m5CDC93DDDB6DD5374180385AFCC5445F7CCC80A3 (void);
// 0x00000687 System.Void Valve.VR.IVRSettings/_SetBool::Invoke(System.IntPtr,System.IntPtr,System.Boolean,Valve.VR.EVRSettingsError&)
extern void _SetBool_Invoke_m02148EBEF98C91D054C930B808A4596AC0A3C42B (void);
// 0x00000688 System.IAsyncResult Valve.VR.IVRSettings/_SetBool::BeginInvoke(System.IntPtr,System.IntPtr,System.Boolean,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _SetBool_BeginInvoke_m9DDA03F789C671B918320D887DF2AFA04800A3F9 (void);
// 0x00000689 System.Void Valve.VR.IVRSettings/_SetBool::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _SetBool_EndInvoke_mE8305C7592692EB71DD5D27199A190ED840830B7 (void);
// 0x0000068A System.Void Valve.VR.IVRSettings/_SetInt32::.ctor(System.Object,System.IntPtr)
extern void _SetInt32__ctor_m6EEB46B2F1127BC9B6F1809B53F27A8B371BCD8D (void);
// 0x0000068B System.Void Valve.VR.IVRSettings/_SetInt32::Invoke(System.IntPtr,System.IntPtr,System.Int32,Valve.VR.EVRSettingsError&)
extern void _SetInt32_Invoke_m4AF83D4E5EEE6B87CDDEFD851181C54E8F9434AC (void);
// 0x0000068C System.IAsyncResult Valve.VR.IVRSettings/_SetInt32::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _SetInt32_BeginInvoke_m73E530325ADB660708E82AF8A408F981069DAAC6 (void);
// 0x0000068D System.Void Valve.VR.IVRSettings/_SetInt32::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _SetInt32_EndInvoke_mB8AE86F8A66E803AEF0BA4F3A95FFC00AE06342A (void);
// 0x0000068E System.Void Valve.VR.IVRSettings/_SetFloat::.ctor(System.Object,System.IntPtr)
extern void _SetFloat__ctor_mFAD5383523122017AFDCC4FAB453878FAE36A8A2 (void);
// 0x0000068F System.Void Valve.VR.IVRSettings/_SetFloat::Invoke(System.IntPtr,System.IntPtr,System.Single,Valve.VR.EVRSettingsError&)
extern void _SetFloat_Invoke_mCCD5A6F6B4CA876A8B238C066A59D1D9DBC44919 (void);
// 0x00000690 System.IAsyncResult Valve.VR.IVRSettings/_SetFloat::BeginInvoke(System.IntPtr,System.IntPtr,System.Single,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _SetFloat_BeginInvoke_mE4B2A8279031A4DD544646D174759AD4C9C3238D (void);
// 0x00000691 System.Void Valve.VR.IVRSettings/_SetFloat::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _SetFloat_EndInvoke_mAD53D69FC2557D534E6AA2B06547FB6F27F9505D (void);
// 0x00000692 System.Void Valve.VR.IVRSettings/_SetString::.ctor(System.Object,System.IntPtr)
extern void _SetString__ctor_m26D0DEBFEB34CCB78F77D6088AD9662F8C9D1A41 (void);
// 0x00000693 System.Void Valve.VR.IVRSettings/_SetString::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&)
extern void _SetString_Invoke_m7A8D236BDBD467C2E90E069BE5BAC97A2F8B2A3C (void);
// 0x00000694 System.IAsyncResult Valve.VR.IVRSettings/_SetString::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _SetString_BeginInvoke_mD70763A31AA66B2AF2B513CD1BA0D8A055DC6FE7 (void);
// 0x00000695 System.Void Valve.VR.IVRSettings/_SetString::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _SetString_EndInvoke_mF37C475DA3AE920585CF54F759186E969D6C2CE6 (void);
// 0x00000696 System.Void Valve.VR.IVRSettings/_GetBool::.ctor(System.Object,System.IntPtr)
extern void _GetBool__ctor_m5D58BD023779F191B707446AC370C7FECC090EAE (void);
// 0x00000697 System.Boolean Valve.VR.IVRSettings/_GetBool::Invoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&)
extern void _GetBool_Invoke_mFCE4BAE5F4C615BE3770A79587D761AC45A7754F (void);
// 0x00000698 System.IAsyncResult Valve.VR.IVRSettings/_GetBool::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _GetBool_BeginInvoke_mC8F598C55753C2D8C552BD0715E8250220BA8960 (void);
// 0x00000699 System.Boolean Valve.VR.IVRSettings/_GetBool::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _GetBool_EndInvoke_mFF5DE2B62DBB44D19971435254F63372E1946BCA (void);
// 0x0000069A System.Void Valve.VR.IVRSettings/_GetInt32::.ctor(System.Object,System.IntPtr)
extern void _GetInt32__ctor_m8C5DFB299DE009EAA6DAD48FE1F4F10865565FC3 (void);
// 0x0000069B System.Int32 Valve.VR.IVRSettings/_GetInt32::Invoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&)
extern void _GetInt32_Invoke_mF563D717F24C660C63FD77BA128994E83054865F (void);
// 0x0000069C System.IAsyncResult Valve.VR.IVRSettings/_GetInt32::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _GetInt32_BeginInvoke_m90D8F5E24D0E690DD3AF3E39A428C7B6AF3C3B04 (void);
// 0x0000069D System.Int32 Valve.VR.IVRSettings/_GetInt32::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _GetInt32_EndInvoke_m4EDC216978844EFCA2C59BD7630550A7D96CCD6D (void);
// 0x0000069E System.Void Valve.VR.IVRSettings/_GetFloat::.ctor(System.Object,System.IntPtr)
extern void _GetFloat__ctor_m7439E016B64F595B6B9A3A5DF3220AD654F5C846 (void);
// 0x0000069F System.Single Valve.VR.IVRSettings/_GetFloat::Invoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&)
extern void _GetFloat_Invoke_mC89CB83FEFBB85445642757AA4DEB90A956271D9 (void);
// 0x000006A0 System.IAsyncResult Valve.VR.IVRSettings/_GetFloat::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _GetFloat_BeginInvoke_mED606CA6A343067F7152A9A92F61D93B7C65F0EB (void);
// 0x000006A1 System.Single Valve.VR.IVRSettings/_GetFloat::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _GetFloat_EndInvoke_m7FE798C9538D573D1639D6F2D1D2CABAF5481131 (void);
// 0x000006A2 System.Void Valve.VR.IVRSettings/_GetString::.ctor(System.Object,System.IntPtr)
extern void _GetString__ctor_m82F6B17F28CDFC894E70E5E0C99BA78F2EF3E85E (void);
// 0x000006A3 System.Void Valve.VR.IVRSettings/_GetString::Invoke(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRSettingsError&)
extern void _GetString_Invoke_m774D501A17159738F8878E69B6A085EE108C9950 (void);
// 0x000006A4 System.IAsyncResult Valve.VR.IVRSettings/_GetString::BeginInvoke(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _GetString_BeginInvoke_m46B43FB75C6B59DEBFA689AB2AC1BE03BBE53E6C (void);
// 0x000006A5 System.Void Valve.VR.IVRSettings/_GetString::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _GetString_EndInvoke_m593CB5262D1000F162BF9FB77219D7DB83AD83FE (void);
// 0x000006A6 System.Void Valve.VR.IVRSettings/_RemoveSection::.ctor(System.Object,System.IntPtr)
extern void _RemoveSection__ctor_mBA71BC35A6ADF42973E598C82D3432305718E9A3 (void);
// 0x000006A7 System.Void Valve.VR.IVRSettings/_RemoveSection::Invoke(System.IntPtr,Valve.VR.EVRSettingsError&)
extern void _RemoveSection_Invoke_m0F4F22F8107C590E986BF1C906AF2706DEB6ACEF (void);
// 0x000006A8 System.IAsyncResult Valve.VR.IVRSettings/_RemoveSection::BeginInvoke(System.IntPtr,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _RemoveSection_BeginInvoke_m2741A058D4EC2FE33761F261921168586C768B5E (void);
// 0x000006A9 System.Void Valve.VR.IVRSettings/_RemoveSection::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _RemoveSection_EndInvoke_m9EABC06AC93B4BD901E7F8B1AE4483D71B9A9190 (void);
// 0x000006AA System.Void Valve.VR.IVRSettings/_RemoveKeyInSection::.ctor(System.Object,System.IntPtr)
extern void _RemoveKeyInSection__ctor_m1B1D3742F88F39EFF7D0DE3B88D17442EE8020B3 (void);
// 0x000006AB System.Void Valve.VR.IVRSettings/_RemoveKeyInSection::Invoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&)
extern void _RemoveKeyInSection_Invoke_m5A941F67C47FDEDD6F1838F5EACC7B9483F5A085 (void);
// 0x000006AC System.IAsyncResult Valve.VR.IVRSettings/_RemoveKeyInSection::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.EVRSettingsError&,System.AsyncCallback,System.Object)
extern void _RemoveKeyInSection_BeginInvoke_m68295A5955372F472AFDD55CDC8CFA2A349AD79E (void);
// 0x000006AD System.Void Valve.VR.IVRSettings/_RemoveKeyInSection::EndInvoke(Valve.VR.EVRSettingsError&,System.IAsyncResult)
extern void _RemoveKeyInSection_EndInvoke_m494FD91AFBA8A4EC35C29AC5D47BCB8D8B2FDD5E (void);
// 0x000006AE System.Void Valve.VR.IVRScreenshots/_RequestScreenshot::.ctor(System.Object,System.IntPtr)
extern void _RequestScreenshot__ctor_mDE88E165DC2765321199D2A4EB173600711144C0 (void);
// 0x000006AF Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_RequestScreenshot::Invoke(System.UInt32&,Valve.VR.EVRScreenshotType,System.IntPtr,System.IntPtr)
extern void _RequestScreenshot_Invoke_m2C690B0D5CC9E0E869027B35982BD4AD0BF3E7C2 (void);
// 0x000006B0 System.IAsyncResult Valve.VR.IVRScreenshots/_RequestScreenshot::BeginInvoke(System.UInt32&,Valve.VR.EVRScreenshotType,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _RequestScreenshot_BeginInvoke_mC21A5E887EF9202145011FDEF911E5E8EBDD6981 (void);
// 0x000006B1 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_RequestScreenshot::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _RequestScreenshot_EndInvoke_m05EE753B8DE1234A60A23B352CAC01D3737F38BC (void);
// 0x000006B2 System.Void Valve.VR.IVRScreenshots/_HookScreenshot::.ctor(System.Object,System.IntPtr)
extern void _HookScreenshot__ctor_m6B06A9B661AEA6B808062CC5EF82CE3E3A7B9989 (void);
// 0x000006B3 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_HookScreenshot::Invoke(Valve.VR.EVRScreenshotType[],System.Int32)
extern void _HookScreenshot_Invoke_m5452E4B67275B915130C9A77FB6C150F601C1E76 (void);
// 0x000006B4 System.IAsyncResult Valve.VR.IVRScreenshots/_HookScreenshot::BeginInvoke(Valve.VR.EVRScreenshotType[],System.Int32,System.AsyncCallback,System.Object)
extern void _HookScreenshot_BeginInvoke_mBDA0D7F630AD1A1B142A3B987BE3628B1DE4DEB9 (void);
// 0x000006B5 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_HookScreenshot::EndInvoke(System.IAsyncResult)
extern void _HookScreenshot_EndInvoke_mDE4CC8A6DCB2EDC7D4D7B283DADE8E5C563D3D9B (void);
// 0x000006B6 System.Void Valve.VR.IVRScreenshots/_GetScreenshotPropertyType::.ctor(System.Object,System.IntPtr)
extern void _GetScreenshotPropertyType__ctor_mBFBCCB6039A8A60B18819E680BB087D45F26C525 (void);
// 0x000006B7 Valve.VR.EVRScreenshotType Valve.VR.IVRScreenshots/_GetScreenshotPropertyType::Invoke(System.UInt32,Valve.VR.EVRScreenshotError&)
extern void _GetScreenshotPropertyType_Invoke_mB571C8A39F0F1C4C160EDEBDA75D491E00699F2B (void);
// 0x000006B8 System.IAsyncResult Valve.VR.IVRScreenshots/_GetScreenshotPropertyType::BeginInvoke(System.UInt32,Valve.VR.EVRScreenshotError&,System.AsyncCallback,System.Object)
extern void _GetScreenshotPropertyType_BeginInvoke_mF3BD7A59012DC605AC13B6EEF9AFA905886737B4 (void);
// 0x000006B9 Valve.VR.EVRScreenshotType Valve.VR.IVRScreenshots/_GetScreenshotPropertyType::EndInvoke(Valve.VR.EVRScreenshotError&,System.IAsyncResult)
extern void _GetScreenshotPropertyType_EndInvoke_mB732657A8F3485323C921429947030B307DDC145 (void);
// 0x000006BA System.Void Valve.VR.IVRScreenshots/_GetScreenshotPropertyFilename::.ctor(System.Object,System.IntPtr)
extern void _GetScreenshotPropertyFilename__ctor_m4958C51AE74374CDEF2C01B3BC5F9DECDF9808D9 (void);
// 0x000006BB System.UInt32 Valve.VR.IVRScreenshots/_GetScreenshotPropertyFilename::Invoke(System.UInt32,Valve.VR.EVRScreenshotPropertyFilenames,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRScreenshotError&)
extern void _GetScreenshotPropertyFilename_Invoke_mF10A3F5B8881692BCEF9538B796576C85BE8F583 (void);
// 0x000006BC System.IAsyncResult Valve.VR.IVRScreenshots/_GetScreenshotPropertyFilename::BeginInvoke(System.UInt32,Valve.VR.EVRScreenshotPropertyFilenames,System.Text.StringBuilder,System.UInt32,Valve.VR.EVRScreenshotError&,System.AsyncCallback,System.Object)
extern void _GetScreenshotPropertyFilename_BeginInvoke_mDCDD69B208A7EF2B32F93E3B335F177D2626495E (void);
// 0x000006BD System.UInt32 Valve.VR.IVRScreenshots/_GetScreenshotPropertyFilename::EndInvoke(Valve.VR.EVRScreenshotError&,System.IAsyncResult)
extern void _GetScreenshotPropertyFilename_EndInvoke_m616345A42DEE5F935CD7EE13AFD1878EBD56C6B7 (void);
// 0x000006BE System.Void Valve.VR.IVRScreenshots/_UpdateScreenshotProgress::.ctor(System.Object,System.IntPtr)
extern void _UpdateScreenshotProgress__ctor_m35CCF0C70F55F61DA7FA92E5F6FAE3FD8A3B1AA9 (void);
// 0x000006BF Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_UpdateScreenshotProgress::Invoke(System.UInt32,System.Single)
extern void _UpdateScreenshotProgress_Invoke_m6C64AE079B37F9E8F1DA3E06BF5107776308D719 (void);
// 0x000006C0 System.IAsyncResult Valve.VR.IVRScreenshots/_UpdateScreenshotProgress::BeginInvoke(System.UInt32,System.Single,System.AsyncCallback,System.Object)
extern void _UpdateScreenshotProgress_BeginInvoke_mD6A48DD76851FB698398EA93E20AF35513BF417B (void);
// 0x000006C1 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_UpdateScreenshotProgress::EndInvoke(System.IAsyncResult)
extern void _UpdateScreenshotProgress_EndInvoke_mAE46A7CDA976C3713BA175376E2835A1A52767A3 (void);
// 0x000006C2 System.Void Valve.VR.IVRScreenshots/_TakeStereoScreenshot::.ctor(System.Object,System.IntPtr)
extern void _TakeStereoScreenshot__ctor_mE1CAE76C6757EC6467CBE79985D00F793C10382B (void);
// 0x000006C3 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_TakeStereoScreenshot::Invoke(System.UInt32&,System.IntPtr,System.IntPtr)
extern void _TakeStereoScreenshot_Invoke_mC0D27D2FFEFE70AE86AFD89DE83E5A4C6E8CD06B (void);
// 0x000006C4 System.IAsyncResult Valve.VR.IVRScreenshots/_TakeStereoScreenshot::BeginInvoke(System.UInt32&,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _TakeStereoScreenshot_BeginInvoke_mCBC02686B86D9CA0A39BD6101FA855B47BCE1C59 (void);
// 0x000006C5 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_TakeStereoScreenshot::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _TakeStereoScreenshot_EndInvoke_mB09AC7E041A20E7895380EC7683946C417F97898 (void);
// 0x000006C6 System.Void Valve.VR.IVRScreenshots/_SubmitScreenshot::.ctor(System.Object,System.IntPtr)
extern void _SubmitScreenshot__ctor_mA941ECA90D3407ACA6424235228DBA155BC49DC4 (void);
// 0x000006C7 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_SubmitScreenshot::Invoke(System.UInt32,Valve.VR.EVRScreenshotType,System.IntPtr,System.IntPtr)
extern void _SubmitScreenshot_Invoke_mF4A83870356D66FE7E24F6ABEC40B9C2889C3BAC (void);
// 0x000006C8 System.IAsyncResult Valve.VR.IVRScreenshots/_SubmitScreenshot::BeginInvoke(System.UInt32,Valve.VR.EVRScreenshotType,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _SubmitScreenshot_BeginInvoke_mB73DB91A1F790502B9886FF83D9191FCBF70D2D9 (void);
// 0x000006C9 Valve.VR.EVRScreenshotError Valve.VR.IVRScreenshots/_SubmitScreenshot::EndInvoke(System.IAsyncResult)
extern void _SubmitScreenshot_EndInvoke_mF4B22A4901AF0D6A99326A39E59414EF392AD050 (void);
// 0x000006CA System.Void Valve.VR.IVRResources/_LoadSharedResource::.ctor(System.Object,System.IntPtr)
extern void _LoadSharedResource__ctor_m885D5F9601B6A46CD185D21098B3FF3C4619F3D1 (void);
// 0x000006CB System.UInt32 Valve.VR.IVRResources/_LoadSharedResource::Invoke(System.IntPtr,System.String,System.UInt32)
extern void _LoadSharedResource_Invoke_m32528F7EB1FE319BC1680F28AB8DD9C1CC56D7D7 (void);
// 0x000006CC System.IAsyncResult Valve.VR.IVRResources/_LoadSharedResource::BeginInvoke(System.IntPtr,System.String,System.UInt32,System.AsyncCallback,System.Object)
extern void _LoadSharedResource_BeginInvoke_mA4CEB63B8953616AD932874F683FA0BC31959742 (void);
// 0x000006CD System.UInt32 Valve.VR.IVRResources/_LoadSharedResource::EndInvoke(System.IAsyncResult)
extern void _LoadSharedResource_EndInvoke_m06B03CFB56E9F6BEA11AEA667493E89C3AEF9D74 (void);
// 0x000006CE System.Void Valve.VR.IVRResources/_GetResourceFullPath::.ctor(System.Object,System.IntPtr)
extern void _GetResourceFullPath__ctor_mB5EEB8B8FE40B34A93043864C551BEB7FB0A7366 (void);
// 0x000006CF System.UInt32 Valve.VR.IVRResources/_GetResourceFullPath::Invoke(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _GetResourceFullPath_Invoke_m15AF8B0BF9860A56EF115172DE0DDCD0510D5A2A (void);
// 0x000006D0 System.IAsyncResult Valve.VR.IVRResources/_GetResourceFullPath::BeginInvoke(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetResourceFullPath_BeginInvoke_mA0E941EBA042402142A1819AF42EFB7FA1365928 (void);
// 0x000006D1 System.UInt32 Valve.VR.IVRResources/_GetResourceFullPath::EndInvoke(System.IAsyncResult)
extern void _GetResourceFullPath_EndInvoke_m4DECF79AF93F7F5E3EA80528308EDD2A55164E89 (void);
// 0x000006D2 System.Void Valve.VR.IVRDriverManager/_GetDriverCount::.ctor(System.Object,System.IntPtr)
extern void _GetDriverCount__ctor_m4E732A760324EE23C85ECA2C03250A67421D5747 (void);
// 0x000006D3 System.UInt32 Valve.VR.IVRDriverManager/_GetDriverCount::Invoke()
extern void _GetDriverCount_Invoke_mE0740FB010FB475B86B76D9DE75DB9B17A6265D7 (void);
// 0x000006D4 System.IAsyncResult Valve.VR.IVRDriverManager/_GetDriverCount::BeginInvoke(System.AsyncCallback,System.Object)
extern void _GetDriverCount_BeginInvoke_m30276DFB7AA09FD1417D6F2EBCCC0F075EBD65AF (void);
// 0x000006D5 System.UInt32 Valve.VR.IVRDriverManager/_GetDriverCount::EndInvoke(System.IAsyncResult)
extern void _GetDriverCount_EndInvoke_mE211983F89AE1578E7E67FF42E73C26FA1868B81 (void);
// 0x000006D6 System.Void Valve.VR.IVRDriverManager/_GetDriverName::.ctor(System.Object,System.IntPtr)
extern void _GetDriverName__ctor_m3DF8E616D5109B00F425B6254CB4549B1F9BDD85 (void);
// 0x000006D7 System.UInt32 Valve.VR.IVRDriverManager/_GetDriverName::Invoke(System.UInt32,System.Text.StringBuilder,System.UInt32)
extern void _GetDriverName_Invoke_m13A3A87CD195CD83A9BB88FBB1FFD51DCD0B29AB (void);
// 0x000006D8 System.IAsyncResult Valve.VR.IVRDriverManager/_GetDriverName::BeginInvoke(System.UInt32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetDriverName_BeginInvoke_m4015DBAB691BD6F1D59F5FB572236F14897D169A (void);
// 0x000006D9 System.UInt32 Valve.VR.IVRDriverManager/_GetDriverName::EndInvoke(System.IAsyncResult)
extern void _GetDriverName_EndInvoke_m00497759515A812CF26A5051BB8A7EC4A954CC0A (void);
// 0x000006DA System.Void Valve.VR.IVRDriverManager/_GetDriverHandle::.ctor(System.Object,System.IntPtr)
extern void _GetDriverHandle__ctor_mDAE5939C2B15D82CEB5F4C3D55E12F74734136AC (void);
// 0x000006DB System.UInt64 Valve.VR.IVRDriverManager/_GetDriverHandle::Invoke(System.IntPtr)
extern void _GetDriverHandle_Invoke_mAB4159CE88E9D0337C4C495C15D6518A093308AA (void);
// 0x000006DC System.IAsyncResult Valve.VR.IVRDriverManager/_GetDriverHandle::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _GetDriverHandle_BeginInvoke_mADBCEDA7CCFFFF362B7985C9A0E17A74E4A65F5B (void);
// 0x000006DD System.UInt64 Valve.VR.IVRDriverManager/_GetDriverHandle::EndInvoke(System.IAsyncResult)
extern void _GetDriverHandle_EndInvoke_mD27989AE263EE92769023FF14927CA5F656F080B (void);
// 0x000006DE System.Void Valve.VR.IVRDriverManager/_IsEnabled::.ctor(System.Object,System.IntPtr)
extern void _IsEnabled__ctor_mC4C113770A6B25FF7CBE259ADEA0D0659E71E2AD (void);
// 0x000006DF System.Boolean Valve.VR.IVRDriverManager/_IsEnabled::Invoke(System.UInt32)
extern void _IsEnabled_Invoke_mBE5F3BEDE8CA7F11CF8E908D6BB9176BEF341D41 (void);
// 0x000006E0 System.IAsyncResult Valve.VR.IVRDriverManager/_IsEnabled::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _IsEnabled_BeginInvoke_m93688854281B050947C7023DD8F6C435BE3AA99E (void);
// 0x000006E1 System.Boolean Valve.VR.IVRDriverManager/_IsEnabled::EndInvoke(System.IAsyncResult)
extern void _IsEnabled_EndInvoke_m733BDB7630311CCBF3130A23FACD1B0510CC3C2E (void);
// 0x000006E2 System.Void Valve.VR.IVRInput/_SetActionManifestPath::.ctor(System.Object,System.IntPtr)
extern void _SetActionManifestPath__ctor_m187F1466A1B42C54193539EE8CF232E3B5B618DD (void);
// 0x000006E3 Valve.VR.EVRInputError Valve.VR.IVRInput/_SetActionManifestPath::Invoke(System.IntPtr)
extern void _SetActionManifestPath_Invoke_m9FC4C1E9FAE361DD0E2B6389EF2750BE487F007A (void);
// 0x000006E4 System.IAsyncResult Valve.VR.IVRInput/_SetActionManifestPath::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _SetActionManifestPath_BeginInvoke_mF3CCB54545D9EDA62AC2C81ADB19CFBE3A6F5533 (void);
// 0x000006E5 Valve.VR.EVRInputError Valve.VR.IVRInput/_SetActionManifestPath::EndInvoke(System.IAsyncResult)
extern void _SetActionManifestPath_EndInvoke_m7D246AFB14F55E54A521F78552CEEA4FF487830E (void);
// 0x000006E6 System.Void Valve.VR.IVRInput/_GetActionSetHandle::.ctor(System.Object,System.IntPtr)
extern void _GetActionSetHandle__ctor_m3C435F8878D83529B2E7B4223E2C0F3E79A4F4EC (void);
// 0x000006E7 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionSetHandle::Invoke(System.IntPtr,System.UInt64&)
extern void _GetActionSetHandle_Invoke_m6C9B593EE272A36907D130BE74E3F636E7EA6064 (void);
// 0x000006E8 System.IAsyncResult Valve.VR.IVRInput/_GetActionSetHandle::BeginInvoke(System.IntPtr,System.UInt64&,System.AsyncCallback,System.Object)
extern void _GetActionSetHandle_BeginInvoke_mC49F65565855CCC0BE93FE4ADC509F6D239EF36E (void);
// 0x000006E9 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionSetHandle::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _GetActionSetHandle_EndInvoke_m625F959EB33C6998B361C4E2BDF4B9B945F2410A (void);
// 0x000006EA System.Void Valve.VR.IVRInput/_GetActionHandle::.ctor(System.Object,System.IntPtr)
extern void _GetActionHandle__ctor_mA68AB5B6C1242A091CF2487D0E1F4725621BC845 (void);
// 0x000006EB Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionHandle::Invoke(System.IntPtr,System.UInt64&)
extern void _GetActionHandle_Invoke_mC22460BF86BDF57ACD70B6078A657E6B4DB97144 (void);
// 0x000006EC System.IAsyncResult Valve.VR.IVRInput/_GetActionHandle::BeginInvoke(System.IntPtr,System.UInt64&,System.AsyncCallback,System.Object)
extern void _GetActionHandle_BeginInvoke_m77B155662CA6CFF5D62C5A9DE8DF64F27DF2C5E2 (void);
// 0x000006ED Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionHandle::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _GetActionHandle_EndInvoke_m853DBD7425F47D026ECCFE07B358E9F0674FFE37 (void);
// 0x000006EE System.Void Valve.VR.IVRInput/_GetInputSourceHandle::.ctor(System.Object,System.IntPtr)
extern void _GetInputSourceHandle__ctor_m9555CD3B34DD57D90D9F2D031B9136BDA9404D80 (void);
// 0x000006EF Valve.VR.EVRInputError Valve.VR.IVRInput/_GetInputSourceHandle::Invoke(System.IntPtr,System.UInt64&)
extern void _GetInputSourceHandle_Invoke_mC37D3D16BEC35EE3451F9A3A03744B92454205C2 (void);
// 0x000006F0 System.IAsyncResult Valve.VR.IVRInput/_GetInputSourceHandle::BeginInvoke(System.IntPtr,System.UInt64&,System.AsyncCallback,System.Object)
extern void _GetInputSourceHandle_BeginInvoke_mB653C8E6B7EEBAB4AEE6C97F515E08CB50F619AB (void);
// 0x000006F1 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetInputSourceHandle::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _GetInputSourceHandle_EndInvoke_m0080703591117320E5013AE12A37BAB7FECF37D2 (void);
// 0x000006F2 System.Void Valve.VR.IVRInput/_UpdateActionState::.ctor(System.Object,System.IntPtr)
extern void _UpdateActionState__ctor_m6C8E33A2414F0E19B3EA26525D79185EE6619A9D (void);
// 0x000006F3 Valve.VR.EVRInputError Valve.VR.IVRInput/_UpdateActionState::Invoke(Valve.VR.VRActiveActionSet_t[],System.UInt32,System.UInt32)
extern void _UpdateActionState_Invoke_m8B6F6757339087FD2B5488EE84318993B3DC0BCF (void);
// 0x000006F4 System.IAsyncResult Valve.VR.IVRInput/_UpdateActionState::BeginInvoke(Valve.VR.VRActiveActionSet_t[],System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern void _UpdateActionState_BeginInvoke_mCB9F4917B31558C5B9DDD349E155B04D78DCBC0B (void);
// 0x000006F5 Valve.VR.EVRInputError Valve.VR.IVRInput/_UpdateActionState::EndInvoke(System.IAsyncResult)
extern void _UpdateActionState_EndInvoke_m0B81830C55067D979C83A5E0C4FB4DA389ADDA5C (void);
// 0x000006F6 System.Void Valve.VR.IVRInput/_GetDigitalActionData::.ctor(System.Object,System.IntPtr)
extern void _GetDigitalActionData__ctor_m81FD9C9E683616C84586673009E4035100E33514 (void);
// 0x000006F7 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetDigitalActionData::Invoke(System.UInt64,Valve.VR.InputDigitalActionData_t&,System.UInt32,System.UInt64)
extern void _GetDigitalActionData_Invoke_m2FB902BC3DA9A44FEB738B2011A9D126CBEEE0AE (void);
// 0x000006F8 System.IAsyncResult Valve.VR.IVRInput/_GetDigitalActionData::BeginInvoke(System.UInt64,Valve.VR.InputDigitalActionData_t&,System.UInt32,System.UInt64,System.AsyncCallback,System.Object)
extern void _GetDigitalActionData_BeginInvoke_m37AD056E6850573566E67C85FF44A9E567ABFD5D (void);
// 0x000006F9 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetDigitalActionData::EndInvoke(Valve.VR.InputDigitalActionData_t&,System.IAsyncResult)
extern void _GetDigitalActionData_EndInvoke_mB3019AE7772AE83B0B16FE8EEB4A5183B8F1E6E9 (void);
// 0x000006FA System.Void Valve.VR.IVRInput/_GetAnalogActionData::.ctor(System.Object,System.IntPtr)
extern void _GetAnalogActionData__ctor_mB301A5BC1583A2E991A205C7FF5676AA547FB295 (void);
// 0x000006FB Valve.VR.EVRInputError Valve.VR.IVRInput/_GetAnalogActionData::Invoke(System.UInt64,Valve.VR.InputAnalogActionData_t&,System.UInt32,System.UInt64)
extern void _GetAnalogActionData_Invoke_m266A8FB317333CB9458CACCE71AA4F08E5ACF597 (void);
// 0x000006FC System.IAsyncResult Valve.VR.IVRInput/_GetAnalogActionData::BeginInvoke(System.UInt64,Valve.VR.InputAnalogActionData_t&,System.UInt32,System.UInt64,System.AsyncCallback,System.Object)
extern void _GetAnalogActionData_BeginInvoke_m086D33054FD8BF604BDD7CFD8228E8F2465BF18A (void);
// 0x000006FD Valve.VR.EVRInputError Valve.VR.IVRInput/_GetAnalogActionData::EndInvoke(Valve.VR.InputAnalogActionData_t&,System.IAsyncResult)
extern void _GetAnalogActionData_EndInvoke_m82022E95E554B91551BA3FA4A3FE975D0C313B50 (void);
// 0x000006FE System.Void Valve.VR.IVRInput/_GetPoseActionDataRelativeToNow::.ctor(System.Object,System.IntPtr)
extern void _GetPoseActionDataRelativeToNow__ctor_mE5FCD16C96FAA91EA3836568F615805EE89D15D0 (void);
// 0x000006FF Valve.VR.EVRInputError Valve.VR.IVRInput/_GetPoseActionDataRelativeToNow::Invoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,System.Single,Valve.VR.InputPoseActionData_t&,System.UInt32,System.UInt64)
extern void _GetPoseActionDataRelativeToNow_Invoke_m4C86F99B52EF1E3A3721DC9B1B7D972DD484D825 (void);
// 0x00000700 System.IAsyncResult Valve.VR.IVRInput/_GetPoseActionDataRelativeToNow::BeginInvoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,System.Single,Valve.VR.InputPoseActionData_t&,System.UInt32,System.UInt64,System.AsyncCallback,System.Object)
extern void _GetPoseActionDataRelativeToNow_BeginInvoke_m9523357F1A4E142DA0231B11F40B02256FA10ECA (void);
// 0x00000701 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetPoseActionDataRelativeToNow::EndInvoke(Valve.VR.InputPoseActionData_t&,System.IAsyncResult)
extern void _GetPoseActionDataRelativeToNow_EndInvoke_m3E8E0751753FA3B63BB4CE116E912612BEA9D0CB (void);
// 0x00000702 System.Void Valve.VR.IVRInput/_GetPoseActionDataForNextFrame::.ctor(System.Object,System.IntPtr)
extern void _GetPoseActionDataForNextFrame__ctor_mB58915FBE3C78789F7EFB47F2C5BBDD0A82D2CD0 (void);
// 0x00000703 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetPoseActionDataForNextFrame::Invoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.InputPoseActionData_t&,System.UInt32,System.UInt64)
extern void _GetPoseActionDataForNextFrame_Invoke_m5B31DC3ADD784072B4EDC435CC9539B939086C41 (void);
// 0x00000704 System.IAsyncResult Valve.VR.IVRInput/_GetPoseActionDataForNextFrame::BeginInvoke(System.UInt64,Valve.VR.ETrackingUniverseOrigin,Valve.VR.InputPoseActionData_t&,System.UInt32,System.UInt64,System.AsyncCallback,System.Object)
extern void _GetPoseActionDataForNextFrame_BeginInvoke_m2BC9E0FFAA8DB1B81693C2400851184D60DDBAC7 (void);
// 0x00000705 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetPoseActionDataForNextFrame::EndInvoke(Valve.VR.InputPoseActionData_t&,System.IAsyncResult)
extern void _GetPoseActionDataForNextFrame_EndInvoke_mF8B5CD65C968AAF6242C186895C9889D3B1DD7D1 (void);
// 0x00000706 System.Void Valve.VR.IVRInput/_GetSkeletalActionData::.ctor(System.Object,System.IntPtr)
extern void _GetSkeletalActionData__ctor_mF5314C087C8F02C3D6E82E67B3BD1E41C7F09183 (void);
// 0x00000707 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalActionData::Invoke(System.UInt64,Valve.VR.InputSkeletalActionData_t&,System.UInt32)
extern void _GetSkeletalActionData_Invoke_mFD7322A817129E2621EA9DC59B1064AA4E095405 (void);
// 0x00000708 System.IAsyncResult Valve.VR.IVRInput/_GetSkeletalActionData::BeginInvoke(System.UInt64,Valve.VR.InputSkeletalActionData_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetSkeletalActionData_BeginInvoke_mA600425ADA2CC65F203604DBCC3DDF5283947B15 (void);
// 0x00000709 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalActionData::EndInvoke(Valve.VR.InputSkeletalActionData_t&,System.IAsyncResult)
extern void _GetSkeletalActionData_EndInvoke_m57A28532EE35F98B899C3F3556C33971AE1B2EDB (void);
// 0x0000070A System.Void Valve.VR.IVRInput/_GetDominantHand::.ctor(System.Object,System.IntPtr)
extern void _GetDominantHand__ctor_m3286977AD62988A30B00E4FFB44918D38FF096F9 (void);
// 0x0000070B Valve.VR.EVRInputError Valve.VR.IVRInput/_GetDominantHand::Invoke(Valve.VR.ETrackedControllerRole&)
extern void _GetDominantHand_Invoke_m7EB0E56CC265E8570CDF72D5C10B63C62BEC6643 (void);
// 0x0000070C System.IAsyncResult Valve.VR.IVRInput/_GetDominantHand::BeginInvoke(Valve.VR.ETrackedControllerRole&,System.AsyncCallback,System.Object)
extern void _GetDominantHand_BeginInvoke_m117FEC882E1DB81614B6BBE9050A2C6C6DE5CD0F (void);
// 0x0000070D Valve.VR.EVRInputError Valve.VR.IVRInput/_GetDominantHand::EndInvoke(Valve.VR.ETrackedControllerRole&,System.IAsyncResult)
extern void _GetDominantHand_EndInvoke_m44D016991B89F44A0B423A6DC317CA5FEE4C0FB2 (void);
// 0x0000070E System.Void Valve.VR.IVRInput/_SetDominantHand::.ctor(System.Object,System.IntPtr)
extern void _SetDominantHand__ctor_m6B756659E29721A5BD5422DB76BF0CBE8BC25AE2 (void);
// 0x0000070F Valve.VR.EVRInputError Valve.VR.IVRInput/_SetDominantHand::Invoke(Valve.VR.ETrackedControllerRole)
extern void _SetDominantHand_Invoke_m50898921496BCEF2287179FE53D24E7C08246CD9 (void);
// 0x00000710 System.IAsyncResult Valve.VR.IVRInput/_SetDominantHand::BeginInvoke(Valve.VR.ETrackedControllerRole,System.AsyncCallback,System.Object)
extern void _SetDominantHand_BeginInvoke_mA73C6AE5CDCD410D50A7DB423775C9AA58891304 (void);
// 0x00000711 Valve.VR.EVRInputError Valve.VR.IVRInput/_SetDominantHand::EndInvoke(System.IAsyncResult)
extern void _SetDominantHand_EndInvoke_m39389691A997CE5C860086FC9302A6680DB820BF (void);
// 0x00000712 System.Void Valve.VR.IVRInput/_GetBoneCount::.ctor(System.Object,System.IntPtr)
extern void _GetBoneCount__ctor_m2AE32684C114E73B3BDE782A7439A54B68F9EE62 (void);
// 0x00000713 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBoneCount::Invoke(System.UInt64,System.UInt32&)
extern void _GetBoneCount_Invoke_m38A52517F3A1C3264F6866E10EBCB675419FFABB (void);
// 0x00000714 System.IAsyncResult Valve.VR.IVRInput/_GetBoneCount::BeginInvoke(System.UInt64,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetBoneCount_BeginInvoke_mC3A79447FDDF8BE3C474F711977F046B11D949D2 (void);
// 0x00000715 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBoneCount::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetBoneCount_EndInvoke_m88E41E4B072657F6841F9413761BC31755880612 (void);
// 0x00000716 System.Void Valve.VR.IVRInput/_GetBoneHierarchy::.ctor(System.Object,System.IntPtr)
extern void _GetBoneHierarchy__ctor_mD81C6CD66B6DF263840C731BF3DEEA50921FAE36 (void);
// 0x00000717 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBoneHierarchy::Invoke(System.UInt64,System.Int32[],System.UInt32)
extern void _GetBoneHierarchy_Invoke_mACF88A039D229AD5E1E97FDB25C8C568D2A4BCD7 (void);
// 0x00000718 System.IAsyncResult Valve.VR.IVRInput/_GetBoneHierarchy::BeginInvoke(System.UInt64,System.Int32[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetBoneHierarchy_BeginInvoke_m8BB1B8ADEE2C67B49AB83ADA2161DBA2DBE036E3 (void);
// 0x00000719 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBoneHierarchy::EndInvoke(System.IAsyncResult)
extern void _GetBoneHierarchy_EndInvoke_mC652E1E323AA11C904ADAFE78A5CAF17DBA37CB0 (void);
// 0x0000071A System.Void Valve.VR.IVRInput/_GetBoneName::.ctor(System.Object,System.IntPtr)
extern void _GetBoneName__ctor_m205AF573AC8EA6D0FA9CADD10DA0FA0DA30B24F3 (void);
// 0x0000071B Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBoneName::Invoke(System.UInt64,System.Int32,System.Text.StringBuilder,System.UInt32)
extern void _GetBoneName_Invoke_m0B2003BED8A1A9AF10AA8FA32038151E3A64E4C3 (void);
// 0x0000071C System.IAsyncResult Valve.VR.IVRInput/_GetBoneName::BeginInvoke(System.UInt64,System.Int32,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetBoneName_BeginInvoke_mD4D57F26E94B057B5FF171B6AB6D438384416F83 (void);
// 0x0000071D Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBoneName::EndInvoke(System.IAsyncResult)
extern void _GetBoneName_EndInvoke_m3B369CC60EA647B3B0A239237DEA25F35D33DF0A (void);
// 0x0000071E System.Void Valve.VR.IVRInput/_GetSkeletalReferenceTransforms::.ctor(System.Object,System.IntPtr)
extern void _GetSkeletalReferenceTransforms__ctor_mEAA08AC5117F986CB44D245CC7D6637BF5A96784 (void);
// 0x0000071F Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalReferenceTransforms::Invoke(System.UInt64,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.EVRSkeletalReferencePose,Valve.VR.VRBoneTransform_t[],System.UInt32)
extern void _GetSkeletalReferenceTransforms_Invoke_mADAC4A81C516468730F256F73D58AA5B9BEB8D28 (void);
// 0x00000720 System.IAsyncResult Valve.VR.IVRInput/_GetSkeletalReferenceTransforms::BeginInvoke(System.UInt64,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.EVRSkeletalReferencePose,Valve.VR.VRBoneTransform_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetSkeletalReferenceTransforms_BeginInvoke_mDCBE9A4983D324D65EAB33954408E6DC71BA3034 (void);
// 0x00000721 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalReferenceTransforms::EndInvoke(System.IAsyncResult)
extern void _GetSkeletalReferenceTransforms_EndInvoke_m3E55300BA586617A02B90031D6F3A8898F2AE757 (void);
// 0x00000722 System.Void Valve.VR.IVRInput/_GetSkeletalTrackingLevel::.ctor(System.Object,System.IntPtr)
extern void _GetSkeletalTrackingLevel__ctor_m0F3B18525F40B2047BE3EEF5C66EAEA8AD9DA73A (void);
// 0x00000723 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalTrackingLevel::Invoke(System.UInt64,Valve.VR.EVRSkeletalTrackingLevel&)
extern void _GetSkeletalTrackingLevel_Invoke_mADA36F6A8FD9E53E65223A2994EB08C69F5EF6D4 (void);
// 0x00000724 System.IAsyncResult Valve.VR.IVRInput/_GetSkeletalTrackingLevel::BeginInvoke(System.UInt64,Valve.VR.EVRSkeletalTrackingLevel&,System.AsyncCallback,System.Object)
extern void _GetSkeletalTrackingLevel_BeginInvoke_mDE9338690038D8B5F1A328B898099FCB381D28F4 (void);
// 0x00000725 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalTrackingLevel::EndInvoke(Valve.VR.EVRSkeletalTrackingLevel&,System.IAsyncResult)
extern void _GetSkeletalTrackingLevel_EndInvoke_m6008C83AAF3F247A909334379E2130B83C70626F (void);
// 0x00000726 System.Void Valve.VR.IVRInput/_GetSkeletalBoneData::.ctor(System.Object,System.IntPtr)
extern void _GetSkeletalBoneData__ctor_m7BE5624BDF093699816B86276551A7ADD702685C (void);
// 0x00000727 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalBoneData::Invoke(System.UInt64,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.EVRSkeletalMotionRange,Valve.VR.VRBoneTransform_t[],System.UInt32)
extern void _GetSkeletalBoneData_Invoke_m70FD6C22451096AA6418061DE1C3E47196D93B7F (void);
// 0x00000728 System.IAsyncResult Valve.VR.IVRInput/_GetSkeletalBoneData::BeginInvoke(System.UInt64,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.EVRSkeletalMotionRange,Valve.VR.VRBoneTransform_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetSkeletalBoneData_BeginInvoke_mE74523338829F98D7EB981FC697C8CDF4900C3B6 (void);
// 0x00000729 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalBoneData::EndInvoke(System.IAsyncResult)
extern void _GetSkeletalBoneData_EndInvoke_m312176F18F066798A871A7713595A75F0E95E209 (void);
// 0x0000072A System.Void Valve.VR.IVRInput/_GetSkeletalSummaryData::.ctor(System.Object,System.IntPtr)
extern void _GetSkeletalSummaryData__ctor_mF697C6D674534DCA40490BFEE2283FBD145430DE (void);
// 0x0000072B Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalSummaryData::Invoke(System.UInt64,Valve.VR.EVRSummaryType,Valve.VR.VRSkeletalSummaryData_t&)
extern void _GetSkeletalSummaryData_Invoke_m2617D032783DCBC43FBDF8C066EB8467ABC87BD1 (void);
// 0x0000072C System.IAsyncResult Valve.VR.IVRInput/_GetSkeletalSummaryData::BeginInvoke(System.UInt64,Valve.VR.EVRSummaryType,Valve.VR.VRSkeletalSummaryData_t&,System.AsyncCallback,System.Object)
extern void _GetSkeletalSummaryData_BeginInvoke_m52C57480F4654E86FD6AE0F10E50A8BA868F038B (void);
// 0x0000072D Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalSummaryData::EndInvoke(Valve.VR.VRSkeletalSummaryData_t&,System.IAsyncResult)
extern void _GetSkeletalSummaryData_EndInvoke_m7DB7F590BDB8AE341B231263DCA00E0C3FB4DB08 (void);
// 0x0000072E System.Void Valve.VR.IVRInput/_GetSkeletalBoneDataCompressed::.ctor(System.Object,System.IntPtr)
extern void _GetSkeletalBoneDataCompressed__ctor_m7C88E75432C040506A1D20BBB79E24837E999F41 (void);
// 0x0000072F Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalBoneDataCompressed::Invoke(System.UInt64,Valve.VR.EVRSkeletalMotionRange,System.IntPtr,System.UInt32,System.UInt32&)
extern void _GetSkeletalBoneDataCompressed_Invoke_mCB15672D176C6C7C7983330E6F69FAA02F783D87 (void);
// 0x00000730 System.IAsyncResult Valve.VR.IVRInput/_GetSkeletalBoneDataCompressed::BeginInvoke(System.UInt64,Valve.VR.EVRSkeletalMotionRange,System.IntPtr,System.UInt32,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetSkeletalBoneDataCompressed_BeginInvoke_m19E86E6C7AD42F4A3F07A1FDAD734F40ADB016E0 (void);
// 0x00000731 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetSkeletalBoneDataCompressed::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetSkeletalBoneDataCompressed_EndInvoke_m03F2C7C769F86462D22332920E50EB5BBB1C1E0D (void);
// 0x00000732 System.Void Valve.VR.IVRInput/_DecompressSkeletalBoneData::.ctor(System.Object,System.IntPtr)
extern void _DecompressSkeletalBoneData__ctor_mAF5CDB86FB35FD4119C24173BA0D8DF3E58A112F (void);
// 0x00000733 Valve.VR.EVRInputError Valve.VR.IVRInput/_DecompressSkeletalBoneData::Invoke(System.IntPtr,System.UInt32,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.VRBoneTransform_t[],System.UInt32)
extern void _DecompressSkeletalBoneData_Invoke_m6E021E584EC4C2724F360E59C29246871A8FF276 (void);
// 0x00000734 System.IAsyncResult Valve.VR.IVRInput/_DecompressSkeletalBoneData::BeginInvoke(System.IntPtr,System.UInt32,Valve.VR.EVRSkeletalTransformSpace,Valve.VR.VRBoneTransform_t[],System.UInt32,System.AsyncCallback,System.Object)
extern void _DecompressSkeletalBoneData_BeginInvoke_m9667294AD93FD763035A90B6388F4FC6495A96AE (void);
// 0x00000735 Valve.VR.EVRInputError Valve.VR.IVRInput/_DecompressSkeletalBoneData::EndInvoke(System.IAsyncResult)
extern void _DecompressSkeletalBoneData_EndInvoke_m4C58F8AC69A6C0FFC5AA889B6DF0E75B8F34F24F (void);
// 0x00000736 System.Void Valve.VR.IVRInput/_TriggerHapticVibrationAction::.ctor(System.Object,System.IntPtr)
extern void _TriggerHapticVibrationAction__ctor_m9897C8413C219A324D2C0C0DFD66AA02DCE9B32B (void);
// 0x00000737 Valve.VR.EVRInputError Valve.VR.IVRInput/_TriggerHapticVibrationAction::Invoke(System.UInt64,System.Single,System.Single,System.Single,System.Single,System.UInt64)
extern void _TriggerHapticVibrationAction_Invoke_mD2B33FE7D6D69331E9A9BD761293532FFD0081FF (void);
// 0x00000738 System.IAsyncResult Valve.VR.IVRInput/_TriggerHapticVibrationAction::BeginInvoke(System.UInt64,System.Single,System.Single,System.Single,System.Single,System.UInt64,System.AsyncCallback,System.Object)
extern void _TriggerHapticVibrationAction_BeginInvoke_m40BF3E1806440C68ED68626E2A8F0D693ECCC6E7 (void);
// 0x00000739 Valve.VR.EVRInputError Valve.VR.IVRInput/_TriggerHapticVibrationAction::EndInvoke(System.IAsyncResult)
extern void _TriggerHapticVibrationAction_EndInvoke_mD974840513B83969D0622352C998EA65E815D997 (void);
// 0x0000073A System.Void Valve.VR.IVRInput/_GetActionOrigins::.ctor(System.Object,System.IntPtr)
extern void _GetActionOrigins__ctor_m4A6AC7D420CE6FB5B96466926A04EB1C8DFD2611 (void);
// 0x0000073B Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionOrigins::Invoke(System.UInt64,System.UInt64,System.UInt64[],System.UInt32)
extern void _GetActionOrigins_Invoke_mA25E866CBFF159A948FFF9FAC1D4FCB3BAE53572 (void);
// 0x0000073C System.IAsyncResult Valve.VR.IVRInput/_GetActionOrigins::BeginInvoke(System.UInt64,System.UInt64,System.UInt64[],System.UInt32,System.AsyncCallback,System.Object)
extern void _GetActionOrigins_BeginInvoke_mBE75BF07A3FF486E3D920A1F674299E0FBB0782D (void);
// 0x0000073D Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionOrigins::EndInvoke(System.IAsyncResult)
extern void _GetActionOrigins_EndInvoke_m72E4AB8AF7FEE8824734861D7F7B9585DFADD626 (void);
// 0x0000073E System.Void Valve.VR.IVRInput/_GetOriginLocalizedName::.ctor(System.Object,System.IntPtr)
extern void _GetOriginLocalizedName__ctor_m9FB075BE399332ADCFBFD31A71840691C157AF9F (void);
// 0x0000073F Valve.VR.EVRInputError Valve.VR.IVRInput/_GetOriginLocalizedName::Invoke(System.UInt64,System.Text.StringBuilder,System.UInt32,System.Int32)
extern void _GetOriginLocalizedName_Invoke_m6A393BD3AF6F23FD3400F1A154FC0D7B2150306E (void);
// 0x00000740 System.IAsyncResult Valve.VR.IVRInput/_GetOriginLocalizedName::BeginInvoke(System.UInt64,System.Text.StringBuilder,System.UInt32,System.Int32,System.AsyncCallback,System.Object)
extern void _GetOriginLocalizedName_BeginInvoke_m9FB7EDBE790DE6D13475AD2BD6F73A3B2A3DB096 (void);
// 0x00000741 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetOriginLocalizedName::EndInvoke(System.IAsyncResult)
extern void _GetOriginLocalizedName_EndInvoke_mBE5296ACDAD04A2F272A39DD09247084747D83E2 (void);
// 0x00000742 System.Void Valve.VR.IVRInput/_GetOriginTrackedDeviceInfo::.ctor(System.Object,System.IntPtr)
extern void _GetOriginTrackedDeviceInfo__ctor_m1CE7550EE2DC5300B40EDBE7EFBCE6E9E3ED39F4 (void);
// 0x00000743 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetOriginTrackedDeviceInfo::Invoke(System.UInt64,Valve.VR.InputOriginInfo_t&,System.UInt32)
extern void _GetOriginTrackedDeviceInfo_Invoke_mFD9F2323420944B0EF5C55A8B4B8A5B253A2A4BE (void);
// 0x00000744 System.IAsyncResult Valve.VR.IVRInput/_GetOriginTrackedDeviceInfo::BeginInvoke(System.UInt64,Valve.VR.InputOriginInfo_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetOriginTrackedDeviceInfo_BeginInvoke_m51D50F72BB579668386F733063F896D7B03329E0 (void);
// 0x00000745 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetOriginTrackedDeviceInfo::EndInvoke(Valve.VR.InputOriginInfo_t&,System.IAsyncResult)
extern void _GetOriginTrackedDeviceInfo_EndInvoke_m7EAC25B0B80A783FF16CA18C28383346636183FE (void);
// 0x00000746 System.Void Valve.VR.IVRInput/_GetActionBindingInfo::.ctor(System.Object,System.IntPtr)
extern void _GetActionBindingInfo__ctor_m293E44EDAF748F619D70531335DA46A0F9E70FD2 (void);
// 0x00000747 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionBindingInfo::Invoke(System.UInt64,Valve.VR.InputBindingInfo_t&,System.UInt32,System.UInt32,System.UInt32&)
extern void _GetActionBindingInfo_Invoke_mA09662969F5B5BE9144C886D6751E0E9FC6AE95C (void);
// 0x00000748 System.IAsyncResult Valve.VR.IVRInput/_GetActionBindingInfo::BeginInvoke(System.UInt64,Valve.VR.InputBindingInfo_t&,System.UInt32,System.UInt32,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetActionBindingInfo_BeginInvoke_m5385FCFCE9D578315708656DBF51F3A80474168C (void);
// 0x00000749 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetActionBindingInfo::EndInvoke(Valve.VR.InputBindingInfo_t&,System.UInt32&,System.IAsyncResult)
extern void _GetActionBindingInfo_EndInvoke_m388410D1407252255EEB8EEECA7715CD80DAB27F (void);
// 0x0000074A System.Void Valve.VR.IVRInput/_ShowActionOrigins::.ctor(System.Object,System.IntPtr)
extern void _ShowActionOrigins__ctor_mC7E7696427FA50116F3832A8A135DA110CE5F2BA (void);
// 0x0000074B Valve.VR.EVRInputError Valve.VR.IVRInput/_ShowActionOrigins::Invoke(System.UInt64,System.UInt64)
extern void _ShowActionOrigins_Invoke_m73798FA3D4EC8EB34596A15996E8217DC348CFE0 (void);
// 0x0000074C System.IAsyncResult Valve.VR.IVRInput/_ShowActionOrigins::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
extern void _ShowActionOrigins_BeginInvoke_m7BE35798A3993FCC739BF129BB51701BBF884165 (void);
// 0x0000074D Valve.VR.EVRInputError Valve.VR.IVRInput/_ShowActionOrigins::EndInvoke(System.IAsyncResult)
extern void _ShowActionOrigins_EndInvoke_m0CB95B3BE351CC28F4039733B2645410C33D7D97 (void);
// 0x0000074E System.Void Valve.VR.IVRInput/_ShowBindingsForActionSet::.ctor(System.Object,System.IntPtr)
extern void _ShowBindingsForActionSet__ctor_mDB0FF5D3897C8558825788CC68CFD0CC27C6AD8B (void);
// 0x0000074F Valve.VR.EVRInputError Valve.VR.IVRInput/_ShowBindingsForActionSet::Invoke(Valve.VR.VRActiveActionSet_t[],System.UInt32,System.UInt32,System.UInt64)
extern void _ShowBindingsForActionSet_Invoke_m9FC9AF94BC4124BF43A6673CA9E3CD0F28E9ECB8 (void);
// 0x00000750 System.IAsyncResult Valve.VR.IVRInput/_ShowBindingsForActionSet::BeginInvoke(Valve.VR.VRActiveActionSet_t[],System.UInt32,System.UInt32,System.UInt64,System.AsyncCallback,System.Object)
extern void _ShowBindingsForActionSet_BeginInvoke_mA08012A7B71BCBEC4E4DD81F5171B45D5A4971CF (void);
// 0x00000751 Valve.VR.EVRInputError Valve.VR.IVRInput/_ShowBindingsForActionSet::EndInvoke(System.IAsyncResult)
extern void _ShowBindingsForActionSet_EndInvoke_mC615FB7C58C227447BFBB24FFD16FE3027ACCA35 (void);
// 0x00000752 System.Void Valve.VR.IVRInput/_GetComponentStateForBinding::.ctor(System.Object,System.IntPtr)
extern void _GetComponentStateForBinding__ctor_m98CEBEE48CC4ACB1A31EEDE28D54F8C65514A54F (void);
// 0x00000753 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetComponentStateForBinding::Invoke(System.IntPtr,System.IntPtr,Valve.VR.InputBindingInfo_t&,System.UInt32,System.UInt32,Valve.VR.RenderModel_ComponentState_t&)
extern void _GetComponentStateForBinding_Invoke_m1C11F475A8AF1CEE9A8D67F468A71E2DC39A6EE3 (void);
// 0x00000754 System.IAsyncResult Valve.VR.IVRInput/_GetComponentStateForBinding::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.InputBindingInfo_t&,System.UInt32,System.UInt32,Valve.VR.RenderModel_ComponentState_t&,System.AsyncCallback,System.Object)
extern void _GetComponentStateForBinding_BeginInvoke_m8ABA188566601FD72A8BD93C7502725DF2E2D07B (void);
// 0x00000755 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetComponentStateForBinding::EndInvoke(Valve.VR.InputBindingInfo_t&,Valve.VR.RenderModel_ComponentState_t&,System.IAsyncResult)
extern void _GetComponentStateForBinding_EndInvoke_m5476834B5FD2FAFABCA24BDD35741B9B2EE51DA5 (void);
// 0x00000756 System.Void Valve.VR.IVRInput/_IsUsingLegacyInput::.ctor(System.Object,System.IntPtr)
extern void _IsUsingLegacyInput__ctor_m8FD2F446CDA05995AC3EDEFB9AE8741DCE62D66B (void);
// 0x00000757 System.Boolean Valve.VR.IVRInput/_IsUsingLegacyInput::Invoke()
extern void _IsUsingLegacyInput_Invoke_m2AB1A194A8532A555C4762346B63B4C44A4DBBA3 (void);
// 0x00000758 System.IAsyncResult Valve.VR.IVRInput/_IsUsingLegacyInput::BeginInvoke(System.AsyncCallback,System.Object)
extern void _IsUsingLegacyInput_BeginInvoke_m4D83B0AD81BB69EE66FFF752632B804E4AEE010D (void);
// 0x00000759 System.Boolean Valve.VR.IVRInput/_IsUsingLegacyInput::EndInvoke(System.IAsyncResult)
extern void _IsUsingLegacyInput_EndInvoke_m51A002B9BC8998F9A5123CDC8A814C0D8799FFC1 (void);
// 0x0000075A System.Void Valve.VR.IVRInput/_OpenBindingUI::.ctor(System.Object,System.IntPtr)
extern void _OpenBindingUI__ctor_m3D2E1D576946E6F9F091D3DCFA5C53EFF82BFF0F (void);
// 0x0000075B Valve.VR.EVRInputError Valve.VR.IVRInput/_OpenBindingUI::Invoke(System.IntPtr,System.UInt64,System.UInt64,System.Boolean)
extern void _OpenBindingUI_Invoke_mCEAD2A36CD175D13E7322F44916C7B7F6FBCADFF (void);
// 0x0000075C System.IAsyncResult Valve.VR.IVRInput/_OpenBindingUI::BeginInvoke(System.IntPtr,System.UInt64,System.UInt64,System.Boolean,System.AsyncCallback,System.Object)
extern void _OpenBindingUI_BeginInvoke_m9F7C2AECF86479D6035771857897253BC748FAC7 (void);
// 0x0000075D Valve.VR.EVRInputError Valve.VR.IVRInput/_OpenBindingUI::EndInvoke(System.IAsyncResult)
extern void _OpenBindingUI_EndInvoke_mFC1D5A2DF5361C4A6674A300DC00ADF42041F5C7 (void);
// 0x0000075E System.Void Valve.VR.IVRInput/_GetBindingVariant::.ctor(System.Object,System.IntPtr)
extern void _GetBindingVariant__ctor_mA71064A60DEA8B667FC601575D8920436DE6D6F3 (void);
// 0x0000075F Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBindingVariant::Invoke(System.UInt64,System.Text.StringBuilder,System.UInt32)
extern void _GetBindingVariant_Invoke_m474786A920703D0C5CA228C220A78EE713123A23 (void);
// 0x00000760 System.IAsyncResult Valve.VR.IVRInput/_GetBindingVariant::BeginInvoke(System.UInt64,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetBindingVariant_BeginInvoke_mA727D993B8D32475D47D590879CB1F00CAAFA3C7 (void);
// 0x00000761 Valve.VR.EVRInputError Valve.VR.IVRInput/_GetBindingVariant::EndInvoke(System.IAsyncResult)
extern void _GetBindingVariant_EndInvoke_m20A3FE2C445DDE01D22270C5378471A0557F4557 (void);
// 0x00000762 System.Void Valve.VR.IVRIOBuffer/_Open::.ctor(System.Object,System.IntPtr)
extern void _Open__ctor_mC4FF07C28BA6CECF655051086FB3A48C2E816583 (void);
// 0x00000763 Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Open::Invoke(System.IntPtr,Valve.VR.EIOBufferMode,System.UInt32,System.UInt32,System.UInt64&)
extern void _Open_Invoke_mB2454DA3759EFA37159439F192FA59F0E1AC7FAE (void);
// 0x00000764 System.IAsyncResult Valve.VR.IVRIOBuffer/_Open::BeginInvoke(System.IntPtr,Valve.VR.EIOBufferMode,System.UInt32,System.UInt32,System.UInt64&,System.AsyncCallback,System.Object)
extern void _Open_BeginInvoke_m2DFCD765ECF83533C82E4FAB1E3824E4CFA81C1A (void);
// 0x00000765 Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Open::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _Open_EndInvoke_m00FFA0A3052B4C32EFC7A1FDE0DBC28509E5D18A (void);
// 0x00000766 System.Void Valve.VR.IVRIOBuffer/_Close::.ctor(System.Object,System.IntPtr)
extern void _Close__ctor_mCF691625DF14F1F1D27FE325FACEE6D63E5F7DEE (void);
// 0x00000767 Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Close::Invoke(System.UInt64)
extern void _Close_Invoke_mC6D60A5C30AD254447E5EFF5E6554F53BC259348 (void);
// 0x00000768 System.IAsyncResult Valve.VR.IVRIOBuffer/_Close::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _Close_BeginInvoke_mB9FB69396374809DAA15F937A2080B89DC303A7C (void);
// 0x00000769 Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Close::EndInvoke(System.IAsyncResult)
extern void _Close_EndInvoke_m11307B7EE0100BE7941DE1014076C3EFB4059F36 (void);
// 0x0000076A System.Void Valve.VR.IVRIOBuffer/_Read::.ctor(System.Object,System.IntPtr)
extern void _Read__ctor_m8D6D4CF9953B0D360E093A2FC663FA7229E33045 (void);
// 0x0000076B Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Read::Invoke(System.UInt64,System.IntPtr,System.UInt32,System.UInt32&)
extern void _Read_Invoke_mDA88600433381057A44AD42594F0F8BC7F09FE12 (void);
// 0x0000076C System.IAsyncResult Valve.VR.IVRIOBuffer/_Read::BeginInvoke(System.UInt64,System.IntPtr,System.UInt32,System.UInt32&,System.AsyncCallback,System.Object)
extern void _Read_BeginInvoke_m5521196E1A673F35D7909B3D40DD022AB95D4541 (void);
// 0x0000076D Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Read::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _Read_EndInvoke_mCCD621910A2FA2FCFD82CEFF9229218EB7263DFC (void);
// 0x0000076E System.Void Valve.VR.IVRIOBuffer/_Write::.ctor(System.Object,System.IntPtr)
extern void _Write__ctor_mD8A2C81F15E08D2924B1C33F040BEF2E9848BF52 (void);
// 0x0000076F Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Write::Invoke(System.UInt64,System.IntPtr,System.UInt32)
extern void _Write_Invoke_m5D12326FE6A39BAA537760731D8E2285EF8F33E4 (void);
// 0x00000770 System.IAsyncResult Valve.VR.IVRIOBuffer/_Write::BeginInvoke(System.UInt64,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern void _Write_BeginInvoke_m2A106E6F69B6F0121CCB9A54169B8958643AB1DB (void);
// 0x00000771 Valve.VR.EIOBufferError Valve.VR.IVRIOBuffer/_Write::EndInvoke(System.IAsyncResult)
extern void _Write_EndInvoke_m22A356F8524948D7EC49D5E0A46E386BBD7664DB (void);
// 0x00000772 System.Void Valve.VR.IVRIOBuffer/_PropertyContainer::.ctor(System.Object,System.IntPtr)
extern void _PropertyContainer__ctor_m05EAAE9CDBEBE67F5E8CC55F0DD63EAA5E44F000 (void);
// 0x00000773 System.UInt64 Valve.VR.IVRIOBuffer/_PropertyContainer::Invoke(System.UInt64)
extern void _PropertyContainer_Invoke_mEB90842E37A5EACAC1B11B4F737A8713D265E302 (void);
// 0x00000774 System.IAsyncResult Valve.VR.IVRIOBuffer/_PropertyContainer::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _PropertyContainer_BeginInvoke_m6043063E720A4BC81469B1AB5D202ECEA6D0FBFD (void);
// 0x00000775 System.UInt64 Valve.VR.IVRIOBuffer/_PropertyContainer::EndInvoke(System.IAsyncResult)
extern void _PropertyContainer_EndInvoke_m7415752BE7F3C147D416A99A0784EE5CA1BA9098 (void);
// 0x00000776 System.Void Valve.VR.IVRIOBuffer/_HasReaders::.ctor(System.Object,System.IntPtr)
extern void _HasReaders__ctor_m9B2AEEB034C9983D61BF8F8679F22D26F8A959F3 (void);
// 0x00000777 System.Boolean Valve.VR.IVRIOBuffer/_HasReaders::Invoke(System.UInt64)
extern void _HasReaders_Invoke_m2526EEFE40EA5E44B64C6AEB94213030AF6A4FD7 (void);
// 0x00000778 System.IAsyncResult Valve.VR.IVRIOBuffer/_HasReaders::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _HasReaders_BeginInvoke_mB80299ABAC0A02671BCDD66CE5DB106677B0C051 (void);
// 0x00000779 System.Boolean Valve.VR.IVRIOBuffer/_HasReaders::EndInvoke(System.IAsyncResult)
extern void _HasReaders_EndInvoke_mF95F171236D686A70218D432265A364F31718E92 (void);
// 0x0000077A System.Void Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor::.ctor(System.Object,System.IntPtr)
extern void _CreateSpatialAnchorFromDescriptor__ctor_mAF930902861379CB82409FA85D7D03360D72E300 (void);
// 0x0000077B Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor::Invoke(System.IntPtr,System.UInt32&)
extern void _CreateSpatialAnchorFromDescriptor_Invoke_m5DDC3657E80212209E67B94CB9D70F18FB54C0E7 (void);
// 0x0000077C System.IAsyncResult Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor::BeginInvoke(System.IntPtr,System.UInt32&,System.AsyncCallback,System.Object)
extern void _CreateSpatialAnchorFromDescriptor_BeginInvoke_mD49750128960A0AE2DF012A7EFAAE0772A9BBE44 (void);
// 0x0000077D Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _CreateSpatialAnchorFromDescriptor_EndInvoke_m8B55397A8747B0F9F66F8376C8733FA94A32C390 (void);
// 0x0000077E System.Void Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose::.ctor(System.Object,System.IntPtr)
extern void _CreateSpatialAnchorFromPose__ctor_m78AC78E96991BC32F0BE63947C667BDD9C4A123E (void);
// 0x0000077F Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose::Invoke(System.UInt32,Valve.VR.ETrackingUniverseOrigin,Valve.VR.SpatialAnchorPose_t&,System.UInt32&)
extern void _CreateSpatialAnchorFromPose_Invoke_mA75421128291788D1911E0744E9A53CE4B2ACFA5 (void);
// 0x00000780 System.IAsyncResult Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose::BeginInvoke(System.UInt32,Valve.VR.ETrackingUniverseOrigin,Valve.VR.SpatialAnchorPose_t&,System.UInt32&,System.AsyncCallback,System.Object)
extern void _CreateSpatialAnchorFromPose_BeginInvoke_m028B5CD5BB6FD295DD148FCEBB13E7F391C8B81D (void);
// 0x00000781 Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose::EndInvoke(Valve.VR.SpatialAnchorPose_t&,System.UInt32&,System.IAsyncResult)
extern void _CreateSpatialAnchorFromPose_EndInvoke_m5947D5051FC25392C4CC082FDD2D5B6397061C4A (void);
// 0x00000782 System.Void Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorPose::.ctor(System.Object,System.IntPtr)
extern void _GetSpatialAnchorPose__ctor_m31A7302084BDCB3D0B2339C3D0C91AB5FC109D93 (void);
// 0x00000783 Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorPose::Invoke(System.UInt32,Valve.VR.ETrackingUniverseOrigin,Valve.VR.SpatialAnchorPose_t&)
extern void _GetSpatialAnchorPose_Invoke_mCCAAB00996F62E64BB184D1065A48A099F45F415 (void);
// 0x00000784 System.IAsyncResult Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorPose::BeginInvoke(System.UInt32,Valve.VR.ETrackingUniverseOrigin,Valve.VR.SpatialAnchorPose_t&,System.AsyncCallback,System.Object)
extern void _GetSpatialAnchorPose_BeginInvoke_m10ECF6302C626751D116FE5C2BF33928A17DE395 (void);
// 0x00000785 Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorPose::EndInvoke(Valve.VR.SpatialAnchorPose_t&,System.IAsyncResult)
extern void _GetSpatialAnchorPose_EndInvoke_m0C6ACB9A072744E413C08A808E5926282E23666A (void);
// 0x00000786 System.Void Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor::.ctor(System.Object,System.IntPtr)
extern void _GetSpatialAnchorDescriptor__ctor_mF9EA4B614DAAF28250C703FD287BBAA355CEFA66 (void);
// 0x00000787 Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor::Invoke(System.UInt32,System.Text.StringBuilder,System.UInt32&)
extern void _GetSpatialAnchorDescriptor_Invoke_m2F26924E1E1757F650BAE76CC0EA2A19E1DA6EF2 (void);
// 0x00000788 System.IAsyncResult Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor::BeginInvoke(System.UInt32,System.Text.StringBuilder,System.UInt32&,System.AsyncCallback,System.Object)
extern void _GetSpatialAnchorDescriptor_BeginInvoke_mE75B225F54DB91ED0CE97F4BAD332411CE413546 (void);
// 0x00000789 Valve.VR.EVRSpatialAnchorError Valve.VR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _GetSpatialAnchorDescriptor_EndInvoke_mFB71166C3035648BE3CD83B1286C228CC53F24AF (void);
// 0x0000078A System.Void Valve.VR.IVRDebug/_EmitVrProfilerEvent::.ctor(System.Object,System.IntPtr)
extern void _EmitVrProfilerEvent__ctor_m5C662F36243672205CD03F5009255D2B9BB3EC39 (void);
// 0x0000078B Valve.VR.EVRDebugError Valve.VR.IVRDebug/_EmitVrProfilerEvent::Invoke(System.IntPtr)
extern void _EmitVrProfilerEvent_Invoke_m5400719D0A53214ED6E4F926DCF4CE9AE52BDAF5 (void);
// 0x0000078C System.IAsyncResult Valve.VR.IVRDebug/_EmitVrProfilerEvent::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _EmitVrProfilerEvent_BeginInvoke_m29AB7DD560C30A03DDE06C00C49D9299B51D932F (void);
// 0x0000078D Valve.VR.EVRDebugError Valve.VR.IVRDebug/_EmitVrProfilerEvent::EndInvoke(System.IAsyncResult)
extern void _EmitVrProfilerEvent_EndInvoke_m30CF0AA7EDD036E8D1E750611DF41A562A1BC0F6 (void);
// 0x0000078E System.Void Valve.VR.IVRDebug/_BeginVrProfilerEvent::.ctor(System.Object,System.IntPtr)
extern void _BeginVrProfilerEvent__ctor_m388A9D86FC9F81103D4ACE1995674B438821D31B (void);
// 0x0000078F Valve.VR.EVRDebugError Valve.VR.IVRDebug/_BeginVrProfilerEvent::Invoke(System.UInt64&)
extern void _BeginVrProfilerEvent_Invoke_mBE11CC94FABAAACA0B1C753D1777F89CC5B5D0D6 (void);
// 0x00000790 System.IAsyncResult Valve.VR.IVRDebug/_BeginVrProfilerEvent::BeginInvoke(System.UInt64&,System.AsyncCallback,System.Object)
extern void _BeginVrProfilerEvent_BeginInvoke_m0A0EF8791D39A4DE1B6903DB2696844987DAF181 (void);
// 0x00000791 Valve.VR.EVRDebugError Valve.VR.IVRDebug/_BeginVrProfilerEvent::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _BeginVrProfilerEvent_EndInvoke_mC97FEDFA5443F8D1B73C306447C90D1F20747182 (void);
// 0x00000792 System.Void Valve.VR.IVRDebug/_FinishVrProfilerEvent::.ctor(System.Object,System.IntPtr)
extern void _FinishVrProfilerEvent__ctor_mB7A62FC21F88831952ED5863DB4239D2ADB28922 (void);
// 0x00000793 Valve.VR.EVRDebugError Valve.VR.IVRDebug/_FinishVrProfilerEvent::Invoke(System.UInt64,System.IntPtr)
extern void _FinishVrProfilerEvent_Invoke_m40536125C46352155FFB5F79F7090B711F122ED8 (void);
// 0x00000794 System.IAsyncResult Valve.VR.IVRDebug/_FinishVrProfilerEvent::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void _FinishVrProfilerEvent_BeginInvoke_mDE42CD668FB56C24F9CA66D4FD158CC12C2AEA6F (void);
// 0x00000795 Valve.VR.EVRDebugError Valve.VR.IVRDebug/_FinishVrProfilerEvent::EndInvoke(System.IAsyncResult)
extern void _FinishVrProfilerEvent_EndInvoke_m4D16B4DBA7F37AA4400BE362314B7A5687752DF6 (void);
// 0x00000796 System.Void Valve.VR.IVRDebug/_DriverDebugRequest::.ctor(System.Object,System.IntPtr)
extern void _DriverDebugRequest__ctor_m736E9610ACDB6749A30E1CD755FCD8856B1D9A32 (void);
// 0x00000797 System.UInt32 Valve.VR.IVRDebug/_DriverDebugRequest::Invoke(System.UInt32,System.IntPtr,System.Text.StringBuilder,System.UInt32)
extern void _DriverDebugRequest_Invoke_m8AC33AE977858DC647DA40F38A4E76882B6E8057 (void);
// 0x00000798 System.IAsyncResult Valve.VR.IVRDebug/_DriverDebugRequest::BeginInvoke(System.UInt32,System.IntPtr,System.Text.StringBuilder,System.UInt32,System.AsyncCallback,System.Object)
extern void _DriverDebugRequest_BeginInvoke_m2635EE9A9C1DBCF422E72F656481EF63435542B5 (void);
// 0x00000799 System.UInt32 Valve.VR.IVRDebug/_DriverDebugRequest::EndInvoke(System.IAsyncResult)
extern void _DriverDebugRequest_EndInvoke_m3EC3632F05F2152034CDAB00BE5AF62FA46F4B58 (void);
// 0x0000079A System.Void Valve.VR.IVRProperties/_ReadPropertyBatch::.ctor(System.Object,System.IntPtr)
extern void _ReadPropertyBatch__ctor_m928C407F3ACE7896515FAF66485CD4EB9BD0425D (void);
// 0x0000079B Valve.VR.ETrackedPropertyError Valve.VR.IVRProperties/_ReadPropertyBatch::Invoke(System.UInt64,Valve.VR.PropertyRead_t&,System.UInt32)
extern void _ReadPropertyBatch_Invoke_m5E7FEA43956CD7AA8C224E1189DE64E3B4CDDE7B (void);
// 0x0000079C System.IAsyncResult Valve.VR.IVRProperties/_ReadPropertyBatch::BeginInvoke(System.UInt64,Valve.VR.PropertyRead_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _ReadPropertyBatch_BeginInvoke_m2A0DA0770FAAF3F3D8304F755F5F2CE35DE314EA (void);
// 0x0000079D Valve.VR.ETrackedPropertyError Valve.VR.IVRProperties/_ReadPropertyBatch::EndInvoke(Valve.VR.PropertyRead_t&,System.IAsyncResult)
extern void _ReadPropertyBatch_EndInvoke_m3567EFCBB76D6D55F0F4863BF0E134FAC4520817 (void);
// 0x0000079E System.Void Valve.VR.IVRProperties/_WritePropertyBatch::.ctor(System.Object,System.IntPtr)
extern void _WritePropertyBatch__ctor_m4D8EA64DFA1F7101832836AEE58966BCE811AA04 (void);
// 0x0000079F Valve.VR.ETrackedPropertyError Valve.VR.IVRProperties/_WritePropertyBatch::Invoke(System.UInt64,Valve.VR.PropertyWrite_t&,System.UInt32)
extern void _WritePropertyBatch_Invoke_mEB7D6E543E9A0C3F200F169BC9969949F7CC3B4E (void);
// 0x000007A0 System.IAsyncResult Valve.VR.IVRProperties/_WritePropertyBatch::BeginInvoke(System.UInt64,Valve.VR.PropertyWrite_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _WritePropertyBatch_BeginInvoke_m330B5C556F349767E61F7DC8A2A3720D7C91EAC9 (void);
// 0x000007A1 Valve.VR.ETrackedPropertyError Valve.VR.IVRProperties/_WritePropertyBatch::EndInvoke(Valve.VR.PropertyWrite_t&,System.IAsyncResult)
extern void _WritePropertyBatch_EndInvoke_mD473A5EF65745A71F7D12B665F0B6403EEA338D6 (void);
// 0x000007A2 System.Void Valve.VR.IVRProperties/_GetPropErrorNameFromEnum::.ctor(System.Object,System.IntPtr)
extern void _GetPropErrorNameFromEnum__ctor_m37FA773865F5D7E3FE63025898CB094021BF2682 (void);
// 0x000007A3 System.IntPtr Valve.VR.IVRProperties/_GetPropErrorNameFromEnum::Invoke(Valve.VR.ETrackedPropertyError)
extern void _GetPropErrorNameFromEnum_Invoke_m431B7302DC65F6863EBF9DA198BF65258163B273 (void);
// 0x000007A4 System.IAsyncResult Valve.VR.IVRProperties/_GetPropErrorNameFromEnum::BeginInvoke(Valve.VR.ETrackedPropertyError,System.AsyncCallback,System.Object)
extern void _GetPropErrorNameFromEnum_BeginInvoke_mB481973588F08C9852B7162E9872EA23F36CC1F0 (void);
// 0x000007A5 System.IntPtr Valve.VR.IVRProperties/_GetPropErrorNameFromEnum::EndInvoke(System.IAsyncResult)
extern void _GetPropErrorNameFromEnum_EndInvoke_m3DD3D12723D5151C8D8B24A9FF94D12353A90CC8 (void);
// 0x000007A6 System.Void Valve.VR.IVRProperties/_TrackedDeviceToPropertyContainer::.ctor(System.Object,System.IntPtr)
extern void _TrackedDeviceToPropertyContainer__ctor_m7D1437D0B67C8359EC840B356C36AF6D403C3CB2 (void);
// 0x000007A7 System.UInt64 Valve.VR.IVRProperties/_TrackedDeviceToPropertyContainer::Invoke(System.UInt32)
extern void _TrackedDeviceToPropertyContainer_Invoke_m66CD9ECE46DC7F2270459461CBA5F0BF77896D0A (void);
// 0x000007A8 System.IAsyncResult Valve.VR.IVRProperties/_TrackedDeviceToPropertyContainer::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
extern void _TrackedDeviceToPropertyContainer_BeginInvoke_mECE6786CE8FC199D56C67A4855086F8E6625EA2B (void);
// 0x000007A9 System.UInt64 Valve.VR.IVRProperties/_TrackedDeviceToPropertyContainer::EndInvoke(System.IAsyncResult)
extern void _TrackedDeviceToPropertyContainer_EndInvoke_m95433E85541E1000AF6DD4A7046FE6D57B622A70 (void);
// 0x000007AA System.Void Valve.VR.IVRPaths/_ReadPathBatch::.ctor(System.Object,System.IntPtr)
extern void _ReadPathBatch__ctor_m76C55F77F4CEE2D7B466EA9BE9BD70B07D257CAB (void);
// 0x000007AB Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_ReadPathBatch::Invoke(System.UInt64,Valve.VR.PathRead_t&,System.UInt32)
extern void _ReadPathBatch_Invoke_m146855E2F8B838F2FB1AB0CC430F42D350F8961C (void);
// 0x000007AC System.IAsyncResult Valve.VR.IVRPaths/_ReadPathBatch::BeginInvoke(System.UInt64,Valve.VR.PathRead_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _ReadPathBatch_BeginInvoke_m3C8161485F361334DD6B2C735F50E6D101D9265F (void);
// 0x000007AD Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_ReadPathBatch::EndInvoke(Valve.VR.PathRead_t&,System.IAsyncResult)
extern void _ReadPathBatch_EndInvoke_m5CD40B4DDBC2781822D9E9787BC67466FC71087D (void);
// 0x000007AE System.Void Valve.VR.IVRPaths/_WritePathBatch::.ctor(System.Object,System.IntPtr)
extern void _WritePathBatch__ctor_m8BB82F334463D19C517CAA9C0F40193EF59E9129 (void);
// 0x000007AF Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_WritePathBatch::Invoke(System.UInt64,Valve.VR.PathWrite_t&,System.UInt32)
extern void _WritePathBatch_Invoke_mCB59330CD2381007DFB11FE397B911D730BF9087 (void);
// 0x000007B0 System.IAsyncResult Valve.VR.IVRPaths/_WritePathBatch::BeginInvoke(System.UInt64,Valve.VR.PathWrite_t&,System.UInt32,System.AsyncCallback,System.Object)
extern void _WritePathBatch_BeginInvoke_mEED7DAE82F574CA234068BFE827E959BAF1866ED (void);
// 0x000007B1 Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_WritePathBatch::EndInvoke(Valve.VR.PathWrite_t&,System.IAsyncResult)
extern void _WritePathBatch_EndInvoke_m729A81B07ACDDD3A5687F24555FA8CF67627B3A5 (void);
// 0x000007B2 System.Void Valve.VR.IVRPaths/_StringToHandle::.ctor(System.Object,System.IntPtr)
extern void _StringToHandle__ctor_mB5BD48E6D1A87E13F4FDBD6B31B9B52E31DF1221 (void);
// 0x000007B3 Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_StringToHandle::Invoke(System.UInt64&,System.IntPtr)
extern void _StringToHandle_Invoke_m8B60A7BEFA373EFF390D827D4366AAF5B8842DB6 (void);
// 0x000007B4 System.IAsyncResult Valve.VR.IVRPaths/_StringToHandle::BeginInvoke(System.UInt64&,System.IntPtr,System.AsyncCallback,System.Object)
extern void _StringToHandle_BeginInvoke_m5ABFD2D12D72832B4BCCCD73A4E8CF1642689106 (void);
// 0x000007B5 Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_StringToHandle::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _StringToHandle_EndInvoke_mA7D3ED7CE0FCD237E0C1A2B1180CE8185EBF7E29 (void);
// 0x000007B6 System.Void Valve.VR.IVRPaths/_HandleToString::.ctor(System.Object,System.IntPtr)
extern void _HandleToString__ctor_mDF05B0F4213DF1F0D3E785AAEDF60E64494DC30B (void);
// 0x000007B7 Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_HandleToString::Invoke(System.UInt64,System.String,System.UInt32,System.UInt32&)
extern void _HandleToString_Invoke_m0776597E8232DCD4B68B6E38106A165E288107B4 (void);
// 0x000007B8 System.IAsyncResult Valve.VR.IVRPaths/_HandleToString::BeginInvoke(System.UInt64,System.String,System.UInt32,System.UInt32&,System.AsyncCallback,System.Object)
extern void _HandleToString_BeginInvoke_m86F8E8EB5E285A130D78C9BDBD12755E4A2F34A2 (void);
// 0x000007B9 Valve.VR.ETrackedPropertyError Valve.VR.IVRPaths/_HandleToString::EndInvoke(System.UInt32&,System.IAsyncResult)
extern void _HandleToString_EndInvoke_m227DF766CF88B228AAE7CAAB19721BECF68C0AAA (void);
// 0x000007BA System.Void Valve.VR.IVRBlockQueue/_Create::.ctor(System.Object,System.IntPtr)
extern void _Create__ctor_m016057D25D26C0AED396D255C2E40C5350B0507E (void);
// 0x000007BB Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_Create::Invoke(System.UInt64&,System.IntPtr,System.UInt32,System.UInt32,System.UInt32)
extern void _Create_Invoke_m412FACAC89B0B86905CB76B411F04A70053BC8B3 (void);
// 0x000007BC System.IAsyncResult Valve.VR.IVRBlockQueue/_Create::BeginInvoke(System.UInt64&,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern void _Create_BeginInvoke_m8C0E561CDA0175B0F1EE11752923838C0907DD65 (void);
// 0x000007BD Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_Create::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _Create_EndInvoke_m49C529DAA840DF515E5D0E45D480EFFD0F285C37 (void);
// 0x000007BE System.Void Valve.VR.IVRBlockQueue/_Connect::.ctor(System.Object,System.IntPtr)
extern void _Connect__ctor_m9D2E6E0EAF76C9DB161CAF1A1AD4B572EEA38788 (void);
// 0x000007BF Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_Connect::Invoke(System.UInt64&,System.IntPtr)
extern void _Connect_Invoke_m528132D505FE88E2CFE0AD020F372196FFC4489F (void);
// 0x000007C0 System.IAsyncResult Valve.VR.IVRBlockQueue/_Connect::BeginInvoke(System.UInt64&,System.IntPtr,System.AsyncCallback,System.Object)
extern void _Connect_BeginInvoke_m106AA83026F05F992C14BEB0320400F2D6778133 (void);
// 0x000007C1 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_Connect::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _Connect_EndInvoke_m312AA70EC3905A25D8A80C8418A5F81A87F407F5 (void);
// 0x000007C2 System.Void Valve.VR.IVRBlockQueue/_Destroy::.ctor(System.Object,System.IntPtr)
extern void _Destroy__ctor_m977C53D452AF2B6AF781BFD34D66A63F31F4643B (void);
// 0x000007C3 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_Destroy::Invoke(System.UInt64)
extern void _Destroy_Invoke_mF1B732002DD63D8B8E61D67919631350896C25F7 (void);
// 0x000007C4 System.IAsyncResult Valve.VR.IVRBlockQueue/_Destroy::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
extern void _Destroy_BeginInvoke_m679102D5859FCED96101BC453302C1FB1454C789 (void);
// 0x000007C5 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_Destroy::EndInvoke(System.IAsyncResult)
extern void _Destroy_EndInvoke_mBAA0A8718BB06F92FB7D03C4E2EFC32055E2FA98 (void);
// 0x000007C6 System.Void Valve.VR.IVRBlockQueue/_AcquireWriteOnlyBlock::.ctor(System.Object,System.IntPtr)
extern void _AcquireWriteOnlyBlock__ctor_m88B1DD049ABBB5C72CB832509945F12FA3FF6F02 (void);
// 0x000007C7 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_AcquireWriteOnlyBlock::Invoke(System.UInt64,System.UInt64&,System.IntPtr&)
extern void _AcquireWriteOnlyBlock_Invoke_m6820570F432DC106027064DF66D3FF695126805C (void);
// 0x000007C8 System.IAsyncResult Valve.VR.IVRBlockQueue/_AcquireWriteOnlyBlock::BeginInvoke(System.UInt64,System.UInt64&,System.IntPtr&,System.AsyncCallback,System.Object)
extern void _AcquireWriteOnlyBlock_BeginInvoke_m881763719148D8AF0370AEFCB02D643424F55D8C (void);
// 0x000007C9 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_AcquireWriteOnlyBlock::EndInvoke(System.UInt64&,System.IntPtr&,System.IAsyncResult)
extern void _AcquireWriteOnlyBlock_EndInvoke_m9EB3E75792C7C436627B1FBBB180B148AC7CF852 (void);
// 0x000007CA System.Void Valve.VR.IVRBlockQueue/_ReleaseWriteOnlyBlock::.ctor(System.Object,System.IntPtr)
extern void _ReleaseWriteOnlyBlock__ctor_m0B728AE5B9B2AD4E8F3F1ECED3791DBB34744AEF (void);
// 0x000007CB Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_ReleaseWriteOnlyBlock::Invoke(System.UInt64,System.UInt64)
extern void _ReleaseWriteOnlyBlock_Invoke_m876DA67610E0CA2DF0CF8F01E7C7A2183F8BE16C (void);
// 0x000007CC System.IAsyncResult Valve.VR.IVRBlockQueue/_ReleaseWriteOnlyBlock::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
extern void _ReleaseWriteOnlyBlock_BeginInvoke_m3B3AC3263F06DA7F15EAC3D39159B2C06AD0324B (void);
// 0x000007CD Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_ReleaseWriteOnlyBlock::EndInvoke(System.IAsyncResult)
extern void _ReleaseWriteOnlyBlock_EndInvoke_m91267FE5E26FBA023EED3BF6AEC15958B4CD6B5A (void);
// 0x000007CE System.Void Valve.VR.IVRBlockQueue/_WaitAndAcquireReadOnlyBlock::.ctor(System.Object,System.IntPtr)
extern void _WaitAndAcquireReadOnlyBlock__ctor_mC3FB3DA137275A806638289B3A9210950369F96B (void);
// 0x000007CF Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_WaitAndAcquireReadOnlyBlock::Invoke(System.UInt64,System.UInt64&,System.IntPtr&,Valve.VR.EBlockQueueReadType,System.UInt32)
extern void _WaitAndAcquireReadOnlyBlock_Invoke_mC936FED7449433AC2B10BB99517E372C7DBDC052 (void);
// 0x000007D0 System.IAsyncResult Valve.VR.IVRBlockQueue/_WaitAndAcquireReadOnlyBlock::BeginInvoke(System.UInt64,System.UInt64&,System.IntPtr&,Valve.VR.EBlockQueueReadType,System.UInt32,System.AsyncCallback,System.Object)
extern void _WaitAndAcquireReadOnlyBlock_BeginInvoke_m5E60520741EAAE6BE5EC17984D09CC59F24A4F2C (void);
// 0x000007D1 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_WaitAndAcquireReadOnlyBlock::EndInvoke(System.UInt64&,System.IntPtr&,System.IAsyncResult)
extern void _WaitAndAcquireReadOnlyBlock_EndInvoke_m7A573B5899FA70C8F18F919C561B57F00A0377F7 (void);
// 0x000007D2 System.Void Valve.VR.IVRBlockQueue/_AcquireReadOnlyBlock::.ctor(System.Object,System.IntPtr)
extern void _AcquireReadOnlyBlock__ctor_mD8CB3CEAD1756FBF3179E061CAD17F4CB31C0848 (void);
// 0x000007D3 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_AcquireReadOnlyBlock::Invoke(System.UInt64,System.UInt64&,System.IntPtr&,Valve.VR.EBlockQueueReadType)
extern void _AcquireReadOnlyBlock_Invoke_mDD155967A8827136E4C67BF25839733C4BBD33C4 (void);
// 0x000007D4 System.IAsyncResult Valve.VR.IVRBlockQueue/_AcquireReadOnlyBlock::BeginInvoke(System.UInt64,System.UInt64&,System.IntPtr&,Valve.VR.EBlockQueueReadType,System.AsyncCallback,System.Object)
extern void _AcquireReadOnlyBlock_BeginInvoke_mF960B466BF690083BB74EB6C9EF824C860A79666 (void);
// 0x000007D5 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_AcquireReadOnlyBlock::EndInvoke(System.UInt64&,System.IntPtr&,System.IAsyncResult)
extern void _AcquireReadOnlyBlock_EndInvoke_m5A56069EC7BE88C6D7801391EB194D62C54B5DA2 (void);
// 0x000007D6 System.Void Valve.VR.IVRBlockQueue/_ReleaseReadOnlyBlock::.ctor(System.Object,System.IntPtr)
extern void _ReleaseReadOnlyBlock__ctor_m14DB9A0F43A0B39066BDD58E9D5B3D618E0DDCC3 (void);
// 0x000007D7 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_ReleaseReadOnlyBlock::Invoke(System.UInt64,System.UInt64)
extern void _ReleaseReadOnlyBlock_Invoke_m00B7310B708FCDB552A4678807FFBEFD0DAF2DA0 (void);
// 0x000007D8 System.IAsyncResult Valve.VR.IVRBlockQueue/_ReleaseReadOnlyBlock::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
extern void _ReleaseReadOnlyBlock_BeginInvoke_mE62FE68739751EF2BAC8F1DB17014C03B6E2A4B6 (void);
// 0x000007D9 Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_ReleaseReadOnlyBlock::EndInvoke(System.IAsyncResult)
extern void _ReleaseReadOnlyBlock_EndInvoke_m0055A7113D74DE70C4364955EB10E0D4064FCC15 (void);
// 0x000007DA System.Void Valve.VR.IVRBlockQueue/_QueueHasReader::.ctor(System.Object,System.IntPtr)
extern void _QueueHasReader__ctor_mBD3BE28D8998C0A14A8E7CBA450BB64BDBEC2CD9 (void);
// 0x000007DB Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_QueueHasReader::Invoke(System.UInt64,System.Boolean&)
extern void _QueueHasReader_Invoke_m5BB814F06AD39C79FF5163450FE0D44EF6631F0A (void);
// 0x000007DC System.IAsyncResult Valve.VR.IVRBlockQueue/_QueueHasReader::BeginInvoke(System.UInt64,System.Boolean&,System.AsyncCallback,System.Object)
extern void _QueueHasReader_BeginInvoke_m0DA42232F7A3BFC625F737A0A228DD4A1832BB38 (void);
// 0x000007DD Valve.VR.EBlockQueueError Valve.VR.IVRBlockQueue/_QueueHasReader::EndInvoke(System.Boolean&,System.IAsyncResult)
extern void _QueueHasReader_EndInvoke_m9EBA774E2456D1B86B03A61F8BC68BFCC28D6BBF (void);
// 0x000007DE System.Void Valve.VR.CVRSystem/_PollNextEventPacked::.ctor(System.Object,System.IntPtr)
extern void _PollNextEventPacked__ctor_m5388FDEE71B6623A0BB321FAF5F9265115718E6D (void);
// 0x000007DF System.Boolean Valve.VR.CVRSystem/_PollNextEventPacked::Invoke(Valve.VR.VREvent_t_Packed&,System.UInt32)
extern void _PollNextEventPacked_Invoke_m41902BAA2C7CC610DA208EFF587F60F4583AACEE (void);
// 0x000007E0 System.IAsyncResult Valve.VR.CVRSystem/_PollNextEventPacked::BeginInvoke(Valve.VR.VREvent_t_Packed&,System.UInt32,System.AsyncCallback,System.Object)
extern void _PollNextEventPacked_BeginInvoke_m462D70A0A819136C8D95A7C26628E251DF67DDE1 (void);
// 0x000007E1 System.Boolean Valve.VR.CVRSystem/_PollNextEventPacked::EndInvoke(Valve.VR.VREvent_t_Packed&,System.IAsyncResult)
extern void _PollNextEventPacked_EndInvoke_mFCDD8C2BEEC0D898F0219B2A2CA74643FD1D0588 (void);
// 0x000007E2 System.Void Valve.VR.CVRSystem/_GetControllerStatePacked::.ctor(System.Object,System.IntPtr)
extern void _GetControllerStatePacked__ctor_m61E5BB3794DD7BFE1A8B0CE22E9A348D1ED7A0CA (void);
// 0x000007E3 System.Boolean Valve.VR.CVRSystem/_GetControllerStatePacked::Invoke(System.UInt32,Valve.VR.VRControllerState_t_Packed&,System.UInt32)
extern void _GetControllerStatePacked_Invoke_mE4EFB27F0E4412883AD456BB27C65A7FCB164715 (void);
// 0x000007E4 System.IAsyncResult Valve.VR.CVRSystem/_GetControllerStatePacked::BeginInvoke(System.UInt32,Valve.VR.VRControllerState_t_Packed&,System.UInt32,System.AsyncCallback,System.Object)
extern void _GetControllerStatePacked_BeginInvoke_mB76609CC0B69904F26554C7C59EFAF787511B2FB (void);
// 0x000007E5 System.Boolean Valve.VR.CVRSystem/_GetControllerStatePacked::EndInvoke(Valve.VR.VRControllerState_t_Packed&,System.IAsyncResult)
extern void _GetControllerStatePacked_EndInvoke_m8BEE1522159B0A52E03C688F388B501C5E46733E (void);
// 0x000007E6 System.Void Valve.VR.CVRSystem/_GetControllerStateWithPosePacked::.ctor(System.Object,System.IntPtr)
extern void _GetControllerStateWithPosePacked__ctor_mB1FB1414A3E594F51B8341693DDB0C59835535A3 (void);
// 0x000007E7 System.Boolean Valve.VR.CVRSystem/_GetControllerStateWithPosePacked::Invoke(Valve.VR.ETrackingUniverseOrigin,System.UInt32,Valve.VR.VRControllerState_t_Packed&,System.UInt32,Valve.VR.TrackedDevicePose_t&)
extern void _GetControllerStateWithPosePacked_Invoke_m9510049B12FC9039A9D535C25640AAA22150247F (void);
// 0x000007E8 System.IAsyncResult Valve.VR.CVRSystem/_GetControllerStateWithPosePacked::BeginInvoke(Valve.VR.ETrackingUniverseOrigin,System.UInt32,Valve.VR.VRControllerState_t_Packed&,System.UInt32,Valve.VR.TrackedDevicePose_t&,System.AsyncCallback,System.Object)
extern void _GetControllerStateWithPosePacked_BeginInvoke_m369A3719513AC682B54480648FF1F8DEDE298D14 (void);
// 0x000007E9 System.Boolean Valve.VR.CVRSystem/_GetControllerStateWithPosePacked::EndInvoke(Valve.VR.VRControllerState_t_Packed&,Valve.VR.TrackedDevicePose_t&,System.IAsyncResult)
extern void _GetControllerStateWithPosePacked_EndInvoke_mF392A1FBA330FE83F2D7B43E8CC3C32EBF546530 (void);
// 0x000007EA System.Void Valve.VR.CVROverlay/_PollNextOverlayEventPacked::.ctor(System.Object,System.IntPtr)
extern void _PollNextOverlayEventPacked__ctor_m5C0DF9669F1F9498DB9B925E0870686DAEEB8469 (void);
// 0x000007EB System.Boolean Valve.VR.CVROverlay/_PollNextOverlayEventPacked::Invoke(System.UInt64,Valve.VR.VREvent_t_Packed&,System.UInt32)
extern void _PollNextOverlayEventPacked_Invoke_mF1280708470924D4F0A285F59B75478ABAE15BFF (void);
// 0x000007EC System.IAsyncResult Valve.VR.CVROverlay/_PollNextOverlayEventPacked::BeginInvoke(System.UInt64,Valve.VR.VREvent_t_Packed&,System.UInt32,System.AsyncCallback,System.Object)
extern void _PollNextOverlayEventPacked_BeginInvoke_m387AACFE7C717AA6503401B20E810E76E9907E0B (void);
// 0x000007ED System.Boolean Valve.VR.CVROverlay/_PollNextOverlayEventPacked::EndInvoke(Valve.VR.VREvent_t_Packed&,System.IAsyncResult)
extern void _PollNextOverlayEventPacked_EndInvoke_m1965FC41950349FDBCD3BAF6FB5AB9DBBF9886AB (void);
// 0x000007EE System.Void Valve.VR.CVRRenderModels/_GetComponentStatePacked::.ctor(System.Object,System.IntPtr)
extern void _GetComponentStatePacked__ctor_m3A2906CBE48BA82D8C97A2AEEA9F03A360F5E422 (void);
// 0x000007EF System.Boolean Valve.VR.CVRRenderModels/_GetComponentStatePacked::Invoke(System.IntPtr,System.IntPtr,Valve.VR.VRControllerState_t_Packed&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&)
extern void _GetComponentStatePacked_Invoke_mF1F3D8A006C98B47EC295563F7B7C0F096BCC001 (void);
// 0x000007F0 System.IAsyncResult Valve.VR.CVRRenderModels/_GetComponentStatePacked::BeginInvoke(System.IntPtr,System.IntPtr,Valve.VR.VRControllerState_t_Packed&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&,System.AsyncCallback,System.Object)
extern void _GetComponentStatePacked_BeginInvoke_m3C6F9B94DE6ABEAE32D80E01D75FF9F27400F8B3 (void);
// 0x000007F1 System.Boolean Valve.VR.CVRRenderModels/_GetComponentStatePacked::EndInvoke(Valve.VR.VRControllerState_t_Packed&,Valve.VR.RenderModel_ControllerMode_State_t&,Valve.VR.RenderModel_ComponentState_t&,System.IAsyncResult)
extern void _GetComponentStatePacked_EndInvoke_mCECA74D6577B7AD3CF51D5BAA953E491A0AADEF6 (void);
// 0x000007F2 System.Void Valve.VR.OpenVR/COpenVRContext::.ctor()
extern void COpenVRContext__ctor_mAE6FF5C1FEE35171EA710E8BE85D97CC508FBCC2 (void);
// 0x000007F3 System.Void Valve.VR.OpenVR/COpenVRContext::Clear()
extern void COpenVRContext_Clear_mAA75E61322BB54DE09E55D93DDCC299EBB0AFEAE (void);
// 0x000007F4 System.Void Valve.VR.OpenVR/COpenVRContext::CheckClear()
extern void COpenVRContext_CheckClear_mF6FDDE5D427B6B9CFE819AB3F9C2A10628F6EFFD (void);
// 0x000007F5 Valve.VR.CVRSystem Valve.VR.OpenVR/COpenVRContext::VRSystem()
extern void COpenVRContext_VRSystem_mB4619D158055B007B163FC0D1BA21E1184BB16F1 (void);
// 0x000007F6 Valve.VR.CVRChaperone Valve.VR.OpenVR/COpenVRContext::VRChaperone()
extern void COpenVRContext_VRChaperone_m107CB19F0150730FFF0645C909798C0E3760C5F7 (void);
// 0x000007F7 Valve.VR.CVRChaperoneSetup Valve.VR.OpenVR/COpenVRContext::VRChaperoneSetup()
extern void COpenVRContext_VRChaperoneSetup_m567710C9F662957C4CDEE5B764AE31D36B60409C (void);
// 0x000007F8 Valve.VR.CVRCompositor Valve.VR.OpenVR/COpenVRContext::VRCompositor()
extern void COpenVRContext_VRCompositor_m252AB13756F766D867AE5EE3DF29656F8FA0E338 (void);
// 0x000007F9 Valve.VR.CVRHeadsetView Valve.VR.OpenVR/COpenVRContext::VRHeadsetView()
extern void COpenVRContext_VRHeadsetView_m61777207AF07FAF6974B4AA0C318313A5FF75C9F (void);
// 0x000007FA Valve.VR.CVROverlay Valve.VR.OpenVR/COpenVRContext::VROverlay()
extern void COpenVRContext_VROverlay_m03CD0CD76B41287048AE512B43D577A694783747 (void);
// 0x000007FB Valve.VR.CVROverlayView Valve.VR.OpenVR/COpenVRContext::VROverlayView()
extern void COpenVRContext_VROverlayView_m44E3F4C93E2498667A15939BFD22EF105EB7DA19 (void);
// 0x000007FC Valve.VR.CVRRenderModels Valve.VR.OpenVR/COpenVRContext::VRRenderModels()
extern void COpenVRContext_VRRenderModels_m32F7ABC4443C706F0BD8C1EF221C375F1BAA1F28 (void);
// 0x000007FD Valve.VR.CVRExtendedDisplay Valve.VR.OpenVR/COpenVRContext::VRExtendedDisplay()
extern void COpenVRContext_VRExtendedDisplay_mD9D70641C0CC16F50CC6138DCD1B32F60D6404A6 (void);
// 0x000007FE Valve.VR.CVRSettings Valve.VR.OpenVR/COpenVRContext::VRSettings()
extern void COpenVRContext_VRSettings_m18D2A195C0AE4A34915B7B1F78A2F1CB275BB47A (void);
// 0x000007FF Valve.VR.CVRApplications Valve.VR.OpenVR/COpenVRContext::VRApplications()
extern void COpenVRContext_VRApplications_m2DAAAAB0B5B7CB09CE0D93403A616248D4BD2564 (void);
// 0x00000800 Valve.VR.CVRScreenshots Valve.VR.OpenVR/COpenVRContext::VRScreenshots()
extern void COpenVRContext_VRScreenshots_mC5229B2FE196E2317F70B2E591748F8AF8787C59 (void);
// 0x00000801 Valve.VR.CVRTrackedCamera Valve.VR.OpenVR/COpenVRContext::VRTrackedCamera()
extern void COpenVRContext_VRTrackedCamera_m8AC4D92961C83146F20D7F086188D1808C1F8437 (void);
// 0x00000802 Valve.VR.CVRInput Valve.VR.OpenVR/COpenVRContext::VRInput()
extern void COpenVRContext_VRInput_m06BE9A5E6A44844B15183E21E8DF9EE7769C8DEE (void);
// 0x00000803 Valve.VR.CVRIOBuffer Valve.VR.OpenVR/COpenVRContext::VRIOBuffer()
extern void COpenVRContext_VRIOBuffer_mE8B20B7B0DD6F14C0FD2CEE333B95DE703F6AB0E (void);
// 0x00000804 Valve.VR.CVRSpatialAnchors Valve.VR.OpenVR/COpenVRContext::VRSpatialAnchors()
extern void COpenVRContext_VRSpatialAnchors_m5986011FB3C6181C8314B75EC2C79E4727FE5234 (void);
// 0x00000805 Valve.VR.CVRDebug Valve.VR.OpenVR/COpenVRContext::VRDebug()
extern void COpenVRContext_VRDebug_mAC423EFB25F62F4400B1B418F05CED32481BE066 (void);
// 0x00000806 Valve.VR.CVRNotifications Valve.VR.OpenVR/COpenVRContext::VRNotifications()
extern void COpenVRContext_VRNotifications_m6F5B960A66185CC2F1015FDB1E3EEFBA42687837 (void);
// 0x00000807 System.Void Unity.XR.OpenVR.OpenVRHelpers/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mC0F996DC37EE972A036E889BF681FCEAE1A8F2D6 (void);
// 0x00000808 System.Boolean Unity.XR.OpenVR.OpenVRHelpers/<>c__DisplayClass2_0::<GetType>b__2(<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>)
extern void U3CU3Ec__DisplayClass2_0_U3CGetTypeU3Eb__2_m3F560BB2E41400B886C2C0D7A8896B9C32D0251B (void);
// 0x00000809 System.Boolean Unity.XR.OpenVR.OpenVRHelpers/<>c__DisplayClass2_0::<GetType>b__6(<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>)
extern void U3CU3Ec__DisplayClass2_0_U3CGetTypeU3Eb__6_m2C67116B76BB1EDF7161CEED63F18496A9D72A37 (void);
// 0x0000080A System.Void Unity.XR.OpenVR.OpenVRHelpers/<>c::.cctor()
extern void U3CU3Ec__cctor_m7FBA52BA229506FCDB2FB2B3FF7F8262EF92E9F0 (void);
// 0x0000080B System.Void Unity.XR.OpenVR.OpenVRHelpers/<>c::.ctor()
extern void U3CU3Ec__ctor_m1802F4BB706D17B830BB77AA4006393B347C6C86 (void);
// 0x0000080C System.Collections.Generic.IEnumerable`1<System.Type> Unity.XR.OpenVR.OpenVRHelpers/<>c::<GetType>b__2_0(System.Reflection.Assembly)
extern void U3CU3Ec_U3CGetTypeU3Eb__2_0_m15C50ABA125BFAF21CD1C2E2D98FC6A20F0E0AF9 (void);
// 0x0000080D <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type> Unity.XR.OpenVR.OpenVRHelpers/<>c::<GetType>b__2_1(System.Reflection.Assembly,System.Type)
extern void U3CU3Ec_U3CGetTypeU3Eb__2_1_m351EF821B6EE14DE59039F718A4C7CF58963FEAF (void);
// 0x0000080E System.Type Unity.XR.OpenVR.OpenVRHelpers/<>c::<GetType>b__2_3(<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>)
extern void U3CU3Ec_U3CGetTypeU3Eb__2_3_mF9A0137D9EEF95B77CFE23D4056530CBAEE17AB3 (void);
// 0x0000080F System.Collections.Generic.IEnumerable`1<System.Type> Unity.XR.OpenVR.OpenVRHelpers/<>c::<GetType>b__2_4(System.Reflection.Assembly)
extern void U3CU3Ec_U3CGetTypeU3Eb__2_4_m711BCCCF8883285FB4CD5F02227233639BD0A31A (void);
// 0x00000810 <>f__AnonymousType0`2<System.Reflection.Assembly,System.Type> Unity.XR.OpenVR.OpenVRHelpers/<>c::<GetType>b__2_5(System.Reflection.Assembly,System.Type)
extern void U3CU3Ec_U3CGetTypeU3Eb__2_5_mD242F500201BF7901EA8E5EFC77F7A4C7A5A8B1C (void);
// 0x00000811 System.Type Unity.XR.OpenVR.OpenVRHelpers/<>c::<GetType>b__2_7(<>f__AnonymousType0`2<System.Reflection.Assembly,System.Type>)
extern void U3CU3Ec_U3CGetTypeU3Eb__2_7_m839FF0DB8287D3282C858E1ABBA18ECE5C48A6FA (void);
// 0x00000812 System.Void Unity.XR.OpenVR.OpenVRLoader/TickCallbackDelegate::.ctor(System.Object,System.IntPtr)
extern void TickCallbackDelegate__ctor_m5BD704929127D7E83D013813D2A8AD3C07D1A6A0 (void);
// 0x00000813 System.Void Unity.XR.OpenVR.OpenVRLoader/TickCallbackDelegate::Invoke(System.Int32)
extern void TickCallbackDelegate_Invoke_mE028E7832E774CD96345C3F9288D063BA90F53D5 (void);
// 0x00000814 System.IAsyncResult Unity.XR.OpenVR.OpenVRLoader/TickCallbackDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern void TickCallbackDelegate_BeginInvoke_m37281D1EC2E97F0E8236CB6D6CDD7D2F705EDF9D (void);
// 0x00000815 System.Void Unity.XR.OpenVR.OpenVRLoader/TickCallbackDelegate::EndInvoke(System.IAsyncResult)
extern void TickCallbackDelegate_EndInvoke_mCA746C22AF1B11A06416CAD1DE6CE5D2713B718B (void);
static Il2CppMethodPointer s_methodPointers[2069] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Utils_ToUtf8_mB7A3E057C4ED92BDDD22F53891CBCECF6EB4E9CA,
	Utils__ctor_m718053CFF69A0DBDC59BBA39543E48A586099C8F,
	Utils__cctor_m041ED7361FE730538999B026C01F8A3DB43C0459,
	CVRSystem__ctor_m817F25F8E29CEB31EAEAC4D613F71735D4AAA949,
	CVRSystem_GetRecommendedRenderTargetSize_mC5E15A34EDEB0279E20132E57B23CF323560A187,
	CVRSystem_GetProjectionMatrix_mB7B3A824DA75A0A65B601EE7A67AB7FD481C06F5,
	CVRSystem_GetProjectionRaw_mD908C7774AE702EE9477B88F58D167770F53176C,
	CVRSystem_ComputeDistortion_m5DCD40E3D24D289CA5EFC9A8BC6EE41D1D68CD02,
	CVRSystem_GetEyeToHeadTransform_m10D120B57AB846DA497E8B1C4F7E85069B4F36C7,
	CVRSystem_GetTimeSinceLastVsync_mCD036FF58EEC59EC78C6FF45D9909236B031EA63,
	CVRSystem_GetD3D9AdapterIndex_m3DF959E80399FB93978C340E4863D8FE074215A8,
	CVRSystem_GetDXGIOutputInfo_m10A6841483EC23E990C2AB3D892CCBA39DFB99D3,
	CVRSystem_GetOutputDevice_m6DADB5A6CEAB8E9B502DD795DE51EB2EA3703EDD,
	CVRSystem_IsDisplayOnDesktop_m71D4E42E84DC0C64F885A003FA10C0190F3D9AA3,
	CVRSystem_SetDisplayVisibility_m8A947F76CA57EA246D216134E63652B365A052A3,
	CVRSystem_GetDeviceToAbsoluteTrackingPose_mDFF0EB684B6A2EAB7CBE043219D1A1C5584DF963,
	CVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_m6E561D79A2C3333163D12C2CB88D549E1DB76B80,
	CVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose_m2B6E0B9E919268763FDC4C273BB27B20D59A74A4,
	CVRSystem_GetSortedTrackedDeviceIndicesOfClass_m379493B847C0981B52A3A3FD43CD0B43390F7625,
	CVRSystem_GetTrackedDeviceActivityLevel_mD827DA0051DE2D9C310C6C0FF0A08C27F814C161,
	CVRSystem_ApplyTransform_m0625B8B52B1485456479E03FA5158242CE9C8425,
	CVRSystem_GetTrackedDeviceIndexForControllerRole_m2CAB92347C7A88AA11D361668C26D3C68229B492,
	CVRSystem_GetControllerRoleForTrackedDeviceIndex_mFF0C26F6A3F1390347D60404C395933FDA3E4507,
	CVRSystem_GetTrackedDeviceClass_m3CB19F397A1AB529582A926008C34D01C74B88B0,
	CVRSystem_IsTrackedDeviceConnected_mB9095E5661CA97E23DC57417040FFFD653F1501B,
	CVRSystem_GetBoolTrackedDeviceProperty_m112152D9CABA8534A94296FFE52FEF266C2D5D90,
	CVRSystem_GetFloatTrackedDeviceProperty_m81B1B008BAE896DF6494B820C54A91A151747D93,
	CVRSystem_GetInt32TrackedDeviceProperty_mDD55E1AC64C65025DC163F29A8855BF36F022A9C,
	CVRSystem_GetUint64TrackedDeviceProperty_m80E3DC504F5D41339C9C91C7C705E984777B4329,
	CVRSystem_GetMatrix34TrackedDeviceProperty_mB2D260ABA1A381FB196F4DA07CB45AC462EC39F0,
	CVRSystem_GetArrayTrackedDeviceProperty_m4691DE76548A0B8913F6C8A5A62F32BA00D51BFA,
	CVRSystem_GetStringTrackedDeviceProperty_mAFD2CDC924AEBD1194DF3A6BB7A892E4FA903FFF,
	CVRSystem_GetPropErrorNameFromEnum_mEF7DBC9C70ECAAE22B5E6BDC25AD91282B5A0A67,
	CVRSystem_PollNextEvent_mACBB2908F5E2D38B09A2CE266B5FF577CFADFDDD,
	CVRSystem_PollNextEventWithPose_m4154693792D2FCE2A8A4977D9BE7671EAD4B9651,
	CVRSystem_GetEventTypeNameFromEnum_m149AEF9CB0D23333E57C5C4398ED3CAD4D2A1854,
	CVRSystem_GetHiddenAreaMesh_m237BFB1EEF5F5400F8F0AE6B3AF89CD43B3899E9,
	CVRSystem_GetControllerState_mDA2AFEF909256FFE8469E1E5621EF54C17385833,
	CVRSystem_GetControllerStateWithPose_mC90DC7645959FFEA1A4D377CA7EF61DF6DEE17C2,
	CVRSystem_TriggerHapticPulse_m20FA0E1F3C2B2D20E4B56394C703B390E7585A91,
	CVRSystem_GetButtonIdNameFromEnum_m91AFD0BA1B1D4924976665EBBC32B7B5EFF3C6D6,
	CVRSystem_GetControllerAxisTypeNameFromEnum_m9AF6D07221A049A8BE25E7198D18F63A50EEF82F,
	CVRSystem_IsInputAvailable_m349A68FFC17E94060449F034A962B3079F08950B,
	CVRSystem_IsSteamVRDrawingControllers_m7730BC71DC9758E492BCAF3C890A1BD508A4DA53,
	CVRSystem_ShouldApplicationPause_mEE91DC4DF7173A2D23C77D421998D0E54018691E,
	CVRSystem_ShouldApplicationReduceRenderingWork_m2C880F71D0B71A8396C35E3F2F12B7ABE787D72C,
	CVRSystem_PerformFirmwareUpdate_m516FBEF9F231E5E8468A01F06FDBE9D81A0D5C2B,
	CVRSystem_AcknowledgeQuit_Exiting_mBAC62F0BD43BFDDD3569B507DBEE6DCCD725CCBC,
	CVRSystem_GetAppContainerFilePaths_mAC7C0BC6F6190DBB4CEAB8A12BA3A94848B4A7D8,
	CVRSystem_GetRuntimeVersion_mFCA49FD5047848C823001C2CEEF99A972B72E51C,
	CVRExtendedDisplay__ctor_mA2490706DD8DBB2C17628DC186603B3F2E8F3FE2,
	CVRExtendedDisplay_GetWindowBounds_m5CDC85D83FA4E5C19EABB0F565ECE8A3F40F19D7,
	CVRExtendedDisplay_GetEyeOutputViewport_m891074BEE593F3E11615F31E903B408D53A00F17,
	CVRExtendedDisplay_GetDXGIOutputInfo_mAA6150FAE6654A9F27C48B18C215A65C6542DB63,
	CVRTrackedCamera__ctor_m26799891E484A6176B33FB34D55D08BF4D8F4BB5,
	CVRTrackedCamera_GetCameraErrorNameFromEnum_m4AE05163B3470C0803894B7CC114677FC87E7371,
	CVRTrackedCamera_HasCamera_mE40DB09F1DC3B431EBCFFD26272CC02CF27FB86B,
	CVRTrackedCamera_GetCameraFrameSize_m5A89A48AEDCD10FC892EAA4F0E13BBDCF43F332D,
	CVRTrackedCamera_GetCameraIntrinsics_m89D0A811486B76748CE42F30137C2B4CD5530B52,
	CVRTrackedCamera_GetCameraProjection_m050AFEA4E2B23C5A267454C1A6CAD5F554A76E75,
	CVRTrackedCamera_AcquireVideoStreamingService_m7BEF4E0A2EFDAE3B530BC1F9026D051BC217FF76,
	CVRTrackedCamera_ReleaseVideoStreamingService_m159BECBB58862A1C52CF427A667B661FF4B2E48D,
	CVRTrackedCamera_GetVideoStreamFrameBuffer_mDA47EBDB3C4E1DA1F45AA2014D0B33E6CBA3E9B2,
	CVRTrackedCamera_GetVideoStreamTextureSize_m3DB0F2F83DC4CA88E86DA0375B8388DF4BA285D3,
	CVRTrackedCamera_GetVideoStreamTextureD3D11_mD44A0BD6B4ACBBF5BEFA6AEF674EB8A51900565F,
	CVRTrackedCamera_GetVideoStreamTextureGL_m97B62F9240FE8C791BC6BB176CCBFA78C36D5E69,
	CVRTrackedCamera_ReleaseVideoStreamTextureGL_m99EB794C202E95ED6359E2EF1EFD6C637499F606,
	CVRTrackedCamera_SetCameraTrackingSpace_m97B55221120D0374220DF2AC1588902EBA13E965,
	CVRTrackedCamera_GetCameraTrackingSpace_mA71DB8593A9883FC7EEA7A8224D160F5E275AC03,
	CVRApplications__ctor_m389CAC7523E6DBBE7E5657900A83F0C478CF2CD0,
	CVRApplications_AddApplicationManifest_m1594BB64F447915EED09FD0567D8210CFD8B90F2,
	CVRApplications_RemoveApplicationManifest_mA0A6F84142194C5320480AC74F131933302B76D9,
	CVRApplications_IsApplicationInstalled_m143BD4A564C6D673EED37DCA2A222F774E293926,
	CVRApplications_GetApplicationCount_m79EA298FED914145D4E57F5266665428415842DF,
	CVRApplications_GetApplicationKeyByIndex_mE9FB46E26EF32EC18E30BC5184C7A1B0E212D41D,
	CVRApplications_GetApplicationKeyByProcessId_mFB7A9637E54FD00C488A4AF5C1E13433E439E450,
	CVRApplications_LaunchApplication_m0C6BC01A0CDF8E1C715A69605E93A2EE13660094,
	CVRApplications_LaunchTemplateApplication_m9F5DE774D8120458E06E0DF97901084ADA4E0ED3,
	CVRApplications_LaunchApplicationFromMimeType_m0DD5DEC3904DC556B256D69A9FBD1604F29FC011,
	CVRApplications_LaunchDashboardOverlay_m9F3EB4548EBBF6DCA5604944623C1391093FB288,
	CVRApplications_CancelApplicationLaunch_m867538E6CC408744BEFE85EFFD680A1848F2DE65,
	CVRApplications_IdentifyApplication_mE863CF3A8E4A363B1C1F4492EEDDA514C8B4C365,
	CVRApplications_GetApplicationProcessId_mF188609E7AAE80CD88AFC23554FD65E930FBFC5C,
	CVRApplications_GetApplicationsErrorNameFromEnum_m8C604AC7BF2D91963651E82ECB2E976D0706DA85,
	CVRApplications_GetApplicationPropertyString_mE69667524981E66189A467CA62E797DE885D1941,
	CVRApplications_GetApplicationPropertyBool_mA0EF751697CE79FED8C2C0EB7477DBF9E826CCF2,
	CVRApplications_GetApplicationPropertyUint64_m9763E1DF056100D601C4333DCBC2F4FD4731D33C,
	CVRApplications_SetApplicationAutoLaunch_mAFB501415FC8271711D5FC1AAA41A2A51C8805CF,
	CVRApplications_GetApplicationAutoLaunch_m0B5F2ADCCE2EF743BA23A885FF700D42A8BB2AE3,
	CVRApplications_SetDefaultApplicationForMimeType_m5BD3644F39BD97899E4449AD948C0EA254393A10,
	CVRApplications_GetDefaultApplicationForMimeType_mC1BA8BB2A94952F55AE011AA3D2B87B2C40889CE,
	CVRApplications_GetApplicationSupportedMimeTypes_m9E3AC458D80074113DB99FF36A211AC627E9B209,
	CVRApplications_GetApplicationsThatSupportMimeType_mC4FD1F2293634774380B68DF1BA8E0509CD366F2,
	CVRApplications_GetApplicationLaunchArguments_mE2927B6C482ECE35DA29056970A3BD0790C877F6,
	CVRApplications_GetStartingApplication_mADB17D2D1A61CEA148394B964FAE5B881E247C29,
	CVRApplications_GetSceneApplicationState_m4175C1A35A06176AF73328E9CDAB5412E44B830B,
	CVRApplications_PerformApplicationPrelaunchCheck_mD5ACDF21AFF1CA58112D648FAD49E6DB0B683073,
	CVRApplications_GetSceneApplicationStateNameFromEnum_m9F90E77631BA47C002CF48BE95A39A8BB11D5D08,
	CVRApplications_LaunchInternalProcess_m1A2A7D3AFB335A6E86F2E99599F16A8C282D5391,
	CVRApplications_GetCurrentSceneProcessId_m850EB4BD17C1FF3D17C3783B2CD0519B5E8F943F,
	CVRChaperone__ctor_mEB1D4CC6AA91E9F148C6B8CD00581F64A803CB9A,
	CVRChaperone_GetCalibrationState_mBFCD6C3A8068FC3FBDC9EB0E468C49F92BA33314,
	CVRChaperone_GetPlayAreaSize_mC7D9F992321A9A8EDFB39D20F77BDECC955CFC7F,
	CVRChaperone_GetPlayAreaRect_m693E15F42185A413880F2EB18D7688FA0E2BE423,
	CVRChaperone_ReloadInfo_m12D74CD795F2D57F4B98F5AC250726B6DCADACFB,
	CVRChaperone_SetSceneColor_mE8DE3212758F1C0AF23032A426FFB3637924583E,
	CVRChaperone_GetBoundsColor_m80AB40C3F2CD0BC7D3976D9BC585EC3E4E2659E3,
	CVRChaperone_AreBoundsVisible_m28E079F0C15F08941ED58C33EB6B6E980967B240,
	CVRChaperone_ForceBoundsVisible_mB14ADC3AF5368712018789227ABCC36331CCD971,
	CVRChaperone_ResetZeroPose_mFF1DC3CECF6FB7DE7B4FDFD3957E8262633ECEB9,
	CVRChaperoneSetup__ctor_m812EEE54DF50320D260F397D3C39575332DE5DAF,
	CVRChaperoneSetup_CommitWorkingCopy_mD79F42CF913B0D308A6401369C41117E7386C3CA,
	CVRChaperoneSetup_RevertWorkingCopy_mB53D55C8B48BDDA3097EA8366A73251D4820C516,
	CVRChaperoneSetup_GetWorkingPlayAreaSize_mE825DAD3AC8B327774C43406C6CB5D5541BD948B,
	CVRChaperoneSetup_GetWorkingPlayAreaRect_mC7B7AE179C2D773BA9AD812A0A568C3D3D98F9E3,
	CVRChaperoneSetup_GetWorkingCollisionBoundsInfo_m0FC000AC61652E21587B7F120CB04D079E0E13C8,
	CVRChaperoneSetup_GetLiveCollisionBoundsInfo_mDF1DEF4E271E532A2F2ABA580FCC35822604D193,
	CVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose_m1E850681C417EC8AF204B90CD6417C3FCC343EA9,
	CVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose_m8F3BC9A85C6735E9C3033DF21F0AC38E12EDAB01,
	CVRChaperoneSetup_SetWorkingPlayAreaSize_mBE48414083E8638E05304C44929EC816449A9781,
	CVRChaperoneSetup_SetWorkingCollisionBoundsInfo_mCD38A8EE386AA7C62554768C32311A08BBF55776,
	CVRChaperoneSetup_SetWorkingPerimeter_m52359BB6972DEF564B0EF746CCCF33861A4D392F,
	CVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose_m44F07206D4A6D034A041480D7B5AF8864C9E1D52,
	CVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose_mE0FE0D83112110422D64AC17F67096798E923A21,
	CVRChaperoneSetup_ReloadFromDisk_mFD3022FFB69FA3AB63B1BEF6D9E9882802744792,
	CVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose_mD28C4CA51D83268CDF7F57D714B6C69E587D886A,
	CVRChaperoneSetup_ExportLiveToBuffer_mEC43026C688937DCD78872CF91B339AD0D212E4F,
	CVRChaperoneSetup_ImportFromBufferToWorking_m2E12EC526FC50CD9E6DE37E1EC4A7C4073C6D521,
	CVRChaperoneSetup_ShowWorkingSetPreview_m33A9D2D5769E49CB266465E9890F3D50CF12B474,
	CVRChaperoneSetup_HideWorkingSetPreview_m6A4042BDDB4DE57EFB8D96155CC5AA303C8D22F0,
	CVRChaperoneSetup_RoomSetupStarting_m57DDA74B84F62E477613CA4AC946FB3C37A0E49E,
	CVRCompositor__ctor_m5FAC08516E13A3DF1652ABFF161290B52CC5ED22,
	CVRCompositor_SetTrackingSpace_m25BF07407A92852D787ABA6B6380991C92BD0094,
	CVRCompositor_GetTrackingSpace_mD8CE4300448DA53C5F6EC1D9F6D96271B2B93616,
	CVRCompositor_WaitGetPoses_mE138DF8727DB117BDC9DD4A1D9ACAE7434918BFB,
	CVRCompositor_GetLastPoses_m236D033E49CCFD67C47FC0A8679B70DCC215D720,
	CVRCompositor_GetLastPoseForTrackedDeviceIndex_mBB22EE8278EFA477FC440E25372A250CDB79B72A,
	CVRCompositor_Submit_mBC62EB4B0B73C303B7F4203F86E7FC1254042E78,
	CVRCompositor_ClearLastSubmittedFrame_mB1433A44512DE7D6878CC86DAEF11DDFA3F0E661,
	CVRCompositor_PostPresentHandoff_m538D23EF57D509C139CB28EB768C940A84D323B8,
	CVRCompositor_GetFrameTiming_m15D68C6643EB8763F9EB3784C3634467DEE86998,
	CVRCompositor_GetFrameTimings_m9A8F20652E166877D35DC6B597273B2F46709426,
	CVRCompositor_GetFrameTimeRemaining_m6DF252F25C2BF0057798A6CEEDD95AB0F163772F,
	CVRCompositor_GetCumulativeStats_m7D14CAD741DF1FB10C3E4904085FE88C54F3D82E,
	CVRCompositor_FadeToColor_mAE71DC4814F58340CB6D4E2EABF1D54A295065CD,
	CVRCompositor_GetCurrentFadeColor_mD12C560842DD8BAC4B5BEEA0D2348DCA3BF4EB6B,
	CVRCompositor_FadeGrid_m8032D7C24FD9CC44D24357F2F0646FE8AC4DCDFF,
	CVRCompositor_GetCurrentGridAlpha_m8B1493BA54B71F170A65249BC31EF7F3F3012829,
	CVRCompositor_SetSkyboxOverride_m9D807C73DDE075749E495FCC8652E568316EB150,
	CVRCompositor_ClearSkyboxOverride_mA2439568D8F2896FF68552C6B1216F16553DBAD7,
	CVRCompositor_CompositorBringToFront_m318DA65C9699E5829D2BCDCCF7105DBA2A93484C,
	CVRCompositor_CompositorGoToBack_mA4DDDCE55C5BF25BEA99AF5945074F66BBF76CD3,
	CVRCompositor_CompositorQuit_m077BBB14665CF9E7F1E9C2A2754474F5C287D80E,
	CVRCompositor_IsFullscreen_mB6E79D65D7627B00FE98153F2C586A724049D5D8,
	CVRCompositor_GetCurrentSceneFocusProcess_m9A2AD7C597A579C1C731A12A26CF7DEF4F2016B1,
	CVRCompositor_GetLastFrameRenderer_mCAB3291B261C8C70D3AE08AA78F833EB85A493F2,
	CVRCompositor_CanRenderScene_m82ACFAE5E2BBB77E19321F862EAB25D081782F70,
	CVRCompositor_ShowMirrorWindow_m82223EC06F9EC58B30E5C6D9CD0E2E0940199811,
	CVRCompositor_HideMirrorWindow_m06DBCBBCB7D3F92BD05BEA701FF28A86C67C4FAC,
	CVRCompositor_IsMirrorWindowVisible_mECF927E53CA09B35759BA44B687533B3773D6262,
	CVRCompositor_CompositorDumpImages_mDAF653F6285081389210ADC8FA3377A39594B96B,
	CVRCompositor_ShouldAppRenderWithLowResources_m5890C0E88BA68B159653787233E8D6F334012F7C,
	CVRCompositor_ForceInterleavedReprojectionOn_mF1CBD22208E1CCECD503C32F51900465E0261BC2,
	CVRCompositor_ForceReconnectProcess_m286242E575E53170BFC8385C6DE3899D69A3E3FF,
	CVRCompositor_SuspendRendering_mBD54CE4E3171186B72D8C9B79358BFE989979F9D,
	CVRCompositor_GetMirrorTextureD3D11_mE89AF0C4C9722B8E3C358A99BFE8A926EED1202D,
	CVRCompositor_ReleaseMirrorTextureD3D11_m170B2E7218D97789110D29CB0E270BA586A8004A,
	CVRCompositor_GetMirrorTextureGL_m0E73E0F9E40A437A0A5613E8E2C718E74CC048F0,
	CVRCompositor_ReleaseSharedGLTexture_mAECE7405168EF2196A98541A7B934C0F5BF87E9E,
	CVRCompositor_LockGLSharedTextureForAccess_mFE845EDC67C72F69881D5AFA0F843E05CFAB6088,
	CVRCompositor_UnlockGLSharedTextureForAccess_m20792B101F00238F821217713D24FF3165E58655,
	CVRCompositor_GetVulkanInstanceExtensionsRequired_mB1E2457B294C4A1638F5C9BC9956066EB3C6A62D,
	CVRCompositor_GetVulkanDeviceExtensionsRequired_m05A0C032C98356850A4DFB35D4EFB5DB13175FE2,
	CVRCompositor_SetExplicitTimingMode_mA30C1A9F5403D9E5E92C508A652DEF246B33D581,
	CVRCompositor_SubmitExplicitTimingData_m9B49D53AB5529D671CCBD22F7121028894104797,
	CVRCompositor_IsMotionSmoothingEnabled_m35005630B6AB8030B6D4EE795B593A16D3050BFD,
	CVRCompositor_IsMotionSmoothingSupported_mC249E8ACAF3E28E3791E2532ED2EBC8CB1F81E2D,
	CVRCompositor_IsCurrentSceneFocusAppLoading_m6573359B116CD4BC480E82ED390DAA0D3EF7E570,
	CVRCompositor_SetStageOverride_Async_m299121512C78B96D76072B2049A882FB9C9D863C,
	CVRCompositor_ClearStageOverride_mCDF7815144E75B8633D5200152F43C7156992430,
	CVRCompositor_GetCompositorBenchmarkResults_m7971C47D8427444A1A7495C4CBBCAA17F9182764,
	CVRCompositor_GetLastPosePredictionIDs_mC16CE21AB155F2EE0052BCC5FB54CC0C9C60F8D6,
	CVRCompositor_GetPosesForFrame_m9C2B0A260F6FDD94B3F5361AC1E4ABD893C66B33,
	CVROverlay__ctor_mB8515F79CC7DD8857A1266DABBDD0E500C2353E6,
	CVROverlay_FindOverlay_m599A06CAA1A2D293BBAC6208331422FD6B93CDAE,
	CVROverlay_CreateOverlay_mD7168DF776EA620DF851807317EC68666522D5F4,
	CVROverlay_DestroyOverlay_m389DB18EEA9B98697A092C713446D70D74C93086,
	CVROverlay_GetOverlayKey_m1C563EB8323297EFF6A91B0AB6FB35FD9C91CDB7,
	CVROverlay_GetOverlayName_mC0669B135F5B836F81E52DFF1981E44B1A983132,
	CVROverlay_SetOverlayName_m7E96182324A17193E37C22C3F3BE42C5A33989C5,
	CVROverlay_GetOverlayImageData_m0140BC6CA60F7ED597575DAA91B685CF4EB747E3,
	CVROverlay_GetOverlayErrorNameFromEnum_m21906D1EC1D6400B4844EBAF0AF7CE05596F1C83,
	CVROverlay_SetOverlayRenderingPid_mBB375CF912293B865C8F5E590E0DCF4EBAC8B50C,
	CVROverlay_GetOverlayRenderingPid_m5AEED2F79EC33D41F86CEE647248266B0A758CF0,
	CVROverlay_SetOverlayFlag_mE0B94F195931B9EDA23DF4DED409477FA752814D,
	CVROverlay_GetOverlayFlag_m3E1512C427DCD4447604A8E9DA73E032F813BD79,
	CVROverlay_GetOverlayFlags_mD4B8A6841317A8F4FBB5D997212E9CA02DF1BA89,
	CVROverlay_SetOverlayColor_m1A1232BAB25B32AEA5D9806ED94D1AAB9E1F43B3,
	CVROverlay_GetOverlayColor_m69E936A482F37C34B4C34D9C48AB7B09A3B49EC8,
	CVROverlay_SetOverlayAlpha_mBE57D6CECA6383F767F113379BE868BE04AE34A3,
	CVROverlay_GetOverlayAlpha_mC44A9BAEC47829EE09214EF7EBA8BA47A9810973,
	CVROverlay_SetOverlayTexelAspect_m227088E6B65DB26954528A97C9449622C5F99D3D,
	CVROverlay_GetOverlayTexelAspect_m1B1956BDB726F01DDFBC378315B3A4FE379A5E26,
	CVROverlay_SetOverlaySortOrder_mE0C78FD436376568C07B3A81A0639F38D73D599C,
	CVROverlay_GetOverlaySortOrder_mD5FB25ABEDDE6AE9C007AE72297AB463FB62C391,
	CVROverlay_SetOverlayWidthInMeters_m277C6E2B8E840BE4A30F8454B55E0D685525995C,
	CVROverlay_GetOverlayWidthInMeters_m0379BBCCDCC95EF2E38C454D59D090D0CCA91285,
	CVROverlay_SetOverlayCurvature_m82C99F8A29ED2DCAD6B3680F85DC625B93C93EAA,
	CVROverlay_GetOverlayCurvature_m836DFD6CF1419BDE3D2F6571B06345D91C8FD7A6,
	CVROverlay_SetOverlayTextureColorSpace_m042FF1D91CA5FE02CC662DB2CD9985BDBD877A95,
	CVROverlay_GetOverlayTextureColorSpace_m76B914A05A378F501C7F76DA34076EF214051568,
	CVROverlay_SetOverlayTextureBounds_m0CCCCE8FBFCDCB8892CB0B90AEAB1EB348F5877A,
	CVROverlay_GetOverlayTextureBounds_m8F7015E29A7E7CF7AA0652F82E68983BBAD219CC,
	CVROverlay_GetOverlayTransformType_m0A8EFAE63852C491FA28CA6C5A8699A0FB4BB622,
	CVROverlay_SetOverlayTransformAbsolute_m0EA37E53D61919D9DF1C3E8497B6576DE7FBA284,
	CVROverlay_GetOverlayTransformAbsolute_mE3663E2BBF6E365A2CD9C6F8A9247A9F73447D1B,
	CVROverlay_SetOverlayTransformTrackedDeviceRelative_m045921BE872D411D811B84CA5DA1E0244544AD5F,
	CVROverlay_GetOverlayTransformTrackedDeviceRelative_mE40DC9E8F5AFE6425316FC7C74805186D2F092DE,
	CVROverlay_SetOverlayTransformTrackedDeviceComponent_mC96AA19E738EA4AFF3B389188D17865C76291858,
	CVROverlay_GetOverlayTransformTrackedDeviceComponent_mF071C30EA377D463A0CFBEFB67F1BD007A255B81,
	CVROverlay_GetOverlayTransformOverlayRelative_m6F27B2D8A47BE4C9D0AAE5CC67D8A3DCEC8D9250,
	CVROverlay_SetOverlayTransformOverlayRelative_mC1D1B22B7ECB36756C71EB5467C777EF21AFD8E9,
	CVROverlay_SetOverlayTransformCursor_mE10005C56C4B3C28A31877755CB40AABE43FEC19,
	CVROverlay_GetOverlayTransformCursor_m7D960853FFF4014B4834A18A46E8F576BF3F5ABA,
	CVROverlay_ShowOverlay_m6B3A7FAD0BDCDFBCB81C4677F7D5B81EA1B800D4,
	CVROverlay_HideOverlay_m7856184C6459F2E9FCB300F59FEC8C9AE24E961D,
	CVROverlay_IsOverlayVisible_mC4F787C6B0573C91753603E3FE242B7700964317,
	CVROverlay_GetTransformForOverlayCoordinates_mE1AC6F037D921587A6844D25522D43F55917053D,
	CVROverlay_PollNextOverlayEvent_mE18E3950A091A18ACF1FF6FDDE4ED467FE92570C,
	CVROverlay_GetOverlayInputMethod_m029ECA7AE8D685749C05361E2BE0661D88581466,
	CVROverlay_SetOverlayInputMethod_mDA08818A15930E4070AD70796D4F0F9B1114636D,
	CVROverlay_GetOverlayMouseScale_m767F573EEB2BFF05F09C204338DDDA03F18EF057,
	CVROverlay_SetOverlayMouseScale_m0A4531B46046B7E4BEE87D0D52AF8084B8DF0CF5,
	CVROverlay_ComputeOverlayIntersection_m4D0A35849B5A9BDC1F0B8BECBBC1A492F6EFB50E,
	CVROverlay_IsHoverTargetOverlay_m8B36952118842CB0E2ABA407EEF989C88DD54973,
	CVROverlay_SetOverlayIntersectionMask_m4A3F610FC421184D22E73CDFE5B3146145816465,
	CVROverlay_TriggerLaserMouseHapticVibration_m280283981CE1CEE44613D87F166FD45FB62CFB3C,
	CVROverlay_SetOverlayCursor_mC679E24824D8980AE8A6EA4D2F7F6B34F91BF1B4,
	CVROverlay_SetOverlayCursorPositionOverride_m3B36C3B0972BFB14C7DF38CF65AA9D553E7A0F59,
	CVROverlay_ClearOverlayCursorPositionOverride_mE7482F451E5E82FB5BEAE47A839F2199C2371A3A,
	CVROverlay_SetOverlayTexture_mB2FCE055DA5DD2D0788A39DEDC34DB0089214868,
	CVROverlay_ClearOverlayTexture_m5463EAC9697D3A2D1586F88BD5C1DE099084A67F,
	CVROverlay_SetOverlayRaw_mB441B8369968D838EA3DB66666EF843AFF6B0692,
	CVROverlay_SetOverlayFromFile_mC0753B4BB713CE3A544B334DB1A8617205B22F79,
	CVROverlay_GetOverlayTexture_m530C4F246AC094776BEDB1B70B9275B9813A9A0D,
	CVROverlay_ReleaseNativeOverlayHandle_mED794FB172081EBD1C249A47143636732EE8E4B3,
	CVROverlay_GetOverlayTextureSize_mC83C8EE7EBDC0AE9853CD5777B3F1ED50CA46B78,
	CVROverlay_CreateDashboardOverlay_mCE1773564493A56669595E6B34105CEA950A6E19,
	CVROverlay_IsDashboardVisible_m7643ED1DAE455ED7E48EBA3B50CF65E92819569F,
	CVROverlay_IsActiveDashboardOverlay_mF7ABCA4041217A36824016EF191259ACF57BFF8E,
	CVROverlay_SetDashboardOverlaySceneProcess_mB47A2F7095BEE57A0682E90FF64B2BF4B16E718E,
	CVROverlay_GetDashboardOverlaySceneProcess_m0DBF8353997BB642A2B78AB087F646ED2B94B468,
	CVROverlay_ShowDashboard_mA217892207CB7D8480BE6B46B06F3ED985401CB4,
	CVROverlay_GetPrimaryDashboardDevice_m6C8D6406D49FE91950F06F3848C4BEEE8848AF0F,
	CVROverlay_ShowKeyboard_mA80259F413D3728D47CA54070007EEDFA3EE1B09,
	CVROverlay_ShowKeyboardForOverlay_m5ADB581AD262ED53C971B2EE13DF338BB40EE6D3,
	CVROverlay_GetKeyboardText_mC54026486AAE5AC69E5BEE0485772CA11D2BE387,
	CVROverlay_HideKeyboard_m07165FBC0BB505D23A9A3C49D49AB11E97CA2668,
	CVROverlay_SetKeyboardTransformAbsolute_mFA58505AFE5601F6C1EBC4707DC60C00E10D5F33,
	CVROverlay_SetKeyboardPositionForOverlay_m7E5F9515664483B7B0113A57BA1D1A900FD1C5FC,
	CVROverlay_ShowMessageOverlay_mF56684442812CA8E0AF24BF17D3D0040BF098810,
	CVROverlay_CloseMessageOverlay_mEA874A6510F6818114D54879F9AF7B8B0674761F,
	CVROverlayView__ctor_mEC9248E7B0B0BEB8C9C266DCFCC8844E75D41BC7,
	CVROverlayView_AcquireOverlayView_m0BD1DF310B3E67D2714D343B5747E4296F2201A6,
	CVROverlayView_ReleaseOverlayView_mFE71C67034CEC7D6E99F77116CC44B3A599099A6,
	CVROverlayView_PostOverlayEvent_m944280A6D5827CA262DAE55C3F42C1064922522F,
	CVROverlayView_IsViewingPermitted_mA248F8AD358923A144DB3E7C6A8ABCA495AF6B4F,
	CVRHeadsetView__ctor_mDFDAB3B81F4BB8AA217444C9C608ADAB40AF21F4,
	CVRHeadsetView_SetHeadsetViewSize_m960814E269C05BCA693FB46528C870B6DF1A463D,
	CVRHeadsetView_GetHeadsetViewSize_mB017717682A1E1A090415CFDD4845B394C43D44B,
	CVRHeadsetView_SetHeadsetViewMode_mA92549FF870B41900BFFA072A3735DA968843246,
	CVRHeadsetView_GetHeadsetViewMode_m677735847C2F2B54F951E05CA943B5572F733D6D,
	CVRHeadsetView_SetHeadsetViewCropped_mA17F879A4A03E41B56864A3D8005DBA899D49D29,
	CVRHeadsetView_GetHeadsetViewCropped_mB4B79F9CF338852F351E2F523120A2A6A4B9A6C5,
	CVRHeadsetView_GetHeadsetViewAspectRatio_m1E8B177B088E9349F99AD6124731F21D25EB2E62,
	CVRHeadsetView_SetHeadsetViewBlendRange_m9A4F0493F73B74FBE269A5E05F921C6DA1AD8B44,
	CVRHeadsetView_GetHeadsetViewBlendRange_mE7DA408DE6B728EB0FC6B839D3AD158737DBECD7,
	CVRRenderModels__ctor_m3D6568AC7CA1F8606254DC4DA6005B7A45B6F332,
	CVRRenderModels_LoadRenderModel_Async_mE1F55D75591AFC5296515CEDC40E1F821D6DA5A6,
	CVRRenderModels_FreeRenderModel_m775D110B2691774D7D18415E6C8606206BAC2C89,
	CVRRenderModels_LoadTexture_Async_mCCBC33D113F7FD978AD7B44CBBA2393EADC23720,
	CVRRenderModels_FreeTexture_mEC3C83692F380BAD625BD81C45A712B11E9B4BD8,
	CVRRenderModels_LoadTextureD3D11_Async_mB2271BCB4BEF69BEB88EEDC55563A52222FDCBFD,
	CVRRenderModels_LoadIntoTextureD3D11_Async_m8A7DA48CC24F189F25A61743FCFFF50713FD55AC,
	CVRRenderModels_FreeTextureD3D11_mFBF04F21EA2BB71FF3754EA315252189454B7FCF,
	CVRRenderModels_GetRenderModelName_mF2B9D8068BABCE4DC964C7FD84D1C6E1A2B53224,
	CVRRenderModels_GetRenderModelCount_m2D2724EB27D3C652C7747CCE8F2F57DA24A46F06,
	CVRRenderModels_GetComponentCount_m51350209B57D73FF1E32C12FA2320EC03627582A,
	CVRRenderModels_GetComponentName_m39B0DF37F6A64746FEDFD197052A56A954E00589,
	CVRRenderModels_GetComponentButtonMask_m2C2BB4BF2B03185A0404BDC590506D37E0695E09,
	CVRRenderModels_GetComponentRenderModelName_m3BA521E4E962F5F57A2775FF6140F05E845FCACF,
	CVRRenderModels_GetComponentStateForDevicePath_mDB8BB953501975DBF94EFF30C42FF3E25F2DED75,
	CVRRenderModels_GetComponentState_mAD3DF94786D0927D521EAB9855E7FAF3629BCC87,
	CVRRenderModels_RenderModelHasComponent_m6B060981682F2362754C9AB8FD0A342BEA1DC71E,
	CVRRenderModels_GetRenderModelThumbnailURL_m75A40908405536D10D6742551A704CB61F94CDD2,
	CVRRenderModels_GetRenderModelOriginalPath_m45D846806A208C464137C0516F47F81C101DF2EB,
	CVRRenderModels_GetRenderModelErrorNameFromEnum_m8EF80179A05C6E9776AA5E75DD877119874652EA,
	CVRNotifications__ctor_m986A8FFB99902903663BFA1F4B42595B8D2B3AD9,
	CVRNotifications_CreateNotification_m34CB559361E0C222D75C74218D8DD8F67F8EDC76,
	CVRNotifications_RemoveNotification_m7400324BEACB14343B5665B8ACA79415BE00F2E0,
	CVRSettings__ctor_mE8D902E5648014112B2CACD5CA211953D1520FC6,
	CVRSettings_GetSettingsErrorNameFromEnum_m769A32F7EE33255DD46FB3F4F163241A47271C55,
	CVRSettings_SetBool_mF313E403A2FCA386985E24FBEA26A2B4657BCA5B,
	CVRSettings_SetInt32_m1CC90282773B5EB4094B23E80210718EA4EDF3B9,
	CVRSettings_SetFloat_m43DBD665E382C39DD3CA29EB88D1E17D2065DCAD,
	CVRSettings_SetString_mC96E82952A136F1103EBE64EC48EBE18A71FFA45,
	CVRSettings_GetBool_m5AF6CA59E8F9C14B6B7D9002BAB7B1B874E003F3,
	CVRSettings_GetInt32_m9C78C34611E2391F5666F77474309D398E7CDE96,
	CVRSettings_GetFloat_m9FEF2DEC942AB29BA99DDAFD426538BB7A5F1427,
	CVRSettings_GetString_m2C2BA0785D4EE74A0A530435D6E41CD36B4A5695,
	CVRSettings_RemoveSection_m0F61E10C9D3052A3CA6DBC09B0ADF7A4B15A6D40,
	CVRSettings_RemoveKeyInSection_mD08DE854E70CEC27E0B7ECB42789EA06DEE64901,
	CVRScreenshots__ctor_mF7CA6E2049FE9E8F9EC2C0547EA9686F60C7CF00,
	CVRScreenshots_RequestScreenshot_mDD3B44BD2ED29D2FE3BEB9B742332305147FAB01,
	CVRScreenshots_HookScreenshot_m3BD811B1426A812F027AE3F40DB8036965572DDC,
	CVRScreenshots_GetScreenshotPropertyType_mA58DD36582673515ADEEE7C49BBE7F192BB68E0C,
	CVRScreenshots_GetScreenshotPropertyFilename_m78EBC59A770064BAA068B688AB47771056DE8E04,
	CVRScreenshots_UpdateScreenshotProgress_m483AC53A33B8A6C05ED621CC56205E011F6BCB2E,
	CVRScreenshots_TakeStereoScreenshot_m855CB237762A8CF886FF2929B5983DB4F41B64B7,
	CVRScreenshots_SubmitScreenshot_mD8A3CFDE40FA5C2268708ADC120EFFCFF6E86A49,
	CVRResources__ctor_m25462F525F953100C8E64DAD763C3CE0A9A608D6,
	CVRResources_LoadSharedResource_m0812E3C6D9F0139C29B3D2CB1EC2C695D42599D9,
	CVRResources_GetResourceFullPath_m3B66E36960277449974EC3F2BF47033A8FFD2A86,
	CVRDriverManager__ctor_mA5FFFDA542D382F7542F130CC0058E0448242C0C,
	CVRDriverManager_GetDriverCount_mD2C146A78F7DAEF3ED75951F3EF27933463803EA,
	CVRDriverManager_GetDriverName_m722A6EBDF488DE28852EA198806FE0A17A83A635,
	CVRDriverManager_GetDriverHandle_m002B45B4D019C1EF80EA851FEA5D068D3F38B224,
	CVRDriverManager_IsEnabled_m56E6462D51454FE004ECD61DA5979642C40A8659,
	CVRInput__ctor_mA455C821968662A0278C196EB0479885D2748455,
	CVRInput_SetActionManifestPath_mC1A5D1EB13EA40C1565F04F74C2F484974C18B91,
	CVRInput_GetActionSetHandle_m5AC9D624F35B6FC4028574D08EC40B7D2E8C0C5E,
	CVRInput_GetActionHandle_mF3DB37B5ED5E47F0E024CB4CDA9CC952CFFABF36,
	CVRInput_GetInputSourceHandle_mB6B9CCCA8DA0B9D4F9DA8510E93576D850D9B192,
	CVRInput_UpdateActionState_mDBAA09FD7D60951BC6FA62ACACFE4E57CFAB2C7B,
	CVRInput_GetDigitalActionData_m28C971587E9BF5AE9D507A5DBB11C78C5A3181E3,
	CVRInput_GetAnalogActionData_m3FEB4E2D5AE96E97C2D73EEED945E547AE36741A,
	CVRInput_GetPoseActionDataRelativeToNow_mBAEDD17710ECA793901F7A42DB84C84B5C3D5841,
	CVRInput_GetPoseActionDataForNextFrame_m2EA9535E25E060B4C24DB4947ABC493F1B0D0152,
	CVRInput_GetSkeletalActionData_mD08DD4FDBE1F6CCF87ACBB5DDC9B3C7C5FEA2BD9,
	CVRInput_GetDominantHand_m9C0B4EEF21C0B22EE21BAC920C3C527B3CD806E6,
	CVRInput_SetDominantHand_mC9C6ADB1AAE6214A7C332E47A7A609E6D5115B2F,
	CVRInput_GetBoneCount_m8EB7B9FA9695F9D7D48ACE6C9FEBC27B0D0D6F7B,
	CVRInput_GetBoneHierarchy_mBDD91998A6017809EFA6B91E8F6DC726974D2E0D,
	CVRInput_GetBoneName_mBAE82D02F085E0B3DDCE21EA4BDCEB94A1A72297,
	CVRInput_GetSkeletalReferenceTransforms_m39DC7D8210062B9512F7CECF5F60E361C1D729AF,
	CVRInput_GetSkeletalTrackingLevel_m47B8F2D722E0599DCFEA1E815F878C0A9439F6CC,
	CVRInput_GetSkeletalBoneData_m3008E4A3FBB4A3C03948F1EC5C54FC314399F112,
	CVRInput_GetSkeletalSummaryData_mF6F87A491E5F5A4C029BB33E77BCE55BC326D44C,
	CVRInput_GetSkeletalBoneDataCompressed_mBB581771AD4927F6CD74B8FCB4441B5FD75467F7,
	CVRInput_DecompressSkeletalBoneData_m1DE2687A22DDD239EBAF1F462FC619C8261B9A23,
	CVRInput_TriggerHapticVibrationAction_m889FF2B09BBB27A333C8D2AA759D5E8D7D280234,
	CVRInput_GetActionOrigins_mF85347FEC2A81A859EA4CA8E8B88AB66413070FD,
	CVRInput_GetOriginLocalizedName_mBA00DB64940FC32C5057C8AF2A1D65DF6DC68BFF,
	CVRInput_GetOriginTrackedDeviceInfo_m0814AD2AE828ED9D5351D6D0B0F7F17674336030,
	CVRInput_GetActionBindingInfo_m790F32A28918200BE5DE41B87738B421AFDBDC80,
	CVRInput_ShowActionOrigins_m8D16939A3028E32DC76BD24643C7366C3E96992B,
	CVRInput_ShowBindingsForActionSet_m7E3EC7E7E619E71F8BD7C8D3A1B4687F773E7F8F,
	CVRInput_GetComponentStateForBinding_m79CB7447B304702076BFF60F1025C9E28D36AA85,
	CVRInput_IsUsingLegacyInput_m82470F1F200B02EBB4E51E35458A86E7F7B83371,
	CVRInput_OpenBindingUI_m5C8B898ECFF4007D238E80E9EA0E74E952CCFCF7,
	CVRInput_GetBindingVariant_m3F7FFA30B0170676BB0830249FE7E7291AC7B3FD,
	CVRIOBuffer__ctor_mAC5BCC8623AF01807BF1BF33CABACCE5F0B757E3,
	CVRIOBuffer_Open_mFE5CF686A72F257D74EB882481AD640EBE65B62D,
	CVRIOBuffer_Close_m661267536FC37D7A1599443E14DC9ACC7C797CA9,
	CVRIOBuffer_Read_m3A73322159BFF556F7072196AA3568970C841405,
	CVRIOBuffer_Write_m9CE7B082F594077BB21D6785349745E6E2D756A6,
	CVRIOBuffer_PropertyContainer_mF83528C1AEDF973073A0D12FABCF4D43016B3AF6,
	CVRIOBuffer_HasReaders_mB7554CDB91B4388349CAB47E353A6D404A815D35,
	CVRSpatialAnchors__ctor_m8E63DC098E759C173F6E13E2F479E8C6B2C13315,
	CVRSpatialAnchors_CreateSpatialAnchorFromDescriptor_m80D6F0C3C0067978D4151992A37C41EC952088CA,
	CVRSpatialAnchors_CreateSpatialAnchorFromPose_mE176ECB3BC3591EB722E20B229DC9261B93F37A8,
	CVRSpatialAnchors_GetSpatialAnchorPose_m9D777FE706CE40AF20165C32E8034FD22FDC1DE6,
	CVRSpatialAnchors_GetSpatialAnchorDescriptor_mBB0028CB8A9BABEEECEE9086F1728EBE2EBEA756,
	CVRDebug__ctor_m51EF2513CAFBFC67B84BC14B6D33B764841E7657,
	CVRDebug_EmitVrProfilerEvent_m71E3A1E77698239B5E922FA781C85350694F325B,
	CVRDebug_BeginVrProfilerEvent_mB76CACDB9B56405310CC56A2829014B165A8FC66,
	CVRDebug_FinishVrProfilerEvent_mEE23E131A71A701F8315A802E8C80AD459D7E89D,
	CVRDebug_DriverDebugRequest_mBA00168FC2BD7831BBBD2CAE5112616CDC995253,
	CVRProperties__ctor_mB1D5567CFEA03E3DE55E9BDB9CC122066E3FFAAF,
	CVRProperties_ReadPropertyBatch_mC5D26EAFA21269701CD99B3F74D8AA72BFC413D9,
	CVRProperties_WritePropertyBatch_mA83B529161F068EFA336C88B5A9BD65A906A7795,
	CVRProperties_GetPropErrorNameFromEnum_m600853AC49A7248C4658D3BC1D8D9A01FDB86A2A,
	CVRProperties_TrackedDeviceToPropertyContainer_mE147605766B75A7E55DF43CC459D097222204F40,
	CVRPaths__ctor_m13676A8B913C09838E8B1A6DDB0E35693122FA93,
	CVRPaths_ReadPathBatch_m8F8F2AAC109A9009DD9B9694C589561345EFA483,
	CVRPaths_WritePathBatch_m630C5D4A234C0C20C058719BE1C238A73E164EC2,
	CVRPaths_StringToHandle_mEEB3688E5A25419390A1F495AF59B6579C953EAD,
	CVRPaths_HandleToString_mA66ADADECF0BEFB9C55F5EFE0F6205C8B2C309EC,
	CVRBlockQueue__ctor_m2A206BE93905EC0EC696FEDDE89977595B26FC02,
	CVRBlockQueue_Create_mACEB24379458AACBA44D1CA7D77E1FBBEACBA40F,
	CVRBlockQueue_Connect_m4721DBB0DCD5730562C79367A853E905C9586C03,
	CVRBlockQueue_Destroy_m721D572F37DE5C8D2BF5EABE467A525630AD6E2D,
	CVRBlockQueue_AcquireWriteOnlyBlock_m32CE939C2B35E5F40A6F7BD8055090A5A93501B1,
	CVRBlockQueue_ReleaseWriteOnlyBlock_m859C162B008BD7B9FCC2A1B594049459AAFC9C0A,
	CVRBlockQueue_WaitAndAcquireReadOnlyBlock_m89E58FE10D9EF0855AC94720B41FFEA9725D170F,
	CVRBlockQueue_AcquireReadOnlyBlock_m0AD32FAB371E02F36ECB05D00B0A28712035140E,
	CVRBlockQueue_ReleaseReadOnlyBlock_m777DBF7BECCE935936645D5CE6163C4871B52DED,
	CVRBlockQueue_QueueHasReader_mA42970D5EC7F6152681710D04837FCD1E3D148B9,
	OpenVRInterop_InitInternal_m915C3D01CF5204B8DCCBD85A5FA4220363B71A04,
	OpenVRInterop_InitInternal2_mC287B0A418BC6E06511F9F221AC43D3A3FBA43F8,
	OpenVRInterop_ShutdownInternal_mBFDE0FA70232BF22591F58E717B9E2857CDD0F1D,
	OpenVRInterop_IsHmdPresent_mE387B80B0F0E9039641736375A4755BED7765C74,
	OpenVRInterop_IsRuntimeInstalled_m4CDBF12F7A51A57CA531678308EA11AB8085257C,
	OpenVRInterop_RuntimePath_m25D1D1DA79F7DFF6DBB8BB1B587840A6BD748540,
	OpenVRInterop_GetRuntimePath_m27183912B10CC1145E6BB1F5FF6CBE3A4ECC950E,
	OpenVRInterop_GetStringForHmdError_mA1A3A86C53F32CE5F3A1D943D597BDFAEF34936C,
	OpenVRInterop_GetGenericInterface_m8A4669013986D2F1386627BC9AD3DB06B19EAC7A,
	OpenVRInterop_IsInterfaceVersionValid_m70E1E5E161148353375189618F5EC3D400BD3542,
	OpenVRInterop_GetInitToken_m7C319DFE048E6143243FFD5FE0A92AFAD26086C4,
	OpenVRInterop__ctor_m0C82855E86DB2CB0A191C989E1FD0D7F4121BC63,
	HmdMatrix34_t_GetPosition_mAAB6339034207A72B318AC783E2244B07D962AB6,
	HmdMatrix34_t_IsRotationValid_m6A9C6BC2A4D1138D24A32663590300D319EEC6D9,
	HmdMatrix34_t_GetRotation_mC38BF33EF009CC61DC1F5ABA90E548772DEEEF79,
	HmdMatrix34_t__copysign_mAC041F9983236ECF0FC919C78716D28AFD3AFAF9,
	VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB,
	VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA,
	VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57,
	VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C,
	VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B,
	RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA,
	RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E,
	RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8,
	RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036,
	InputOriginInfo_t_get_rchRenderModelComponentName_mD0E80E21A3391B748D801C757D386E53159AFC93,
	InputBindingInfo_t_get_rchDevicePathName_m7CCD66BC22B7864AB8C6D3A9FFA8138FF77403E9,
	InputBindingInfo_t_get_rchInputPathName_m701591073264DE94EED11ED8548BDF293C58D55D,
	InputBindingInfo_t_get_rchModeName_m533AD53F39404722A176E5617BB5EED0465233A3,
	InputBindingInfo_t_get_rchSlotName_mD39A9BCAD1352ABA8AB1E2E4D3849096478F5044,
	InputBindingInfo_t_get_rchInputSourceType_m1B9791DA1D6711892CDB973103FD80648A9A57ED,
	OpenVR_InitInternal_m860AB64589B7AFE0BDEE81A4DB3DD3C16A21413F,
	OpenVR_InitInternal2_m52BD06E21584586973E94C2C13101E571C07AC7F,
	OpenVR_ShutdownInternal_m14F9618ABA2254DEDC24052D9B2EB1D0D5561047,
	OpenVR_IsHmdPresent_m1DD36E080A9355831BC80F9E9D438961541EE357,
	OpenVR_IsRuntimeInstalled_m25333E04DF045AF45E7DBCBCE20751A1785EDE8D,
	OpenVR_RuntimePath_mF42B97D52D579C7ED03457E25914CE02326CC376,
	OpenVR_GetStringForHmdError_m89675FFC50CD88F609DF618925984302594045E9,
	OpenVR_GetGenericInterface_mC8BB00374381A8299A4C24A62499ACB39E95911D,
	OpenVR_IsInterfaceVersionValid_mBF28E705B8B919587AD637167715989BE3ECD693,
	OpenVR_GetInitToken_mA33A9A10B7627E695149ED69A42B80119CB9A66D,
	OpenVR_get_VRToken_mBCCA818FB9C3CD3F15DE5938EDB8548960A0FFD9,
	OpenVR_set_VRToken_mF74A7FBF445B1D8851D1BB644B5CEC673AD1269F,
	OpenVR_get_OpenVRInternal_ModuleContext_m3FA9FDB0BEA3BE90B132005604417AA59BC3E134,
	OpenVR_get_System_mD6EEBD2924CD8EAA959F61DA26F30D7ACED06B7C,
	OpenVR_get_Chaperone_m1409650FAA1FB6917BF9DEBBFD46DC42384DDAAF,
	OpenVR_get_ChaperoneSetup_m7AB73F896B7498D7EB7DACFCCA5C0E2BD0AB1A15,
	OpenVR_get_Compositor_m2FB93BF84700DFCE6493B5FCF0BFAD2B334A5444,
	OpenVR_get_HeadsetView_mF11F346C999764BDE3FCA8B14A7DBA3FA868D7A9,
	OpenVR_get_Overlay_mCB578AE474115947293B4F132296C15457AFCAF5,
	OpenVR_get_OverlayView_mE7E200B3DC0B4255E46B92B688DAE82A8E0801BC,
	OpenVR_get_RenderModels_m6A9CA2E1B1790165D18F3A0DA96653551622E5DA,
	OpenVR_get_ExtendedDisplay_m894158B695EFFF5020A89EEBBBED5462A6979D4E,
	OpenVR_get_Settings_mDC736D1B142678ED696794470B8C4DFCC6475400,
	OpenVR_get_Applications_m3B3A771422932127705F7C0DB41290747DF7161C,
	OpenVR_get_Screenshots_mA52CAE3566EF64A431C8D7F270CCB8936C937B72,
	OpenVR_get_TrackedCamera_mB97AE3584F804190F69630E9741C763E1ABFF6B3,
	OpenVR_get_Input_mF290A715AD07D4B7F8844AA79293934B7999CE04,
	OpenVR_get_IOBuffer_mD7357279C924044E0F405E95BD76DC658EF6FB88,
	OpenVR_get_SpatialAnchors_m063C45D436CB4629F41E33176370213416B7E929,
	OpenVR_get_Notifications_m1A1405095FBAE65159A516A5B265412B7E7EC6D2,
	OpenVR_get_Debug_m0AAB7E869FC955BA293F29F2D8A7315BCBD84FC8,
	OpenVR_Init_m967D524F384B2E39CEEB416B4E626D02DF03D0A1,
	OpenVR_Shutdown_mEEE2C766313F8F5D238929208930E04BE4620127,
	OpenVR__ctor_m093C95C897F9C227CDAC6894395B04E02798556B,
	OpenVR__cctor_mE9E06C715E417C1D2F200E14DC93D1CD3519193A,
	OpenVREvent__ctor_mC28EBE09310BE3B883AF4625C73EA798FDD52B46,
	OpenVREvents_Initialize_m300E0C490D83CCF5D7FEA9401F0B8C7F9D1B20AC,
	OpenVREvents_IsInitialized_m605E4794FEB1719C2BC4754EA2E0EB1E080850DA,
	OpenVREvents__ctor_m86FB651C9D9B89DD766355B15A915BC1845D9833,
	OpenVREvents_RegisterDefaultEvents_m2165EA8EA8B1222D4CFAE7A5AD71E70FF0F844ED,
	OpenVREvents_AddListener_m12A0A9AF918844CBBEEFB6234A2CBEE395E4C7A9,
	OpenVREvents_Add_m8EF19355ACB11218D11A62EBC9867960136DE200,
	OpenVREvents_RemoveListener_m46EA8F125728A7CFCE58AC683340700F3BC413D2,
	OpenVREvents_Remove_m7DC90F3979C2E6ED103E2B4B6A929B66FC484949,
	OpenVREvents_Update_mEB9FD2D8C8DEB7BAD4ADBA02BC84EC9D0F804ED9,
	OpenVREvents_PollEvents_m11E5D0374D52806D5ED8CC5FF49DF74DC48421B6,
	OpenVREvents_On_VREvent_Quit_mB7C8DBB4D82C559EE88FB9DAE34DA64956219F59,
	OpenVREvents__cctor_m575664CFEA1295F564A937640D2119EEEB72275B,
	OpenVRHelpers_IsUsingSteamVRInput_m37FB3C3EDE0197208E50135FC30EC112F97A0B97,
	OpenVRHelpers_DoesTypeExist_m0E7401AE97FE08588563D32575A73F2910D3471E,
	OpenVRHelpers_GetType_mE4016FC4D93B1898FA441CFE1CD16FF96579AADD,
	OpenVRHelpers_GetActionManifestPathFromPlugin_m15C4072FCF3504BEABDDF4EB305287E72BA3CD9D,
	OpenVRHelpers_GetActionManifestNameFromPlugin_mF282426A044A09ACD3086C5CC27C5FC1CB5A4F87,
	OpenVRHelpers_GetEditorAppKeyFromPlugin_m8445355BFAAAFFA0BA983AEBBD2B08897E7EE6C8,
	OpenVRHelpers__ctor_m7EC38230DEF6A796436DB750CD94D413B75624AF,
	OpenVRLoader_get_displaySubsystem_m331A65FEFDACDEA4DA5E6C3EC84C9700E2F1DC0D,
	OpenVRLoader_get_inputSubsystem_mDB35FE04B4EF7E6E5542C7DC34C2AE30F9C29441,
	OpenVRLoader_Initialize_m4B6C5F0F8FF49C2EE7792BFC1CB3AC25D8CADB3E,
	OpenVRLoader_GetEscapedApplicationName_m813CB7642D5A7F9E2905A1C46C84D9CF61BD35AF,
	OpenVRLoader_WatchForReload_m05447F2FE3639ECA80B84607ACDA678AEF6507C3,
	OpenVRLoader_CleanupReloadWatcher_m5A759227FE5B9C85154008A015FB9AFA3F6D82A6,
	OpenVRLoader_Start_m89A3AB22445E04D273EF23788791945281A581D9,
	OpenVRLoader_SetupFileSystemWatchers_mE4F33754C6F3C449B6836E1B4CE61CF8B4DC2498,
	OpenVRLoader_SetupFileSystemWatcher_m375FA90918A0611EF2847AB0BF26407641BD662E,
	OpenVRLoader_ManualFileWatcherLoop_mB828866E26170D19D78F7D2CE2FE88D65E6AB866,
	OpenVRLoader_DestroyMirrorModeWatcher_m70C7E5364DEF7ED23FB59C057F2B2CB3F9ACFF48,
	OpenVRLoader_OnChanged_m6DEC47D654C8E2A679F29C7AF10E2C7D0601ABE2,
	OpenVRLoader_ReadMirrorModeConfig_mA946FF0E37FD85B82D02914EFC599A9D9CC1FE70,
	OpenVRLoader_Stop_mB66EA823443B09F726B05B17743103D5300FDD78,
	OpenVRLoader_Deinitialize_m4FC5E0C0B7695E96CCC5AA625C2251B4F278610E,
	OpenVRLoader_CleanupTick_mDDCC960BC8B6DD143268098D6892F65FFAF5C52F,
	OpenVRLoader_SetUserDefinedSettings_m8F612D38202D2FB2576D08545B0543D52D12CEE7,
	OpenVRLoader_GetInitializationResult_m9F177D419298320FB29535A3396FB993CCD7B4A8,
	OpenVRLoader_RegisterTickCallback_mD92BD358ECCC17CDB6ED49804D982637FCDEA155,
	OpenVRLoader_TickCallback_m2144F6BB6856DAD0BCAD5460F97F578F24A3B3C2,
	OpenVRLoader__ctor_mEFB387F96350ADA82C2DD7C752D84D0F24E2D98E,
	OpenVRLoader__cctor_m7C6D93C626384E3975811E3C6E458C1FBD34028A,
	OpenVRSettings_GetStreamingSteamVRPath_m9A1062F85B08A0A073C6C82078D968CDB411A17C,
	OpenVRSettings_CreateDirectory_mB8FAEBC3E5A5E1F16841DC8C7ED17A16BF4CDFA2,
	OpenVRSettings_GetStereoRenderingMode_m29E8E8513290C03A70004B083E33A9CE8882824B,
	OpenVRSettings_GetInitializationType_m28AD2708CB64A7A1CD7122BBBAC915409926DC41,
	OpenVRSettings_GetMirrorViewMode_mC44DE0EE27621DD9332F686346F7921D53F7E8D3,
	OpenVRSettings_SetMirrorViewMode_m89BF283F61A7744576526A11746BF694093228E6,
	OpenVRSettings_GenerateEditorAppKey_mF13B511C5C33BFEDCE0D817523993443508DFBAE,
	OpenVRSettings_CleanProductName_mF7CFC17A7C470B983B9B4787A90D849704C567F2,
	OpenVRSettings_GetSettings_m0F324793971BDB12F9EEAD5A9E3D1CE28584AA96,
	OpenVRSettings_SetMirrorViewMode_mA6DC3340FB187C3F3EA570506BC64497F7E18BF8,
	OpenVRSettings_InitializeActionManifestFileRelativeFilePath_m72911C7A39E6BBDD20E3415ECDA2937A14CDCD5E,
	OpenVRSettings_Awake_m5C50F25C13541B8BB97DA283B91477DF9625168A,
	OpenVRSettings__ctor_m424811DF21376988745EAC7F63A2B221E82EC452,
	_GetRecommendedRenderTargetSize__ctor_m11F47D59C7645C52A1896B361D94C5DBADDC66A5,
	_GetRecommendedRenderTargetSize_Invoke_m53CDFF0575E15A7DE2BEA8952BCDBD791A475B20,
	_GetRecommendedRenderTargetSize_BeginInvoke_m75DCD48C44A2E53DBC5B18A6F45353C3A2E27655,
	_GetRecommendedRenderTargetSize_EndInvoke_m78ABFDEC98ACE66FFE1E8BCC58F5CC73EC0A7364,
	_GetProjectionMatrix__ctor_m04BCA2E759D82300D5580A5130AC3C2EFB9671B9,
	_GetProjectionMatrix_Invoke_mA3473A34495462D991BBA436BBA67A97C4027CB3,
	_GetProjectionMatrix_BeginInvoke_m66F0C8F6E6A2F079815074DF762EFA3BF5CE98CA,
	_GetProjectionMatrix_EndInvoke_mF621A3684D79E5D68FB804FF0D5CDE3A2862402A,
	_GetProjectionRaw__ctor_mB60C6B27019592F807DAA2F29D0B9FC350406842,
	_GetProjectionRaw_Invoke_mC95681905AE563D579FB971DA1D18E586A3246BA,
	_GetProjectionRaw_BeginInvoke_m523DF03E5125698DB55DC8861E97481467517F56,
	_GetProjectionRaw_EndInvoke_m71224F3C349590A3E601E84593307B935D760977,
	_ComputeDistortion__ctor_m794FAF4753ACAA52FF1B8FDA209FD97370FF7BB1,
	_ComputeDistortion_Invoke_m35790368795AD03D0862AFDF51BABD6E60CC1EC2,
	_ComputeDistortion_BeginInvoke_m609942608A877E6D8853FF76818F16D5018FED54,
	_ComputeDistortion_EndInvoke_mE49FFCFF181801EEF00D080CE3F0705C128AB401,
	_GetEyeToHeadTransform__ctor_mBBB95B4516378389ED81D39BA8A879E6D9A5C4A7,
	_GetEyeToHeadTransform_Invoke_m3C91496C55669F2ECD65A754458E5C116792B0CF,
	_GetEyeToHeadTransform_BeginInvoke_m86FB37988568795DCE30D017F25993C04B808AC0,
	_GetEyeToHeadTransform_EndInvoke_mB81D93E521CEED7AA0653F0710162940C8A0DA64,
	_GetTimeSinceLastVsync__ctor_m866C2D35D1B46EAD9B026C1591AB0FA4B56F7399,
	_GetTimeSinceLastVsync_Invoke_mA0B29C3F6EAAA6723DF1EF73B733666BB9C94E6F,
	_GetTimeSinceLastVsync_BeginInvoke_m2C9BAFEC19B336243FC45596369107A281DF2F1C,
	_GetTimeSinceLastVsync_EndInvoke_m47F0F13BAB87F9A96557C10D3F3A4E482D11B8FE,
	_GetD3D9AdapterIndex__ctor_m0E8C8989AEC461B856E0F27B1FB6ED331F7A50FF,
	_GetD3D9AdapterIndex_Invoke_m220DE83F58701B69FB24DF92855A7EBFD0455C37,
	_GetD3D9AdapterIndex_BeginInvoke_m27791C4AF61135571CF49D76CEA4D7AE05CA56B8,
	_GetD3D9AdapterIndex_EndInvoke_m8B2015DA3042FCC8A87217811DBA7B0714A87553,
	_GetDXGIOutputInfo__ctor_mA7CF0997F9028A74AD8AA7A8B6A6C669F2308B31,
	_GetDXGIOutputInfo_Invoke_m209F84C1A24960F7AB209445779C84D738A7F6AD,
	_GetDXGIOutputInfo_BeginInvoke_mF92ADD0F243896DB9A2017BDEDAB0BDA5392C02C,
	_GetDXGIOutputInfo_EndInvoke_mE49D722EB41CC6697888436216EDEBE30C9665E4,
	_GetOutputDevice__ctor_m58542C3AC4E240A9FABE8E4B3B2081DE5938F6B2,
	_GetOutputDevice_Invoke_mE4424AC63BDCD1E76BD6F52CC543A5EFC7ADE560,
	_GetOutputDevice_BeginInvoke_m2EB8B57B8E0B749CC7EDFA15D7EF5CBDF8DD2BFE,
	_GetOutputDevice_EndInvoke_m25A7E11DDB629EA662F764067AAAD818E735BAEF,
	_IsDisplayOnDesktop__ctor_mB659AE268C2083EFAC0E86943836510D4C494EDD,
	_IsDisplayOnDesktop_Invoke_mB3315D4C3D43C2EE36A476E954B10C12E63D8B7F,
	_IsDisplayOnDesktop_BeginInvoke_m8D862D9E77FF4DC6A3150DEFE0AFDD4EEAE1F36B,
	_IsDisplayOnDesktop_EndInvoke_m6A22F54D295D4F15C80A205248DEA5480CDEA05A,
	_SetDisplayVisibility__ctor_mA576CC2742EB17435D6FDBEB671E374A1B00419B,
	_SetDisplayVisibility_Invoke_m704B1EE72C8335A4DF2EF99E0DE48E0E2D56F43E,
	_SetDisplayVisibility_BeginInvoke_mB31165EAD1BB713CA3CAEEA7CFE632B2534C2D7B,
	_SetDisplayVisibility_EndInvoke_m712ED83BAB3A045C6C2C7A2F3640750B41290473,
	_GetDeviceToAbsoluteTrackingPose__ctor_m1793DE068FED13452D3D28BF8FAE23F0D94902AF,
	_GetDeviceToAbsoluteTrackingPose_Invoke_mA5F9A17CB8250C3344C445379DB97BBF2165A6C8,
	_GetDeviceToAbsoluteTrackingPose_BeginInvoke_m0D270C283A344284E7E853CCC565A79F1242385C,
	_GetDeviceToAbsoluteTrackingPose_EndInvoke_m1BB26B0D9301DC04E1EBE38835DB55859953A876,
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__ctor_mB85F2FBF8D1655D3D97803A4C92993F584F8FFCC,
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_Invoke_m026A0EF5B969D2762FFB3135EE623A4FE53A27A8,
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_m5F8DE9D30BA98E039F828AD30B4690047967C1AB,
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_m3B60322EE444BB4416340150E250335F71A2267B,
	_GetRawZeroPoseToStandingAbsoluteTrackingPose__ctor_mA98713CB9DDA1875B5B1F21B13957E1F8AFDED97,
	_GetRawZeroPoseToStandingAbsoluteTrackingPose_Invoke_m0DA91EFCC4A7585FD15EFEF31D990CC51BF92266,
	_GetRawZeroPoseToStandingAbsoluteTrackingPose_BeginInvoke_mD2C5DE8DC5DEF3FE99660D77EB80CFE0048352B4,
	_GetRawZeroPoseToStandingAbsoluteTrackingPose_EndInvoke_mCEA291EF482CF3972704B0A63633A406C4EC38AD,
	_GetSortedTrackedDeviceIndicesOfClass__ctor_mBDE145F84EA86DB5283EF4B11A3F58C816E5E59A,
	_GetSortedTrackedDeviceIndicesOfClass_Invoke_m1E20EDF76B2ED78A9C3D589F425C8D723C6E1514,
	_GetSortedTrackedDeviceIndicesOfClass_BeginInvoke_mED0BF29F04EC74FCADCF14EBED9100EE33F266F2,
	_GetSortedTrackedDeviceIndicesOfClass_EndInvoke_m77DD5AB348AE62C907C677FA295B4A922BA0AB6D,
	_GetTrackedDeviceActivityLevel__ctor_m049518CF857399A3C4A1E65A0F77C15390FA4308,
	_GetTrackedDeviceActivityLevel_Invoke_m683A3170910FE54C8D1BA0BC80E528DEE7194711,
	_GetTrackedDeviceActivityLevel_BeginInvoke_m5758422355B50D1A19391E560AE7A9C4FB541B77,
	_GetTrackedDeviceActivityLevel_EndInvoke_mD39F541AC2362D951456B8C71E7C2D6BE64AF06E,
	_ApplyTransform__ctor_m60A24F406469009C771B1B9D11E12018204C955F,
	_ApplyTransform_Invoke_mA55266FAA70AAA654A36F1C873A303C7CDE219D1,
	_ApplyTransform_BeginInvoke_m73EB3C67664AAA50F1EB363BF3B46428B5A6A890,
	_ApplyTransform_EndInvoke_mD0399387463986C2AED28D76BDF2243DF7C703E6,
	_GetTrackedDeviceIndexForControllerRole__ctor_mE8A5F6D0B1DD27D003B40B1239DA7681EA51477E,
	_GetTrackedDeviceIndexForControllerRole_Invoke_mA042B8BBCE2D32E7F89C469B8FF8F40E0201DE8B,
	_GetTrackedDeviceIndexForControllerRole_BeginInvoke_m3BECA8EF9A226549BD79876165D60AA003496ADD,
	_GetTrackedDeviceIndexForControllerRole_EndInvoke_m249D791E934BE735225094E5629664B20AEFB003,
	_GetControllerRoleForTrackedDeviceIndex__ctor_mEBF09891756ED59CAE9DAAB4CEEEEF2392382BDF,
	_GetControllerRoleForTrackedDeviceIndex_Invoke_m44601E6681E54B44B538106E19FD5663B1F54805,
	_GetControllerRoleForTrackedDeviceIndex_BeginInvoke_mD3EA6B0ECD2765FAFF8071CB66E6C9852B992385,
	_GetControllerRoleForTrackedDeviceIndex_EndInvoke_m6D38390A44C507487D8BFE1F96E14C5B0B197F36,
	_GetTrackedDeviceClass__ctor_mA534556EA6B3CB76532C3A7A57CF487545F29C19,
	_GetTrackedDeviceClass_Invoke_m0587912FDDE081A4652A530151739A9A9D7B8BA1,
	_GetTrackedDeviceClass_BeginInvoke_m489F21BD7228BBEBE0B5EB49F6B6315AD06D1E53,
	_GetTrackedDeviceClass_EndInvoke_m94AEA6157711FDB6199E304979F55DC5F95EFA80,
	_IsTrackedDeviceConnected__ctor_m9213AE41D4D0A052CAAD376877DBC2E51C484E09,
	_IsTrackedDeviceConnected_Invoke_mBDAC04B1DCC4ACBA5B7FA4CEE78C9EDD9F33426C,
	_IsTrackedDeviceConnected_BeginInvoke_mD07B026F7861F6F92811965EAA6A99C9E6FB7603,
	_IsTrackedDeviceConnected_EndInvoke_mCDE5A5684F1293DE0CB50F10FA8DA20D67F6F07C,
	_GetBoolTrackedDeviceProperty__ctor_mE9F771B0B1ED9D8E9B761B2231676CA9DBC3CD2C,
	_GetBoolTrackedDeviceProperty_Invoke_mC3155BC4A7531A2BCD1B47AAF3382875206EC470,
	_GetBoolTrackedDeviceProperty_BeginInvoke_m5DDEF0CB4E53EAE37ED03F3584D1A4F54A676BE0,
	_GetBoolTrackedDeviceProperty_EndInvoke_m0AEE395E67D0EC3098C167E6A093865AD67FF700,
	_GetFloatTrackedDeviceProperty__ctor_m935D82EF2EDBF9A19C04DB054A309E062A4A3A8C,
	_GetFloatTrackedDeviceProperty_Invoke_mD413AEAF14A9E7CD7C2D3286EC2A218A387930C8,
	_GetFloatTrackedDeviceProperty_BeginInvoke_m7CC561927C2528B90DD2BE83654311E010074B0B,
	_GetFloatTrackedDeviceProperty_EndInvoke_m402BC314278CFD4FAFF4E945D1E59BE05FAC9FEE,
	_GetInt32TrackedDeviceProperty__ctor_mB6A3F9222F8B9479C4317BD86D6D87982DA39E92,
	_GetInt32TrackedDeviceProperty_Invoke_mF458AFF9D93C9662FBE87A1AF8BC492B29DCBF13,
	_GetInt32TrackedDeviceProperty_BeginInvoke_mAAD5E772C6BDE58A6454E6C23860D585643C5F19,
	_GetInt32TrackedDeviceProperty_EndInvoke_mD731D9FDB2908D381E8A3E9F1B38F4DE83C4F35B,
	_GetUint64TrackedDeviceProperty__ctor_mF54F167BD329A8071818DCAF4CB0712CE4C7733C,
	_GetUint64TrackedDeviceProperty_Invoke_m6B266DD8A4BB59844C6835CC6C2035BC919C031E,
	_GetUint64TrackedDeviceProperty_BeginInvoke_m05ABFD6F9FBCBD73207A593A62DC43E2E3DDB3EA,
	_GetUint64TrackedDeviceProperty_EndInvoke_m2235F901E40ECF18D38D3A56670EFC50B6B57CF3,
	_GetMatrix34TrackedDeviceProperty__ctor_m0AC79E5C8D7971C0BEC142D09E3AB0DB5A244926,
	_GetMatrix34TrackedDeviceProperty_Invoke_mF54462882130A74DE4917DC614D9281FA469901F,
	_GetMatrix34TrackedDeviceProperty_BeginInvoke_m01254845A707135CA988CDA82164ED93BEBC8E16,
	_GetMatrix34TrackedDeviceProperty_EndInvoke_mFD77FA21B5568F3B1E6ACD731F681B87531A5316,
	_GetArrayTrackedDeviceProperty__ctor_mC65F53377896B5BF2C89F1B22EC845D795AFBD85,
	_GetArrayTrackedDeviceProperty_Invoke_m3B15B4E73C15C7B5EC35A68A9001F121A347F5E3,
	_GetArrayTrackedDeviceProperty_BeginInvoke_m88426B688AD60C46088C0CC77F357A517E30F477,
	_GetArrayTrackedDeviceProperty_EndInvoke_mD0CCEDA5C585AF0769AFC914FAEF771F82E2CC35,
	_GetStringTrackedDeviceProperty__ctor_m4ED987D2B5BBECB2FD4D96B706E195285C15043E,
	_GetStringTrackedDeviceProperty_Invoke_mF1B06DD986713F2F59E6CBC27AF0F5439C1F393F,
	_GetStringTrackedDeviceProperty_BeginInvoke_m0CAE08DF27A2F1B80DBE808514D329AAA8196D70,
	_GetStringTrackedDeviceProperty_EndInvoke_m1681AB062EE9E642A52DC6DC69C731477B72FAC3,
	_GetPropErrorNameFromEnum__ctor_mABDE17032C13D8DF13619CF540936254F712B008,
	_GetPropErrorNameFromEnum_Invoke_m980B18E65A1DB2822A29B9894FF46BA1BC18195E,
	_GetPropErrorNameFromEnum_BeginInvoke_m04EE7783268F827B4A27A9642146F2F0D94FF2A3,
	_GetPropErrorNameFromEnum_EndInvoke_m86B09A116AD37822F8F77AEC55E0CFEEB51E42BF,
	_PollNextEvent__ctor_m519D0CE0E17D851B00BFE63869279B0D12B84ACB,
	_PollNextEvent_Invoke_mFD634F982EAF818777CF7A055B7237817B544628,
	_PollNextEvent_BeginInvoke_m30419A3CC225578A610946E0508BCEDE925621BC,
	_PollNextEvent_EndInvoke_m48B5DE23839C2437FC230D1FDAD08F69467F0AE8,
	_PollNextEventWithPose__ctor_mA3ACA274CA2DB25AEFDA30851D4E4ED63E488E27,
	_PollNextEventWithPose_Invoke_mFA2D48526CE35A3B80537719159D11244942D43B,
	_PollNextEventWithPose_BeginInvoke_mA43083D1E3F8E714B8DE06124D49D42BAA1D620D,
	_PollNextEventWithPose_EndInvoke_m2759DE1C3E78B8990F32459E554FF87460F8167D,
	_GetEventTypeNameFromEnum__ctor_m6B42B277DACCCC2A47AA9563D6FF0105790B9A92,
	_GetEventTypeNameFromEnum_Invoke_m9C6C0E78BCE61FE8B4B5983FFF1BD34CE19DC211,
	_GetEventTypeNameFromEnum_BeginInvoke_m88AA994519D9F9CDC8BE52BC9BB5B847A6AB15FB,
	_GetEventTypeNameFromEnum_EndInvoke_m8BBAC930CE7E2AF1585CF5560235FEEA7BED92E0,
	_GetHiddenAreaMesh__ctor_m85783B5C580BC3C1845A747250CC866329B6E3A1,
	_GetHiddenAreaMesh_Invoke_mCA44C9DD262375D26525DC3CD0EFF0B4399C93B4,
	_GetHiddenAreaMesh_BeginInvoke_mFA90D2971DF6E9ECAC943BE2FEC737BF1447334F,
	_GetHiddenAreaMesh_EndInvoke_mF0FDC9A58DDCE3B4600C012CD3E070616537164C,
	_GetControllerState__ctor_m8B7BEAE44777B59C9C6EF287A82661524F3E4602,
	_GetControllerState_Invoke_mC49A05EE34529E9000B1DB13A44955FF58FCACB0,
	_GetControllerState_BeginInvoke_mF2B30A48739192DA228EACFE3B3D7404A9AB5B22,
	_GetControllerState_EndInvoke_m6561207639D5B1A27231FD4FA1CB2A9E29D44904,
	_GetControllerStateWithPose__ctor_mE136827560979DE1146A0515E4E4D88807374A29,
	_GetControllerStateWithPose_Invoke_m99A27D778ED22062C7D0DEC171FEB67D8266C6AA,
	_GetControllerStateWithPose_BeginInvoke_mDA95DC005693A991B1803D8D848AA93CD25DA855,
	_GetControllerStateWithPose_EndInvoke_mCB6083E2CE6ECAA8711A67B60752C831C427639C,
	_TriggerHapticPulse__ctor_m64DF24CB793025727D9606535C495F39C39B72C6,
	_TriggerHapticPulse_Invoke_mEF483F162A74ED08652AB0DDBEC348881211CBB3,
	_TriggerHapticPulse_BeginInvoke_mDC1FD3CD3AD896ED63B52B80A6BA6002D25DB3BF,
	_TriggerHapticPulse_EndInvoke_mF091BC36B7F678BBA86679AD07C410968D0E48BD,
	_GetButtonIdNameFromEnum__ctor_m0D54AE72575A9DFCD2600EC5AD345A79DA2D96D7,
	_GetButtonIdNameFromEnum_Invoke_mC7ED445AEE6182ADC096E831AFEE58D8D971C388,
	_GetButtonIdNameFromEnum_BeginInvoke_mFE4E91C3AA11267B8831599C54FFC546FE5E940B,
	_GetButtonIdNameFromEnum_EndInvoke_mEEAA5DB06DF59151B320ECE5BA3779C1BA1823D3,
	_GetControllerAxisTypeNameFromEnum__ctor_m94CC27F21F9511F6560130C103885A7EA8C49EF5,
	_GetControllerAxisTypeNameFromEnum_Invoke_m19B53878CDBC2EC1453B96D8AC2C4C108B05DC3F,
	_GetControllerAxisTypeNameFromEnum_BeginInvoke_mBB885A2CC787202AD57F6A119D591C2ACB424F74,
	_GetControllerAxisTypeNameFromEnum_EndInvoke_mE25DB79D4B8DC39EC4FF512DE311391FBFA703C6,
	_IsInputAvailable__ctor_mD3F4C57A19679B5E293CC29551742C1B1844D27F,
	_IsInputAvailable_Invoke_m7769F5851380F3ACCB4C7AE2AECBADC629A0936F,
	_IsInputAvailable_BeginInvoke_m6EF1C7BE6758243EE525FC64FE0AD491C0F44C3C,
	_IsInputAvailable_EndInvoke_m6DB2951C06F4770B60B1CEACA3E051BD01FA3B4F,
	_IsSteamVRDrawingControllers__ctor_m2914F525630BAF785FA8A0208CE8867A259CCA85,
	_IsSteamVRDrawingControllers_Invoke_m28E102456F36A2F65ED39D851A54DCDB197D9CCC,
	_IsSteamVRDrawingControllers_BeginInvoke_mE858C9875E972F14639F7CD9F930E69A0D5D8455,
	_IsSteamVRDrawingControllers_EndInvoke_m2CAF330D1FB707252244BE9ABF46DB74736B3DBE,
	_ShouldApplicationPause__ctor_m60F7E637AB12DB44F3ED4B4D828DC3F2523EE600,
	_ShouldApplicationPause_Invoke_m63926482AE112BB12E15E0DE10520C346D3D5BFE,
	_ShouldApplicationPause_BeginInvoke_m76898066C357FC64F26D5143330D471186DC6102,
	_ShouldApplicationPause_EndInvoke_m8B1249CE2839B4715221BC62C7453E1CC2C901F8,
	_ShouldApplicationReduceRenderingWork__ctor_m24F78F6C65BECAA16CE0648D343A582BE5FA4AF6,
	_ShouldApplicationReduceRenderingWork_Invoke_m4FEA3FD5DD2CA174AD795BABB981F26916B35920,
	_ShouldApplicationReduceRenderingWork_BeginInvoke_m73FDEB059077333A02E5E919315A98AEDD20EC99,
	_ShouldApplicationReduceRenderingWork_EndInvoke_m22905356BFAE092E85F1941B6B4B6E371AD3880B,
	_PerformFirmwareUpdate__ctor_mC78DE85F0FC66689A97DD95F7855483AC25CFFC0,
	_PerformFirmwareUpdate_Invoke_m733FE67049584B7B937D9C18B3200BCBE357F810,
	_PerformFirmwareUpdate_BeginInvoke_m54ECB33A1CC9CF6FD7D527DA202992C6048BCBC8,
	_PerformFirmwareUpdate_EndInvoke_m92B1A3658D2DA55CC362415ED5FC7D8E3CBAE8A2,
	_AcknowledgeQuit_Exiting__ctor_m8DB0C25ADCA632828B02613B1CC358869D0164EE,
	_AcknowledgeQuit_Exiting_Invoke_m7919D251DB56A1AB59B072C1AF0F551FB7E214C5,
	_AcknowledgeQuit_Exiting_BeginInvoke_m0A05199EEC86FCA7303F2BE7F855476B67749A6E,
	_AcknowledgeQuit_Exiting_EndInvoke_mC082B9F1BCF7B1202ED42B990E6E7D0901641E65,
	_GetAppContainerFilePaths__ctor_mBD1A5F3C9922D8A7916FF576B72D89AE9A5C3352,
	_GetAppContainerFilePaths_Invoke_m16F47AECFE97FA04DBEA7FE97DC27B962FE68536,
	_GetAppContainerFilePaths_BeginInvoke_mCB712A698A2C0576CC47CCB402F39E9E4DAFAAB5,
	_GetAppContainerFilePaths_EndInvoke_m603E8CC6E28775CEF003015324CAECA5F576E8E2,
	_GetRuntimeVersion__ctor_m9E18E355724622642AC948C17AE51BB09FE10B44,
	_GetRuntimeVersion_Invoke_m22EDE141333A7E1F04D241F9FE68441F222DE585,
	_GetRuntimeVersion_BeginInvoke_m43770594B888ADAD182E0C1E84A41351FDDAA8BF,
	_GetRuntimeVersion_EndInvoke_mE7566A36793874759D82D7477AED06240AC2D250,
	_GetWindowBounds__ctor_mD12E3E5CAB2D021535F8C27FA28D72EAA870B128,
	_GetWindowBounds_Invoke_m9A39CA5C72883C0BF952A0FC9F9F15B8F901447C,
	_GetWindowBounds_BeginInvoke_mA37CC0B6FD4AB9CB3634E81A65760FAC79799486,
	_GetWindowBounds_EndInvoke_mC8A22C426F59E3D3BA93582599379417C33C43A8,
	_GetEyeOutputViewport__ctor_m7D25E9AE4B10A3A1DD4A0F7F19DDE9B229FE39F4,
	_GetEyeOutputViewport_Invoke_mAC57DE5222227C044E9C6E7F576B1E700D4AE57E,
	_GetEyeOutputViewport_BeginInvoke_m78E1A5E5DF5D734DB0EA74CA5D084537E5152943,
	_GetEyeOutputViewport_EndInvoke_mC1AF268A13D646590B82860D11B5DE46EDC37DA8,
	_GetDXGIOutputInfo__ctor_mBBEBCEBD365CD9C3804503A06D424FED71B9E62E,
	_GetDXGIOutputInfo_Invoke_mEB5BA6DD0CF52F7C98CD41643433B998DDF6645E,
	_GetDXGIOutputInfo_BeginInvoke_m701EB7F651D9D14550D2FF9E72E56F4155C2BB6F,
	_GetDXGIOutputInfo_EndInvoke_m9E85139BFAD32B339FBE5D79DA75A212D2FCE638,
	_GetCameraErrorNameFromEnum__ctor_mA821FADBF297CD6E8822136639B769C225DCB59E,
	_GetCameraErrorNameFromEnum_Invoke_mF4710BFBF79821E706B42AEDB908FF057B8B9D9D,
	_GetCameraErrorNameFromEnum_BeginInvoke_mB59F0285AAFECAEF70D24F3A0352D6C27ACFEA91,
	_GetCameraErrorNameFromEnum_EndInvoke_mAB8E417F0EB1D63974CBCCA694FEA76CF0F2F7C3,
	_HasCamera__ctor_mACC94DCEB28A1C3E8DEB9154AA150EEB71D8A8DE,
	_HasCamera_Invoke_m35365232480ACA0FDE6F0CC1020971E7A54835DB,
	_HasCamera_BeginInvoke_m88BB2E02A9CF7DA40F2739DDA0933FE5F1D1B758,
	_HasCamera_EndInvoke_m0577E65E53E3AB00B7B96A17A5DD81E1DCA9F56B,
	_GetCameraFrameSize__ctor_m8D5AC818932DCBB5C2D02E7EAAAFE898F808FFFF,
	_GetCameraFrameSize_Invoke_mB167273ACF8323D2E75EBB451C54338AB781508E,
	_GetCameraFrameSize_BeginInvoke_m22F7E03C57353CFD214FE46FFBE9356DB62EB022,
	_GetCameraFrameSize_EndInvoke_m05C4ECB6524C716B532FAF4775717D854AB1BC0E,
	_GetCameraIntrinsics__ctor_m0E42AAA912D5794EDCB7D6B79925EF0387276CE7,
	_GetCameraIntrinsics_Invoke_m6792C911D5C33FE070D1310F8844CA6AD3D64793,
	_GetCameraIntrinsics_BeginInvoke_m796DBBD48DED26FABE4224431944AB2C9DC9559B,
	_GetCameraIntrinsics_EndInvoke_m6EB7ABDA2EE38C7F1B3DD0E9FD0886BDD25A375E,
	_GetCameraProjection__ctor_mBB0664F059AC70327C08DF89BF70EDD4AE264DF5,
	_GetCameraProjection_Invoke_m14E4B7EC37C3DCF5C91799C480F919C452477D54,
	_GetCameraProjection_BeginInvoke_mA3D841B3023FA7C0AC8BDCB115787A164A156374,
	_GetCameraProjection_EndInvoke_mCC4D489CF12909090AA32A7E0100E98811CA2153,
	_AcquireVideoStreamingService__ctor_mBCE2C386F9CBFDC834E6B7D6265832AE9A4B9F52,
	_AcquireVideoStreamingService_Invoke_mD91959AAA9A35E3C383BB45375E591F16E5688C8,
	_AcquireVideoStreamingService_BeginInvoke_mBC2DBD9204EEBA61A993BBCE4E321E877513AF9F,
	_AcquireVideoStreamingService_EndInvoke_mDC8DA3925ABDADFC008172EE276972DDF5E1F9CB,
	_ReleaseVideoStreamingService__ctor_mF1517FDCAD9457EE004784F896C91B15E2AF8F8B,
	_ReleaseVideoStreamingService_Invoke_mF19390EF96E48BB9BEF1C7091127A37FC0A3308F,
	_ReleaseVideoStreamingService_BeginInvoke_m7C3D61537ACDC6E46B11D1ACAEC25339B2411CB4,
	_ReleaseVideoStreamingService_EndInvoke_mB87332AFA043AA2310EB171C115D49E72C4B28B0,
	_GetVideoStreamFrameBuffer__ctor_m19E310D8272A4EFB9CAFE8FE8446BCFEA9AEB3FF,
	_GetVideoStreamFrameBuffer_Invoke_mB1F758E65F7FD6B7E02D20316B60E724E961B98F,
	_GetVideoStreamFrameBuffer_BeginInvoke_m4092D412900D04FEC48BF1AFA37545777E435B40,
	_GetVideoStreamFrameBuffer_EndInvoke_mD16CE39E508B47114545E23DE50267062B00B2BB,
	_GetVideoStreamTextureSize__ctor_m19F6A1B45517F36E520D743043B5365D58414216,
	_GetVideoStreamTextureSize_Invoke_mCE14C2952CFDCFC4AB1B45DCCC269C0A754B375C,
	_GetVideoStreamTextureSize_BeginInvoke_m6C1688814E13AA1F61CAE558DF40DD6024A6F9C4,
	_GetVideoStreamTextureSize_EndInvoke_mE76AA2DEA6DBF6FE150B51AAB12F79B06611909B,
	_GetVideoStreamTextureD3D11__ctor_m8543DFD72F354D6B55BECAC21A9572F436244B95,
	_GetVideoStreamTextureD3D11_Invoke_m83CAEB8E2DCB45B43AAC4029DDC042E7FAB34F33,
	_GetVideoStreamTextureD3D11_BeginInvoke_m7D30937B9B3D434EB3DBE10F51C20B97D803F72C,
	_GetVideoStreamTextureD3D11_EndInvoke_m7EE17F9F15C9497B5912D05BC5F1E7011C2680EC,
	_GetVideoStreamTextureGL__ctor_m15586F1A17F5506304F62FB87C21632BED4BACB5,
	_GetVideoStreamTextureGL_Invoke_mD1B1116E6A3DC5C5FEDF6356C73F696EA4649253,
	_GetVideoStreamTextureGL_BeginInvoke_m4325F3E1E4D83659DA45FBCC4BB27227DEBFB084,
	_GetVideoStreamTextureGL_EndInvoke_m4D7F6F0ED413E07FB6BE0CB58986ADFFFBF2FB7F,
	_ReleaseVideoStreamTextureGL__ctor_m0616D5B74436B30843F16501712A186115D52C63,
	_ReleaseVideoStreamTextureGL_Invoke_m369675A1F35E836F4234DF2E2660E7FDC4D81FCD,
	_ReleaseVideoStreamTextureGL_BeginInvoke_mD6642B5B802BC99A696B4891E09BA12541BF003B,
	_ReleaseVideoStreamTextureGL_EndInvoke_mF264035E9351063D4293806AC4FA5B853C654E44,
	_SetCameraTrackingSpace__ctor_m4F66C135643CCDCEB45B34D5C59C754F57E26157,
	_SetCameraTrackingSpace_Invoke_mB6A7A398AAD810332913F6C41B40A8B42E862CB5,
	_SetCameraTrackingSpace_BeginInvoke_m27CA0FD8AF7B2668DA924AF291BB5EE66217EBE3,
	_SetCameraTrackingSpace_EndInvoke_m9EBF7DECC41051FE178A0C4E5AB601D726EB2020,
	_GetCameraTrackingSpace__ctor_m00F188D69537F7A2DB8904B6CBA8B8D827422ABD,
	_GetCameraTrackingSpace_Invoke_m217201D9B5CBF8B68730C98F586D5C9819C18819,
	_GetCameraTrackingSpace_BeginInvoke_m37B993591EFE5198F9FCE50A0F2C70699EF96F0D,
	_GetCameraTrackingSpace_EndInvoke_m4E14029D33530B5B9047C5814FEC39BFFD4D83EE,
	_AddApplicationManifest__ctor_mE921177092FB009F47141BF4B1E5CC6994960A46,
	_AddApplicationManifest_Invoke_m13253FF3E1626A61C5CEDE82B3C2A7C61944F115,
	_AddApplicationManifest_BeginInvoke_m160719B06C579A1C8B67B7766D9EAC92B7C0C89F,
	_AddApplicationManifest_EndInvoke_mCABE2B52D0755C0514E1E79E8F5B14A3A9325BDD,
	_RemoveApplicationManifest__ctor_m098B5B0568E1BD95ED07F93680A17FFEB5370AA7,
	_RemoveApplicationManifest_Invoke_m955D53414048A815540B392318F767FADF663BC5,
	_RemoveApplicationManifest_BeginInvoke_m2148C62AC9E0A25DB453FDF7A21879A5BB6E5717,
	_RemoveApplicationManifest_EndInvoke_mFC10638A90BE739DCC0DE10AA03C24D836DD0BFC,
	_IsApplicationInstalled__ctor_mF97DE386DD08E9A8E2F1744058F586D4A90F054E,
	_IsApplicationInstalled_Invoke_m85222DC1B440AD62545168C3B6E50853A64570CD,
	_IsApplicationInstalled_BeginInvoke_m63E00D00C752F636DB683C1F2338D8754F189216,
	_IsApplicationInstalled_EndInvoke_m35DFCDDB62DAD7D20971B6F77A5319D066C9E782,
	_GetApplicationCount__ctor_mB13D1FBC6DF5F90635EEA9D14F76CED30FF3D55B,
	_GetApplicationCount_Invoke_mC0729ABF4F4946149ADDD90CA2E8008D6DF6C107,
	_GetApplicationCount_BeginInvoke_m1CE099273DEB4C471C87AC4196C60C4FEC8687C9,
	_GetApplicationCount_EndInvoke_m8215063378D1E4D5CEA4C4E32CD5420EC23E4803,
	_GetApplicationKeyByIndex__ctor_mA39E195F7E80E2846CC51EF72613E7DC7E09ECDD,
	_GetApplicationKeyByIndex_Invoke_mFE9B29465080238D0869FE2420973E79E0E7F2E4,
	_GetApplicationKeyByIndex_BeginInvoke_m7FA4AA91EE1138A8A715610BF06FAB33A4E3F89A,
	_GetApplicationKeyByIndex_EndInvoke_mDC602E2AF209DFD471033850288C8383B9BD6F7E,
	_GetApplicationKeyByProcessId__ctor_m5A45EA06187F8872373063B343B0F9B7B05FD673,
	_GetApplicationKeyByProcessId_Invoke_m609B32C9CE935757C3FE53844191444D5C89E62C,
	_GetApplicationKeyByProcessId_BeginInvoke_m57C19B47688536F2DD1FC9512BA5E83DA250338C,
	_GetApplicationKeyByProcessId_EndInvoke_m7C7DBA892AD3F64D5E295EA25227CED7080DDBB5,
	_LaunchApplication__ctor_mD5D89DD02ABF154DAD53CA5DD3A16DF4C357A591,
	_LaunchApplication_Invoke_m632E2C0F515BC9413ED63FC74A58E16204A66E1D,
	_LaunchApplication_BeginInvoke_m1D60ED268088414CEC80928AF46E81B3ACC62314,
	_LaunchApplication_EndInvoke_m834427DCBCE5A1833364592E505075285C1F371B,
	_LaunchTemplateApplication__ctor_m7F8E8086C4940BA19C95A946811B612C943F48EE,
	_LaunchTemplateApplication_Invoke_mD2B1E3465534228B6ABD3F88C14856BF06E3D06D,
	_LaunchTemplateApplication_BeginInvoke_m757CCEE2075E8147A7A55ABDFA2741E9DD8E7B79,
	_LaunchTemplateApplication_EndInvoke_m4EA6E0A4EC800F776002E2A02D22FD0CC0CFD0D7,
	_LaunchApplicationFromMimeType__ctor_m87319361A420EBC891BC37C76E07FC2B1891A734,
	_LaunchApplicationFromMimeType_Invoke_m122A4EC3DC263B5676908683712EACEAEDC7C7CD,
	_LaunchApplicationFromMimeType_BeginInvoke_m4F5834DB125C0502FA34CFAB6CFCD391767B8609,
	_LaunchApplicationFromMimeType_EndInvoke_mD4F7B1C16B40FEB0306C7507679569D1BD8CECE8,
	_LaunchDashboardOverlay__ctor_mBF4EEECF41B66FE1C2EA3F334B42F08196FD2E7C,
	_LaunchDashboardOverlay_Invoke_mA32F420A9A1889AE47474D8591B52203278B5133,
	_LaunchDashboardOverlay_BeginInvoke_mA79E5CAD6368629B4C993E7FE8BD08BE5B582204,
	_LaunchDashboardOverlay_EndInvoke_mFA0721BFF576A748BAF345A3223AC84BDC8253BD,
	_CancelApplicationLaunch__ctor_m8084B4CA30723602A6345C6BDBE4DF6F43E844E2,
	_CancelApplicationLaunch_Invoke_m2C01811A7EF78B92CA551FB5D8FBEEA8E3795300,
	_CancelApplicationLaunch_BeginInvoke_m099B3AF9BE09D822A055F2AC807DD7DB02081729,
	_CancelApplicationLaunch_EndInvoke_mECDCDEC099303426A063586C2DF08CE64D32E8F5,
	_IdentifyApplication__ctor_mECC337F8E060732DF71C8DF575B7E410EF466445,
	_IdentifyApplication_Invoke_m15E39C398ADEEEEBEFC7021B058D789DA30FA06B,
	_IdentifyApplication_BeginInvoke_m54AD3A3FA131EF6A3ABA387F104E4809EEF5D78B,
	_IdentifyApplication_EndInvoke_m3FABDF80EDDAF8F33C6AE3E4A8D34ECA482F90D3,
	_GetApplicationProcessId__ctor_m8E6DAB57F3DC74DCAF969BD34B78D666FE145145,
	_GetApplicationProcessId_Invoke_mF66FD312EF46879D12CF5832F6C57AEAF1B85B9D,
	_GetApplicationProcessId_BeginInvoke_mDB39CCA2DF78463D770972C463624FCD9F55B9A3,
	_GetApplicationProcessId_EndInvoke_m92E30449375CE4BA24E30CC11402F362809AAF3C,
	_GetApplicationsErrorNameFromEnum__ctor_m04D5D7E89554675621FBDBCE1CED6CD863CB049F,
	_GetApplicationsErrorNameFromEnum_Invoke_m28B6278D464110D19D177898F873311FE601ACB0,
	_GetApplicationsErrorNameFromEnum_BeginInvoke_m5539CB5FE499335BBF9DE007622DAB0E0385826B,
	_GetApplicationsErrorNameFromEnum_EndInvoke_m13FA5841D33891441AFFEF4DA593410CCD397006,
	_GetApplicationPropertyString__ctor_mD0817691B945C2AB92E99BF1A3F9D1487D02B229,
	_GetApplicationPropertyString_Invoke_m4BAEE912C73B4BE6CEBD5C925A3B5967F6A43D98,
	_GetApplicationPropertyString_BeginInvoke_m66CC078AA726E4B1B97D4A9183962B2F51FCF71B,
	_GetApplicationPropertyString_EndInvoke_m0FA3315FA0E989ECCC12EADEFF22199D69E7760F,
	_GetApplicationPropertyBool__ctor_mEA3FBAFC5334418B06AB12726BF072552E29E978,
	_GetApplicationPropertyBool_Invoke_mA59DD56D761005EDCF74344B4EE3E4BC83DB3203,
	_GetApplicationPropertyBool_BeginInvoke_m5F9B759D0A70B2A7995957CCBE811ACBEBE7EE52,
	_GetApplicationPropertyBool_EndInvoke_m60044E96D146AE6C607CFFF4EC87988B41FAFBD7,
	_GetApplicationPropertyUint64__ctor_m329D01ABD6E833601944B42DBAF4CF4D3478E114,
	_GetApplicationPropertyUint64_Invoke_m7AA7DF6ECEC3486EE001B9B6F12B44BC07D7F88F,
	_GetApplicationPropertyUint64_BeginInvoke_m121ACA3C6494872900E9F07A29E116820F32E13D,
	_GetApplicationPropertyUint64_EndInvoke_m18BD5E391ADB14C575F1E6B721C8432256543C59,
	_SetApplicationAutoLaunch__ctor_m25A6245499453A7486676CE64CF8CC6F13DCA4FA,
	_SetApplicationAutoLaunch_Invoke_mD5B05F8991DDC19A50F372714A02964D695A21A7,
	_SetApplicationAutoLaunch_BeginInvoke_m8856CD75103C0FEA05EED1285F32F0C3939377A0,
	_SetApplicationAutoLaunch_EndInvoke_m7AC225AB775B0199AADFFA4B8C8690AEAD16BD61,
	_GetApplicationAutoLaunch__ctor_mEA367838C3B25F822609560801F4E418BE644759,
	_GetApplicationAutoLaunch_Invoke_m68E78E8DF47AF44C4307F8D5112900460C5BFCDA,
	_GetApplicationAutoLaunch_BeginInvoke_mFA36B7A28C6CF1DF153EC9D7B3686982D545E7D8,
	_GetApplicationAutoLaunch_EndInvoke_m6F335B56A30708D72AFD5E409168AD89242877B0,
	_SetDefaultApplicationForMimeType__ctor_mE681B033278112D305896DE653D4C1784B82C450,
	_SetDefaultApplicationForMimeType_Invoke_mB3F8425C5C75E41D7B135D8B494F2677A9BCEF62,
	_SetDefaultApplicationForMimeType_BeginInvoke_m2ACB9A204CB396649BD941A4A62D539F556F8585,
	_SetDefaultApplicationForMimeType_EndInvoke_m2BF07D8E169262C3C524DF72B846A8866D0195AE,
	_GetDefaultApplicationForMimeType__ctor_m42F35237ABBA4BCCBCE5D2DE4CFA2787D253620C,
	_GetDefaultApplicationForMimeType_Invoke_mC236ADF0872CD04D637736F1A11B64A14E3AA3C7,
	_GetDefaultApplicationForMimeType_BeginInvoke_mC7BD7CD20EFE7FCD2A5CEB0E6725BDCFB4B4BCE7,
	_GetDefaultApplicationForMimeType_EndInvoke_mF659831113C37FEB3ED05EC9CC2C859EF452A257,
	_GetApplicationSupportedMimeTypes__ctor_mAEFA0E967CDB9BDBBCD47B6588D4E27640F73D9E,
	_GetApplicationSupportedMimeTypes_Invoke_m86D1D429C68AEFC23A82DA56EF261ED3C2161D2A,
	_GetApplicationSupportedMimeTypes_BeginInvoke_m88074A7FEADCE370BF9C1B87A407A310C736D40D,
	_GetApplicationSupportedMimeTypes_EndInvoke_m08FE63D1743679941C5AEBADBDB19D9DA9F8ECDA,
	_GetApplicationsThatSupportMimeType__ctor_m09C250D1FEA70F2F8272F71FFC0F18DA13EFAC77,
	_GetApplicationsThatSupportMimeType_Invoke_m2E44CA60342C46ADD38AEA3B650D8E45D9C25B90,
	_GetApplicationsThatSupportMimeType_BeginInvoke_mB449C045D93EDE136156F5BD6A7DA500BBFC364D,
	_GetApplicationsThatSupportMimeType_EndInvoke_m52149F47CE82D4F0407ECB5B0107F07E23E8FA4D,
	_GetApplicationLaunchArguments__ctor_m5B415E5A50BF36FED3064BAD9299D32152D6BCE7,
	_GetApplicationLaunchArguments_Invoke_mFD00354633C9F588A367FA39D5EDEDD4869E0D6B,
	_GetApplicationLaunchArguments_BeginInvoke_m8E0909026D3960B7D6216F1123615B924ADE684A,
	_GetApplicationLaunchArguments_EndInvoke_m3DCB3395D1A824A5465997038827E812260E46B6,
	_GetStartingApplication__ctor_m6358DBAB31D800587816943B21C5C67996E8C51A,
	_GetStartingApplication_Invoke_m21A9C1890FBEBA71368CD45CD20B7A9FDD4B5539,
	_GetStartingApplication_BeginInvoke_m8F896B0DD0051D25D239818665B8E196FA9F0D4F,
	_GetStartingApplication_EndInvoke_m194185DEDC3608DCD06036855A1AD63D20679DC9,
	_GetSceneApplicationState__ctor_m3D75EC080D244C8899BEF8C92387CEEBC14D2FEA,
	_GetSceneApplicationState_Invoke_m542DB784BA10AE93AE1838092FD8FDEEC588EB0D,
	_GetSceneApplicationState_BeginInvoke_mA5A03BD8C6695B9C41BF64ED3CD783ED752AC438,
	_GetSceneApplicationState_EndInvoke_m8526A4318C0BCBFF85FD70E84F901065767130F8,
	_PerformApplicationPrelaunchCheck__ctor_m9D7A16C8F59CC82FD39E677E70F3616C4F02B5A8,
	_PerformApplicationPrelaunchCheck_Invoke_m8D6EF01D0CB9E75F2A8B15D08398E961F2A5E382,
	_PerformApplicationPrelaunchCheck_BeginInvoke_m6D6142684A17C5B2A4E655C954B92222D2A05FE7,
	_PerformApplicationPrelaunchCheck_EndInvoke_m6B8EF0B50574EC85A5993D6F945CA60D8B5585B6,
	_GetSceneApplicationStateNameFromEnum__ctor_m3A0C085883CC1C3C21C69B13CCF2F948D79382A7,
	_GetSceneApplicationStateNameFromEnum_Invoke_m052BE2700BFEAC0B9C2C02D7EEDDE1A678140CCC,
	_GetSceneApplicationStateNameFromEnum_BeginInvoke_m71CBDAA62544972F7E9A2F4B1C6CACBB78403D97,
	_GetSceneApplicationStateNameFromEnum_EndInvoke_m7C576D40A1B6483A4B7353450DA3C653BBB39C02,
	_LaunchInternalProcess__ctor_mD715D4E53C6502A839513630F9512A22B1D372EE,
	_LaunchInternalProcess_Invoke_m2F475AA428329139DCA7BE848602D64AF5B73843,
	_LaunchInternalProcess_BeginInvoke_m18EBBC862ECC7DE3A8B8A3DFEAA16D15E50E432D,
	_LaunchInternalProcess_EndInvoke_m234BB770068DB6B7694D534A7C553650B1923E86,
	_GetCurrentSceneProcessId__ctor_m13E5F36329A701A41F0DCF4867AED8696B7B2F6A,
	_GetCurrentSceneProcessId_Invoke_m7BC66763C751577BB5DD8F7319404E7B52C651B6,
	_GetCurrentSceneProcessId_BeginInvoke_mC6303D67D5A46292C796F7259D93FCC55026E81C,
	_GetCurrentSceneProcessId_EndInvoke_m27704B16B69B2EDFC47E56DB7F2C4F24D09B9B47,
	_GetCalibrationState__ctor_m05816C9069E933CAC9EB3F09CE59B9861196965E,
	_GetCalibrationState_Invoke_m2B2B8DC361E167628CAE8AD7CCCF7548FE089DDD,
	_GetCalibrationState_BeginInvoke_m60D7C7EF72A75155F1BF0627311E3D4F30CD1FD4,
	_GetCalibrationState_EndInvoke_mC2E5F8AD80FC8C005A1C6F4D05F1FFA504CA67C5,
	_GetPlayAreaSize__ctor_mC55E2A073376E46A91ACB787860A03AEC35462FF,
	_GetPlayAreaSize_Invoke_m0A94C0DE871EA2CF0410D702813001431F2EF64E,
	_GetPlayAreaSize_BeginInvoke_m9FE0ED4E0F091C11335979839771EB4FF5E08231,
	_GetPlayAreaSize_EndInvoke_m7F3C97C1C6E6880CA800CFD8A63EDBD9DE5015E1,
	_GetPlayAreaRect__ctor_m1B8144CCCBA3CD4677DE614A8CB97F474873089F,
	_GetPlayAreaRect_Invoke_m5AC0A6524F4E2B4077861EAA543C3A4E97427467,
	_GetPlayAreaRect_BeginInvoke_mC523C600D167A790D0558A29768A7869B86083F0,
	_GetPlayAreaRect_EndInvoke_mDBE3F23A61A08FEDAF6B09575B8C17103AAA992F,
	_ReloadInfo__ctor_mB2C1474FF6F843660B8E09104CE382301071F646,
	_ReloadInfo_Invoke_m21BC6A5CF9319DAA91D199CBDD06B4667E8D6F9F,
	_ReloadInfo_BeginInvoke_m1E4886EE3E3CBDF49B4C0403024DD1712A585182,
	_ReloadInfo_EndInvoke_mBC7344077A463B3D65C4BC35BE374F3CA0647A96,
	_SetSceneColor__ctor_m73BF4D2E9531B83DC175A92B96DE33ABA6AE487A,
	_SetSceneColor_Invoke_mE8523EB4577CF4C0F46B6AE21E80754900A0AE3A,
	_SetSceneColor_BeginInvoke_m0CA41297A4483EFEC8C05112800D4AFCFCC35DE2,
	_SetSceneColor_EndInvoke_m5F5CC03A800A4AC822B3E79F000FB17035C3344A,
	_GetBoundsColor__ctor_m3DF01EFBFD2D1B70279741AFCEC3DE440603654F,
	_GetBoundsColor_Invoke_m56F7FB72D6E562E5D493D1AA10CF578EE0AAB2E3,
	_GetBoundsColor_BeginInvoke_mFD91558B5B96CD1C508DF876DB4BF5E963B175D1,
	_GetBoundsColor_EndInvoke_mB04612CD131DE880E66D56B9D0B8D0413CBC243D,
	_AreBoundsVisible__ctor_m6C7A9771FD5B6A48E76C19EBC2CF6BFEEFDE2683,
	_AreBoundsVisible_Invoke_m427C43D6B0081E3AB82613BB6C199E0B25DC806F,
	_AreBoundsVisible_BeginInvoke_mF790CCD2F35C99E5A47095F3FFE5117C817F14AF,
	_AreBoundsVisible_EndInvoke_m20D94A618BA9556C844DB44C6F59702EE6A1203B,
	_ForceBoundsVisible__ctor_mA21DEB58F585C2652977E85D545B68ECA4ABD2B3,
	_ForceBoundsVisible_Invoke_m4837D163BA640E68D1C3916668E6E6C25620FED4,
	_ForceBoundsVisible_BeginInvoke_mC7E31937D46FA2C7CC29CEA6B3F3D4D7C4D99F6B,
	_ForceBoundsVisible_EndInvoke_m1ED903EF7A3C4ADE8EBFB71194232AAE8408D37F,
	_ResetZeroPose__ctor_mD59967DE4458235FE163B5DF2B174963DC4B27F4,
	_ResetZeroPose_Invoke_m60A75C4921A07A59498413F07C9EDEF6F0DC0125,
	_ResetZeroPose_BeginInvoke_mEDCD2B2B7B9E9D4D3E4E58F093050701D2816320,
	_ResetZeroPose_EndInvoke_mD93A3BF7C3AEF290051AF1ED1FADCB92E52B09F8,
	_CommitWorkingCopy__ctor_m0B3EE2119D388B97C113164B287EEA61CD64F2C7,
	_CommitWorkingCopy_Invoke_mD62C7580ADC1DA19A15F1DC99DC7A3705C78412F,
	_CommitWorkingCopy_BeginInvoke_m3FC64C890F01DB5B2487D87FD8E13DA89CE0A81D,
	_CommitWorkingCopy_EndInvoke_m3E0FB3F2AD49C31D8986926757614C3976753002,
	_RevertWorkingCopy__ctor_m5C1806CA913C0C370DC9865CD96EF6F6D7E9E453,
	_RevertWorkingCopy_Invoke_m2AB452ED37B1CBB8A06BCAA4CF918C1E114F3DBB,
	_RevertWorkingCopy_BeginInvoke_mE95C3E30A84CFB49F5D7435144ED347EC68845B2,
	_RevertWorkingCopy_EndInvoke_m06FDEE74EFE549EEA92BFFB4BD4F456963AF9281,
	_GetWorkingPlayAreaSize__ctor_m3667369E47690D904264434DD7C3D39E7CF48C2C,
	_GetWorkingPlayAreaSize_Invoke_m20BF12F418068B088279BDC8FC687731578C9956,
	_GetWorkingPlayAreaSize_BeginInvoke_mB3635B13628A87049BA9CF7738C28716AC1EB1EA,
	_GetWorkingPlayAreaSize_EndInvoke_mAB6A0E61F2501D0ABC1CF421604CC65509824C18,
	_GetWorkingPlayAreaRect__ctor_m631C66E95163B9A1E9A5245DD12690C6A5742A48,
	_GetWorkingPlayAreaRect_Invoke_m79F78E9709EF90F57E553BCD3A218F2864F7D3FA,
	_GetWorkingPlayAreaRect_BeginInvoke_m0C3273FF5DA4B1956D6E7649F667158FD69223FA,
	_GetWorkingPlayAreaRect_EndInvoke_m43F737067B84D43D2D0330FE3253E43CAF82DD23,
	_GetWorkingCollisionBoundsInfo__ctor_mD7A0476968978F48C5A0CBF08C21F953294534EF,
	_GetWorkingCollisionBoundsInfo_Invoke_mA6A533EC8435C95C0ADCBCDBE8C8BF36D11BA409,
	_GetWorkingCollisionBoundsInfo_BeginInvoke_m994C90F35BC31146FA9ABD13FBACC5A99DDB184C,
	_GetWorkingCollisionBoundsInfo_EndInvoke_m97820427E415E3188435B1485DAB9C13842A2094,
	_GetLiveCollisionBoundsInfo__ctor_m04060CCAEEE014C837C132B5E04E3AFD98B5D45A,
	_GetLiveCollisionBoundsInfo_Invoke_mE1F91F1678A05D342FC8A2F50C928DB931B85A2E,
	_GetLiveCollisionBoundsInfo_BeginInvoke_mE922BEA3BFAD6750524DBA3997E4DE7C848F1A43,
	_GetLiveCollisionBoundsInfo_EndInvoke_mC2D0CDE61E07BB4D66F25ADC20A8F1A851CE2515,
	_GetWorkingSeatedZeroPoseToRawTrackingPose__ctor_m5D2092D41B58AF9F2A9B9FE4B2CB69503150EB46,
	_GetWorkingSeatedZeroPoseToRawTrackingPose_Invoke_m179283D07C19038F28E64D0073CDA650B7F28C03,
	_GetWorkingSeatedZeroPoseToRawTrackingPose_BeginInvoke_mCF775FEC50DF1A0DF39FB6EFC5FCF4F16AF17E7F,
	_GetWorkingSeatedZeroPoseToRawTrackingPose_EndInvoke_m296FE95B2B8EFDCF8DB65318473631D6B4831B46,
	_GetWorkingStandingZeroPoseToRawTrackingPose__ctor_mD56A8894F92C655C323E19E0828DDE4D4047E8C7,
	_GetWorkingStandingZeroPoseToRawTrackingPose_Invoke_m8F3F25032C7BA054E29DD370079FAEE1B78EC060,
	_GetWorkingStandingZeroPoseToRawTrackingPose_BeginInvoke_mF989CED7AB16DE03E92DCACF5BF182C06718A5A5,
	_GetWorkingStandingZeroPoseToRawTrackingPose_EndInvoke_mC8786E0AD136A0223F18EF7616C26A55D18455E4,
	_SetWorkingPlayAreaSize__ctor_m58731A7114B09A63B35C76D7C259CF3443E2AD0E,
	_SetWorkingPlayAreaSize_Invoke_mEFE190AEB9D54F460A5FF463B287655FE56B1C78,
	_SetWorkingPlayAreaSize_BeginInvoke_mE06A231917648D9BD1BAF7B31C6BB050EFC2B0C2,
	_SetWorkingPlayAreaSize_EndInvoke_m6BAE0EF8F189D971D13A08C1F9548C6BD57AB92D,
	_SetWorkingCollisionBoundsInfo__ctor_m71ED70F8282065AD2153145684BFC04A45C2BF9C,
	_SetWorkingCollisionBoundsInfo_Invoke_m1A1E45AE96BBD86A213EA297873F3E8532E36064,
	_SetWorkingCollisionBoundsInfo_BeginInvoke_mB5D8627059B84564F58C592848914C33E93C6710,
	_SetWorkingCollisionBoundsInfo_EndInvoke_mF685AC46B645886DA746547BE4D8FFD4AE58E63E,
	_SetWorkingPerimeter__ctor_m14D52FBE600DFC016A8BE1BAEFFCBDE2BA39E53A,
	_SetWorkingPerimeter_Invoke_m9A0E89B9DCC7CD8F731E125922E7D3EC418EAF5F,
	_SetWorkingPerimeter_BeginInvoke_m3301CF999483A712D92F2CC2D56E8E800B400A0C,
	_SetWorkingPerimeter_EndInvoke_m6B9F9CA839F36BC19CACA253DF6C73D66A859F0D,
	_SetWorkingSeatedZeroPoseToRawTrackingPose__ctor_mED640B6E5BF461BD9E7FF4F43FE20B10D7FB9FA6,
	_SetWorkingSeatedZeroPoseToRawTrackingPose_Invoke_m8A6DB8AC6AE63773FAC6873512D10743A4B0D61F,
	_SetWorkingSeatedZeroPoseToRawTrackingPose_BeginInvoke_m25D734EF380BC995A2B6C41E4400520422C4FE85,
	_SetWorkingSeatedZeroPoseToRawTrackingPose_EndInvoke_mCC81A7C1256690C86DA6B79C2983F18A613D41A6,
	_SetWorkingStandingZeroPoseToRawTrackingPose__ctor_m66208500CDA2DB3ACE7A625063D1D741A1F3E900,
	_SetWorkingStandingZeroPoseToRawTrackingPose_Invoke_m8B641482AC27DF4012D657655A6B30FCDE02680B,
	_SetWorkingStandingZeroPoseToRawTrackingPose_BeginInvoke_m4DF872A865DEF23ACDBB58770AC96B84E9FC0710,
	_SetWorkingStandingZeroPoseToRawTrackingPose_EndInvoke_m2104B6B4E56F12273654A9714C6E08A013C78328,
	_ReloadFromDisk__ctor_m9EA3FF3F16EA5A27C1E7E9E4DBF46B264D68312E,
	_ReloadFromDisk_Invoke_m9BBD49785CB41BEB169BDB39AB0B1087AF79F7B1,
	_ReloadFromDisk_BeginInvoke_mE79F28BD6525B3EE0990EE8E12DE03DD1A0ECBBC,
	_ReloadFromDisk_EndInvoke_m8461A306F8F2E0E124ABBC4ABE222DB38B27494C,
	_GetLiveSeatedZeroPoseToRawTrackingPose__ctor_m444EB65768D7C4DA60996F40C5FFB61C4D041FEF,
	_GetLiveSeatedZeroPoseToRawTrackingPose_Invoke_m95CC5E17B1B02EC957F523CEA586611A5E07B7F0,
	_GetLiveSeatedZeroPoseToRawTrackingPose_BeginInvoke_m487B08FD6D888863594CC6AB0A9F8958C9A09324,
	_GetLiveSeatedZeroPoseToRawTrackingPose_EndInvoke_m8E0D7260344B6F9EB10E84FDA852689E8CAF39D9,
	_ExportLiveToBuffer__ctor_m67143B1FF4B60EAB8FDB642C5D1814F9F6B8B3DD,
	_ExportLiveToBuffer_Invoke_mC0A49C5584DF7287952A9673E28ED474F129EB79,
	_ExportLiveToBuffer_BeginInvoke_mA649694C80092626E183BC654E53BC4154F4565E,
	_ExportLiveToBuffer_EndInvoke_m9C8453AC3EA9CCCD0E2F5DA1C7A0E2C1F7854D18,
	_ImportFromBufferToWorking__ctor_m03C04DCA4E988E0F053C31516BA73B5A33286C47,
	_ImportFromBufferToWorking_Invoke_m89C838DC82C4FA2E80B285EF3817AC5E4071F44D,
	_ImportFromBufferToWorking_BeginInvoke_m71845D4D9C04D788F8773BB234983756B259DCD6,
	_ImportFromBufferToWorking_EndInvoke_m67E4B06D03482CBD81FA277F33EFEE48256A3C88,
	_ShowWorkingSetPreview__ctor_mF5C14B4EF5153E41F7D18CD9EC57CB8DC68EEB6E,
	_ShowWorkingSetPreview_Invoke_mF51C59677F90E915899B56BBD1431B63F8B1EC00,
	_ShowWorkingSetPreview_BeginInvoke_m9EF3B5B395CE548C0AEED133F0D5BAA306286303,
	_ShowWorkingSetPreview_EndInvoke_m57B4D862C497E75466FA033BC8BE2B66E2970098,
	_HideWorkingSetPreview__ctor_m2F6FAB41550DDA62E93A74673F73FA8F01A3D706,
	_HideWorkingSetPreview_Invoke_mD229818C545E61780513820FE3432132B4BE874F,
	_HideWorkingSetPreview_BeginInvoke_m009163C7BFC1713680E4B22C12E3976DED6A6C8B,
	_HideWorkingSetPreview_EndInvoke_mB41CC379B283C2AF99082DFAA5065590FB052B84,
	_RoomSetupStarting__ctor_m066B440F1F9D883B5090A3F9CAA15C63E72842A0,
	_RoomSetupStarting_Invoke_m2820BAB50828E1FDFC795907788C5DF2B1B57000,
	_RoomSetupStarting_BeginInvoke_m1748D39A287C01030FF1063AD0F25F3D80F641CA,
	_RoomSetupStarting_EndInvoke_mE88EF2A9054DD63B14C519D21ED0B6764759019A,
	_SetTrackingSpace__ctor_m03ABCB9B79457CCC5A8BE21F7336DA07EA15C676,
	_SetTrackingSpace_Invoke_m67D4984251B73BE8EC3BC0664607D207FCCB4851,
	_SetTrackingSpace_BeginInvoke_m6EEAA541CAB9346D7343882D93FD62453D4E259C,
	_SetTrackingSpace_EndInvoke_m6CE9A966E908CC0301491505F4E0530D7B66D132,
	_GetTrackingSpace__ctor_m37F6503512CD44801A572516F8E70117A1BE739F,
	_GetTrackingSpace_Invoke_mBCE98E49C7819603F0F250922E14C08ABBF120D6,
	_GetTrackingSpace_BeginInvoke_m6A63D6711E6A3240471C89AF0D168E4281BD2D52,
	_GetTrackingSpace_EndInvoke_mD3A8C0F98BD118183A2D288FCCA6A8D5B9FDD7C0,
	_WaitGetPoses__ctor_mF08E51B4A262A11BF811BAEB6741B22CEEC182D9,
	_WaitGetPoses_Invoke_m5E40A435F4B70853F9529122C0D2CF038A333860,
	_WaitGetPoses_BeginInvoke_m023950A600C3CA77F8E36686C4C3CBE6F49465C9,
	_WaitGetPoses_EndInvoke_m6FB653ED757797EC261ABCF44AEE3EC63088A174,
	_GetLastPoses__ctor_m7F1182FD3316EEDBDCB8D8B50843F024C07AD10A,
	_GetLastPoses_Invoke_m0D2CE329D7570AA242AEF11A0E8AEAE3E8DC6D62,
	_GetLastPoses_BeginInvoke_m70C0000BED51025CD7982AB7D96F74F02B0170FA,
	_GetLastPoses_EndInvoke_m3DC6DA8C1F4C95E5158393160612CAF03220914A,
	_GetLastPoseForTrackedDeviceIndex__ctor_m7855230C7B92004877C9555E2A9E5D3C8269C1DC,
	_GetLastPoseForTrackedDeviceIndex_Invoke_mB61532E38E0883AECD2B935057BAA76791BB64EE,
	_GetLastPoseForTrackedDeviceIndex_BeginInvoke_m815409E75D9F9171428E023B8E97B7DDE84A58AB,
	_GetLastPoseForTrackedDeviceIndex_EndInvoke_mF331F63253EEA967A6FDE1E1D92F4320A1799247,
	_Submit__ctor_m308CB6F484FB7CFFBA95811A76C8E707EB2F3E6F,
	_Submit_Invoke_m5A46D9E4C920B04568E8535B997E70E9DDAFA05D,
	_Submit_BeginInvoke_m8B75E18B928AC9DC3FF2C6F479CCB413418749F0,
	_Submit_EndInvoke_m5E85F1CED9F6BDA1888BDCA9E71BB70294BB104F,
	_ClearLastSubmittedFrame__ctor_mC5651FBB66083C473F251C466C9D7AEBD957C5FF,
	_ClearLastSubmittedFrame_Invoke_mE53E90D4630F66D5A8AC8993E3DC2175AAD18F44,
	_ClearLastSubmittedFrame_BeginInvoke_mECF47C3E172B849925514BB5FA01B3B31EF774D0,
	_ClearLastSubmittedFrame_EndInvoke_mB2F3523A2A9E064816CCF430041697A696665E1C,
	_PostPresentHandoff__ctor_m562E65CC7A18A0B006C67436FFD6874872F62BB8,
	_PostPresentHandoff_Invoke_mA9F3F0CE66F18CF3D2FF648C7FBBD80AF18C6CAD,
	_PostPresentHandoff_BeginInvoke_m1D8B79CBF7927B011A8B9587080E9892C84E101E,
	_PostPresentHandoff_EndInvoke_m25111B8F210A0F30052DEB1966C6AF49B1C67FFD,
	_GetFrameTiming__ctor_m8A3BBEA403E4B0572A61CC729A81FE68BC48D4C2,
	_GetFrameTiming_Invoke_mFFD8DE2BE77A8D576B3167C33FC11B007DCF35EA,
	_GetFrameTiming_BeginInvoke_m5756D98BD03797ED57CBBF4288C7CDDC399F4FA0,
	_GetFrameTiming_EndInvoke_m044B9BE4388C2B40EF1879B499E9E362D83A3F94,
	_GetFrameTimings__ctor_m4D8B978E09F87A2A9F76B2FF82BDD60B1E8DAB73,
	_GetFrameTimings_Invoke_m1ECBCA45242D34E054574DEAD5A29E58EF483149,
	_GetFrameTimings_BeginInvoke_m754CC37E30C8DA3A1E2D8313F5C605687DBE6B06,
	_GetFrameTimings_EndInvoke_m8321184C97B2F9F6344E14E4E66042EC384F10DE,
	_GetFrameTimeRemaining__ctor_mF07E58AE1F8C6D0848045FC55D70E7D041AA732E,
	_GetFrameTimeRemaining_Invoke_m9F36795A553B849104DD4B84E93DE113E2A02D09,
	_GetFrameTimeRemaining_BeginInvoke_m2887A4DBDE83E31060F49863B1B7FC5FCE941C93,
	_GetFrameTimeRemaining_EndInvoke_mEB14113A65B100E9C8F274BFB782D41C37CB5BF1,
	_GetCumulativeStats__ctor_mFEE0AE41B64F0E7457424CE5FE95C6C54BA80351,
	_GetCumulativeStats_Invoke_m0443B8625EDEB1D5B11AA478C684286FD855FA38,
	_GetCumulativeStats_BeginInvoke_m01D69C93CDB84BB8296D739BA67CABDB9562E09F,
	_GetCumulativeStats_EndInvoke_mDB1C61972CEB8262AB77EC6AC3D733C0CDA2EC4E,
	_FadeToColor__ctor_m0F314D8748E1C605407C6308AD42E6A963EB2848,
	_FadeToColor_Invoke_mEDD58F09A857B0F17BB3958103F83C60530EEE7B,
	_FadeToColor_BeginInvoke_mCBEDD02A23615C9E5BD2551D391E48539D26A750,
	_FadeToColor_EndInvoke_m0D605F60C8110603D71B6680B486FB4F0B875A81,
	_GetCurrentFadeColor__ctor_m4FF98250992DCCA34BE8C09783259231EAC268C9,
	_GetCurrentFadeColor_Invoke_m3A565A37FCC39B533667415F023E9C782EF42029,
	_GetCurrentFadeColor_BeginInvoke_m4E840E08E93AD28A6659FF46766F84E78C7174F2,
	_GetCurrentFadeColor_EndInvoke_m7AD3F1FA50A6823563B1AA7E9F14751AAAE991D5,
	_FadeGrid__ctor_m73C4BBD52B2434CD9A7C770A70095289E21D88F5,
	_FadeGrid_Invoke_m9E05D8ACC2212ECB8BEBAC27F9A4B042E8AFF7FA,
	_FadeGrid_BeginInvoke_m35A6FB560544D72D1805D6027205EDBFC2EDF3D9,
	_FadeGrid_EndInvoke_m3F789E9C6034E1B56090A5AE79ED970BF0DB017B,
	_GetCurrentGridAlpha__ctor_mE82C9F3E387EAF1683526D774665DC1A3D8E443A,
	_GetCurrentGridAlpha_Invoke_mAE5612038EEDB66EDA1553D057B16A9BC56F8483,
	_GetCurrentGridAlpha_BeginInvoke_mCE2482577BC96B55A87AC03D3CFC218E76F1F899,
	_GetCurrentGridAlpha_EndInvoke_m5C80FAF5C8875312B7DEF753A851F002FBBD8660,
	_SetSkyboxOverride__ctor_m3558ED217E55B2B89B9762A56C3D68C6B2FB72EC,
	_SetSkyboxOverride_Invoke_m422FA534BE787AD97B611EBC82438E658A531E23,
	_SetSkyboxOverride_BeginInvoke_m7703A2643EE36421272F6C65C56DC05B700F218F,
	_SetSkyboxOverride_EndInvoke_m97E5B9DA41EAB2181162F2900BA60AF8EDA10A6C,
	_ClearSkyboxOverride__ctor_m1819B611D9A1DBC47F8E46D2BF3FAEAC434F7E3C,
	_ClearSkyboxOverride_Invoke_mFFE28DE9FBA73A8A082FC095FFF6D036EBB5D064,
	_ClearSkyboxOverride_BeginInvoke_m934CF4879D4FD64B9EF84D19E2B51D1F1801A85B,
	_ClearSkyboxOverride_EndInvoke_mE02AD8C47C3B208F5650CAB19739E6D0332D7A11,
	_CompositorBringToFront__ctor_m084E5461F2A104D0A54463BA680F279151715B94,
	_CompositorBringToFront_Invoke_mF465711A893D1529D201ADD0D85BF269E49B02E3,
	_CompositorBringToFront_BeginInvoke_m137FE38E18ED27023FAC12ED5EFCC1CD5E919707,
	_CompositorBringToFront_EndInvoke_m3786F23B48C0CE4AC05BD2A7A63AD13E43C6FCC9,
	_CompositorGoToBack__ctor_mD5EE05F7D57D609161E98BC8584A9B101D40103E,
	_CompositorGoToBack_Invoke_mE437B66B5AF43D1342B601B8346C96520EF5E208,
	_CompositorGoToBack_BeginInvoke_m9249A23BF61F0546EBE8E653B74AA005ABBF4851,
	_CompositorGoToBack_EndInvoke_mABA579DDDFD294CE7350329D72BEBD4F5760BA09,
	_CompositorQuit__ctor_mA9A03F9E5358D6B3B0CDFB87EE94D29A6893B403,
	_CompositorQuit_Invoke_m0BFBC0F7101144FC3BF8E88A6696B634A36DF091,
	_CompositorQuit_BeginInvoke_m5F210A4E2B77C8F79E252BD452FE4C0A72C7ECE9,
	_CompositorQuit_EndInvoke_m2B4013E3809607C99B333E76395EE32FF88A9E96,
	_IsFullscreen__ctor_m5DC9E1CD122A8D4B2AE927DD40FC01E7336A1C8E,
	_IsFullscreen_Invoke_mBDF9AE1B73859A1F229271303B1288A7EEA53507,
	_IsFullscreen_BeginInvoke_mF652F4D0F66C33C4C1D1D4D96CC3AA3EB9BB1C1F,
	_IsFullscreen_EndInvoke_m503956881818EA240482A8C82882DCAA517E7F63,
	_GetCurrentSceneFocusProcess__ctor_mD3FD522CA07C2AFC4EBCD6C9ACF982CB8D8BC336,
	_GetCurrentSceneFocusProcess_Invoke_mF0DAE9B6DC891E8009C74BB03EEFAF77E6B293BF,
	_GetCurrentSceneFocusProcess_BeginInvoke_mA90E21D8B098B2109DD521B268EDEDD434477142,
	_GetCurrentSceneFocusProcess_EndInvoke_mF4822CE83C78E4A55F7F665E6239C927D16FE558,
	_GetLastFrameRenderer__ctor_m2179DC52FE4E92E6818B4070CD6A9345DAF9FB85,
	_GetLastFrameRenderer_Invoke_m4D0612BCE129E02FDBB80986E3828186F716ABCE,
	_GetLastFrameRenderer_BeginInvoke_m81A1E51DD46E4D9732D70D5A5374E5532883C9B1,
	_GetLastFrameRenderer_EndInvoke_m1A7164A5B2E4CAB0083905236C2A479BA5D35AC0,
	_CanRenderScene__ctor_mE4787BEE8167286F417D66C2757E6AE0EF376314,
	_CanRenderScene_Invoke_m3C7BCC94FCB6B4D943C4BFE5884E2F615633D619,
	_CanRenderScene_BeginInvoke_mA822BEE077B0DA2D0C40F84E1F13F9D6C48E9A75,
	_CanRenderScene_EndInvoke_mF4B9945B818E3380154479443794104D8B76329C,
	_ShowMirrorWindow__ctor_m2BC14AD23258C8A096032DD0CF542661D62432D5,
	_ShowMirrorWindow_Invoke_mD86E5BFF353813A054A8922006EC9F756B2CED67,
	_ShowMirrorWindow_BeginInvoke_m3CD82722E68FF3D517B32DCC0CE0785135AFDA9E,
	_ShowMirrorWindow_EndInvoke_mECAF3460DFEB870E7A1A61FD5AE4E27ED78C5398,
	_HideMirrorWindow__ctor_mEBB4BAE85431B97E3DBE110304DA458004E23A12,
	_HideMirrorWindow_Invoke_m26F72485CA84A28E60DAB7894ECD4759B083BA0F,
	_HideMirrorWindow_BeginInvoke_m0E25073817687F25B32BD7BD4761F929F919414E,
	_HideMirrorWindow_EndInvoke_m793EAC87AD33C58266E4CD85146B347B6755A6A0,
	_IsMirrorWindowVisible__ctor_mABE2F258EAB706A178283C6F212A76592FEB81ED,
	_IsMirrorWindowVisible_Invoke_m52EE0CD1467395E4D5993909FAB6EB6CE082FACB,
	_IsMirrorWindowVisible_BeginInvoke_m7EA1332D3120CAF9AB1A5D08344C02F0CB7FCB00,
	_IsMirrorWindowVisible_EndInvoke_m2FAE2BF44B43CEEFF20B2349AE7F3CBA6F8F5CC9,
	_CompositorDumpImages__ctor_mC952E8A7A37910F8B167793AB7FAEA11BB9A88BF,
	_CompositorDumpImages_Invoke_m3CCE0252E1EC04C8F85A735B7F6EA5CAEC4849FF,
	_CompositorDumpImages_BeginInvoke_mF2D9EB426E84AD9BD2CB99966724297D63CAB029,
	_CompositorDumpImages_EndInvoke_m6328B57E9474FCF5D99F571D239D5F0746C90ED8,
	_ShouldAppRenderWithLowResources__ctor_m654877BEABC8C33886E9DB203BB9B855471F25BA,
	_ShouldAppRenderWithLowResources_Invoke_mF118E5E924B64F2813EA5F9D19F6CD92602FB5FD,
	_ShouldAppRenderWithLowResources_BeginInvoke_m5B134155B6BAF58EF0F1B7B4E48D4DDD6132F546,
	_ShouldAppRenderWithLowResources_EndInvoke_mEE359B7BE4A06C6864CB07A5FAED79454486389F,
	_ForceInterleavedReprojectionOn__ctor_m9660BCD609B9E79C49BBC32696A5DC0433F5D568,
	_ForceInterleavedReprojectionOn_Invoke_mC8C683058C003C3D766311C51E5993B9673674B9,
	_ForceInterleavedReprojectionOn_BeginInvoke_mDBB23B0A6FE9918C7EAF81F872C1332A30BC32BA,
	_ForceInterleavedReprojectionOn_EndInvoke_m9A517993A9A5A681D6B435931B295AA2F3B2BD5C,
	_ForceReconnectProcess__ctor_m83BFA35D718A9252370FEC0F14036869880E6C95,
	_ForceReconnectProcess_Invoke_m467CC0287CBCD3EF9342B10862B1F5CC8685099F,
	_ForceReconnectProcess_BeginInvoke_mFA702A433D06C0846CFD5BB65C55532BCB3D466D,
	_ForceReconnectProcess_EndInvoke_mD76611B40307EC4B36C3C08B32E0CB4236C6A281,
	_SuspendRendering__ctor_m693458BF320080B17FFC4C9C407606CB49581936,
	_SuspendRendering_Invoke_mF96E3321CA979767C1053939615DC010D29A6E8B,
	_SuspendRendering_BeginInvoke_m3DFC85EA6AB4F7537A4B043CE8ECE78B81FF004D,
	_SuspendRendering_EndInvoke_m37BECA92630A80D6BD864E2C7EF9317D9C2BE744,
	_GetMirrorTextureD3D11__ctor_m1E610C849D1983A74288D4794F37B8F74D67D068,
	_GetMirrorTextureD3D11_Invoke_mEFF88E3EC2360B3809049822F265F1D0493DE849,
	_GetMirrorTextureD3D11_BeginInvoke_m2C90E8B34B5484D947DEB99BFCC34DB7C3F5D825,
	_GetMirrorTextureD3D11_EndInvoke_m7EFA5BD889ED185F15BE4271771C7098BCDAF7D9,
	_ReleaseMirrorTextureD3D11__ctor_m8FE1869645E0C239BA812E8EEC837DD0731D21C4,
	_ReleaseMirrorTextureD3D11_Invoke_m00CBE05E5720705AC506EFFDEB1BDF898075FD23,
	_ReleaseMirrorTextureD3D11_BeginInvoke_m02F2948E6CBAAA1E962C45C465F4AAAF94E96C3B,
	_ReleaseMirrorTextureD3D11_EndInvoke_m6E3D3D4642F81E84A4D1EF3BB1D951847F8614B2,
	_GetMirrorTextureGL__ctor_m6A8267BD3BA9381B4E95CDC500EEA3877D1FD61E,
	_GetMirrorTextureGL_Invoke_m8F8CD0986A1956C923C54F34CABFCD97BBDA8A96,
	_GetMirrorTextureGL_BeginInvoke_m39B3E5F444F7860DAD869AF1B36A02B167AF23F0,
	_GetMirrorTextureGL_EndInvoke_m67BE3FB60C043DDA43ABD4D746D1596B3EF519D2,
	_ReleaseSharedGLTexture__ctor_mE0CD1D5CABDA39E20151368700AA73158466B524,
	_ReleaseSharedGLTexture_Invoke_m9543DCD559083CEE2FCFE47D7762F142119DB9E1,
	_ReleaseSharedGLTexture_BeginInvoke_m7689EC4980AF0B52752E141934BD4BA785DE6A2E,
	_ReleaseSharedGLTexture_EndInvoke_mD0EC29CBB0B7C9CEA787950751CD9FE8E41B9318,
	_LockGLSharedTextureForAccess__ctor_m866FAD610EF57D871CC2FE5EA69AB81252E7A366,
	_LockGLSharedTextureForAccess_Invoke_mB74C3046204B4AD38685242C3D29325BC8C08AB8,
	_LockGLSharedTextureForAccess_BeginInvoke_m687D6D0682846B55C6B0CC7EAA4716764138274B,
	_LockGLSharedTextureForAccess_EndInvoke_mA557AF9DFBEB117D7DCE79A90E81198C4F487087,
	_UnlockGLSharedTextureForAccess__ctor_mC37ACB44C3732B9B2FD8E8819773F27BE3459F79,
	_UnlockGLSharedTextureForAccess_Invoke_mF6A9ED79624E455EE6186C90B266F46A3369D870,
	_UnlockGLSharedTextureForAccess_BeginInvoke_m034B6D5BF010591F8CB1A5B432DF998FDE3A51FD,
	_UnlockGLSharedTextureForAccess_EndInvoke_m5A5D18F06E7E8AD0A4635D28AA3ADF65B7D61550,
	_GetVulkanInstanceExtensionsRequired__ctor_mF177FC7690CCD79F3FF2F4CB500800FC10B4E7EA,
	_GetVulkanInstanceExtensionsRequired_Invoke_m8006FB981A90ED7D3753F1782A8F21F638476A51,
	_GetVulkanInstanceExtensionsRequired_BeginInvoke_m3DD6E278EDD84EA2BB18ED5A31FA7F1BD9AB5A20,
	_GetVulkanInstanceExtensionsRequired_EndInvoke_m07C9914623B2101D9257494ABC6EE62F7B35A0B7,
	_GetVulkanDeviceExtensionsRequired__ctor_mBD60E09C70FE9AE1E108346A94E4FCFFD19A4BBF,
	_GetVulkanDeviceExtensionsRequired_Invoke_mCA270DABE586BE08C7D8F1E3BCA0D3B7F286C44E,
	_GetVulkanDeviceExtensionsRequired_BeginInvoke_mADE7B09828025CC2CDF86A30EF703E8E2A787ED7,
	_GetVulkanDeviceExtensionsRequired_EndInvoke_mE27BCEEF86D83DC36D569869CBCC2E9C58047CA8,
	_SetExplicitTimingMode__ctor_mCB9ECC791DE99F2B9D9D5A376CB5FEE4C764746C,
	_SetExplicitTimingMode_Invoke_m642B0EA68F439C4B8BC1C76D01CED2925F343BB0,
	_SetExplicitTimingMode_BeginInvoke_m4934D668E784652649BB8E173754F9642383531D,
	_SetExplicitTimingMode_EndInvoke_mBBE5CD0D84716EA15C5C69558ADA23A568246E35,
	_SubmitExplicitTimingData__ctor_m057F9C4315B91421957555242B3837F9999BE219,
	_SubmitExplicitTimingData_Invoke_mD5E8D4923393AEB95EE9D6369F459CD6541E9DA9,
	_SubmitExplicitTimingData_BeginInvoke_mD1282B0214D2FBD461C9F786C0F99A1C738D4103,
	_SubmitExplicitTimingData_EndInvoke_m2DA94C1D562DD3041380FEB8633ECC5D48C3F39D,
	_IsMotionSmoothingEnabled__ctor_mE30A3770F028A237B0C49DAC33A4BF91D6305D23,
	_IsMotionSmoothingEnabled_Invoke_mAED56BF20FC684632769C1DFA38CBBCFADCB1E41,
	_IsMotionSmoothingEnabled_BeginInvoke_m3FF7068C4CD4DEA0185F5019DDC40E24170E7CA6,
	_IsMotionSmoothingEnabled_EndInvoke_m4208EA8A489A026577E91074181CC7D76AF30F07,
	_IsMotionSmoothingSupported__ctor_m932A6B760A8C2B27D2F180512372602D9F8CD9AB,
	_IsMotionSmoothingSupported_Invoke_mAA26D9EF78630D63B988369CFA518D135A4E6B84,
	_IsMotionSmoothingSupported_BeginInvoke_mCC83A2C143F01E31A8C63B08EB75E6876996CBC8,
	_IsMotionSmoothingSupported_EndInvoke_m03F727257C9CCE05F14190FD0528A9AA63FD6E5F,
	_IsCurrentSceneFocusAppLoading__ctor_m1F283E4445151B32BBE9C923CAF78ACA53F951FD,
	_IsCurrentSceneFocusAppLoading_Invoke_mD4D5BA2E5190925C5FDAE41F20E3608A6DCDA5CA,
	_IsCurrentSceneFocusAppLoading_BeginInvoke_mAE9B3694C0B494667E2BEB55101B0B8090701694,
	_IsCurrentSceneFocusAppLoading_EndInvoke_m90CADCDE9BB8BD43AE3800915CC2FF063211D73C,
	_SetStageOverride_Async__ctor_m5038A9F8CB80951CFA951E0E163A4C8FA039B129,
	_SetStageOverride_Async_Invoke_m9086E07D92B15FE92ACE65CD7BEEF4A3657A1E46,
	_SetStageOverride_Async_BeginInvoke_mE365D658DD06C30902A8150ABA598BB39CBF6CA7,
	_SetStageOverride_Async_EndInvoke_mD8E10C7CEEC1E99ED7BCD1F7F867083EDBE289D9,
	_ClearStageOverride__ctor_mD9EC581B15975C815A209805E00D997441E43AB6,
	_ClearStageOverride_Invoke_m0D4B0FE7F41CFAB388779CB1507E0F74667BE56D,
	_ClearStageOverride_BeginInvoke_mF91F0BF2FB43EE1B6F6768670F9932116D364645,
	_ClearStageOverride_EndInvoke_mD3451D5EAFABBA1D77573A207413EAF1DDF431EA,
	_GetCompositorBenchmarkResults__ctor_mF8946895D40106FED34A121785155FFCED4B17D8,
	_GetCompositorBenchmarkResults_Invoke_mAADACC2AA396EC519D2228C6D252F9D22596AEA8,
	_GetCompositorBenchmarkResults_BeginInvoke_mEB49FF9A77BB5CFCF1128C02FB437ED492F83CA8,
	_GetCompositorBenchmarkResults_EndInvoke_mA8C74AA345F4ACBCB367187CC631686EEC760B80,
	_GetLastPosePredictionIDs__ctor_mEB096903655592B3EFD087203AA7A997122E37BD,
	_GetLastPosePredictionIDs_Invoke_mC3D427D0D9D8EFADA74A323AD0A5BCF40C703A5F,
	_GetLastPosePredictionIDs_BeginInvoke_mED057EE2FC67505DFE12C6A235A64F0802BB6831,
	_GetLastPosePredictionIDs_EndInvoke_mD28F1964B58CD98386345403BC81116D9228CC86,
	_GetPosesForFrame__ctor_m5E2EE50BA821D5BCBCF259078F5F3073299543DC,
	_GetPosesForFrame_Invoke_m87B8A0C118CCBB5ABE61D305F19FE6BB9A6E1D11,
	_GetPosesForFrame_BeginInvoke_mF17517396F65B200D1B3400805AC493E015F5177,
	_GetPosesForFrame_EndInvoke_mCE02224230450BD1628A3A643DEA32F55647430F,
	_FindOverlay__ctor_mDC69473CDBB3705D9EA4A0B9C1F92FBCD20DAAA2,
	_FindOverlay_Invoke_m1309636D78D94EEA5F6FB26FE60A81D3037B4E2F,
	_FindOverlay_BeginInvoke_mB8135F178228F130B09AB33F352CECEC47729023,
	_FindOverlay_EndInvoke_mEFAB7DFBFD0D0F441B5EC694C08AF7BC4C0E2BC6,
	_CreateOverlay__ctor_m436F63E2E98545CE9C24DAFE4E22EDD4D05B4454,
	_CreateOverlay_Invoke_mD80FF0E4D9A03A87AD41CF853882392032B10653,
	_CreateOverlay_BeginInvoke_m675E3622D0A23533ACC19B1E7DC76AF7CB857D5C,
	_CreateOverlay_EndInvoke_m649C861BEE0C4EA3FD255DDABDBCCB9DAFEE0635,
	_DestroyOverlay__ctor_m0D876DEEA9FE374E3B7D775000E05BE43BD7B336,
	_DestroyOverlay_Invoke_mC9B703C32D5CE2E7CDE27E9B1212969D72B3BD33,
	_DestroyOverlay_BeginInvoke_m7EFB0B7DCB87D0972774D09CE604CF4F52546187,
	_DestroyOverlay_EndInvoke_m606AD6FF618656CA0462C2ADB81D0526C9403DA7,
	_GetOverlayKey__ctor_mD247E80C9DCF16665605304E0DC45055D34CE44B,
	_GetOverlayKey_Invoke_m765D98778ED2AE43FD026B6477DD51A4335BB1A1,
	_GetOverlayKey_BeginInvoke_mD98463AF0FBA49ECDDA4B3B2064002828C58FE0D,
	_GetOverlayKey_EndInvoke_mB37153CC22DACEDD8A66924DEF9AE8D551FFC881,
	_GetOverlayName__ctor_m415E701A501C1AAF0D0B10C5DDDB1CC8E44D20D0,
	_GetOverlayName_Invoke_m4D06E85E87CC98EC3AB15D972E6585A9A5644BA5,
	_GetOverlayName_BeginInvoke_mA919008675EA92571A9FE90316FE1EB6A6DFFA1B,
	_GetOverlayName_EndInvoke_mB98A549234E84832DB52709E7B84D751CDA2EB55,
	_SetOverlayName__ctor_m41B138E7E3F95DBADA74954A9246D7AD159D1000,
	_SetOverlayName_Invoke_mADC1E9F5A7386608A1BF58E9D2FF06E2F2967594,
	_SetOverlayName_BeginInvoke_mE64B50169F1BD5547ADB0D3A84F6321943184EC5,
	_SetOverlayName_EndInvoke_m8AE28C0B4D9F0B450304DC324007C109A60227AB,
	_GetOverlayImageData__ctor_m44DC86BD9BEF05DB6B324520E8115E3EC183E0C5,
	_GetOverlayImageData_Invoke_m2DE11E030C5F8F0B7CB014CD5A1C21485E79E207,
	_GetOverlayImageData_BeginInvoke_m3A024E1DDDBBF406A80894532B85ADA5787D5339,
	_GetOverlayImageData_EndInvoke_m529B988C4E1E952313DC632059A1082120B6B287,
	_GetOverlayErrorNameFromEnum__ctor_m7DDF9A0E38ABC32421EE82F4623CA83D6AFF66B4,
	_GetOverlayErrorNameFromEnum_Invoke_m1C7AFFF5ED0869009757799BDE7395B81E96C795,
	_GetOverlayErrorNameFromEnum_BeginInvoke_mC089FD8F3BECC89D165D6A42F11CD3B6283F3E75,
	_GetOverlayErrorNameFromEnum_EndInvoke_m474D9E57E7477FAF47A1CE83EBFDB403FCCB115F,
	_SetOverlayRenderingPid__ctor_mBAB87FF6E373A938B503DBF6049CB62C78576A7E,
	_SetOverlayRenderingPid_Invoke_m7D02279F6804EBCA1EB4E2A4BFF429CFF8A02BF5,
	_SetOverlayRenderingPid_BeginInvoke_mD7F1A7EC4B4741EB9E81F8330AE2217DA643CAB2,
	_SetOverlayRenderingPid_EndInvoke_m9AE773289C915DE0246F08DE9916C170198EEC26,
	_GetOverlayRenderingPid__ctor_mBB7AB1BEB9A036C942081AA15D04634A6C3981A5,
	_GetOverlayRenderingPid_Invoke_mC8C52BF0588EEE213C9B9B483E9CCFD57F3A166B,
	_GetOverlayRenderingPid_BeginInvoke_m0F551EB55FCC5600ECF3FC82796A2A05FD15A0B2,
	_GetOverlayRenderingPid_EndInvoke_m252089002F24146B9D356E0278F36E1DA53FAB0F,
	_SetOverlayFlag__ctor_m845440878206A23ECD144639786377F3B2D83556,
	_SetOverlayFlag_Invoke_m98328C03FB01443B63736CE50104106DE8428657,
	_SetOverlayFlag_BeginInvoke_m008B783F59F5093F2F818CC700E07CA48EAB9506,
	_SetOverlayFlag_EndInvoke_m3394DF3106A8CA2738CF6A5895BB25E1F86EB335,
	_GetOverlayFlag__ctor_mA96DF19074BE8A4D932F431CC0779A434DF1FF4F,
	_GetOverlayFlag_Invoke_m44994953A32DA86DAFB81C2617A0F5C528E639F1,
	_GetOverlayFlag_BeginInvoke_mF3D87AEAF8A0D8CD59462FCA59238FD7EA701A54,
	_GetOverlayFlag_EndInvoke_mFFCA3BD15B4A7BBC008E047CD3A927828E1FC60C,
	_GetOverlayFlags__ctor_m2A815C4CC04686F76EECC8A9F4A6F4E64A8F6C7C,
	_GetOverlayFlags_Invoke_m04F3B3E9F59A4C883F700761748ACCC1346561A5,
	_GetOverlayFlags_BeginInvoke_mD1AF34963E99FD474E6014588C62779110F70518,
	_GetOverlayFlags_EndInvoke_m2F2834FC5B840D8BFE66D2C53D84D32F49D3E907,
	_SetOverlayColor__ctor_mAB957B84ED5ADB15B789E80E2F9B81AC7DF25D10,
	_SetOverlayColor_Invoke_m3C6A3C05EEBB49800D8CDEE9AFBC9DAC7EA482A5,
	_SetOverlayColor_BeginInvoke_m50A5FBD640A135417D6A77D3F30CFBA5493285F7,
	_SetOverlayColor_EndInvoke_mBA21938899FCFBD1A59D2BAA5693C513B94C128A,
	_GetOverlayColor__ctor_mBDFC5DDDD4A2DEAFC52B8FF2FBB44BEEFD422631,
	_GetOverlayColor_Invoke_m509C1A5966A1CF68735076EA09F221FE33BC8980,
	_GetOverlayColor_BeginInvoke_m9D858989A3D0E2CA38DBF10175E80E3AF2789B4B,
	_GetOverlayColor_EndInvoke_m4214318634098CD2EAFC9E3E9FFE6EA2F2ACA69E,
	_SetOverlayAlpha__ctor_mBD3CAA53A8A06A0C4AC5134FE74277206D783306,
	_SetOverlayAlpha_Invoke_mD6B9EF0C0A0AE85D644882871E19D16AC4CE9B28,
	_SetOverlayAlpha_BeginInvoke_mF2EAEF9FB12D4D9DE212046F0500F66C5800983D,
	_SetOverlayAlpha_EndInvoke_mBC95C6695955824B658B0B726AB95619E045910F,
	_GetOverlayAlpha__ctor_m56FAD94E438D8B018B315D5F5DF9EF882EE76AF9,
	_GetOverlayAlpha_Invoke_mA9EED8232ACDDA4F9CBA14FD8E86444285538AD6,
	_GetOverlayAlpha_BeginInvoke_m6A4EA6640345D01DA59CD8F1B31A463A9D833AE5,
	_GetOverlayAlpha_EndInvoke_m6FACB9CC1C8C136FDFE2AF86F4EE7DF2990C9D5C,
	_SetOverlayTexelAspect__ctor_m3AF191E74637F0CD53968027D35E57333580B49D,
	_SetOverlayTexelAspect_Invoke_mAFC33FE7F48C64E8C62BB9E4F26E398575AEB132,
	_SetOverlayTexelAspect_BeginInvoke_m030005DFD2D11536C41730B2839A183D378412F6,
	_SetOverlayTexelAspect_EndInvoke_mE55D914A632C8C25218A903718C46BA95A0454AE,
	_GetOverlayTexelAspect__ctor_mCCF9B91FC88FE0241AD8DAA9508F86C0609B8E5B,
	_GetOverlayTexelAspect_Invoke_m85A4237FC605FA6B69B66DD4123660DBA45E3D5F,
	_GetOverlayTexelAspect_BeginInvoke_mDCB91DA7607208EDC0C58FB06C27243A522A335F,
	_GetOverlayTexelAspect_EndInvoke_m76E1A98518A333E9163F11BA3DBB36728D21B5D5,
	_SetOverlaySortOrder__ctor_mC60B087F756E7790550BFA45B04FD77B676945CD,
	_SetOverlaySortOrder_Invoke_mA410E6BB15F26F591B91115CB19BEC38E712A7C1,
	_SetOverlaySortOrder_BeginInvoke_m96A1AC544FD67192F203925A1D8D2A75774D4F86,
	_SetOverlaySortOrder_EndInvoke_mEE2B0605BDCB5768D6AAC281ABF479A38C679BB2,
	_GetOverlaySortOrder__ctor_mE5BDF312E483C92D9B07382B6D57F0A656A5CACB,
	_GetOverlaySortOrder_Invoke_m38F7588D3566314C1B69029EE191245A2BDDE391,
	_GetOverlaySortOrder_BeginInvoke_m3F170CED51E4F27F7C32D948F1ED654817EB1C9A,
	_GetOverlaySortOrder_EndInvoke_mCE69FB133D03429A9F26DC28AD2E895EB6C78855,
	_SetOverlayWidthInMeters__ctor_m23ED9B8BF5BF4156DA902EE82EBA0D69301D73FA,
	_SetOverlayWidthInMeters_Invoke_m70225658063BBFDC1B99707ADE844B62A61D73C1,
	_SetOverlayWidthInMeters_BeginInvoke_m27A0A5B3D855A30BB2DA5CCA0C8CD2FE0A40B1DE,
	_SetOverlayWidthInMeters_EndInvoke_mD0DBE082AB611DCD27835B13F43E54CB419451D1,
	_GetOverlayWidthInMeters__ctor_mAD8393AD05897730E2F71F844F18357CAB98EEDD,
	_GetOverlayWidthInMeters_Invoke_m438DA364D7A6BC756BE95F35F512F3C0902C04BB,
	_GetOverlayWidthInMeters_BeginInvoke_m61B487390EE06B0C710CC3E62FEA937F4653EB2A,
	_GetOverlayWidthInMeters_EndInvoke_m5C0F663F4693A431ACFD8295FBA1B62011D6F333,
	_SetOverlayCurvature__ctor_m2EDCAFF2A3967EA768909B3C820FDE2DFBA2CD81,
	_SetOverlayCurvature_Invoke_m171EEAF0D65BADDAE288C8A33E276E4F552A3997,
	_SetOverlayCurvature_BeginInvoke_m97CD00E08DDA1282B7BFC5290D03735B10643A7E,
	_SetOverlayCurvature_EndInvoke_mD9DBEEE802F66FE5B9DD85C8F3FBF833C5EB8ED1,
	_GetOverlayCurvature__ctor_m31C314C011642A70996E658C3243B4F04A9FE9F0,
	_GetOverlayCurvature_Invoke_m3DA4EEA610AF77B13890BA123BC83FB9A02AF8C5,
	_GetOverlayCurvature_BeginInvoke_m77B57D476BB9F577F7C178BBBC4E67B425D5040C,
	_GetOverlayCurvature_EndInvoke_m38C5B5C3CC6113BFAB849EDA7FD77577198FE079,
	_SetOverlayTextureColorSpace__ctor_mE0C5193EDE7C4E2A4189F6195831B03D95B5D088,
	_SetOverlayTextureColorSpace_Invoke_mB815463EE384034D38FD80027A5933D8869460AE,
	_SetOverlayTextureColorSpace_BeginInvoke_m80743359FAC19B27FF555943CAD6B638307155E2,
	_SetOverlayTextureColorSpace_EndInvoke_m2DE31E6B163150F337AA9C6EB6BEA375AC5FFD0F,
	_GetOverlayTextureColorSpace__ctor_m4B0323C513C395D62C29024CF78CE9C52EEB6731,
	_GetOverlayTextureColorSpace_Invoke_m54E43BCCDB69F3061CB2277EECC805A44E768DC8,
	_GetOverlayTextureColorSpace_BeginInvoke_m49CEBD8F37E6202A9D1AF6DCC293ACF4043685D9,
	_GetOverlayTextureColorSpace_EndInvoke_m227047911089AAF1B8404BCBE6F524509CB9B1DB,
	_SetOverlayTextureBounds__ctor_mFB62F5E7A02B03C1B95CE96B6CF51A657A34C678,
	_SetOverlayTextureBounds_Invoke_m162BCC0137216BC4B965FD8A017CAC681BFA2AD9,
	_SetOverlayTextureBounds_BeginInvoke_mD6A5270C3E79FB79E0785B9F528D1008582A4C0A,
	_SetOverlayTextureBounds_EndInvoke_m2D0576967F0F55FFE4C253698D4F82F227D15ABE,
	_GetOverlayTextureBounds__ctor_m55C23717BCF06DC500D52CB60EC84F4DB3700506,
	_GetOverlayTextureBounds_Invoke_mA8A0F7D7A442D0A11214D73148CE159EA354E1F0,
	_GetOverlayTextureBounds_BeginInvoke_m97A6C3E85FA46333C5ED3B21F4DA6BD432683CDB,
	_GetOverlayTextureBounds_EndInvoke_mBBFF1AD5FFD957E3057320DD8398557F99E8A0AB,
	_GetOverlayTransformType__ctor_m3A3F6B8C72F99EDBFA55FF405FFD0CC41B71B933,
	_GetOverlayTransformType_Invoke_m63F5F14B2640E6246D90DEA21583DFA026BC0C3C,
	_GetOverlayTransformType_BeginInvoke_m1BB0830D47868BB4897BBF62A63FE1F1C724B59A,
	_GetOverlayTransformType_EndInvoke_mE22DDED2AB1C49FD621A637F97E7A50EEEA78B6C,
	_SetOverlayTransformAbsolute__ctor_m46C5EF534060C9D7097266B3D7253B948756C5B5,
	_SetOverlayTransformAbsolute_Invoke_m7D01B4161BD59745320136A328C07AB0B2CDEE21,
	_SetOverlayTransformAbsolute_BeginInvoke_m5B5EBEC982975C234CDDD6DF7722A652E555B988,
	_SetOverlayTransformAbsolute_EndInvoke_m83183057949BD7749D19658497D0ECA4FA66E0EC,
	_GetOverlayTransformAbsolute__ctor_mC9693ED182F36AFF3A4D08B3A68C513689106F2A,
	_GetOverlayTransformAbsolute_Invoke_m67969C7F1330BAEACD2EB68EE7487DC9F6B925E2,
	_GetOverlayTransformAbsolute_BeginInvoke_m6DB2930663ADA2DC05F48A02C8B9BE110D1C6C3C,
	_GetOverlayTransformAbsolute_EndInvoke_mBA533A7FC08A99CCC5BC7C3D41CEF444CA3E20AC,
	_SetOverlayTransformTrackedDeviceRelative__ctor_mE16E0EF15BC85AEACB13021FE1DB8476DF4A69AA,
	_SetOverlayTransformTrackedDeviceRelative_Invoke_m7B01D22DA27BB7E173DA34C733810A8E5D33FE70,
	_SetOverlayTransformTrackedDeviceRelative_BeginInvoke_m3BCE81EDE82DBA1B8781B3F378CFB4D55286AD1A,
	_SetOverlayTransformTrackedDeviceRelative_EndInvoke_m0F8A0B9706093CD3CE76A7C7F0FBC6882D3A0D1A,
	_GetOverlayTransformTrackedDeviceRelative__ctor_m1682E4F42D8C45A942B8E3B321A1A66F4B4453F2,
	_GetOverlayTransformTrackedDeviceRelative_Invoke_m8742D0DA6348D9CD234941CEB40977BBB4B4F335,
	_GetOverlayTransformTrackedDeviceRelative_BeginInvoke_m8B12001111D347C16B1CBE29DBB76D50F7878C67,
	_GetOverlayTransformTrackedDeviceRelative_EndInvoke_mB7A59CADC90B149826AEF27D61784EC26C5E259B,
	_SetOverlayTransformTrackedDeviceComponent__ctor_mE8555D40DA5DF5A77843A7228685344BA8AB9295,
	_SetOverlayTransformTrackedDeviceComponent_Invoke_m375EBC28B437C74814E2209E47E208CE5FB9B99C,
	_SetOverlayTransformTrackedDeviceComponent_BeginInvoke_m25C94F007EC41F193D691A02139E9C8CE28195CF,
	_SetOverlayTransformTrackedDeviceComponent_EndInvoke_mDD81F421471BD13BF0DFF8F70A69290E533E99AB,
	_GetOverlayTransformTrackedDeviceComponent__ctor_mE2B7F4C45DBEAE58557137988A33BA068778157C,
	_GetOverlayTransformTrackedDeviceComponent_Invoke_mC3A14C21F24A72254F95E3F3A583DD8F068B0C3C,
	_GetOverlayTransformTrackedDeviceComponent_BeginInvoke_mB8BC095B53A20768668B91275A724DE60ADEEAA9,
	_GetOverlayTransformTrackedDeviceComponent_EndInvoke_m9ED81DBB008776A95376E61B6FD162FC6E9A52EE,
	_GetOverlayTransformOverlayRelative__ctor_m04FEAFDF099DB4702599F4010DB57A5990B4782F,
	_GetOverlayTransformOverlayRelative_Invoke_mFCE2CD7303258304E5D342DE9CC7DFBC8A89C40D,
	_GetOverlayTransformOverlayRelative_BeginInvoke_mC7B56BF35930ED8C83B9A921FABE03718623C5F7,
	_GetOverlayTransformOverlayRelative_EndInvoke_m7C9EF1099F4126184C751C97184D6FE9418D5813,
	_SetOverlayTransformOverlayRelative__ctor_m8860005ECA3319448F4D508BF625532C999B0F6A,
	_SetOverlayTransformOverlayRelative_Invoke_mE6C0CD18B813C7DC2096A02CC57A14EDCD625368,
	_SetOverlayTransformOverlayRelative_BeginInvoke_mB7DBBE18FF6AB657E9008D93DBD1F618FF03DA09,
	_SetOverlayTransformOverlayRelative_EndInvoke_m060EE8929F5F26771E20C4E498FB362B97B1B120,
	_SetOverlayTransformCursor__ctor_mFCB02815F79333165E1F33849CC6CAE5A4F3D032,
	_SetOverlayTransformCursor_Invoke_mD16E0829C75AE40C8E76F6B633F2D95BD4795072,
	_SetOverlayTransformCursor_BeginInvoke_m7B49BF9EB0A218D6BB1163825D8AC86938B8E705,
	_SetOverlayTransformCursor_EndInvoke_mAB23F0846C5F50B243B528A7884219E949304094,
	_GetOverlayTransformCursor__ctor_m86972F1A76A4DDE282BE3E01FA21A41D61661FEF,
	_GetOverlayTransformCursor_Invoke_m713A68C2C9CDEA0526F6336E98D4DBBD5468B36B,
	_GetOverlayTransformCursor_BeginInvoke_mEF542A639ED5EAECFDF4EF73CC543A91592D5B9D,
	_GetOverlayTransformCursor_EndInvoke_m6CBC8727C8EC6CAF66435DAB208AB14F6678E2E6,
	_ShowOverlay__ctor_mB5C6B2F474C7A4C0A6F1053774EDC8E16CC84242,
	_ShowOverlay_Invoke_m5350AEA48E1598EE546A9CAAF8D49DC61043F99F,
	_ShowOverlay_BeginInvoke_m50EC21D48CCF15F03640A362ECAA88454C7B0CD2,
	_ShowOverlay_EndInvoke_m9B0A71D80F7281960AA4BC1DE0EC760319FD125D,
	_HideOverlay__ctor_mC56DECE330C9655BCC51812100FF943603C1E9B6,
	_HideOverlay_Invoke_m6765FCD147D087248E92A2A06596BA4356AF3D24,
	_HideOverlay_BeginInvoke_m0DB3C616DE1A84E364BFF5FC19B460A22F6ECE63,
	_HideOverlay_EndInvoke_m443AC72CEC448EB04138281A83C84601ABDAEDC4,
	_IsOverlayVisible__ctor_m96D8597FBD59ABCC466726BD3A02946F68C9AD80,
	_IsOverlayVisible_Invoke_mEDF4D82889067AF3F03D600D514F1748FA6261C6,
	_IsOverlayVisible_BeginInvoke_m5999A107583C980AC5641D798495EF69ECE1AFB4,
	_IsOverlayVisible_EndInvoke_m15B937877A7BD85DD47E3BA00FA9E34FF851B5D5,
	_GetTransformForOverlayCoordinates__ctor_m8B33CC1AF9DAECFBB64AF60782320A62225053A0,
	_GetTransformForOverlayCoordinates_Invoke_mE3E3D84DCD6AEC364E53F07F6BE33E58E701CA79,
	_GetTransformForOverlayCoordinates_BeginInvoke_m7286D566E2F29C1FF7202BE05DAFCC836897DBA2,
	_GetTransformForOverlayCoordinates_EndInvoke_m8FDF6360AD8ADFB8AFCCB05B04DE8CACB19BAF0A,
	_PollNextOverlayEvent__ctor_m126904775AB1B46FBB487D184BA191C016813857,
	_PollNextOverlayEvent_Invoke_m43024125C2E4A4566D60FF4E837F113C731D68FA,
	_PollNextOverlayEvent_BeginInvoke_m08952287C916B96843D99861E709AB1B4B378FD9,
	_PollNextOverlayEvent_EndInvoke_mF159DF12D56A8C0C7E936849B64ECDE1D1C326D8,
	_GetOverlayInputMethod__ctor_m46DC04F1173ECA972A406B748E4968BBFFC09CD0,
	_GetOverlayInputMethod_Invoke_mA799A72D57B52EE30BFC271E2EF0811E4BBE2490,
	_GetOverlayInputMethod_BeginInvoke_m8C5E13835CB25E9E21AA9BD64FA51559A24FC41A,
	_GetOverlayInputMethod_EndInvoke_m03B62F51F640EE3ECFBA2C7D88A94295DA8B69EE,
	_SetOverlayInputMethod__ctor_mCBF4292B0F5058F5100EBC99E750B01035379884,
	_SetOverlayInputMethod_Invoke_m8CE29526D4BCDA6202DEEA74D2EC5DE55D8098BE,
	_SetOverlayInputMethod_BeginInvoke_mB9B982E01FFEC9A7D3EF589B51D3811F131B753C,
	_SetOverlayInputMethod_EndInvoke_m4616965C1F02EADED2C4F68B3C0A9946E8934B66,
	_GetOverlayMouseScale__ctor_mE4E47B7CA85724BD4A6AB84454100309E0A300E6,
	_GetOverlayMouseScale_Invoke_m91EA2E522A246C8DF6EE7233D537821F9307C55B,
	_GetOverlayMouseScale_BeginInvoke_mAD6DC7A20FA32DD653CF401873AE2EC2DB1E4321,
	_GetOverlayMouseScale_EndInvoke_m2A9C49C9B3DAD4F2BA8D2C4A23FA1437E66B7268,
	_SetOverlayMouseScale__ctor_m9930F605B1B546E8933ACC0DA31FD06CEC9775F2,
	_SetOverlayMouseScale_Invoke_mA79F34381BDF2ED5E2F22FD9D8F034C7B6650B32,
	_SetOverlayMouseScale_BeginInvoke_mC3C0E1C0E77B3CDA89F775098BAD68CCE720F316,
	_SetOverlayMouseScale_EndInvoke_m708D113A1DD778D2DAB8517B31A527EA1CA71948,
	_ComputeOverlayIntersection__ctor_m783CFCE8DC89620A722AC7316E908E46F20E04C5,
	_ComputeOverlayIntersection_Invoke_m5134957003DF00882BF9E02F77A6362C7C63565B,
	_ComputeOverlayIntersection_BeginInvoke_m631E2FB6BE6B8DF6D08AA4C7928EF3E229CA3212,
	_ComputeOverlayIntersection_EndInvoke_m2310E1405C3A55D6394D07434899FFB957CF242A,
	_IsHoverTargetOverlay__ctor_mF592DF56E2848D073882039B879DCB3260375D0E,
	_IsHoverTargetOverlay_Invoke_m3B81B442CE9483BC39B0F09D68EE69CEBD9A293D,
	_IsHoverTargetOverlay_BeginInvoke_mEB5BA966DF94FFA070A5E41A9AD91A3DFBB4FA79,
	_IsHoverTargetOverlay_EndInvoke_m07DD92C0402F7CA8FE7BAEFE06D8539C6F720080,
	_SetOverlayIntersectionMask__ctor_m854C5C0AF96B9D36B772514F7A24E8FA57B2DBC2,
	_SetOverlayIntersectionMask_Invoke_mD7D360E7B6AC17EA3A491E71470331E1CB2EED2E,
	_SetOverlayIntersectionMask_BeginInvoke_m4F44FCECD14922E779A6AE23FA1EAC8CE15ADE10,
	_SetOverlayIntersectionMask_EndInvoke_m98AD117CAA3B49C14C1C50B2DDA1A065CFE5BB8E,
	_TriggerLaserMouseHapticVibration__ctor_m45F2DBD26554063EC177A7597DA6D27D22C8C48E,
	_TriggerLaserMouseHapticVibration_Invoke_mB75AA555B5361EAEEA818072B3C9B7CCAA6B83BC,
	_TriggerLaserMouseHapticVibration_BeginInvoke_m386A28519C9A30DAAB843096B817595EC97C7FC9,
	_TriggerLaserMouseHapticVibration_EndInvoke_m0D367994315F710AFA67DD6C71358533705FF23A,
	_SetOverlayCursor__ctor_m485FDEC1F4F3ABD3B8C0BFB8FDD2335BA6E00588,
	_SetOverlayCursor_Invoke_m6446EAF54D929745476A89CD5D02A9A605773BBC,
	_SetOverlayCursor_BeginInvoke_mE7287B22F90411FAC3C80DA6C7C093AB09F34110,
	_SetOverlayCursor_EndInvoke_mE80EF242587645845D38A3B80180BD4453A6B407,
	_SetOverlayCursorPositionOverride__ctor_mECE50B636188003C498C4C4EAD62B95DC9CB1291,
	_SetOverlayCursorPositionOverride_Invoke_m4F063A39F2ECE669FC840422D83BE6029AAD9DBB,
	_SetOverlayCursorPositionOverride_BeginInvoke_m8390B8597CACFA76A84C2402193F81A3408EFF9A,
	_SetOverlayCursorPositionOverride_EndInvoke_m6410CB5BDCF574A50DA677992C15E1C36D0B5C60,
	_ClearOverlayCursorPositionOverride__ctor_m5955F6FE98827FC5AE6E88F448EE24AD191FE17D,
	_ClearOverlayCursorPositionOverride_Invoke_mBE390A62257A778CFE35EF5ADF7E7E1791B51A93,
	_ClearOverlayCursorPositionOverride_BeginInvoke_mE5CC64CC555A1E240FB7752C3F6218DB799FA4BC,
	_ClearOverlayCursorPositionOverride_EndInvoke_mB7E9CE2034E390B3C96EF14DE9F263DC7B3623F0,
	_SetOverlayTexture__ctor_m19A66B96C7B3703E897E303F2D7A9E57D3133F34,
	_SetOverlayTexture_Invoke_mE5CB0D9C94F898CDAA9D545C5F60724B12B623B3,
	_SetOverlayTexture_BeginInvoke_m8A1960D476EAA5BCD882C6FF1A1EC2B25100B7E7,
	_SetOverlayTexture_EndInvoke_mAB2DD53E79FB3FD49EECD204FA92C37B23074903,
	_ClearOverlayTexture__ctor_mBB9B3430C6262F65E289A9AD17EFD8BDAD199DE9,
	_ClearOverlayTexture_Invoke_m7B0868A4FE8787023314B393060060859D15DAD3,
	_ClearOverlayTexture_BeginInvoke_m0C57191DFAA8E737BC1E352CEF2FCB6C80F974E3,
	_ClearOverlayTexture_EndInvoke_mDC0A67CBD9AAF725A5093ADB78D14FBDAC011737,
	_SetOverlayRaw__ctor_m6E9AA31A3C35DBE80FAFFFD1408D2EDD7E97569F,
	_SetOverlayRaw_Invoke_m6039CC764031C8BCCFCDB3A00408D442CBB0F913,
	_SetOverlayRaw_BeginInvoke_m47FCD2E4C7462518F6C984AB8428FF06D39F019F,
	_SetOverlayRaw_EndInvoke_m79ED121C9BB172B73D2E075C00875FE37548715C,
	_SetOverlayFromFile__ctor_mBB1DE9D3AAD0C844FD937859575F5F838AA435DC,
	_SetOverlayFromFile_Invoke_m667C820D7BA362B8659F63E473B3FEA50F824AA2,
	_SetOverlayFromFile_BeginInvoke_mBCB3E567635888CED47732074FFD847910A4756A,
	_SetOverlayFromFile_EndInvoke_mE22B446C6E9C1389B4DFED9AB37866205132686B,
	_GetOverlayTexture__ctor_mEA498E68E8DABBC89C6F1DE918913575A67259FB,
	_GetOverlayTexture_Invoke_mC57FC13E89A53B023F6D1F281DBD377AF6440A67,
	_GetOverlayTexture_BeginInvoke_mEF9F1CAB63606D8C2FD4BF127BD151BD464C9A38,
	_GetOverlayTexture_EndInvoke_mC6B7960B16859A12733C118D95BE2C6112F6A7A7,
	_ReleaseNativeOverlayHandle__ctor_mF3FCA6EBDF25DC3C14968EC5301A6EA72EF5FDF4,
	_ReleaseNativeOverlayHandle_Invoke_m3FDFF05640AF46F9F6CA47B47EEE6ED272FA180E,
	_ReleaseNativeOverlayHandle_BeginInvoke_m52097E9630B36139C3F7E04D37BB109EB0983297,
	_ReleaseNativeOverlayHandle_EndInvoke_m371849D5667B52C3C5ED631A78611ECE6F96BA1C,
	_GetOverlayTextureSize__ctor_m09A72F94CE30180CA6B5C154F25323238A6C6CCD,
	_GetOverlayTextureSize_Invoke_mED526DB8B008AB259A388C2B4562EED9DE555ADF,
	_GetOverlayTextureSize_BeginInvoke_m77B42F37D0B9453E630C372D5D20C33CBC58572A,
	_GetOverlayTextureSize_EndInvoke_m7656E0B18543B4B7501D5425B286EF5893896377,
	_CreateDashboardOverlay__ctor_m87F874E652A88187F70F46E3231D499C12BDFEBF,
	_CreateDashboardOverlay_Invoke_m14C5F020924949BBC03B4423793E0218AB4134AB,
	_CreateDashboardOverlay_BeginInvoke_mF6EB565ECD064D7CA3D6D60FAD4BF34B0788333A,
	_CreateDashboardOverlay_EndInvoke_m67358612202E86784CB18E4A1F192FB00EBEA085,
	_IsDashboardVisible__ctor_mF9684B921A8204B29BD368C846830784908E6593,
	_IsDashboardVisible_Invoke_m69FEBE575C03FBC034D4C7EE6B00299840A7B556,
	_IsDashboardVisible_BeginInvoke_m5ED996DF87F642595A3087294E9D8EA4B7CFB752,
	_IsDashboardVisible_EndInvoke_m1B8BB53854A4C2E3DAE13ED840EAEFB0680CA528,
	_IsActiveDashboardOverlay__ctor_mA9813E091DB0E68BE7F64519CE89E04B16224261,
	_IsActiveDashboardOverlay_Invoke_m2579B84F899FC9DC6B9B402194A5471FC53723CC,
	_IsActiveDashboardOverlay_BeginInvoke_m98FEB1F07C46BC0D2AA504B17FEC28B7F3987E0C,
	_IsActiveDashboardOverlay_EndInvoke_m28150CD1FDBA00EF6C3AA83F683FD18FD4B52C32,
	_SetDashboardOverlaySceneProcess__ctor_m5213293D09F49B984D4361F96EAE504D36183C84,
	_SetDashboardOverlaySceneProcess_Invoke_m5C52DDFFF56FDA54090EAC1ECDC4C2B275FAF3D3,
	_SetDashboardOverlaySceneProcess_BeginInvoke_m5E50BBDDA88C76797CBA8D4565B2862A88DC34A5,
	_SetDashboardOverlaySceneProcess_EndInvoke_mB2BB2E0758743B4FB90E0DEE682F8DCFB720C8D6,
	_GetDashboardOverlaySceneProcess__ctor_mE17075FD4FD34BCA48B8D137C663C66DBC2A1F70,
	_GetDashboardOverlaySceneProcess_Invoke_mCC0B418A305609F937243F87572D4CAA14453B52,
	_GetDashboardOverlaySceneProcess_BeginInvoke_m0EC46F71E97F93EDAC6101ECFAE69C774389FA6E,
	_GetDashboardOverlaySceneProcess_EndInvoke_m2101D140F164F50AC59E79EE18102F74BF70F8C5,
	_ShowDashboard__ctor_m6A5428E3D7AAA9B98C87B669D1ED0976BC365329,
	_ShowDashboard_Invoke_m00CCFFAE121A689D65DC8945669686B072326C59,
	_ShowDashboard_BeginInvoke_m5FBB295199B8E9C72391F61D43271E8A0E0846F6,
	_ShowDashboard_EndInvoke_m9A66E1B685F1C06F0A0E71C8476283C31D5AE239,
	_GetPrimaryDashboardDevice__ctor_m1A71524FB2F909391492531D8AFC9D24E49D46B3,
	_GetPrimaryDashboardDevice_Invoke_mB8E768D50C0E9262A507A7498DE3D35643B0AAB2,
	_GetPrimaryDashboardDevice_BeginInvoke_mF07A6DA83C3DE155E5A04AD9E6ADAB88DA4892DE,
	_GetPrimaryDashboardDevice_EndInvoke_m124450F9495D775C5AA20C1DDE36CDD60EE3A35B,
	_ShowKeyboard__ctor_m59129F1335C2A88F10873D5A357BA5BC69E19C24,
	_ShowKeyboard_Invoke_m27668A45152F6154576B736E0E6E86F0CE754647,
	_ShowKeyboard_BeginInvoke_m6A768566D3ECA11B3727BC0027D95DAE44E0F08D,
	_ShowKeyboard_EndInvoke_mC9E4B0E1713F806E5EE2EA32141534376A7BC64F,
	_ShowKeyboardForOverlay__ctor_mB4270A1D210E7A2E21B9D15EE1D0B96C30F21B36,
	_ShowKeyboardForOverlay_Invoke_mC1C66E56757CAA313B21C485464E6221A11C6D1B,
	_ShowKeyboardForOverlay_BeginInvoke_mC7FBFBCDC69F9F0277928BC542EE8A15D0B3155E,
	_ShowKeyboardForOverlay_EndInvoke_mC14645C092CEE66C32D6D9FD6889861D567B4E5A,
	_GetKeyboardText__ctor_mF12002B343CF7D28FC2F07B99C37A6186D59DDA4,
	_GetKeyboardText_Invoke_mC761F8D868709A539264BBA4AE2F31899C10558E,
	_GetKeyboardText_BeginInvoke_mE607F6BCD40ADA76BC8DDDC2B85D90D7DC19E42B,
	_GetKeyboardText_EndInvoke_mB9199C71F7E5E008C421770A05A1D018AF34CC78,
	_HideKeyboard__ctor_m263FDE276D1AE98B7898F0FBB398367628693E3A,
	_HideKeyboard_Invoke_mEBD5F7EC51EE6C25081D60A5D9E4DA45DED36C6B,
	_HideKeyboard_BeginInvoke_mCC3FC1E3ED9A8EE1B90C9FF3652B127FC21FE077,
	_HideKeyboard_EndInvoke_mB9BF6816F43ECC3145515C727B7EC654D2C2841F,
	_SetKeyboardTransformAbsolute__ctor_mAC440F3B6D4D8273ACC3EF5528DCC76D3536E48E,
	_SetKeyboardTransformAbsolute_Invoke_m8BC682103DEAE22724FF3999CEE5070AF013AD53,
	_SetKeyboardTransformAbsolute_BeginInvoke_m67513E844B5C7D4F785F04C2BA0A6AC74784B8DC,
	_SetKeyboardTransformAbsolute_EndInvoke_m5A1B819D368DF22D0750D4AE731D39BD0325F7B8,
	_SetKeyboardPositionForOverlay__ctor_mDDF970144B76AB1AE700442060A8C7FE524B566C,
	_SetKeyboardPositionForOverlay_Invoke_m7F8CA209767ECD2385729267CFC94CBE32BCAA9C,
	_SetKeyboardPositionForOverlay_BeginInvoke_m5793D662FA02F868B90A9FFE72E8807D2B0A15D4,
	_SetKeyboardPositionForOverlay_EndInvoke_m4A672819C1017830DF815BBBD92CF17B2912F5AB,
	_ShowMessageOverlay__ctor_m1A8DDDEB3C55103ACE81EAC32A517FF6BF3C7D6A,
	_ShowMessageOverlay_Invoke_m488C8BEA95A3399DBE565BE5B92CFDFB5783DFAF,
	_ShowMessageOverlay_BeginInvoke_m811691F6F45ADE7517F46AC7A519DB7C9535B3D7,
	_ShowMessageOverlay_EndInvoke_m372B0E873ADCCC7B1D8EF70889E11355DBC88EB4,
	_CloseMessageOverlay__ctor_m9EB65D00F0EBEDE11A97C2023003C2CE4E927A5A,
	_CloseMessageOverlay_Invoke_m607E3C021A6B7085A316A0A337BFA9927A898132,
	_CloseMessageOverlay_BeginInvoke_mC065A5F308BB4B460BD83F34475010A43F5DBF24,
	_CloseMessageOverlay_EndInvoke_m9E9A14C9E790E6C12F69E3BA16F71DB668CCD603,
	_AcquireOverlayView__ctor_m4BED43468D8A664C50E587490691F6F86D50F108,
	_AcquireOverlayView_Invoke_m9AC87B184A2A762BB2EFFEC72F0726E1B602A6DC,
	_AcquireOverlayView_BeginInvoke_mD9CBA0DE667B1CFC76917E9641FF252DF57C0972,
	_AcquireOverlayView_EndInvoke_mAD6DCC820618403DB566C4F3D73BB15FF749E890,
	_ReleaseOverlayView__ctor_m9C11714B283491B0F5C2AD36622393D8D7A73957,
	_ReleaseOverlayView_Invoke_m254AC33805919FC2128F552552B0C53CF8F80F8F,
	_ReleaseOverlayView_BeginInvoke_mE2DC7DC01D3FD9B3D4E8E3169A26D004D4A728BE,
	_ReleaseOverlayView_EndInvoke_m2681DFBE00130D6EBFC36D02D92140F2DEA5077C,
	_PostOverlayEvent__ctor_mAC88FF8C815EEB6C4BE89EDE478F86C54DFE4EE2,
	_PostOverlayEvent_Invoke_m9005535BDDAEF0692347A97CA0BD3FD94F17AAE2,
	_PostOverlayEvent_BeginInvoke_mC96774100353A22CA2C2117CC4D4BB5107E746B6,
	_PostOverlayEvent_EndInvoke_mF52151F3CE5377BFCBF4E17A1C92183E7BACDDA2,
	_IsViewingPermitted__ctor_m0A08201F2FEA0F53BF2C14F4AC6CDA625C94FD79,
	_IsViewingPermitted_Invoke_m4ABED1B1CB33B001B78A5FCB31999AA38A690F21,
	_IsViewingPermitted_BeginInvoke_m6B92347984EC37B99EE51BACFBAA4E93BBA4EE16,
	_IsViewingPermitted_EndInvoke_m35E7A499A1E0C62A2F851934DA1EF7D28316907B,
	_SetHeadsetViewSize__ctor_m8AA0BCB0FEE1D510366A9FC7BD96CBDC9CE6BA57,
	_SetHeadsetViewSize_Invoke_m770BA13B7624B753507667DC70A69D2D05EAB589,
	_SetHeadsetViewSize_BeginInvoke_mCF99CB41FB5645FA5B562FBE06108BD20DB9F0DE,
	_SetHeadsetViewSize_EndInvoke_m4C3AEDCDEED41E5926732234FECA1721CFF5C4E1,
	_GetHeadsetViewSize__ctor_m24016BED4D93C2B663BC509787421845DA404788,
	_GetHeadsetViewSize_Invoke_mC9368F5A9AB30581A5D48E7C5BD864F31A98AA70,
	_GetHeadsetViewSize_BeginInvoke_m7D10EF32CC4FBF6C87969B34E50D1A66077D09F7,
	_GetHeadsetViewSize_EndInvoke_mC6C6761F27DA9FF11070CA2F2D5AD52D797B57A5,
	_SetHeadsetViewMode__ctor_mB0CB1C0A55E5088D3532B1E8F4A264CFAC11F63D,
	_SetHeadsetViewMode_Invoke_mDB6A16EA43DE21879EB0B5C562337149E605648B,
	_SetHeadsetViewMode_BeginInvoke_mE49EA73D27505A6ABF7303B9B68A8C1D44A6039E,
	_SetHeadsetViewMode_EndInvoke_mD938D39D86D2E9F7A665F7EBB0CE79EEE5B0DA82,
	_GetHeadsetViewMode__ctor_mF1743EFA9D9AB0BEF4DDF5AD895E09A75447C7D5,
	_GetHeadsetViewMode_Invoke_m09EFADA01868113FD600E25EE35DA10674B2FB60,
	_GetHeadsetViewMode_BeginInvoke_mA4300BD6151FB086353C423C677BA44926E2D048,
	_GetHeadsetViewMode_EndInvoke_mE39B9231D295AF74FEA2266F2AEBAFB90240B49B,
	_SetHeadsetViewCropped__ctor_mBDC6BDB9316222AF589EB91499E7EC117C9DF5AA,
	_SetHeadsetViewCropped_Invoke_m0B9CEB6F794C7420E63380C19648C0C1018C2389,
	_SetHeadsetViewCropped_BeginInvoke_mA0D9B2681B58191CA6026955407516AD93047955,
	_SetHeadsetViewCropped_EndInvoke_mD2B9B0B9E57A7926FBEB2576130BC231541CEBAF,
	_GetHeadsetViewCropped__ctor_mE9FF1D1D0655B0512443ED6D630CE3C11C4D8B1B,
	_GetHeadsetViewCropped_Invoke_mE1F4CF171713397D63390E1AFC32F32D47B52023,
	_GetHeadsetViewCropped_BeginInvoke_m799FFD5379E1006AA632E312D1E5353BA978F838,
	_GetHeadsetViewCropped_EndInvoke_m3007422A9D74BA5A63AFFE7A8F865C650D418A48,
	_GetHeadsetViewAspectRatio__ctor_mA329AFDFBD98ADEF1E29745727B9BCAEDF7DA3EF,
	_GetHeadsetViewAspectRatio_Invoke_mAF3886D5599FB9E3B2F353B97288E4C3F1AFBFE5,
	_GetHeadsetViewAspectRatio_BeginInvoke_m0C02626372397413CAA9476E69743B8D4ED61A30,
	_GetHeadsetViewAspectRatio_EndInvoke_mF26C6E1E59BC003E69FAF14699FB25E254C7E5E0,
	_SetHeadsetViewBlendRange__ctor_m4D416ECE0CFEA85750537E611960938530C32C1A,
	_SetHeadsetViewBlendRange_Invoke_mDC62D96CF4AFBFDDEF369F4EDB2EB85F1527E827,
	_SetHeadsetViewBlendRange_BeginInvoke_mC288416CF968D5CE91BB4DB24306A3D794E0504F,
	_SetHeadsetViewBlendRange_EndInvoke_m261D026D16D403742BFD1F6DE8F1C85A5878D487,
	_GetHeadsetViewBlendRange__ctor_m73F53004889DC3814382BAF091ADC71F57660457,
	_GetHeadsetViewBlendRange_Invoke_m2C854C4214B52312C1A85C07BF5BE429F83BD3BC,
	_GetHeadsetViewBlendRange_BeginInvoke_mD1E96057E58802034CDBD39E08CB62F0F606488B,
	_GetHeadsetViewBlendRange_EndInvoke_mB510DC3DDEDE346CBFD5AA367E3281BB7483C67F,
	_LoadRenderModel_Async__ctor_m9EA75500144338EE48B74FA47038C136FAAC1860,
	_LoadRenderModel_Async_Invoke_mFEE7C5EF97C282AC731B50035DCDF5759DEE8737,
	_LoadRenderModel_Async_BeginInvoke_m941B184724539D7FB111326812FCFB7012E81EBF,
	_LoadRenderModel_Async_EndInvoke_m4B46FD76A949193A6DD045620F87F6B9B6DBD7A2,
	_FreeRenderModel__ctor_m5B4DA286C5F60A55F187C24B6E9F76ADAD715554,
	_FreeRenderModel_Invoke_m29D89F511F5435D90887AB904409CF70F41DF98B,
	_FreeRenderModel_BeginInvoke_m5001005A6BDAE3D273DDFCEF22CAF007137F86CF,
	_FreeRenderModel_EndInvoke_mBBB36EEA3F2B411662762D5F77B0CEB5916D069F,
	_LoadTexture_Async__ctor_mF0BE48DF775883A293DECFF6AEFA56FA6CC5E496,
	_LoadTexture_Async_Invoke_m9F256F73347775431DFA1B17B20EC0F0CCF7E9E2,
	_LoadTexture_Async_BeginInvoke_m618FEA7CA767A41F559C1B3C91F612D0469456C8,
	_LoadTexture_Async_EndInvoke_mA26101B310AB7CBA8228481F87E18C02F359206A,
	_FreeTexture__ctor_m350618779DC5E1E30EFB8B3B4319C98ADB054C00,
	_FreeTexture_Invoke_mB99F04CB36ACEAF27A2C1AABB6A1E1A3B0A57F35,
	_FreeTexture_BeginInvoke_mEACE426A9589140F2DD4EB4CE09FCFD2A46CDFC4,
	_FreeTexture_EndInvoke_m76D4F109FBCA6421FC9E0B9915B4EE1466C51830,
	_LoadTextureD3D11_Async__ctor_m3F5183475A30FDE377A6CA088FABA595AF93C420,
	_LoadTextureD3D11_Async_Invoke_m76D74F9705980C9EC95BB813CE98DD75588C6195,
	_LoadTextureD3D11_Async_BeginInvoke_m5DCD35D2894343A5642E5EE6803F23C1652C2FF8,
	_LoadTextureD3D11_Async_EndInvoke_mADDA29026BBCE19CED0CBFA6F1BFA5FDE91475C7,
	_LoadIntoTextureD3D11_Async__ctor_m22D911A926E06026AB2A563171CC2F320223E775,
	_LoadIntoTextureD3D11_Async_Invoke_m382B168A1A3013A1B74F4FF1CA309E4BCC60BA9D,
	_LoadIntoTextureD3D11_Async_BeginInvoke_mEA007EDF4E5A2F466EBE5B34C8BFFF9711565ADE,
	_LoadIntoTextureD3D11_Async_EndInvoke_m598E307087A336A18FF92D222F4DEA52F5073BFC,
	_FreeTextureD3D11__ctor_mD91F3C75B170CCB2FD1FA6F9C9775441284088ED,
	_FreeTextureD3D11_Invoke_m9A5AB3EB44129774344AD51560CCB5C6BA81C57A,
	_FreeTextureD3D11_BeginInvoke_m9FAF4887B84F92DE2542E9240D264D88D782EB5F,
	_FreeTextureD3D11_EndInvoke_mB3E22CABA4A3216D77870F7F0535016CE7045256,
	_GetRenderModelName__ctor_m7B892AE17CB1F80381C7CEE007D5CFC48D2504E5,
	_GetRenderModelName_Invoke_m5AC4B7B238FA0FFC615F9DF890FFB4D1270BFF71,
	_GetRenderModelName_BeginInvoke_m7EC24C14D9C19C1F2330C4853E37909AD092EED3,
	_GetRenderModelName_EndInvoke_m94F38E1F6C2513A62F5377E71AD89565CF29D526,
	_GetRenderModelCount__ctor_m1A380BEADB43536A8DDF3CB18373CFD66E81A84B,
	_GetRenderModelCount_Invoke_m96A1F24AC8C18257D17AFC6CE5BE4E40AA7AB558,
	_GetRenderModelCount_BeginInvoke_m01B065AE764AE58C69D1D476606C8BB5F9B33BA0,
	_GetRenderModelCount_EndInvoke_mBF491CE6BCD9256C2844F2EE6DEE74D9F67E66B9,
	_GetComponentCount__ctor_m29EA0E943D7800535C4D8ED42B01FFD161656641,
	_GetComponentCount_Invoke_mBAA30657F5DD96716DAA1C9C8D9A0139BBA3ADBC,
	_GetComponentCount_BeginInvoke_m5F66EC2D9971C4C8C6065B1029E1C55014C24A2B,
	_GetComponentCount_EndInvoke_mB6CDF1E6889BD27CC189371A92A3157C28A4CB5C,
	_GetComponentName__ctor_mECC3684C9278ABB4EFE5617C3527534FE9DAEF8C,
	_GetComponentName_Invoke_m190A8F02215B688CF96F8D660E3987E71967E800,
	_GetComponentName_BeginInvoke_m7A5C4CA3DF80CBF8D7751ED0DD198D9BECF09A85,
	_GetComponentName_EndInvoke_m35819944DF39BFC6EB6AF1F557C471E3563FEA66,
	_GetComponentButtonMask__ctor_m0EAA121F78F0668A158CCD880B9B0891CCCC462D,
	_GetComponentButtonMask_Invoke_m87D4790D31477ABE5F0780AA71B7BFAEEB64FE2A,
	_GetComponentButtonMask_BeginInvoke_mB00EE5D1A1083DB47BDA5C6D47061660A23591AE,
	_GetComponentButtonMask_EndInvoke_mC847E6B1112B2B96A5B9AD1F7C9E8DE858DDD8FE,
	_GetComponentRenderModelName__ctor_mE69CAB8CC79E3B3547FFB56240A5C580B8759012,
	_GetComponentRenderModelName_Invoke_mDCEEFE3ECE81E989AB5739A1A4AFDD4CE0FB5440,
	_GetComponentRenderModelName_BeginInvoke_m32F4AB6469BA2C6EFEA3F99BAEEF5EB08352FA54,
	_GetComponentRenderModelName_EndInvoke_mD1115B34C97A81A4E009812A8583C781E4B9B70A,
	_GetComponentStateForDevicePath__ctor_m1F5ED2E8E4A394FB9BC27928C5AE5A061F075992,
	_GetComponentStateForDevicePath_Invoke_mB184D2217D15E4FE24AE9205E2F58A8C3AD92C99,
	_GetComponentStateForDevicePath_BeginInvoke_mF1D0D4DF99FA0CFD230D1AC0715C2099B97B2D0A,
	_GetComponentStateForDevicePath_EndInvoke_m7D6E44EFEF0CBF43B0835C9378201D90DC314743,
	_GetComponentState__ctor_mCC63CA93D89FDEA096C7DC84EACB4E915154548A,
	_GetComponentState_Invoke_m8750D276155EEB444BFF6B8FABB56E4A4B7D4000,
	_GetComponentState_BeginInvoke_m5F41416628933F038DD8E488A3CCEA8BF7ED63C6,
	_GetComponentState_EndInvoke_mA93923E8584E60BC36292C0818108CB821A0214C,
	_RenderModelHasComponent__ctor_mC3414A8AC98E451F1D296FD4590D1AE23A05D310,
	_RenderModelHasComponent_Invoke_m1BF04DC50F7BACC116546AF62CD8B253A806A47C,
	_RenderModelHasComponent_BeginInvoke_mBB37CC1B6E7BE67E1C9F569A148C8B90DE04720A,
	_RenderModelHasComponent_EndInvoke_m1195F974EF0A98574E687A66C5E550B93469D9AA,
	_GetRenderModelThumbnailURL__ctor_mBBF0E2B621FC695914DDB1C2A9F622DC51CE8AB4,
	_GetRenderModelThumbnailURL_Invoke_mC3B7041EFD53A2D461460D8DF317EE0837A60722,
	_GetRenderModelThumbnailURL_BeginInvoke_m255932F997F702F19EA37BDAD882A3BF62B3A320,
	_GetRenderModelThumbnailURL_EndInvoke_mE1E5A92AEF5AE13DADC6081C3947F58D805A47A9,
	_GetRenderModelOriginalPath__ctor_m9FD2841CD0F351E0A148590EC660198AD2E22320,
	_GetRenderModelOriginalPath_Invoke_m55078883A2431057619E4A0D69DC8D0645D116FD,
	_GetRenderModelOriginalPath_BeginInvoke_m77395CE36EE8D853E44D43B5298D1F3184B2648D,
	_GetRenderModelOriginalPath_EndInvoke_m3983AA998B7E60700A9B84C90B7FF2D5FD87BC0A,
	_GetRenderModelErrorNameFromEnum__ctor_m394CA65BDF4EAB21315967FFE2223D48D9A404BE,
	_GetRenderModelErrorNameFromEnum_Invoke_mCF8D1C85CB94C13024081410259D503AB6B4F1AD,
	_GetRenderModelErrorNameFromEnum_BeginInvoke_mC3C5B5F66D3DA8B50B812CC8374272D4C49CBA05,
	_GetRenderModelErrorNameFromEnum_EndInvoke_mE05519B2F4F86E9868D37297A9644E43C9D2F563,
	_CreateNotification__ctor_mCB2B20CC78C92CFF613076FA6E7CF56723FD7587,
	_CreateNotification_Invoke_mD9FDFBA3CCCB8ECE71032FA58D174ADD30545193,
	_CreateNotification_BeginInvoke_m22F6F5CC16CE13D61438400C24E255B2D23118D2,
	_CreateNotification_EndInvoke_mCDBACBCCA28D336F1511C5C222952886AF7A7E87,
	_RemoveNotification__ctor_m71C897093FB2A1EAA64829CC44313884DF63AA58,
	_RemoveNotification_Invoke_m241FE0C743166658D5E350F2826C74EACCF34CEB,
	_RemoveNotification_BeginInvoke_mF5685E8A4CAA142A6595AAC8CF7E33A11A28C8A7,
	_RemoveNotification_EndInvoke_m8C75F1DC43C1FEFC7E47D233C2729E35F243E871,
	_GetSettingsErrorNameFromEnum__ctor_m26867DE7DA4546432A9E5B8D0F39CDD5C5FD1E08,
	_GetSettingsErrorNameFromEnum_Invoke_mCFFEF7057D8724DD7DE35777F49457F2B9F58896,
	_GetSettingsErrorNameFromEnum_BeginInvoke_m63DB21AC50B14450B6AF1FC18FDA4B6190B63652,
	_GetSettingsErrorNameFromEnum_EndInvoke_mAEB222B9DFC27759B4E5A14C37D71DE49A4B53B4,
	_SetBool__ctor_m5CDC93DDDB6DD5374180385AFCC5445F7CCC80A3,
	_SetBool_Invoke_m02148EBEF98C91D054C930B808A4596AC0A3C42B,
	_SetBool_BeginInvoke_m9DDA03F789C671B918320D887DF2AFA04800A3F9,
	_SetBool_EndInvoke_mE8305C7592692EB71DD5D27199A190ED840830B7,
	_SetInt32__ctor_m6EEB46B2F1127BC9B6F1809B53F27A8B371BCD8D,
	_SetInt32_Invoke_m4AF83D4E5EEE6B87CDDEFD851181C54E8F9434AC,
	_SetInt32_BeginInvoke_m73E530325ADB660708E82AF8A408F981069DAAC6,
	_SetInt32_EndInvoke_mB8AE86F8A66E803AEF0BA4F3A95FFC00AE06342A,
	_SetFloat__ctor_mFAD5383523122017AFDCC4FAB453878FAE36A8A2,
	_SetFloat_Invoke_mCCD5A6F6B4CA876A8B238C066A59D1D9DBC44919,
	_SetFloat_BeginInvoke_mE4B2A8279031A4DD544646D174759AD4C9C3238D,
	_SetFloat_EndInvoke_mAD53D69FC2557D534E6AA2B06547FB6F27F9505D,
	_SetString__ctor_m26D0DEBFEB34CCB78F77D6088AD9662F8C9D1A41,
	_SetString_Invoke_m7A8D236BDBD467C2E90E069BE5BAC97A2F8B2A3C,
	_SetString_BeginInvoke_mD70763A31AA66B2AF2B513CD1BA0D8A055DC6FE7,
	_SetString_EndInvoke_mF37C475DA3AE920585CF54F759186E969D6C2CE6,
	_GetBool__ctor_m5D58BD023779F191B707446AC370C7FECC090EAE,
	_GetBool_Invoke_mFCE4BAE5F4C615BE3770A79587D761AC45A7754F,
	_GetBool_BeginInvoke_mC8F598C55753C2D8C552BD0715E8250220BA8960,
	_GetBool_EndInvoke_mFF5DE2B62DBB44D19971435254F63372E1946BCA,
	_GetInt32__ctor_m8C5DFB299DE009EAA6DAD48FE1F4F10865565FC3,
	_GetInt32_Invoke_mF563D717F24C660C63FD77BA128994E83054865F,
	_GetInt32_BeginInvoke_m90D8F5E24D0E690DD3AF3E39A428C7B6AF3C3B04,
	_GetInt32_EndInvoke_m4EDC216978844EFCA2C59BD7630550A7D96CCD6D,
	_GetFloat__ctor_m7439E016B64F595B6B9A3A5DF3220AD654F5C846,
	_GetFloat_Invoke_mC89CB83FEFBB85445642757AA4DEB90A956271D9,
	_GetFloat_BeginInvoke_mED606CA6A343067F7152A9A92F61D93B7C65F0EB,
	_GetFloat_EndInvoke_m7FE798C9538D573D1639D6F2D1D2CABAF5481131,
	_GetString__ctor_m82F6B17F28CDFC894E70E5E0C99BA78F2EF3E85E,
	_GetString_Invoke_m774D501A17159738F8878E69B6A085EE108C9950,
	_GetString_BeginInvoke_m46B43FB75C6B59DEBFA689AB2AC1BE03BBE53E6C,
	_GetString_EndInvoke_m593CB5262D1000F162BF9FB77219D7DB83AD83FE,
	_RemoveSection__ctor_mBA71BC35A6ADF42973E598C82D3432305718E9A3,
	_RemoveSection_Invoke_m0F4F22F8107C590E986BF1C906AF2706DEB6ACEF,
	_RemoveSection_BeginInvoke_m2741A058D4EC2FE33761F261921168586C768B5E,
	_RemoveSection_EndInvoke_m9EABC06AC93B4BD901E7F8B1AE4483D71B9A9190,
	_RemoveKeyInSection__ctor_m1B1D3742F88F39EFF7D0DE3B88D17442EE8020B3,
	_RemoveKeyInSection_Invoke_m5A941F67C47FDEDD6F1838F5EACC7B9483F5A085,
	_RemoveKeyInSection_BeginInvoke_m68295A5955372F472AFDD55CDC8CFA2A349AD79E,
	_RemoveKeyInSection_EndInvoke_m494FD91AFBA8A4EC35C29AC5D47BCB8D8B2FDD5E,
	_RequestScreenshot__ctor_mDE88E165DC2765321199D2A4EB173600711144C0,
	_RequestScreenshot_Invoke_m2C690B0D5CC9E0E869027B35982BD4AD0BF3E7C2,
	_RequestScreenshot_BeginInvoke_mC21A5E887EF9202145011FDEF911E5E8EBDD6981,
	_RequestScreenshot_EndInvoke_m05EE753B8DE1234A60A23B352CAC01D3737F38BC,
	_HookScreenshot__ctor_m6B06A9B661AEA6B808062CC5EF82CE3E3A7B9989,
	_HookScreenshot_Invoke_m5452E4B67275B915130C9A77FB6C150F601C1E76,
	_HookScreenshot_BeginInvoke_mBDA0D7F630AD1A1B142A3B987BE3628B1DE4DEB9,
	_HookScreenshot_EndInvoke_mDE4CC8A6DCB2EDC7D4D7B283DADE8E5C563D3D9B,
	_GetScreenshotPropertyType__ctor_mBFBCCB6039A8A60B18819E680BB087D45F26C525,
	_GetScreenshotPropertyType_Invoke_mB571C8A39F0F1C4C160EDEBDA75D491E00699F2B,
	_GetScreenshotPropertyType_BeginInvoke_mF3BD7A59012DC605AC13B6EEF9AFA905886737B4,
	_GetScreenshotPropertyType_EndInvoke_mB732657A8F3485323C921429947030B307DDC145,
	_GetScreenshotPropertyFilename__ctor_m4958C51AE74374CDEF2C01B3BC5F9DECDF9808D9,
	_GetScreenshotPropertyFilename_Invoke_mF10A3F5B8881692BCEF9538B796576C85BE8F583,
	_GetScreenshotPropertyFilename_BeginInvoke_mDCDD69B208A7EF2B32F93E3B335F177D2626495E,
	_GetScreenshotPropertyFilename_EndInvoke_m616345A42DEE5F935CD7EE13AFD1878EBD56C6B7,
	_UpdateScreenshotProgress__ctor_m35CCF0C70F55F61DA7FA92E5F6FAE3FD8A3B1AA9,
	_UpdateScreenshotProgress_Invoke_m6C64AE079B37F9E8F1DA3E06BF5107776308D719,
	_UpdateScreenshotProgress_BeginInvoke_mD6A48DD76851FB698398EA93E20AF35513BF417B,
	_UpdateScreenshotProgress_EndInvoke_mAE46A7CDA976C3713BA175376E2835A1A52767A3,
	_TakeStereoScreenshot__ctor_mE1CAE76C6757EC6467CBE79985D00F793C10382B,
	_TakeStereoScreenshot_Invoke_mC0D27D2FFEFE70AE86AFD89DE83E5A4C6E8CD06B,
	_TakeStereoScreenshot_BeginInvoke_mCBC02686B86D9CA0A39BD6101FA855B47BCE1C59,
	_TakeStereoScreenshot_EndInvoke_mB09AC7E041A20E7895380EC7683946C417F97898,
	_SubmitScreenshot__ctor_mA941ECA90D3407ACA6424235228DBA155BC49DC4,
	_SubmitScreenshot_Invoke_mF4A83870356D66FE7E24F6ABEC40B9C2889C3BAC,
	_SubmitScreenshot_BeginInvoke_mB73DB91A1F790502B9886FF83D9191FCBF70D2D9,
	_SubmitScreenshot_EndInvoke_mF4B22A4901AF0D6A99326A39E59414EF392AD050,
	_LoadSharedResource__ctor_m885D5F9601B6A46CD185D21098B3FF3C4619F3D1,
	_LoadSharedResource_Invoke_m32528F7EB1FE319BC1680F28AB8DD9C1CC56D7D7,
	_LoadSharedResource_BeginInvoke_mA4CEB63B8953616AD932874F683FA0BC31959742,
	_LoadSharedResource_EndInvoke_m06B03CFB56E9F6BEA11AEA667493E89C3AEF9D74,
	_GetResourceFullPath__ctor_mB5EEB8B8FE40B34A93043864C551BEB7FB0A7366,
	_GetResourceFullPath_Invoke_m15AF8B0BF9860A56EF115172DE0DDCD0510D5A2A,
	_GetResourceFullPath_BeginInvoke_mA0E941EBA042402142A1819AF42EFB7FA1365928,
	_GetResourceFullPath_EndInvoke_m4DECF79AF93F7F5E3EA80528308EDD2A55164E89,
	_GetDriverCount__ctor_m4E732A760324EE23C85ECA2C03250A67421D5747,
	_GetDriverCount_Invoke_mE0740FB010FB475B86B76D9DE75DB9B17A6265D7,
	_GetDriverCount_BeginInvoke_m30276DFB7AA09FD1417D6F2EBCCC0F075EBD65AF,
	_GetDriverCount_EndInvoke_mE211983F89AE1578E7E67FF42E73C26FA1868B81,
	_GetDriverName__ctor_m3DF8E616D5109B00F425B6254CB4549B1F9BDD85,
	_GetDriverName_Invoke_m13A3A87CD195CD83A9BB88FBB1FFD51DCD0B29AB,
	_GetDriverName_BeginInvoke_m4015DBAB691BD6F1D59F5FB572236F14897D169A,
	_GetDriverName_EndInvoke_m00497759515A812CF26A5051BB8A7EC4A954CC0A,
	_GetDriverHandle__ctor_mDAE5939C2B15D82CEB5F4C3D55E12F74734136AC,
	_GetDriverHandle_Invoke_mAB4159CE88E9D0337C4C495C15D6518A093308AA,
	_GetDriverHandle_BeginInvoke_mADBCEDA7CCFFFF362B7985C9A0E17A74E4A65F5B,
	_GetDriverHandle_EndInvoke_mD27989AE263EE92769023FF14927CA5F656F080B,
	_IsEnabled__ctor_mC4C113770A6B25FF7CBE259ADEA0D0659E71E2AD,
	_IsEnabled_Invoke_mBE5F3BEDE8CA7F11CF8E908D6BB9176BEF341D41,
	_IsEnabled_BeginInvoke_m93688854281B050947C7023DD8F6C435BE3AA99E,
	_IsEnabled_EndInvoke_m733BDB7630311CCBF3130A23FACD1B0510CC3C2E,
	_SetActionManifestPath__ctor_m187F1466A1B42C54193539EE8CF232E3B5B618DD,
	_SetActionManifestPath_Invoke_m9FC4C1E9FAE361DD0E2B6389EF2750BE487F007A,
	_SetActionManifestPath_BeginInvoke_mF3CCB54545D9EDA62AC2C81ADB19CFBE3A6F5533,
	_SetActionManifestPath_EndInvoke_m7D246AFB14F55E54A521F78552CEEA4FF487830E,
	_GetActionSetHandle__ctor_m3C435F8878D83529B2E7B4223E2C0F3E79A4F4EC,
	_GetActionSetHandle_Invoke_m6C9B593EE272A36907D130BE74E3F636E7EA6064,
	_GetActionSetHandle_BeginInvoke_mC49F65565855CCC0BE93FE4ADC509F6D239EF36E,
	_GetActionSetHandle_EndInvoke_m625F959EB33C6998B361C4E2BDF4B9B945F2410A,
	_GetActionHandle__ctor_mA68AB5B6C1242A091CF2487D0E1F4725621BC845,
	_GetActionHandle_Invoke_mC22460BF86BDF57ACD70B6078A657E6B4DB97144,
	_GetActionHandle_BeginInvoke_m77B155662CA6CFF5D62C5A9DE8DF64F27DF2C5E2,
	_GetActionHandle_EndInvoke_m853DBD7425F47D026ECCFE07B358E9F0674FFE37,
	_GetInputSourceHandle__ctor_m9555CD3B34DD57D90D9F2D031B9136BDA9404D80,
	_GetInputSourceHandle_Invoke_mC37D3D16BEC35EE3451F9A3A03744B92454205C2,
	_GetInputSourceHandle_BeginInvoke_mB653C8E6B7EEBAB4AEE6C97F515E08CB50F619AB,
	_GetInputSourceHandle_EndInvoke_m0080703591117320E5013AE12A37BAB7FECF37D2,
	_UpdateActionState__ctor_m6C8E33A2414F0E19B3EA26525D79185EE6619A9D,
	_UpdateActionState_Invoke_m8B6F6757339087FD2B5488EE84318993B3DC0BCF,
	_UpdateActionState_BeginInvoke_mCB9F4917B31558C5B9DDD349E155B04D78DCBC0B,
	_UpdateActionState_EndInvoke_m0B81830C55067D979C83A5E0C4FB4DA389ADDA5C,
	_GetDigitalActionData__ctor_m81FD9C9E683616C84586673009E4035100E33514,
	_GetDigitalActionData_Invoke_m2FB902BC3DA9A44FEB738B2011A9D126CBEEE0AE,
	_GetDigitalActionData_BeginInvoke_m37AD056E6850573566E67C85FF44A9E567ABFD5D,
	_GetDigitalActionData_EndInvoke_mB3019AE7772AE83B0B16FE8EEB4A5183B8F1E6E9,
	_GetAnalogActionData__ctor_mB301A5BC1583A2E991A205C7FF5676AA547FB295,
	_GetAnalogActionData_Invoke_m266A8FB317333CB9458CACCE71AA4F08E5ACF597,
	_GetAnalogActionData_BeginInvoke_m086D33054FD8BF604BDD7CFD8228E8F2465BF18A,
	_GetAnalogActionData_EndInvoke_m82022E95E554B91551BA3FA4A3FE975D0C313B50,
	_GetPoseActionDataRelativeToNow__ctor_mE5FCD16C96FAA91EA3836568F615805EE89D15D0,
	_GetPoseActionDataRelativeToNow_Invoke_m4C86F99B52EF1E3A3721DC9B1B7D972DD484D825,
	_GetPoseActionDataRelativeToNow_BeginInvoke_m9523357F1A4E142DA0231B11F40B02256FA10ECA,
	_GetPoseActionDataRelativeToNow_EndInvoke_m3E8E0751753FA3B63BB4CE116E912612BEA9D0CB,
	_GetPoseActionDataForNextFrame__ctor_mB58915FBE3C78789F7EFB47F2C5BBDD0A82D2CD0,
	_GetPoseActionDataForNextFrame_Invoke_m5B31DC3ADD784072B4EDC435CC9539B939086C41,
	_GetPoseActionDataForNextFrame_BeginInvoke_m2BC9E0FFAA8DB1B81693C2400851184D60DDBAC7,
	_GetPoseActionDataForNextFrame_EndInvoke_mF8B5CD65C968AAF6242C186895C9889D3B1DD7D1,
	_GetSkeletalActionData__ctor_mF5314C087C8F02C3D6E82E67B3BD1E41C7F09183,
	_GetSkeletalActionData_Invoke_mFD7322A817129E2621EA9DC59B1064AA4E095405,
	_GetSkeletalActionData_BeginInvoke_mA600425ADA2CC65F203604DBCC3DDF5283947B15,
	_GetSkeletalActionData_EndInvoke_m57A28532EE35F98B899C3F3556C33971AE1B2EDB,
	_GetDominantHand__ctor_m3286977AD62988A30B00E4FFB44918D38FF096F9,
	_GetDominantHand_Invoke_m7EB0E56CC265E8570CDF72D5C10B63C62BEC6643,
	_GetDominantHand_BeginInvoke_m117FEC882E1DB81614B6BBE9050A2C6C6DE5CD0F,
	_GetDominantHand_EndInvoke_m44D016991B89F44A0B423A6DC317CA5FEE4C0FB2,
	_SetDominantHand__ctor_m6B756659E29721A5BD5422DB76BF0CBE8BC25AE2,
	_SetDominantHand_Invoke_m50898921496BCEF2287179FE53D24E7C08246CD9,
	_SetDominantHand_BeginInvoke_mA73C6AE5CDCD410D50A7DB423775C9AA58891304,
	_SetDominantHand_EndInvoke_m39389691A997CE5C860086FC9302A6680DB820BF,
	_GetBoneCount__ctor_m2AE32684C114E73B3BDE782A7439A54B68F9EE62,
	_GetBoneCount_Invoke_m38A52517F3A1C3264F6866E10EBCB675419FFABB,
	_GetBoneCount_BeginInvoke_mC3A79447FDDF8BE3C474F711977F046B11D949D2,
	_GetBoneCount_EndInvoke_m88E41E4B072657F6841F9413761BC31755880612,
	_GetBoneHierarchy__ctor_mD81C6CD66B6DF263840C731BF3DEEA50921FAE36,
	_GetBoneHierarchy_Invoke_mACF88A039D229AD5E1E97FDB25C8C568D2A4BCD7,
	_GetBoneHierarchy_BeginInvoke_m8BB1B8ADEE2C67B49AB83ADA2161DBA2DBE036E3,
	_GetBoneHierarchy_EndInvoke_mC652E1E323AA11C904ADAFE78A5CAF17DBA37CB0,
	_GetBoneName__ctor_m205AF573AC8EA6D0FA9CADD10DA0FA0DA30B24F3,
	_GetBoneName_Invoke_m0B2003BED8A1A9AF10AA8FA32038151E3A64E4C3,
	_GetBoneName_BeginInvoke_mD4D57F26E94B057B5FF171B6AB6D438384416F83,
	_GetBoneName_EndInvoke_m3B369CC60EA647B3B0A239237DEA25F35D33DF0A,
	_GetSkeletalReferenceTransforms__ctor_mEAA08AC5117F986CB44D245CC7D6637BF5A96784,
	_GetSkeletalReferenceTransforms_Invoke_mADAC4A81C516468730F256F73D58AA5B9BEB8D28,
	_GetSkeletalReferenceTransforms_BeginInvoke_mDCBE9A4983D324D65EAB33954408E6DC71BA3034,
	_GetSkeletalReferenceTransforms_EndInvoke_m3E55300BA586617A02B90031D6F3A8898F2AE757,
	_GetSkeletalTrackingLevel__ctor_m0F3B18525F40B2047BE3EEF5C66EAEA8AD9DA73A,
	_GetSkeletalTrackingLevel_Invoke_mADA36F6A8FD9E53E65223A2994EB08C69F5EF6D4,
	_GetSkeletalTrackingLevel_BeginInvoke_mDE9338690038D8B5F1A328B898099FCB381D28F4,
	_GetSkeletalTrackingLevel_EndInvoke_m6008C83AAF3F247A909334379E2130B83C70626F,
	_GetSkeletalBoneData__ctor_m7BE5624BDF093699816B86276551A7ADD702685C,
	_GetSkeletalBoneData_Invoke_m70FD6C22451096AA6418061DE1C3E47196D93B7F,
	_GetSkeletalBoneData_BeginInvoke_mE74523338829F98D7EB981FC697C8CDF4900C3B6,
	_GetSkeletalBoneData_EndInvoke_m312176F18F066798A871A7713595A75F0E95E209,
	_GetSkeletalSummaryData__ctor_mF697C6D674534DCA40490BFEE2283FBD145430DE,
	_GetSkeletalSummaryData_Invoke_m2617D032783DCBC43FBDF8C066EB8467ABC87BD1,
	_GetSkeletalSummaryData_BeginInvoke_m52C57480F4654E86FD6AE0F10E50A8BA868F038B,
	_GetSkeletalSummaryData_EndInvoke_m7DB7F590BDB8AE341B231263DCA00E0C3FB4DB08,
	_GetSkeletalBoneDataCompressed__ctor_m7C88E75432C040506A1D20BBB79E24837E999F41,
	_GetSkeletalBoneDataCompressed_Invoke_mCB15672D176C6C7C7983330E6F69FAA02F783D87,
	_GetSkeletalBoneDataCompressed_BeginInvoke_m19E86E6C7AD42F4A3F07A1FDAD734F40ADB016E0,
	_GetSkeletalBoneDataCompressed_EndInvoke_m03F2C7C769F86462D22332920E50EB5BBB1C1E0D,
	_DecompressSkeletalBoneData__ctor_mAF5CDB86FB35FD4119C24173BA0D8DF3E58A112F,
	_DecompressSkeletalBoneData_Invoke_m6E021E584EC4C2724F360E59C29246871A8FF276,
	_DecompressSkeletalBoneData_BeginInvoke_m9667294AD93FD763035A90B6388F4FC6495A96AE,
	_DecompressSkeletalBoneData_EndInvoke_m4C58F8AC69A6C0FFC5AA889B6DF0E75B8F34F24F,
	_TriggerHapticVibrationAction__ctor_m9897C8413C219A324D2C0C0DFD66AA02DCE9B32B,
	_TriggerHapticVibrationAction_Invoke_mD2B33FE7D6D69331E9A9BD761293532FFD0081FF,
	_TriggerHapticVibrationAction_BeginInvoke_m40BF3E1806440C68ED68626E2A8F0D693ECCC6E7,
	_TriggerHapticVibrationAction_EndInvoke_mD974840513B83969D0622352C998EA65E815D997,
	_GetActionOrigins__ctor_m4A6AC7D420CE6FB5B96466926A04EB1C8DFD2611,
	_GetActionOrigins_Invoke_mA25E866CBFF159A948FFF9FAC1D4FCB3BAE53572,
	_GetActionOrigins_BeginInvoke_mBE75BF07A3FF486E3D920A1F674299E0FBB0782D,
	_GetActionOrigins_EndInvoke_m72E4AB8AF7FEE8824734861D7F7B9585DFADD626,
	_GetOriginLocalizedName__ctor_m9FB075BE399332ADCFBFD31A71840691C157AF9F,
	_GetOriginLocalizedName_Invoke_m6A393BD3AF6F23FD3400F1A154FC0D7B2150306E,
	_GetOriginLocalizedName_BeginInvoke_m9FB7EDBE790DE6D13475AD2BD6F73A3B2A3DB096,
	_GetOriginLocalizedName_EndInvoke_mBE5296ACDAD04A2F272A39DD09247084747D83E2,
	_GetOriginTrackedDeviceInfo__ctor_m1CE7550EE2DC5300B40EDBE7EFBCE6E9E3ED39F4,
	_GetOriginTrackedDeviceInfo_Invoke_mFD9F2323420944B0EF5C55A8B4B8A5B253A2A4BE,
	_GetOriginTrackedDeviceInfo_BeginInvoke_m51D50F72BB579668386F733063F896D7B03329E0,
	_GetOriginTrackedDeviceInfo_EndInvoke_m7EAC25B0B80A783FF16CA18C28383346636183FE,
	_GetActionBindingInfo__ctor_m293E44EDAF748F619D70531335DA46A0F9E70FD2,
	_GetActionBindingInfo_Invoke_mA09662969F5B5BE9144C886D6751E0E9FC6AE95C,
	_GetActionBindingInfo_BeginInvoke_m5385FCFCE9D578315708656DBF51F3A80474168C,
	_GetActionBindingInfo_EndInvoke_m388410D1407252255EEB8EEECA7715CD80DAB27F,
	_ShowActionOrigins__ctor_mC7E7696427FA50116F3832A8A135DA110CE5F2BA,
	_ShowActionOrigins_Invoke_m73798FA3D4EC8EB34596A15996E8217DC348CFE0,
	_ShowActionOrigins_BeginInvoke_m7BE35798A3993FCC739BF129BB51701BBF884165,
	_ShowActionOrigins_EndInvoke_m0CB95B3BE351CC28F4039733B2645410C33D7D97,
	_ShowBindingsForActionSet__ctor_mDB0FF5D3897C8558825788CC68CFD0CC27C6AD8B,
	_ShowBindingsForActionSet_Invoke_m9FC9AF94BC4124BF43A6673CA9E3CD0F28E9ECB8,
	_ShowBindingsForActionSet_BeginInvoke_mA08012A7B71BCBEC4E4DD81F5171B45D5A4971CF,
	_ShowBindingsForActionSet_EndInvoke_mC615FB7C58C227447BFBB24FFD16FE3027ACCA35,
	_GetComponentStateForBinding__ctor_m98CEBEE48CC4ACB1A31EEDE28D54F8C65514A54F,
	_GetComponentStateForBinding_Invoke_m1C11F475A8AF1CEE9A8D67F468A71E2DC39A6EE3,
	_GetComponentStateForBinding_BeginInvoke_m8ABA188566601FD72A8BD93C7502725DF2E2D07B,
	_GetComponentStateForBinding_EndInvoke_m5476834B5FD2FAFABCA24BDD35741B9B2EE51DA5,
	_IsUsingLegacyInput__ctor_m8FD2F446CDA05995AC3EDEFB9AE8741DCE62D66B,
	_IsUsingLegacyInput_Invoke_m2AB1A194A8532A555C4762346B63B4C44A4DBBA3,
	_IsUsingLegacyInput_BeginInvoke_m4D83B0AD81BB69EE66FFF752632B804E4AEE010D,
	_IsUsingLegacyInput_EndInvoke_m51A002B9BC8998F9A5123CDC8A814C0D8799FFC1,
	_OpenBindingUI__ctor_m3D2E1D576946E6F9F091D3DCFA5C53EFF82BFF0F,
	_OpenBindingUI_Invoke_mCEAD2A36CD175D13E7322F44916C7B7F6FBCADFF,
	_OpenBindingUI_BeginInvoke_m9F7C2AECF86479D6035771857897253BC748FAC7,
	_OpenBindingUI_EndInvoke_mFC1D5A2DF5361C4A6674A300DC00ADF42041F5C7,
	_GetBindingVariant__ctor_mA71064A60DEA8B667FC601575D8920436DE6D6F3,
	_GetBindingVariant_Invoke_m474786A920703D0C5CA228C220A78EE713123A23,
	_GetBindingVariant_BeginInvoke_mA727D993B8D32475D47D590879CB1F00CAAFA3C7,
	_GetBindingVariant_EndInvoke_m20A3FE2C445DDE01D22270C5378471A0557F4557,
	_Open__ctor_mC4FF07C28BA6CECF655051086FB3A48C2E816583,
	_Open_Invoke_mB2454DA3759EFA37159439F192FA59F0E1AC7FAE,
	_Open_BeginInvoke_m2DFCD765ECF83533C82E4FAB1E3824E4CFA81C1A,
	_Open_EndInvoke_m00FFA0A3052B4C32EFC7A1FDE0DBC28509E5D18A,
	_Close__ctor_mCF691625DF14F1F1D27FE325FACEE6D63E5F7DEE,
	_Close_Invoke_mC6D60A5C30AD254447E5EFF5E6554F53BC259348,
	_Close_BeginInvoke_mB9FB69396374809DAA15F937A2080B89DC303A7C,
	_Close_EndInvoke_m11307B7EE0100BE7941DE1014076C3EFB4059F36,
	_Read__ctor_m8D6D4CF9953B0D360E093A2FC663FA7229E33045,
	_Read_Invoke_mDA88600433381057A44AD42594F0F8BC7F09FE12,
	_Read_BeginInvoke_m5521196E1A673F35D7909B3D40DD022AB95D4541,
	_Read_EndInvoke_mCCD621910A2FA2FCFD82CEFF9229218EB7263DFC,
	_Write__ctor_mD8A2C81F15E08D2924B1C33F040BEF2E9848BF52,
	_Write_Invoke_m5D12326FE6A39BAA537760731D8E2285EF8F33E4,
	_Write_BeginInvoke_m2A106E6F69B6F0121CCB9A54169B8958643AB1DB,
	_Write_EndInvoke_m22A356F8524948D7EC49D5E0A46E386BBD7664DB,
	_PropertyContainer__ctor_m05EAAE9CDBEBE67F5E8CC55F0DD63EAA5E44F000,
	_PropertyContainer_Invoke_mEB90842E37A5EACAC1B11B4F737A8713D265E302,
	_PropertyContainer_BeginInvoke_m6043063E720A4BC81469B1AB5D202ECEA6D0FBFD,
	_PropertyContainer_EndInvoke_m7415752BE7F3C147D416A99A0784EE5CA1BA9098,
	_HasReaders__ctor_m9B2AEEB034C9983D61BF8F8679F22D26F8A959F3,
	_HasReaders_Invoke_m2526EEFE40EA5E44B64C6AEB94213030AF6A4FD7,
	_HasReaders_BeginInvoke_mB80299ABAC0A02671BCDD66CE5DB106677B0C051,
	_HasReaders_EndInvoke_mF95F171236D686A70218D432265A364F31718E92,
	_CreateSpatialAnchorFromDescriptor__ctor_mAF930902861379CB82409FA85D7D03360D72E300,
	_CreateSpatialAnchorFromDescriptor_Invoke_m5DDC3657E80212209E67B94CB9D70F18FB54C0E7,
	_CreateSpatialAnchorFromDescriptor_BeginInvoke_mD49750128960A0AE2DF012A7EFAAE0772A9BBE44,
	_CreateSpatialAnchorFromDescriptor_EndInvoke_m8B55397A8747B0F9F66F8376C8733FA94A32C390,
	_CreateSpatialAnchorFromPose__ctor_m78AC78E96991BC32F0BE63947C667BDD9C4A123E,
	_CreateSpatialAnchorFromPose_Invoke_mA75421128291788D1911E0744E9A53CE4B2ACFA5,
	_CreateSpatialAnchorFromPose_BeginInvoke_m028B5CD5BB6FD295DD148FCEBB13E7F391C8B81D,
	_CreateSpatialAnchorFromPose_EndInvoke_m5947D5051FC25392C4CC082FDD2D5B6397061C4A,
	_GetSpatialAnchorPose__ctor_m31A7302084BDCB3D0B2339C3D0C91AB5FC109D93,
	_GetSpatialAnchorPose_Invoke_mCCAAB00996F62E64BB184D1065A48A099F45F415,
	_GetSpatialAnchorPose_BeginInvoke_m10ECF6302C626751D116FE5C2BF33928A17DE395,
	_GetSpatialAnchorPose_EndInvoke_m0C6ACB9A072744E413C08A808E5926282E23666A,
	_GetSpatialAnchorDescriptor__ctor_mF9EA4B614DAAF28250C703FD287BBAA355CEFA66,
	_GetSpatialAnchorDescriptor_Invoke_m2F26924E1E1757F650BAE76CC0EA2A19E1DA6EF2,
	_GetSpatialAnchorDescriptor_BeginInvoke_mE75B225F54DB91ED0CE97F4BAD332411CE413546,
	_GetSpatialAnchorDescriptor_EndInvoke_mFB71166C3035648BE3CD83B1286C228CC53F24AF,
	_EmitVrProfilerEvent__ctor_m5C662F36243672205CD03F5009255D2B9BB3EC39,
	_EmitVrProfilerEvent_Invoke_m5400719D0A53214ED6E4F926DCF4CE9AE52BDAF5,
	_EmitVrProfilerEvent_BeginInvoke_m29AB7DD560C30A03DDE06C00C49D9299B51D932F,
	_EmitVrProfilerEvent_EndInvoke_m30CF0AA7EDD036E8D1E750611DF41A562A1BC0F6,
	_BeginVrProfilerEvent__ctor_m388A9D86FC9F81103D4ACE1995674B438821D31B,
	_BeginVrProfilerEvent_Invoke_mBE11CC94FABAAACA0B1C753D1777F89CC5B5D0D6,
	_BeginVrProfilerEvent_BeginInvoke_m0A0EF8791D39A4DE1B6903DB2696844987DAF181,
	_BeginVrProfilerEvent_EndInvoke_mC97FEDFA5443F8D1B73C306447C90D1F20747182,
	_FinishVrProfilerEvent__ctor_mB7A62FC21F88831952ED5863DB4239D2ADB28922,
	_FinishVrProfilerEvent_Invoke_m40536125C46352155FFB5F79F7090B711F122ED8,
	_FinishVrProfilerEvent_BeginInvoke_mDE42CD668FB56C24F9CA66D4FD158CC12C2AEA6F,
	_FinishVrProfilerEvent_EndInvoke_m4D16B4DBA7F37AA4400BE362314B7A5687752DF6,
	_DriverDebugRequest__ctor_m736E9610ACDB6749A30E1CD755FCD8856B1D9A32,
	_DriverDebugRequest_Invoke_m8AC33AE977858DC647DA40F38A4E76882B6E8057,
	_DriverDebugRequest_BeginInvoke_m2635EE9A9C1DBCF422E72F656481EF63435542B5,
	_DriverDebugRequest_EndInvoke_m3EC3632F05F2152034CDAB00BE5AF62FA46F4B58,
	_ReadPropertyBatch__ctor_m928C407F3ACE7896515FAF66485CD4EB9BD0425D,
	_ReadPropertyBatch_Invoke_m5E7FEA43956CD7AA8C224E1189DE64E3B4CDDE7B,
	_ReadPropertyBatch_BeginInvoke_m2A0DA0770FAAF3F3D8304F755F5F2CE35DE314EA,
	_ReadPropertyBatch_EndInvoke_m3567EFCBB76D6D55F0F4863BF0E134FAC4520817,
	_WritePropertyBatch__ctor_m4D8EA64DFA1F7101832836AEE58966BCE811AA04,
	_WritePropertyBatch_Invoke_mEB7D6E543E9A0C3F200F169BC9969949F7CC3B4E,
	_WritePropertyBatch_BeginInvoke_m330B5C556F349767E61F7DC8A2A3720D7C91EAC9,
	_WritePropertyBatch_EndInvoke_mD473A5EF65745A71F7D12B665F0B6403EEA338D6,
	_GetPropErrorNameFromEnum__ctor_m37FA773865F5D7E3FE63025898CB094021BF2682,
	_GetPropErrorNameFromEnum_Invoke_m431B7302DC65F6863EBF9DA198BF65258163B273,
	_GetPropErrorNameFromEnum_BeginInvoke_mB481973588F08C9852B7162E9872EA23F36CC1F0,
	_GetPropErrorNameFromEnum_EndInvoke_m3DD3D12723D5151C8D8B24A9FF94D12353A90CC8,
	_TrackedDeviceToPropertyContainer__ctor_m7D1437D0B67C8359EC840B356C36AF6D403C3CB2,
	_TrackedDeviceToPropertyContainer_Invoke_m66CD9ECE46DC7F2270459461CBA5F0BF77896D0A,
	_TrackedDeviceToPropertyContainer_BeginInvoke_mECE6786CE8FC199D56C67A4855086F8E6625EA2B,
	_TrackedDeviceToPropertyContainer_EndInvoke_m95433E85541E1000AF6DD4A7046FE6D57B622A70,
	_ReadPathBatch__ctor_m76C55F77F4CEE2D7B466EA9BE9BD70B07D257CAB,
	_ReadPathBatch_Invoke_m146855E2F8B838F2FB1AB0CC430F42D350F8961C,
	_ReadPathBatch_BeginInvoke_m3C8161485F361334DD6B2C735F50E6D101D9265F,
	_ReadPathBatch_EndInvoke_m5CD40B4DDBC2781822D9E9787BC67466FC71087D,
	_WritePathBatch__ctor_m8BB82F334463D19C517CAA9C0F40193EF59E9129,
	_WritePathBatch_Invoke_mCB59330CD2381007DFB11FE397B911D730BF9087,
	_WritePathBatch_BeginInvoke_mEED7DAE82F574CA234068BFE827E959BAF1866ED,
	_WritePathBatch_EndInvoke_m729A81B07ACDDD3A5687F24555FA8CF67627B3A5,
	_StringToHandle__ctor_mB5BD48E6D1A87E13F4FDBD6B31B9B52E31DF1221,
	_StringToHandle_Invoke_m8B60A7BEFA373EFF390D827D4366AAF5B8842DB6,
	_StringToHandle_BeginInvoke_m5ABFD2D12D72832B4BCCCD73A4E8CF1642689106,
	_StringToHandle_EndInvoke_mA7D3ED7CE0FCD237E0C1A2B1180CE8185EBF7E29,
	_HandleToString__ctor_mDF05B0F4213DF1F0D3E785AAEDF60E64494DC30B,
	_HandleToString_Invoke_m0776597E8232DCD4B68B6E38106A165E288107B4,
	_HandleToString_BeginInvoke_m86F8E8EB5E285A130D78C9BDBD12755E4A2F34A2,
	_HandleToString_EndInvoke_m227DF766CF88B228AAE7CAAB19721BECF68C0AAA,
	_Create__ctor_m016057D25D26C0AED396D255C2E40C5350B0507E,
	_Create_Invoke_m412FACAC89B0B86905CB76B411F04A70053BC8B3,
	_Create_BeginInvoke_m8C0E561CDA0175B0F1EE11752923838C0907DD65,
	_Create_EndInvoke_m49C529DAA840DF515E5D0E45D480EFFD0F285C37,
	_Connect__ctor_m9D2E6E0EAF76C9DB161CAF1A1AD4B572EEA38788,
	_Connect_Invoke_m528132D505FE88E2CFE0AD020F372196FFC4489F,
	_Connect_BeginInvoke_m106AA83026F05F992C14BEB0320400F2D6778133,
	_Connect_EndInvoke_m312AA70EC3905A25D8A80C8418A5F81A87F407F5,
	_Destroy__ctor_m977C53D452AF2B6AF781BFD34D66A63F31F4643B,
	_Destroy_Invoke_mF1B732002DD63D8B8E61D67919631350896C25F7,
	_Destroy_BeginInvoke_m679102D5859FCED96101BC453302C1FB1454C789,
	_Destroy_EndInvoke_mBAA0A8718BB06F92FB7D03C4E2EFC32055E2FA98,
	_AcquireWriteOnlyBlock__ctor_m88B1DD049ABBB5C72CB832509945F12FA3FF6F02,
	_AcquireWriteOnlyBlock_Invoke_m6820570F432DC106027064DF66D3FF695126805C,
	_AcquireWriteOnlyBlock_BeginInvoke_m881763719148D8AF0370AEFCB02D643424F55D8C,
	_AcquireWriteOnlyBlock_EndInvoke_m9EB3E75792C7C436627B1FBBB180B148AC7CF852,
	_ReleaseWriteOnlyBlock__ctor_m0B728AE5B9B2AD4E8F3F1ECED3791DBB34744AEF,
	_ReleaseWriteOnlyBlock_Invoke_m876DA67610E0CA2DF0CF8F01E7C7A2183F8BE16C,
	_ReleaseWriteOnlyBlock_BeginInvoke_m3B3AC3263F06DA7F15EAC3D39159B2C06AD0324B,
	_ReleaseWriteOnlyBlock_EndInvoke_m91267FE5E26FBA023EED3BF6AEC15958B4CD6B5A,
	_WaitAndAcquireReadOnlyBlock__ctor_mC3FB3DA137275A806638289B3A9210950369F96B,
	_WaitAndAcquireReadOnlyBlock_Invoke_mC936FED7449433AC2B10BB99517E372C7DBDC052,
	_WaitAndAcquireReadOnlyBlock_BeginInvoke_m5E60520741EAAE6BE5EC17984D09CC59F24A4F2C,
	_WaitAndAcquireReadOnlyBlock_EndInvoke_m7A573B5899FA70C8F18F919C561B57F00A0377F7,
	_AcquireReadOnlyBlock__ctor_mD8CB3CEAD1756FBF3179E061CAD17F4CB31C0848,
	_AcquireReadOnlyBlock_Invoke_mDD155967A8827136E4C67BF25839733C4BBD33C4,
	_AcquireReadOnlyBlock_BeginInvoke_mF960B466BF690083BB74EB6C9EF824C860A79666,
	_AcquireReadOnlyBlock_EndInvoke_m5A56069EC7BE88C6D7801391EB194D62C54B5DA2,
	_ReleaseReadOnlyBlock__ctor_m14DB9A0F43A0B39066BDD58E9D5B3D618E0DDCC3,
	_ReleaseReadOnlyBlock_Invoke_m00B7310B708FCDB552A4678807FFBEFD0DAF2DA0,
	_ReleaseReadOnlyBlock_BeginInvoke_mE62FE68739751EF2BAC8F1DB17014C03B6E2A4B6,
	_ReleaseReadOnlyBlock_EndInvoke_m0055A7113D74DE70C4364955EB10E0D4064FCC15,
	_QueueHasReader__ctor_mBD3BE28D8998C0A14A8E7CBA450BB64BDBEC2CD9,
	_QueueHasReader_Invoke_m5BB814F06AD39C79FF5163450FE0D44EF6631F0A,
	_QueueHasReader_BeginInvoke_m0DA42232F7A3BFC625F737A0A228DD4A1832BB38,
	_QueueHasReader_EndInvoke_m9EBA774E2456D1B86B03A61F8BC68BFCC28D6BBF,
	_PollNextEventPacked__ctor_m5388FDEE71B6623A0BB321FAF5F9265115718E6D,
	_PollNextEventPacked_Invoke_m41902BAA2C7CC610DA208EFF587F60F4583AACEE,
	_PollNextEventPacked_BeginInvoke_m462D70A0A819136C8D95A7C26628E251DF67DDE1,
	_PollNextEventPacked_EndInvoke_mFCDD8C2BEEC0D898F0219B2A2CA74643FD1D0588,
	_GetControllerStatePacked__ctor_m61E5BB3794DD7BFE1A8B0CE22E9A348D1ED7A0CA,
	_GetControllerStatePacked_Invoke_mE4EFB27F0E4412883AD456BB27C65A7FCB164715,
	_GetControllerStatePacked_BeginInvoke_mB76609CC0B69904F26554C7C59EFAF787511B2FB,
	_GetControllerStatePacked_EndInvoke_m8BEE1522159B0A52E03C688F388B501C5E46733E,
	_GetControllerStateWithPosePacked__ctor_mB1FB1414A3E594F51B8341693DDB0C59835535A3,
	_GetControllerStateWithPosePacked_Invoke_m9510049B12FC9039A9D535C25640AAA22150247F,
	_GetControllerStateWithPosePacked_BeginInvoke_m369A3719513AC682B54480648FF1F8DEDE298D14,
	_GetControllerStateWithPosePacked_EndInvoke_mF392A1FBA330FE83F2D7B43E8CC3C32EBF546530,
	_PollNextOverlayEventPacked__ctor_m5C0DF9669F1F9498DB9B925E0870686DAEEB8469,
	_PollNextOverlayEventPacked_Invoke_mF1280708470924D4F0A285F59B75478ABAE15BFF,
	_PollNextOverlayEventPacked_BeginInvoke_m387AACFE7C717AA6503401B20E810E76E9907E0B,
	_PollNextOverlayEventPacked_EndInvoke_m1965FC41950349FDBCD3BAF6FB5AB9DBBF9886AB,
	_GetComponentStatePacked__ctor_m3A2906CBE48BA82D8C97A2AEEA9F03A360F5E422,
	_GetComponentStatePacked_Invoke_mF1F3D8A006C98B47EC295563F7B7C0F096BCC001,
	_GetComponentStatePacked_BeginInvoke_m3C6F9B94DE6ABEAE32D80E01D75FF9F27400F8B3,
	_GetComponentStatePacked_EndInvoke_mCECA74D6577B7AD3CF51D5BAA953E491A0AADEF6,
	COpenVRContext__ctor_mAE6FF5C1FEE35171EA710E8BE85D97CC508FBCC2,
	COpenVRContext_Clear_mAA75E61322BB54DE09E55D93DDCC299EBB0AFEAE,
	COpenVRContext_CheckClear_mF6FDDE5D427B6B9CFE819AB3F9C2A10628F6EFFD,
	COpenVRContext_VRSystem_mB4619D158055B007B163FC0D1BA21E1184BB16F1,
	COpenVRContext_VRChaperone_m107CB19F0150730FFF0645C909798C0E3760C5F7,
	COpenVRContext_VRChaperoneSetup_m567710C9F662957C4CDEE5B764AE31D36B60409C,
	COpenVRContext_VRCompositor_m252AB13756F766D867AE5EE3DF29656F8FA0E338,
	COpenVRContext_VRHeadsetView_m61777207AF07FAF6974B4AA0C318313A5FF75C9F,
	COpenVRContext_VROverlay_m03CD0CD76B41287048AE512B43D577A694783747,
	COpenVRContext_VROverlayView_m44E3F4C93E2498667A15939BFD22EF105EB7DA19,
	COpenVRContext_VRRenderModels_m32F7ABC4443C706F0BD8C1EF221C375F1BAA1F28,
	COpenVRContext_VRExtendedDisplay_mD9D70641C0CC16F50CC6138DCD1B32F60D6404A6,
	COpenVRContext_VRSettings_m18D2A195C0AE4A34915B7B1F78A2F1CB275BB47A,
	COpenVRContext_VRApplications_m2DAAAAB0B5B7CB09CE0D93403A616248D4BD2564,
	COpenVRContext_VRScreenshots_mC5229B2FE196E2317F70B2E591748F8AF8787C59,
	COpenVRContext_VRTrackedCamera_m8AC4D92961C83146F20D7F086188D1808C1F8437,
	COpenVRContext_VRInput_m06BE9A5E6A44844B15183E21E8DF9EE7769C8DEE,
	COpenVRContext_VRIOBuffer_mE8B20B7B0DD6F14C0FD2CEE333B95DE703F6AB0E,
	COpenVRContext_VRSpatialAnchors_m5986011FB3C6181C8314B75EC2C79E4727FE5234,
	COpenVRContext_VRDebug_mAC423EFB25F62F4400B1B418F05CED32481BE066,
	COpenVRContext_VRNotifications_m6F5B960A66185CC2F1015FDB1E3EEFBA42687837,
	U3CU3Ec__DisplayClass2_0__ctor_mC0F996DC37EE972A036E889BF681FCEAE1A8F2D6,
	U3CU3Ec__DisplayClass2_0_U3CGetTypeU3Eb__2_m3F560BB2E41400B886C2C0D7A8896B9C32D0251B,
	U3CU3Ec__DisplayClass2_0_U3CGetTypeU3Eb__6_m2C67116B76BB1EDF7161CEED63F18496A9D72A37,
	U3CU3Ec__cctor_m7FBA52BA229506FCDB2FB2B3FF7F8262EF92E9F0,
	U3CU3Ec__ctor_m1802F4BB706D17B830BB77AA4006393B347C6C86,
	U3CU3Ec_U3CGetTypeU3Eb__2_0_m15C50ABA125BFAF21CD1C2E2D98FC6A20F0E0AF9,
	U3CU3Ec_U3CGetTypeU3Eb__2_1_m351EF821B6EE14DE59039F718A4C7CF58963FEAF,
	U3CU3Ec_U3CGetTypeU3Eb__2_3_mF9A0137D9EEF95B77CFE23D4056530CBAEE17AB3,
	U3CU3Ec_U3CGetTypeU3Eb__2_4_m711BCCCF8883285FB4CD5F02227233639BD0A31A,
	U3CU3Ec_U3CGetTypeU3Eb__2_5_mD242F500201BF7901EA8E5EFC77F7A4C7A5A8B1C,
	U3CU3Ec_U3CGetTypeU3Eb__2_7_m839FF0DB8287D3282C858E1ABBA18ECE5C48A6FA,
	TickCallbackDelegate__ctor_m5BD704929127D7E83D013813D2A8AD3C07D1A6A0,
	TickCallbackDelegate_Invoke_mE028E7832E774CD96345C3F9288D063BA90F53D5,
	TickCallbackDelegate_BeginInvoke_m37281D1EC2E97F0E8236CB6D6CDD7D2F705EDF9D,
	TickCallbackDelegate_EndInvoke_mCA746C22AF1B11A06416CAD1DE6CE5D2713B718B,
};
extern void HmdMatrix34_t_GetPosition_mAAB6339034207A72B318AC783E2244B07D962AB6_AdjustorThunk (void);
extern void HmdMatrix34_t_IsRotationValid_m6A9C6BC2A4D1138D24A32663590300D319EEC6D9_AdjustorThunk (void);
extern void HmdMatrix34_t_GetRotation_mC38BF33EF009CC61DC1F5ABA90E548772DEEEF79_AdjustorThunk (void);
extern void VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB_AdjustorThunk (void);
extern void VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA_AdjustorThunk (void);
extern void VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57_AdjustorThunk (void);
extern void VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C_AdjustorThunk (void);
extern void VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B_AdjustorThunk (void);
extern void RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA_AdjustorThunk (void);
extern void RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E_AdjustorThunk (void);
extern void RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8_AdjustorThunk (void);
extern void RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036_AdjustorThunk (void);
extern void InputOriginInfo_t_get_rchRenderModelComponentName_mD0E80E21A3391B748D801C757D386E53159AFC93_AdjustorThunk (void);
extern void InputBindingInfo_t_get_rchDevicePathName_m7CCD66BC22B7864AB8C6D3A9FFA8138FF77403E9_AdjustorThunk (void);
extern void InputBindingInfo_t_get_rchInputPathName_m701591073264DE94EED11ED8548BDF293C58D55D_AdjustorThunk (void);
extern void InputBindingInfo_t_get_rchModeName_m533AD53F39404722A176E5617BB5EED0465233A3_AdjustorThunk (void);
extern void InputBindingInfo_t_get_rchSlotName_mD39A9BCAD1352ABA8AB1E2E4D3849096478F5044_AdjustorThunk (void);
extern void InputBindingInfo_t_get_rchInputSourceType_m1B9791DA1D6711892CDB973103FD80648A9A57ED_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[18] = 
{
	{ 0x060001A1, HmdMatrix34_t_GetPosition_mAAB6339034207A72B318AC783E2244B07D962AB6_AdjustorThunk },
	{ 0x060001A2, HmdMatrix34_t_IsRotationValid_m6A9C6BC2A4D1138D24A32663590300D319EEC6D9_AdjustorThunk },
	{ 0x060001A3, HmdMatrix34_t_GetRotation_mC38BF33EF009CC61DC1F5ABA90E548772DEEEF79_AdjustorThunk },
	{ 0x060001A5, VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB_AdjustorThunk },
	{ 0x060001A6, VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA_AdjustorThunk },
	{ 0x060001A7, VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57_AdjustorThunk },
	{ 0x060001A8, VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C_AdjustorThunk },
	{ 0x060001A9, VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B_AdjustorThunk },
	{ 0x060001AA, RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA_AdjustorThunk },
	{ 0x060001AB, RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E_AdjustorThunk },
	{ 0x060001AC, RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8_AdjustorThunk },
	{ 0x060001AD, RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036_AdjustorThunk },
	{ 0x060001AE, InputOriginInfo_t_get_rchRenderModelComponentName_mD0E80E21A3391B748D801C757D386E53159AFC93_AdjustorThunk },
	{ 0x060001AF, InputBindingInfo_t_get_rchDevicePathName_m7CCD66BC22B7864AB8C6D3A9FFA8138FF77403E9_AdjustorThunk },
	{ 0x060001B0, InputBindingInfo_t_get_rchInputPathName_m701591073264DE94EED11ED8548BDF293C58D55D_AdjustorThunk },
	{ 0x060001B1, InputBindingInfo_t_get_rchModeName_m533AD53F39404722A176E5617BB5EED0465233A3_AdjustorThunk },
	{ 0x060001B2, InputBindingInfo_t_get_rchSlotName_mD39A9BCAD1352ABA8AB1E2E4D3849096478F5044_AdjustorThunk },
	{ 0x060001B3, InputBindingInfo_t_get_rchInputSourceType_m1B9791DA1D6711892CDB973103FD80648A9A57ED_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2069] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	24,
	23,
	3,
	7,
	570,
	2057,
	2060,
	2063,
	2066,
	798,
	10,
	6,
	2068,
	89,
	222,
	1013,
	2073,
	2073,
	2125,
	37,
	721,
	37,
	37,
	37,
	30,
	888,
	2079,
	2081,
	2083,
	2085,
	2087,
	2089,
	34,
	2091,
	2092,
	34,
	2094,
	2097,
	2099,
	1265,
	34,
	34,
	89,
	89,
	89,
	89,
	37,
	23,
	503,
	14,
	7,
	2102,
	2060,
	570,
	7,
	34,
	2104,
	2106,
	2109,
	2112,
	2104,
	432,
	2115,
	2106,
	2117,
	2119,
	785,
	32,
	10,
	7,
	2308,
	112,
	9,
	10,
	2125,
	2125,
	112,
	2309,
	41,
	112,
	9,
	1086,
	112,
	34,
	2310,
	2311,
	2312,
	2308,
	9,
	41,
	67,
	67,
	775,
	2125,
	503,
	10,
	112,
	34,
	2309,
	10,
	7,
	10,
	798,
	849,
	23,
	2141,
	2143,
	89,
	31,
	32,
	7,
	30,
	23,
	798,
	849,
	849,
	849,
	849,
	849,
	1368,
	26,
	26,
	6,
	6,
	32,
	849,
	799,
	141,
	23,
	23,
	23,
	7,
	32,
	10,
	41,
	41,
	2150,
	2152,
	23,
	23,
	2091,
	112,
	726,
	64,
	2154,
	2156,
	2158,
	726,
	112,
	23,
	23,
	23,
	23,
	89,
	10,
	10,
	89,
	23,
	23,
	89,
	23,
	89,
	31,
	23,
	31,
	2160,
	7,
	2162,
	2164,
	7,
	7,
	503,
	2139,
	32,
	10,
	89,
	89,
	89,
	2313,
	23,
	2091,
	1149,
	1086,
	7,
	414,
	2314,
	432,
	2171,
	2171,
	2315,
	2175,
	34,
	785,
	432,
	2177,
	2179,
	2181,
	2183,
	2185,
	2187,
	2181,
	2187,
	2181,
	785,
	2181,
	2187,
	2181,
	2187,
	2181,
	785,
	2181,
	2181,
	2181,
	2181,
	2179,
	2189,
	2179,
	2189,
	2316,
	2193,
	2189,
	2195,
	2181,
	2181,
	432,
	432,
	433,
	2197,
	2199,
	2181,
	785,
	2181,
	2181,
	2201,
	433,
	2202,
	2183,
	2204,
	2181,
	432,
	2181,
	432,
	2206,
	2315,
	2208,
	2173,
	2189,
	2317,
	89,
	433,
	785,
	2181,
	26,
	10,
	2318,
	2319,
	503,
	23,
	831,
	2217,
	2320,
	23,
	7,
	2221,
	1679,
	2223,
	433,
	7,
	129,
	570,
	32,
	10,
	31,
	89,
	726,
	1368,
	570,
	7,
	414,
	7,
	2104,
	7,
	2160,
	2130,
	7,
	2125,
	10,
	112,
	2149,
	2321,
	2322,
	2323,
	2324,
	90,
	2325,
	2325,
	34,
	7,
	2326,
	37,
	7,
	34,
	852,
	1053,
	2327,
	2328,
	2329,
	2314,
	2330,
	2331,
	632,
	617,
	7,
	2332,
	112,
	2104,
	2089,
	2252,
	2333,
	2334,
	7,
	775,
	2322,
	7,
	10,
	2125,
	226,
	30,
	7,
	112,
	414,
	414,
	414,
	503,
	2259,
	2259,
	2261,
	2263,
	2265,
	1679,
	37,
	2181,
	2315,
	2268,
	2335,
	2181,
	2335,
	2179,
	2272,
	2336,
	2276,
	2337,
	2280,
	2265,
	2282,
	2204,
	2338,
	2339,
	89,
	2340,
	2266,
	7,
	1298,
	432,
	2292,
	2294,
	971,
	433,
	7,
	414,
	2296,
	2081,
	2298,
	7,
	112,
	1679,
	2315,
	2341,
	7,
	2265,
	2265,
	34,
	182,
	7,
	2265,
	2265,
	2082,
	2171,
	7,
	2342,
	2082,
	432,
	2189,
	2204,
	2306,
	2221,
	2204,
	2181,
	50,
	680,
	3,
	49,
	49,
	4,
	420,
	598,
	2343,
	114,
	106,
	23,
	1394,
	89,
	1522,
	1419,
	14,
	2344,
	6,
	2345,
	6,
	2346,
	6,
	2347,
	6,
	14,
	14,
	14,
	14,
	14,
	14,
	50,
	680,
	3,
	49,
	49,
	4,
	43,
	2343,
	114,
	106,
	106,
	173,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	491,
	3,
	23,
	3,
	23,
	856,
	89,
	31,
	23,
	2348,
	2349,
	577,
	62,
	3,
	23,
	2344,
	3,
	49,
	620,
	162,
	4,
	4,
	4,
	23,
	14,
	14,
	89,
	14,
	23,
	23,
	89,
	23,
	23,
	23,
	23,
	27,
	23,
	89,
	89,
	3,
	2350,
	106,
	163,
	173,
	23,
	3,
	821,
	163,
	246,
	246,
	10,
	32,
	14,
	4,
	821,
	2351,
	89,
	23,
	23,
	124,
	570,
	1121,
	411,
	124,
	2057,
	2058,
	2059,
	124,
	2060,
	2061,
	2062,
	124,
	2063,
	2064,
	2065,
	124,
	2066,
	591,
	2067,
	124,
	798,
	1121,
	410,
	124,
	10,
	105,
	112,
	124,
	6,
	1126,
	151,
	124,
	2068,
	2069,
	151,
	124,
	89,
	105,
	9,
	124,
	222,
	2070,
	9,
	124,
	2071,
	2072,
	26,
	124,
	2073,
	105,
	2067,
	124,
	2073,
	105,
	2067,
	124,
	2074,
	2075,
	112,
	124,
	37,
	591,
	112,
	124,
	721,
	2076,
	2077,
	124,
	37,
	591,
	112,
	124,
	37,
	591,
	112,
	124,
	37,
	591,
	112,
	124,
	30,
	591,
	9,
	124,
	888,
	2078,
	2065,
	124,
	2079,
	2078,
	2080,
	124,
	2081,
	2078,
	2082,
	124,
	2083,
	2078,
	2084,
	124,
	2085,
	2078,
	2086,
	124,
	2087,
	2088,
	2082,
	124,
	2089,
	2090,
	2082,
	124,
	16,
	591,
	154,
	124,
	2091,
	1119,
	2065,
	124,
	2092,
	2093,
	410,
	124,
	16,
	591,
	154,
	124,
	2094,
	2095,
	2096,
	124,
	2097,
	2098,
	2065,
	124,
	2099,
	2100,
	410,
	124,
	1265,
	2101,
	26,
	124,
	16,
	591,
	154,
	124,
	16,
	591,
	154,
	124,
	89,
	105,
	9,
	124,
	89,
	105,
	9,
	124,
	89,
	105,
	9,
	124,
	89,
	105,
	9,
	124,
	37,
	591,
	112,
	124,
	23,
	105,
	26,
	124,
	503,
	142,
	112,
	124,
	15,
	105,
	154,
	124,
	2102,
	2103,
	2062,
	124,
	2060,
	2061,
	2062,
	124,
	570,
	1121,
	411,
	124,
	16,
	591,
	154,
	124,
	2104,
	2105,
	2082,
	124,
	2106,
	2107,
	2108,
	124,
	2109,
	2110,
	2111,
	124,
	2112,
	2113,
	2082,
	124,
	2104,
	2105,
	2082,
	124,
	432,
	2114,
	112,
	124,
	2115,
	2116,
	2082,
	124,
	2106,
	2107,
	2108,
	124,
	2117,
	2118,
	2111,
	124,
	2119,
	2120,
	2111,
	124,
	785,
	2121,
	112,
	124,
	32,
	591,
	26,
	124,
	10,
	105,
	112,
	124,
	2122,
	2123,
	112,
	124,
	2124,
	844,
	112,
	124,
	1370,
	844,
	9,
	124,
	10,
	105,
	112,
	124,
	2125,
	471,
	112,
	124,
	2125,
	471,
	112,
	124,
	2124,
	844,
	112,
	124,
	2126,
	2127,
	112,
	124,
	2128,
	2129,
	112,
	124,
	2124,
	844,
	112,
	124,
	1370,
	844,
	9,
	124,
	2130,
	2131,
	112,
	124,
	2124,
	844,
	112,
	124,
	16,
	591,
	154,
	124,
	2132,
	2133,
	2082,
	124,
	2134,
	2135,
	2065,
	124,
	2136,
	2135,
	2084,
	124,
	2122,
	2123,
	112,
	124,
	1370,
	844,
	9,
	124,
	2128,
	2129,
	112,
	124,
	2137,
	2138,
	9,
	124,
	2137,
	2138,
	9,
	124,
	2139,
	2138,
	112,
	124,
	2125,
	471,
	112,
	124,
	503,
	142,
	112,
	124,
	10,
	105,
	112,
	124,
	2124,
	844,
	112,
	124,
	16,
	591,
	154,
	124,
	2140,
	1175,
	112,
	124,
	10,
	105,
	112,
	124,
	10,
	105,
	112,
	124,
	798,
	1121,
	410,
	124,
	849,
	1126,
	2065,
	124,
	23,
	105,
	26,
	124,
	2141,
	2142,
	26,
	124,
	2143,
	2144,
	411,
	124,
	89,
	105,
	9,
	124,
	31,
	2070,
	26,
	124,
	32,
	591,
	26,
	124,
	30,
	591,
	9,
	124,
	23,
	105,
	26,
	124,
	798,
	1121,
	410,
	124,
	849,
	1126,
	2065,
	124,
	799,
	2145,
	2065,
	124,
	799,
	2145,
	2065,
	124,
	849,
	1126,
	2065,
	124,
	849,
	1126,
	2065,
	124,
	1368,
	2146,
	26,
	124,
	130,
	142,
	26,
	124,
	130,
	142,
	26,
	124,
	6,
	1126,
	151,
	124,
	6,
	1126,
	151,
	124,
	32,
	591,
	26,
	124,
	849,
	1126,
	2065,
	124,
	799,
	2145,
	2065,
	124,
	2147,
	2148,
	9,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	32,
	591,
	26,
	124,
	10,
	105,
	112,
	124,
	2149,
	470,
	112,
	124,
	2149,
	470,
	112,
	124,
	2150,
	2151,
	2111,
	124,
	2152,
	2153,
	2111,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	2091,
	1119,
	2065,
	124,
	503,
	142,
	112,
	124,
	726,
	105,
	227,
	124,
	64,
	1119,
	151,
	124,
	2154,
	2155,
	26,
	124,
	2156,
	2070,
	2157,
	124,
	2158,
	2159,
	26,
	124,
	726,
	105,
	227,
	124,
	503,
	142,
	112,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	89,
	105,
	9,
	124,
	10,
	105,
	112,
	124,
	10,
	105,
	112,
	124,
	89,
	105,
	9,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	89,
	105,
	9,
	124,
	23,
	105,
	26,
	124,
	89,
	105,
	9,
	124,
	31,
	2070,
	26,
	124,
	23,
	105,
	26,
	124,
	31,
	2070,
	26,
	124,
	2160,
	2161,
	2082,
	124,
	7,
	844,
	26,
	124,
	2162,
	2163,
	2082,
	124,
	2164,
	2131,
	9,
	124,
	7,
	844,
	26,
	124,
	7,
	844,
	26,
	124,
	503,
	142,
	112,
	124,
	2139,
	2138,
	112,
	124,
	32,
	591,
	26,
	124,
	10,
	105,
	112,
	124,
	89,
	105,
	9,
	124,
	89,
	105,
	9,
	124,
	89,
	105,
	9,
	124,
	2165,
	2166,
	2111,
	124,
	23,
	105,
	26,
	124,
	2091,
	1119,
	2065,
	124,
	1149,
	1121,
	2111,
	124,
	2125,
	471,
	112,
	124,
	2167,
	2168,
	2082,
	124,
	2169,
	2170,
	2082,
	124,
	432,
	2114,
	112,
	124,
	2171,
	2172,
	2082,
	124,
	2171,
	2172,
	2082,
	124,
	2173,
	2174,
	112,
	124,
	2175,
	2176,
	2111,
	124,
	16,
	591,
	154,
	124,
	785,
	2121,
	112,
	124,
	432,
	2114,
	112,
	124,
	2177,
	2178,
	112,
	124,
	2179,
	2180,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	2183,
	2184,
	112,
	124,
	2185,
	2186,
	2108,
	124,
	2187,
	2188,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2187,
	2188,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	785,
	2121,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2187,
	2188,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2187,
	2188,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	785,
	2121,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	2179,
	2180,
	2082,
	124,
	2189,
	2190,
	2111,
	124,
	2179,
	2180,
	2082,
	124,
	2189,
	2190,
	2111,
	124,
	2191,
	2192,
	112,
	124,
	2193,
	2194,
	2082,
	124,
	2189,
	2190,
	2111,
	124,
	2195,
	2196,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	432,
	2114,
	112,
	124,
	432,
	2114,
	112,
	124,
	433,
	2114,
	9,
	124,
	2197,
	2198,
	2082,
	124,
	2199,
	2200,
	2065,
	124,
	2181,
	2182,
	2082,
	124,
	785,
	2121,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2181,
	2182,
	2082,
	124,
	2201,
	2190,
	410,
	124,
	433,
	2114,
	9,
	124,
	2202,
	2203,
	2082,
	124,
	2183,
	2184,
	112,
	124,
	2204,
	2205,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	432,
	2114,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	432,
	2114,
	112,
	124,
	2206,
	2207,
	112,
	124,
	2173,
	2174,
	112,
	124,
	2208,
	2209,
	2210,
	124,
	2173,
	2174,
	112,
	124,
	2189,
	2190,
	2111,
	124,
	2211,
	2212,
	2111,
	124,
	89,
	105,
	9,
	124,
	433,
	2114,
	9,
	124,
	785,
	2121,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	7,
	844,
	26,
	124,
	10,
	105,
	112,
	124,
	2213,
	2214,
	112,
	124,
	2215,
	2216,
	112,
	124,
	503,
	142,
	112,
	124,
	23,
	105,
	26,
	124,
	831,
	2105,
	151,
	124,
	2217,
	2218,
	26,
	124,
	2219,
	2220,
	112,
	124,
	23,
	105,
	26,
	124,
	2221,
	2222,
	2111,
	124,
	1679,
	1126,
	2082,
	124,
	2223,
	2182,
	151,
	124,
	433,
	2114,
	9,
	124,
	129,
	2095,
	26,
	124,
	570,
	1121,
	411,
	124,
	32,
	591,
	26,
	124,
	10,
	105,
	112,
	124,
	31,
	2070,
	26,
	124,
	89,
	105,
	9,
	124,
	726,
	105,
	227,
	124,
	1368,
	2146,
	26,
	124,
	570,
	1121,
	411,
	124,
	2167,
	2168,
	2082,
	124,
	7,
	844,
	26,
	124,
	2104,
	2105,
	2082,
	124,
	7,
	844,
	26,
	124,
	2160,
	2161,
	2082,
	124,
	2130,
	2131,
	112,
	124,
	7,
	844,
	26,
	124,
	2125,
	471,
	112,
	124,
	10,
	105,
	112,
	124,
	2124,
	844,
	112,
	124,
	2224,
	2225,
	112,
	124,
	2226,
	2129,
	226,
	124,
	2126,
	2127,
	112,
	124,
	2227,
	2228,
	410,
	124,
	2229,
	2230,
	1067,
	124,
	2231,
	2129,
	9,
	124,
	2232,
	2233,
	2082,
	124,
	2232,
	2233,
	2082,
	124,
	16,
	591,
	154,
	124,
	2234,
	2235,
	2111,
	124,
	37,
	591,
	112,
	124,
	16,
	591,
	154,
	124,
	2236,
	2237,
	151,
	124,
	2238,
	2239,
	151,
	124,
	2240,
	2241,
	151,
	124,
	2242,
	2243,
	151,
	124,
	2244,
	2170,
	2065,
	124,
	2169,
	2170,
	2082,
	124,
	2245,
	2170,
	2080,
	124,
	2246,
	2247,
	151,
	124,
	2248,
	2168,
	151,
	124,
	2249,
	2170,
	151,
	124,
	2250,
	2251,
	2082,
	124,
	503,
	142,
	112,
	124,
	2104,
	2105,
	2082,
	124,
	2089,
	2090,
	2082,
	124,
	2252,
	2253,
	112,
	124,
	2254,
	2255,
	2082,
	124,
	2256,
	2257,
	112,
	124,
	2139,
	2138,
	112,
	124,
	2126,
	2127,
	112,
	124,
	10,
	105,
	112,
	124,
	2125,
	471,
	112,
	124,
	2258,
	844,
	226,
	124,
	30,
	591,
	9,
	124,
	2124,
	844,
	112,
	124,
	2167,
	2168,
	2082,
	124,
	2167,
	2168,
	2082,
	124,
	2167,
	2168,
	2082,
	124,
	504,
	732,
	112,
	124,
	2259,
	2260,
	2082,
	124,
	2259,
	2260,
	2082,
	124,
	2261,
	2262,
	2082,
	124,
	2263,
	2264,
	2082,
	124,
	2265,
	2200,
	2082,
	124,
	1679,
	1126,
	2082,
	124,
	37,
	591,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2266,
	2267,
	112,
	124,
	2268,
	2269,
	112,
	124,
	2270,
	2271,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2270,
	2271,
	112,
	124,
	2179,
	2180,
	2082,
	124,
	2272,
	2273,
	2082,
	124,
	2274,
	2275,
	112,
	124,
	2276,
	2277,
	112,
	124,
	2278,
	2279,
	112,
	124,
	2280,
	2281,
	112,
	124,
	2265,
	2200,
	2082,
	124,
	2282,
	2283,
	2111,
	124,
	2204,
	2205,
	112,
	124,
	2284,
	2285,
	112,
	124,
	2286,
	2287,
	2111,
	124,
	89,
	105,
	9,
	124,
	2288,
	2289,
	112,
	124,
	2266,
	2267,
	112,
	124,
	2290,
	2291,
	2082,
	124,
	432,
	2114,
	112,
	124,
	2292,
	2293,
	2082,
	124,
	2294,
	2295,
	112,
	124,
	971,
	2114,
	226,
	124,
	433,
	2114,
	9,
	124,
	2167,
	2168,
	2082,
	124,
	2296,
	2297,
	2111,
	124,
	2081,
	2078,
	2082,
	124,
	2298,
	2299,
	2082,
	124,
	2124,
	844,
	112,
	124,
	1679,
	1126,
	2082,
	124,
	2173,
	2174,
	112,
	124,
	2300,
	2301,
	112,
	124,
	2265,
	2200,
	2082,
	124,
	2265,
	2200,
	2082,
	124,
	16,
	591,
	154,
	124,
	182,
	591,
	226,
	124,
	2265,
	2200,
	2082,
	124,
	2265,
	2200,
	2082,
	124,
	2302,
	2303,
	2082,
	124,
	2171,
	2172,
	2082,
	124,
	2304,
	2305,
	2082,
	124,
	2302,
	2303,
	2082,
	124,
	432,
	2114,
	112,
	124,
	2189,
	2190,
	2111,
	124,
	2204,
	2205,
	112,
	124,
	2306,
	2307,
	2111,
	124,
	2221,
	2222,
	2111,
	124,
	2204,
	2205,
	112,
	124,
	2181,
	2182,
	2082,
	124,
	2091,
	1119,
	2065,
	124,
	2097,
	2098,
	2065,
	124,
	2099,
	2100,
	410,
	124,
	2199,
	2200,
	2065,
	124,
	2229,
	2230,
	1067,
	23,
	23,
	23,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	23,
	9,
	9,
	3,
	23,
	28,
	105,
	28,
	28,
	105,
	28,
	124,
	32,
	591,
	26,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[1] = 
{
	{ 0x060001FE, 6,  (void**)&OpenVRLoader_TickCallback_m2144F6BB6856DAD0BCAD5460F97F578F24A3B3C2_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000002, { 0, 11 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[11] = 
{
	{ (Il2CppRGCTXDataType)2, 34668 },
	{ (Il2CppRGCTXDataType)3, 27511 },
	{ (Il2CppRGCTXDataType)2, 34669 },
	{ (Il2CppRGCTXDataType)3, 27512 },
	{ (Il2CppRGCTXDataType)3, 27513 },
	{ (Il2CppRGCTXDataType)2, 34670 },
	{ (Il2CppRGCTXDataType)3, 27514 },
	{ (Il2CppRGCTXDataType)3, 27515 },
	{ (Il2CppRGCTXDataType)3, 27516 },
	{ (Il2CppRGCTXDataType)2, 28477 },
	{ (Il2CppRGCTXDataType)2, 28478 },
};
extern const Il2CppCodeGenModule g_Unity_XR_OpenVRCodeGenModule;
const Il2CppCodeGenModule g_Unity_XR_OpenVRCodeGenModule = 
{
	"Unity.XR.OpenVR.dll",
	2069,
	s_methodPointers,
	18,
	s_adjustorThunks,
	s_InvokerIndices,
	1,
	s_reversePInvokeIndices,
	1,
	s_rgctxIndices,
	11,
	s_rgctxValues,
	NULL,
};
