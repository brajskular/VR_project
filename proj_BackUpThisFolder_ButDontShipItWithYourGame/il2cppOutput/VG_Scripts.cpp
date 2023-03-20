#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>
struct Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>
struct Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4>
struct Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform>
struct Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>
struct Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1;
// System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>
struct Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D;
// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_InteractionMode>
struct HashSet_1_t08778549F33904D1CA15E5F86A289ECA158D7DF4;
// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>
struct HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>>
struct IEnumerable_1_tB781B4B22FE93681CD6E5DD8AD037830F8DD1D8B;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerable_1_tF961F3E00EE8CF8A2420A47E491F0DC255B7F073;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tB8C86BD783ADA156CF66B9AF8F1FB3B64D57CE5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEnumerable`1<VirtualGrasp.VG_HandStatus>
struct IEnumerable_1_t919934B0AC2AC06B36C64197702A2B520F610592;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_t4537FF5E9634FC142F7BF26B48CA727CCA436047;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Transform>
struct IEqualityComparer_1_tD4E2164C5E70B4D606744749A66FC3CBE9EB8180;
// System.Collections.Generic.IEqualityComparer`1<VirtualGrasp.VG_HandSide>
struct IEqualityComparer_1_t8B464618F39C0B8F9E3B0653A15027429917D57F;
// System.Collections.Generic.IEqualityComparer`1<VirtualGrasp.VG_ReturnCode>
struct IEqualityComparer_1_tF11BB80932C6C6A47FE9CB6A536AD04C5A3CE781;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>
struct KeyCollection_t820FB941A1BF4441A68A250F159FFF391CA3A8DD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject>
struct KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.LineRenderer>
struct KeyCollection_t50B98BBF07BA08FF0BB4CF3C17976BB101F70827;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Transform>
struct KeyCollection_tB00A703A64168392B07F9E0FD82D012E527DE104;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Transform,System.Boolean>
struct KeyCollection_t9484348C6D033DD40473503593F2EAF17DFBCFA3;
// System.Collections.Generic.Dictionary`2/KeyCollection<VirtualGrasp.VG_HandSide,UnityEngine.Transform>
struct KeyCollection_t4321C9F510D2DC7C23E40EEF739D583CF9FD6437;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<VirtualGrasp.VG_Avatar>
struct List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67;
// System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>
struct List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062;
// System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>
struct List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F;
// System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus>
struct List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>
struct List_1_t4FBCC76CC22915805926E462147115F83F925737;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<VirtualGrasp.VG_HandStatus>
struct UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9;
// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_Articulation>
struct UnityEvent_1_t94A87095484F780A724170DB64693212236776E3;
// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus>
struct UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Transform,System.Single>
struct UnityEvent_2_t8D1B223041AE70C95A4E384FC0B21DE9B2DA0EE4;
// UnityEngine.Events.UnityEvent`3<UnityEngine.Transform,System.Int32,System.Single>
struct UnityEvent_3_t0A97A4F79EE9B8C30671AD7824C0EAEF3F0F70B7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>
struct ValueCollection_t44496935C04628E9F63B6419DD3A34121CF63BD6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.LineRenderer>
struct ValueCollection_t85398F7E1EE36C0F035D85C19D03684E9A72481E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Transform>
struct ValueCollection_t7F23035C8EB8CB25211B7DAF72F1FB467177FF01;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Transform,System.Boolean>
struct ValueCollection_tE8542A4A8294534513498A5A514715D46F3C4BE3;
// System.Collections.Generic.Dictionary`2/ValueCollection<VirtualGrasp.VG_HandSide,UnityEngine.Transform>
struct ValueCollection_tCF46EA0C134917353C09F5368B372492DDC9B053;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>[]
struct EntryU5BU5D_t2CD17549A497508587454E6795FDB894FF37BC25;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject>[]
struct EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.LineRenderer>[]
struct EntryU5BU5D_t41E02FD8F8DF3E525E5366501FC1DCE9D0F707A4;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Transform>[]
struct EntryU5BU5D_tB70F5E6BF8E6CEDBA0E9365D731905A21B0A4451;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Transform,System.Boolean>[]
struct EntryU5BU5D_t010D2A730F42EFC988AD11BB794954D070BF9E9F;
// System.Collections.Generic.Dictionary`2/Entry<VirtualGrasp.VG_HandSide,UnityEngine.Transform>[]
struct EntryU5BU5D_t81834F5E5433076365A7EC5CD1CB87297E23F896;
// System.Collections.Generic.List`1<UnityEngine.Material>[]
struct List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA;
// System.Collections.Generic.HashSet`1/Slot<System.Int32Enum>[]
struct SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Transform>[]
struct SlotU5BU5D_tFEF55D1F1BCB4F97FD11EAA15EB9CCC3E470213D;
// System.Collections.Generic.HashSet`1/Slot<VirtualGrasp.VG_ReturnCode>[]
struct SlotU5BU5D_t3AC73E963C04E6423B1D06DFAAD8A3399E3351F9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// VirtualGrasp.VG_Avatar[]
struct VG_AvatarU5BU5D_t0CDE3A5C07E09D77DE68F6ADA8B4B4252B2A8944;
// VirtualGrasp.VG_ExternalController[]
struct VG_ExternalControllerU5BU5D_t9176F43CB191232B3390FF608C52C76F083F682E;
// VirtualGrasp.VG_HandSide[]
struct VG_HandSideU5BU5D_t088A68A2432A2CB1FD6A36CEFD84FD510D5B4ACB;
// VirtualGrasp.VG_HandStatus[]
struct VG_HandStatusU5BU5D_tB8E04855A4E89B1616CD6C2008DFCA4A60772CA3;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// VG_GraspEditor/ButtonContainer[]
struct ButtonContainerU5BU5D_tF261E2A49342CF70D0FE06290715AB7F2BA9F954;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MyVirtualGrasp
struct MyVirtualGrasp_t790CE7F053EB5C58EAA2062B64E6337C07715F2F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// VirtualGrasp.SelectionInterface
struct SelectionInterface_tD9D4EFDF8CDD0E3733F0BBF3344297FEA20DDA8A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// VirtualGrasp.VG_Affordances
struct VG_Affordances_t81ACA2F28849AAEDA6C91B88C79B78D41686547B;
// VirtualGrasp.VG_Articulation
struct VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7;
// VirtualGrasp.VG_Avatar
struct VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C;
// VirtualGrasp.VG_ControllerProfile
struct VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C;
// VirtualGrasp.VG_DebugSettings
struct VG_DebugSettings_t85154395FD69F1931C85D6A941F85D741382645E;
// VG_EC_GenericHand
struct VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3;
// VG_EC_LeapHand
struct VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901;
// VG_EC_MouseHand
struct VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607;
// VG_EC_OculusHand
struct VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E;
// VG_EC_SteamHand
struct VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB;
// VG_EC_UnityInteractionHand
struct VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678;
// VG_EC_UnityXRHand
struct VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93;
// VirtualGrasp.VG_ExternalController
struct VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E;
// VG_ExternalControllerManager
struct VG_ExternalControllerManager_tBEDC98D5ADD3DDF8BF490AE1E23A55ED6CFB8F5A;
// VirtualGrasp.VG_ExternalControllerMapping
struct VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE;
// VG_GraspEditor
struct VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92;
// VirtualGrasp.VG_GraspInteractionSettings
struct VG_GraspInteractionSettings_t1FAB8D03DC03F4D5DED9E391C622E4ED91C62CF2;
// VirtualGrasp.VG_HandMapping
struct VG_HandMapping_tF3CF0483E2A0EE3D8B3A740DCAE6CFBF81FBD40E;
// VirtualGrasp.VG_HandProfile
struct VG_HandProfile_tE521CDFAE840D4784F1BF42E3BBA5359F9A9DB59;
// VirtualGrasp.VG_HandStatus
struct VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC;
// VG_HandStatusDebugger
struct VG_HandStatusDebugger_tD2E195EE61A67681F629A2E5A0363DBFDF869F13;
// VG_HandVisualizer
struct VG_HandVisualizer_t6EA37D66919AFFC20A99CB7745D49565CDF8FA9F;
// VG_Highlighter
struct VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E;
// VG_HintVisualizer
struct VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338;
// VirtualGrasp.VG_MainScript
struct VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68;
// VG_PostAnimator
struct VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3;
// VirtualGrasp.VG_SelectionSettings
struct VG_SelectionSettings_t11A065D91EF738A26A1988DC58C2EDFE40F88AE7;
// VirtualGrasp.VG_SensorSetup
struct VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD;
// VirtualGrasp.VG_VelocityTracker
struct VG_VelocityTracker_t214AF19AC04B88745A01D70B6E92473679289FEF;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// VG_EC_GenericHand/HandMapping
struct HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F;
// VG_EC_LeapHand/HandMapping
struct HandMapping_t053E55C1D74E18854A654FC667FEAAA989E0F25A;
// VG_EC_MouseHand/HandMapping
struct HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D;
// VG_EC_OculusHand/HandMapping
struct HandMapping_t7B627F80242DFC278EB132FB47DCFD1D9097B89D;
// VG_EC_SteamHand/SteamHandMapping
struct SteamHandMapping_tE83D4F222743091CA7CD0E6CFD0A6CA20FBA7462;
// VG_EC_UnityInteractionHand/HandMapping
struct HandMapping_tAF09D3E7D0E0255309C1AA7AF67E9D0640EC141C;
// VG_EC_UnityXRHand/HandMapping
struct HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288;
// VG_GraspEditor/ButtonContainer
struct ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8;
// VG_GraspEditor/EditFunction
struct EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246;
// VG_GraspEditor/ValidateFunction
struct ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD;

IL2CPP_EXTERN_C RuntimeClass* ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4FBCC76CC22915805926E462147115F83F925737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_HandSide_t73D34B2903CAB292E5B5CEBAD84D2EB82C4BDDC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VG_InteractionType_t653B34937E3B4A3F23370F703F29D066C64EE313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0477CFC8A695E62016677D6F2EF673B52F1C6E77;
IL2CPP_EXTERN_C String_t* _stringLiteral0A8DF1463893606AE431FF6BE0CD79616786A2AA;
IL2CPP_EXTERN_C String_t* _stringLiteral0B920D9987F912C625E18D7A0307042D208FEF9B;
IL2CPP_EXTERN_C String_t* _stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral2458F5DDFA61F85714909BEEFAE1668203AFDD01;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABE9AB0889D1F6816BC77606C07344969D6E66A;
IL2CPP_EXTERN_C String_t* _stringLiteral3035AAAD53A5BE9ADCB94B3FF560A95EF9F640EF;
IL2CPP_EXTERN_C String_t* _stringLiteral33A709C9C7E5B64B93213F7C5E5575FAAD2BEF99;
IL2CPP_EXTERN_C String_t* _stringLiteral376E0EBF36DDF94B3FD31ADBE6EF926066EEC225;
IL2CPP_EXTERN_C String_t* _stringLiteral38C33024E9E5183096658F391603C166280C93B6;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3B2A528E4A566CE760F459447C1A91A90EA8E3;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD26CD0ED8710771C857952761F473C49943301;
IL2CPP_EXTERN_C String_t* _stringLiteral42ED1CD6B46C748E7E5910B073BA79C696CE2966;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral60C76420A90A194310B0CE3956E27E158DF02192;
IL2CPP_EXTERN_C String_t* _stringLiteral71A7D784ED284A4B9BF661BFBFA5875E2B8BE714;
IL2CPP_EXTERN_C String_t* _stringLiteral7653EE94C8A3C873375461ED3EBB9885BD34C836;
IL2CPP_EXTERN_C String_t* _stringLiteral77F25439EB7561DE03A4C7F81754F26538C66CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral894BE101421F49032449AE2A702274DEFA70ABA5;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9336EF6723618EEA2E70039660D64EFFC67C041D;
IL2CPP_EXTERN_C String_t* _stringLiteral9584B9E35B5CE1D7FA7CC93C1452AD02E81AC329;
IL2CPP_EXTERN_C String_t* _stringLiteral98074B600EF2DB4866E3DC10D34B6D9DCFFC3A30;
IL2CPP_EXTERN_C String_t* _stringLiteral9A827DEC37627E6CBD319DE747C853DF2B5E65EC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3059CB194AF9DF31AF1EA0B7F29CBD69B39ACA8;
IL2CPP_EXTERN_C String_t* _stringLiteralA70E12A0DDCE6CBD4FBCA27A3132F601F491A75E;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D9AEA970191D4695D5F0E436BA568017BFE02B;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2C899654C346ACAB5AFB650A210B956F04F7F6;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8B00B400253F0571F432D99183DF2B47EE9F1E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC4F75CC3F859FC460877E815F0AB4E93AE81CBF3;
IL2CPP_EXTERN_C String_t* _stringLiteralC5FAC20D057EDE841AA15487D6092C94F7EC3749;
IL2CPP_EXTERN_C String_t* _stringLiteralC6295ABB11C0E915A05803AAB72C1AC4070AD3FC;
IL2CPP_EXTERN_C String_t* _stringLiteralCCA53E06B4EE5B5453C32E3B1BDE59ADD7429D72;
IL2CPP_EXTERN_C String_t* _stringLiteralCD893C96F2CB7704D512D571CB7C6CD8A4D12FD5;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA095C08E7E65B29FD3A02D947B5CD8E1F57220;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E4359EE8A2D364DE9BA5CCA734DC6B1C86314C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE31074D99F0EB539B2E7B193990B9B285CE82CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF524F190B83E447F56A3D5CDB8604356D5951150;
IL2CPP_EXTERN_C String_t* _stringLiteralF90CB059498E5C227484445BC944C4A064B1306B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD844D35C50966C9097C04ABF8D1A5F68B423E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF2CB393BA38DE3A5F0A0CFD62BCD53FD9017FE4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisVG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7_m2B4E472E508442F5F108DC53A9A5D827572CBB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m369728D3BCAF415D2C570CF2A4FF5BD70CE8EF5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m84736574ADA1AD7AAD5AA3A543C1D35F4D729037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m507EBF566F856321FA1A1BF3D67EB33FA0EEA3EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m614A53A52F4460E65E001BCCEFBA7D1E45BA83F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFC34D1E5453454FE7184E96F034E8F248044897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m399003492E0507743AD9AE2441E83D56DA3C79E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m553532F60B944EAE98C76D77EE5E0DBD57333AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m655FEA14595F47252D8E3649F1E2263B772D570B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB4864443984B35924D747359D91F57B6D6E0F74F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEEF3BB69D68DDAC8FB3F2D275B1AEE4850978D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3F4ADDCEA3306310F7EA76AB2288C4EE71E19902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m858FF6D7435CA960F1A8A76B9168EEC37D2483C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m86AA41A2A3E92A9F4939540C3F99D6787C0CA891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_mBBB69E1AFA80D9D0B4992C6789FF69346CFE085E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD6581875D0125CBF7C1746ACE228C4C0AE2173DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE9F6B1C9206CD3A804B743F6ECAEFFCBA4C4DDF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFFD54A623C63FE538F152259CFD3A10560D391CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m243F3E59242A001B0BA100EA8F71E5202135B23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3ED5E61985BE010B6F6F29CE0BE8AD06F42D2BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF2634E207F82B067DD47A93C4089B72D33A2E49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7657AB5816C946998F88A892E30C0162FB0171FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m767FC5C60A762C56DFFB3260A4A6B8CA7DB4A594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m84B1BEA7FB0FE865E2D2DC6A509640B93E645FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mAAE227155CB9806B9E474AB0D66FC8D3816976DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m63FEEB1A7B78287DC3660AD615491AC2857FCAC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m00284570A347E7586168C31EDF0B6BD067BB3C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEAC3FC09EF477A95D89042AF4F1F772F1E87BD2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC63B202A0C7BA5CF051F5A50252F3D8631AB005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD5D0DDD4A2F5C127AC1F40C6AB4C495322C526C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE6AD85B1B839B7A36AC76E52A884895705D95638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE75015476C9B777A88E25E81E2807DFED9DCA487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEA66E84548FC446BC00E15555075B32BA121DCFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mC2AB2300D7D178165C7870101134EB567E648435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m378804064185FA25C41237187B3CCEA095C05946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_AddGrasp_mF248F81E59060B8DF6FA61FA2914C4C410E3D9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_DeleteAllGrasp_mCB969B247B90620EB1CAED309BC248A5F2899685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_DeleteGrasp_m1F72C6311DF798ACB5F62A23C5C33C2795AD5B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_StepGrasp_m9A50248E0F0267EBB39646DE16A84E459FDEF4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_ToggleInteraction_m6E7A3524B1AD6D2C8D45731A9B74E359C0D1C556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_ValidateAddGrasp_m86B5D590946998762C967041F7FD4643A0FCCDBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_ValidateDeleteAllGrasp_m8642377A3588579B729DB29CDB9011E607D32D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_ValidateDeleteGrasp_mB8AC02CE73CBD7D5ACD07100068FE9B78B6F51CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_ValidateStepGrasp_m7DD625C988120EFE3735F0A24A20970492D6F983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_GraspEditor_ValidateToggleInteraction_mB77F83FC9F8B666D37FD3DC35BF56FBC7A10F57D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_HandVisualizer_Visualize_mCFE431EC0056103EA46E86977E9C1497FF1A8DFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_Highlighter_Highlight_m3CA6D14EF1810090431417C9F58614CD0FB16E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_Highlighter_Unhighlight_m9E7BA9E224FDBAA1C5E800D80102B9EECB05B527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_HintVisualizer_HintUpdate_mAF06335F147FE5DBD587ED456BE48DAA16A854D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VG_PostAnimator_Animate_m46D1E3C666759442539A1A989E2618B5028C5A2C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1993B4F598B50151EFEE120D4E852F0E254C3142 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>
struct Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2CD17549A497508587454E6795FDB894FF37BC25* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t820FB941A1BF4441A68A250F159FFF391CA3A8DD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t44496935C04628E9F63B6419DD3A34121CF63BD6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>
struct Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t41E02FD8F8DF3E525E5366501FC1DCE9D0F707A4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t50B98BBF07BA08FF0BB4CF3C17976BB101F70827* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t85398F7E1EE36C0F035D85C19D03684E9A72481E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform>
struct Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB70F5E6BF8E6CEDBA0E9365D731905A21B0A4451* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB00A703A64168392B07F9E0FD82D012E527DE104* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7F23035C8EB8CB25211B7DAF72F1FB467177FF01* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>
struct Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t010D2A730F42EFC988AD11BB794954D070BF9E9F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9484348C6D033DD40473503593F2EAF17DFBCFA3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE8542A4A8294534513498A5A514715D46F3C4BE3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>
struct Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t81834F5E5433076365A7EC5CD1CB87297E23F896* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4321C9F510D2DC7C23E40EEF739D583CF9FD6437* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCF46EA0C134917353C09F5368B372492DDC9B053* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tFEF55D1F1BCB4F97FD11EAA15EB9CCC3E470213D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>
struct HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3AC73E963C04E6423B1D06DFAAD8A3399E3351F9* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_Avatar>
struct List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VG_AvatarU5BU5D_t0CDE3A5C07E09D77DE68F6ADA8B4B4252B2A8944* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>
struct List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VG_ExternalControllerU5BU5D_t9176F43CB191232B3390FF608C52C76F083F682E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>
struct List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VG_HandSideU5BU5D_t088A68A2432A2CB1FD6A36CEFD84FD510D5B4ACB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus>
struct List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VG_HandStatusU5BU5D_tB8E04855A4E89B1616CD6C2008DFCA4A60772CA3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>
struct List_1_t4FBCC76CC22915805926E462147115F83F925737  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonContainerU5BU5D_tF261E2A49342CF70D0FE06290715AB7F2BA9F954* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// VirtualGrasp.VG_Controller
struct VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF  : public RuntimeObject
{
};

// VirtualGrasp.VG_ExternalController
struct VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E  : public RuntimeObject
{
	// System.Int32 VirtualGrasp.VG_ExternalController::m_avatarID
	int32_t ___m_avatarID_0;
	// VirtualGrasp.VG_HandSide VirtualGrasp.VG_ExternalController::m_handType
	int32_t ___m_handType_1;
	// VirtualGrasp.VG_ExternalControllerMapping VirtualGrasp.VG_ExternalController::m_mapping
	VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* ___m_mapping_2;
	// System.Boolean VirtualGrasp.VG_ExternalController::m_enabled
	bool ___m_enabled_3;
	// System.Boolean VirtualGrasp.VG_ExternalController::m_initialized
	bool ___m_initialized_4;
	// System.Boolean VirtualGrasp.VG_ExternalController::m_isTracking
	bool ___m_isTracking_5;
	// System.Boolean VirtualGrasp.VG_ExternalController::m_zeroOffsets
	bool ___m_zeroOffsets_6;
	// VirtualGrasp.VG_ControllerProfile VirtualGrasp.VG_ExternalController::m_controllerProfile
	VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* ___m_controllerProfile_7;
	// System.Int32 VirtualGrasp.VG_ExternalController::m_numBones
	int32_t ___m_numBones_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4> VirtualGrasp.VG_ExternalController::m_poses
	Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* ___m_poses_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> VirtualGrasp.VG_ExternalController::m_limbs
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___m_limbs_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer> VirtualGrasp.VG_ExternalController::m_lines
	Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* ___m_lines_11;
};

// VG_ExternalControllerManager
struct VG_ExternalControllerManager_tBEDC98D5ADD3DDF8BF490AE1E23A55ED6CFB8F5A  : public RuntimeObject
{
};

// VirtualGrasp.VG_ExternalControllerMapping
struct VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE  : public RuntimeObject
{
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_WristRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_WristRoot_0;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Thumb1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Thumb1_1;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Thumb2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Thumb2_2;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Thumb3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Thumb3_3;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Index1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Index1_4;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Index2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Index2_5;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Index3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Index3_6;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Middle1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Middle1_7;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Middle2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Middle2_8;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Middle3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Middle3_9;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Ring1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Ring1_10;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Ring2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Ring2_11;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Ring3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Ring3_12;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Pinky1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Pinky1_13;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Pinky2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Pinky2_14;
	// UnityEngine.Transform VirtualGrasp.VG_ExternalControllerMapping::Hand_Pinky3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Hand_Pinky3_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform> VirtualGrasp.VG_ExternalControllerMapping::m_BoneToTransform
	Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* ___m_BoneToTransform_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> VirtualGrasp.VG_ExternalControllerMapping::m_BoneToParent
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_BoneToParent_17;
};

// VirtualGrasp.VG_SensorSetup
struct VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD  : public RuntimeObject
{
	// VirtualGrasp.VG_ControllerProfile VirtualGrasp.VG_SensorSetup::m_profile
	VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* ___m_profile_0;
	// UnityEngine.Transform VirtualGrasp.VG_SensorSetup::m_origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_origin_1;
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

// VG_GraspEditor/ButtonContainer
struct ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8  : public RuntimeObject
{
	// UnityEngine.Transform VG_GraspEditor/ButtonContainer::m_root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_root_0;
	// VG_GraspEditor/EditFunction VG_GraspEditor/ButtonContainer::m_editFunction
	EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* ___m_editFunction_1;
	// VG_GraspEditor/ValidateFunction VG_GraspEditor/ButtonContainer::m_validateFunction
	ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* ___m_validateFunction_2;
	// UnityEngine.UI.Text VG_GraspEditor/ButtonContainer::m_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_text_3;
	// UnityEngine.MeshRenderer VG_GraspEditor/ButtonContainer::m_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___m_renderer_4;
	// VirtualGrasp.VG_Articulation VG_GraspEditor/ButtonContainer::m_articulation
	VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* ___m_articulation_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>
struct Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_Avatar>
struct Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandSide>
struct Enumerator_tDED3585803C2DA03BD747597137590D1F5013618 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandStatus>
struct Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<VirtualGrasp.VG_ReturnCode>
struct Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VG_GraspEditor/ButtonContainer>
struct Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4FBCC76CC22915805926E462147115F83F925737* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* ____current_3;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>
struct KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus>
struct UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 
{
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_NumChannels
	uint32_t ___m_NumChannels_0;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsImpulse
	bool ___m_SupportsImpulse_1;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsBuffer
	bool ___m_SupportsBuffer_2;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferFrequencyHz
	uint32_t ___m_BufferFrequencyHz_3;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferMaxSize
	uint32_t ___m_BufferMaxSize_4;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferOptimalSize
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for COM marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// VG_EC_GenericHand
struct VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
};

// VG_EC_LeapHand
struct VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
};

// VG_EC_MouseHand
struct VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
	// System.Int32 VG_EC_MouseHand::mouse_held
	int32_t ___mouse_held_12;
	// System.Int32 VG_EC_MouseHand::filter
	int32_t ___filter_13;
	// System.Single VG_EC_MouseHand::depth
	float ___depth_14;
};

// VG_EC_OculusHand
struct VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
};

// VG_EC_SteamHand
struct VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
};

