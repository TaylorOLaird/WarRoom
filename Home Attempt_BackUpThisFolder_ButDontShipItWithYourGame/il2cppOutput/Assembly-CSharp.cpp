#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
// ActivateRay
struct ActivateRay_t2D5B9FED28F243C4BDA91E272CE309EB90FF801B;
// AnimateHandOnInput
struct AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BeijingClock
struct BeijingClock_t974E147CEB37C915F91CB212AEBE5873E48B7A23;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraSwitch
struct CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Clock
struct Clock_t961ACEA6479E09F986C76D4C14638AE523AF2039;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CreateShip
struct CreateShip_tB449AD725F4ADC037E9AF93EC5B7201CF5843D7C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Game_Grid
struct Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B;
// GridCell
struct GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LaClock
struct LaClock_t8CD04F91B7B60A32CBB6BBB2C8F07784D372F5FA;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelReset
struct LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7;
// MapGenerator
struct MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuSceneLoader
struct MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NdClock
struct NdClock_tE179F20AE856A32D33F0F94C8990742022DB4196;
// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7;
// NyClock
struct NyClock_t6300E4DF812DDDFF60DDD0166335282569E4D920;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// TinForge.SimpleWarships.Rotate
struct Rotate_t6DE26530DBDEA1ED5C6550EA4116BF6A6B09D7F9;
// SceneAndURLLoader
struct SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShipMovement
struct ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C;
// ShotCounter
struct ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF;
// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// SydneyClock
struct SydneyClock_tEA3A71907D4B7542A0795594DB68BC9CFFA847CA;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ZULUClock
struct ZULUClock_t9E1F51ACAE8592D95A94D5B446F6D11E428250B9;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral217846CC99E2CDB05971BC69DE8429EAEC7C14E8;
IL2CPP_EXTERN_C String_t* _stringLiteral2FBBD4DAC9E303050D1AA5782535BE6ED0BA94C6;
IL2CPP_EXTERN_C String_t* _stringLiteral940FA0853A4D8E7D22D6A81B9FEE40B1FCAA77A3;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE9735F35FD61DFE63C3271178BD62AE25DBA30B2;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_mE3A2B8B70BE02BF611E4CFB660360A1B0A9F2A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_m3600335FB4112748FBB7A7865978E10681B8FA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGame_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D_m19FBA64B4218CCD2868863740D8C036D547E261F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A;
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
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

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972  : public RuntimeObject
{
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::mode
	int32_t ___mode_1;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::align
	int32_t ___align_2;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::maxCount
	int32_t ___maxCount_3;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::minDist
	float ___minDist_4;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::camOffset
	int32_t ___camOffset_5;
	// System.String UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::instructionText
	String_t* ___instructionText_6;
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC  : public RuntimeObject
{
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[] UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::items
	DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* ___items_0;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ActivateRay
struct ActivateRay_t2D5B9FED28F243C4BDA91E272CE309EB90FF801B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ActivateRay::leftRay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftRay_4;
	// UnityEngine.GameObject ActivateRay::rightRay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightRay_5;
	// UnityEngine.InputSystem.InputActionProperty ActivateRay::leftActivate
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___leftActivate_6;
	// UnityEngine.InputSystem.InputActionProperty ActivateRay::rightActivate
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___rightActivate_7;
	// UnityEngine.InputSystem.InputActionProperty ActivateRay::leftCancel
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___leftCancel_8;
	// UnityEngine.InputSystem.InputActionProperty ActivateRay::rightCancel
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___rightCancel_9;
};

// AnimateHandOnInput
struct AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty AnimateHandOnInput::pinchAnimationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___pinchAnimationAction_4;
	// UnityEngine.InputSystem.InputActionProperty AnimateHandOnInput::gripAnimationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___gripAnimationAction_5;
	// UnityEngine.Animator AnimateHandOnInput::handAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___handAnimator_6;
};

// BeijingClock
struct BeijingClock_t974E147CEB37C915F91CB212AEBE5873E48B7A23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BeijingClock::minutes
	int32_t ___minutes_4;
	// System.Int32 BeijingClock::hour
	int32_t ___hour_5;
	// System.Int32 BeijingClock::seconds
	int32_t ___seconds_6;
	// System.Boolean BeijingClock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject BeijingClock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject BeijingClock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject BeijingClock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single BeijingClock::clockSpeed
	float ___clockSpeed_11;
	// System.Single BeijingClock::msecs
	float ___msecs_12;
};

// CameraSwitch
struct CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] CameraSwitch::objects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objects_4;
	// UnityEngine.UI.Text CameraSwitch::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
	// System.Int32 CameraSwitch::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_6;
};

// Clock
struct Clock_t961ACEA6479E09F986C76D4C14638AE523AF2039  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Clock::minutes
	int32_t ___minutes_4;
	// System.Int32 Clock::hour
	int32_t ___hour_5;
	// System.Int32 Clock::seconds
	int32_t ___seconds_6;
	// System.Boolean Clock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject Clock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject Clock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject Clock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single Clock::clockSpeed
	float ___clockSpeed_11;
	// System.Single Clock::msecs
	float ___msecs_12;
};

// CreateShip
struct CreateShip_tB449AD725F4ADC037E9AF93EC5B7201CF5843D7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CreateShip::shipPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shipPrefab_4;
};

// Game_Grid
struct Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Game_Grid::height
	int32_t ___height_4;
	// System.Int32 Game_Grid::width
	int32_t ___width_5;
	// System.Single Game_Grid::GridSpaceSize
	float ___GridSpaceSize_6;
	// UnityEngine.GameObject Game_Grid::gridCellPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gridCellPrefab_7;
	// UnityEngine.GameObject[,] Game_Grid::gameGrid
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ___gameGrid_8;
};

// GridCell
struct GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GridCell::posX
	int32_t ___posX_4;
	// System.Int32 GridCell::posY
	int32_t ___posY_5;
	// UnityEngine.GameObject GridCell::objectInThisSpace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectInThisSpace_6;
	// System.Boolean GridCell::isOccupied
	bool ___isOccupied_7;
};

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Game_Grid InputManager::gameGrid
	Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* ___gameGrid_4;
	// UnityEngine.LayerMask InputManager::whatIsAGridLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsAGridLayer_5;
};

// LaClock
struct LaClock_t8CD04F91B7B60A32CBB6BBB2C8F07784D372F5FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LaClock::minutes
	int32_t ___minutes_4;
	// System.Int32 LaClock::hour
	int32_t ___hour_5;
	// System.Int32 LaClock::seconds
	int32_t ___seconds_6;
	// System.Boolean LaClock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject LaClock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject LaClock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject LaClock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single LaClock::clockSpeed
	float ___clockSpeed_11;
	// System.Single LaClock::msecs
	float ___msecs_12;
};

// LevelReset
struct LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MapGenerator
struct MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MapGenerator::tilePrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tilePrefab_4;
	// UnityEngine.Vector2 MapGenerator::mapSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mapSize_5;
	// UnityEngine.Vector3 MapGenerator::movement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___movement_6;
};

// MenuSceneLoader
struct MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuSceneLoader::menuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuUI_4;
	// UnityEngine.GameObject MenuSceneLoader::m_Go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Go_5;
};

// NdClock
struct NdClock_tE179F20AE856A32D33F0F94C8990742022DB4196  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NdClock::minutes
	int32_t ___minutes_4;
	// System.Int32 NdClock::hour
	int32_t ___hour_5;
	// System.Int32 NdClock::seconds
	int32_t ___seconds_6;
	// System.Boolean NdClock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject NdClock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject NdClock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject NdClock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single NdClock::clockSpeed
	float ___clockSpeed_11;
	// System.Single NdClock::msecs
	float ___msecs_12;
};

// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NyClock
struct NyClock_t6300E4DF812DDDFF60DDD0166335282569E4D920  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NyClock::minutes
	int32_t ___minutes_4;
	// System.Int32 NyClock::hour
	int32_t ___hour_5;
	// System.Int32 NyClock::seconds
	int32_t ___seconds_6;
	// System.Boolean NyClock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject NyClock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject NyClock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject NyClock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single NyClock::clockSpeed
	float ___clockSpeed_11;
	// System.Single NyClock::msecs
	float ___msecs_12;
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList UnityStandardAssets.SceneUtils.ParticleSceneControls::demoParticles
	DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* ___demoParticles_4;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::spawnOffset
	float ___spawnOffset_5;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::multiply
	float ___multiply_6;
	// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::clearOnChange
	bool ___clearOnChange_7;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_8;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::sceneCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sceneCamera_9;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::instructionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___instructionText_10;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::previousButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___previousButton_11;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::nextButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___nextButton_12;
	// UnityEngine.UI.GraphicRaycaster UnityStandardAssets.SceneUtils.ParticleSceneControls::graphicRaycaster
	GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* ___graphicRaycaster_13;
	// UnityEngine.EventSystems.EventSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::eventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem_14;
	// UnityStandardAssets.Effects.ParticleSystemMultiplier UnityStandardAssets.SceneUtils.ParticleSceneControls::m_ParticleMultiplier
	ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* ___m_ParticleMultiplier_15;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CurrentParticleList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___m_CurrentParticleList_16;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::m_Instance
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Instance_17;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CamOffsetVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CamOffsetVelocity_19;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_LastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastPos_20;
};

struct ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields
{
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls::s_SelectedIndex
	int32_t ___s_SelectedIndex_18;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::s_Selected
	DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* ___s_Selected_21;
};

// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_4;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle PauseMenu::m_MenuToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___m_MenuToggle_4;
	// System.Single PauseMenu::m_TimeScaleRef
	float ___m_TimeScaleRef_5;
	// System.Single PauseMenu::m_VolumeRef
	float ___m_VolumeRef_6;
	// System.Boolean PauseMenu::m_Paused
	bool ___m_Paused_7;
};

// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::surfaceOffset
	float ___surfaceOffset_4;
	// UnityEngine.GameObject UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::setTargetOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___setTargetOn_5;
};

// TinForge.SimpleWarships.Rotate
struct Rotate_t6DE26530DBDEA1ED5C6550EA4116BF6A6B09D7F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TinForge.SimpleWarships.Rotate::speed
	float ___speed_4;
};

// SceneAndURLLoader
struct SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PauseMenu SceneAndURLLoader::m_PauseMenu
	PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* ___m_PauseMenu_4;
};

// ShipMovement
struct ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ShotCounter
struct ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ShotCounter::_shotCounter
	int32_t ____shotCounter_4;
	// TMPro.TextMeshProUGUI ShotCounter::_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____text_5;
};

// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::FullSpeedTex
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___FullSpeedTex_4;
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::SlowSpeedTex
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SlowSpeedTex_5;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::fullSpeed
	float ___fullSpeed_6;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::slowSpeed
	float ___slowSpeed_7;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.SlowMoButton::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_8;
	// System.Boolean UnityStandardAssets.SceneUtils.SlowMoButton::m_SlowMo
	bool ___m_SlowMo_9;
};

// SydneyClock
struct SydneyClock_tEA3A71907D4B7542A0795594DB68BC9CFFA847CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SydneyClock::minutes
	int32_t ___minutes_4;
	// System.Int32 SydneyClock::hour
	int32_t ___hour_5;
	// System.Int32 SydneyClock::seconds
	int32_t ___seconds_6;
	// System.Boolean SydneyClock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject SydneyClock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject SydneyClock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject SydneyClock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single SydneyClock::clockSpeed
	float ___clockSpeed_11;
	// System.Single SydneyClock::msecs
	float ___msecs_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ZULUClock
