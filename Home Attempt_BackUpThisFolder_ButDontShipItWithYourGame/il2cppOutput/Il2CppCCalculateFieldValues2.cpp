﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F;
// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate
struct ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F  : public RuntimeObject
{
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___elist_2;
};

// UnityEngine.Analytics.AnalyticsSessionInfo
struct AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76  : public RuntimeObject
{
};

struct AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields
{
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* ___sessionStateChanged_0;
	// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged UnityEngine.Analytics.AnalyticsSessionInfo::identityTokenChanged
	IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* ___identityTokenChanged_1;
};

// UnityEngineInternal.Input.NativeInputSystem
struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE  : public RuntimeObject
{
};

struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields
{
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* ___onBeforeUpdate_1;
	// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> UnityEngineInternal.Input.NativeInputSystem::onShouldRunUpdate
	Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* ___onShouldRunUpdate_2;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___s_OnDeviceDiscoveredCallback_3;
};

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46  : public RuntimeObject
{
};

struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields
{
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* ___onPreUpdate_0;
};

// UnityEngine.SpatialTracking.PoseDataSource
struct PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858  : public RuntimeObject
{
};

struct PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates_0;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF  : public RuntimeObject
{
};

struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* ___DeviceData_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngineInternal.WebRequestUtils
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443  : public RuntimeObject
{
};

struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___domainRegex_0;
};

// UnityEngine.XR.XRDevice
struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194  : public RuntimeObject
{
};

struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields
{
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deviceLoaded_0;
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngineInternal.Input.NativeInputEvent
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};

// UnityEngineInternal.Input.NativeInputEventBuffer
struct NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* UnityEngineInternal.Input.NativeInputEventBuffer::eventBuffer
					void* ___eventBuffer_0;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___eventBuffer_0_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding[8];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::eventCount
					int32_t ___eventCount_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___eventCount_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[12];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::sizeInBytes
					int32_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::capacityInBytes
					int32_t ___capacityInBytes_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding_forAlignmentOnly[16];
					int32_t ___capacityInBytes_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD__padding[20];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A 
{
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.WheelHit
struct WheelHit_t15D44A463BF2792AD26161787B98CB5698519455 
{
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_ForwardDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ForwardDir_2;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_SidewaysDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SidewaysDir_3;
	// System.Single UnityEngine.WheelHit::m_Force
	float ___m_Force_4;
	// System.Single UnityEngine.WheelHit::m_ForwardSlip
	float ___m_ForwardSlip_5;
	// System.Single UnityEngine.WheelHit::m_SidewaysSlip
	float ___m_SidewaysSlip_6;
	// UnityEngine.Collider UnityEngine.WheelHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.WheelHit
struct WheelHit_t15D44A463BF2792AD26161787B98CB5698519455_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ForwardDir_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_7;
};
// Native definition for COM marshalling of UnityEngine.WheelHit
struct WheelHit_t15D44A463BF2792AD26161787B98CB5698519455_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ForwardDir_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_7;
};

// UnityEngine.Rendering.Universal.ShaderInput/LightData
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::position
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::color
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color_1;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::attenuation
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation_2;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::spotDirection
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::occlusionProbeChannels
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels_4;
	// System.UInt32 UnityEngine.Rendering.Universal.ShaderInput/LightData::layerMask
	uint32_t ___layerMask_5;
};

// UnityEngine.Rendering.Universal.ShaderInput/ShadowData
struct ShadowData_t25107BFCD514C4CD90FAC8F07B5DFA940E2E5B67 
{
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::worldToShadowMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToShadowMatrix_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::shadowParams
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowParams_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.Features.ConformanceAutomation.ConformanceAutomationFeature
struct ConformanceAutomationFeature_t0C2E5D391DBCC81F1B86F2D7E34719B7D292BFF7  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

struct ConformanceAutomationFeature_t0C2E5D391DBCC81F1B86F2D7E34719B7D292BFF7_StaticFields
{
	// System.UInt64 UnityEngine.XR.OpenXR.Features.ConformanceAutomation.ConformanceAutomationFeature::xrInstance
	uint64_t ___xrInstance_17;
	// System.UInt64 UnityEngine.XR.OpenXR.Features.ConformanceAutomation.ConformanceAutomationFeature::xrSession
	uint64_t ___xrSession_18;
};

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
struct MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ignoreValidationErrors
	bool ___ignoreValidationErrors_20;
};

struct MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate> UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::s_AfterFunctionCallbacks
	Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* ___s_AfterFunctionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate> UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::s_BeforeFunctionCallbacks
	Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* ___s_BeforeFunctionCallbacks_17;
	// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::onScriptEvent
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* ___onScriptEvent_18;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature
struct OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature::targetQuest
	bool ___targetQuest_17;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature::targetQuest2
	bool ___targetQuest2_18;
};

// UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature
struct RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.UInt32 UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::cacheSize
	uint32_t ___cacheSize_18;
	// System.UInt32 UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::perThreadCacheSize
	uint32_t ___perThreadCacheSize_19;
	// System.UInt32 UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::lutOffset
	uint32_t ___lutOffset_20;
};