// VG_EC_UnityInteractionHand
struct VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// VG_EC_GenericHand/HandMapping
struct HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// VG_EC_LeapHand/HandMapping
struct HandMapping_t053E55C1D74E18854A654FC667FEAAA989E0F25A  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// VG_EC_MouseHand/HandMapping
struct HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// VG_EC_OculusHand/HandMapping
struct HandMapping_t7B627F80242DFC278EB132FB47DCFD1D9097B89D  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// VG_EC_SteamHand/SteamHandMapping
struct SteamHandMapping_tE83D4F222743091CA7CD0E6CFD0A6CA20FBA7462  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// VG_EC_UnityInteractionHand/HandMapping
struct HandMapping_tAF09D3E7D0E0255309C1AA7AF67E9D0640EC141C  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// VG_EC_UnityXRHand/HandMapping
struct HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288  : public VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE
{
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1  : public RuntimeObject
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// VirtualGrasp.VG_Avatar
struct VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C  : public RuntimeObject
{
	// VirtualGrasp.VG_UrdfType VirtualGrasp.VG_Avatar::m_urdf
	int32_t ___m_urdf_0;
	// UnityEngine.SkinnedMeshRenderer VirtualGrasp.VG_Avatar::m_skeletalMesh
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___m_skeletalMesh_1;
	// VirtualGrasp.VG_SensorSetup VirtualGrasp.VG_Avatar::m_primarySensorSetup
	VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* ___m_primarySensorSetup_2;
	// VirtualGrasp.VG_SensorSetup VirtualGrasp.VG_Avatar::m_secondarySensorSetup
	VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* ___m_secondarySensorSetup_3;
	// VirtualGrasp.VG_HandProfile VirtualGrasp.VG_Avatar::m_handProfile
	VG_HandProfile_tE521CDFAE840D4784F1BF42E3BBA5359F9A9DB59* ___m_handProfile_4;
	// UnityEngine.Transform VirtualGrasp.VG_Avatar::m_robotTCP
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_robotTCP_5;
	// UnityEngine.Vector2Int VirtualGrasp.VG_Avatar::m_networkIDs
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_networkIDs_6;
	// System.Boolean VirtualGrasp.VG_Avatar::m_isReplay
	bool ___m_isReplay_7;
	// System.Boolean VirtualGrasp.VG_Avatar::m_isRemote
	bool ___m_isRemote_8;
	// System.Boolean VirtualGrasp.VG_Avatar::m_isPhysical
	bool ___m_isPhysical_9;
	// System.Int32 VirtualGrasp.VG_Avatar::m_avatarID
	int32_t ___m_avatarID_10;
};

// VG_EC_UnityXRHand
struct VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93  : public VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E
{
	// UnityEngine.XR.InputDevice VG_EC_UnityXRHand::m_device
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_device_12;
};

// VirtualGrasp.VG_HandStatus
struct VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC  : public RuntimeObject
{
	// System.Boolean VirtualGrasp.VG_HandStatus::m_valid
	bool ___m_valid_0;
	// System.Int32 VirtualGrasp.VG_HandStatus::m_avatarID
	int32_t ___m_avatarID_1;
	// VirtualGrasp.VG_HandSide VirtualGrasp.VG_HandStatus::m_side
	int32_t ___m_side_2;
	// UnityEngine.Transform VirtualGrasp.VG_HandStatus::m_hand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_hand_3;
	// System.Boolean VirtualGrasp.VG_HandStatus::m_triggerHaptics
	bool ___m_triggerHaptics_4;
	// UnityEngine.Transform VirtualGrasp.VG_HandStatus::m_selectedObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_selectedObject_5;
	// System.Single VirtualGrasp.VG_HandStatus::m_grabStrength
	float ___m_grabStrength_6;
	// System.Single VirtualGrasp.VG_HandStatus::m_grabVelocity
	float ___m_grabVelocity_7;
	// VirtualGrasp.VG_InteractionMode VirtualGrasp.VG_HandStatus::m_mode
	int32_t ___m_mode_8;
	// UnityEngine.Transform VirtualGrasp.VG_HandStatus::m_upstreamMovableObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_upstreamMovableObject_9;
	// System.Nullable`1<System.Int32> VirtualGrasp.VG_HandStatus::m_selectedObjectID
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_selectedObjectID_10;
	// System.Nullable`1<System.Int32> VirtualGrasp.VG_HandStatus::m_formerSelectedObjectID
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_formerSelectedObjectID_11;
	// System.Nullable`1<System.Int32> VirtualGrasp.VG_HandStatus::m_upstreamMovableObjectID
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_upstreamMovableObjectID_12;
	// VirtualGrasp.VG_InteractionMode VirtualGrasp.VG_HandStatus::m_formerMode
	int32_t ___m_formerMode_13;
	// VirtualGrasp.VG_VelocityTracker VirtualGrasp.VG_HandStatus::m_velocityTracker
	VG_VelocityTracker_t214AF19AC04B88745A01D70B6E92473679289FEF* ___m_velocityTracker_14;
	// System.Boolean VirtualGrasp.VG_HandStatus::m_isRemote
	bool ___m_isRemote_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Events.UnityAction`1<VirtualGrasp.VG_HandStatus>
struct UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// VirtualGrasp.VG_ControllerProfile
struct VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// VirtualGrasp.VG_SensorType VirtualGrasp.VG_ControllerProfile::m_sensor
	int32_t ___m_sensor_6;
	// System.String VirtualGrasp.VG_ControllerProfile::m_externalType
	String_t* ___m_externalType_7;
	// VirtualGrasp.VG_SensorControlFlags VirtualGrasp.VG_ControllerProfile::m_control
	int32_t ___m_control_8;
	// VirtualGrasp.VG_FingerControlType VirtualGrasp.VG_ControllerProfile::m_fingerControlType
	int32_t ___m_fingerControlType_9;
	// UnityEngine.Vector3 VirtualGrasp.VG_ControllerProfile::m_offsetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_offsetPosition_10;
	// UnityEngine.Vector3 VirtualGrasp.VG_ControllerProfile::m_offsetRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_offsetRotation_11;
	// System.String VirtualGrasp.VG_ControllerProfile::m_originName
	String_t* ___m_originName_12;
	// UnityEngine.Vector3 VirtualGrasp.VG_ControllerProfile::m_originScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_originScale_13;
	// VirtualGrasp.VG_HandMapping VirtualGrasp.VG_ControllerProfile::m_leftHandMapping
	VG_HandMapping_tF3CF0483E2A0EE3D8B3A740DCAE6CFBF81FBD40E* ___m_leftHandMapping_14;
	// VirtualGrasp.VG_HandMapping VirtualGrasp.VG_ControllerProfile::m_rightHandMapping
	VG_HandMapping_tF3CF0483E2A0EE3D8B3A740DCAE6CFBF81FBD40E* ___m_rightHandMapping_15;
};

// VG_GraspEditor/EditFunction
struct EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246  : public MulticastDelegate_t
{
};

// VG_GraspEditor/ValidateFunction
struct ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VirtualGrasp.VG_ArticulationBase
struct VG_ArticulationBase_t6B0FA72D22DC1E4072CA33429AC5F5A711BD55EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VirtualGrasp.VG_JointType VirtualGrasp.VG_ArticulationBase::m_type
	int32_t ___m_type_4;
	// VirtualGrasp.VG_MotionType VirtualGrasp.VG_ArticulationBase::m_motionType
	int32_t ___m_motionType_5;
	// System.Single VirtualGrasp.VG_ArticulationBase::m_min
	float ___m_min_6;
	// System.Single VirtualGrasp.VG_ArticulationBase::m_max
	float ___m_max_7;
	// System.Single VirtualGrasp.VG_ArticulationBase::m_min2
	float ___m_min2_8;
	// System.Single VirtualGrasp.VG_ArticulationBase::m_max2
	float ___m_max2_9;
	// System.Single VirtualGrasp.VG_ArticulationBase::m_velocity
	float ___m_velocity_10;
	// VirtualGrasp.VG_Affordances VirtualGrasp.VG_ArticulationBase::m_affordances
	VG_Affordances_t81ACA2F28849AAEDA6C91B88C79B78D41686547B* ___m_affordances_11;
	// System.Single VirtualGrasp.VG_ArticulationBase::m_screwRate
	float ___m_screwRate_12;
	// System.Boolean VirtualGrasp.VG_ArticulationBase::m_dualHandsOnly
	bool ___m_dualHandsOnly_13;
	// System.Collections.Generic.List`1<System.Single> VirtualGrasp.VG_ArticulationBase::m_discreteStates
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___m_discreteStates_14;
	// System.Collections.Generic.List`1<System.Single> VirtualGrasp.VG_ArticulationBase::m_discreteStates2
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___m_discreteStates2_15;
	// System.Int32 VirtualGrasp.VG_ArticulationBase::m_networkID
	int32_t ___m_networkID_16;
	// System.Boolean VirtualGrasp.VG_ArticulationBase::m_jointCenterSpecified
	bool ___m_jointCenterSpecified_17;
	// UnityEngine.Matrix4x4 VirtualGrasp.VG_ArticulationBase::m_relativeJointCenter
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_relativeJointCenter_18;
	// System.Nullable`1<UnityEngine.Vector3> VirtualGrasp.VG_ArticulationBase::m_relativePushAxis
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___m_relativePushAxis_19;
	// System.Boolean VirtualGrasp.VG_ArticulationBase::m_transientDisable
	bool ___m_transientDisable_20;
};

// VG_GraspEditor
struct VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform VG_GraspEditor::m_pad
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_pad_4;
	// UnityEngine.Transform VG_GraspEditor::m_addGraspButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_addGraspButton_5;
	// UnityEngine.Transform VG_GraspEditor::m_toggleInteractionButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_toggleInteractionButton_6;
	// UnityEngine.Transform VG_GraspEditor::m_stepGraspButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_stepGraspButton_7;
	// UnityEngine.Transform VG_GraspEditor::m_deleteGraspButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_deleteGraspButton_8;
	// UnityEngine.Transform VG_GraspEditor::m_deleteAllGraspsButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_deleteAllGraspsButton_9;
	// VG_GraspEditor/VG_EditingInteractionType VG_GraspEditor::m_editingInteractionType
	int32_t ___m_editingInteractionType_10;
	// System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer> VG_GraspEditor::m_containers
	List_1_t4FBCC76CC22915805926E462147115F83F925737* ___m_containers_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean> VG_GraspEditor::m_intersections
	Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* ___m_intersections_12;
};

// VG_HandStatusDebugger
struct VG_HandStatusDebugger_tD2E195EE61A67681F629A2E5A0363DBFDF869F13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus> VG_HandStatusDebugger::m_hands
	List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* ___m_hands_4;
};

// VG_HandVisualizer
struct VG_HandVisualizer_t6EA37D66919AFFC20A99CB7745D49565CDF8FA9F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> VG_HandVisualizer::m_limbs
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___m_limbs_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer> VG_HandVisualizer::m_lines
	Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* ___m_lines_5;
	// UnityEngine.Transform VG_HandVisualizer::m_root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_root_6;
};

// VG_Highlighter
struct VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Shader VG_Highlighter::m_shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_shader_4;
	// System.Collections.Generic.List`1<UnityEngine.Material>[] VG_Highlighter::m_unhighlightedMaterials
	List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* ___m_unhighlightedMaterials_5;
	// System.Collections.Generic.List`1<UnityEngine.Material>[] VG_Highlighter::m_highlightedMaterials
	List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* ___m_highlightedMaterials_6;
	// UnityEngine.Color VG_Highlighter::m_leftHandColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_leftHandColor_7;
	// UnityEngine.Color VG_Highlighter::m_rightHandColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_rightHandColor_8;
	// System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform> VG_Highlighter::m_highlightedObjects
	Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* ___m_highlightedObjects_9;
};

// VG_HintVisualizer
struct VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean VG_HintVisualizer::m_enablePushHints
	bool ___m_enablePushHints_4;
	// System.Boolean VG_HintVisualizer::m_enableGraspHints
	bool ___m_enableGraspHints_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VG_HintVisualizer::pushHints
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___pushHints_6;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VG_HintVisualizer::graspHints
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___graspHints_7;
};

// VirtualGrasp.VG_MainScript
struct VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<VirtualGrasp.VG_Avatar> VirtualGrasp.VG_MainScript::m_avatars
	List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67* ___m_avatars_5;
	// VirtualGrasp.VG_GraspInteractionSettings VirtualGrasp.VG_MainScript::m_globalGraspInteractionSettings
	VG_GraspInteractionSettings_t1FAB8D03DC03F4D5DED9E391C622E4ED91C62CF2* ___m_globalGraspInteractionSettings_6;
	// VirtualGrasp.VG_SelectionSettings VirtualGrasp.VG_MainScript::m_selectionSettings
	VG_SelectionSettings_t11A065D91EF738A26A1988DC58C2EDFE40F88AE7* ___m_selectionSettings_7;
	// VirtualGrasp.VG_DebugSettings VirtualGrasp.VG_MainScript::m_debugSettings
	VG_DebugSettings_t85154395FD69F1931C85D6A941F85D741382645E* ___m_debugSettings_8;
};

// VG_PostAnimator
struct VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Quaternion VG_PostAnimator::m_leftHandTargetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_leftHandTargetRotation_4;
	// UnityEngine.Quaternion VG_PostAnimator::m_rightHandTargetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_rightHandTargetRotation_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// MyVirtualGrasp
struct MyVirtualGrasp_t790CE7F053EB5C58EAA2062B64E6337C07715F2F  : public VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68
{
};

// VirtualGrasp.VG_Articulation
struct VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7  : public VG_ArticulationBase_t6B0FA72D22DC1E4072CA33429AC5F5A711BD55EF
{
	// UnityEngine.Transform VirtualGrasp.VG_Articulation::m_anchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_anchor_21;
	// UnityEngine.Transform VirtualGrasp.VG_Articulation::m_pushDirection
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_pushDirection_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform>

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>

// System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>

// System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>

// System.Collections.Generic.HashSet`1<System.Int32Enum>

// System.Collections.Generic.HashSet`1<System.Int32Enum>

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>

// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>

// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32Enum>

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<VirtualGrasp.VG_Avatar>
struct List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VG_AvatarU5BU5D_t0CDE3A5C07E09D77DE68F6ADA8B4B4252B2A8944* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_Avatar>

// System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>
struct List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VG_ExternalControllerU5BU5D_t9176F43CB191232B3390FF608C52C76F083F682E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>

// System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>
struct List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VG_HandSideU5BU5D_t088A68A2432A2CB1FD6A36CEFD84FD510D5B4ACB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>

// System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus>
struct List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VG_HandStatusU5BU5D_tB8E04855A4E89B1616CD6C2008DFCA4A60772CA3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus>

// System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>
struct List_1_t4FBCC76CC22915805926E462147115F83F925737_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonContainerU5BU5D_tF261E2A49342CF70D0FE06290715AB7F2BA9F954* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// VirtualGrasp.VG_Controller
struct VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields
{
	// VirtualGrasp.SelectionInterface VirtualGrasp.VG_Controller::m_selectionInterface
	SelectionInterface_tD9D4EFDF8CDD0E3733F0BBF3344297FEA20DDA8A* ___m_selectionInterface_0;
	// UnityEngine.Events.UnityEvent VirtualGrasp.VG_Controller::OnInitialize
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnInitialize_1;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectGrasped
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectGrasped_2;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectReleased
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectReleased_3;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectFullyReleased
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectFullyReleased_4;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectPushed
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectPushed_5;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectSelected
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectSelected_6;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectDeselected
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectDeselected_7;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnHandEmptied
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnHandEmptied_8;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnHandNonEmptied
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnHandNonEmptied_9;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform> VirtualGrasp.VG_Controller::OnUpstreamMovableObjectFullyReleased
	UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* ___OnUpstreamMovableObjectFullyReleased_10;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnUpstreamMovableObjectFullyReleasedByHand
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnUpstreamMovableObjectFullyReleasedByHand_11;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnUpstreamMovableObjectChanged
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnUpstreamMovableObjectChanged_12;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnUpstreamMovableObjectRemoved
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnUpstreamMovableObjectRemoved_13;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnGraspTriggered
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnGraspTriggered_14;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectEnter2HandMode
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectEnter2HandMode_15;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectExit2HandMode
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectExit2HandMode_16;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::OnObjectCollided
	UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* ___OnObjectCollided_17;
	// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_Articulation> VirtualGrasp.VG_Controller::OnObjectJointChanged
	UnityEvent_1_t94A87095484F780A724170DB64693212236776E3* ___OnObjectJointChanged_18;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform> VirtualGrasp.VG_Controller::OnObjectInternalJointChanged
	UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* ___OnObjectInternalJointChanged_19;
	// UnityEngine.Events.UnityEvent`2<UnityEngine.Transform,System.Single> VirtualGrasp.VG_Controller::OnObjectSelectionWeightChanged
	UnityEvent_2_t8D1B223041AE70C95A4E384FC0B21DE9B2DA0EE4* ___OnObjectSelectionWeightChanged_20;
	// UnityEngine.Events.UnityEvent`3<UnityEngine.Transform,System.Int32,System.Single> VirtualGrasp.VG_Controller::OnAvatarSpecificObjectSelectionWeightChanged
	UnityEvent_3_t0A97A4F79EE9B8C30671AD7824C0EAEF3F0F70B7* ___OnAvatarSpecificObjectSelectionWeightChanged_21;
	// UnityEngine.Events.UnityEvent VirtualGrasp.VG_Controller::OnPreUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnPreUpdate_22;
	// UnityEngine.Events.UnityEvent VirtualGrasp.VG_Controller::OnPostUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnPostUpdate_23;
};

// VirtualGrasp.VG_Controller

// VirtualGrasp.VG_ExternalController

// VirtualGrasp.VG_ExternalController

// VG_ExternalControllerManager

// VG_ExternalControllerManager

// VirtualGrasp.VG_ExternalControllerMapping

// VirtualGrasp.VG_ExternalControllerMapping

// VirtualGrasp.VG_SensorSetup

// VirtualGrasp.VG_SensorSetup

// VG_GraspEditor/ButtonContainer
struct ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.Transform> VG_GraspEditor/ButtonContainer::BUTTON_TRANSFORMS
	HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___BUTTON_TRANSFORMS_6;
};

// VG_GraspEditor/ButtonContainer

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_Avatar>

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_Avatar>

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandSide>

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandSide>

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandStatus>

// System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandStatus>

// System.Collections.Generic.HashSet`1/Enumerator<VirtualGrasp.VG_ReturnCode>

// System.Collections.Generic.HashSet`1/Enumerator<VirtualGrasp.VG_ReturnCode>

// System.Collections.Generic.List`1/Enumerator<VG_GraspEditor/ButtonContainer>

// System.Collections.Generic.List`1/Enumerator<VG_GraspEditor/ButtonContainer>

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>

// UnityEngine.XR.InputFeatureUsage`1<System.Single>

// UnityEngine.XR.InputFeatureUsage`1<System.Single>

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus>

// UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.XR.HapticCapabilities

// UnityEngine.XR.HapticCapabilities

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};

// UnityEngine.XR.InputDevice

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// VG_EC_GenericHand

// VG_EC_GenericHand

// VG_EC_LeapHand

// VG_EC_LeapHand

// VG_EC_MouseHand

// VG_EC_MouseHand

// VG_EC_OculusHand

// VG_EC_OculusHand

// VG_EC_SteamHand

// VG_EC_SteamHand

// VG_EC_UnityInteractionHand

// VG_EC_UnityInteractionHand

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// VG_EC_GenericHand/HandMapping

// VG_EC_GenericHand/HandMapping

// VG_EC_LeapHand/HandMapping

// VG_EC_LeapHand/HandMapping

// VG_EC_MouseHand/HandMapping

// VG_EC_MouseHand/HandMapping

// VG_EC_OculusHand/HandMapping

// VG_EC_OculusHand/HandMapping

// VG_EC_SteamHand/SteamHandMapping

// VG_EC_SteamHand/SteamHandMapping

// VG_EC_UnityInteractionHand/HandMapping

// VG_EC_UnityInteractionHand/HandMapping

// VG_EC_UnityXRHand/HandMapping

// VG_EC_UnityXRHand/HandMapping

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___thumbTouch_58;
};

// UnityEngine.XR.CommonUsages

// System.Delegate

// System.Delegate

// System.Int32Enum

// System.Int32Enum

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// VirtualGrasp.VG_Avatar

// VirtualGrasp.VG_Avatar

// VG_EC_UnityXRHand

// VG_EC_UnityXRHand

// VirtualGrasp.VG_HandStatus
struct VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_StaticFields
{
	// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_InteractionMode> VirtualGrasp.VG_HandStatus::HOLD_MODES
	HashSet_1_t08778549F33904D1CA15E5F86A289ECA158D7DF4* ___HOLD_MODES_16;
	// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_InteractionMode> VirtualGrasp.VG_HandStatus::ONEHAND_HOLD_MODES
	HashSet_1_t08778549F33904D1CA15E5F86A289ECA158D7DF4* ___ONEHAND_HOLD_MODES_17;
	// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_InteractionMode> VirtualGrasp.VG_HandStatus::TWOHAND_HOLD_MODES
	HashSet_1_t08778549F33904D1CA15E5F86A289ECA158D7DF4* ___TWOHAND_HOLD_MODES_18;
	// System.Collections.Generic.HashSet`1<VirtualGrasp.VG_InteractionMode> VirtualGrasp.VG_HandStatus::GRASP_MODES
	HashSet_1_t08778549F33904D1CA15E5F86A289ECA158D7DF4* ___GRASP_MODES_19;
};

// VirtualGrasp.VG_HandStatus

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Events.UnityAction`1<VirtualGrasp.VG_HandStatus>

// UnityEngine.Events.UnityAction`1<VirtualGrasp.VG_HandStatus>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// VirtualGrasp.VG_ControllerProfile
struct VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C_StaticFields
{
	// System.Collections.Generic.List`1<System.String> VirtualGrasp.VG_ControllerProfile::FINGER_TRACKING_SENSORS
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___FINGER_TRACKING_SENSORS_4;
	// System.Collections.Generic.List`1<System.String> VirtualGrasp.VG_ControllerProfile::WRIST_TRACKING_SENSORS
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___WRIST_TRACKING_SENSORS_5;
};

// VirtualGrasp.VG_ControllerProfile

// VG_GraspEditor/EditFunction

// VG_GraspEditor/EditFunction

// VG_GraspEditor/ValidateFunction

// VG_GraspEditor/ValidateFunction

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// VirtualGrasp.VG_ArticulationBase

// VirtualGrasp.VG_ArticulationBase

// VG_GraspEditor

// VG_GraspEditor

// VG_HandStatusDebugger

// VG_HandStatusDebugger

// VG_HandVisualizer

// VG_HandVisualizer

// VG_Highlighter

// VG_Highlighter

// VG_HintVisualizer

// VG_HintVisualizer

// VirtualGrasp.VG_MainScript
struct VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68_StaticFields
{
	// VirtualGrasp.VG_MainScript VirtualGrasp.VG_MainScript::m_instance
	VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* ___m_instance_4;
};

// VirtualGrasp.VG_MainScript

// VG_PostAnimator

// VG_PostAnimator

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// MyVirtualGrasp

// MyVirtualGrasp

// VirtualGrasp.VG_Articulation