struct ZULUClock_t9E1F51ACAE8592D95A94D5B446F6D11E428250B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ZULUClock::minutes
	int32_t ___minutes_4;
	// System.Int32 ZULUClock::hour
	int32_t ___hour_5;
	// System.Int32 ZULUClock::seconds
	int32_t ___seconds_6;
	// System.Boolean ZULUClock::realTime
	bool ___realTime_7;
	// UnityEngine.GameObject ZULUClock::pointerSeconds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerSeconds_8;
	// UnityEngine.GameObject ZULUClock::pointerMinutes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerMinutes_9;
	// UnityEngine.GameObject ZULUClock::pointerHours
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointerHours_10;
	// System.Single ZULUClock::clockSpeed
	float ___clockSpeed_11;
	// System.Single ZULUClock::msecs
	float ___msecs_12;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_11;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A  : public RuntimeArray
{
	ALIGN_FIELD (8) DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* m_Items[1];

	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m9030D634E27028B04973E7870665A800CBC60C20 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<PauseMenu>()
inline PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE (int32_t ___index0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Game_Grid::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Grid_CreateGrid_m28EFC1C30513D76072C8B058DAF4CB39B1F3B67C (Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GridCell>()
inline GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* GameObject_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_m3600335FB4112748FBB7A7865978E10681B8FA28 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___v0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Game_Grid>()
inline Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* Object_FindObjectOfType_TisGame_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D_m19FBA64B4218CCD2868863740D8C036D547E261F (const RuntimeMethod* method)
{
	return ((  Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// GridCell InputManager::isMouseOverAGridSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* InputManager_isMouseOverAGridSpace_mB70AAE5C8D22158C9DC658E8799CFBD817E7C3FC (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<GridCell>()
inline GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* Component_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_mE3A2B8B70BE02BF611E4CFB660360A1B0A9F2A9A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MapGenerator::GenerateMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_GenerateMap_m3B11B426064119B73C13E4B473584F9F9C49B75C (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ShotCounter::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter_UpdateText_m0CDF81C910662390DCAA4328D46A5EC68A6FF9B2 (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, int32_t ___i0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_m960B71319864DFB0B51F02487D8940EE09898479 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
inline ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9F174A6F7D2DBE4E1934892F3438405F379014E3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Selectable_get_targetGraphic_m659A2940226EC644AAFC2D5CCC326ABEE6384388_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
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
// System.Void ActivateRay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateRay_Update_mB83061D7F12F54C8356AB09AF98543512CE246A4 (ActivateRay_t2D5B9FED28F243C4BDA91E272CE309EB90FF801B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_1 = NULL;
	{
		// leftRay.SetActive(leftCancel.action.ReadValue<float>() == 0 && leftActivate.action.ReadValue<float>() > 0.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftRay_4;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_1 = (&__this->___leftCancel_8);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_1, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		G_B1_0 = L_0;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			G_B2_0 = L_0;
			goto IL_0036;
		}
	}
	{
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_4 = (&__this->___leftActivate_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_4, NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_5, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		G_B3_0 = ((((float)L_6) > ((float)(0.100000001f)))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_1, (bool)G_B3_0, NULL);
		// rightRay.SetActive(rightCancel.action.ReadValue<float>() == 0 && rightActivate.action.ReadValue<float>() > 0.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___rightRay_5;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_8 = (&__this->___rightCancel_9);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_8, NULL);
		NullCheck(L_9);
		float L_10;
		L_10 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_9, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		G_B4_0 = L_7;
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			G_B5_0 = L_7;
			goto IL_0072;
		}
	}
	{
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_11 = (&__this->___rightActivate_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_11, NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_12, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		G_B6_0 = ((((float)L_13) > ((float)(0.100000001f)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0073;
	}

IL_0072:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0073:
	{
		NullCheck(G_B6_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B6_1, (bool)G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void ActivateRay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateRay__ctor_m62C25C547BB37389A3BF41A13D17CFC0652FFCC5 (ActivateRay_t2D5B9FED28F243C4BDA91E272CE309EB90FF801B* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Clock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Start_mEA54CA01B93FC26FAA1F7E2D2D9A9CC6CF486B5F (Clock_t961ACEA6479E09F986C76D4C14638AE523AF2039* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// hour=System.DateTime.Now.Hour;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = L_2;
		// minutes=System.DateTime.Now.Minute;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = L_4;
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Clock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Update_mCB87CB853657454E30965EFCF9FFEEEA127F1457 (Clock_t961ACEA6479E09F986C76D4C14638AE523AF2039* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void Clock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock__ctor_mCFEE07421BE23EE1AD7EFD2A52BBAF69C411C398 (Clock_t961ACEA6479E09F986C76D4C14638AE523AF2039* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void MenuSceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader_Awake_m59CE267E4C8D98F884E0A49746A43D5326243103 (MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Go == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Go_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Go = Instantiate(menuUI);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuUI_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___m_Go_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Go_5), (void*)L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MenuSceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader__ctor_mCE6502BBE1BD8968925AFC82F58798CCFE265260 (MenuSceneLoader_tB2C4C717B14D24B7B409BAA1B0E2494629A494B1* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mD17C2664126E61F76112D3C96B5A4684E0D00B66 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MenuToggle = GetComponent <Toggle> ();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0;
		L_0 = Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE(__this, Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		__this->___m_MenuToggle_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MenuToggle_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m9030D634E27028B04973E7870665A800CBC60C20 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// m_TimeScaleRef = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		__this->___m_TimeScaleRef_5 = L_0;
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// m_VolumeRef = AudioListener.volume;
		float L_1;
		L_1 = AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A(NULL);
		__this->___m_VolumeRef_6 = L_1;
		// AudioListener.volume = 0f;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((0.0f), NULL);
		// m_Paused = true;
		__this->___m_Paused_7 = (bool)1;
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = m_TimeScaleRef;
		float L_0 = __this->___m_TimeScaleRef_5;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(L_0, NULL);
		// AudioListener.volume = m_VolumeRef;
		float L_1 = __this->___m_VolumeRef_6;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721(L_1, NULL);
		// m_Paused = false;
		__this->___m_Paused_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PauseMenu::OnMenuStatusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnMenuStatusChange_mCEB82D67AAC49CD9667E4E6F57E0573F40DE5E15 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if (m_MenuToggle.isOn && !m_Paused)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___m_MenuToggle_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = __this->___m_Paused_7;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// MenuOn();
		PauseMenu_MenuOn_m9030D634E27028B04973E7870665A800CBC60C20(__this, NULL);
		return;
	}

IL_001c:
	{
		// else if (!m_MenuToggle.isOn && m_Paused)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___m_MenuToggle_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		bool L_5 = __this->___m_Paused_7;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// MenuOff();
		PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18(__this, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// private float m_TimeScaleRef = 1f;
		__this->___m_TimeScaleRef_5 = (1.0f);
		// private float m_VolumeRef = 1f;
		__this->___m_VolumeRef_6 = (1.0f);
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
// System.Void SceneAndURLLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_Awake_m5866D81A687D72DBA9BBF5853919C7FBB9893285 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu = GetComponentInChildren <PauseMenu> ();
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_0;
		L_0 = Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6(__this, Component_GetComponentInChildren_TisPauseMenu_t36539DEACE8377BD498A235C80769301799E1985_m1006D5934A242764425928B642A1DA98B564C0C6_RuntimeMethod_var);
		__this->___m_PauseMenu_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PauseMenu_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::SceneLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_SceneLoad_m73E130A3BC5EA9A793375A482D665F72C3A6D3B0 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu.MenuOff ();
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_0 = __this->___m_PauseMenu_4;
		NullCheck(L_0);
		PauseMenu_MenuOff_m8030826E97D9A80CDB149C510EA1BABC5BA05C18(L_0, NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_1 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_LoadURL_m4A45D5E370CD6B9585AE873C96134C3919DE2CB6 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader__ctor_mFAD0FEC646B0633467E3FE62E974B3176347E753 (SceneAndURLLoader_t92F763949B50192DA195986B5F4AF130A055719E* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void CameraSwitch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_OnEnable_mCECA93E391A7391B1EF886DDA013217F1D71D3C2 (CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C* __this, const RuntimeMethod* method) 
{
	{
		// text.text = objects[m_CurrentActiveObject].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___objects_4;
		int32_t L_2 = __this->___m_CurrentActiveObject_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void CameraSwitch::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_NextCamera_m7BF63EC241B63827337BBC94AA293E51512AD146 (CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// int nextactiveobject = m_CurrentActiveObject + 1 >= objects.Length ? 0 : m_CurrentActiveObject + 1;
		int32_t L_0 = __this->___m_CurrentActiveObject_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___objects_4;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___m_CurrentActiveObject_6;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < objects.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// objects[i].SetActive(i == nextactiveobject);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___objects_4;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), NULL);
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___objects_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		// m_CurrentActiveObject = nextactiveobject;
		int32_t L_12 = V_0;
		__this->___m_CurrentActiveObject_6 = L_12;
		// text.text = objects[m_CurrentActiveObject].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___text_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___objects_4;
		int32_t L_15 = __this->___m_CurrentActiveObject_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void CameraSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch__ctor_m353D283057D459AABE2512B589AA33005E29595A (CameraSwitch_tB9EC45074FB9E0AB46A1D539728DD0C63679058C* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LevelReset::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset_OnPointerClick_mA2238CC8C7F013863589F2499CD4857B3073AC9C (LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE(0, NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset__ctor_m5F459BC67BF9A94E5A4A6279F1B0E1F312A9B248 (LevelReset_t9EA6532EFA025B9EFE7BDD0E62FA9B69972B47B7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void AnimateHandOnInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput_Start_mDFB567101BCB7DCE653AE7E320015E93D3609592 (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AnimateHandOnInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput_Update_mC03CF4BE3804324BBC246D79B71F83B1A8848CDD (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float triggerValue = pinchAnimationAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___pinchAnimationAction_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_2;
		// handAnimator.SetFloat("Trigger", triggerValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___handAnimator_6;
		float L_4 = V_0;
		NullCheck(L_3);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_4, NULL);
		// float gripValue = gripAnimationAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_5 = (&__this->___gripAnimationAction_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_5, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_6, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_1 = L_7;
		// handAnimator.SetFloat("Grip", gripValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___handAnimator_6;
		float L_9 = V_1;
		NullCheck(L_8);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_8, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_9, NULL);
		// }
		return;
	}
}
// System.Void AnimateHandOnInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput__ctor_mEA43A853FB1CB874A55072BFBF7A8B78BEF60F1C (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void BeijingClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeijingClock_Start_m36AE7DDC742987B7A12C9EF35ECB980AE9711DC5 (BeijingClock_t974E147CEB37C915F91CB212AEBE5873E48B7A23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// hour=System.DateTime.Now.Hour+13;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)13)));
		// minutes=System.DateTime.Now.Minute;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = L_4;
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void BeijingClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeijingClock_Update_m342CC6DE916B7766EBD22105269388E440814FA2 (BeijingClock_t974E147CEB37C915F91CB212AEBE5873E48B7A23* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void BeijingClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeijingClock__ctor_m585E353C520E1AF051CAA441B3881BB39708D314 (BeijingClock_t974E147CEB37C915F91CB212AEBE5873E48B7A23* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void CreateShip::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateShip_onClick_m6015FEF0B69F4D1CBC0E45395267F3879CA42AED (CreateShip_tB449AD725F4ADC037E9AF93EC5B7201CF5843D7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(shipPrefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shipPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CreateShip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateShip__ctor_m7B13ED46FF343092C7082589ED2D21AC7606BFFE (CreateShip_tB449AD725F4ADC037E9AF93EC5B7201CF5843D7C* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Game_Grid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Grid_Start_m547F3A1791027B332C27EF4CC25E27C1CD9C1444 (Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* __this, const RuntimeMethod* method) 
{
	{
		// CreateGrid();
		Game_Grid_CreateGrid_m28EFC1C30513D76072C8B058DAF4CB39B1F3B67C(__this, NULL);
		// }
		return;
	}
}
// System.Void Game_Grid::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Grid_CreateGrid_m28EFC1C30513D76072C8B058DAF4CB39B1F3B67C (Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_m3600335FB4112748FBB7A7865978E10681B8FA28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral217846CC99E2CDB05971BC69DE8429EAEC7C14E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FBBD4DAC9E303050D1AA5782535BE6ED0BA94C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral940FA0853A4D8E7D22D6A81B9FEE40B1FCAA77A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9735F35FD61DFE63C3271178BD62AE25DBA30B2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// gameGrid = new GameObject[height, width];
		int32_t L_0 = __this->___height_4;
		int32_t L_1 = __this->___width_5;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_2 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_3);
		__this->___gameGrid_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameGrid_8), (void*)L_2);
		// if(gridCellPrefab == null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gridCellPrefab_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("ERROR: Grid Cell Prefab on the Game Grid Prefab is not assigned");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral217846CC99E2CDB05971BC69DE8429EAEC7C14E8, NULL);
	}

IL_002f:
	{
		// for (int y = 0; y < height; y++){
		V_0 = 0;
		goto IL_0155;
	}

IL_0036:
	{
		// for (int x = 0; x < width; x++){
		V_1 = 0;
		goto IL_0145;
	}

IL_003d:
	{
		// gameGrid[x, y] = Instantiate(gridCellPrefab, new Vector3(x * GridSpaceSize/10 - 1.691853f, 0 - 0.6086f, y * GridSpaceSize/10 - 1.377926f), Quaternion.Euler(new Vector3(0, 0, 0)));
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_6 = __this->___gameGrid_8;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___gridCellPrefab_7;
		int32_t L_10 = V_1;
		float L_11 = __this->___GridSpaceSize_6;
		int32_t L_12 = V_0;
		float L_13 = __this->___GridSpaceSize_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_multiply(((float)L_10), L_11))/(10.0f))), (1.69185305f))), (-0.60860002f), ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_multiply(((float)L_12), L_13))/(10.0f))), (1.37792599f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_9, L_14, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_6);
		(L_6)->SetAt(L_7, L_8, L_17);
		// gameGrid[x, y].transform.parent = transform;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_18 = __this->___gameGrid_8;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = (L_18)->GetAt(L_19, L_20);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_22, L_23, NULL);
		// gameGrid[x, y].gameObject.name = "Grid Space ( X: " + (x * GridSpaceSize/10).ToString() + " , Y: " + y.ToString() + ")";
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_24 = __this->___gameGrid_8;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = (L_24)->GetAt(L_25, L_26);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_27, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralE9735F35FD61DFE63C3271178BD62AE25DBA30B2);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE9735F35FD61DFE63C3271178BD62AE25DBA30B2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		int32_t L_32 = V_1;
		float L_33 = __this->___GridSpaceSize_6;
		V_2 = ((float)(((float)il2cpp_codegen_multiply(((float)L_32), L_33))/(10.0f)));
		String_t* L_34;
		L_34 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral2FBBD4DAC9E303050D1AA5782535BE6ED0BA94C6);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2FBBD4DAC9E303050D1AA5782535BE6ED0BA94C6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_36;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_39;
		L_39 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_38, NULL);
		NullCheck(L_28);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_28, L_39, NULL);
		// if(gameGrid[x, y].GetComponent<GridCell>() == null){
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_40 = __this->___gameGrid_8;
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = (L_40)->GetAt(L_41, L_42);
		NullCheck(L_43);
		GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* L_44;
		L_44 = GameObject_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_m3600335FB4112748FBB7A7865978E10681B8FA28(L_43, GameObject_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_m3600335FB4112748FBB7A7865978E10681B8FA28_RuntimeMethod_var);
		bool L_45;
		L_45 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_0141;
		}
	}
	{
		// Debug.LogError("No component Found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral940FA0853A4D8E7D22D6A81B9FEE40B1FCAA77A3, NULL);
	}

IL_0141:
	{
		// for (int x = 0; x < width; x++){
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0145:
	{
		// for (int x = 0; x < width; x++){
		int32_t L_47 = V_1;
		int32_t L_48 = __this->___width_5;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_003d;
		}
	}
	{
		// for (int y = 0; y < height; y++){
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0155:
	{
		// for (int y = 0; y < height; y++){
		int32_t L_50 = V_0;
		int32_t L_51 = __this->___height_4;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int Game_Grid::GetGridPosFromWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Game_Grid_GetGridPosFromWorld_m43F4E08E48FF07C44EAD7B620A7A94CC721543C1 (Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int x = Mathf.FloorToInt(worldPosition.x / GridSpaceSize / 10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		float L_1 = L_0.___x_2;
		float L_2 = __this->___GridSpaceSize_6;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(((float)(L_1/L_2))/(10.0f))), NULL);
		// int y = Mathf.FloorToInt(worldPosition.z / GridSpaceSize / 10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___worldPosition0;
		float L_5 = L_4.___z_4;
		float L_6 = __this->___GridSpaceSize_6;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(((float)(L_5/L_6))/(10.0f))), NULL);
		V_0 = L_7;
		// x = Mathf.Clamp(x, 0, width);
		int32_t L_8 = __this->___width_5;
		int32_t L_9;
		L_9 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 0, L_8, NULL);
		// y = Mathf.Clamp(x, 0, height);
		int32_t L_10 = L_9;
		int32_t L_11 = __this->___height_4;
		int32_t L_12;
		L_12 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_10, 0, L_11, NULL);
		V_0 = L_12;
		// return new Vector2Int(x, y);
		int32_t L_13 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_14), L_10, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Vector3 Game_Grid::GetWorldPosFromGridPos(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Game_Grid_GetWorldPosFromGridPos_mF81D40603BD49FA6C739586E92DDFD2277A9AD4D (Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___gridPos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = gridPos.x * GridSpaceSize / 10;
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___gridPos0), NULL);
		float L_1 = __this->___GridSpaceSize_6;
		// float y = gridPos.y * GridSpaceSize / 10;
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___gridPos0), NULL);
		float L_3 = __this->___GridSpaceSize_6;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)L_2), L_3))/(10.0f)));
		// return new Vector3(x, 0 , y);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)(((float)il2cpp_codegen_multiply(((float)L_0), L_1))/(10.0f))), (0.0f), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Game_Grid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Grid__ctor_mE18CB6F2F6735EECCC9632B901E2287C03D01467 (Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* __this, const RuntimeMethod* method) 
{
	{
		// private int height = 12;
		__this->___height_4 = ((int32_t)12);
		// private int width = 12;
		__this->___width_5 = ((int32_t)12);
		// private float GridSpaceSize = 2.5f;
		__this->___GridSpaceSize_6 = (2.5f);
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
// System.Void GridCell::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCell_SetPosition_m2C89DFFCFAB99EB3085B729635EBB61247DFD993 (GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* __this, int32_t ___X0, int32_t ___Y1, const RuntimeMethod* method) 
{
	{
		// posX = X;
		int32_t L_0 = ___X0;
		__this->___posX_4 = L_0;
		// posY = Y;
		int32_t L_1 = ___Y1;
		__this->___posY_5 = L_1;
		// }
		return;
	}
}
// UnityEngine.Vector2 GridCell::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridCell_GetPosition_mC105C8A10038D116D62F56525ACBC9E9164CC13A (GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2Int(posX, posY);
		int32_t L_0 = __this->___posX_4;
		int32_t L_1 = __this->___posY_5;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void GridCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCell__ctor_m1C63E4000F3B52D734FEC1DBF7A0ED2B3734C4A3 (GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void InputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Start_m1C1F4D73A508DB32B5D6E294F12240923279FB10 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGame_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D_m19FBA64B4218CCD2868863740D8C036D547E261F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameGrid = FindObjectOfType<Game_Grid>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Game_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D* L_0;
		L_0 = Object_FindObjectOfType_TisGame_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D_m19FBA64B4218CCD2868863740D8C036D547E261F(Object_FindObjectOfType_TisGame_Grid_tB68A22ABBB81247AA8749A65A5101972341F048D_m19FBA64B4218CCD2868863740D8C036D547E261F_RuntimeMethod_var);
		__this->___gameGrid_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameGrid_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_m5CEF4B04E7336E0F24B004F98C71799F3DFD5656 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* V_0 = NULL;
	{
		// GridCell cellMouseIsOver = isMouseOverAGridSpace();
		GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* L_0;
		L_0 = InputManager_isMouseOverAGridSpace_mB70AAE5C8D22158C9DC658E8799CFBD817E7C3FC(__this, NULL);
		V_0 = L_0;
		// if(cellMouseIsOver != null)
		GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// if(Input.GetMouseButtonDown(0)){
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// cellMouseIsOver.GetComponentInChildren<SpriteRenderer>().material.color = Color.green;
		GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* L_4 = V_0;
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF(L_4, Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_6);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_6, L_7, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// GridCell InputManager::isMouseOverAGridSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* InputManager_isMouseOverAGridSpace_mB70AAE5C8D22158C9DC658E8799CFBD817E7C3FC (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_mE3A2B8B70BE02BF611E4CFB660360A1B0A9F2A9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if(Physics.Raycast(ray, out RaycastHit hitInfo, 100F, whatIsAGridLayer))
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___whatIsAGridLayer_5;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		bool L_5;
		L_5 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_2, (&V_0), (100.0f), L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// return hitInfo.transform.GetComponent<GridCell>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_6);
		GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3* L_7;
		L_7 = Component_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_mE3A2B8B70BE02BF611E4CFB660360A1B0A9F2A9A(L_6, Component_GetComponent_TisGridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3_mE3A2B8B70BE02BF611E4CFB660360A1B0A9F2A9A_RuntimeMethod_var);
		return L_7;
	}

IL_0035:
	{
		// return null;
		return (GridCell_t4804DEBB391E2710E77F1502817B58E896FB24D3*)NULL;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m52D2F3B9FA0D50C52BCC92486F49B300E9334C2A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LaClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaClock_Start_m3A5C0065AD03855589727510B7009C3868CD4A57 (LaClock_t8CD04F91B7B60A32CBB6BBB2C8F07784D372F5FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// hour=System.DateTime.Now.Hour-3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = ((int32_t)il2cpp_codegen_subtract(L_2, 3));
		// minutes=System.DateTime.Now.Minute;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = L_4;
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void LaClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaClock_Update_m46794D81FA0ED4249C6A56A9E17DFE8C8A943C1C (LaClock_t8CD04F91B7B60A32CBB6BBB2C8F07784D372F5FA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void LaClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaClock__ctor_mD41AB3D14CED9123CB2279A2314C45E44A1789E0 (LaClock_t8CD04F91B7B60A32CBB6BBB2C8F07784D372F5FA* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void MapGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_Start_m5EBCAA1FAF824AF85CCE35C0E8A6D3342F3865D0 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	{
		// GenerateMap();
		MapGenerator_GenerateMap_m3B11B426064119B73C13E4B473584F9F9C49B75C(__this, NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::GenerateMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_GenerateMap_m3B11B426064119B73C13E4B473584F9F9C49B75C (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int x = 0; x < mapSize.x; x++)
		V_0 = 0;
		goto IL_0082;
	}

IL_0004:
	{
		// for (int y = 0; y < mapSize.y; y++)
		V_1 = 0;
		goto IL_006f;
	}

IL_0008:
	{
		// Vector3 tilePosition = new Vector3(-mapSize.x / 2 + 0.5f + x, 1.87035f, -mapSize.y / 2 + 0.5f + y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___mapSize_5);
		float L_1 = L_0->___x_0;
		int32_t L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___mapSize_5);
		float L_4 = L_3->___y_1;
		int32_t L_5 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(((-L_1))/(2.0f))), (0.5f))), ((float)L_2))), (1.87035f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(((-L_4))/(2.0f))), (0.5f))), ((float)L_5))), NULL);
		// Transform newTile = Instantiate(tilePrefab, tilePosition, Quaternion.Euler(Vector3.right * 90)) as Transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___tilePrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, (90.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_6, L_7, L_10, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		// for (int y = 0; y < mapSize.y; y++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006f:
	{
		// for (int y = 0; y < mapSize.y; y++)
		int32_t L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___mapSize_5);
		float L_15 = L_14->___y_1;
		if ((((float)((float)L_13)) < ((float)L_15)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int x = 0; x < mapSize.x; x++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0082:
	{
		// for (int x = 0; x < mapSize.x; x++)
		int32_t L_17 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___mapSize_5);
		float L_19 = L_18->___x_0;
		if ((((float)((float)L_17)) < ((float)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator__ctor_m86E4AFA71DF9FE834A78B8AE615BB15E4F477521 (MapGenerator_tF06BD24367649B5388369163E0012EEBF4263A8A* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void NdClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NdClock_Start_m6FC7FDE73C3FB23070E109E544F26D8C51F96F98 (NdClock_tE179F20AE856A32D33F0F94C8990742022DB4196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// hour=System.DateTime.Now.Hour+10;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)10)));
		// minutes=System.DateTime.Now.Minute+30;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)30)));
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void NdClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NdClock_Update_mA8C3A06FF46E03FC0F83C46E7A91762B1A1B18E8 (NdClock_tE179F20AE856A32D33F0F94C8990742022DB4196* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void NdClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NdClock__ctor_mBF1BA1D7D0A1FB60150D96B861E8EDA0166E0539 (NdClock_tE179F20AE856A32D33F0F94C8990742022DB4196* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_mDEAA416D3A6676A79851DDF6B62D676E53372A87 (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m68CAC9D7524B9FA1DFCA3F99BA694CD73147209B (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mD2E080DE77BCDB61B6D2EC8AD996FAE611B97F3C (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void NyClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NyClock_Start_mF8DDFF34219EF9B8A54C570D3C7B9049E6366EDD (NyClock_t6300E4DF812DDDFF60DDD0166335282569E4D920* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// hour=System.DateTime.Now.Hour;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = L_2;
		// minutes=System.DateTime.Now.Minute;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = L_4;
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void NyClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NyClock_Update_m94179DF42903D99AE94595690AA361357C1F84E7 (NyClock_t6300E4DF812DDDFF60DDD0166335282569E4D920* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void NyClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NyClock__ctor_m0E30BC47314705579B07632DF2DAF018866221D6 (NyClock_t6300E4DF812DDDFF60DDD0166335282569E4D920* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void ShipMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipMovement_Update_m89570A31777673181F25A3206B38F1984DC1DAC9 (ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Fire1"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// transform.position += Vector3.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_5, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ShipMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipMovement__ctor_mCAA01E0F49241DA312AB32000E4B96F090ADAA0E (ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ShotCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter_Start_mE1C5C29E534FE9E3020E21D834CEE906C3293F35 (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->____text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_5), (void*)L_0);
		// UpdateText();
		ShotCounter_UpdateText_m0CDF81C910662390DCAA4328D46A5EC68A6FF9B2(__this, NULL);
		// }
		return;
	}
}
// System.Void ShotCounter::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter_OnDestroy_m85AC981F8EEA700E2D2A9CF9D27CD7A6C170F42E (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShotCounter::ResetCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter_ResetCounter_m42EB1E298BC9E5331F471238BB70060FF3AB4D1E (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) 
{
	{
		// _shotCounter = 0;
		__this->____shotCounter_4 = 0;
		// UpdateText();
		ShotCounter_UpdateText_m0CDF81C910662390DCAA4328D46A5EC68A6FF9B2(__this, NULL);
		// }
		return;
	}
}
// System.Void ShotCounter::IncreaseCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter_IncreaseCounter_m5EFBA66315531E621531F6729AE614A5D2ABEEB1 (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) 
{
	{
		// _shotCounter++;
		int32_t L_0 = __this->____shotCounter_4;
		__this->____shotCounter_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// UpdateText();
		ShotCounter_UpdateText_m0CDF81C910662390DCAA4328D46A5EC68A6FF9B2(__this, NULL);
		// }
		return;
	}
}
// System.Void ShotCounter::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter_UpdateText_m0CDF81C910662390DCAA4328D46A5EC68A6FF9B2 (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) 
{
	{
		// _text.text = _shotCounter.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->____text_5;
		int32_t* L_1 = (&__this->____shotCounter_4);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void ShotCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShotCounter__ctor_m4186000DD7D99C212C90DF76671520AA8D3F36C3 (ShotCounter_t9B35103E126E27028D374FC6DA0AB632E2581CDF* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SydneyClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SydneyClock_Start_mBE1F3E33FB689DC0984ABCF776A6AEC7838FA42A (SydneyClock_tEA3A71907D4B7542A0795594DB68BC9CFFA847CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// hour=System.DateTime.Now.Hour+16;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)16)));
		// minutes=System.DateTime.Now.Minute;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = L_4;
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void SydneyClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SydneyClock_Update_m1E82EA47691EA72359D5F9A26194D94B2222F363 (SydneyClock_tEA3A71907D4B7542A0795594DB68BC9CFFA847CA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void SydneyClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SydneyClock__ctor_m373D6C31E77993F17F9EE31E5E287C9D468E6684 (SydneyClock_tEA3A71907D4B7542A0795594DB68BC9CFFA847CA* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void ZULUClock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZULUClock_Start_mEB3A4350B9D3B30372BCF2556F6F91DCC016E998 (ZULUClock_t9E1F51ACAE8592D95A94D5B446F6D11E428250B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (realTime)
		bool L_0 = __this->___realTime_7;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// hour=System.DateTime.Now.Hour+5;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_2, 5));
		// minutes=System.DateTime.Now.Minute;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		__this->___minutes_4 = L_4;
		// seconds=System.DateTime.Now.Second;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		__this->___seconds_6 = L_6;
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ZULUClock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZULUClock_Update_mDAF9BDEBC3BDBA0513FA8D500DDFC5125950C6BE (ZULUClock_t9E1F51ACAE8592D95A94D5B446F6D11E428250B9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// msecs += Time.deltaTime * clockSpeed;
		float L_0 = __this->___msecs_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___clockSpeed_11;
		__this->___msecs_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(msecs >= 1.0f)
		float L_3 = __this->___msecs_12;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// msecs -= 1.0f;
		float L_4 = __this->___msecs_12;
		__this->___msecs_12 = ((float)il2cpp_codegen_subtract(L_4, (1.0f)));
		// seconds++;
		int32_t L_5 = __this->___seconds_6;
		__this->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(seconds >= 60)
		int32_t L_6 = __this->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// seconds = 0;
		__this->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = __this->___minutes_4;
		__this->___minutes_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if(minutes > 60)
		int32_t L_8 = __this->___minutes_4;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0095;
		}
	}
	{
		// minutes = 0;
		__this->___minutes_4 = 0;
		// hour++;
		int32_t L_9 = __this->___hour_5;
		__this->___hour_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// if(hour >= 24)
		int32_t L_10 = __this->___hour_5;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)24))))
		{
			goto IL_0095;
		}
	}
	{
		// hour = 0;
		__this->___hour_5 = 0;
	}

IL_0095:
	{
		// float rotationSeconds = (360.0f / 60.0f)  * seconds;
		int32_t L_11 = __this->___seconds_6;
		V_0 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_11)));
		// float rotationMinutes = (360.0f / 60.0f)  * minutes;
		int32_t L_12 = __this->___minutes_4;
		V_1 = ((float)il2cpp_codegen_multiply((6.0f), ((float)L_12)));
		// float rotationHours   = ((360.0f / 12.0f) * hour) + ((360.0f / (60.0f * 12.0f)) * minutes);
		int32_t L_13 = __this->___hour_5;
		int32_t L_14 = __this->___minutes_4;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((30.0f), ((float)L_13))), ((float)il2cpp_codegen_multiply((0.5f), ((float)L_14)))));
		// pointerSeconds.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationSeconds);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pointerSeconds_8;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_16, L_18, NULL);
		// pointerMinutes.transform.localEulerAngles = new Vector3(0.0f, 0.0f, rotationMinutes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pointerMinutes_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_20, L_22, NULL);
		// pointerHours.transform.localEulerAngles   = new Vector3(0.0f, 0.0f, rotationHours);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pointerHours_10;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void ZULUClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZULUClock__ctor_m4C2EC286BE9EE46A37AD01AA8EC6D5AA932D26D4 (ZULUClock_t9E1F51ACAE8592D95A94D5B446F6D11E428250B9* __this, const RuntimeMethod* method) 
{
	{
		// public bool realTime=true;
		__this->___realTime_7 = (bool)1;
		// public float clockSpeed = 1.0f;     // 1.0f = realtime, < 1.0f = slower, > 1.0f = faster
		__this->___clockSpeed_11 = (1.0f);
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
// System.Void TinForge.SimpleWarships.Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m31E8142A5C26E590726EDF694AA3A4AD6FEC5CB9 (Rotate_t6DE26530DBDEA1ED5C6550EA4116BF6A6B09D7F9* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void TinForge.SimpleWarships.Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mADCCAA4758B75E153C3F49D975530D24947D9DB9 (Rotate_t6DE26530DBDEA1ED5C6550EA4116BF6A6B09D7F9* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Awake_m7AD1EEC9E00076B93F16886376A22C155BF2AF0C (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Select(s_SelectedIndex);
		int32_t L_0 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091(__this, L_0, NULL);
		// previousButton.onClick.AddListener(Previous);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___previousButton_11;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// nextButton.onClick.AddListener(Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___nextButton_12;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_OnDisable_m6686EE2C55BAAF9C8A2B2CB3757875C2BB3DAE99 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// previousButton.onClick.RemoveListener (Previous);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___previousButton_11;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// nextButton.onClick.RemoveListener (Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___nextButton_12;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Previous_mCA412358968E80B7918A6A0ACA8B9D69BDBBA081 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex--;
		int32_t L_0 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (s_SelectedIndex == -1)
		int32_t L_1 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		// s_SelectedIndex = demoParticles.items.Length - 1;
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_2 = __this->___demoParticles_4;
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_3 = L_2->___items_0;
		NullCheck(L_3);
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
	}

IL_0028:
	{
		// Select(s_SelectedIndex);
		int32_t L_4 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Next_mF607DF0E31B7407AD6A38D97ED115B351D764D00 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex++;
		int32_t L_0 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (s_SelectedIndex == demoParticles.items.Length)
		int32_t L_1 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_2 = __this->___demoParticles_4;
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_3 = L_2->___items_0;
		NullCheck(L_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// s_SelectedIndex = 0;
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18 = 0;
	}

IL_0026:
	{
		// Select(s_SelectedIndex);
		int32_t L_4 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_SelectedIndex_18;
		ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Update_m26C22D90E8DA0BAEBFA2D05AD6D3BD4594AD6433 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		// sceneCamera.localPosition = Vector3.SmoothDamp(sceneCamera.localPosition, Vector3.forward*-s_Selected.camOffset,
		//                                            ref m_CamOffsetVelocity, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___sceneCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___sceneCamera_9;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_4 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___camOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, ((float)((-L_5))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___m_CamOffsetVelocity_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_2, L_6, L_7, (1.0f), NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// if (s_Selected.mode == Mode.Activate)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_9 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_9);
		int32_t L_10 = L_9->___mode_1;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (CheckForGuiCollision()) return;
		bool L_11;
		L_11 = ParticleSceneControls_CheckForGuiCollision_m960B71319864DFB0B51F02487D8940EE09898479(__this, NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// if (CheckForGuiCollision()) return;
		return;
	}

IL_0052:
	{
		// bool oneShotClick = (Input.GetMouseButtonDown(0) && s_Selected.mode == Mode.Instantiate);
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_13 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_13);
		int32_t L_14 = L_13->___mode_1;
		G_B7_0 = ((((int32_t)L_14) == ((int32_t)1))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B7_0 = 0;
	}

IL_006a:
	{
		// bool repeat = (Input.GetMouseButton(0) && s_Selected.mode == Mode.Trail);
		bool L_15;
		L_15 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		G_B8_0 = G_B7_0;
		if (!L_15)
		{
			G_B9_0 = G_B7_0;
			goto IL_0081;
		}
	}
	{
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_16 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_16);
		int32_t L_17 = L_16->___mode_1;
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		G_B10_1 = G_B8_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0082:
	{
		V_0 = (bool)G_B10_0;
		// if (oneShotClick || repeat)
		bool L_18 = V_0;
		if (!((int32_t)(G_B10_1|(int32_t)L_18)))
		{
			goto IL_0241;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_19);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_21;
		L_21 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_19, L_20, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_22;
		L_22 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_21, (&V_1), NULL);
		if (!L_22)
		{
			goto IL_0241;
		}
	}
	{
		// var rot = Quaternion.LookRotation(hit.normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_23, NULL);
		V_2 = L_24;
		// if (s_Selected.align == AlignMode.Up)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_25 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_25);
		int32_t L_26 = L_25->___align_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		// rot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_2 = L_27;
	}

IL_00c5:
	{
		// var pos = hit.point + hit.normal*spawnOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		float L_30 = __this->___spawnOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		V_3 = L_32;
		// if ((pos - m_LastPos).magnitude > s_Selected.minDist)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___m_LastPos_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_34, NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_37 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_37);
		float L_38 = L_37->___minDist_4;
		if ((!(((float)L_36) > ((float)L_38))))
		{
			goto IL_0241;
		}
	}
	{
		// if (s_Selected.mode != Mode.Trail || m_Instance == null)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_39 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_39);
		int32_t L_40 = L_39->___mode_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_0126;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___m_Instance_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_01ce;
		}
	}

IL_0126:
	{
		// m_Instance = (Transform) Instantiate(s_Selected.transform, pos, rot);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_43 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = L_43->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_44, L_45, L_46, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		__this->___m_Instance_17 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Instance_17), (void*)L_47);
		// if (m_ParticleMultiplier != null)
		ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* L_48 = __this->___m_ParticleMultiplier_15;
		bool L_49;
		L_49 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_49)
		{
			goto IL_0161;
		}
	}
	{
		// m_Instance.GetComponent<ParticleSystemMultiplier>().multiplier = multiply;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___m_Instance_17;
		NullCheck(L_50);
		ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* L_51;
		L_51 = Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634(L_50, Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		float L_52 = __this->___multiply_6;
		NullCheck(L_51);
		L_51->___multiplier_4 = L_52;
	}

IL_0161:
	{
		// m_CurrentParticleList.Add(m_Instance);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_53 = __this->___m_CurrentParticleList_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = __this->___m_Instance_17;
		NullCheck(L_53);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_53, L_54, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// if (s_Selected.maxCount > 0 && m_CurrentParticleList.Count > s_Selected.maxCount)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_55 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_55);
		int32_t L_56 = L_55->___maxCount_3;
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01e6;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_57 = __this->___m_CurrentParticleList_16;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_57, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_59 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_59);
		int32_t L_60 = L_59->___maxCount_3;
		if ((((int32_t)L_58) <= ((int32_t)L_60)))
		{
			goto IL_01e6;
		}
	}
	{
		// if (m_CurrentParticleList[0] != null)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_61 = __this->___m_CurrentParticleList_16;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_61, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_01c0;
		}
	}
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_64 = __this->___m_CurrentParticleList_16;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_64, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_66, NULL);
	}

IL_01c0:
	{
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_67 = __this->___m_CurrentParticleList_16;
		NullCheck(L_67);
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_67, 0, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		goto IL_01e6;
	}

IL_01ce:
	{
		// m_Instance.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = __this->___m_Instance_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_3;
		NullCheck(L_68);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_68, L_69, NULL);
		// m_Instance.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___m_Instance_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71 = V_2;
		NullCheck(L_70);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_71, NULL);
	}

IL_01e6:
	{
		// if (s_Selected.mode == Mode.Trail)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_72 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_72);
		int32_t L_73 = L_72->___mode_1;
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_0228;
		}
	}
	{
		// var emission = m_Instance.transform.GetComponent<ParticleSystem>().emission;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = __this->___m_Instance_17;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		NullCheck(L_75);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_76;
		L_76 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_75, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_76);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_77;
		L_77 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_76, NULL);
		V_5 = L_77;
		// emission.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_5), (bool)0, NULL);
		// m_Instance.transform.GetComponent<ParticleSystem>().Emit(1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = __this->___m_Instance_17;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_78, NULL);
		NullCheck(L_79);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_80;
		L_80 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_79, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_80);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_80, 1, NULL);
	}

IL_0228:
	{
		// m_Instance.parent = hit.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = __this->___m_Instance_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_81);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_81, L_82, NULL);
		// m_LastPos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_3;
		__this->___m_LastPos_20 = L_83;
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_m960B71319864DFB0B51F02487D8940EE09898479 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	{
		// PointerEventData eventData = new PointerEventData(eventSystem);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = __this->___eventSystem_14;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_1, L_0, NULL);
		V_0 = L_1;
		// eventData.pressPosition = Input.mousePosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		NullCheck(L_2);
		PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline(L_2, L_4, NULL);
		// eventData.position = Input.mousePosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		NullCheck(L_5);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_5, L_7, NULL);
		// List<RaycastResult> list = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_8 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_8, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_8;
		// graphicRaycaster.Raycast(eventData, list);
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_9 = __this->___graphicRaycaster_13;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_11 = V_1;
		NullCheck(L_9);
		VirtualActionInvoker2< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, List_1_t8292C421BBB00D7661DC07462822936152BAB446* >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_9, L_10, L_11);
		// return list.Count > 0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_12, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		return (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_mCB6246390E51EF7A03C6DCF0D07D1B05E0FF3091 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* V_0 = NULL;
	int32_t V_1 = 0;
	DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* V_2 = NULL;
	{
		// s_Selected = demoParticles.items[i];
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_0 = __this->___demoParticles_4;
		NullCheck(L_0);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_1 = L_0->___items_0;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21), (void*)L_4);
		// m_Instance = null;
		__this->___m_Instance_17 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Instance_17), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* L_5 = __this->___demoParticles_4;
		NullCheck(L_5);
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_6 = L_5->___items_0;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0052;
	}