struct RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA_StaticFields
{
	// System.Guid UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::kEditorToPlayerRequestDebuggerOutput
	Guid_t ___kEditorToPlayerRequestDebuggerOutput_16;
	// System.Guid UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::kPlayerToEditorSendDebuggerOutput
	Guid_t ___kPlayerToEditorSendDebuggerOutput_17;
};

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_OriginPose_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6001[2] = 
{
	static_cast<int32_t>(offsetof(AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields, ___sessionStateChanged_0)),static_cast<int32_t>(offsetof(AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields, ___identityTokenChanged_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6003[9] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6006[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6007[4] = 
{
	static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___eventBuffer_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___eventCount_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___sizeInBytes_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___capacityInBytes_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6008[6] = 
{
	0,static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___type_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___sizeInBytes_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___deviceId_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___time_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___eventId_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6009[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6010[4] = 
{
	static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onUpdate_0)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onBeforeUpdate_1)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onShouldRunUpdate_2)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___s_OnDeviceDiscoveredCallback_3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6012[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6014[1] = 
{
	static_cast<int32_t>(offsetof(XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields, ___deviceLoaded_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6018[1] = 
{
	static_cast<int32_t>(offsetof(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields, ___domainRegex_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6019[1] = 
{
	static_cast<int32_t>(offsetof(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804, ___m_Ptr_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6020[1] = 
{
	static_cast<int32_t>(offsetof(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB, ___m_Ptr_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6024[1] = 
{
	static_cast<int32_t>(offsetof(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields, ___onPreUpdate_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6029[8] = 
{
	static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_Point_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_Normal_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_ForwardDir_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_SidewaysDir_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_Force_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_ForwardSlip_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_SidewaysSlip_6)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(WheelHit_t15D44A463BF2792AD26161787B98CB5698519455, ___m_Collider_7)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6034[2] = 
{
	static_cast<int32_t>(offsetof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, ___PoseNames_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, ___Poses_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6035[1] = 
{
	static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields, ___DeviceData_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6036[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6037[1] = 
{
	static_cast<int32_t>(offsetof(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields, ___nodeStates_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6038[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6039[12] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6040[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6041[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6042[7] = 
{
	static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_Device_4)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_PoseSource_5)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_PoseProviderComponent_6)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_TrackingType_7)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_UpdateType_8)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_UseRelativeTransform_9)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_OriginPose_10)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6047[3] = 
{
	static_cast<int32_t>(offsetof(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F, ___m_nTag_0)),static_cast<int32_t>(offsetof(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F, ___m_aValue_1)),static_cast<int32_t>(offsetof(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F, ___elist_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6052[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6056[6] = 
{
	static_cast<int32_t>(offsetof(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields, ___s_AfterFunctionCallbacks_16)),static_cast<int32_t>(offsetof(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields, ___s_BeforeFunctionCallbacks_17)),static_cast<int32_t>(offsetof(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields, ___onScriptEvent_18)),0,static_cast<int32_t>(offsetof(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF, ___ignoreValidationErrors_20)),0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6058[3] = 
{
	static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___IsTextualNodeBitmap_0)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___CanReadContentAsBitmap_1)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___HasValueBitmap_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6061[13] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6062[9] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6063[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6064[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6065[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6066[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6067[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6068[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6069[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6070[7] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6071[8] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6072[2] = 
{
	static_cast<int32_t>(offsetof(ShadowData_t25107BFCD514C4CD90FAC8F07B5DFA940E2E5B67, ___worldToShadowMatrix_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(ShadowData_t25107BFCD514C4CD90FAC8F07B5DFA940E2E5B67, ___shadowParams_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6073[6] = 
{
	static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___position_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___color_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___attenuation_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___spotDirection_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___occlusionProbeChannels_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___layerMask_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6076[4] = 
{
	0,static_cast<int32_t>(offsetof(ConformanceAutomationFeature_t0C2E5D391DBCC81F1B86F2D7E34719B7D292BFF7_StaticFields, ___xrInstance_17)),static_cast<int32_t>(offsetof(ConformanceAutomationFeature_t0C2E5D391DBCC81F1B86F2D7E34719B7D292BFF7_StaticFields, ___xrSession_18)),0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6082[6] = 
{
	static_cast<int32_t>(offsetof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA_StaticFields, ___kEditorToPlayerRequestDebuggerOutput_16)),static_cast<int32_t>(offsetof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA_StaticFields, ___kPlayerToEditorSendDebuggerOutput_17)),static_cast<int32_t>(offsetof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA, ___cacheSize_18)),static_cast<int32_t>(offsetof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA, ___perThreadCacheSize_19)),static_cast<int32_t>(offsetof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA, ___lutOffset_20)),0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6086[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6094[3] = 
{
	0,static_cast<int32_t>(offsetof(OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810, ___targetQuest_17)),static_cast<int32_t>(offsetof(OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810, ___targetQuest2_18)),};