// VirtualGrasp.VG_Articulation

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.List`1<UnityEngine.Material>[]
struct List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* m_Items[1];

	inline List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerable_Last_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_mDFEB43DF97097A46049AA237F790D27EC40F1215_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD HashSet_1_GetEnumerator_mD39261A9CC3EE28CF60F54E8040EEB40C1FFFBE4_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m6569C17BC1C7EE2A7D2AFF4110EE75938C4FB16A_gshared_inline (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void VirtualGrasp.VG_MainScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_MainScript_Awake_m844EEF8EA7DD6E859703DC9024E2D1712ED4AB2D (VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_Controller::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Controller_Initialize_m9E76A581B77121DC3884174A81F510561DC2FDBE (const RuntimeMethod* method) ;
// System.Void VG_ExternalControllerManager::Initialize(VirtualGrasp.VG_MainScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerManager_Initialize_m0B1C4A472A61A4B7A46172DF5B1676DD7685456D (VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* ___0_vg, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_MainScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_MainScript_Update_m2822A731102710E15D9D4B7CE12918721F053ED0 (VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* __this, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_MainScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_MainScript_FixedUpdate_mBD7CB048003A0A4A235A55C6525B9A2D6A693A0D (VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* __this, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_MainScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_MainScript__ctor_mFCED88899CD51284EB36A465AA2139E63C597E0C (VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VirtualGrasp.VG_Avatar>::GetEnumerator()
inline Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496 List_1_GetEnumerator_m00284570A347E7586168C31EDF0B6BD067BB3C71 (List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496 (*) (List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_Avatar>::Dispose()
inline void Enumerator_Dispose_mE9F6B1C9206CD3A804B743F6ECAEFFCBA4C4DDF7 (Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_Avatar>::get_Current()
inline VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* Enumerator_get_Current_m767FC5C60A762C56DFFB3260A4A6B8CA7DB4A594_inline (Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496* __this, const RuntimeMethod* method)
{
	return ((  VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* (*) (Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void VG_ExternalControllerManager::RegisterExternalController(System.Int32,VirtualGrasp.VG_ControllerProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerManager_RegisterExternalController_m73296FB862CEBDB86B06EC65B90AA520EE529DED (int32_t ___0_avatarID, VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* ___1_controllerType, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_Avatar>::MoveNext()
inline bool Enumerator_MoveNext_m243F3E59242A001B0BA100EA8F71E5202135B23D (Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>::.ctor()
inline void Dictionary_2__ctor_m553532F60B944EAE98C76D77EE5E0DBD57333AAB (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>::.ctor()
inline void List_1__ctor_mE75015476C9B777A88E25E81E2807DFED9DCA487 (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F*, const RuntimeMethod*))List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>::Add(T)
inline void List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_inline (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VirtualGrasp.VG_HandSide>::GetEnumerator()
inline Enumerator_tDED3585803C2DA03BD747597137590D1F5013618 List_1_GetEnumerator_mEAC3FC09EF477A95D89042AF4F1F772F1E87BD2F (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDED3585803C2DA03BD747597137590D1F5013618 (*) (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandSide>::Dispose()
inline void Enumerator_Dispose_mD6581875D0125CBF7C1746ACE228C4C0AE2173DD (Enumerator_tDED3585803C2DA03BD747597137590D1F5013618* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDED3585803C2DA03BD747597137590D1F5013618*, const RuntimeMethod*))Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandSide>::get_Current()
inline int32_t Enumerator_get_Current_m84B1BEA7FB0FE865E2D2DC6A509640B93E645FF6_inline (Enumerator_tDED3585803C2DA03BD747597137590D1F5013618* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tDED3585803C2DA03BD747597137590D1F5013618*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
// UnityEngine.Transform VirtualGrasp.VG_Controller::GetBone(System.Int32,VirtualGrasp.VG_HandSide,VirtualGrasp.VG_BoneType,System.Int32&,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* VG_Controller_GetBone_m45369B718D2AC9732518F56EF9A3360F4A574658 (int32_t ___0_avatarID, int32_t ___1_handSide, int32_t ___2_boneType, int32_t* ___3_instanceID, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___4_m, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFC34D1E5453454FE7184E96F034E8F248044897C (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>::.ctor()
inline void List_1__ctor_mD5D0DDD4A2F5C127AC1F40C6AB4C495322C526C7 (List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m86AA41A2A3E92A9F4939540C3F99D6787C0CA891 (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* __this, int32_t ___0_key, List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE*, int32_t, List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>::get_Item(TKey)
inline List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3 (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* (*) (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.Void VG_EC_OculusHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_OculusHand__ctor_m3A5B90D050ACB91FD9A3EF288D783058A1ACE08E (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, int32_t ___0_avatarID, int32_t ___1_side, bool ___2_verbose, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>::Add(T)
inline void List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline (List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* __this, VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062*, VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void VG_EC_UnityXRHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityXRHand__ctor_mFFDC06D7E8CF299A7AD5B13C568A0059598AC302 (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Void VG_EC_MouseHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_MouseHand__ctor_m8500635AC5335BEC814846CE21D0555F5F1DEAD3 (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Void VG_EC_LeapHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_LeapHand__ctor_m82D134B271EA90D874D096C6C4A27BDA5AB1C76D (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Void VG_EC_SteamHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_SteamHand__ctor_m7BF973C307F8DBB69240A89A1AED71D23A3DF224 (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Void VG_EC_UnityInteractionHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityInteractionHand__ctor_m3B555E35D73F716D17A0B85C20A73BD95A2177A8 (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Void VG_EC_GenericHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_GenericHand__ctor_m6884A44E6EE76A7690612310CF765D5530FD4B5B (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandSide>::MoveNext()
inline bool Enumerator_MoveNext_m3ED5E61985BE010B6F6F29CE0BE8AD06F42D2BF7 (Enumerator_tDED3585803C2DA03BD747597137590D1F5013618* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDED3585803C2DA03BD747597137590D1F5013618*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
// System.Void VirtualGrasp.VG_Controller::RegisterExternalControllers(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<VirtualGrasp.VG_ExternalController>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Controller_RegisterExternalControllers_mC07F9C97A1A6F3C874279E1BCFCA6500A805FC3F (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* ___0_controllers, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_ExternalController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72 (VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E* __this, const RuntimeMethod* method) ;
// System.Void VG_EC_GenericHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_GenericHand_Initialize_m0C0EFD1DBAA6178A1B62674861ED398A5D4D81E0 (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, const RuntimeMethod* method) ;
// System.Void VG_EC_GenericHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_mB42D1BB0A4C58A80303563AD3778631224AD1914 (HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F* __this, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_ExternalController::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalController_Initialize_m07C47D97025BB99D5B475F227C7B4AE90265B615 (VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E* __this, const RuntimeMethod* method) ;
// System.Boolean VirtualGrasp.VG_ExternalControllerMapping::GetTransform(System.Int32,UnityEngine.Transform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_ExternalControllerMapping_GetTransform_m09AD9A86B1DE043349EA68A3A6AEF94E7EB1021D (VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* __this, int32_t ___0_bone, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___1_pose, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_ExternalController::SetPose(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalController_SetPose_mAE7CAE768CA6A154FBA1C8BAF3B44693DA0E8CDC (VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E* __this, int32_t ___0_id, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_pose, const RuntimeMethod* method) ;
// System.Int32 VirtualGrasp.VG_ExternalControllerMapping::GetNumBones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_ExternalControllerMapping_GetNumBones_mCBB956194B0A6033CDB1EFE73FF80B5F51697678 (VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void VirtualGrasp.VG_ExternalControllerMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB (VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform>::.ctor()
inline void Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform>::Add(TKey,TValue)
inline void Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239 (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* __this, int32_t ___0_key, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*, int32_t, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void VirtualGrasp.VG_ExternalControllerMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89 (VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* __this, const RuntimeMethod* method) ;
// System.Void VG_Debug::LogError(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Debug_LogError_m848B60120887C125385F1AD441FF86B8CBF9DCDA (String_t* ___0_txt, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared)(__this, method);
}
// System.Void VG_EC_MouseHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_MouseHand_Initialize_m8E872EF28F482347C9ECEBA4E40583D065E42DCC (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, const RuntimeMethod* method) ;
// System.Void VG_EC_MouseHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_mB86A289D51E23DAF5C21A723CC1BFAF915FEC615 (HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.StereoTargetEyeMask UnityEngine.Camera::get_stereoTargetEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_stereoTargetEye(UnityEngine.StereoTargetEyeMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void VG_EC_OculusHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_OculusHand_Initialize_m65D27A5BCC4A5A35BB086FC2641910C936582C5F (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void VG_EC_UnityXRHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityXRHand_Initialize_mD6EA353293BC4089B11D7AA79C56EC58CBE6ACCE (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, const RuntimeMethod* method) ;
// System.Void VG_EC_UnityXRHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_m2C22ED1EF441A85CE4F918E8F7A873D77397B915 (HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputDevice UnityEngine.XR.InputDevices::GetDeviceAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD InputDevices_GetDeviceAtXRNode_m3D322E7D1FFDA9C4D53E6B944E636C39B7A9592B (int32_t ___0_node, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___0_usage, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___0_usage, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_value, const RuntimeMethod* method) ;
// VirtualGrasp.VG_VrButton VirtualGrasp.VG_Controller::GetGraspButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetGraspButton_m535D91CEAEB8C1639B9F0ADDA34315FBE44B961D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___0_usage, float* ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetHapticCapabilities(UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___0_capabilities, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::SendHapticImpulse(System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint32_t ___0_channel, float ___1_amplitude, float ___2_duration, const RuntimeMethod* method) ;
// System.Void VG_GraspEditor/ValidateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179 (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VG_GraspEditor/EditFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VG_GraspEditor/ButtonContainer::.ctor(UnityEngine.Transform,VG_GraspEditor/ValidateFunction,VG_GraspEditor/EditFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_button, ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* ___1_validateFunc, EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* ___2_editFunc, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>::Add(T)
inline void List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_inline (List_1_t4FBCC76CC22915805926E462147115F83F925737* __this, ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FBCC76CC22915805926E462147115F83F925737*, ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.MeshRenderer>(T&)
inline bool Component_TryGetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m369728D3BCAF415D2C570CF2A4FF5BD70CE8EF5E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::EditGrasp(System.Int32,VirtualGrasp.VG_HandSide,VirtualGrasp.VG_EditorAction,UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_EditGrasp_m9D44DB1F7CEF553489A8152199A28C31269F1660 (int32_t ___0_avatarID, int32_t ___1_handSide, int32_t ___2_action, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_obj, int32_t ___4_grasp, const RuntimeMethod* method) ;
// System.Boolean VG_GraspEditor::IsValidObject(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) ;
// VirtualGrasp.VG_InteractionType VirtualGrasp.VG_Controller::GetInteractionTypeForObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetInteractionTypeForObject_m6BF67CBFE20F3894E2D4501D18756EF515D6CF83 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_selectedObject, const RuntimeMethod* method) ;
// System.Int32 VirtualGrasp.VG_HandStatus::GetNumGraspsInDB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_HandStatus_GetNumGraspsInDB_m8ADD6FB487EC9FC2977ECE63EC84F444027A6ED7 (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::SetInteractionTypeForObject(UnityEngine.Transform,VirtualGrasp.VG_InteractionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_SetInteractionTypeForObject_mA103F9A12EC9624C205A3E138388A522745BC2AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_selectedObject, int32_t ___1_interactionType, const RuntimeMethod* method) ;
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::TogglePrimaryGraspOnObject(System.Int32,VirtualGrasp.VG_HandSide,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_TogglePrimaryGraspOnObject_m4590E3CC7C8CEC7AE6D1CE3E4249A4022C8287BD (int32_t ___0_avatarID, int32_t ___1_handSide, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_obj, const RuntimeMethod* method) ;
// System.Int32 VirtualGrasp.VG_HandStatus::GetNumPrimaryGraspsInDB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_HandStatus_GetNumPrimaryGraspsInDB_m0995BCD8B7901A73416E03E7E98ED6B8CCE9613F (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 VirtualGrasp.VG_Controller::GetNumGraspsInDB(UnityEngine.Transform,System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetNumGraspsInDB_m9C5EB18A6832F838C842015C8ABC124A7545B7A2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_selectedObject, int32_t ___1_avatarID, int32_t ___2_handSide, const RuntimeMethod* method) ;
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::GetSensorControlledAvatarID(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetSensorControlledAvatarID_m19BDA49BD4AE9FCC3A0650BA5B52060E8776701D (int32_t* ___0_avatarID, const RuntimeMethod* method) ;
// VirtualGrasp.VG_HandStatus VirtualGrasp.VG_Controller::GetHand(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* VG_Controller_GetHand_mCCCB24D6EF270DD099324A5857E0599572CCF205 (int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Contains(T)
inline bool HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>::GetEnumerator()
inline Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A (List_1_t4FBCC76CC22915805926E462147115F83F925737* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC (*) (List_1_t4FBCC76CC22915805926E462147115F83F925737*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VG_GraspEditor/ButtonContainer>::Dispose()
inline void Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC (Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VG_GraspEditor/ButtonContainer>::get_Current()
inline ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_inline (Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC* __this, const RuntimeMethod* method)
{
	return ((  ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* (*) (Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean VG_GraspEditor/ButtonContainer::Validate(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonContainer_Validate_mB54E364FEA335E9A4F12E7B768D3F4B42C4A14CC (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<VG_GraspEditor/ButtonContainer>::MoveNext()
inline bool Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730 (Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m614A53A52F4460E65E001BCCEFBA7D1E45BA83F2 (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>::get_Item(TKey)
inline bool Dictionary_2_get_Item_mEEF3BB69D68DDAC8FB3F2D275B1AEE4850978D53 (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared)(__this, ___0_key, method);
}
// System.Boolean VG_GraspEditor/ButtonContainer::Trigger(VirtualGrasp.VG_HandStatus,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonContainer_Trigger_m8DA2D41AD825986E9A5B2BBFA5E547230C169D0B (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, bool ___1_hasIntersection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m858FF6D7435CA960F1A8A76B9168EEC37D2483C9 (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<VG_GraspEditor/ButtonContainer>::.ctor()
inline void List_1__ctor_mEA66E84548FC446BC00E15555075B32BA121DCFC (List_1_t4FBCC76CC22915805926E462147115F83F925737* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FBCC76CC22915805926E462147115F83F925737*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m399003492E0507743AD9AE2441E83D56DA3C79E6 (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1*, const RuntimeMethod*))Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<VirtualGrasp.VG_Articulation>()
inline VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* Component_GetComponentInChildren_TisVG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7_m2B4E472E508442F5F108DC53A9A5D827572CBB8F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Add(T)
inline bool HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Boolean VG_GraspEditor/ValidateFunction::Invoke(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_inline (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) ;
// System.Boolean VirtualGrasp.VG_HandStatus::IsHolding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_HandStatus_IsHolding_m85CFD208152CB134D3AA2ECA0835FD84C14DDC4C (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::GetObjectJointState(UnityEngine.Transform,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetObjectJointState_m6906CB5E2FADACFE46300B432A6149C5179A00D2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_selectedObject, float* ___1_jointState, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741 (UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void VG_GraspEditor/EditFunction::Invoke(VirtualGrasp.VG_HandStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_inline (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Transform>::.ctor()
inline void HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus>::.ctor()
inline void List_1__ctor_mCC63B202A0C7BA5CF051F5A50252F3D8631AB005 (List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Clear()
inline void Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>::Clear()
inline void Dictionary_2_Clear_m84736574ADA1AD7AAD5AA3A543C1D35F4D729037 (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus> VirtualGrasp.VG_Controller::GetHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VirtualGrasp.VG_HandStatus>::GetEnumerator()
inline Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F (List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 (*) (List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandStatus>::Dispose()
inline void Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C (Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandStatus>::get_Current()
inline VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_inline (Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6* __this, const RuntimeMethod* method)
{
	return ((  VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* (*) (Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::GetBone(System.Int32,VirtualGrasp.VG_HandSide,VirtualGrasp.VG_BoneType,System.Int32&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetBone_m3AFF3354117A1A19B5DC54F008326568B323F6B9 (int32_t ___0_avatarID, int32_t ___1_handSide, int32_t ___2_boneType, int32_t* ___3_instanceID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_p, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___5_q, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::GetFingerBone(System.Int32,VirtualGrasp.VG_HandSide,System.Int32,System.Int32,System.Int32&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetFingerBone_m147D92DC791E4320DCE3DF69D7C4537627566BCE (int32_t ___0_avatarID, int32_t ___1_handSide, int32_t ___2_fingerID, int32_t ___3_boneID, int32_t* ___4_instanceID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___5_p, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___6_q, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 Enumerable_Last_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_mBBB69E1AFA80D9D0B4992C6789FF69346CFE085E (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_mDFEB43DF97097A46049AA237F790D27EC40F1215_gshared)(___0_source, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Value()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_inline (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// UnityEngine.Transform VirtualGrasp.VG_Controller::GetBone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* VG_Controller_GetBone_mDCE0BDDA3AC39D7DF5FA97A0DF1940EF2441CE50 (int32_t ___0_transformID, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m3F4ADDCEA3306310F7EA76AB2288C4EE71E19902 (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* __this, int32_t ___0_key, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099*, int32_t, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>::get_Item(TKey)
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946 (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<VirtualGrasp.VG_HandStatus>::MoveNext()
inline bool Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326 (Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.LineRenderer>::.ctor()
inline void Dictionary_2__ctor_m655FEA14595F47252D8E3649F1E2263B772D570B (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Shader>(System.String)
inline Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Resources_Load_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m378804064185FA25C41237187B3CCEA095C05946 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void VG_Debug::LogWarning(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Debug_LogWarning_m19B998D1A72DEC00BD1B1966122A0F10A514E23F (String_t* ___0_txt, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1 (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* __this, int32_t ___0_key, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2*, int32_t, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.Events.UnityAction`1<VirtualGrasp.VG_HandStatus>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3E459A2EE3EFDF23A4125C6BF5811CA924E075BC (UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<VirtualGrasp.VG_HandStatus>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9 (UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* __this, UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F*, UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> VirtualGrasp.VG_Controller::GetSelectableObjects(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VG_Controller_GetSelectableObjects_m10031B88A259F93DC48FD7B13C1EBC5D6A78765B (bool ___0_excludeHidden, bool ___1_excludeUntagged, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>::GetEnumerator()
inline Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345 HashSet_1_GetEnumerator_mAAE227155CB9806B9E474AB0D66FC8D3816976DF (HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345 (*) (HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF*, const RuntimeMethod*))HashSet_1_GetEnumerator_mD39261A9CC3EE28CF60F54E8040EEB40C1FFFBE4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<VirtualGrasp.VG_ReturnCode>::Dispose()
inline void Enumerator_Dispose_mFFD54A623C63FE538F152259CFD3A10560D391CC (Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345*, const RuntimeMethod*))Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<VirtualGrasp.VG_ReturnCode>::get_Current()
inline int32_t Enumerator_get_Current_m7657AB5816C946998F88A892E30C0162FB0171FE_inline (Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345*, const RuntimeMethod*))Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Transform> VirtualGrasp.VG_Controller::GetUnbakedObjects(VirtualGrasp.VG_ReturnCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* VG_Controller_GetUnbakedObjects_m2630B5C6E1839AB5D4EE0E89CC659310C9EE1868 (int32_t ___0_filter, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(T)
inline bool List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// UnityEngine.Color VG_Highlighter::GetColor(VirtualGrasp.VG_ReturnCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_Highlighter_GetColor_mD60BC4641E8B8FBECFA6EA31839379A483BE829E (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, int32_t ___0_code, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<VirtualGrasp.VG_ReturnCode>::MoveNext()
inline bool Enumerator_MoveNext_mF2634E207F82B067DD47A93C4089B72D33A2E49B (Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345*, const RuntimeMethod*))Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>::get_Count()
inline int32_t HashSet_1_get_Count_m63FEEB1A7B78287DC3660AD615491AC2857FCAC2_inline (HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF*, const RuntimeMethod*))HashSet_1_get_Count_m6569C17BC1C7EE2A7D2AFF4110EE75938C4FB16A_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>::get_Item(TKey)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mE6AD85B1B839B7A36AC76E52A884895705D95638 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Item(System.Int32,T)
inline void List_1_set_Item_mC2AB2300D7D178165C7870101134EB567E648435 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___0_index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
inline void List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m507EBF566F856321FA1A1BF3D67EB33FA0EEA3EC (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___0_key, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VirtualGrasp.VG_HandSide,UnityEngine.Transform>::.ctor()
inline void Dictionary_2__ctor_mB4864443984B35924D747359D91F57B6D6E0F74F (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
inline void List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void VG_HintVisualizer::AddHintObject(System.Collections.Generic.List`1<UnityEngine.Transform>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_AddHintObject_m4740032DB65F09CA00219F7B10411293FDAE1490 (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___0_hintList, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void VG_HintVisualizer::RemoveHintObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_RemoveHintObjects_m8900BFE396280E14B964771C88BE0CD35BB4092D (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___0_source, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_original, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Int32 System.Linq.Enumerable::Count<VirtualGrasp.VG_HandStatus>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___0_source, method);
}
// UnityEngine.Transform VirtualGrasp.VG_Controller::GetPushCircle(System.Int32,VirtualGrasp.VG_HandSide,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* VG_Controller_GetPushCircle_m4DD30E028246EB7A5B3F8226F9E8CF38F0E2DA68 (int32_t ___0_avatarID, int32_t ___1_handSide, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_p, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_r, float* ___4_radius, bool* ___5_inContact, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_mD6A1C6E862F3EFB1B222A2DDCB7A7237042DE142_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean VG_PostAnimator::GetOtherButtonTrigger(VirtualGrasp.VG_HandSide,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_PostAnimator_GetOtherButtonTrigger_mF8468942AA4C0D1BCEA5F57B4F953A5702C60A71 (VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3* __this, int32_t ___0_handSide, float* ___1_trigger, const RuntimeMethod* method) ;
// VirtualGrasp.VG_ReturnCode VirtualGrasp.VG_Controller::GetFingerBone(System.Int32,VirtualGrasp.VG_HandSide,System.Int32,System.Int32,UnityEngine.Transform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VG_Controller_GetFingerBone_m56ED2893BE35F5F9771769903EEE681E76D7E829 (int32_t ___0_avatarID, int32_t ___1_handSide, int32_t ___2_fingerID, int32_t ___3_boneID, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___4_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MyVirtualGrasp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVirtualGrasp_Awake_m49F581E514DF0E4A56F69B4F3B7C926B3331BEBE (MyVirtualGrasp_t790CE7F053EB5C58EAA2062B64E6337C07715F2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake(); // note: Awake can delete this component if there already is one.
		VG_MainScript_Awake_m844EEF8EA7DD6E859703DC9024E2D1712ED4AB2D(__this, NULL);
		// if (this != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// VG_Controller.Initialize();
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		VG_Controller_Initialize_m9E76A581B77121DC3884174A81F510561DC2FDBE(NULL);
		// VG_ExternalControllerManager.Initialize(this);
		VG_ExternalControllerManager_Initialize_m0B1C4A472A61A4B7A46172DF5B1676DD7685456D(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void MyVirtualGrasp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVirtualGrasp_Update_m66B88619B6D4B16849EB107DD2D491748C4575D1 (MyVirtualGrasp_t790CE7F053EB5C58EAA2062B64E6337C07715F2F* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		VG_MainScript_Update_m2822A731102710E15D9D4B7CE12918721F053ED0(__this, NULL);
		// }
		return;
	}
}
// System.Void MyVirtualGrasp::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVirtualGrasp_FixedUpdate_m50F9A665A0CC0C27CF2C8461E2CDA9A31B3C1A88 (MyVirtualGrasp_t790CE7F053EB5C58EAA2062B64E6337C07715F2F* __this, const RuntimeMethod* method) 
{
	{
		// base.FixedUpdate();
		VG_MainScript_FixedUpdate_mBD7CB048003A0A4A235A55C6525B9A2D6A693A0D(__this, NULL);
		// }
		return;
	}
}
// System.Void MyVirtualGrasp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVirtualGrasp__ctor_m69DD831EB5B372E778B156550F4856B1338951C4 (MyVirtualGrasp_t790CE7F053EB5C58EAA2062B64E6337C07715F2F* __this, const RuntimeMethod* method) 
{
	{
		VG_MainScript__ctor_mFCED88899CD51284EB36A465AA2139E63C597E0C(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_ExternalControllerManager::Initialize(VirtualGrasp.VG_MainScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerManager_Initialize_m0B1C4A472A61A4B7A46172DF5B1676DD7685456D (VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* ___0_vg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9F6B1C9206CD3A804B743F6ECAEFFCBA4C4DDF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m243F3E59242A001B0BA100EA8F71E5202135B23D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m767FC5C60A762C56DFFB3260A4A6B8CA7DB4A594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m00284570A347E7586168C31EDF0B6BD067BB3C71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* V_1 = NULL;
	{
		// foreach (VG_Avatar avatar in vg.m_avatars)
		VG_MainScript_tB5A10817A0CB610FDC52B4F87BA147E6F8B16E68* L_0 = ___0_vg;
		NullCheck(L_0);
		List_1_tA1C0E55ADF8DBFF9E79C4C3BECDCB32400058F67* L_1 = L_0->___m_avatars_5;
		NullCheck(L_1);
		Enumerator_t88DE4D979FE51B64357827DBC8CE3436B566E496 L_2;
		L_2 = List_1_GetEnumerator_m00284570A347E7586168C31EDF0B6BD067BB3C71(L_1, List_1_GetEnumerator_m00284570A347E7586168C31EDF0B6BD067BB3C71_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9F6B1C9206CD3A804B743F6ECAEFFCBA4C4DDF7((&V_0), Enumerator_Dispose_mE9F6B1C9206CD3A804B743F6ECAEFFCBA4C4DDF7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0011_1:
			{
				// foreach (VG_Avatar avatar in vg.m_avatars)
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_3;
				L_3 = Enumerator_get_Current_m767FC5C60A762C56DFFB3260A4A6B8CA7DB4A594_inline((&V_0), Enumerator_get_Current_m767FC5C60A762C56DFFB3260A4A6B8CA7DB4A594_RuntimeMethod_var);
				V_1 = L_3;
				// if (avatar.m_primarySensorSetup.m_profile == null || avatar.m_primarySensorSetup.m_profile.m_sensor != VG_SensorType.EXTERNAL_CONTROLLER)
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_4 = V_1;
				NullCheck(L_4);
				VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* L_5 = L_4->___m_primarySensorSetup_2;
				NullCheck(L_5);
				VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_6 = L_5->___m_profile_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_7)
				{
					goto IL_0093_1;
				}
			}
			{
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_8 = V_1;
				NullCheck(L_8);
				VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* L_9 = L_8->___m_primarySensorSetup_2;
				NullCheck(L_9);
				VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_10 = L_9->___m_profile_0;
				NullCheck(L_10);
				int32_t L_11 = L_10->___m_sensor_6;
				if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)16)))))
				{
					goto IL_0093_1;
				}
			}
			{
				// RegisterExternalController(avatar.m_avatarID, avatar.m_primarySensorSetup.m_profile);
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13 = L_12->___m_avatarID_10;
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_14 = V_1;
				NullCheck(L_14);
				VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* L_15 = L_14->___m_primarySensorSetup_2;
				NullCheck(L_15);
				VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_16 = L_15->___m_profile_0;
				VG_ExternalControllerManager_RegisterExternalController_m73296FB862CEBDB86B06EC65B90AA520EE529DED(L_13, L_16, NULL);
				// if (avatar.m_secondarySensorSetup.m_profile == null || avatar.m_secondarySensorSetup.m_profile.m_sensor != VG_SensorType.EXTERNAL_CONTROLLER)
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_17 = V_1;
				NullCheck(L_17);
				VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* L_18 = L_17->___m_secondarySensorSetup_3;
				NullCheck(L_18);
				VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_19 = L_18->___m_profile_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_20;
				L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_20)
				{
					goto IL_0093_1;
				}
			}
			{
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_21 = V_1;
				NullCheck(L_21);
				VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* L_22 = L_21->___m_secondarySensorSetup_3;
				NullCheck(L_22);
				VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_23 = L_22->___m_profile_0;
				NullCheck(L_23);
				int32_t L_24 = L_23->___m_sensor_6;
				if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)16)))))
				{
					goto IL_0093_1;
				}
			}
			{
				// RegisterExternalController(avatar.m_avatarID, avatar.m_secondarySensorSetup.m_profile);
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_25 = V_1;
				NullCheck(L_25);
				int32_t L_26 = L_25->___m_avatarID_10;
				VG_Avatar_tCF442A7DDE4D8E653C259FEDF8F33737C5A1F23C* L_27 = V_1;
				NullCheck(L_27);
				VG_SensorSetup_t27CAAF69C32C9D46481D45D67AED7754C2561DCD* L_28 = L_27->___m_secondarySensorSetup_3;
				NullCheck(L_28);
				VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_29 = L_28->___m_profile_0;
				VG_ExternalControllerManager_RegisterExternalController_m73296FB862CEBDB86B06EC65B90AA520EE529DED(L_26, L_29, NULL);
			}

IL_0093_1:
			{
				// foreach (VG_Avatar avatar in vg.m_avatars)
				bool L_30;
				L_30 = Enumerator_MoveNext_m243F3E59242A001B0BA100EA8F71E5202135B23D((&V_0), Enumerator_MoveNext_m243F3E59242A001B0BA100EA8F71E5202135B23D_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void VG_ExternalControllerManager::RegisterExternalController(System.Int32,VirtualGrasp.VG_ControllerProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerManager_RegisterExternalController_m73296FB862CEBDB86B06EC65B90AA520EE529DED (int32_t ___0_avatarID, VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* ___1_controllerType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFC34D1E5453454FE7184E96F034E8F248044897C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m553532F60B944EAE98C76D77EE5E0DBD57333AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m86AA41A2A3E92A9F4939540C3F99D6787C0CA891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD6581875D0125CBF7C1746ACE228C4C0AE2173DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3ED5E61985BE010B6F6F29CE0BE8AD06F42D2BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m84B1BEA7FB0FE865E2D2DC6A509640B93E645FF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEAC3FC09EF477A95D89042AF4F1F772F1E87BD2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD5D0DDD4A2F5C127AC1F40C6AB4C495322C526C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE75015476C9B777A88E25E81E2807DFED9DCA487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B920D9987F912C625E18D7A0307042D208FEF9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2458F5DDFA61F85714909BEEFAE1668203AFDD01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C33024E9E5183096658F391603C166280C93B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42ED1CD6B46C748E7E5910B073BA79C696CE2966);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3059CB194AF9DF31AF1EA0B7F29CBD69B39ACA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90CB059498E5C227484445BC944C4A064B1306B);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	Enumerator_tDED3585803C2DA03BD747597137590D1F5013618 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	{
		// Dictionary<int, List<VG_ExternalController>> controllers = new Dictionary<int, List<VG_ExternalController>>();
		Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_0 = (Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE*)il2cpp_codegen_object_new(Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m553532F60B944EAE98C76D77EE5E0DBD57333AAB(L_0, Dictionary_2__ctor_m553532F60B944EAE98C76D77EE5E0DBD57333AAB_RuntimeMethod_var);
		V_0 = L_0;
		// string[] controllerTypes = controllerType.m_externalType.Split(';');
		VG_ControllerProfile_t0BC418F13C7551D51C995CB8708C80D400CF4B9C* L_1 = ___1_controllerType;
		NullCheck(L_1);
		String_t* L_2 = L_1->___m_externalType_7;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)59), 0, NULL);
		V_1 = L_3;
		// foreach (VG_HandSide side in new List<VG_HandSide>() { VG_HandSide.LEFT, VG_HandSide.RIGHT })
		List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* L_4 = (List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F*)il2cpp_codegen_object_new(List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mE75015476C9B777A88E25E81E2807DFED9DCA487(L_4, List_1__ctor_mE75015476C9B777A88E25E81E2807DFED9DCA487_RuntimeMethod_var);
		List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_inline(L_5, (-1), List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_RuntimeMethod_var);
		List_1_tE5A27449E7784421AC7F4AD77EFEE5E0ADD6256F* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_inline(L_6, 1, List_1_Add_mDFBB4708958F52A7240CD51363CD85CA0AF77A7F_RuntimeMethod_var);
		NullCheck(L_6);
		Enumerator_tDED3585803C2DA03BD747597137590D1F5013618 L_7;
		L_7 = List_1_GetEnumerator_mEAC3FC09EF477A95D89042AF4F1F772F1E87BD2F(L_6, List_1_GetEnumerator_mEAC3FC09EF477A95D89042AF4F1F772F1E87BD2F_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD6581875D0125CBF7C1746ACE228C4C0AE2173DD((&V_2), Enumerator_Dispose_mD6581875D0125CBF7C1746ACE228C4C0AE2173DD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0181_1;
			}

IL_0033_1:
			{
				// foreach (VG_HandSide side in new List<VG_HandSide>() { VG_HandSide.LEFT, VG_HandSide.RIGHT })
				int32_t L_8;
				L_8 = Enumerator_get_Current_m84B1BEA7FB0FE865E2D2DC6A509640B93E645FF6_inline((&V_2), Enumerator_get_Current_m84B1BEA7FB0FE865E2D2DC6A509640B93E645FF6_RuntimeMethod_var);
				V_3 = L_8;
				// if (VG_Controller.GetBone(avatarID, side, VG_BoneType.WRIST, out int wristID, out _) == null)
				int32_t L_9 = ___0_avatarID;
				int32_t L_10 = V_3;
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = VG_Controller_GetBone_m45369B718D2AC9732518F56EF9A3360F4A574658(L_9, L_10, 0, (&V_4), (&V_5), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_12)
				{
					goto IL_0181_1;
				}
			}
			{
				// foreach (string controller in controllerTypes)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
				V_6 = L_13;
				V_7 = 0;
				goto IL_0176_1;
			}

IL_005d_1:
			{
				// foreach (string controller in controllerTypes)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_6;
				int32_t L_15 = V_7;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				V_8 = L_17;
				// if (!controllers.ContainsKey(wristID)) controllers[wristID] = new List<VG_ExternalController>();
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_18 = V_0;
				int32_t L_19 = V_4;
				NullCheck(L_18);
				bool L_20;
				L_20 = Dictionary_2_ContainsKey_mFC34D1E5453454FE7184E96F034E8F248044897C(L_18, L_19, Dictionary_2_ContainsKey_mFC34D1E5453454FE7184E96F034E8F248044897C_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_007b_1;
				}
			}
			{
				// if (!controllers.ContainsKey(wristID)) controllers[wristID] = new List<VG_ExternalController>();
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_21 = V_0;
				int32_t L_22 = V_4;
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_23 = (List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062*)il2cpp_codegen_object_new(List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				List_1__ctor_mD5D0DDD4A2F5C127AC1F40C6AB4C495322C526C7(L_23, List_1__ctor_mD5D0DDD4A2F5C127AC1F40C6AB4C495322C526C7_RuntimeMethod_var);
				NullCheck(L_21);
				Dictionary_2_set_Item_m86AA41A2A3E92A9F4939540C3F99D6787C0CA891(L_21, L_22, L_23, Dictionary_2_set_Item_m86AA41A2A3E92A9F4939540C3F99D6787C0CA891_RuntimeMethod_var);
			}

IL_007b_1:
			{
				String_t* L_24 = V_8;
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral2458F5DDFA61F85714909BEEFAE1668203AFDD01, NULL);
				if (L_25)
				{
					goto IL_00d4_1;
				}
			}
			{
				String_t* L_26 = V_8;
				bool L_27;
				L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF90CB059498E5C227484445BC944C4A064B1306B, NULL);
				if (L_27)
				{
					goto IL_00ee_1;
				}
			}
			{
				String_t* L_28 = V_8;
				bool L_29;
				L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral42ED1CD6B46C748E7E5910B073BA79C696CE2966, NULL);
				if (L_29)
				{
					goto IL_0104_1;
				}
			}
			{
				String_t* L_30 = V_8;
				bool L_31;
				L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralA3059CB194AF9DF31AF1EA0B7F29CBD69B39ACA8, NULL);
				if (L_31)
				{
					goto IL_011a_1;
				}
			}
			{
				String_t* L_32 = V_8;
				bool L_33;
				L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral38C33024E9E5183096658F391603C166280C93B6, NULL);
				if (L_33)
				{
					goto IL_0130_1;
				}
			}
			{
				String_t* L_34 = V_8;
				bool L_35;
				L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0B920D9987F912C625E18D7A0307042D208FEF9B, NULL);
				if (L_35)
				{
					goto IL_0146_1;
				}
			}
			{
				goto IL_015c_1;
			}

IL_00d4_1:
			{
				// case "OculusHand": controllers[wristID].Add(new VG_EC_OculusHand(avatarID, side)); break;
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_36 = V_0;
				int32_t L_37 = V_4;
				NullCheck(L_36);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_38;
				L_38 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_36, L_37, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_39 = ___0_avatarID;
				int32_t L_40 = V_3;
				VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* L_41 = (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E*)il2cpp_codegen_object_new(VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E_il2cpp_TypeInfo_var);
				NullCheck(L_41);
				VG_EC_OculusHand__ctor_m3A5B90D050ACB91FD9A3EF288D783058A1ACE08E(L_41, L_39, L_40, (bool)1, NULL);
				NullCheck(L_38);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_38, L_41, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
				// case "OculusHand": controllers[wristID].Add(new VG_EC_OculusHand(avatarID, side)); break;
				goto IL_0170_1;
			}

IL_00ee_1:
			{
				// case "UnityXR": controllers[wristID].Add(new VG_EC_UnityXRHand(avatarID, side)); break;
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_42 = V_0;
				int32_t L_43 = V_4;
				NullCheck(L_42);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_44;
				L_44 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_42, L_43, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_45 = ___0_avatarID;
				int32_t L_46 = V_3;
				VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* L_47 = (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93*)il2cpp_codegen_object_new(VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93_il2cpp_TypeInfo_var);
				NullCheck(L_47);
				VG_EC_UnityXRHand__ctor_mFFDC06D7E8CF299A7AD5B13C568A0059598AC302(L_47, L_45, L_46, NULL);
				NullCheck(L_44);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_44, L_47, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
				// case "UnityXR": controllers[wristID].Add(new VG_EC_UnityXRHand(avatarID, side)); break;
				goto IL_0170_1;
			}

IL_0104_1:
			{
				// case "MouseHand": controllers[wristID].Add(new VG_EC_MouseHand(avatarID, side)); break;
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_48 = V_0;
				int32_t L_49 = V_4;
				NullCheck(L_48);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_50;
				L_50 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_48, L_49, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_51 = ___0_avatarID;
				int32_t L_52 = V_3;
				VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* L_53 = (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607*)il2cpp_codegen_object_new(VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607_il2cpp_TypeInfo_var);
				NullCheck(L_53);
				VG_EC_MouseHand__ctor_m8500635AC5335BEC814846CE21D0555F5F1DEAD3(L_53, L_51, L_52, NULL);
				NullCheck(L_50);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_50, L_53, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
				// case "MouseHand": controllers[wristID].Add(new VG_EC_MouseHand(avatarID, side)); break;
				goto IL_0170_1;
			}

IL_011a_1:
			{
				// case "LeapHand": controllers[wristID].Add(new VG_EC_LeapHand(avatarID, side)); break;
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_54 = V_0;
				int32_t L_55 = V_4;
				NullCheck(L_54);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_56;
				L_56 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_54, L_55, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_57 = ___0_avatarID;
				int32_t L_58 = V_3;
				VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* L_59 = (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901*)il2cpp_codegen_object_new(VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901_il2cpp_TypeInfo_var);
				NullCheck(L_59);
				VG_EC_LeapHand__ctor_m82D134B271EA90D874D096C6C4A27BDA5AB1C76D(L_59, L_57, L_58, NULL);
				NullCheck(L_56);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_56, L_59, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
				// case "LeapHand": controllers[wristID].Add(new VG_EC_LeapHand(avatarID, side)); break;
				goto IL_0170_1;
			}

IL_0130_1:
			{
				// case "SteamHand": controllers[wristID].Add(new VG_EC_SteamHand(avatarID, side)); break;
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_60 = V_0;
				int32_t L_61 = V_4;
				NullCheck(L_60);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_62;
				L_62 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_60, L_61, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_63 = ___0_avatarID;
				int32_t L_64 = V_3;
				VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* L_65 = (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB*)il2cpp_codegen_object_new(VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB_il2cpp_TypeInfo_var);
				NullCheck(L_65);
				VG_EC_SteamHand__ctor_m7BF973C307F8DBB69240A89A1AED71D23A3DF224(L_65, L_63, L_64, NULL);
				NullCheck(L_62);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_62, L_65, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
				// case "SteamHand": controllers[wristID].Add(new VG_EC_SteamHand(avatarID, side)); break;
				goto IL_0170_1;
			}

IL_0146_1:
			{
				// case "UnityInteractionHand": controllers[wristID].Add(new VG_EC_UnityInteractionHand(avatarID, side)); break;
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_66 = V_0;
				int32_t L_67 = V_4;
				NullCheck(L_66);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_68;
				L_68 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_66, L_67, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_69 = ___0_avatarID;
				int32_t L_70 = V_3;
				VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* L_71 = (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678*)il2cpp_codegen_object_new(VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678_il2cpp_TypeInfo_var);
				NullCheck(L_71);
				VG_EC_UnityInteractionHand__ctor_m3B555E35D73F716D17A0B85C20A73BD95A2177A8(L_71, L_69, L_70, NULL);
				NullCheck(L_68);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_68, L_71, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
				// case "UnityInteractionHand": controllers[wristID].Add(new VG_EC_UnityInteractionHand(avatarID, side)); break;
				goto IL_0170_1;
			}

IL_015c_1:
			{
				// controllers[wristID].Add(new VG_EC_GenericHand(avatarID, side));
				Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_72 = V_0;
				int32_t L_73 = V_4;
				NullCheck(L_72);
				List_1_t86E4BC4BECFDD56CC0975E7E3B7EDA83D610F062* L_74;
				L_74 = Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3(L_72, L_73, Dictionary_2_get_Item_mC4AA6CBB621F552D2D378850BBA4E1B9D5E942D3_RuntimeMethod_var);
				int32_t L_75 = ___0_avatarID;
				int32_t L_76 = V_3;
				VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* L_77 = (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3*)il2cpp_codegen_object_new(VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3_il2cpp_TypeInfo_var);
				NullCheck(L_77);
				VG_EC_GenericHand__ctor_m6884A44E6EE76A7690612310CF765D5530FD4B5B(L_77, L_75, L_76, NULL);
				NullCheck(L_74);
				List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_inline(L_74, L_77, List_1_Add_m9A00C734BA262E3D063D57CA13917C71BFF68199_RuntimeMethod_var);
			}

IL_0170_1:
			{
				int32_t L_78 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_78, 1));
			}

IL_0176_1:
			{
				// foreach (string controller in controllerTypes)
				int32_t L_79 = V_7;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_6;
				NullCheck(L_80);
				if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
				{
					goto IL_005d_1;
				}
			}

IL_0181_1:
			{
				// foreach (VG_HandSide side in new List<VG_HandSide>() { VG_HandSide.LEFT, VG_HandSide.RIGHT })
				bool L_81;
				L_81 = Enumerator_MoveNext_m3ED5E61985BE010B6F6F29CE0BE8AD06F42D2BF7((&V_2), Enumerator_MoveNext_m3ED5E61985BE010B6F6F29CE0BE8AD06F42D2BF7_RuntimeMethod_var);
				if (L_81)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_019d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_019d:
	{
		// VG_Controller.RegisterExternalControllers(controllers);
		Dictionary_2_t575C760724E25CDA905C50EE03C5680CAB457BDE* L_82 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		VG_Controller_RegisterExternalControllers_mC07F9C97A1A6F3C874279E1BCFCA6500A805FC3F(L_82, NULL);
		// }
		return;
	}
}
// System.Void VG_ExternalControllerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_ExternalControllerManager__ctor_mCA6C22B4B0F878C634A3C85CF13E1AD15041D01E (VG_ExternalControllerManager_tBEDC98D5ADD3DDF8BF490AE1E23A55ED6CFB8F5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_GenericHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_GenericHand__ctor_m6884A44E6EE76A7690612310CF765D5530FD4B5B (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	{
		// public VG_EC_GenericHand(int avatarID, VG_HandSide side)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// m_zeroOffsets = true; // the generic hand works on the Unity transforms, so it can't use offsets.
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_zeroOffsets_6 = (bool)1;
		// Initialize();
		VG_EC_GenericHand_Initialize_m0C0EFD1DBAA6178A1B62674861ED398A5D4D81E0(__this, NULL);
		// }
		return;
	}
}
// System.Void VG_EC_GenericHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_GenericHand_Initialize_m0C0EFD1DBAA6178A1B62674861ED398A5D4D81E0 (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_mapping = new HandMapping();
		HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F* L_0 = (HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F*)il2cpp_codegen_object_new(HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandMapping__ctor_mB42D1BB0A4C58A80303563AD3778631224AD1914(L_0, NULL);
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2), (void*)L_0);
		// base.Initialize();
		VG_ExternalController_Initialize_m07C47D97025BB99D5B475F227C7B4AE90265B615(__this, NULL);
		// m_enabled = true;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)1;
		// }
		return;
	}
}
// System.Boolean VG_EC_GenericHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_GenericHand_Compute_mB2ED14C52BCA960BAC07225E0297A57EF6036A5B (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// for (int bone = 0; bone < m_mapping.GetNumBones(); bone++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// if (!m_mapping.GetTransform(bone, out Transform pose)) continue;
		VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* L_0 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VG_ExternalControllerMapping_GetTransform_m09AD9A86B1DE043349EA68A3A6AEF94E7EB1021D(L_0, L_1, (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// SetPose(bone, Matrix4x4.TRS(pose.position, pose.rotation, Vector3.one));
		int32_t L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_1;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_5, L_7, L_8, NULL);
		VG_ExternalController_SetPose_mAE7CAE768CA6A154FBA1C8BAF3B44693DA0E8CDC(__this, L_3, L_9, NULL);
	}

IL_0031:
	{
		// for (int bone = 0; bone < m_mapping.GetNumBones(); bone++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		// for (int bone = 0; bone < m_mapping.GetNumBones(); bone++)
		int32_t L_11 = V_0;
		VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE* L_12 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VG_ExternalControllerMapping_GetNumBones_mCBB956194B0A6033CDB1EFE73FF80B5F51697678(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Single VG_EC_GenericHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_GenericHand_GetGrabStrength_mCC4BABF40D3BEAAB50A03376FFC6751DB8A9F19C (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, const RuntimeMethod* method) 
{
	{
		// return 0.0f;
		return (0.0f);
	}
}
// UnityEngine.Color VG_EC_GenericHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_GenericHand_GetConfidence_m7B46446079068885B660F12BC3AB7E2BA67CD2B1 (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, const RuntimeMethod* method) 
{
	{
		// return Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		return L_0;
	}
}
// System.Void VG_EC_GenericHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_GenericHand_HapticPulse_mA7D3CEF9F7BD582E9FD0F92DD2CFDC9BBDEE070D (VG_EC_GenericHand_t7E9D6EB9571D02D4D10A54F1D734611714F8A0D3* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_GenericHand/HandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping_Initialize_m781228F1A671109D518D16C79828C6DA79D0D022 (HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		// m_BoneToTransform = new Dictionary<int, Transform>()
		// {
		//     { 0, Hand_WristRoot },
		//     { 1, Hand_Thumb1 },
		//     { 2, Hand_Thumb2 },
		//     { 3, Hand_Thumb3 },
		//     { 4, Hand_Index1 },
		//     { 5, Hand_Index2 },
		//     { 6, Hand_Index3 },
		//     { 7, Hand_Middle1 },
		//     { 8, Hand_Middle2 },
		//     { 9, Hand_Middle3 },
		//     { 10, Hand_Ring1 },
		//     { 11, Hand_Ring2 },
		//     { 12, Hand_Ring3 },
		//     { 13, Hand_Pinky1 },
		//     { 14, Hand_Pinky2 },
		//     { 15, Hand_Pinky3 }
		// };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_WristRoot_0;
		NullCheck(L_3);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_3, 0, L_4, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_5 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Thumb1_1;
		NullCheck(L_5);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_5, 1, L_6, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_7 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Thumb2_2;
		NullCheck(L_7);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_7, 2, L_8, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_9 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Thumb3_3;
		NullCheck(L_9);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_9, 3, L_10, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_11 = L_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Index1_4;
		NullCheck(L_11);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_11, 4, L_12, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_13 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Index2_5;
		NullCheck(L_13);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_13, 5, L_14, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_15 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Index3_6;
		NullCheck(L_15);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_15, 6, L_16, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_17 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Middle1_7;
		NullCheck(L_17);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_17, 7, L_18, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_19 = L_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Middle2_8;
		NullCheck(L_19);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_19, 8, L_20, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_21 = L_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Middle3_9;
		NullCheck(L_21);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_21, ((int32_t)9), L_22, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_23 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Ring1_10;
		NullCheck(L_23);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_23, ((int32_t)10), L_24, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_25 = L_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Ring2_11;
		NullCheck(L_25);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_25, ((int32_t)11), L_26, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_27 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Ring3_12;
		NullCheck(L_27);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_27, ((int32_t)12), L_28, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_29 = L_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Pinky1_13;
		NullCheck(L_29);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_29, ((int32_t)13), L_30, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_31 = L_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Pinky2_14;
		NullCheck(L_31);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_31, ((int32_t)14), L_32, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_33 = L_31;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_Pinky3_15;
		NullCheck(L_33);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_33, ((int32_t)15), L_34, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_33);
		// }
		return;
	}
}
// System.Void VG_EC_GenericHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_mB42D1BB0A4C58A80303563AD3778631224AD1914 (HandMapping_t45665FEA64C802BE9E7AC7F411395191AAB12D5F* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_LeapHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_LeapHand__ctor_m82D134B271EA90D874D096C6C4A27BDA5AB1C76D (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A827DEC37627E6CBD319DE747C853DF2B5E65EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VG_EC_LeapHand(int avatarID, VG_HandSide side)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// VG_Debug.LogError("You want a LeapHand controller, but have not defined VG_USE_LEAP_CONTROLLER at the top of this file.");
		il2cpp_codegen_runtime_class_init_inline(VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		VG_Debug_LogError_m848B60120887C125385F1AD441FF86B8CBF9DCDA(_stringLiteral9A827DEC37627E6CBD319DE747C853DF2B5E65EC, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// m_enabled = false;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)0;
		// }
		return;
	}
}
// System.Void VG_EC_LeapHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_LeapHand_Initialize_m97289031AF3963115DC32CACC8A483DA4A8611DC (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean VG_EC_LeapHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_LeapHand_Compute_mEAA4F74D41131D7C94497ADA02DCEA4528293D86 (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Single VG_EC_LeapHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_LeapHand_GetGrabStrength_m462595527BFCAF9671CE880FA18A2EAA54572E20 (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, const RuntimeMethod* method) 
{
	{
		// return 0.0f;
		return (0.0f);
	}
}
// UnityEngine.Color VG_EC_LeapHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_LeapHand_GetConfidence_mB6E27B5E4E6AA2F5A94527DD67FCB9A0496B50D4 (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, const RuntimeMethod* method) 
{
	{
		// return Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		return L_0;
	}
}
// System.Void VG_EC_LeapHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_LeapHand_HapticPulse_m20421127C0B1C2877B95CE1B0FE562BA19089B73 (VG_EC_LeapHand_t9B3436C83B192B656FA1FAC76A3688D97ED7B901* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_LeapHand/HandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping_Initialize_mEE389C5B411D3F56B08DEBB5652E84A86100AEC6 (HandMapping_t053E55C1D74E18854A654FC667FEAAA989E0F25A* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		//             m_BoneToTransform = new Dictionary<int, Transform>()
		//             {
		// #if VG_USE_LEAP_CONTROLLER
		//             { 0, Hand_WristRoot },
		//             { LeapBoneToInt(0, 0), null },
		//             { LeapBoneToInt(0, 1), Hand_Thumb1 },
		//             { LeapBoneToInt(0, 2), Hand_Thumb2 },
		//             { LeapBoneToInt(0, 3), Hand_Thumb3 },
		//             { LeapBoneToInt(1, 0), null },
		//             { LeapBoneToInt(1, 1), Hand_Index1 },
		//             { LeapBoneToInt(1, 2), Hand_Index2 },
		//             { LeapBoneToInt(1, 3), Hand_Index3 },
		//             { LeapBoneToInt(2, 0), null },
		//             { LeapBoneToInt(2, 1), Hand_Middle1 },
		//             { LeapBoneToInt(2, 2), Hand_Middle2 },
		//             { LeapBoneToInt(2, 3), Hand_Middle3 },
		//             { LeapBoneToInt(3, 0), null },
		//             { LeapBoneToInt(3, 1), Hand_Ring1 },
		//             { LeapBoneToInt(3, 2), Hand_Ring2 },
		//             { LeapBoneToInt(3, 3), Hand_Ring3 },
		//             { LeapBoneToInt(4, 0), null },
		//             { LeapBoneToInt(4, 1), Hand_Pinky1 },
		//             { LeapBoneToInt(4, 2), Hand_Pinky2 },
		//             { LeapBoneToInt(4, 3), Hand_Pinky3 }
		// #endif
		//             };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_2);
		// m_BoneToParent = new Dictionary<int, int>()
		// {
		// };
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_3, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToParent_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToParent_17), (void*)L_3);
		// }
		return;
	}
}
// System.Void VG_EC_LeapHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_mCC692CA7C14E24914D23BA2AA9540106170E9DA7 (HandMapping_t053E55C1D74E18854A654FC667FEAAA989E0F25A* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_MouseHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_MouseHand__ctor_m8500635AC5335BEC814846CE21D0555F5F1DEAD3 (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	{
		// private int filter = 15;
		__this->___filter_13 = ((int32_t)15);
		// private float depth = .5f;
		__this->___depth_14 = (0.5f);
		// public VG_EC_MouseHand(int avatarID, VG_HandSide side)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// m_enabled = true;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)1;
		// Initialize();
		VG_EC_MouseHand_Initialize_m8E872EF28F482347C9ECEBA4E40583D065E42DCC(__this, NULL);
		// }
		return;
	}
}
// System.Void VG_EC_MouseHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_MouseHand_Initialize_m8E872EF28F482347C9ECEBA4E40583D065E42DCC (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD26CD0ED8710771C857952761F473C49943301);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_mapping = new HandMapping();
		HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D* L_0 = (HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D*)il2cpp_codegen_object_new(HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandMapping__ctor_mB86A289D51E23DAF5C21A723CC1BFAF915FEC615(L_0, NULL);
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2), (void*)L_0);
		// base.Initialize();
		VG_ExternalController_Initialize_m07C47D97025BB99D5B475F227C7B4AE90265B615(__this, NULL);
		// if (Camera.main.stereoTargetEye != StereoTargetEyeMask.None)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538(L_1, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogWarning("VG_EC_MouseHand uses single GameView camera, but a stereo camera is activated. Deactivating Stereo view.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral3FD26CD0ED8710771C857952761F473C49943301, NULL);
		// Camera.main.stereoTargetEye = StereoTargetEyeMask.None;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(L_3, 0, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Boolean VG_EC_MouseHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_MouseHand_Compute_m2DCBF7DAC4E91EE28925E597F827874E2AC36AD0 (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B5_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_2;
	memset((&G_B11_2), 0, sizeof(G_B11_2));
	{
		// if (!m_enabled) return false;
		bool L_0 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (!m_enabled) return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (Input.GetMouseButton(m_handType == VirtualGrasp.VG_HandSide.LEFT ? 0 : 1)) mouse_held = Mathf.Min(filter, mouse_held + 1);
		int32_t L_1 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_0017;
	}

IL_0016:
	{
		G_B5_0 = 0;
	}

IL_0017:
	{
		bool L_2;
		L_2 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(G_B5_0, NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if (Input.GetMouseButton(m_handType == VirtualGrasp.VG_HandSide.LEFT ? 0 : 1)) mouse_held = Mathf.Min(filter, mouse_held + 1);
		int32_t L_3 = __this->___filter_13;
		int32_t L_4 = __this->___mouse_held_12;
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		__this->___mouse_held_12 = L_5;
		goto IL_004d;
	}

IL_0039:
	{
		// else mouse_held = Mathf.Max(0, mouse_held - 1);
		int32_t L_6 = __this->___mouse_held_12;
		int32_t L_7;
		L_7 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		__this->___mouse_held_12 = L_7;
	}

IL_004d:
	{
		// depth = Mathf.Clamp(depth + Input.mouseScrollDelta.y / 10.0f, .5f, 3.0f);
		float L_8 = __this->___depth_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_8, ((float)(L_10/(10.0f))))), (0.5f), (3.0f), NULL);
		__this->___depth_14 = L_11;
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_12);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_14;
		L_14 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_12, L_13, NULL);
		V_0 = L_14;
		// Quaternion q = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		V_1 = L_17;
		// Vector3 p = ray.origin + depth * ray.direction + q * (m_handType == VirtualGrasp.VG_HandSide.LEFT ? Vector3.left : Vector3.right) * .1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		float L_19 = __this->___depth_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_1;
		int32_t L_24 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1;
		G_B9_0 = L_23;
		G_B9_1 = L_22;
		if ((((int32_t)L_24) == ((int32_t)(-1))))
		{
			G_B10_0 = L_23;
			G_B10_1 = L_22;
			goto IL_00c8;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		G_B11_0 = L_25;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00cd;
	}

IL_00c8:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		G_B11_0 = L_26;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00cd:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(G_B11_1, G_B11_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B11_2, L_28, NULL);
		V_2 = L_29;
		// SetPose(0, Matrix4x4.TRS(p, q, Vector3.one));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33;
		L_33 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_30, L_31, L_32, NULL);
		VG_ExternalController_SetPose_mAE7CAE768CA6A154FBA1C8BAF3B44693DA0E8CDC(__this, 0, L_33, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Single VG_EC_MouseHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_MouseHand_GetGrabStrength_m4E6DCA12AA5793F06A8EB099F2AB79F22DA5F62F (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, const RuntimeMethod* method) 
{
	{
		// return (float) mouse_held / filter;
		int32_t L_0 = __this->___mouse_held_12;
		int32_t L_1 = __this->___filter_13;
		return ((float)(((float)L_0)/((float)L_1)));
	}
}
// UnityEngine.Color VG_EC_MouseHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_MouseHand_GetConfidence_m830B14D72FFA4CEDE1D5C3126C130C7598D43566 (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, const RuntimeMethod* method) 
{
	{
		// return Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		return L_0;
	}
}
// System.Void VG_EC_MouseHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_MouseHand_HapticPulse_m86D820FDFA58447AE5BF3363DC126CAD8BD0D207 (VG_EC_MouseHand_t194A3FDD0B07413281BC8374156AC869BED43607* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_MouseHand/HandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping_Initialize_mFE2244CED5C45D8ED9A75787BFCC98EBC8FDA869 (HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		// m_BoneToTransform = new Dictionary<int, Transform>()
		// {
		//     { 0, Hand_WristRoot }
		// };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_WristRoot_0;
		NullCheck(L_3);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_3, 0, L_4, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_3);
		// }
		return;
	}
}
// System.Void VG_EC_MouseHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_mB86A289D51E23DAF5C21A723CC1BFAF915FEC615 (HandMapping_tB498A10C1FF119B6C0AAE4952ADC065D7E54A95D* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_OculusHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_OculusHand__ctor_m3A5B90D050ACB91FD9A3EF288D783058A1ACE08E (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, int32_t ___0_avatarID, int32_t ___1_side, bool ___2_verbose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA095C08E7E65B29FD3A02D947B5CD8E1F57220);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VG_EC_OculusHand(int avatarID, VG_HandSide side, bool verbose = true)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// if (verbose) VG_Debug.LogError("You want an OculusHand controller, but have not defined VG_USE_OCULUS_CONTROLLER at the top of this file.");
		bool L_2 = ___2_verbose;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (verbose) VG_Debug.LogError("You want an OculusHand controller, but have not defined VG_USE_OCULUS_CONTROLLER at the top of this file.");
		il2cpp_codegen_runtime_class_init_inline(VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		VG_Debug_LogError_m848B60120887C125385F1AD441FF86B8CBF9DCDA(_stringLiteralCEA095C08E7E65B29FD3A02D947B5CD8E1F57220, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
	}

IL_0022:
	{
		// m_enabled = false;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)0;
		// }
		return;
	}
}
// System.Void VG_EC_OculusHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_OculusHand_Initialize_m65D27A5BCC4A5A35BB086FC2641910C936582C5F (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Single VG_EC_OculusHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_OculusHand_GetGrabStrength_mC440C55299282C3F6F1D0CF5FBA2D00D150B029A (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, const RuntimeMethod* method) 
{
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Boolean VG_EC_OculusHand::IsTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_OculusHand_IsTracking_mA8D815AB95C7DA55FB533A19C73CCD177DA2066E (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean VG_EC_OculusHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_OculusHand_Compute_m179ABB69E7CE98EC535EB1A2FC891DF38E48573E (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_enabled) return false;
		bool L_0 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (!m_enabled) return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (!m_initialized) { Initialize(); return false; }
		bool L_1 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_initialized_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (!m_initialized) { Initialize(); return false; }
		VG_EC_OculusHand_Initialize_m65D27A5BCC4A5A35BB086FC2641910C936582C5F(__this, NULL);
		// if (!m_initialized) { Initialize(); return false; }
		return (bool)0;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Color VG_EC_OculusHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_OculusHand_GetConfidence_mFC29EBD08E142566F577D56DACCC5916D13AA8EC (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, const RuntimeMethod* method) 
{
	{
		// return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_0;
	}
}
// System.Void VG_EC_OculusHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_OculusHand_HapticPulse_m3F6E9821B9F19524457FB947B387C1135C0C454B (VG_EC_OculusHand_t9BE3BB163BAB890C27EFE39452F5AA027CB9037E* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_OculusHand/HandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping_Initialize_m79B87FAAB5039758BC6DE22B58000B8BC06720F0 (HandMapping_t7B627F80242DFC278EB132FB47DCFD1D9097B89D* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		//             m_BoneToTransform = new Dictionary<int, Transform>()
		//             {
		// #if VG_USE_OCULUS_CONTROLLER
		//             { (int)OVRPlugin.BoneId.Hand_WristRoot, Hand_WristRoot },
		//             { (int)OVRPlugin.BoneId.Hand_ForearmStub, null }, // this is a child of wrist, but towards the arm
		//             { (int)OVRPlugin.BoneId.Hand_Thumb0, null },
		//             { (int)OVRPlugin.BoneId.Hand_Thumb1, Hand_Thumb1 },
		//             { (int)OVRPlugin.BoneId.Hand_Thumb2, Hand_Thumb2 },
		//             { (int)OVRPlugin.BoneId.Hand_Thumb3, Hand_Thumb3 },
		//             { (int)OVRPlugin.BoneId.Hand_ThumbTip, null },
		//             { (int)OVRPlugin.BoneId.Hand_Index1, Hand_Index1 },
		//             { (int)OVRPlugin.BoneId.Hand_Index2, Hand_Index2 },
		//             { (int)OVRPlugin.BoneId.Hand_Index3, Hand_Index3 },
		//             { (int)OVRPlugin.BoneId.Hand_IndexTip, null },
		//             { (int)OVRPlugin.BoneId.Hand_Middle1, Hand_Middle1 },
		//             { (int)OVRPlugin.BoneId.Hand_Middle2, Hand_Middle2 },
		//             { (int)OVRPlugin.BoneId.Hand_Middle3, Hand_Middle3 },
		//             { (int)OVRPlugin.BoneId.Hand_MiddleTip, null },
		//             { (int)OVRPlugin.BoneId.Hand_Ring1, Hand_Ring1 },
		//             { (int)OVRPlugin.BoneId.Hand_Ring2, Hand_Ring2 },
		//             { (int)OVRPlugin.BoneId.Hand_Ring3, Hand_Ring3 },
		//             { (int)OVRPlugin.BoneId.Hand_RingTip, null },
		//             { (int)OVRPlugin.BoneId.Hand_Pinky0, null },
		//             { (int)OVRPlugin.BoneId.Hand_Pinky1, Hand_Pinky1 },
		//             { (int)OVRPlugin.BoneId.Hand_Pinky2, Hand_Pinky2 },
		//             { (int)OVRPlugin.BoneId.Hand_Pinky3, Hand_Pinky3 },
		//             { (int)OVRPlugin.BoneId.Hand_PinkyTip, null }
		// #endif
		//             };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_2);
		// m_BoneToParent = new Dictionary<int, int>()
		// {
		// };
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_3, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToParent_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToParent_17), (void*)L_3);
		// }
		return;
	}
}
// System.Void VG_EC_OculusHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_m20F38E05BBB88E76956412E5A6199C91924295D1 (HandMapping_t7B627F80242DFC278EB132FB47DCFD1D9097B89D* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_SteamHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_SteamHand__ctor_m7BF973C307F8DBB69240A89A1AED71D23A3DF224 (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9584B9E35B5CE1D7FA7CC93C1452AD02E81AC329);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VG_EC_SteamHand(int avatarID, VG_HandSide side)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// VG_Debug.LogError("You want a SteamVR controller, but have not defined VG_USE_STEAMVR_CONTROLLER at the top of this file.");
		il2cpp_codegen_runtime_class_init_inline(VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		VG_Debug_LogError_m848B60120887C125385F1AD441FF86B8CBF9DCDA(_stringLiteral9584B9E35B5CE1D7FA7CC93C1452AD02E81AC329, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// m_enabled = false;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)0;
		// }
		return;
	}
}
// System.Void VG_EC_SteamHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_SteamHand_Initialize_m8FD7943571427754D4519CBDC6287643DC9BEBAD (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Single VG_EC_SteamHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_SteamHand_GetGrabStrength_m57FB312BE5A761FDEEDCFB795F91C8BE32346221 (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, const RuntimeMethod* method) 
{
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Boolean VG_EC_SteamHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_SteamHand_Compute_m839D4F7CCBCE4B7642B3239BA79A9BD8C41DBDFF (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void VG_EC_SteamHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_SteamHand_HapticPulse_mD1FE9513BB91485FD842D1D1BF9606630777B0D2 (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Color VG_EC_SteamHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_SteamHand_GetConfidence_mE8DD99F0C98D7D0B09D9AB1A0BF5D4BAB0844136 (VG_EC_SteamHand_t15C8E6B5838B9FD16AD967E600092E76DEEE63AB* __this, const RuntimeMethod* method) 
{
	{
		// return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_SteamHand/SteamHandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamHandMapping_Initialize_m1D0E238BAD68FDE8C3B755DB0AB491D37527800F (SteamHandMapping_tE83D4F222743091CA7CD0E6CFD0A6CA20FBA7462* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		//             m_BoneToTransform = new Dictionary<int, Transform>()
		//             {
		// #if VG_USE_STEAMVR_CONTROLLER
		//                 { SteamVR_Skeleton_JointIndexes.root, null },
		//                 { SteamVR_Skeleton_JointIndexes.wrist, Hand_WristRoot },
		//                 { SteamVR_Skeleton_JointIndexes.thumbProximal, Hand_Thumb1 },
		//                 { SteamVR_Skeleton_JointIndexes.thumbMiddle, Hand_Thumb2 },
		//                 { SteamVR_Skeleton_JointIndexes.thumbDistal, Hand_Thumb3 },
		//                 { SteamVR_Skeleton_JointIndexes.thumbTip, null },
		//                 { SteamVR_Skeleton_JointIndexes.indexMetacarpal, null },
		//                 { SteamVR_Skeleton_JointIndexes.indexProximal, Hand_Index1 },
		//                 { SteamVR_Skeleton_JointIndexes.indexMiddle, Hand_Index2 },
		//                 { SteamVR_Skeleton_JointIndexes.indexDistal, Hand_Index3 },
		//                 { SteamVR_Skeleton_JointIndexes.indexTip, null },
		//                 { SteamVR_Skeleton_JointIndexes.middleMetacarpal, null },
		//                 { SteamVR_Skeleton_JointIndexes.middleProximal, Hand_Middle1 },
		//                 { SteamVR_Skeleton_JointIndexes.middleMiddle, Hand_Middle2 },
		//                 { SteamVR_Skeleton_JointIndexes.middleDistal, Hand_Middle3 },
		//                 { SteamVR_Skeleton_JointIndexes.middleTip, null },
		//                 { SteamVR_Skeleton_JointIndexes.ringMetacarpal, null },
		//                 { SteamVR_Skeleton_JointIndexes.ringProximal, Hand_Ring1 },
		//                 { SteamVR_Skeleton_JointIndexes.ringMiddle, Hand_Ring2 },
		//                 { SteamVR_Skeleton_JointIndexes.ringDistal, Hand_Ring3 },
		//                 { SteamVR_Skeleton_JointIndexes.ringTip, null },
		//                 { SteamVR_Skeleton_JointIndexes.pinkyMetacarpal, null },
		//                 { SteamVR_Skeleton_JointIndexes.pinkyProximal, Hand_Pinky1 },
		//                 { SteamVR_Skeleton_JointIndexes.pinkyMiddle, Hand_Pinky2 },
		//                 { SteamVR_Skeleton_JointIndexes.pinkyDistal, Hand_Pinky3 },
		//                 { SteamVR_Skeleton_JointIndexes.pinkyTip, null }
		// #endif
		//             };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_2);
		// m_BoneToParent = new Dictionary<int, int>()
		// {
		// };
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_3, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToParent_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToParent_17), (void*)L_3);
		// }
		return;
	}
}
// System.Void VG_EC_SteamHand/SteamHandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamHandMapping__ctor_m55C2C26E050293092A088E51A32B556EB7A08F15 (SteamHandMapping_tE83D4F222743091CA7CD0E6CFD0A6CA20FBA7462* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_UnityInteractionHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityInteractionHand__ctor_m3B555E35D73F716D17A0B85C20A73BD95A2177A8 (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF524F190B83E447F56A3D5CDB8604356D5951150);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VG_EC_UnityInteractionHand(int avatarID, VG_HandSide side)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// m_enabled = true;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)1;
		// VG_Debug.LogError("You want a Action-based Interaction controller, but have not defined VG_USE_UNITYINPUT_HAND at the top of this file.");
		il2cpp_codegen_runtime_class_init_inline(VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		VG_Debug_LogError_m848B60120887C125385F1AD441FF86B8CBF9DCDA(_stringLiteralF524F190B83E447F56A3D5CDB8604356D5951150, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// m_enabled = false;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)0;
		// }
		return;
	}
}
// System.Void VG_EC_UnityInteractionHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityInteractionHand_Initialize_m8F26A75E850D3EEA7EF230F92FE29F716DF73327 (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean VG_EC_UnityInteractionHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_UnityInteractionHand_Compute_m90FD30BA6E7DBA51FD974A1FBC21608D33851B6B (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Single VG_EC_UnityInteractionHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_UnityInteractionHand_GetGrabStrength_mF463DF2E79064F14347E531EC4A081974656A3E9 (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, const RuntimeMethod* method) 
{
	{
		// float trigger = 0.0f;
		// return trigger;
		return (0.0f);
	}
}
// UnityEngine.Color VG_EC_UnityInteractionHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_UnityInteractionHand_GetConfidence_m644F823934220688DDA622503E82C70DDD178220 (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, const RuntimeMethod* method) 
{
	{
		// return Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		return L_0;
	}
}
// System.Void VG_EC_UnityInteractionHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityInteractionHand_HapticPulse_mD73CBB120F96D29D4C0B93BF29A00242120EBB6A (VG_EC_UnityInteractionHand_tF391CCF21399709C485C205AAED53CE5DF4A7678* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_UnityInteractionHand/HandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping_Initialize_mF81381499A5A283D45F3897D9F37698C778136D6 (HandMapping_tAF09D3E7D0E0255309C1AA7AF67E9D0640EC141C* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		// m_BoneToTransform = new Dictionary<int, Transform>()
		// {
		//     { 0, Hand_WristRoot }
		// };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_WristRoot_0;
		NullCheck(L_3);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_3, 0, L_4, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_3);
		// }
		return;
	}
}
// System.Void VG_EC_UnityInteractionHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_m4C74AEE1F4291FA20E6FBF5152EC492646A8188C (HandMapping_tAF09D3E7D0E0255309C1AA7AF67E9D0640EC141C* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_UnityXRHand::.ctor(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityXRHand__ctor_mFFDC06D7E8CF299A7AD5B13C568A0059598AC302 (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	{
		// public VG_EC_UnityXRHand(int avatarID, VG_HandSide side)
		VG_ExternalController__ctor_m38D030D5D64B9C6187EE9307865C1EF1365FCB72(__this, NULL);
		// m_avatarID = avatarID;
		int32_t L_0 = ___0_avatarID;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_avatarID_0 = L_0;
		// m_handType = side;
		int32_t L_1 = ___1_side;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1 = L_1;
		// m_enabled = true;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3 = (bool)1;
		// Initialize();
		VG_EC_UnityXRHand_Initialize_mD6EA353293BC4089B11D7AA79C56EC58CBE6ACCE(__this, NULL);
		// }
		return;
	}
}
// System.Void VG_EC_UnityXRHand::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityXRHand_Initialize_mD6EA353293BC4089B11D7AA79C56EC58CBE6ACCE (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_mapping = new HandMapping();
		HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288* L_0 = (HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288*)il2cpp_codegen_object_new(HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandMapping__ctor_m2C22ED1EF441A85CE4F918E8F7A873D77397B915(L_0, NULL);
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_mapping_2), (void*)L_0);
		// base.Initialize();
		VG_ExternalController_Initialize_m07C47D97025BB99D5B475F227C7B4AE90265B615(__this, NULL);
		// m_initialized = true;
		((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_initialized_4 = (bool)1;
		// }
		return;
	}
}
// System.Boolean VG_EC_UnityXRHand::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_EC_UnityXRHand_Compute_m2790C0AFBAEE2A03A2609D5467C6F3D6E05D6A25 (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* G_B7_0 = NULL;
	VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* G_B8_1 = NULL;
	{
		// if (!m_enabled) return false;
		bool L_0 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_enabled_3;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (!m_enabled) return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (!m_initialized) { Initialize(); return false; }
		bool L_1 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_initialized_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (!m_initialized) { Initialize(); return false; }
		VG_EC_UnityXRHand_Initialize_mD6EA353293BC4089B11D7AA79C56EC58CBE6ACCE(__this, NULL);
		// if (!m_initialized) { Initialize(); return false; }
		return (bool)0;
	}

IL_001a:
	{
		// if (!m_device.isValid)
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_2 = (&__this->___m_device_12);
		bool L_3;
		L_3 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_2, NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		// m_device = InputDevices.GetDeviceAtXRNode(m_handType == VG_HandSide.LEFT ? XRNode.LeftHand : XRNode.RightHand);
		int32_t L_4 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_handType_1;
		G_B6_0 = __this;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			G_B7_0 = __this;
			goto IL_0034;
		}
	}
	{
		G_B8_0 = 5;
		G_B8_1 = G_B6_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B8_0 = 4;
		G_B8_1 = G_B7_0;
	}

IL_0035:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5;
		L_5 = InputDevices_GetDeviceAtXRNode_m3D322E7D1FFDA9C4D53E6B944E636C39B7A9592B(G_B8_0, NULL);
		NullCheck(G_B8_1);
		G_B8_1->___m_device_12 = L_5;
		// return false;
		return (bool)0;
	}

IL_0041:
	{
		// if (m_device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 p) &&
		//     m_device.TryGetFeatureValue(CommonUsages.deviceRotation, out Quaternion q))
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6 = (&__this->___m_device_12);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_7 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___devicePosition_19;
		bool L_8;
		L_8 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_6, L_7, (&V_0), NULL);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_9 = (&__this->___m_device_12);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_10 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceRotation_44;
		bool L_11;
		L_11 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_9, L_10, (&V_1), NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// SetPose(0, Matrix4x4.TRS(p, q, Vector3.one));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_12, L_13, L_14, NULL);
		VG_ExternalController_SetPose_mAE7CAE768CA6A154FBA1C8BAF3B44693DA0E8CDC(__this, 0, L_15, NULL);
		// return true;
		return (bool)1;
	}

IL_007e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Single VG_EC_UnityXRHand::GetGrabStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VG_EC_UnityXRHand_GetGrabStrength_m5A83CBD355578993DFAA136D282A3CBE5CFA6741 (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!m_initialized || !m_device.isValid) return 0.0f;
		bool L_0 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_initialized_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (&__this->___m_device_12);
		bool L_2;
		L_2 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		// if (!m_initialized || !m_device.isValid) return 0.0f;
		return (0.0f);
	}

IL_001b:
	{
		// float trigger = 0.0f;
		V_0 = (0.0f);
		// switch (VG_Controller.GetGraspButton())
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = VG_Controller_GetGraspButton_m535D91CEAEB8C1639B9F0ADDA34315FBE44B961D(NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_003b:
	{
		// m_device.TryGetFeatureValue(CommonUsages.trigger, out trigger); break;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_5 = (&__this->___m_device_12);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_6 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
		bool L_7;
		L_7 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_5, L_6, (&V_0), NULL);
		// m_device.TryGetFeatureValue(CommonUsages.trigger, out trigger); break;
		goto IL_0093;
	}

IL_0050:
	{
		// m_device.TryGetFeatureValue(CommonUsages.grip, out trigger); break;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_8 = (&__this->___m_device_12);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_9 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_10;
		L_10 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_8, L_9, (&V_0), NULL);
		// m_device.TryGetFeatureValue(CommonUsages.grip, out trigger); break;
		goto IL_0093;
	}

IL_0065:
	{
		// m_device.TryGetFeatureValue(CommonUsages.trigger, out trigger);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_11 = (&__this->___m_device_12);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_12 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
		bool L_13;
		L_13 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_11, L_12, (&V_0), NULL);
		// m_device.TryGetFeatureValue(CommonUsages.grip, out float trigger2);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_14 = (&__this->___m_device_12);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_15 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_16;
		L_16 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_14, L_15, (&V_1), NULL);
		// trigger = Mathf.Max(trigger, trigger2);
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19;
		L_19 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_17, L_18, NULL);
		V_0 = L_19;
	}

IL_0093:
	{
		// return trigger;
		float L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Color VG_EC_UnityXRHand::GetConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_EC_UnityXRHand_GetConfidence_mF7EAB5CCD9E2AC6E903FFABCEB843FE1B3E5E970 (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, const RuntimeMethod* method) 
{
	{
		// return Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		return L_0;
	}
}
// System.Void VG_EC_UnityXRHand::HapticPulse(VirtualGrasp.VG_HandStatus,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_EC_UnityXRHand_HapticPulse_mB5587E35CC83062130A3A39B78728EEB89A6C3C0 (VG_EC_UnityXRHand_t404432281CDB893FB73D45DF8BD7960927FBBD93* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, float ___1_amplitude, float ___2_duration, int32_t ___3_finger, const RuntimeMethod* method) 
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!m_initialized || !m_device.isValid) return;
		bool L_0 = ((VG_ExternalController_t173160D6A9B793E1D388FF09C5BF96419C1BAB2E*)__this)->___m_initialized_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (&__this->___m_device_12);
		bool L_2;
		L_2 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// if (!m_initialized || !m_device.isValid) return;
		return;
	}

IL_0016:
	{
		// if (m_device.TryGetHapticCapabilities(out capabilities) && capabilities.supportsImpulse)
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (&__this->___m_device_12);
		bool L_4;
		L_4 = InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		bool L_5;
		L_5 = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C((&V_0), NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// m_device.SendHapticImpulse(0, amplitude, duration);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6 = (&__this->___m_device_12);
		float L_7 = ___1_amplitude;
		float L_8 = ___2_duration;
		bool L_9;
		L_9 = InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B(L_6, 0, L_7, L_8, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_EC_UnityXRHand/HandMapping::Initialize(System.Int32,VirtualGrasp.VG_HandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping_Initialize_mD203A16574C3FAB207F3C12BA10A84787B0CB3EC (HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288* __this, int32_t ___0_avatarID, int32_t ___1_side, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(avatarID, side);
		int32_t L_0 = ___0_avatarID;
		int32_t L_1 = ___1_side;
		VG_ExternalControllerMapping_Initialize_m1F621EC8A32558FA335ECAB32B325B45A82BDFCB(__this, L_0, L_1, NULL);
		// m_BoneToTransform = new Dictionary<int, Transform>()
		// {
		//     { 0, Hand_WristRoot }
		// };
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_2 = (Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66*)il2cpp_codegen_object_new(Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D(L_2, Dictionary_2__ctor_m23593AB98A74ACD79FE6269B8E55E4E60507A78D_RuntimeMethod_var);
		Dictionary_2_tA1AE9699123F79A0AE2FD6155C645DB498DDDE66* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___Hand_WristRoot_0;
		NullCheck(L_3);
		Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239(L_3, 0, L_4, Dictionary_2_Add_m83AFDE045B3D65BB058DD8AC26FFB77D0CB75239_RuntimeMethod_var);
		((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((VG_ExternalControllerMapping_tD1CA60AF38C07EB5EC7B9724593B1A23249EB6DE*)__this)->___m_BoneToTransform_16), (void*)L_3);
		// }
		return;
	}
}
// System.Void VG_EC_UnityXRHand/HandMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMapping__ctor_m2C22ED1EF441A85CE4F918E8F7A873D77397B915 (HandMapping_tBCA82FFD2DE058E4810E68987C1F5A160F650288* __this, const RuntimeMethod* method) 
{
	{
		VG_ExternalControllerMapping__ctor_mADF8950BD2BC9EBD882C0CE2F9366AF82C91EC89(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_GraspEditor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_Start_mE3A655A453D9B26343F0AF427A25360A17BE26C5 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_AddGrasp_mF248F81E59060B8DF6FA61FA2914C4C410E3D9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_DeleteAllGrasp_mCB969B247B90620EB1CAED309BC248A5F2899685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_DeleteGrasp_m1F72C6311DF798ACB5F62A23C5C33C2795AD5B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_StepGrasp_m9A50248E0F0267EBB39646DE16A84E459FDEF4E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_ToggleInteraction_m6E7A3524B1AD6D2C8D45731A9B74E359C0D1C556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_ValidateAddGrasp_m86B5D590946998762C967041F7FD4643A0FCCDBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_ValidateDeleteAllGrasp_m8642377A3588579B729DB29CDB9011E607D32D35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_ValidateDeleteGrasp_mB8AC02CE73CBD7D5ACD07100068FE9B78B6F51CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_ValidateStepGrasp_m7DD625C988120EFE3735F0A24A20970492D6F983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_GraspEditor_ValidateToggleInteraction_mB77F83FC9F8B666D37FD3DC35BF56FBC7A10F57D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_containers.Add(new ButtonContainer(m_addGraspButton, ValidateAddGrasp, AddGrasp));
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_0 = __this->___m_containers_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_addGraspButton_5;
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_2 = (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD*)il2cpp_codegen_object_new(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179(L_2, __this, (intptr_t)((void*)VG_GraspEditor_ValidateAddGrasp_m86B5D590946998762C967041F7FD4643A0FCCDBD_RuntimeMethod_var), NULL);
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_3 = (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246*)il2cpp_codegen_object_new(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B(L_3, __this, (intptr_t)((void*)VG_GraspEditor_AddGrasp_mF248F81E59060B8DF6FA61FA2914C4C410E3D9CB_RuntimeMethod_var), NULL);
		ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_4 = (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8*)il2cpp_codegen_object_new(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D(L_4, L_1, L_2, L_3, NULL);
		NullCheck(L_0);
		List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_inline(L_0, L_4, List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var);
		// m_containers.Add(new ButtonContainer(m_toggleInteractionButton, ValidateToggleInteraction, ToggleInteraction));
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_5 = __this->___m_containers_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_toggleInteractionButton_6;
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_7 = (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD*)il2cpp_codegen_object_new(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179(L_7, __this, (intptr_t)((void*)VG_GraspEditor_ValidateToggleInteraction_mB77F83FC9F8B666D37FD3DC35BF56FBC7A10F57D_RuntimeMethod_var), NULL);
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_8 = (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246*)il2cpp_codegen_object_new(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B(L_8, __this, (intptr_t)((void*)VG_GraspEditor_ToggleInteraction_m6E7A3524B1AD6D2C8D45731A9B74E359C0D1C556_RuntimeMethod_var), NULL);
		ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_9 = (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8*)il2cpp_codegen_object_new(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D(L_9, L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_inline(L_5, L_9, List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var);
		// m_containers.Add(new ButtonContainer(m_stepGraspButton, ValidateStepGrasp, StepGrasp));
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_10 = __this->___m_containers_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___m_stepGraspButton_7;
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_12 = (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD*)il2cpp_codegen_object_new(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179(L_12, __this, (intptr_t)((void*)VG_GraspEditor_ValidateStepGrasp_m7DD625C988120EFE3735F0A24A20970492D6F983_RuntimeMethod_var), NULL);
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_13 = (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246*)il2cpp_codegen_object_new(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B(L_13, __this, (intptr_t)((void*)VG_GraspEditor_StepGrasp_m9A50248E0F0267EBB39646DE16A84E459FDEF4E0_RuntimeMethod_var), NULL);
		ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_14 = (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8*)il2cpp_codegen_object_new(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D(L_14, L_11, L_12, L_13, NULL);
		NullCheck(L_10);
		List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_inline(L_10, L_14, List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var);
		// m_containers.Add(new ButtonContainer(m_deleteGraspButton, ValidateDeleteGrasp, DeleteGrasp));
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_15 = __this->___m_containers_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___m_deleteGraspButton_8;
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_17 = (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD*)il2cpp_codegen_object_new(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179(L_17, __this, (intptr_t)((void*)VG_GraspEditor_ValidateDeleteGrasp_mB8AC02CE73CBD7D5ACD07100068FE9B78B6F51CF_RuntimeMethod_var), NULL);
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_18 = (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246*)il2cpp_codegen_object_new(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B(L_18, __this, (intptr_t)((void*)VG_GraspEditor_DeleteGrasp_m1F72C6311DF798ACB5F62A23C5C33C2795AD5B4F_RuntimeMethod_var), NULL);
		ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_19 = (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8*)il2cpp_codegen_object_new(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D(L_19, L_16, L_17, L_18, NULL);
		NullCheck(L_15);
		List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_inline(L_15, L_19, List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var);
		// m_containers.Add(new ButtonContainer(m_deleteAllGraspsButton, ValidateDeleteAllGrasp, DeleteAllGrasp));
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_20 = __this->___m_containers_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___m_deleteAllGraspsButton_9;
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_22 = (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD*)il2cpp_codegen_object_new(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179(L_22, __this, (intptr_t)((void*)VG_GraspEditor_ValidateDeleteAllGrasp_m8642377A3588579B729DB29CDB9011E607D32D35_RuntimeMethod_var), NULL);
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_23 = (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246*)il2cpp_codegen_object_new(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B(L_23, __this, (intptr_t)((void*)VG_GraspEditor_DeleteAllGrasp_mCB969B247B90620EB1CAED309BC248A5F2899685_RuntimeMethod_var), NULL);
		ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_24 = (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8*)il2cpp_codegen_object_new(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D(L_24, L_21, L_22, L_23, NULL);
		NullCheck(L_20);
		List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_inline(L_20, L_24, List_1_Add_m17FEDAF9793B144DD9F89DFBC3C563502D1C12B3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean VG_GraspEditor::IsValidObject(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m369728D3BCAF415D2C570CF2A4FF5BD70CE8EF5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	{
		// return hand != null && hand.m_selectedObject != null && hand.m_selectedObject.TryGetComponent<MeshRenderer>(out _);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_1 = ___0_hand;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1->___m_selectedObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_4 = ___0_hand;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___m_selectedObject_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = Component_TryGetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m369728D3BCAF415D2C570CF2A4FF5BD70CE8EF5E(L_5, (&V_0), Component_TryGetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m369728D3BCAF415D2C570CF2A4FF5BD70CE8EF5E_RuntimeMethod_var);
		return L_6;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Void VG_GraspEditor::AddGrasp(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_AddGrasp_mF248F81E59060B8DF6FA61FA2914C4C410E3D9CB (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.EditGrasp(hand.m_avatarID, hand.m_side, VG_EditorAction.ADD_CURRENT);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_avatarID_1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2 = ___0_hand;
		NullCheck(L_2);
		int32_t L_3 = L_2->___m_side_2;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = VG_Controller_EditGrasp_m9D44DB1F7CEF553489A8152199A28C31269F1660(L_1, L_3, 4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (-1), NULL);
		// }
		return;
	}
}
// System.Boolean VG_GraspEditor::ValidateAddGrasp(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_ValidateAddGrasp_m86B5D590946998762C967041F7FD4643A0FCCDBD (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9336EF6723618EEA2E70039660D64EFFC67C041D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA70E12A0DDCE6CBD4FBCA27A3132F601F491A75E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5FAC20D057EDE841AA15487D6092C94F7EC3749);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!IsValidObject(hand))
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		bool L_1;
		L_1 = VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// text = "Add Grasp";
		String_t** L_2 = ___1_text;
		*((RuntimeObject**)L_2) = (RuntimeObject*)_stringLiteral9336EF6723618EEA2E70039660D64EFFC67C041D;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)_stringLiteral9336EF6723618EEA2E70039660D64EFFC67C041D);
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (VG_Controller.GetInteractionTypeForObject(hand.m_selectedObject) == VG_InteractionType.JUMP_PRIMARY_GRASP)
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___m_selectedObject_5;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = VG_Controller_GetInteractionTypeForObject_m6BF67CBFE20F3894E2D4501D18756EF515D6CF83(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_0029;
		}
	}
	{
		// text = "No add grasp\ninteraction is JUMP_PRIMARY_GRASP!";
		String_t** L_6 = ___1_text;
		*((RuntimeObject**)L_6) = (RuntimeObject*)_stringLiteralA70E12A0DDCE6CBD4FBCA27A3132F601F491A75E;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)_stringLiteralA70E12A0DDCE6CBD4FBCA27A3132F601F491A75E);
		// return false;
		return (bool)0;
	}

IL_0029:
	{
		// text = "Add Grasp\n(" + hand.GetNumGraspsInDB() + ")";
		String_t** L_7 = ___1_text;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_8 = ___0_hand;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VG_HandStatus_GetNumGraspsInDB_m8ADD6FB487EC9FC2977ECE63EC84F444027A6ED7(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5FAC20D057EDE841AA15487D6092C94F7EC3749, L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_11);
		// return true;
		return (bool)1;
	}
}
// System.Void VG_GraspEditor::ToggleInteraction(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_ToggleInteraction_m6E7A3524B1AD6D2C8D45731A9B74E359C0D1C556 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_1 = NULL;
	{
		// VG_InteractionType current_type = VG_Controller.GetInteractionTypeForObject(hand.m_selectedObject);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___m_selectedObject_5;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = VG_Controller_GetInteractionTypeForObject_m6BF67CBFE20F3894E2D4501D18756EF515D6CF83(L_1, NULL);
		V_0 = L_2;
		// if (current_type != (VG_InteractionType)m_editingInteractionType && current_type != VG_InteractionType.JUMP_PRIMARY_GRASP)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___m_editingInteractionType_10;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)5)))
		{
			goto IL_002c;
		}
	}
	{
		// VG_Controller.SetInteractionTypeForObject(hand.m_selectedObject, (VG_InteractionType)m_editingInteractionType);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_6 = ___0_hand;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___m_selectedObject_5;
		int32_t L_8 = __this->___m_editingInteractionType_10;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = VG_Controller_SetInteractionTypeForObject_mA103F9A12EC9624C205A3E138388A522745BC2AE(L_7, L_8, NULL);
		return;
	}

IL_002c:
	{
		// VG_Controller.SetInteractionTypeForObject(hand.m_selectedObject, current_type != VG_InteractionType.JUMP_PRIMARY_GRASP ?
		//     VG_InteractionType.JUMP_PRIMARY_GRASP : (VG_InteractionType)m_editingInteractionType);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_10 = ___0_hand;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10->___m_selectedObject_5;
		int32_t L_12 = V_0;
		G_B4_0 = L_11;
		if ((!(((uint32_t)L_12) == ((uint32_t)5))))
		{
			G_B5_0 = L_11;
			goto IL_003e;
		}
	}
	{
		int32_t L_13 = __this->___m_editingInteractionType_10;
		G_B6_0 = ((int32_t)(L_13));
		G_B6_1 = G_B4_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 5;
		G_B6_1 = G_B5_0;
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = VG_Controller_SetInteractionTypeForObject_mA103F9A12EC9624C205A3E138388A522745BC2AE(G_B6_1, G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void VG_GraspEditor::StepGrasp(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_StepGrasp_m9A50248E0F0267EBB39646DE16A84E459FDEF4E0 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.TogglePrimaryGraspOnObject(hand.m_avatarID, hand.m_side, hand.m_selectedObject);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_avatarID_1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2 = ___0_hand;
		NullCheck(L_2);
		int32_t L_3 = L_2->___m_side_2;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_4 = ___0_hand;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___m_selectedObject_5;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = VG_Controller_TogglePrimaryGraspOnObject_m4590E3CC7C8CEC7AE6D1CE3E4249A4022C8287BD(L_1, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Boolean VG_GraspEditor::ValidateToggleInteraction(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_ValidateToggleInteraction_mB77F83FC9F8B666D37FD3DC35BF56FBC7A10F57D (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_InteractionType_t653B34937E3B4A3F23370F703F29D066C64EE313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98074B600EF2DB4866E3DC10D34B6D9DCFFC3A30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2C899654C346ACAB5AFB650A210B956F04F7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF2CB393BA38DE3A5F0A0CFD62BCD53FD9017FE4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (!IsValidObject(hand))
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		bool L_1;
		L_1 = VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// text = "Toggle interaction";
		String_t** L_2 = ___1_text;
		*((RuntimeObject**)L_2) = (RuntimeObject*)_stringLiteralFF2CB393BA38DE3A5F0A0CFD62BCD53FD9017FE4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)_stringLiteralFF2CB393BA38DE3A5F0A0CFD62BCD53FD9017FE4);
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// VG_InteractionType current_type = VG_Controller.GetInteractionTypeForObject(hand.m_selectedObject);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___m_selectedObject_5;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = VG_Controller_GetInteractionTypeForObject_m6BF67CBFE20F3894E2D4501D18756EF515D6CF83(L_4, NULL);
		V_0 = L_5;
		// if (current_type == (VG_InteractionType)m_editingInteractionType && hand.GetNumPrimaryGraspsInDB() == 0)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___m_editingInteractionType_10;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_8 = ___0_hand;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VG_HandStatus_GetNumPrimaryGraspsInDB_m0995BCD8B7901A73416E03E7E98ED6B8CCE9613F(L_8, NULL);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		// text = "No toggle interaction\nno grasp!";
		String_t** L_10 = ___1_text;
		*((RuntimeObject**)L_10) = (RuntimeObject*)_stringLiteral98074B600EF2DB4866E3DC10D34B6D9DCFFC3A30;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)_stringLiteral98074B600EF2DB4866E3DC10D34B6D9DCFFC3A30);
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// VG_InteractionType target_type = (current_type == (VG_InteractionType)m_editingInteractionType) ? VG_InteractionType.JUMP_PRIMARY_GRASP : (VG_InteractionType)m_editingInteractionType;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_editingInteractionType_10;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_13 = __this->___m_editingInteractionType_10;
		G_B8_0 = ((int32_t)(L_13));
		goto IL_004a;
	}

IL_0049:
	{
		G_B8_0 = 5;
	}

IL_004a:
	{
		V_1 = G_B8_0;
		// text = "Toggle interaction To\n" + target_type + "";
		String_t** L_14 = ___1_text;
		Il2CppFakeBox<int32_t> L_15(VG_InteractionType_t653B34937E3B4A3F23370F703F29D066C64EE313_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_16;
		L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAD2C899654C346ACAB5AFB650A210B956F04F7F6, L_16, NULL);
		*((RuntimeObject**)L_14) = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)L_17);
		// return true;
		return (bool)1;
	}
}
// System.Boolean VG_GraspEditor::ValidateStepGrasp(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_ValidateStepGrasp_m7DD625C988120EFE3735F0A24A20970492D6F983 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A8DF1463893606AE431FF6BE0CD79616786A2AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71A7D784ED284A4B9BF661BFBFA5875E2B8BE714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD893C96F2CB7704D512D571CB7C6CD8A4D12FD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsValidObject(hand))
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		bool L_1;
		L_1 = VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// text = "Step grasp";
		String_t** L_2 = ___1_text;
		*((RuntimeObject**)L_2) = (RuntimeObject*)_stringLiteral0A8DF1463893606AE431FF6BE0CD79616786A2AA;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)_stringLiteral0A8DF1463893606AE431FF6BE0CD79616786A2AA);
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (hand.GetNumGraspsInDB() == 0)
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VG_HandStatus_GetNumGraspsInDB_m8ADD6FB487EC9FC2977ECE63EC84F444027A6ED7(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		// text = "No step grasp\nno grasp!";
		String_t** L_5 = ___1_text;
		*((RuntimeObject**)L_5) = (RuntimeObject*)_stringLiteral71A7D784ED284A4B9BF661BFBFA5875E2B8BE714;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)_stringLiteral71A7D784ED284A4B9BF661BFBFA5875E2B8BE714);
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// VG_InteractionType currentInteractionType = VG_Controller.GetInteractionTypeForObject(hand.m_selectedObject);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_6 = ___0_hand;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___m_selectedObject_5;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = VG_Controller_GetInteractionTypeForObject_m6BF67CBFE20F3894E2D4501D18756EF515D6CF83(L_7, NULL);
		// if (currentInteractionType != VG_InteractionType.JUMP_PRIMARY_GRASP)
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_003a;
		}
	}
	{
		// text = "No step grasp\ninteraction is not JUMP_PRIMARY_GRASP!";
		String_t** L_9 = ___1_text;
		*((RuntimeObject**)L_9) = (RuntimeObject*)_stringLiteralCD893C96F2CB7704D512D571CB7C6CD8A4D12FD5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)_stringLiteralCD893C96F2CB7704D512D571CB7C6CD8A4D12FD5);
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// text = "Step grasp";
		String_t** L_10 = ___1_text;
		*((RuntimeObject**)L_10) = (RuntimeObject*)_stringLiteral0A8DF1463893606AE431FF6BE0CD79616786A2AA;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)_stringLiteral0A8DF1463893606AE431FF6BE0CD79616786A2AA);
		// return true;
		return (bool)1;
	}
}
// System.Boolean VG_GraspEditor::ValidateDeleteGrasp(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_ValidateDeleteGrasp_mB8AC02CE73CBD7D5ACD07100068FE9B78B6F51CF (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral894BE101421F49032449AE2A702274DEFA70ABA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF8B00B400253F0571F432D99183DF2B47EE9F1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6295ABB11C0E915A05803AAB72C1AC4070AD3FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!IsValidObject(hand))
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		bool L_1;
		L_1 = VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// text = "Delete grasp";
		String_t** L_2 = ___1_text;
		*((RuntimeObject**)L_2) = (RuntimeObject*)_stringLiteral894BE101421F49032449AE2A702274DEFA70ABA5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)_stringLiteral894BE101421F49032449AE2A702274DEFA70ABA5);
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// int numGrasps = hand.GetNumGraspsInDB();
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VG_HandStatus_GetNumGraspsInDB_m8ADD6FB487EC9FC2977ECE63EC84F444027A6ED7(L_3, NULL);
		V_0 = L_4;
		// if (numGrasps == 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// text = "No delete grasp";
		String_t** L_6 = ___1_text;
		*((RuntimeObject**)L_6) = (RuntimeObject*)_stringLiteralC6295ABB11C0E915A05803AAB72C1AC4070AD3FC;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)_stringLiteralC6295ABB11C0E915A05803AAB72C1AC4070AD3FC);
		// return false;
		return (bool)0;
	}

IL_0025:
	{
		// text = "Delete grasp\n(" + numGrasps + ")";
		String_t** L_7 = ___1_text;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralAF8B00B400253F0571F432D99183DF2B47EE9F1E, L_8, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
		// return true;
		return (bool)1;
	}
}
// System.Boolean VG_GraspEditor::ValidateDeleteAllGrasp(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_GraspEditor_ValidateDeleteAllGrasp_m8642377A3588579B729DB29CDB9011E607D32D35 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7653EE94C8A3C873375461ED3EBB9885BD34C836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F25439EB7561DE03A4C7F81754F26538C66CC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCA53E06B4EE5B5453C32E3B1BDE59ADD7429D72);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!IsValidObject(hand))
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		bool L_1;
		L_1 = VG_GraspEditor_IsValidObject_mD4B478D6252E640A56E232F4400DA4A21B7576B5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// text = "Delete all grasps";
		String_t** L_2 = ___1_text;
		*((RuntimeObject**)L_2) = (RuntimeObject*)_stringLiteral7653EE94C8A3C873375461ED3EBB9885BD34C836;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)_stringLiteral7653EE94C8A3C873375461ED3EBB9885BD34C836);
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// int numGrasps = hand.GetNumGraspsInDB();
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VG_HandStatus_GetNumGraspsInDB_m8ADD6FB487EC9FC2977ECE63EC84F444027A6ED7(L_3, NULL);
		V_0 = L_4;
		// if (numGrasps == 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// text = "No delete all grasps";
		String_t** L_6 = ___1_text;
		*((RuntimeObject**)L_6) = (RuntimeObject*)_stringLiteralCCA53E06B4EE5B5453C32E3B1BDE59ADD7429D72;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)_stringLiteralCCA53E06B4EE5B5453C32E3B1BDE59ADD7429D72);
		// return false;
		return (bool)0;
	}

IL_0025:
	{
		// text = "Delete all grasps\n(" + numGrasps + ")";
		String_t** L_7 = ___1_text;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral77F25439EB7561DE03A4C7F81754F26538C66CC2, L_8, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
		// return true;
		return (bool)1;
	}
}
// System.Void VG_GraspEditor::DeleteGrasp(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_DeleteGrasp_m1F72C6311DF798ACB5F62A23C5C33C2795AD5B4F (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.EditGrasp(hand.m_avatarID, hand.m_side, VG_EditorAction.DELETE_CURRENT);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_avatarID_1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2 = ___0_hand;
		NullCheck(L_2);
		int32_t L_3 = L_2->___m_side_2;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = VG_Controller_EditGrasp_m9D44DB1F7CEF553489A8152199A28C31269F1660(L_1, L_3, 2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (-1), NULL);
		// if (hand.GetNumGraspsInDB() == 0)
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_5 = ___0_hand;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VG_HandStatus_GetNumGraspsInDB_m8ADD6FB487EC9FC2977ECE63EC84F444027A6ED7(L_5, NULL);
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		// VG_Controller.SetInteractionTypeForObject(hand.m_selectedObject, (VG_InteractionType)m_editingInteractionType);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_7 = ___0_hand;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___m_selectedObject_5;
		int32_t L_9 = __this->___m_editingInteractionType_10;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = VG_Controller_SetInteractionTypeForObject_mA103F9A12EC9624C205A3E138388A522745BC2AE(L_8, L_9, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void VG_GraspEditor::DeleteAllGrasp(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_DeleteAllGrasp_mCB969B247B90620EB1CAED309BC248A5F2899685 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D3B2A528E4A566CE760F459447C1A91A90EA8E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.EditGrasp(hand.m_avatarID, hand.m_side, VG_EditorAction.DELETE_ALL_HAND_GRASPS);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_avatarID_1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2 = ___0_hand;
		NullCheck(L_2);
		int32_t L_3 = L_2->___m_side_2;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = VG_Controller_EditGrasp_m9D44DB1F7CEF553489A8152199A28C31269F1660(L_1, L_3, 3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (-1), NULL);
		// if (VG_Controller.GetNumGraspsInDB(hand.m_selectedObject, hand.m_avatarID, hand.m_side) == 0)
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_5 = ___0_hand;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___m_selectedObject_5;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_7 = ___0_hand;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_avatarID_1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_9 = ___0_hand;
		NullCheck(L_9);
		int32_t L_10 = L_9->___m_side_2;
		int32_t L_11;
		L_11 = VG_Controller_GetNumGraspsInDB_m9C5EB18A6832F838C842015C8ABC124A7545B7A2(L_6, L_8, L_10, NULL);
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		// VG_Controller.SetInteractionTypeForObject(hand.m_selectedObject, (VG_InteractionType)m_editingInteractionType);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_12 = ___0_hand;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___m_selectedObject_5;
		int32_t L_14 = __this->___m_editingInteractionType_10;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = VG_Controller_SetInteractionTypeForObject_mA103F9A12EC9624C205A3E138388A522745BC2AE(L_13, L_14, NULL);
		return;
	}

IL_0041:
	{
		// VG_Debug.LogError("After remove all hand grasp, num grasps still non zero");
		il2cpp_codegen_runtime_class_init_inline(VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		VG_Debug_LogError_m848B60120887C125385F1AD441FF86B8CBF9DCDA(_stringLiteral3D3B2A528E4A566CE760F459447C1A91A90EA8E3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// }
		return;
	}
}
// System.Void VG_GraspEditor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor_Update_m3BDBA41D6C38F596F0544C1714B3064617A492D6 (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m614A53A52F4460E65E001BCCEFBA7D1E45BA83F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEEF3BB69D68DDAC8FB3F2D275B1AEE4850978D53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m858FF6D7435CA960F1A8A76B9168EEC37D2483C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* V_3 = NULL;
	bool V_4 = false;
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* V_5 = NULL;
	Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC V_6;
	memset((&V_6), 0, sizeof(V_6));
	ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* V_7 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_0 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	int32_t G_B33_0 = 0;
	{
		// VG_Controller.GetSensorControlledAvatarID(out int avatarID);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = VG_Controller_GetSensorControlledAvatarID_m19BDA49BD4AE9FCC3A0650BA5B52060E8776701D((&V_0), NULL);
		// Transform leftSelected = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// Transform rightSelected = null;
		V_2 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// VG_HandStatus status = VG_Controller.GetHand(avatarID, VG_HandSide.LEFT);
		int32_t L_1 = V_0;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2;
		L_2 = VG_Controller_GetHand_mCCCB24D6EF270DD099324A5857E0599572CCF205(L_1, (-1), NULL);
		V_3 = L_2;
		// if (status != null)
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = V_3;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// leftSelected = ButtonContainer.BUTTON_TRANSFORMS.Contains(status.m_selectedObject) || status.m_selectedObject == m_pad ? null : status.m_selectedObject;
		il2cpp_codegen_runtime_class_init_inline(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_4 = ((ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var))->___BUTTON_TRANSFORMS_6;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_5 = V_3;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___m_selectedObject_5;
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858(L_4, L_6, HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_8 = V_3;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___m_selectedObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_pad_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_12 = V_3;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___m_selectedObject_5;
		G_B5_0 = L_13;
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
	}

IL_0045:
	{
		V_1 = G_B5_0;
	}

IL_0046:
	{
		// status = VG_Controller.GetHand(avatarID, VG_HandSide.RIGHT);
		int32_t L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_15;
		L_15 = VG_Controller_GetHand_mCCCB24D6EF270DD099324A5857E0599572CCF205(L_14, 1, NULL);
		V_3 = L_15;
		// if (status != null)
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_16 = V_3;
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		// rightSelected = ButtonContainer.BUTTON_TRANSFORMS.Contains(status.m_selectedObject) || status.m_selectedObject == m_pad ? null : status.m_selectedObject;
		il2cpp_codegen_runtime_class_init_inline(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_17 = ((ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var))->___BUTTON_TRANSFORMS_6;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_18 = V_3;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___m_selectedObject_5;
		NullCheck(L_17);
		bool L_20;
		L_20 = HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858(L_17, L_19, HashSet_1_Contains_m713884DD723E507F7F8F564FA20C2D6C52AFC858_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_007e;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_21 = V_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___m_selectedObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___m_pad_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, L_23, NULL);
		if (L_24)
		{
			goto IL_007e;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_25 = V_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25->___m_selectedObject_5;
		G_B11_0 = L_26;
		goto IL_007f;
	}

IL_007e:
	{
		G_B11_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
	}

IL_007f:
	{
		V_2 = G_B11_0;
	}

IL_0080:
	{
		// if ((leftSelected == null && rightSelected == null) ||
		//     (leftSelected != null && rightSelected != null && leftSelected != rightSelected))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0092;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_30)
		{
			goto IL_00ad;
		}
	}

IL_0092:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00e4;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_00e4;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_00e4;
		}
	}

IL_00ad:
	{
		// foreach (ButtonContainer container in m_containers)
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_38 = __this->___m_containers_11;
		NullCheck(L_38);
		Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC L_39;
		L_39 = List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A(L_38, List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A_RuntimeMethod_var);
		V_6 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC((&V_6), Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ca_1;
			}

IL_00bc_1:
			{
				// foreach (ButtonContainer container in m_containers)
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_40;
				L_40 = Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_inline((&V_6), Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_RuntimeMethod_var);
				// if (!container.Validate(null)) continue;
				NullCheck(L_40);
				bool L_41;
				L_41 = ButtonContainer_Validate_mB54E364FEA335E9A4F12E7B768D3F4B42C4A14CC(L_40, (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*)NULL, NULL);
			}

IL_00ca_1:
			{
				// foreach (ButtonContainer container in m_containers)
				bool L_42;
				L_42 = Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730((&V_6), Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_00bc_1;
				}
			}
			{
				goto IL_00e3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e3:
	{
		// return;
		return;
	}

IL_00e4:
	{
		// VG_HandStatus hand = VG_Controller.GetHand(avatarID, (leftSelected != null) ? VG_HandSide.LEFT : VG_HandSide.RIGHT);
		int32_t L_43 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B25_0 = L_43;
		if (L_45)
		{
			G_B26_0 = L_43;
			goto IL_00f1;
		}
	}
	{
		G_B27_0 = 1;
		G_B27_1 = G_B25_0;
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B27_0 = (-1);
		G_B27_1 = G_B26_0;
	}

IL_00f2:
	{
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_46;
		L_46 = VG_Controller_GetHand_mCCCB24D6EF270DD099324A5857E0599572CCF205(G_B27_1, G_B27_0, NULL);
		V_5 = L_46;
		// foreach (ButtonContainer container in m_containers)
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_47 = __this->___m_containers_11;
		NullCheck(L_47);
		Enumerator_t163B073F4748EDA727221099B553FFC36FFBF1DC L_48;
		L_48 = List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A(L_47, List_1_GetEnumerator_mD487103F93362687AEF37352B302D4BD19ECCE2A_RuntimeMethod_var);
		V_6 = L_48;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_016f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC((&V_6), Enumerator_Dispose_m02702D6A5ABB341829FA8B17E69BC56F5FB380CC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0164_1;
			}

IL_0108_1:
			{
				// foreach (ButtonContainer container in m_containers)
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_49;
				L_49 = Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_inline((&V_6), Enumerator_get_Current_m21C64A5A980459C22B4E5D8E3851CED120179D14_RuntimeMethod_var);
				V_7 = L_49;
				// if (!container.Validate(hand)) continue;
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_50 = V_7;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_51 = V_5;
				NullCheck(L_50);
				bool L_52;
				L_52 = ButtonContainer_Validate_mB54E364FEA335E9A4F12E7B768D3F4B42C4A14CC(L_50, L_51, NULL);
				if (!L_52)
				{
					goto IL_0164_1;
				}
			}
			{
				// hasIntersection = (m_intersections.ContainsKey(container.m_root)) ? m_intersections[container.m_root] : false;
				Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* L_53 = __this->___m_intersections_12;
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_54 = V_7;
				NullCheck(L_54);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = L_54->___m_root_0;
				NullCheck(L_53);
				bool L_56;
				L_56 = Dictionary_2_ContainsKey_m614A53A52F4460E65E001BCCEFBA7D1E45BA83F2(L_53, L_55, Dictionary_2_ContainsKey_m614A53A52F4460E65E001BCCEFBA7D1E45BA83F2_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_0133_1;
				}
			}
			{
				G_B33_0 = 0;
				goto IL_0145_1;
			}

IL_0133_1:
			{
				Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* L_57 = __this->___m_intersections_12;
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_58 = V_7;
				NullCheck(L_58);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = L_58->___m_root_0;
				NullCheck(L_57);
				bool L_60;
				L_60 = Dictionary_2_get_Item_mEEF3BB69D68DDAC8FB3F2D275B1AEE4850978D53(L_57, L_59, Dictionary_2_get_Item_mEEF3BB69D68DDAC8FB3F2D275B1AEE4850978D53_RuntimeMethod_var);
				G_B33_0 = ((int32_t)(L_60));
			}

IL_0145_1:
			{
				V_4 = (bool)G_B33_0;
				// m_intersections[container.m_root] = container.Trigger(hand, hasIntersection);
				Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* L_61 = __this->___m_intersections_12;
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_62 = V_7;
				NullCheck(L_62);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = L_62->___m_root_0;
				ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* L_64 = V_7;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_65 = V_5;
				bool L_66 = V_4;
				NullCheck(L_64);
				bool L_67;
				L_67 = ButtonContainer_Trigger_m8DA2D41AD825986E9A5B2BBFA5E547230C169D0B(L_64, L_65, L_66, NULL);
				NullCheck(L_61);
				Dictionary_2_set_Item_m858FF6D7435CA960F1A8A76B9168EEC37D2483C9(L_61, L_63, L_67, Dictionary_2_set_Item_m858FF6D7435CA960F1A8A76B9168EEC37D2483C9_RuntimeMethod_var);
			}

IL_0164_1:
			{
				// foreach (ButtonContainer container in m_containers)
				bool L_68;
				L_68 = Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730((&V_6), Enumerator_MoveNext_m3FCE02A75C3C275D15F5F08E4DA726585300B730_RuntimeMethod_var);
				if (L_68)
				{
					goto IL_0108_1;
				}
			}
			{
				goto IL_017d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_017d:
	{
		// }
		return;
	}
}
// System.Void VG_GraspEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_GraspEditor__ctor_m1BB2C26281177319FEF0B14734A328C94DAB36AA (VG_GraspEditor_t04F841C02201F1F6E848867F456DF6251538EE92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m399003492E0507743AD9AE2441E83D56DA3C79E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA66E84548FC446BC00E15555075B32BA121DCFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FBCC76CC22915805926E462147115F83F925737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ButtonContainer> m_containers = new List<ButtonContainer>();
		List_1_t4FBCC76CC22915805926E462147115F83F925737* L_0 = (List_1_t4FBCC76CC22915805926E462147115F83F925737*)il2cpp_codegen_object_new(List_1_t4FBCC76CC22915805926E462147115F83F925737_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEA66E84548FC446BC00E15555075B32BA121DCFC(L_0, List_1__ctor_mEA66E84548FC446BC00E15555075B32BA121DCFC_RuntimeMethod_var);
		__this->___m_containers_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_containers_11), (void*)L_0);
		// private Dictionary<Transform, bool> m_intersections = new Dictionary<Transform, bool>();
		Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1* L_1 = (Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1*)il2cpp_codegen_object_new(Dictionary_2_t68D71AB2FC160038F1AC8FD0F6DBEC0EB7CC28B1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m399003492E0507743AD9AE2441E83D56DA3C79E6(L_1, Dictionary_2__ctor_m399003492E0507743AD9AE2441E83D56DA3C79E6_RuntimeMethod_var);
		__this->___m_intersections_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_intersections_12), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_Multicast(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* currentDelegate = reinterpret_cast<EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_hand, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenInst(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	typedef void (*FunctionPointerType) (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_hand, method);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenStatic(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_hand, method);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenStaticInvoker(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	InvokerActionInvoker1< VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_hand);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_ClosedStaticInvoker(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_hand);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenVirtual(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_hand);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenInterface(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_hand);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenGenericVirtual(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	GenericVirtualActionInvoker0::Invoke(method, ___0_hand);
}
void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenGenericInterface(EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_hand);
}
// System.Void VG_GraspEditor/EditFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditFunction__ctor_m2966EA76449DF419E745A0D2E0813CC78301175B (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_Multicast;
}
// System.Void VG_GraspEditor/EditFunction::Invoke(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hand, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VG_GraspEditor/EditFunction::BeginInvoke(VirtualGrasp.VG_HandStatus,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EditFunction_BeginInvoke_mEDF9E09D0325917D5805528251D86ABEF76A4EB7 (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_hand;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void VG_GraspEditor/EditFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditFunction_EndInvoke_m165DF2C0EF7B8A893751430A42CEC02F3136241B (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_Multicast(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* currentDelegate = reinterpret_cast<ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_hand, ___1_text, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenInst(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	typedef bool (*FunctionPointerType) (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_hand, ___1_text, method);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenStatic(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_hand, ___1_text, method);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenStaticInvoker(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t** >::Invoke(__this->___method_ptr_0, method, NULL, ___0_hand, ___1_text);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_ClosedStaticInvoker(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t** >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_hand, ___1_text);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenVirtual(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	return VirtualFuncInvoker1< bool, String_t** >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_hand, ___1_text);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenInterface(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	return InterfaceFuncInvoker1< bool, String_t** >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_hand, ___1_text);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenGenericVirtual(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	return GenericVirtualFuncInvoker1< bool, String_t** >::Invoke(method, ___0_hand, ___1_text);
}
bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenGenericInterface(ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method)
{
	NullCheck(___0_hand);
	return GenericInterfaceFuncInvoker1< bool, String_t** >::Invoke(method, ___0_hand, ___1_text);
}
// System.Void VG_GraspEditor/ValidateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateFunction__ctor_mEF20145C731C1B79903DCD2017C02F31AD748179 (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_Multicast;
}
// System.Boolean VG_GraspEditor/ValidateFunction::Invoke(VirtualGrasp.VG_HandStatus,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hand, ___1_text, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VG_GraspEditor/ValidateFunction::BeginInvoke(VirtualGrasp.VG_HandStatus,System.String&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValidateFunction_BeginInvoke_m9220C45033D7CC169012617E9DA0F014260A9FC8 (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_hand;
	__d_args[1] = *___1_text;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Boolean VG_GraspEditor/ValidateFunction::EndInvoke(System.String&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateFunction_EndInvoke_mF1D6FF3ED2A62ACFD41A3782ECCC3F1FC44D19F4 (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, String_t** ___0_text, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_text,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_GraspEditor/ButtonContainer::.ctor(UnityEngine.Transform,VG_GraspEditor/ValidateFunction,VG_GraspEditor/EditFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonContainer__ctor_mC7B4BAA2B07B9B181B92617B0B541EF1884EE66D (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_button, ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* ___1_validateFunc, EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* ___2_editFunc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisVG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7_m2B4E472E508442F5F108DC53A9A5D827572CBB8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ButtonContainer(Transform button, ValidateFunction validateFunc, EditFunction editFunc)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_root = button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_button;
		__this->___m_root_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_root_0), (void*)L_0);
		// m_text = button.GetComponentInChildren<Text>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_button;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_1, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___m_text_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_text_3), (void*)L_2);
		// m_renderer = button.GetComponentInChildren<MeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_button;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_3, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		__this->___m_renderer_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_renderer_4), (void*)L_4);
		// m_articulation = button.GetComponentInChildren<VG_Articulation>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_button;
		NullCheck(L_5);
		VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* L_6;
		L_6 = Component_GetComponentInChildren_TisVG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7_m2B4E472E508442F5F108DC53A9A5D827572CBB8F(L_5, Component_GetComponentInChildren_TisVG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7_m2B4E472E508442F5F108DC53A9A5D827572CBB8F_RuntimeMethod_var);
		__this->___m_articulation_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_articulation_5), (void*)L_6);
		// BUTTON_TRANSFORMS.Add(m_articulation.transform);
		il2cpp_codegen_runtime_class_init_inline(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_7 = ((ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var))->___BUTTON_TRANSFORMS_6;
		VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* L_8 = __this->___m_articulation_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801(L_7, L_9, HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var);
		// m_editFunction = editFunc;
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_11 = ___2_editFunc;
		__this->___m_editFunction_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_editFunction_1), (void*)L_11);
		// m_validateFunction = validateFunc;
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_12 = ___1_validateFunc;
		__this->___m_validateFunction_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_validateFunction_2), (void*)L_12);
		// }
		return;
	}
}
// System.Boolean VG_GraspEditor/ButtonContainer::Validate(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonContainer_Validate_mB54E364FEA335E9A4F12E7B768D3F4B42C4A14CC (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	{
		// bool valid = m_validateFunction(hand, out string text);
		ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* L_0 = __this->___m_validateFunction_2;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_1 = ___0_hand;
		NullCheck(L_0);
		bool L_2;
		L_2 = ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_inline(L_0, L_1, (&V_1), NULL);
		V_0 = L_2;
		// if (m_text != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_text_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// m_text.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___m_text_3;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// m_text.color = (valid && hand.IsHolding()) ? Color.black : Color.grey;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___m_text_3;
		bool L_8 = V_0;
		G_B2_0 = L_7;
		if (!L_8)
		{
			G_B3_0 = L_7;
			goto IL_003a;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_9 = ___0_hand;
		NullCheck(L_9);
		bool L_10;
		L_10 = VG_HandStatus_IsHolding_m85CFD208152CB134D3AA2ECA0835FD84C14DDC4C(L_9, NULL);
		G_B3_0 = G_B2_0;
		if (L_10)
		{
			G_B4_0 = G_B2_0;
			goto IL_0041;
		}
	}

IL_003a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0046;
	}

IL_0041:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		G_B5_0 = L_12;
		G_B5_1 = G_B4_0;
	}

IL_0046:
	{
		NullCheck(G_B5_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B5_1, G_B5_0);
	}

IL_004b:
	{
		// return valid;
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Boolean VG_GraspEditor/ButtonContainer::Trigger(VirtualGrasp.VG_HandStatus,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonContainer_Trigger_m8DA2D41AD825986E9A5B2BBFA5E547230C169D0B (ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, bool ___1_hasIntersection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (m_renderer == null || !hand.IsHolding())
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___m_renderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2 = ___0_hand;
		NullCheck(L_2);
		bool L_3;
		L_3 = VG_HandStatus_IsHolding_m85CFD208152CB134D3AA2ECA0835FD84C14DDC4C(L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		// return hasIntersection;
		bool L_4 = ___1_hasIntersection;
		return L_4;
	}

IL_0018:
	{
		// VG_Controller.GetObjectJointState(m_root, out float state);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_root_0;
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = VG_Controller_GetObjectJointState_m6906CB5E2FADACFE46300B432A6149C5179A00D2(L_5, (&V_0), NULL);
		// float threshold = m_articulation.m_min + (m_articulation.m_max - m_articulation.m_min) * 0.2f;
		VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* L_7 = __this->___m_articulation_5;
		NullCheck(L_7);
		float L_8 = ((VG_ArticulationBase_t6B0FA72D22DC1E4072CA33429AC5F5A711BD55EF*)L_7)->___m_min_6;
		VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* L_9 = __this->___m_articulation_5;
		NullCheck(L_9);
		float L_10 = ((VG_ArticulationBase_t6B0FA72D22DC1E4072CA33429AC5F5A711BD55EF*)L_9)->___m_max_7;
		VG_Articulation_t0BB10D4904C4CCD94279D50F189F3BBC915AEDE7* L_11 = __this->___m_articulation_5;
		NullCheck(L_11);
		float L_12 = ((VG_ArticulationBase_t6B0FA72D22DC1E4072CA33429AC5F5A711BD55EF*)L_11)->___m_min_6;
		V_1 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), (0.200000003f)))));
		// bool isIntersecting = state > threshold;
		float L_13 = V_0;
		float L_14 = V_1;
		V_2 = (bool)((((float)L_13) > ((float)L_14))? 1 : 0);
		// if (hasIntersection != isIntersecting)
		bool L_15 = ___1_hasIntersection;
		bool L_16 = V_2;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0073;
		}
	}
	{
		// VG_Controller.OnObjectCollided.Invoke(hand); // just to trigger haptics
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* L_17 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnObjectCollided_17;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_18 = ___0_hand;
		NullCheck(L_17);
		UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741(L_17, L_18, UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741_RuntimeMethod_var);
		// if (isIntersecting) m_editFunction(hand);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// if (isIntersecting) m_editFunction(hand);
		EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* L_20 = __this->___m_editFunction_1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_21 = ___0_hand;
		NullCheck(L_20);
		EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_inline(L_20, L_21, NULL);
	}

IL_0073:
	{
		// return isIntersecting;
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Void VG_GraspEditor/ButtonContainer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonContainer__cctor_mA1E90E3310D08D6F717DA03815C1E04BD9C358FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HashSet<Transform> BUTTON_TRANSFORMS = new HashSet<Transform>();
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_0 = (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*)il2cpp_codegen_object_new(HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753(L_0, HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var);
		((ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var))->___BUTTON_TRANSFORMS_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_StaticFields*)il2cpp_codegen_static_fields_for(ButtonContainer_t8A6DA6851B9CCF93856CA442F5D7DC9A40758FE8_il2cpp_TypeInfo_var))->___BUTTON_TRANSFORMS_6), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_HandStatusDebugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HandStatusDebugger__ctor_m9800276860ABA5678C4C808137E36F6E32E4C0D3 (VG_HandStatusDebugger_tD2E195EE61A67681F629A2E5A0363DBFDF869F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC63B202A0C7BA5CF051F5A50252F3D8631AB005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<VG_HandStatus> m_hands = new List<VG_HandStatus>();
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_0 = (List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4*)il2cpp_codegen_object_new(List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCC63B202A0C7BA5CF051F5A50252F3D8631AB005(L_0, List_1__ctor_mCC63B202A0C7BA5CF051F5A50252F3D8631AB005_RuntimeMethod_var);
		__this->___m_hands_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_hands_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_HandVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HandVisualizer_OnEnable_mF182BB9552E0F0EE2F5C773CC309B55A9196DFE3 (VG_HandVisualizer_t6EA37D66919AFFC20A99CB7745D49565CDF8FA9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_HandVisualizer_Visualize_mCFE431EC0056103EA46E86977E9C1497FF1A8DFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0477CFC8A695E62016677D6F2EF673B52F1C6E77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_root = new GameObject("DebugVis").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral0477CFC8A695E62016677D6F2EF673B52F1C6E77, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___m_root_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_root_6), (void*)L_1);
		// VG_Controller.OnPostUpdate.AddListener(Visualize);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnPostUpdate_23;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)VG_HandVisualizer_Visualize_mCFE431EC0056103EA46E86977E9C1497FF1A8DFB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VG_HandVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HandVisualizer_OnDisable_m5BC46C95C0A54EADD1057EA735EC3E05ABEFB49A (VG_HandVisualizer_t6EA37D66919AFFC20A99CB7745D49565CDF8FA9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m84736574ADA1AD7AAD5AA3A543C1D35F4D729037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_HandVisualizer_Visualize_mCFE431EC0056103EA46E86977E9C1497FF1A8DFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.OnPostUpdate.RemoveListener(Visualize);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnPostUpdate_23;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)VG_HandVisualizer_Visualize_mCFE431EC0056103EA46E86977E9C1497FF1A8DFB_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_0, L_1, NULL);
		// if(m_root != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_root_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// DestroyImmediate(m_root.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_root_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0034:
	{
		// m_limbs.Clear();
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_6 = __this->___m_limbs_4;
		NullCheck(L_6);
		Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686(L_6, Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var);
		// m_lines.Clear();
		Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_7 = __this->___m_lines_5;
		NullCheck(L_7);
		Dictionary_2_Clear_m84736574ADA1AD7AAD5AA3A543C1D35F4D729037(L_7, Dictionary_2_Clear_m84736574ADA1AD7AAD5AA3A543C1D35F4D729037_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VG_HandVisualizer::Visualize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HandVisualizer_Visualize_mCFE431EC0056103EA46E86977E9C1497FF1A8DFB (VG_HandVisualizer_t6EA37D66919AFFC20A99CB7745D49565CDF8FA9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3F4ADDCEA3306310F7EA76AB2288C4EE71E19902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_mBBB69E1AFA80D9D0B4992C6789FF69346CFE085E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_HandSide_t73D34B2903CAB292E5B5CEBAD84D2EB82C4BDDC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376E0EBF36DDF94B3FD31ADBE6EF926066EEC225);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D9AEA970191D4695D5F0E436BA568017BFE02B);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_12 = NULL;
	KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_1 = NULL;
	{
		// foreach (VG_HandStatus hand in VG_Controller.GetHands())
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_0;
		L_0 = VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3(NULL);
		NullCheck(L_0);
		Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 L_1;
		L_1 = List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F(L_0, List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0355:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C((&V_0), Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0347_1;
			}

IL_0010_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2;
				L_2 = Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_inline((&V_0), Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
				V_1 = L_2;
				// if (VG_Controller.GetBone(hand.m_avatarID, hand.m_side, VG_BoneType.WRIST, out int wrist_iid, out Vector3 pw, out Quaternion qw) == VG_ReturnCode.SUCCESS)
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = V_1;
				NullCheck(L_3);
				int32_t L_4 = L_3->___m_avatarID_1;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_5 = V_1;
				NullCheck(L_5);
				int32_t L_6 = L_5->___m_side_2;
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				int32_t L_7;
				L_7 = VG_Controller_GetBone_m3AFF3354117A1A19B5DC54F008326568B323F6B9(L_4, L_6, 0, (&V_2), (&V_3), (&V_4), NULL);
				if (L_7)
				{
					goto IL_0347_1;
				}
			}
			{
				// if (!m_limbs.ContainsKey(wrist_iid))
				Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_8 = __this->___m_limbs_4;
				int32_t L_9 = V_2;
				NullCheck(L_8);
				bool L_10;
				L_10 = Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F(L_8, L_9, Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_00cf_1;
				}
			}
			{
				// m_limbs[wrist_iid] = new GameObject("Avatar" + hand.m_avatarID + "_" + hand.m_side + "_wrist");
				Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_11 = __this->___m_limbs_4;
				int32_t L_12 = V_2;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, _stringLiteral376E0EBF36DDF94B3FD31ADBE6EF926066EEC225);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral376E0EBF36DDF94B3FD31ADBE6EF926066EEC225);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_16 = V_1;
				NullCheck(L_16);
				int32_t* L_17 = (&L_16->___m_avatarID_1);
				String_t* L_18;
				L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_18);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_15;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_21 = V_1;
				NullCheck(L_21);
				int32_t* L_22 = (&L_21->___m_side_2);
				Il2CppFakeBox<int32_t> L_23(VG_HandSide_t73D34B2903CAB292E5B5CEBAD84D2EB82C4BDDC0_il2cpp_TypeInfo_var, L_22);
				String_t* L_24;
				L_24 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_23), NULL);
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_24);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_24);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_20;
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, _stringLiteralA8D9AEA970191D4695D5F0E436BA568017BFE02B);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA8D9AEA970191D4695D5F0E436BA568017BFE02B);
				String_t* L_26;
				L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_27, L_26, NULL);
				NullCheck(L_11);
				Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA(L_11, L_12, L_27, Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var);
				// m_limbs[wrist_iid].transform.SetParent(m_root, true);
				Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_28 = __this->___m_limbs_4;
				int32_t L_29 = V_2;
				NullCheck(L_28);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
				L_30 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_28, L_29, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
				NullCheck(L_30);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
				L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_root_6;
				NullCheck(L_31);
				Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_31, L_32, (bool)1, NULL);
				// Destroy(m_limbs[wrist_iid].GetComponent<Collider>());
				Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_33 = __this->___m_limbs_4;
				int32_t L_34 = V_2;
				NullCheck(L_33);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
				L_35 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_33, L_34, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
				NullCheck(L_35);
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_36;
				L_36 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_35, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_36, NULL);
			}

IL_00cf_1:
			{
				// m_limbs[wrist_iid].transform.SetPositionAndRotation(pw, qw);
				Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_37 = __this->___m_limbs_4;
				int32_t L_38 = V_2;
				NullCheck(L_37);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
				L_39 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_37, L_38, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
				NullCheck(L_39);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
				L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = V_4;
				NullCheck(L_40);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_40, L_41, L_42, NULL);
				// foreach (int fingerId in new List<int>() { 0, 1, 2, 3, 4 })
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_43 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
				NullCheck(L_43);
				List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_43, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_44 = L_43;
				NullCheck(L_44);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_44, 0, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_45 = L_44;
				NullCheck(L_45);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_45, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_46 = L_45;
				NullCheck(L_46);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_46, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_47 = L_46;
				NullCheck(L_47);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_47, 3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = L_47;
				NullCheck(L_48);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				NullCheck(L_48);
				Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_49;
				L_49 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_48, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
				V_5 = L_49;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0339_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_5), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_032b_2;
					}

IL_011c_2:
					{
						// foreach (int fingerId in new List<int>() { 0, 1, 2, 3, 4 })
						int32_t L_50;
						L_50 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_5), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
						V_6 = L_50;
						// foreach (int boneId in new List<int>() { 0, 1, 2, -1 })
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_51 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
						NullCheck(L_51);
						List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_51, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = L_51;
						NullCheck(L_52);
						List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_52, 0, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_53 = L_52;
						NullCheck(L_53);
						List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_53, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_54 = L_53;
						NullCheck(L_54);
						List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_54, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_55 = L_54;
						NullCheck(L_55);
						List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_55, (-1), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
						NullCheck(L_55);
						Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_56;
						L_56 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_55, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
						V_7 = L_56;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_031d_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_7), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_030f_3;
							}

IL_0152_3:
							{
								// foreach (int boneId in new List<int>() { 0, 1, 2, -1 })
								int32_t L_57;
								L_57 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_7), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
								V_8 = L_57;
								// if (VG_Controller.GetFingerBone(hand.m_avatarID, hand.m_side, fingerId, boneId, out int iid, out Vector3 pf, out Quaternion qf) == VG_ReturnCode.SUCCESS)
								VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_58 = V_1;
								NullCheck(L_58);
								int32_t L_59 = L_58->___m_avatarID_1;
								VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_60 = V_1;
								NullCheck(L_60);
								int32_t L_61 = L_60->___m_side_2;
								int32_t L_62 = V_6;
								int32_t L_63 = V_8;
								il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
								int32_t L_64;
								L_64 = VG_Controller_GetFingerBone_m147D92DC791E4320DCE3DF69D7C4537627566BCE(L_59, L_61, L_62, L_63, (&V_9), (&V_10), (&V_11), NULL);
								if (L_64)
								{
									goto IL_030f_3;
								}
							}
							{
								// if (!m_limbs.ContainsKey(iid))
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_65 = __this->___m_limbs_4;
								int32_t L_66 = V_9;
								NullCheck(L_65);
								bool L_67;
								L_67 = Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F(L_65, L_66, Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
								if (L_67)
								{
									goto IL_02b0_3;
								}
							}
							{
								// Transform last_bone = m_limbs.Last().Value.transform;
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_68 = __this->___m_limbs_4;
								KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 L_69;
								L_69 = Enumerable_Last_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_mBBB69E1AFA80D9D0B4992C6789FF69346CFE085E(L_68, Enumerable_Last_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_mBBB69E1AFA80D9D0B4992C6789FF69346CFE085E_RuntimeMethod_var);
								V_13 = L_69;
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
								L_70 = KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_inline((&V_13), KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var);
								NullCheck(L_70);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
								L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
								V_12 = L_71;
								// m_limbs[iid] = new GameObject(hand.m_side + "_" + VG_Controller.GetBone(iid).name + "_" + fingerId.ToString() + boneId.ToString());
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_72 = __this->___m_limbs_4;
								int32_t L_73 = V_9;
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
								VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_76 = V_1;
								NullCheck(L_76);
								int32_t* L_77 = (&L_76->___m_side_2);
								Il2CppFakeBox<int32_t> L_78(VG_HandSide_t73D34B2903CAB292E5B5CEBAD84D2EB82C4BDDC0_il2cpp_TypeInfo_var, L_77);
								String_t* L_79;
								L_79 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_78), NULL);
								NullCheck(L_75);
								ArrayElementTypeCheck (L_75, L_79);
								(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_79);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_75;
								NullCheck(L_80);
								ArrayElementTypeCheck (L_80, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
								(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_80;
								int32_t L_82 = V_9;
								il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
								L_83 = VG_Controller_GetBone_mDCE0BDDA3AC39D7DF5FA97A0DF1940EF2441CE50(L_82, NULL);
								NullCheck(L_83);
								String_t* L_84;
								L_84 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_83, NULL);
								NullCheck(L_81);
								ArrayElementTypeCheck (L_81, L_84);
								(L_81)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_84);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = L_81;
								NullCheck(L_85);
								ArrayElementTypeCheck (L_85, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
								(L_85)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_85;
								String_t* L_87;
								L_87 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
								NullCheck(L_86);
								ArrayElementTypeCheck (L_86, L_87);
								(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_87);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_86;
								String_t* L_89;
								L_89 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_8), NULL);
								NullCheck(L_88);
								ArrayElementTypeCheck (L_88, L_89);
								(L_88)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_89);
								String_t* L_90;
								L_90 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_88, NULL);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
								NullCheck(L_91);
								GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_91, L_90, NULL);
								NullCheck(L_72);
								Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA(L_72, L_73, L_91, Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var);
								// m_limbs[iid].transform.SetParent(boneId == 0 ? m_limbs[wrist_iid].transform : last_bone, true);
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_92 = __this->___m_limbs_4;
								int32_t L_93 = V_9;
								NullCheck(L_92);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94;
								L_94 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_92, L_93, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
								NullCheck(L_94);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
								L_95 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_94, NULL);
								int32_t L_96 = V_8;
								G_B12_0 = L_95;
								if (!L_96)
								{
									G_B13_0 = L_95;
									goto IL_0226_3;
								}
							}
							{
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = V_12;
								G_B14_0 = L_97;
								G_B14_1 = G_B12_0;
								goto IL_0237_3;
							}

IL_0226_3:
							{
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_98 = __this->___m_limbs_4;
								int32_t L_99 = V_2;
								NullCheck(L_98);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100;
								L_100 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_98, L_99, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
								NullCheck(L_100);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
								L_101 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_100, NULL);
								G_B14_0 = L_101;
								G_B14_1 = G_B13_0;
							}

IL_0237_3:
							{
								NullCheck(G_B14_1);
								Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(G_B14_1, G_B14_0, (bool)1, NULL);
								// Destroy(m_limbs[iid].GetComponent<Collider>());
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_102 = __this->___m_limbs_4;
								int32_t L_103 = V_9;
								NullCheck(L_102);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104;
								L_104 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_102, L_103, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
								NullCheck(L_104);
								Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_105;
								L_105 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_104, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_105, NULL);
								// m_lines[iid] = m_limbs[iid].AddComponent<LineRenderer>();
								Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_106 = __this->___m_lines_5;
								int32_t L_107 = V_9;
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_108 = __this->___m_limbs_4;
								int32_t L_109 = V_9;
								NullCheck(L_108);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110;
								L_110 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_108, L_109, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
								NullCheck(L_110);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_111;
								L_111 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_110, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
								NullCheck(L_106);
								Dictionary_2_set_Item_m3F4ADDCEA3306310F7EA76AB2288C4EE71E19902(L_106, L_107, L_111, Dictionary_2_set_Item_m3F4ADDCEA3306310F7EA76AB2288C4EE71E19902_RuntimeMethod_var);
								// m_lines[iid].widthMultiplier = 0.002f;
								Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_112 = __this->___m_lines_5;
								int32_t L_113 = V_9;
								NullCheck(L_112);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_114;
								L_114 = Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946(L_112, L_113, Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var);
								NullCheck(L_114);
								LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255(L_114, (0.00200000009f), NULL);
								// m_lines[iid].positionCount = 2;
								Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_115 = __this->___m_lines_5;
								int32_t L_116 = V_9;
								NullCheck(L_115);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_117;
								L_117 = Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946(L_115, L_116, Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var);
								NullCheck(L_117);
								LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_117, 2, NULL);
								// m_lines[iid].useWorldSpace = true;
								Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_118 = __this->___m_lines_5;
								int32_t L_119 = V_9;
								NullCheck(L_118);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_120;
								L_120 = Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946(L_118, L_119, Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var);
								NullCheck(L_120);
								LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8(L_120, (bool)1, NULL);
							}

IL_02b0_3:
							{
								// m_limbs[iid].transform.SetPositionAndRotation(pf, qf);
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_121 = __this->___m_limbs_4;
								int32_t L_122 = V_9;
								NullCheck(L_121);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123;
								L_123 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_121, L_122, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
								NullCheck(L_123);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
								L_124 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_123, NULL);
								Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_10;
								Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_126 = V_11;
								NullCheck(L_124);
								Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_124, L_125, L_126, NULL);
								// m_lines[iid].SetPosition(0, m_limbs[iid].transform.parent.position);
								Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_127 = __this->___m_lines_5;
								int32_t L_128 = V_9;
								NullCheck(L_127);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_129;
								L_129 = Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946(L_127, L_128, Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var);
								Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_130 = __this->___m_limbs_4;
								int32_t L_131 = V_9;
								NullCheck(L_130);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132;
								L_132 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_130, L_131, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
								NullCheck(L_132);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
								L_133 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_132, NULL);
								NullCheck(L_133);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
								L_134 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_133, NULL);
								NullCheck(L_134);
								Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
								L_135 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_134, NULL);
								NullCheck(L_129);
								LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_129, 0, L_135, NULL);
								// m_lines[iid].SetPosition(1, pf);
								Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_136 = __this->___m_lines_5;
								int32_t L_137 = V_9;
								NullCheck(L_136);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_138;
								L_138 = Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946(L_136, L_137, Dictionary_2_get_Item_mB5293D23573149315C1940F96281B016EF587946_RuntimeMethod_var);
								Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_10;
								NullCheck(L_138);
								LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_138, 1, L_139, NULL);
							}

IL_030f_3:
							{
								// foreach (int boneId in new List<int>() { 0, 1, 2, -1 })
								bool L_140;
								L_140 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_7), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
								if (L_140)
								{
									goto IL_0152_3;
								}
							}
							{
								goto IL_032b_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_032b_2:
					{
						// foreach (int fingerId in new List<int>() { 0, 1, 2, 3, 4 })
						bool L_141;
						L_141 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_5), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
						if (L_141)
						{
							goto IL_011c_2;
						}
					}
					{
						goto IL_0347_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0347_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				bool L_142;
				L_142 = Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326((&V_0), Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
				if (L_142)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0363;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0363:
	{
		// }
		return;
	}
}
// System.Void VG_HandVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HandVisualizer__ctor_m06C2336271219D397C6FFF33F1D79C837F9F59B7 (VG_HandVisualizer_t6EA37D66919AFFC20A99CB7745D49565CDF8FA9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m655FEA14595F47252D8E3649F1E2263B772D570B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, GameObject> m_limbs = new Dictionary<int, GameObject>();
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*)il2cpp_codegen_object_new(Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858(L_0, Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var);
		__this->___m_limbs_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_limbs_4), (void*)L_0);
		// private Dictionary<int, LineRenderer> m_lines = new Dictionary<int, LineRenderer>();
		Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099* L_1 = (Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099*)il2cpp_codegen_object_new(Dictionary_2_tF0445BFF50020961E8909731111266ECC06FD099_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m655FEA14595F47252D8E3649F1E2263B772D570B(L_1, Dictionary_2__ctor_m655FEA14595F47252D8E3649F1E2263B772D570B_RuntimeMethod_var);
		__this->___m_lines_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_lines_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color VG_Highlighter::GetColor(VirtualGrasp.VG_ReturnCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VG_Highlighter_GetColor_mD60BC4641E8B8FBECFA6EA31839379A483BE829E (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, int32_t ___0_code, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_code;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-10))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_code;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-9))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___0_code;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0021;
	}

IL_000f:
	{
		// case VG_ReturnCode.OBJECT_NO_BAKE: return Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		return L_3;
	}

IL_0015:
	{
		// case VG_ReturnCode.OBJECT_NO_GRASPS: return Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		return L_4;
	}

IL_001b:
	{
		// case VG_ReturnCode.SUCCESS: return Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		return L_5;
	}

IL_0021:
	{
		// default: return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_6;
	}
}
// System.Void VG_Highlighter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Highlighter_Start_mB113FC0571561D8C8540B4AFA337A6355DF6FF8F (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m378804064185FA25C41237187B3CCEA095C05946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Highlighter_Highlight_m3CA6D14EF1810090431417C9F58614CD0FB16E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Highlighter_Unhighlight_m9E7BA9E224FDBAA1C5E800D80102B9EECB05B527_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3035AAAD53A5BE9ADCB94B3FF560A95EF9F640EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33A709C9C7E5B64B93213F7C5E5575FAAD2BEF99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_shader = Resources.Load<Shader>("RimLight");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Resources_Load_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m378804064185FA25C41237187B3CCEA095C05946(_stringLiteral3035AAAD53A5BE9ADCB94B3FF560A95EF9F640EF, Resources_Load_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m378804064185FA25C41237187B3CCEA095C05946_RuntimeMethod_var);
		__this->___m_shader_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_shader_4), (void*)L_0);
		// if (m_shader == null) VG_Debug.LogWarning("No shader found/assigned to VG_Highlighter. Please assign a shader.", gameObject);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___m_shader_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if (m_shader == null) VG_Debug.LogWarning("No shader found/assigned to VG_Highlighter. Please assign a shader.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(VG_Debug_t58ADFA5CDCC71FAC158F2C34A88071C4E6873973_il2cpp_TypeInfo_var);
		VG_Debug_LogWarning_m19B998D1A72DEC00BD1B1966122A0F10A514E23F(_stringLiteral33A709C9C7E5B64B93213F7C5E5575FAAD2BEF99, L_3, NULL);
	}

IL_002e:
	{
		// m_highlightedObjects[VG_HandSide.LEFT] = null;
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_4 = __this->___m_highlightedObjects_9;
		NullCheck(L_4);
		Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1(L_4, (-1), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		// m_highlightedObjects[VG_HandSide.RIGHT] = null;
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_5 = __this->___m_highlightedObjects_9;
		NullCheck(L_5);
		Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1(L_5, 1, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		// m_leftHandColor.a = 0.5f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->___m_leftHandColor_7);
		L_6->___a_3 = (0.5f);
		// m_rightHandColor.a = 0.5f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___m_rightHandColor_8);
		L_7->___a_3 = (0.5f);
		// VG_Controller.OnObjectSelected.AddListener(Highlight);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* L_8 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnObjectSelected_6;
		UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962* L_9 = (UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962*)il2cpp_codegen_object_new(UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m3E459A2EE3EFDF23A4125C6BF5811CA924E075BC(L_9, __this, (intptr_t)((void*)VG_Highlighter_Highlight_m3CA6D14EF1810090431417C9F58614CD0FB16E38_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9(L_8, L_9, UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9_RuntimeMethod_var);
		// VG_Controller.OnObjectDeselected.AddListener(Unhighlight);
		UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* L_10 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnObjectDeselected_7;
		UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962* L_11 = (UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962*)il2cpp_codegen_object_new(UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m3E459A2EE3EFDF23A4125C6BF5811CA924E075BC(L_11, __this, (intptr_t)((void*)VG_Highlighter_Unhighlight_m9E7BA9E224FDBAA1C5E800D80102B9EECB05B527_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9(L_10, L_11, UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9_RuntimeMethod_var);
		// VG_Controller.OnObjectGrasped.AddListener(Unhighlight);
		UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* L_12 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnObjectGrasped_2;
		UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962* L_13 = (UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962*)il2cpp_codegen_object_new(UnityAction_1_tE6058FFA7FD02095DCC92457FB51F630D9A98962_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m3E459A2EE3EFDF23A4125C6BF5811CA924E075BC(L_13, __this, (intptr_t)((void*)VG_Highlighter_Unhighlight_m9E7BA9E224FDBAA1C5E800D80102B9EECB05B527_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9(L_12, L_13, UnityEvent_1_AddListener_mB03370EB0CD420285E395EA349AE2BB15D6418B9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VG_Highlighter::HighlightObjectStatus(System.Collections.Generic.HashSet`1<VirtualGrasp.VG_ReturnCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Highlighter_HighlightObjectStatus_m758AB947F09EDCB5ADEF214E37E93FDF3C2F65C8 (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF* ___0_states, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFFD54A623C63FE538F152259CFD3A10560D391CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF2634E207F82B067DD47A93C4089B72D33A2E49B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7657AB5816C946998F88A892E30C0162FB0171FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mAAE227155CB9806B9E474AB0D66FC8D3816976DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m63FEEB1A7B78287DC3660AD615491AC2857FCAC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABE9AB0889D1F6816BC77606C07344969D6E66A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4F75CC3F859FC460877E815F0AB4E93AE81CBF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE31074D99F0EB539B2E7B193990B9B285CE82CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBD844D35C50966C9097C04ABF8D1A5F68B423E0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_8 = NULL;
	int32_t V_9 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B16_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B16_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B15_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B15_1 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* G_B17_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B17_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B17_2 = NULL;
	{
		// int numSelected = 0;
		V_1 = 0;
		// int numAll = 0;
		V_2 = 0;
		// foreach (Transform t in VG_Controller.GetSelectableObjects())
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = VG_Controller_GetSelectableObjects_m10031B88A259F93DC48FD7B13C1EBC5D6A78765B((bool)1, (bool)1, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>::GetEnumerator() */, IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var, L_0);
		V_4 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_4;
					if (!L_2)
					{
						goto IL_011f;
					}
				}
				{
					RuntimeObject* L_3 = V_4;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_011f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0106_1;
			}

IL_0017_1:
			{
				// foreach (Transform t in VG_Controller.GetSelectableObjects())
				RuntimeObject* L_4 = V_4;
				NullCheck(L_4);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>::get_Current() */, IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var, L_4);
				V_5 = L_5;
				// color = Color.black;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
				L_6 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
				V_3 = L_6;
				// isSelected = false;
				V_0 = (bool)0;
				// foreach (VG_ReturnCode state in states)
				HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF* L_7 = ___0_states;
				NullCheck(L_7);
				Enumerator_t4EDD884442AAF5D8614691E80837A22AFEACE345 L_8;
				L_8 = HashSet_1_GetEnumerator_mAAE227155CB9806B9E474AB0D66FC8D3816976DF(L_7, HashSet_1_GetEnumerator_mAAE227155CB9806B9E474AB0D66FC8D3816976DF_RuntimeMethod_var);
				V_6 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006c_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mFFD54A623C63FE538F152259CFD3A10560D391CC((&V_6), Enumerator_Dispose_mFFD54A623C63FE538F152259CFD3A10560D391CC_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0061_2;
					}

IL_0032_2:
					{
						// foreach (VG_ReturnCode state in states)
						int32_t L_9;
						L_9 = Enumerator_get_Current_m7657AB5816C946998F88A892E30C0162FB0171FE_inline((&V_6), Enumerator_get_Current_m7657AB5816C946998F88A892E30C0162FB0171FE_RuntimeMethod_var);
						V_7 = L_9;
						// isSelected = VG_Controller.GetUnbakedObjects(state).Contains(t);
						int32_t L_10 = V_7;
						il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
						List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_11;
						L_11 = VG_Controller_GetUnbakedObjects_m2630B5C6E1839AB5D4EE0E89CC659310C9EE1868(L_10, NULL);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_5;
						NullCheck(L_11);
						bool L_13;
						L_13 = List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795(L_11, L_12, List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var);
						V_0 = L_13;
						// if (state == VG_ReturnCode.SUCCESS) isSelected = !isSelected;
						int32_t L_14 = V_7;
						if (L_14)
						{
							goto IL_0053_2;
						}
					}
					{
						// if (state == VG_ReturnCode.SUCCESS) isSelected = !isSelected;
						bool L_15 = V_0;
						V_0 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
					}

IL_0053_2:
					{
						// if (isSelected) { color = GetColor(state); break; }
						bool L_16 = V_0;
						if (!L_16)
						{
							goto IL_0061_2;
						}
					}
					{
						// if (isSelected) { color = GetColor(state); break; }
						int32_t L_17 = V_7;
						Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
						L_18 = VG_Highlighter_GetColor_mD60BC4641E8B8FBECFA6EA31839379A483BE829E(__this, L_17, NULL);
						V_3 = L_18;
						// if (isSelected) { color = GetColor(state); break; }
						goto IL_007a_1;
					}

IL_0061_2:
					{
						// foreach (VG_ReturnCode state in states)
						bool L_19;
						L_19 = Enumerator_MoveNext_mF2634E207F82B067DD47A93C4089B72D33A2E49B((&V_6), Enumerator_MoveNext_mF2634E207F82B067DD47A93C4089B72D33A2E49B_RuntimeMethod_var);
						if (L_19)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_007a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007a_1:
			{
				// color.a = 0.5f;
				(&V_3)->___a_3 = (0.5f);
				// if (t != null && t.GetComponentInChildren<MeshRenderer>() != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_21;
				L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_21)
				{
					goto IL_00fb_1;
				}
			}
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_5;
				NullCheck(L_22);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_23;
				L_23 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_22, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_24;
				L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_24)
				{
					goto IL_00fb_1;
				}
			}
			{
				// foreach (Material m in t.GetComponentInChildren<MeshRenderer>().materials)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_5;
				NullCheck(L_25);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_26;
				L_26 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_25, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
				NullCheck(L_26);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_27;
				L_27 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_26, NULL);
				V_8 = L_27;
				V_9 = 0;
				goto IL_00f3_1;
			}

IL_00b2_1:
			{
				// foreach (Material m in t.GetComponentInChildren<MeshRenderer>().materials)
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_28 = V_8;
				int32_t L_29 = V_9;
				NullCheck(L_28);
				int32_t L_30 = L_29;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
				// m.shader = isSelected ? m_shader : Shader.Find("Legacy Shaders/Specular");
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = L_31;
				bool L_33 = V_0;
				G_B15_0 = L_32;
				G_B15_1 = L_32;
				if (L_33)
				{
					G_B16_0 = L_32;
					G_B16_1 = L_32;
					goto IL_00c7_1;
				}
			}
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_34;
				L_34 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2ABE9AB0889D1F6816BC77606C07344969D6E66A, NULL);
				G_B17_0 = L_34;
				G_B17_1 = G_B15_0;
				G_B17_2 = G_B15_1;
				goto IL_00cd_1;
			}

IL_00c7_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_35 = __this->___m_shader_4;
				G_B17_0 = L_35;
				G_B17_1 = G_B16_0;
				G_B17_2 = G_B16_1;
			}