IL_0029:
	{
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// if ((otherEffect != s_Selected) && (otherEffect.mode == Mode.Activate))
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_11 = V_2;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_12 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		if ((((RuntimeObject*)(DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972*)L_11) == ((RuntimeObject*)(DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972*)L_12)))
		{
			goto IL_004e;
		}
	}
	{
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___mode_1;
		if (L_14)
		{
			goto IL_004e;
		}
	}
	{
		// otherEffect.transform.gameObject.SetActive(false);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_15 = V_2;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___transform_0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
	}

IL_004e:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		// foreach (var otherEffect in demoParticles.items)
		int32_t L_19 = V_1;
		DemoParticleSystemU5BU5D_t276B71C43FE5C96B19896B1C959B684286E4A77A* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_Selected.mode == Mode.Activate)
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_21 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_21);
		int32_t L_22 = L_21->___mode_1;
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		// s_Selected.transform.gameObject.SetActive(true);
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_23 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___transform_0;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
	}

IL_0079:
	{
		// m_ParticleMultiplier = s_Selected.transform.GetComponent<ParticleSystemMultiplier>();
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_26 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___transform_0;
		NullCheck(L_27);
		ParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75* L_28;
		L_28 = Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634(L_27, Component_GetComponent_TisParticleSystemMultiplier_tC1FD581E7C2966FDBC19FA899B4D3CD08A75CB75_m4AEEED8A204656CCD3DCEDB2FEAC64EC3583F634_RuntimeMethod_var);
		__this->___m_ParticleMultiplier_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleMultiplier_15), (void*)L_28);
		// multiply = 1;
		__this->___multiply_6 = (1.0f);
		// if (clearOnChange)
		bool L_29 = __this->___clearOnChange_7;
		if (!L_29)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00c5;
	}