IL_00cd_1:
			{
				NullCheck(G_B17_1);
				Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(G_B17_1, G_B17_0, NULL);
				// m.SetFloat("_RimPower", 0.25f);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = G_B17_2;
				NullCheck(L_36);
				Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_36, _stringLiteralC4F75CC3F859FC460877E815F0AB4E93AE81CBF3, (0.25f), NULL);
				// m.SetColor("_RimColor", color);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = V_3;
				NullCheck(L_36);
				Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_36, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_37, NULL);
				int32_t L_38 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_38, 1));
			}

IL_00f3_1:
			{
				// foreach (Material m in t.GetComponentInChildren<MeshRenderer>().materials)
				int32_t L_39 = V_9;
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_40 = V_8;
				NullCheck(L_40);
				if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
				{
					goto IL_00b2_1;
				}
			}

IL_00fb_1:
			{
				// if (isSelected) numSelected++;
				bool L_41 = V_0;
				if (!L_41)
				{
					goto IL_0102_1;
				}
			}
			{
				// if (isSelected) numSelected++;
				int32_t L_42 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_0102_1:
			{
				// numAll++;
				int32_t L_43 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			}

IL_0106_1:
			{
				// foreach (Transform t in VG_Controller.GetSelectableObjects())
				RuntimeObject* L_44 = V_4;
				NullCheck(L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0120;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0120:
	{
		// if (states.Count > 0)
		HashSet_1_t533F5FAA5F771CACD1422D3BDF4D8096731E18EF* L_46 = ___0_states;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = HashSet_1_get_Count_m63FEEB1A7B78287DC3660AD615491AC2857FCAC2_inline(L_46, HashSet_1_get_Count_m63FEEB1A7B78287DC3660AD615491AC2857FCAC2_RuntimeMethod_var);
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		// Debug.Log("Highlighting " + numSelected + " out of " + numAll + " interactable objects.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteralEE31074D99F0EB539B2E7B193990B9B285CE82CF);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEE31074D99F0EB539B2E7B193990B9B285CE82CF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_53;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralFBD844D35C50966C9097C04ABF8D1A5F68B423E0);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFBD844D35C50966C9097C04ABF8D1A5F68B423E0);
		String_t* L_56;
		L_56 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_55, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_56, NULL);
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Void VG_Highlighter::Highlight(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Highlighter_Highlight_m3CA6D14EF1810090431417C9F58614CD0FB16E38 (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE6AD85B1B839B7A36AC76E52A884895705D95638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mC2AB2300D7D178165C7870101134EB567E648435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_2 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* G_B4_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_1 = NULL;
	Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* G_B3_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* G_B5_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_2 = NULL;
	int32_t G_B10_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	{
		// if (hand.m_selectedObject == m_highlightedObjects[hand.m_side])
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___m_selectedObject_5;
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_2 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_side_2;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC(L_2, L_4, Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_5, NULL);
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// if (hand.m_selectedObject == m_highlightedObjects[hand.m_side == VG_HandSide.LEFT ? VG_HandSide.RIGHT : VG_HandSide.LEFT])
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_7 = ___0_hand;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___m_selectedObject_5;
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_9 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_10 = ___0_hand;
		NullCheck(L_10);
		int32_t L_11 = L_10->___m_side_2;
		G_B3_0 = L_9;
		G_B3_1 = L_8;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			G_B4_0 = L_9;
			G_B4_1 = L_8;
			goto IL_0037;
		}
	}
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0038:
	{
		NullCheck(G_B5_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC(G_B5_1, G_B5_0, Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B5_2, L_12, NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		// return;
		return;
	}

IL_0045:
	{
		// m_highlightedObjects[hand.m_side] = hand.m_selectedObject;
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_14 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_15 = ___0_hand;
		NullCheck(L_15);
		int32_t L_16 = L_15->___m_side_2;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_17 = ___0_hand;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17->___m_selectedObject_5;
		NullCheck(L_14);
		Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1(L_14, L_16, L_18, Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		// int id = hand.m_side < 0 ? 0 : 1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_19 = ___0_hand;
		NullCheck(L_19);
		int32_t L_20 = L_19->___m_side_2;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0069;
	}

IL_0068:
	{
		G_B10_0 = 0;
	}

IL_0069:
	{
		V_0 = G_B10_0;
		// Color color = id == 0 ? m_leftHandColor : m_rightHandColor;
		int32_t L_21 = V_0;
		if (!L_21)
		{
			goto IL_0075;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___m_rightHandColor_8;
		G_B13_0 = L_22;
		goto IL_007b;
	}

IL_0075:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___m_leftHandColor_7;
		G_B13_0 = L_23;
	}

IL_007b:
	{
		V_1 = G_B13_0;
		// Material[] objectMaterials = hand.m_selectedObject.GetComponentInChildren<MeshRenderer>().sharedMaterials;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_24 = ___0_hand;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___m_selectedObject_5;
		NullCheck(L_25);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_26;
		L_26 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_25, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		NullCheck(L_26);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_27;
		L_27 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_26, NULL);
		V_2 = L_27;
		// m_unhighlightedMaterials[id] = new List<Material>(hand.m_selectedObject.GetComponentInChildren<MeshRenderer>().sharedMaterials);
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_28 = __this->___m_unhighlightedMaterials_5;
		int32_t L_29 = V_0;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_30 = ___0_hand;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30->___m_selectedObject_5;
		NullCheck(L_31);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_32;
		L_32 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_31, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		NullCheck(L_32);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_33;
		L_33 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_32, NULL);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_34 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		List_1__ctor_mE6AD85B1B839B7A36AC76E52A884895705D95638(L_34, (RuntimeObject*)L_33, List_1__ctor_mE6AD85B1B839B7A36AC76E52A884895705D95638_RuntimeMethod_var);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_34);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)L_34);
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		V_4 = 0;
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_35 = __this->___m_unhighlightedMaterials_5;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_38, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		V_5 = L_39;
		goto IL_00e7;
	}

IL_00be:
	{
		// m_unhighlightedMaterials[id][i] = new Material(m_unhighlightedMaterials[id][i]);
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_40 = __this->___m_unhighlightedMaterials_5;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_4;
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_45 = __this->___m_unhighlightedMaterials_5;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = V_4;
		NullCheck(L_48);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50;
		L_50 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_48, L_49, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_51, L_50, NULL);
		NullCheck(L_43);
		List_1_set_Item_mC2AB2300D7D178165C7870101134EB567E648435(L_43, L_44, L_51, List_1_set_Item_mC2AB2300D7D178165C7870101134EB567E648435_RuntimeMethod_var);
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00e7:
	{
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		int32_t L_53 = V_4;
		int32_t L_54 = V_5;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00be;
		}
	}
	{
		// m_highlightedMaterials[id] = new List<Material>();
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_55 = __this->___m_highlightedMaterials_6;
		int32_t L_56 = V_0;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_57 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_57, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)L_57);
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		V_6 = 0;
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_58 = __this->___m_unhighlightedMaterials_5;
		int32_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_61, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		V_7 = L_62;
		goto IL_014f;
	}

IL_010e:
	{
		// m_highlightedMaterials[id].Add(new Material(m_unhighlightedMaterials[id][i]));
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_63 = __this->___m_highlightedMaterials_6;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_67 = __this->___m_unhighlightedMaterials_5;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = V_6;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72;
		L_72 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_70, L_71, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_73, L_72, NULL);
		NullCheck(L_66);
		List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_66, L_73, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		// m_highlightedMaterials[id][i].shader = m_shader;
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_74 = __this->___m_highlightedMaterials_6;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_6;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79;
		L_79 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_77, L_78, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_80 = __this->___m_shader_4;
		NullCheck(L_79);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_79, L_80, NULL);
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		int32_t L_81 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_014f:
	{
		// for (int i = 0, count = m_unhighlightedMaterials[id].Count; i < count; i++)
		int32_t L_82 = V_6;
		int32_t L_83 = V_7;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_010e;
		}
	}
	{
		// MeshRenderer objectRenderer = m_highlightedObjects[hand.m_side].GetComponentInChildren<MeshRenderer>();
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_84 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_85 = ___0_hand;
		NullCheck(L_85);
		int32_t L_86 = L_85->___m_side_2;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC(L_84, L_86, Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var);
		NullCheck(L_87);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_88;
		L_88 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_87, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		V_3 = L_88;
		// for (int i = 0, count = objectRenderer.materials.Length; i < count; i++)
		V_8 = 0;
		// for (int i = 0, count = objectRenderer.materials.Length; i < count; i++)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_89 = V_3;
		NullCheck(L_89);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_90;
		L_90 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_89, NULL);
		NullCheck(L_90);
		V_9 = ((int32_t)(((RuntimeArray*)L_90)->max_length));
		goto IL_01a3;
	}