IL_00a3:
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = __this->___m_CurrentParticleList_16;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_30, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_32, NULL);
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_33 = __this->___m_CurrentParticleList_16;
		NullCheck(L_33);
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_33, 0, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
	}

IL_00c5:
	{
		// while (m_CurrentParticleList.Count > 0)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_34 = __this->___m_CurrentParticleList_16;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_34, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}

IL_00d3:
	{
		// instructionText.text = s_Selected.instructionText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___instructionText_10;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_37 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_37);
		String_t* L_38 = L_37->___instructionText_6;
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_38);
		// titleText.text = s_Selected.transform.name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___titleText_8;
		DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* L_40 = ((ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE_il2cpp_TypeInfo_var))->___s_Selected_21;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = L_40->___transform_0;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_41, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_42);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls__ctor_m7C49AB25E454BBEC5DC95F1A6FC711726278D9B2 (ParticleSceneControls_tB5B254F6E8BC4F44A03186856B717D85C7318FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float spawnOffset = 0.5f;
		__this->___spawnOffset_5 = (0.5f);
		// public float multiply = 1;
		__this->___multiply_6 = (1.0f);
		// private List<Transform> m_CurrentParticleList = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___m_CurrentParticleList_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentParticleList_16), (void*)L_0);
		// private Vector3 m_CamOffsetVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_CamOffsetVelocity_19 = L_1;
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystem__ctor_m985054002A2E04A2350EDAC74D56656BE7052937 (DemoParticleSystem_t660E9F4E40A78D33CCA259CF0E9F24BA4F490972* __this, const RuntimeMethod* method) 
{
	{
		// public int camOffset = 15;
		__this->___camOffset_5 = ((int32_t)15);
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystemList__ctor_mDA776C0BBB3F11BB10FF7CE3A97B7473BF362215 (DemoParticleSystemList_t73787946F79EF5D423387622F7C30C9997A68ACC* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse_Update_m1B82D8022C8E827FE9358A3B0DEBD9C82938F37E (PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (!Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_3, (&V_0), NULL);
		if (L_4)
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
		// transform.position = hit.point + hit.normal*surfaceOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		float L_8 = __this->___surfaceOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_10, NULL);
		// if (setTargetOn != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___setTargetOn_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// setTargetOn.SendMessage("SetTarget", transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___setTargetOn_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		GameObject_SendMessage_m9F174A6F7D2DBE4E1934892F3438405F379014E3(L_13, _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309, L_14, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse__ctor_m26771B6F90509C421D601E582C42DABE58117FAA (PlaceTargetWithMouse_t30224FA54201F99D173D962314A1F439149ECDC9* __this, const RuntimeMethod* method) 
{
	{
		// public float surfaceOffset = 1.5f;
		__this->___surfaceOffset_4 = (1.5f);
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
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_Start_m8158DB0C8073E178AB571AD22AA6A23D567A3600 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	{
		// m_SlowMo = false;
		__this->___m_SlowMo_9 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_OnDestroy_m429AA1769292326B734AB5F9509661C48A1228B0 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::ChangeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_ChangeSpeed_mAD4AE2BEABE358DAAC9A3585CE4B060D345A2863 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B4_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	float G_B8_0 = 0.0f;
	{
		// m_SlowMo = !m_SlowMo;
		bool L_0 = __this->___m_SlowMo_9;
		__this->___m_SlowMo_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var image = button.targetGraphic as Image;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___button_8;
		NullCheck(L_1);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2;
		L_2 = Selectable_get_targetGraphic_m659A2940226EC644AAFC2D5CCC326ABEE6384388_inline(L_1, NULL);
		V_0 = ((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_2, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var));
		// if (image != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// image.sprite = m_SlowMo ? SlowSpeedTex : FullSpeedTex;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = V_0;
		bool L_6 = __this->___m_SlowMo_9;
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_003a;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___FullSpeedTex_4;
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0040;
	}

IL_003a:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___SlowSpeedTex_5;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B4_1, G_B4_0, NULL);
	}

IL_0045:
	{
		// button.targetGraphic = image;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___button_8;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_0;
		NullCheck(L_9);
		Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_9, L_10, NULL);
		// Time.timeScale = m_SlowMo ? slowSpeed : fullSpeed;
		bool L_11 = __this->___m_SlowMo_9;
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		float L_12 = __this->___fullSpeed_6;
		G_B8_0 = L_12;
		goto IL_0067;
	}

IL_0061:
	{
		float L_13 = __this->___slowSpeed_7;
		G_B8_0 = L_13;
	}

IL_0067:
	{
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton__ctor_m9889D6F64C350F4BAE500E96007375994AE81056 (SlowMoButton_t2083E0FE81796D541577A6AE8BC0BCFECAE79AFD* __this, const RuntimeMethod* method) 
{
	{
		// public float fullSpeed = 1;
		__this->___fullSpeed_6 = (1.0f);
		// public float slowSpeed = 0.3f;
		__this->___slowSpeed_7 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___v0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___v0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpressPositionU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Selectable_get_targetGraphic_m659A2940226EC644AAFC2D5CCC326ABEE6384388_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic           targetGraphic     { get { return m_TargetGraphic; } set { if (SetPropertyUtility.SetClass(ref m_TargetGraphic, value))     OnSetProperty(); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_TargetGraphic_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