IL_017b:
	{
		// objectMaterials[i] = m_highlightedMaterials[id][i];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_91 = V_2;
		int32_t L_92 = V_8;
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_93 = __this->___m_highlightedMaterials_6;
		int32_t L_94 = V_0;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		int32_t L_97 = V_8;
		NullCheck(L_96);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_98;
		L_98 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_96, L_97, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_98);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_92), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_98);
		// objectMaterials[i].SetColor("_RimColor", color);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_99 = V_2;
		int32_t L_100 = V_8;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_103 = V_1;
		NullCheck(L_102);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_102, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_103, NULL);
		// for (int i = 0, count = objectRenderer.materials.Length; i < count; i++)
		int32_t L_104 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_01a3:
	{
		// for (int i = 0, count = objectRenderer.materials.Length; i < count; i++)
		int32_t L_105 = V_8;
		int32_t L_106 = V_9;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_017b;
		}
	}
	{
		// objectRenderer.sharedMaterials = objectMaterials;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_107 = V_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_108 = V_2;
		NullCheck(L_107);
		Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2(L_107, L_108, NULL);
		// }
		return;
	}
}
// System.Void VG_Highlighter::Unhighlight(VirtualGrasp.VG_HandStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Highlighter_Unhighlight_m9E7BA9E224FDBAA1C5E800D80102B9EECB05B527 (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m507EBF566F856321FA1A1BF3D67EB33FA0EEA3EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// int id = hand.m_side < 0 ? 0 : 1;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_0 = ___0_hand;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_side_2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		// if (!m_highlightedObjects.ContainsKey(hand.m_side))
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_2 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = ___0_hand;
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_side_2;
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m507EBF566F856321FA1A1BF3D67EB33FA0EEA3EC(L_2, L_4, Dictionary_2_ContainsKey_m507EBF566F856321FA1A1BF3D67EB33FA0EEA3EC_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// Transform highlightedObject = m_highlightedObjects[hand.m_side];
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_6 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_7 = ___0_hand;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_side_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC(L_6, L_8, Dictionary_2_get_Item_mFE0798237A7BCA674D991FE4DABBDF3A98AE0FFC_RuntimeMethod_var);
		V_1 = L_9;
		// if (highlightedObject == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		// if (highlightedObject == null) return;
		return;
	}

IL_003e:
	{
		// highlightedObject.GetComponentInChildren<MeshRenderer>().sharedMaterials = m_unhighlightedMaterials[id].ToArray();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
		NullCheck(L_12);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13;
		L_13 = Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535(L_12, Component_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m36EDCB3A47ABF63F0F0630998380AA7635920535_RuntimeMethod_var);
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_14 = __this->___m_unhighlightedMaterials_5;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_18;
		L_18 = List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6(L_17, List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		NullCheck(L_13);
		Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2(L_13, L_18, NULL);
		// m_highlightedObjects[hand.m_side] = null;
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_19 = __this->___m_highlightedObjects_9;
		VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_20 = ___0_hand;
		NullCheck(L_20);
		int32_t L_21 = L_20->___m_side_2;
		NullCheck(L_19);
		Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1(L_19, L_21, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, Dictionary_2_set_Item_mA9B12369C21196724545F6D2EA42D637176E95B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VG_Highlighter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_Highlighter__ctor_m9EAD7D956A1B13428EBAA95D694CC605456CF335 (VG_Highlighter_tAAFAF4B591DFE5572F917D2F8B8D6485FC5EAB9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB4864443984B35924D747359D91F57B6D6E0F74F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Material>[] m_unhighlightedMaterials = new List<Material>[2];
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_0 = (List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA*)(List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA*)SZArrayNew(List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_unhighlightedMaterials_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_unhighlightedMaterials_5), (void*)L_0);
		// private List<Material>[] m_highlightedMaterials = new List<Material>[2];
		List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA* L_1 = (List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA*)(List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA*)SZArrayNew(List_1U5BU5D_t1CF40D4C99318E57DE3FB23AA5A27EF56263D9EA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_highlightedMaterials_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_highlightedMaterials_6), (void*)L_1);
		// public Color m_leftHandColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		__this->___m_leftHandColor_7 = L_2;
		// public Color m_rightHandColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		__this->___m_rightHandColor_8 = L_3;
		// private Dictionary<VG_HandSide, Transform> m_highlightedObjects = new Dictionary<VG_HandSide, Transform>();
		Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2* L_4 = (Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2*)il2cpp_codegen_object_new(Dictionary_2_t4B73D9175EE53935BE44950788C352D5FA2196B2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mB4864443984B35924D747359D91F57B6D6E0F74F(L_4, Dictionary_2__ctor_mB4864443984B35924D747359D91F57B6D6E0F74F_RuntimeMethod_var);
		__this->___m_highlightedObjects_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_highlightedObjects_9), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_HintVisualizer::AddHintObject(System.Collections.Generic.List`1<UnityEngine.Transform>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_AddHintObject_m4740032DB65F09CA00219F7B10411293FDAE1490 (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___0_hintList, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject go = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		V_0 = L_0;
		// DestroyImmediate(go.GetComponent<Collider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_1, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// go.name = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		String_t* L_4 = ___1_name;
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, L_4, NULL);
		// go.transform.localScale = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// go.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		// hintList.Add(go.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_11 = ___0_hintList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_11);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_11, L_13, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VG_HintVisualizer::RemoveHintObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_RemoveHintObjects_m8900BFE396280E14B964771C88BE0CD35BB4092D (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var hint in pushHints)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___pushHints_6;
		NullCheck(L_0);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_1;
		L_1 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_0, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (var hint in pushHints)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
				L_2 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				// DestroyImmediate(hint.gameObject);
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (var hint in pushHints)
				bool L_4;
				L_4 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// foreach (var hint in graspHints)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_5 = __this->___graspHints_7;
		NullCheck(L_5);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_6;
		L_6 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_5, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_0046_1:
			{
				// foreach (var hint in graspHints)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				// DestroyImmediate(hint.gameObject);
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
			}

IL_0057_1:
			{
				// foreach (var hint in graspHints)
				bool L_9;
				L_9 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// pushHints.Clear();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___pushHints_6;
		NullCheck(L_10);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_10, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		// graspHints.Clear();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_11 = __this->___graspHints_7;
		NullCheck(L_11);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_11, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VG_HintVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_OnEnable_m7CE67D207BE97DFA66DA79DDFF5177689DC64E53 (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_HintVisualizer_HintUpdate_mAF06335F147FE5DBD587ED456BE48DAA16A854D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60C76420A90A194310B0CE3956E27E158DF02192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E4359EE8A2D364DE9BA5CCA734DC6B1C86314C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.OnPostUpdate.AddListener(HintUpdate);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnPostUpdate_23;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)VG_HintVisualizer_HintUpdate_mAF06335F147FE5DBD587ED456BE48DAA16A854D8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_0, L_1, NULL);
		// if (pushHints.Count == 0) AddHintObject(pushHints, "PushHint");
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___pushHints_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_2, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// if (pushHints.Count == 0) AddHintObject(pushHints, "PushHint");
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___pushHints_6;
		VG_HintVisualizer_AddHintObject_m4740032DB65F09CA00219F7B10411293FDAE1490(__this, L_4, _stringLiteral60C76420A90A194310B0CE3956E27E158DF02192, NULL);
	}

IL_0034:
	{
		// if (graspHints.Count == 0) AddHintObject(graspHints, "SelectionHint");
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_5 = __this->___graspHints_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_5, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		// if (graspHints.Count == 0) AddHintObject(graspHints, "SelectionHint");
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___graspHints_7;
		VG_HintVisualizer_AddHintObject_m4740032DB65F09CA00219F7B10411293FDAE1490(__this, L_7, _stringLiteralE1E4359EE8A2D364DE9BA5CCA734DC6B1C86314C, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void VG_HintVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_OnDisable_m580C590F69A4BFF812804DC3763E49A17B88B973 (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_HintVisualizer_HintUpdate_mAF06335F147FE5DBD587ED456BE48DAA16A854D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.OnPostUpdate.RemoveListener(HintUpdate);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnPostUpdate_23;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)VG_HintVisualizer_HintUpdate_mAF06335F147FE5DBD587ED456BE48DAA16A854D8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_0, L_1, NULL);
		// RemoveHintObjects();
		VG_HintVisualizer_RemoveHintObjects_m8900BFE396280E14B964771C88BE0CD35BB4092D(__this, NULL);
		// }
		return;
	}
}
// System.Void VG_HintVisualizer::HintUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer_HintUpdate_mAF06335F147FE5DBD587ED456BE48DAA16A854D8 (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	bool V_7 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	int32_t V_9 = 0;
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* V_10 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_11 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_13 = NULL;
	int32_t V_14 = 0;
	String_t* G_B24_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B24_1 = NULL;
	String_t* G_B23_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B23_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	String_t* G_B25_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B25_2 = NULL;
	{
		// if (m_enablePushHints)
		bool L_0 = __this->___m_enablePushHints_4;
		if (!L_0)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_003e;
	}

IL_000d:
	{
		// pushHints.Add(GameObject.Instantiate(pushHints.Last()));
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___pushHints_6;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___pushHints_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678(L_2, Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_3, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_1, L_4, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// pushHints.Last().SetParent(transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_5 = __this->___pushHints_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678(L_5, Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_7, NULL);
	}

IL_003e:
	{
		// while (pushHints.Count < VG_Controller.GetHands().Count())
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_8 = __this->___pushHints_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_8, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_10;
		L_10 = VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3(NULL);
		int32_t L_11;
		L_11 = Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F(L_10, Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		// int num = 0;
		V_0 = 0;
		// foreach (VG_HandStatus hand in VG_Controller.GetHands())
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_12;
		L_12 = VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3(NULL);
		NullCheck(L_12);
		Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 L_13;
		L_13 = List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F(L_12, List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0120:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C((&V_1), Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0112_1;
			}

IL_0067_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_14;
				L_14 = Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_inline((&V_1), Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
				V_2 = L_14;
				// Transform t = VG_Controller.GetPushCircle(hand.m_avatarID, hand.m_side, out Vector3 p, out Quaternion q, out float radius, out bool inContact);
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_15 = V_2;
				NullCheck(L_15);
				int32_t L_16 = L_15->___m_avatarID_1;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_17 = V_2;
				NullCheck(L_17);
				int32_t L_18 = L_17->___m_side_2;
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
				L_19 = VG_Controller_GetPushCircle_m4DD30E028246EB7A5B3F8226F9E8CF38F0E2DA68(L_16, L_18, (&V_4), (&V_5), (&V_6), (&V_7), NULL);
				V_3 = L_19;
				// Transform hint = pushHints[num];
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_20 = __this->___pushHints_6;
				int32_t L_21 = V_0;
				NullCheck(L_20);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
				L_22 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_20, L_21, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
				V_8 = L_22;
				// hint.gameObject.SetActive(t != null);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_8;
				NullCheck(L_23);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
				L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_26;
				L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				NullCheck(L_24);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, L_26, NULL);
				// if (t != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_3;
				bool L_28;
				L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_28)
				{
					goto IL_010e_1;
				}
			}
			{
				// hint.SetPositionAndRotation(p + q * new Vector3(0, 0, -0.001f), q);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
				memset((&L_32), 0, sizeof(L_32));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), (-0.00100000005f), /*hidden argument*/NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_31, L_32, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_33, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_5;
				NullCheck(L_29);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_29, L_34, L_35, NULL);
				// hint.localScale = new Vector3(2 * radius, 2 * radius, 0.001f);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_8;
				float L_37 = V_6;
				float L_38 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
				memset((&L_39), 0, sizeof(L_39));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), ((float)il2cpp_codegen_multiply((2.0f), L_37)), ((float)il2cpp_codegen_multiply((2.0f), L_38)), (0.00100000005f), /*hidden argument*/NULL);
				NullCheck(L_36);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_36, L_39, NULL);
				// if (inContact) VG_Controller.OnObjectCollided.Invoke(hand);
				bool L_40 = V_7;
				if (!L_40)
				{
					goto IL_010e_1;
				}
			}
			{
				// if (inContact) VG_Controller.OnObjectCollided.Invoke(hand);
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				UnityEvent_1_t2F1AD43CAFEF4506B18448E73641EBA0661AC64F* L_41 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnObjectCollided_17;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_42 = V_2;
				NullCheck(L_41);
				UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741(L_41, L_42, UnityEvent_1_Invoke_mA5FB3559E1CD925949C1CCE7BC26A069C1D5F741_RuntimeMethod_var);
			}

IL_010e_1:
			{
				// num++;
				int32_t L_43 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			}

IL_0112_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				bool L_44;
				L_44 = Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326((&V_1), Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_012e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012e:
	{
		// if (m_enableGraspHints)
		bool L_45 = __this->___m_enableGraspHints_5;
		if (!L_45)
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_016c;
	}

IL_013b:
	{
		// graspHints.Add(GameObject.Instantiate(graspHints.Last()));
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_46 = __this->___graspHints_7;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_47 = __this->___graspHints_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678(L_47, Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_48, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		NullCheck(L_46);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_46, L_49, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// graspHints.Last().SetParent(transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_50 = __this->___graspHints_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678(L_50, Enumerable_Last_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mF4855BF3CCCCF7899AEDDAD7FE3F48273BDF6678_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_51, L_52, NULL);
	}

IL_016c:
	{
		// while (graspHints.Count < VG_Controller.GetHands().Count())
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_53 = __this->___graspHints_7;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_53, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_55;
		L_55 = VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3(NULL);
		int32_t L_56;
		L_56 = Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F(L_55, Enumerable_Count_TisVG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC_mCB77C8EFA0D0AD970993E89FF2EB3D4FB6A60E9F_RuntimeMethod_var);
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_013b;
		}
	}
	{
		// int num = 0;
		V_9 = 0;
		// foreach (VG_HandStatus hand in VG_Controller.GetHands())
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_57;
		L_57 = VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3(NULL);
		NullCheck(L_57);
		Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 L_58;
		L_58 = List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F(L_57, List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		V_1 = L_58;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02ae:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C((&V_1), Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02a0_1;
			}

IL_0196_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_59;
				L_59 = Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_inline((&V_1), Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
				V_10 = L_59;
				// Transform t = VG_Controller.GetBone(hand.m_avatarID, hand.m_side, VG_BoneType.APPROACH, out _, out Matrix4x4 m);
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_60 = V_10;
				NullCheck(L_60);
				int32_t L_61 = L_60->___m_avatarID_1;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_62 = V_10;
				NullCheck(L_62);
				int32_t L_63 = L_62->___m_side_2;
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
				L_64 = VG_Controller_GetBone_m45369B718D2AC9732518F56EF9A3360F4A574658(L_61, L_63, 4, (&V_14), (&V_12), NULL);
				V_11 = L_64;
				// Transform hint = graspHints[num];
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_65 = __this->___graspHints_7;
				int32_t L_66 = V_9;
				NullCheck(L_65);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
				L_67 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_65, L_66, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
				V_13 = L_67;
				// hint.gameObject.SetActive(t != null);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = V_13;
				NullCheck(L_68);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
				L_69 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_68, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = V_11;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_71;
				L_71 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				NullCheck(L_69);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_69, L_71, NULL);
				// if (t != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72 = V_11;
				bool L_73;
				L_73 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_72, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_73)
				{
					goto IL_029a_1;
				}
			}
			{
				// hint.SetPositionAndRotation(m.GetColumn(3), Quaternion.LookRotation(m.GetColumn(2), m.GetColumn(1)));
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = V_13;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_75;
				L_75 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_12), 3, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
				L_76 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_75, NULL);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_77;
				L_77 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_12), 2, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
				L_78 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_77, NULL);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79;
				L_79 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_12), 1, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
				L_80 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_79, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81;
				L_81 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_78, L_80, NULL);
				NullCheck(L_74);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_74, L_76, L_81, NULL);
				// if (m.GetRow(3) != new Vector4(0, 0, 0, 1)) hint.localScale = m.GetRow(3);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_82;
				L_82 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_12), 3, NULL);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_83;
				memset((&L_83), 0, sizeof(L_83));
				Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_83), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
				bool L_84;
				L_84 = Vector4_op_Inequality_mD6A1C6E862F3EFB1B222A2DDCB7A7237042DE142_inline(L_82, L_83, NULL);
				if (!L_84)
				{
					goto IL_0258_1;
				}
			}
			{
				// if (m.GetRow(3) != new Vector4(0, 0, 0, 1)) hint.localScale = m.GetRow(3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = V_13;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_86;
				L_86 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_12), 3, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
				L_87 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_86, NULL);
				NullCheck(L_85);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_85, L_87, NULL);
			}

IL_0258_1:
			{
				// hint.GetComponent<Renderer>().material.SetColor("_Color",
				//     VG_Controller.GetHand(hand.m_avatarID, hand.m_side).m_selectedObject == null ? Color.red : Color.green);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = V_13;
				NullCheck(L_88);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_89;
				L_89 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_88, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
				NullCheck(L_89);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90;
				L_90 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_89, NULL);
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_91 = V_10;
				NullCheck(L_91);
				int32_t L_92 = L_91->___m_avatarID_1;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_93 = V_10;
				NullCheck(L_93);
				int32_t L_94 = L_93->___m_side_2;
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_95;
				L_95 = VG_Controller_GetHand_mCCCB24D6EF270DD099324A5857E0599572CCF205(L_92, L_94, NULL);
				NullCheck(L_95);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = L_95->___m_selectedObject_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_97;
				L_97 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_96, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				G_B23_0 = _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
				G_B23_1 = L_90;
				if (L_97)
				{
					G_B24_0 = _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
					G_B24_1 = L_90;
					goto IL_0290_1;
				}
			}
			{
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98;
				L_98 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
				G_B25_0 = L_98;
				G_B25_1 = G_B23_0;
				G_B25_2 = G_B23_1;
				goto IL_0295_1;
			}

IL_0290_1:
			{
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99;
				L_99 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
				G_B25_0 = L_99;
				G_B25_1 = G_B24_0;
				G_B25_2 = G_B24_1;
			}

IL_0295_1:
			{
				NullCheck(G_B25_2);
				Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(G_B25_2, G_B25_1, G_B25_0, NULL);
			}

IL_029a_1:
			{
				// num++;
				int32_t L_100 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_100, 1));
			}

IL_02a0_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				bool L_101;
				L_101 = Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326((&V_1), Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
				if (L_101)
				{
					goto IL_0196_1;
				}
			}
			{
				goto IL_02bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02bc:
	{
		// }
		return;
	}
}
// System.Void VG_HintVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_HintVisualizer__ctor_m1A6F81869DF06332218BC8F1B0EC7B754647DC60 (VG_HintVisualizer_tE519DC0ABDF8B3E68F94B79C1DD88F72E1BB4338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool m_enablePushHints = true;
		__this->___m_enablePushHints_4 = (bool)1;
		// public bool m_enableGraspHints = true;
		__this->___m_enableGraspHints_5 = (bool)1;
		// public List<Transform> pushHints = new List<Transform> { };
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___pushHints_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pushHints_6), (void*)L_0);
		// public List<Transform> graspHints = new List<Transform> { };
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___graspHints_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___graspHints_7), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VG_PostAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_PostAnimator_Start_m80926DB510185CBD7DC9186C0066B5517434FC7E (VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_PostAnimator_Animate_m46D1E3C666759442539A1A989E2618B5028C5A2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VG_Controller.OnPostUpdate.AddListener(Animate);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ((VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_StaticFields*)il2cpp_codegen_static_fields_for(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var))->___OnPostUpdate_23;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)VG_PostAnimator_Animate_m46D1E3C666759442539A1A989E2618B5028C5A2C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean VG_PostAnimator::GetOtherButtonTrigger(VirtualGrasp.VG_HandSide,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VG_PostAnimator_GetOtherButtonTrigger_mF8468942AA4C0D1BCEA5F57B4F953A5702C60A71 (VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3* __this, int32_t ___0_handSide, float* ___1_trigger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* G_B5_0 = NULL;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* G_B4_0 = NULL;
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* G_B6_1 = NULL;
	{
		// InputDevice device = UnityEngine.XR.InputDevices.GetDeviceAtXRNode(handSide == VG_HandSide.LEFT ? XRNode.LeftHand : XRNode.RightHand);
		int32_t L_0 = ___0_handSide;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 5;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 4;
	}

IL_0008:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_1;
		L_1 = InputDevices_GetDeviceAtXRNode_m3D322E7D1FFDA9C4D53E6B944E636C39B7A9592B(G_B3_0, NULL);
		V_0 = L_1;
		// return device.TryGetFeatureValue(VG_Controller.GetGraspButton() == VG_VrButton.TRIGGER ? CommonUsages.grip : CommonUsages.trigger, out trigger);
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = VG_Controller_GetGraspButton_m535D91CEAEB8C1639B9F0ADDA34315FBE44B961D(NULL);
		G_B4_0 = (&V_0);
		if (!L_2)
		{
			G_B5_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_3 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
		G_B6_0 = L_3;
		G_B6_1 = G_B4_0;
		goto IL_0023;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		G_B6_0 = L_4;
		G_B6_1 = G_B5_0;
	}

IL_0023:
	{
		float* L_5 = ___1_trigger;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(G_B6_1, G_B6_0, L_5, NULL);
		return L_6;
	}
}
// System.Void VG_PostAnimator::Animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_PostAnimator_Animate_m46D1E3C666759442539A1A989E2618B5028C5A2C (VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* V_1 = NULL;
	float V_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_1 = NULL;
	{
		// foreach (VG_HandStatus hand in VG_Controller.GetHands())
		il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
		List_1_t7DABA0AD1E24636A681F423945A4F65C382573D4* L_0;
		L_0 = VG_Controller_GetHands_m57240B89C94570358A8DEDD057959C8F6F7B99E3(NULL);
		NullCheck(L_0);
		Enumerator_t307D50B401152731B3BF80623B3BAC0E5C598FC6 L_1;
		L_1 = List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F(L_0, List_1_GetEnumerator_mF4E719EA1AA54ACAB3AF6BB6AEF6A3FE4CE0008F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C((&V_0), Enumerator_Dispose_m6F54F083535C021F032665667F6160343215A43C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_000d_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_2;
				L_2 = Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_inline((&V_0), Enumerator_get_Current_mE7AC2663B921ABDC5BBEDE1E2A7072FE32307DD6_RuntimeMethod_var);
				V_1 = L_2;
				// if (hand.m_selectedObject != transform || !hand.IsHolding())
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_3 = V_1;
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___m_selectedObject_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_5, NULL);
				if (L_6)
				{
					goto IL_0080_1;
				}
			}
			{
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_7 = V_1;
				NullCheck(L_7);
				bool L_8;
				L_8 = VG_HandStatus_IsHolding_m85CFD208152CB134D3AA2ECA0835FD84C14DDC4C(L_7, NULL);
				if (!L_8)
				{
					goto IL_0080_1;
				}
			}
			{
				// if (GetOtherButtonTrigger(hand.m_side, out float trigger) &&
				//     VG_Controller.GetFingerBone(hand.m_avatarID, hand.m_side, 1, 0, out Transform currentTransform) == VG_ReturnCode.SUCCESS)
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10 = L_9->___m_side_2;
				bool L_11;
				L_11 = VG_PostAnimator_GetOtherButtonTrigger_mF8468942AA4C0D1BCEA5F57B4F953A5702C60A71(__this, L_10, (&V_2), NULL);
				if (!L_11)
				{
					goto IL_0080_1;
				}
			}
			{
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13 = L_12->___m_avatarID_1;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_14 = V_1;
				NullCheck(L_14);
				int32_t L_15 = L_14->___m_side_2;
				il2cpp_codegen_runtime_class_init_inline(VG_Controller_t4DC5EC7B6B3BC28BAB3D0BE50D6B4804760F79DF_il2cpp_TypeInfo_var);
				int32_t L_16;
				L_16 = VG_Controller_GetFingerBone_m56ED2893BE35F5F9771769903EEE681E76D7E829(L_13, L_15, 1, 0, (&V_3), NULL);
				if (L_16)
				{
					goto IL_0080_1;
				}
			}
			{
				// currentTransform.localRotation = Quaternion.Slerp(hand.m_side == VG_HandSide.LEFT ?
				//     m_leftHandTargetRotation : m_rightHandTargetRotation,
				//     currentTransform.localRotation,
				//     trigger);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_3;
				VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* L_18 = V_1;
				NullCheck(L_18);
				int32_t L_19 = L_18->___m_side_2;
				G_B7_0 = L_17;
				if ((((int32_t)L_19) == ((int32_t)(-1))))
				{
					G_B8_0 = L_17;
					goto IL_0069_1;
				}
			}
			{
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = __this->___m_rightHandTargetRotation_5;
				G_B9_0 = L_20;
				G_B9_1 = G_B7_0;
				goto IL_006f_1;
			}

IL_0069_1:
			{
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = __this->___m_leftHandTargetRotation_4;
				G_B9_0 = L_21;
				G_B9_1 = G_B8_0;
			}

IL_006f_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_3;
				NullCheck(L_22);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
				L_23 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_22, NULL);
				float L_24 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
				L_25 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(G_B9_0, L_23, L_24, NULL);
				NullCheck(G_B9_1);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B9_1, L_25, NULL);
			}

IL_0080_1:
			{
				// foreach (VG_HandStatus hand in VG_Controller.GetHands())
				bool L_26;
				L_26 = Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326((&V_0), Enumerator_MoveNext_mD0B5F60ABE002796ACB704198681F4B509BAE326_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void VG_PostAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VG_PostAnimator__ctor_m270DF200E119D44D0F350011A84A0C0E8FD31D32 (VG_PostAnimator_t946DBB80CBEC46DE680F11CE462E1DDC80B1EDC3* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion m_leftHandTargetRotation = Quaternion.Euler(14.47f, -274.42f, -348.29f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((14.4700003f), (-274.420013f), (-348.290009f), NULL);
		__this->___m_leftHandTargetRotation_4 = L_0;
		// private Quaternion m_rightHandTargetRotation = Quaternion.Euler(14.47f, 274.42f, 348.29f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((14.4700003f), (274.420013f), (348.290009f), NULL);
		__this->___m_rightHandTargetRotation_5 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValidateFunction_Invoke_mE91694E73113C9C223E33FABB80B112367F4E06E_inline (ValidateFunction_t12FC6B60FAE1DD8D7244323F6E89C0A868891DDD* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, String_t** ___1_text, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hand, ___1_text, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EditFunction_Invoke_mEE682986FCB505F614ED496D58540BC3D43408CD_inline (EditFunction_t576233E2A827C31EEFDD332F4AD9DC03FD3E7246* __this, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC* ___0_hand, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VG_HandStatus_tCF81A2DFEBCFBBB98D470C290F114C6F5549FDCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hand, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_mD6A1C6E862F3EFB1B222A2DDCB7A7237042DE142_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m6569C17BC1C7EE2A7D2AFF4110EE75938C4FB16A_gshared_inline (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_rhs;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_lhs;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_rhs;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_lhs;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_rhs;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_lhs;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_rhs;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
