#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.String SR::GetString(System.String,System.Object[])
extern void SR_GetString_m9548BD6DD52DFDB46372F211078AE57FA2401E39 (void);
// 0x00000002 System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
extern void SR_GetString_m9D671CBA422B18D15B8FF59B22DCCEB32E3D16E2 (void);
// 0x00000003 System.String SR::GetString(System.String)
extern void SR_GetString_m3FC710B15474A9B651DA02B303241B6D8B87E2A7 (void);
// 0x00000004 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m0F2CEC6937029AEC3360EE21DB1D6329D5BE8906 (void);
// 0x00000005 System.String SR::Format(System.String,System.Object,System.Object)
extern void SR_Format_mCE758E323017FDB5E39921BE8757AC78665C7504 (void);
// 0x00000006 System.Void Mono.Util.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mE8E2FC84195F0A97049CAF083F56A3C4254323FC (void);
// 0x00000007 System.Void Mono.Unity.CertHelper::AddCertificatesToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509CertificateCollection,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificatesToNativeChain_m1D22A9A50CA05E1F931B8B309E047092DDE01CFF (void);
// 0x00000008 System.Void Mono.Unity.CertHelper::AddCertificateToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificateToNativeChain_m223E545813937EC29B6EF428DAE3F45551728166 (void);
// 0x00000009 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Unity.CertHelper::NativeChainToManagedCollection(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_NativeChainToManagedCollection_m671B74DB858DFEC5DE82CB70687F76EE5212630C (void);
// 0x0000000A System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_mF8B2344487801910DCF927F9394FD2F13A61F8E8 (void);
// 0x0000000B System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m4B13EAF7CA50D7535BF7F663D23886279A4CDBF5 (void);
// 0x0000000C System.IntPtr Mono.Unity.UnityTls::GetUnityTlsInterface()
extern void UnityTls_GetUnityTlsInterface_mB672D3C985554FC0EDFAB68EB4A77BCB74FEE719 (void);
// 0x0000000D System.Boolean Mono.Unity.UnityTls::get_IsSupported()
extern void UnityTls_get_IsSupported_mA17DA466EA04B7B44B4C3C37EF24494F9CDE238C (void);
// 0x0000000E Mono.Unity.UnityTls/unitytls_interface_struct Mono.Unity.UnityTls::get_NativeInterface()
extern void UnityTls_get_NativeInterface_mB7B44E93A89C271D6C65B44DE2EE9C4A5786E88E (void);
// 0x0000000F System.Void Mono.Unity.UnityTls/unitytls_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_callback__ctor_m9D04862B333145C9F179B31F08C390E0DEA4D1B0 (void);
// 0x00000010 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_callback_Invoke_m4DDE358F87398FA2F51CDD551E6F1D4CB5B48159 (void);
// 0x00000011 System.IAsyncResult Mono.Unity.UnityTls/unitytls_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_callback_BeginInvoke_m34DFF04B0DD733860B3BAE73885A90C6A936E26F (void);
// 0x00000012 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_callback_EndInvoke_m17AC8D1886D2624D4E3E041E6931DC942C117FAB (void);
// 0x00000013 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_callback__ctor_mC7F821EB4597E74CFC9DE7A1EA50F86CFAC2F411 (void);
// 0x00000014 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_callback_Invoke_m9E758A0D65A39C61209306CDAB781357D956F36E (void);
// 0x00000015 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_callback_BeginInvoke_m9FA442F88C3483A74C56938DD30BF36505666EDD (void);
// 0x00000016 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_callback_EndInvoke_m4615F5985BBDB75F9DBDE0398A854CE2315DF925 (void);
// 0x00000017 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_callback__ctor_m52F2060B467B61401384C7E3693C6C8CDC3E46B7 (void);
// 0x00000018 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_callback_Invoke_m9C045DAC27E3496B2FA429755CFF48E11A751D29 (void);
// 0x00000019 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_callback_BeginInvoke_mFDE9382397C181E07D075AA3FDE12B10ABC2C602 (void);
// 0x0000001A System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_callback_EndInvoke_m2D814DC4681EFC9E4B0D495E8E5BBB0DCD3B62D1 (void);
// 0x0000001B System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_trace_callback__ctor_m4C0C53E1C112C8A363A1C1AC15B5F6B7E4CD2443 (void);
// 0x0000001C System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr)
extern void unitytls_tlsctx_trace_callback_Invoke_mC657E7F4F1C6F530662F48BE16D2621029846344 (void);
// 0x0000001D System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_trace_callback_BeginInvoke_mE23C8513E935C278BCC120731072893E86729CAA (void);
// 0x0000001E System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_trace_callback_EndInvoke_m33865B83D223342F078061A59F8DF41311D20C94 (void);
// 0x0000001F System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_certificate_callback__ctor_m14C613364636EF10ECCD413A6F49E975A4F4A6A2 (void);
// 0x00000020 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_certificate_callback_Invoke_mA90DE4AD701A89C12AECBE415FBAB506DCF66C12 (void);
// 0x00000021 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_certificate_callback_BeginInvoke_m1D0AF1A60BC715B76CD3866BF3D555E5A6BFDD3E (void);
// 0x00000022 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_certificate_callback_EndInvoke_m0485EC4825ED1374DA2C0925A2F48D7F7567E21B (void);
// 0x00000023 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_x509verify_callback__ctor_m50C4160D42681A80BEAD13F18294437BD96C3D0B (void);
// 0x00000024 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_x509verify_callback_Invoke_m63FDAF56E6D0F50E1E21DB4E3515967596071CE6 (void);
// 0x00000025 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_x509verify_callback_BeginInvoke_m84DAB124121532AF9AECBA6E706A0914C4EA22F4 (void);
// 0x00000026 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_x509verify_callback_EndInvoke_mD0321EDEC2FCF98ACB6497F796021DC65DA0DEEC (void);
// 0x00000027 System.Void Mono.Unity.UnityTls/unitytls_interface_struct::.ctor()
extern void unitytls_interface_struct__ctor_m91CA935D822B8FA1057010680A22A0AC9D70E381 (void);
// 0x00000028 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_create_t__ctor_mDB5F7A125825A4EADEFE51E41161ECF671659474 (void);
// 0x00000029 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
extern void unitytls_errorstate_create_t_Invoke_m2A913757D4713362254BE457E8792AD299677D42 (void);
// 0x0000002A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
extern void unitytls_errorstate_create_t_BeginInvoke_m21B464EA6F62C9C4916A69F411D0261B058E3E06 (void);
// 0x0000002B Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_create_t_EndInvoke_m8DC3659FB8AACD5CD163A95D55D72E4337AC8F37 (void);
// 0x0000002C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_raise_error_t__ctor_m5F148689FFD962A73C93824087B04547B3AEE99B (void);
// 0x0000002D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
extern void unitytls_errorstate_raise_error_t_Invoke_m319B51663970217C195467C18E5928B5C2B68441 (void);
// 0x0000002E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
extern void unitytls_errorstate_raise_error_t_BeginInvoke_m430EC23CE6C0A221B234161D965EF48FDE1FE3D8 (void);
// 0x0000002F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_raise_error_t_EndInvoke_m713725CCC70FA48D9A9BFE1770EB0406853DF1E7 (void);
// 0x00000030 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_get_ref_t__ctor_m8B6688D0222A54335156F76C42D335A999C620ED (void);
// 0x00000031 Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_get_ref_t_Invoke_mA8C5F2D239F4B74885F37C9671012F1136BF0BE2 (void);
// 0x00000032 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_get_ref_t_BeginInvoke_m93BE7A42624E9987FC901D883E06683C90046D89 (void);
// 0x00000033 Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_get_ref_t_EndInvoke_m3158742DC98834DFC0519765F4E88A8C581B54F2 (void);
// 0x00000034 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_der_t__ctor_m702A41D29AFA524EFDF148673041B507C9538C4F (void);
// 0x00000035 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_der_t_Invoke_m8CF4A1CFD7B385B3091215030E7EC2CB5B6823ED (void);
// 0x00000036 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_der_t_BeginInvoke_mDD3872296FB3905F2F22D5859F4521DF44C9F19B (void);
// 0x00000037 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_der_t_EndInvoke_m6ED100AAACFF6462B42B0D9804BBA5E34487808A (void);
// 0x00000038 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_pem_t__ctor_mE18922EC14AD6EDA780D819DB1469A99242F5C82 (void);
// 0x00000039 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_pem_t_Invoke_m38F6D75BFC2A80778454B43E5C76B4704EFF75F1 (void);
// 0x0000003A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_pem_t_BeginInvoke_mE7922F635446EF1A040AEE37DD9CEA8694A7F771 (void);
// 0x0000003B Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_pem_t_EndInvoke_mA547C0BB7666F5F1953F14BC46AAE90537850C77 (void);
// 0x0000003C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_free_t__ctor_m6FB9CB25BA5BE0723AE199CE1F502A955DD356E3 (void);
// 0x0000003D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
extern void unitytls_key_free_t_Invoke_m80E23E79440054744237B5BAA88AAAAB0D4E2F4B (void);
// 0x0000003E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
extern void unitytls_key_free_t_BeginInvoke_m9187223C9B5085D282144EC1175FA24D76AEBEE3 (void);
// 0x0000003F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_free_t_EndInvoke_m152FC113C7C311F262DC6B29F0E44ED27D4A4FBB (void);
// 0x00000040 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509_export_der_t__ctor_m2FA861176B1706988B234296EC1E5C2C2385C5A5 (void);
// 0x00000041 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509_export_der_t_Invoke_m90FDB333B2076F06444B096E1E1D1A42C8EEF8A0 (void);
// 0x00000042 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509_export_der_t_BeginInvoke_m33E6F88E2448002C8B74EC67E172034CCD11E4D5 (void);
// 0x00000043 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509_export_der_t_EndInvoke_m18AAF57D64EC364FF2312620E964F4D615E594CD (void);
// 0x00000044 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_ref_t__ctor_m2E1FC1BBC79EB53428998A9DC5299F1DCDF6BBE8 (void);
// 0x00000045 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_ref_t_Invoke_mDCA9357333DA8B614E6C0F68922B3E5306A6534C (void);
// 0x00000046 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_ref_t_BeginInvoke_mCF97569A8246EA8445ADA1DE245B36DFAFB91446 (void);
// 0x00000047 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_ref_t_EndInvoke_m3E4E37BCCAE29768A633C69FA2CE74EC67945A98 (void);
// 0x00000048 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_x509_t__ctor_m8AF5F946C60F4AD11DCF53EB103FAB5556828421 (void);
// 0x00000049 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_x509_t_Invoke_m25FDF33A713C330AF882B49E05C79B77B5CF7A22 (void);
// 0x0000004A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_x509_t_BeginInvoke_m5F1D80B8C015B87B91AE11A27A01ED586E9BFFEF (void);
// 0x0000004B Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_x509_t_EndInvoke_m32FF88756C519F7C7F53E36198C352B2DE96FECF (void);
// 0x0000004C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_create_t__ctor_m35027CAFF58C468A07D199EA8E760FA83ECC1497 (void);
// 0x0000004D Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_create_t_Invoke_m45B75F9286D2C1DC14AECFA258F419C3A1989A79 (void);
// 0x0000004E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_create_t_BeginInvoke_mE85F1C402447D1CC543B2609C2BFD081F2954DC5 (void);
// 0x0000004F Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_create_t_EndInvoke_m2D64E81EA9962E8269292F49D86CBA9A45D8021F (void);
// 0x00000050 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_t__ctor_m5389B48F2C2EFE1E6FDAE6FEE1FF176F28F0D02C (void);
// 0x00000051 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_t_Invoke_m172237A64036BDE6C197DA0AE6A5A08010D4F361 (void);
// 0x00000052 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_t_BeginInvoke_mD3FEDD5F023253232CC8C48EF5CF2120ABD7147B (void);
// 0x00000053 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_t_EndInvoke_m2DE3744B3B3919E5ABED5661FC2FA2445B933EF3 (void);
// 0x00000054 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_der_t__ctor_m841BFC2DC8D5C6BA893192D3318C89CB1CBA5093 (void);
// 0x00000055 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_der_t_Invoke_m1606FADA7E902086F7AEE6D8F304867C7E0A434F (void);
// 0x00000056 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_der_t_BeginInvoke_m68B8C0940627CA1AA436E080A70BE1F622A820E7 (void);
// 0x00000057 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_der_t_EndInvoke_m96AFB602A6FB94D99E6AB65CE1D3C8B0B636CC6C (void);
// 0x00000058 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_free_t__ctor_mE08ED3D0B7810758779C72A6882354D36E51F126 (void);
// 0x00000059 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
extern void unitytls_x509list_free_t_Invoke_m733759A5A94705388D233DB23FDFECAE2ADACDF0 (void);
// 0x0000005A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_free_t_BeginInvoke_m1A31DC10E7A495BCB31B46F413FCB7431E408CD7 (void);
// 0x0000005B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_free_t_EndInvoke_m4BD735662CB6AC985D4AC833288191948ABD9182 (void);
// 0x0000005C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_default_ca_t__ctor_m9030DF501A2B0AE32F059AF6838EAF2A5897C8E0 (void);
// 0x0000005D Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_default_ca_t_Invoke_mE5D523AFD08CCE9A427389F17611D56C6D905B98 (void);
// 0x0000005E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_default_ca_t_BeginInvoke_m732CB4DFD706DEA2D1AFDD66A25C7A0A4F59641C (void);
// 0x0000005F Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_default_ca_t_EndInvoke_m65702493A38FA3F2598DD0D5F41A2849C4EE532D (void);
// 0x00000060 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_explicit_ca_t__ctor_m4008497F04CFD72DB70FC203A50B023CD8F17864 (void);
// 0x00000061 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_explicit_ca_t_Invoke_mCC06B1AF3BCD90C24E3CA05A785528588C7CCEB5 (void);
// 0x00000062 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_explicit_ca_t_BeginInvoke_m5A0BBE08CCACF01F690B9919087359A9FF7CF468 (void);
// 0x00000063 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_explicit_ca_t_EndInvoke_m8EE4AE05BF8B13E7CD9A5818E3BA682F951584A4 (void);
// 0x00000064 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_server_t__ctor_m5CDD5F7909C922C45FDFFD8E94DDFFB1279C7368 (void);
// 0x00000065 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_server_t_Invoke_m6C7288544450304884E239BA3ACED930AAC040DF (void);
// 0x00000066 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_server_t_BeginInvoke_m7E60A8576D5C6BE7D9A61EBB5800D7FD402BF60D (void);
// 0x00000067 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_server_t_EndInvoke_mFC81040ECF1EF8D630C93F04FC8086A0F0288F6F (void);
// 0x00000068 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_client_t__ctor_m1E56411D4E929CCB07D6050690CA2284FCB8647D (void);
// 0x00000069 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_client_t_Invoke_m1DF5F05CEC35949278BEA867FA923CA399855D20 (void);
// 0x0000006A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_client_t_BeginInvoke_m7D9286CDD8953A99DC3DAF42531E08EC2921DF9D (void);
// 0x0000006B Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_client_t_EndInvoke_mD4C6A3C3AEB5444A52D5096080347CC4119CE729 (void);
// 0x0000006C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_server_require_client_authentication_t__ctor_m9AFB7DDE9F07B0C20E932B26CF5F7CC5A34EF2EE (void);
// 0x0000006D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mAD3C2DC8E2407F47BCCDB9CCD03FAEF5C3C61FB4 (void);
// 0x0000006E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_m34DF29BAAD16625619D9BACCAE0916CCB1EE3814 (void);
// 0x0000006F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_mD90E6FDE627752E1398D872EF076990B46A0D0C4 (void);
// 0x00000070 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_certificate_callback_t__ctor_mEE1D60229825001CFA228CAB36712F5911CA94F1 (void);
// 0x00000071 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_certificate_callback_t_Invoke_mD72A24F7BEB100ECBFE6A02447D07EB392F8416B (void);
// 0x00000072 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_mC558DC3F79919F6336501ED0EE6E258D40ABF0E6 (void);
// 0x00000073 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_m4A733262D24FD2ADD4A0807F5B70ACC4833E71DF (void);
// 0x00000074 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_trace_callback_t__ctor_m698EE0E5FA09113DDBBE2BFD5EB4FE1A4E0F97A1 (void);
// 0x00000075 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_trace_callback_t_Invoke_m3563168D645C5A9128E07DBDFC7B5512764B2E11 (void);
// 0x00000076 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m32846D6C60BEC0829F3478DB7AAB125D13B7F547 (void);
// 0x00000077 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_trace_callback_t_EndInvoke_mEAF3A5C422616242581287326BDAD6C5515F5DC1 (void);
// 0x00000078 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_x509verify_callback_t__ctor_m1900B77A4679CBF3A7F107114F9444A193F9B3B2 (void);
// 0x00000079 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_x509verify_callback_t_Invoke_mB4B699E9A75AD84590634AA66243AE8BE8DE9F09 (void);
// 0x0000007A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mF1D785074322CB5DD7BB67E54C6C2140C5BCE73C (void);
// 0x0000007B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_mA320598F201D2E1ECAA3595355C93B3BDD13B031 (void);
// 0x0000007C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_mF8B2A46DCE03527B87EE1EB40F18EEB186591A58 (void);
// 0x0000007D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_m9091B6D204D7611E2741CC2B3166616F8C19E594 (void);
// 0x0000007E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_mAD583F841F317705AA1F100D5188AEBC4B997C1D (void);
// 0x0000007F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mFFC257704501E21B54877E6A937BEDAB526184E8 (void);
// 0x00000080 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_ciphersuite_t__ctor_mD59D1727FCCD2F1485FC87677C593BAA0D19FD69 (void);
// 0x00000081 Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_ciphersuite_t_Invoke_m28D027E6306B1F2188E64245FBA01268CC329442 (void);
// 0x00000082 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_m8BA17B437B22A3109CD7AA513F11B99A6010B215 (void);
// 0x00000083 Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m37132AD00EA6C15F18185B76F883D690BC9330EF (void);
// 0x00000084 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_protocol_t__ctor_m57AA61C6CC144AC851EF8A1BCDE1FE8A6A7CE4E3 (void);
// 0x00000085 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_protocol_t_Invoke_m533A624ECEB2AC0E43052CE6A234D04E4E9C70AB (void);
// 0x00000086 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_protocol_t_BeginInvoke_m633A813CF097D32A46D0AF9B4BA62675D446E476 (void);
// 0x00000087 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_protocol_t_EndInvoke_m31A4CD4E5918466D87B8EFED896BF0DF487FF061 (void);
// 0x00000088 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_process_handshake_t__ctor_m3C5790369EFE12F841C4EDA676DABCC833BF23DE (void);
// 0x00000089 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_process_handshake_t_Invoke_mE17E62D2159809BC847BEB1D6B40C23C017ED3E8 (void);
// 0x0000008A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_process_handshake_t_BeginInvoke_mDE4541085A795D1286E90FE82D1802A4A2C861BF (void);
// 0x0000008B Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_process_handshake_t_EndInvoke_mDE68FC780902D4DDC02B55D01C3F5B1F2D5165CD (void);
// 0x0000008C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_t__ctor_m3A54D3DC95D93F41585AAC5E0CBB09E7E21C6A88 (void);
// 0x0000008D System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_t_Invoke_mAFFB3FA39F79B2BE4FFA182239DE94ED5570D803 (void);
// 0x0000008E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_t_BeginInvoke_mC8AA0588732E45F9402F7EC9319099ECFC5AFF8C (void);
// 0x0000008F System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_t_EndInvoke_m94A70CCFA5F55842BBB3DEC7B89D19BCBA37937A (void);
// 0x00000090 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_t__ctor_m99DA58D77CC21DEAA77D8332FB1F4226BCBC3317 (void);
// 0x00000091 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_t_Invoke_mF9413F9C6DD887B3B0DA87CE25824CED940EEFC1 (void);
// 0x00000092 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_t_BeginInvoke_mC17344DDFE83AF7AA95CE8EC00A0FD27ADBF1A9F (void);
// 0x00000093 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_t_EndInvoke_m6D59052A9AACE1E87DEBB2B6800B47FDAE09A524 (void);
// 0x00000094 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_notify_close_t__ctor_mD372DA8B81430D8E41B7372722D5D327CF438951 (void);
// 0x00000095 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_notify_close_t_Invoke_mC3B57340B3CA22EA7EB0EBFA5C941C487DE6B015 (void);
// 0x00000096 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_notify_close_t_BeginInvoke_mDB587D9039A414DC2127613B9E477379FF119E14 (void);
// 0x00000097 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_notify_close_t_EndInvoke_m5D323428785A814E43CA41E4244ECAF0F96EE668 (void);
// 0x00000098 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_free_t__ctor_m0445C80DC50302FB1F416ED7AA8B1E2DD66529EA (void);
// 0x00000099 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
extern void unitytls_tlsctx_free_t_Invoke_m34DFBB044037052F67FEA5A579A5AC004E01AEC8 (void);
// 0x0000009A System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_free_t_BeginInvoke_m7887C3F9C1F87DCD3807A2797D7525F108CBA926 (void);
// 0x0000009B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_free_t_EndInvoke_mED032427E108FD9D858A2B752544CC76CCCF647D (void);
// 0x0000009C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_random_generate_bytes_t__ctor_m651B0D872AA98DCBDF99B8CBB48616F9877D28C5 (void);
// 0x0000009D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_random_generate_bytes_t_Invoke_mDF4C16458D2779B58E4C66ACB9A197DD3C61085F (void);
// 0x0000009E System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_random_generate_bytes_t_BeginInvoke_m15487ED3C5CACFB6E0D760F7307847F531F1C3A4 (void);
// 0x0000009F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
extern void unitytls_random_generate_bytes_t_EndInvoke_m3C6F54483F3AF797648AC5E311AB1976FFAFF61B (void);
// 0x000000A0 System.Void Mono.Unity.UnityTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsContext__ctor_m82A8A07485BBA40B72407958085454EBFFEB826C (void);
// 0x000000A1 System.Void Mono.Unity.UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_x509list*&,Mono.Unity.UnityTls/unitytls_key*&)
extern void UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mCDF88F12EFAFFA3CB29218EB5CECA54736FA577B (void);
// 0x000000A2 System.Boolean Mono.Unity.UnityTlsContext::get_IsAuthenticated()
extern void UnityTlsContext_get_IsAuthenticated_m2D21CAED85E7FC027A44D4B563559A0CAE4E82E1 (void);
// 0x000000A3 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Read_m57A71EE175BE7D20FBBBF23208F4370198E82FCE (void);
// 0x000000A4 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Write(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Write_m2A845C13751DFCADF4065D4108C92065662EF6D5 (void);
// 0x000000A5 System.Void Mono.Unity.UnityTlsContext::Shutdown()
extern void UnityTlsContext_Shutdown_m8F28FC6DA210C07662E2237E4AE0F37CDEFAAC16 (void);
// 0x000000A6 System.Void Mono.Unity.UnityTlsContext::Dispose(System.Boolean)
extern void UnityTlsContext_Dispose_mDAFA39A1C87ACB042BA171A8FE723D07204216FD (void);
// 0x000000A7 System.Void Mono.Unity.UnityTlsContext::StartHandshake()
extern void UnityTlsContext_StartHandshake_m3E616FB8331ADCE5754EE66CF047C8C218D233FE (void);
// 0x000000A8 System.Boolean Mono.Unity.UnityTlsContext::ProcessHandshake()
extern void UnityTlsContext_ProcessHandshake_mDA4456F24FC2E02FBBE6252120506A0852BD6CCC (void);
// 0x000000A9 System.Void Mono.Unity.UnityTlsContext::FinishHandshake()
extern void UnityTlsContext_FinishHandshake_mBC43C5018B3D65BB8807CCAEDDFEBC4D4719B2FB (void);
// 0x000000AA System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F (void);
// 0x000000AB System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_mFA8E9E3FE64CD88CEEAC5F83393A939D683BE025 (void);
// 0x000000AC System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB (void);
// 0x000000AD System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_m4ED16457432EC59B4B9697ABE4421E093B2B0929 (void);
// 0x000000AE Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850 (void);
// 0x000000AF Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_mD1AB1BC9CA979D58ED90B5B1A39848FAB95C83D3 (void);
// 0x000000B0 System.Void Mono.Unity.UnityTlsContext::CertificateCallback(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347 (void);
// 0x000000B1 System.Void Mono.Unity.UnityTlsContext::CertificateCallback(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_mC2342B4F75EB243AED15E7D6AA7389394966AA8E (void);
// 0x000000B2 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMinProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMinProtocol_mAE3AC38A5F0C6CBEFDC7265E49536E0F6EEAEEC1 (void);
// 0x000000B3 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMaxProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMaxProtocol_m8991E0B43664085F8E1BD9095CA4114A3A46DCFA (void);
// 0x000000B4 Mono.Security.Interface.TlsProtocols Mono.Unity.UnityTlsConversions::ConvertProtocolVersion(Mono.Unity.UnityTls/unitytls_protocol)
extern void UnityTlsConversions_ConvertProtocolVersion_m1618CAAE6886BF8070040EE8FC3ACC9036A6567E (void);
// 0x000000B5 Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
extern void UnityTlsConversions_VerifyResultToAlertDescription_m1C318DCEFF9F42E73FF8DAB347BA7B9E4E7EFF7E (void);
// 0x000000B6 Mono.Security.Interface.MonoSslPolicyErrors Mono.Unity.UnityTlsConversions::VerifyResultToPolicyErrror(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToPolicyErrror_m0F695E9B6732F71E1719D642E28A569B39A56BB7 (void);
// 0x000000B7 System.String Mono.Unity.UnityTlsProvider::get_Name()
extern void UnityTlsProvider_get_Name_mD97B0783E337EF392796C2B54B2893132AE3CE6E (void);
// 0x000000B8 System.Guid Mono.Unity.UnityTlsProvider::get_ID()
extern void UnityTlsProvider_get_ID_m69F15693799E92CF740F1632C811ABBDD9501CE3 (void);
// 0x000000B9 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsSslStream()
extern void UnityTlsProvider_get_SupportsSslStream_m75C37BCDD5970564FF33FC734CE1E53066C310F5 (void);
// 0x000000BA System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsMonoExtensions()
extern void UnityTlsProvider_get_SupportsMonoExtensions_m937D906F958817CF7AF4BF3C0F6CB7FCFB271C34 (void);
// 0x000000BB System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsConnectionInfo()
extern void UnityTlsProvider_get_SupportsConnectionInfo_m2F1C9B6C649675ACE3F96A80EBAC9FF44655D004 (void);
// 0x000000BC System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsCleanShutdown()
extern void UnityTlsProvider_get_SupportsCleanShutdown_m0C0EDA9937BDF53475680A2892B937316D450B5C (void);
// 0x000000BD System.Security.Authentication.SslProtocols Mono.Unity.UnityTlsProvider::get_SupportedProtocols()
extern void UnityTlsProvider_get_SupportedProtocols_mB92C5F264ADEADACCE52A31D1DA9937777C5BC04 (void);
// 0x000000BE Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStream_m7395FB4BBD905D89772F5157FDD254E5CF1F83DC (void);
// 0x000000BF Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStreamInternal(System.Net.Security.SslStream,System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStreamInternal_mA8AD037F184BD564ACD9945D6EA3961971030F7E (void);
// 0x000000C0 System.Boolean Mono.Unity.UnityTlsProvider::ValidateCertificate(Mono.Security.Interface.ICertificateValidator2,System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean,System.Security.Cryptography.X509Certificates.X509Chain&,Mono.Security.Interface.MonoSslPolicyErrors&,System.Int32&)
extern void UnityTlsProvider_ValidateCertificate_mB131CB7451246C50BC4F3612C768E09C1DF59AAF (void);
// 0x000000C1 System.Void Mono.Unity.UnityTlsProvider::.ctor()
extern void UnityTlsProvider__ctor_m84BDC7485DA3C2B3A2153CA4B0AC695FD65AF493 (void);
// 0x000000C2 System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void UnityTlsStream__ctor_mCFCFF6B6CCEB2BEBB904E26AB3BF22E888C75C3F (void);
// 0x000000C3 Mono.Net.Security.MobileTlsContext Mono.Unity.UnityTlsStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsStream_CreateContext_m0626DFB8390DAFD3CDDF43BF033F6BBE6260E1C9 (void);
// 0x000000C4 System.IntPtr Mono.Net.CFObject::dlopen(System.String,System.Int32)
extern void CFObject_dlopen_mFCCB233C9C9A50D506CD4F1ABED02B8B62735C78 (void);
// 0x000000C5 System.IntPtr Mono.Net.CFObject::dlsym(System.IntPtr,System.String)
extern void CFObject_dlsym_mBF6766537A83ABF750C32B33B09C8E38F4BD1CD3 (void);
// 0x000000C6 System.Void Mono.Net.CFObject::dlclose(System.IntPtr)
extern void CFObject_dlclose_m012BF88490C06A6C7491395B5B42A794F0833F7B (void);
// 0x000000C7 System.IntPtr Mono.Net.CFObject::GetIndirect(System.IntPtr,System.String)
extern void CFObject_GetIndirect_m0CEC26DEAFEFA09E4227456BD3209CE31EEA8B9D (void);
// 0x000000C8 System.IntPtr Mono.Net.CFObject::GetCFObjectHandle(System.IntPtr,System.String)
extern void CFObject_GetCFObjectHandle_m3120B22D9181E66B627FBD3945C936227AC2CEE0 (void);
// 0x000000C9 System.Void Mono.Net.CFObject::.ctor(System.IntPtr,System.Boolean)
extern void CFObject__ctor_mF64B1A8118687E2945D8B211BE8815B1DB640456 (void);
// 0x000000CA System.Void Mono.Net.CFObject::Finalize()
extern void CFObject_Finalize_m006C6599C427E094BEA3C22EAD8EEAFF67725E29 (void);
// 0x000000CB System.IntPtr Mono.Net.CFObject::get_Handle()
extern void CFObject_get_Handle_mCC370B38D8244C40F8DE155013E1F1DA5C0BAAF8 (void);
// 0x000000CC System.Void Mono.Net.CFObject::set_Handle(System.IntPtr)
extern void CFObject_set_Handle_m63B93A801DCA3AED580D08D96C73B29B0C5239EA (void);
// 0x000000CD System.IntPtr Mono.Net.CFObject::CFRetain(System.IntPtr)
extern void CFObject_CFRetain_m6F8AC05D65A3F2362D6FB30E167F014858515DB0 (void);
// 0x000000CE System.Void Mono.Net.CFObject::Retain()
extern void CFObject_Retain_mFCCF79A9B34E092526A615CC6A4C9CD0E617DE8F (void);
// 0x000000CF System.Void Mono.Net.CFObject::CFRelease(System.IntPtr)
extern void CFObject_CFRelease_m99995BA572C171D1FCA3016F3C2264AC9DC964EC (void);
// 0x000000D0 System.Void Mono.Net.CFObject::Release()
extern void CFObject_Release_m1AFEB7B3D714FE12E1CC26E473230E2AF9A7AD32 (void);
// 0x000000D1 System.Void Mono.Net.CFObject::Dispose(System.Boolean)
extern void CFObject_Dispose_m8CF85BE6C028F1567A3066A0E47FB69CB3D13250 (void);
// 0x000000D2 System.Void Mono.Net.CFObject::Dispose()
extern void CFObject_Dispose_m7CF111071216A34F1255FFD86FA36A640516044F (void);
// 0x000000D3 System.Void Mono.Net.CFArray::.ctor(System.IntPtr,System.Boolean)
extern void CFArray__ctor_mD6A392F2B610ABA574B99EEB18F0B824CEA4B74B (void);
// 0x000000D4 System.Void Mono.Net.CFArray::.cctor()
extern void CFArray__cctor_m6C3B2E90EA8971C6A6217B1EAE6982C0C6D15F42 (void);
// 0x000000D5 System.IntPtr Mono.Net.CFArray::CFArrayGetCount(System.IntPtr)
extern void CFArray_CFArrayGetCount_m7B9C0DAAD2E608AA91E6AF69D14E79CA984A4F73 (void);
// 0x000000D6 System.Int32 Mono.Net.CFArray::get_Count()
extern void CFArray_get_Count_mDAB0951207B368F8509220DF20A6F9659E1745BD (void);
// 0x000000D7 System.IntPtr Mono.Net.CFArray::CFArrayGetValueAtIndex(System.IntPtr,System.IntPtr)
extern void CFArray_CFArrayGetValueAtIndex_m6D81FF806B39AD0113B644D8074D1EA5C71F0042 (void);
// 0x000000D8 System.IntPtr Mono.Net.CFArray::get_Item(System.Int32)
extern void CFArray_get_Item_mF96F5B64841A7AC6FB726DEC1698AF72536492F1 (void);
// 0x000000D9 System.Boolean Mono.Net.CFNumber::CFNumberGetValue(System.IntPtr,System.IntPtr,System.Int32&)
extern void CFNumber_CFNumberGetValue_mBB4E2B5F8A0AFABFCAB24DCD9F2C0270C9F3B5AB (void);
// 0x000000DA System.Int32 Mono.Net.CFNumber::AsInt32(System.IntPtr)
extern void CFNumber_AsInt32_mEC1828CEFC9E0F945C22D09B09D5146B75D68770 (void);
// 0x000000DB System.Void Mono.Net.CFRange::.ctor(System.Int32,System.Int32)
extern void CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2 (void);
// 0x000000DC System.Void Mono.Net.CFString::.ctor(System.IntPtr,System.Boolean)
extern void CFString__ctor_m713E89F54692440CCDB684689F956C8861241143 (void);
// 0x000000DD System.IntPtr Mono.Net.CFString::CFStringCreateWithCharacters(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFString_CFStringCreateWithCharacters_mE917A7721458FEC4897D4D40F952FED5C74BBBFA (void);
// 0x000000DE Mono.Net.CFString Mono.Net.CFString::Create(System.String)
extern void CFString_Create_m7F968536151F0DFC1CB848F1382F934D733A7E94 (void);
// 0x000000DF System.IntPtr Mono.Net.CFString::CFStringGetLength(System.IntPtr)
extern void CFString_CFStringGetLength_m016D6289246E6BC81567F351F0715EA566AB609D (void);
// 0x000000E0 System.IntPtr Mono.Net.CFString::CFStringGetCharactersPtr(System.IntPtr)
extern void CFString_CFStringGetCharactersPtr_m099CE7331162D55C0D9C7E07BDD2A91352354F3F (void);
// 0x000000E1 System.IntPtr Mono.Net.CFString::CFStringGetCharacters(System.IntPtr,Mono.Net.CFRange,System.IntPtr)
extern void CFString_CFStringGetCharacters_mC67D64C45707BF30B211BBBC70F5F9982D17566F (void);
// 0x000000E2 System.String Mono.Net.CFString::AsString(System.IntPtr)
extern void CFString_AsString_mC0ED721CE2D3EC9C1B4DC76C66EBCB2F4894C15B (void);
// 0x000000E3 System.String Mono.Net.CFString::ToString()
extern void CFString_ToString_mFFA4CF7FD17AC3DE2A7512239105593C06D073F0 (void);
// 0x000000E4 System.Void Mono.Net.CFDictionary::.cctor()
extern void CFDictionary__cctor_m1C9A42B30155219EAFD302304F4BCE71C0806256 (void);
// 0x000000E5 System.Void Mono.Net.CFDictionary::.ctor(System.IntPtr,System.Boolean)
extern void CFDictionary__ctor_m47C3403AF6A136376DAA1033F3DEDCD01EBB8C6B (void);
// 0x000000E6 System.IntPtr Mono.Net.CFDictionary::CFDictionaryGetValue(System.IntPtr,System.IntPtr)
extern void CFDictionary_CFDictionaryGetValue_m0EC4E585C878951EA7553FFC127257F0BE168E31 (void);
// 0x000000E7 System.IntPtr Mono.Net.CFDictionary::GetValue(System.IntPtr)
extern void CFDictionary_GetValue_m541C66EDA38170813EFC86504CAD18E4984F837D (void);
// 0x000000E8 System.IntPtr Mono.Net.CFDictionary::get_Item(System.IntPtr)
extern void CFDictionary_get_Item_m4DBF14449B67051E61B351BDA1C1D75F261CB3ED (void);
// 0x000000E9 System.Void Mono.Net.CFUrl::.ctor(System.IntPtr,System.Boolean)
extern void CFUrl__ctor_m94B28224C2267F1601BC29F618EBD556514DFC9F (void);
// 0x000000EA System.IntPtr Mono.Net.CFUrl::CFURLCreateWithString(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFUrl_CFURLCreateWithString_m1366236BDF79E91FA08FA736E4CF514805CFAF59 (void);
// 0x000000EB Mono.Net.CFUrl Mono.Net.CFUrl::Create(System.String)
extern void CFUrl_Create_mEC0A91ABC5696C78631CDB3C2CBE06E4A9B1AB6A (void);
// 0x000000EC System.Void Mono.Net.CFRunLoop::CFRunLoopAddSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopAddSource_mE428579D40413B6FB740F7B42C64B63881F61568 (void);
// 0x000000ED System.Void Mono.Net.CFRunLoop::CFRunLoopRemoveSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopRemoveSource_m45D070FA5D5935F7040FBCA805361F05B848996D (void);
// 0x000000EE System.Int32 Mono.Net.CFRunLoop::CFRunLoopRunInMode(System.IntPtr,System.Double,System.Boolean)
extern void CFRunLoop_CFRunLoopRunInMode_m58A4EAE225C578C02E2A03B5B188CA3DD078BFAA (void);
// 0x000000EF System.IntPtr Mono.Net.CFRunLoop::CFRunLoopGetCurrent()
extern void CFRunLoop_CFRunLoopGetCurrent_m8F7E74F0B1BA966E2142CB3D4BD70752E8299419 (void);
// 0x000000F0 System.Void Mono.Net.CFRunLoop::CFRunLoopStop(System.IntPtr)
extern void CFRunLoop_CFRunLoopStop_m51B11460D5AA6A7E947F479B4897F9B4DFD1609F (void);
// 0x000000F1 System.Void Mono.Net.CFRunLoop::.ctor(System.IntPtr,System.Boolean)
extern void CFRunLoop__ctor_m1D2EFD768DA1ECAE1E4FCD72448BFE2CF324AC07 (void);
// 0x000000F2 Mono.Net.CFRunLoop Mono.Net.CFRunLoop::get_CurrentRunLoop()
extern void CFRunLoop_get_CurrentRunLoop_mBCBEFF47AD9EA6FA878AE0A7F476EA58CA65B9C0 (void);
// 0x000000F3 System.Void Mono.Net.CFRunLoop::AddSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_AddSource_m1F4505F77A5740DF6A02FE08A89CFE0F875F33E5 (void);
// 0x000000F4 System.Void Mono.Net.CFRunLoop::RemoveSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_RemoveSource_mE7D7027C829D200D3AF51D026FA6F236BA436E3A (void);
// 0x000000F5 System.Int32 Mono.Net.CFRunLoop::RunInMode(Mono.Net.CFString,System.Double,System.Boolean)
extern void CFRunLoop_RunInMode_mB31A23ED32135A505EBA8D8EC7A54CB54094DAC0 (void);
// 0x000000F6 System.Void Mono.Net.CFRunLoop::Stop()
extern void CFRunLoop_Stop_m150B479F9DF68F537303DAEF52A5E21BF42C6C9C (void);
// 0x000000F7 System.Void Mono.Net.CFProxy::.cctor()
extern void CFProxy__cctor_m5E64CF6485D2887BAD97F92173EE34A7867EB7D4 (void);
// 0x000000F8 System.Void Mono.Net.CFProxy::.ctor(Mono.Net.CFDictionary)
extern void CFProxy__ctor_m41DDC9A050F27587A9F2A492DB2614EB5CB6B098 (void);
// 0x000000F9 Mono.Net.CFProxyType Mono.Net.CFProxy::CFProxyTypeToEnum(System.IntPtr)
extern void CFProxy_CFProxyTypeToEnum_mC685B37B2264E025F168250BCA92DC848E531702 (void);
// 0x000000FA System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationJavaScript()
extern void CFProxy_get_AutoConfigurationJavaScript_m6B62E15C6AA2B407D9B788515B519DCCF88FEC8B (void);
// 0x000000FB System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationUrl()
extern void CFProxy_get_AutoConfigurationUrl_m840D41FCB3D048DD2EAD2B3A1DC054B96E2D4E5E (void);
// 0x000000FC System.String Mono.Net.CFProxy::get_HostName()
extern void CFProxy_get_HostName_m24443A667C88CBB73EB7CEE0AB35CA42BBECF3B2 (void);
// 0x000000FD System.String Mono.Net.CFProxy::get_Password()
extern void CFProxy_get_Password_m20C13DAEDF18604D6F2D57B56C56758667525D6D (void);
// 0x000000FE System.Int32 Mono.Net.CFProxy::get_Port()
extern void CFProxy_get_Port_mC6490D437685D8E722A81740FBC64746021190BF (void);
// 0x000000FF Mono.Net.CFProxyType Mono.Net.CFProxy::get_ProxyType()
extern void CFProxy_get_ProxyType_m0C440E8A2DC2FEA8725E635FCCCC61CBB7EEFC88 (void);
// 0x00000100 System.String Mono.Net.CFProxy::get_Username()
extern void CFProxy_get_Username_m8155EBB692BD8FFBC2B84325225284E6FDE5D2AD (void);
// 0x00000101 System.Void Mono.Net.CFProxySettings::.cctor()
extern void CFProxySettings__cctor_m6A3C05CFF7C6FF13E81F591D83148FA36BDF3166 (void);
// 0x00000102 System.Void Mono.Net.CFProxySettings::.ctor(Mono.Net.CFDictionary)
extern void CFProxySettings__ctor_m3EF761C43D266A201620A8F9291B4E447CDDD3C4 (void);
// 0x00000103 Mono.Net.CFDictionary Mono.Net.CFProxySettings::get_Dictionary()
extern void CFProxySettings_get_Dictionary_m4E22C04DF8DE1D4088C462849BB2654AD2A212FF (void);
// 0x00000104 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_m89792AB0F424FCA209DD5AE706D47A565A2839DE (void);
// 0x00000105 System.IntPtr Mono.Net.CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL(System.IntPtr,System.IntPtr,Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback,Mono.Net.CFStreamClientContext&)
extern void CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_mEE70C4C4C4E0E25404E6417B126D960E79356F88 (void);
// 0x00000106 System.Void Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread()
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_mF6DD5D031A74CE07FFCFA60137A3097683F313B2 (void);
// 0x00000107 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_mCE67B2B2E7E40885FBE488B67B1F748F28EA4089 (void);
// 0x00000108 Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_CopyProxiesForAutoConfigurationScript_mD52D441E483F955FBA484E58282E688A7DAE3BC1 (void);
// 0x00000109 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_mEA6EE80D03DC167CB088A9BD36C84DD2919BC828 (void);
// 0x0000010A Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,System.Uri)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_m0FA93E7487DAE6993B0F1F69B4E61ACC4F46E0B7 (void);
// 0x0000010B Mono.Net.CFProxy[] Mono.Net.CFNetwork::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri)
extern void CFNetwork_ExecuteProxyAutoConfigurationURL_m1645430EC8CB0FB9B128A1525436468BA71C7D7A (void);
// 0x0000010C System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForURL(System.IntPtr,System.IntPtr)
extern void CFNetwork_CFNetworkCopyProxiesForURL_m222DA57686642F09DE2B4CC9505AA5916C5F593C (void);
// 0x0000010D Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFDictionary)
extern void CFNetwork_CopyProxiesForURL_m3CC1E10A717CBA58D63403AD72AFF7C28DF09DAB (void);
// 0x0000010E Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForURL_m22E56EFEEA7B927C996B28C7D6D066DFB1E04673 (void);
// 0x0000010F Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForUri(System.Uri,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForUri_mE82A7948BF5A3CF1AFD09DC739F017C8A5694429 (void);
// 0x00000110 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopySystemProxySettings()
extern void CFNetwork_CFNetworkCopySystemProxySettings_m7C9D402114A62862E1B10B3CB352DB0617860E66 (void);
// 0x00000111 Mono.Net.CFProxySettings Mono.Net.CFNetwork::GetSystemProxySettings()
extern void CFNetwork_GetSystemProxySettings_mC08214866976C5825A453088EFAE1846D87D425A (void);
// 0x00000112 System.Net.IWebProxy Mono.Net.CFNetwork::GetDefaultProxy()
extern void CFNetwork_GetDefaultProxy_mFCEFB728224033F014C188FE2BBC379A7F753428 (void);
// 0x00000113 System.Void Mono.Net.CFNetwork::.cctor()
extern void CFNetwork__cctor_m53723CA4A908873A10BBB2FD8B3BB7C23A23F250 (void);
// 0x00000114 System.Void Mono.Net.CFNetwork/GetProxyData::Dispose()
extern void GetProxyData_Dispose_mF6A2D7D8C67588D1D627AF94DFEF2C7AA5B76CDD (void);
// 0x00000115 System.Void Mono.Net.CFNetwork/GetProxyData::.ctor()
extern void GetProxyData__ctor_m9CC32EF080377850BC9B6FF283B2595C167B7721 (void);
// 0x00000116 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::.ctor(System.Object,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback__ctor_mFBDA2507472B5CC9BE1AB00525A4985606AD36BC (void);
// 0x00000117 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback_Invoke_m14AB24B2B486ABBD22AABF058F5DCA9FA12FE829 (void);
// 0x00000118 System.IAsyncResult Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void CFProxyAutoConfigurationResultCallback_BeginInvoke_m61976BC16FAC944A2D7C243AC67A4EA61500DAC0 (void);
// 0x00000119 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::EndInvoke(System.IAsyncResult)
extern void CFProxyAutoConfigurationResultCallback_EndInvoke_mBE6E881358E26A55305C5983CE119B1AD8E52332 (void);
// 0x0000011A System.Void Mono.Net.CFNetwork/CFWebProxy::.ctor()
extern void CFWebProxy__ctor_mCC44E988D527452E493FC4A23ED3722CC71E6A38 (void);
// 0x0000011B System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUri(Mono.Net.CFProxy,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUri_m3F63B622064439B7E92515CE2843669E071C6BAF (void);
// 0x0000011C System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUriFromScript(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUriFromScript_mC4D0A8BC56266C546C65C29996A5564F03503DEB (void);
// 0x0000011D System.Uri Mono.Net.CFNetwork/CFWebProxy::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_ExecuteProxyAutoConfigurationURL_mC040FE13D5540C58B8CF4EE63C5D331978B901E1 (void);
// 0x0000011E System.Uri Mono.Net.CFNetwork/CFWebProxy::SelectProxy(Mono.Net.CFProxy[],System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_SelectProxy_m95C6AFD75952BA91814ADE401ED5F12C5654D046 (void);
// 0x0000011F System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxy(System.Uri)
extern void CFWebProxy_GetProxy_m4743138D378D43BC119DAD673A3CA7DF4CE6CFEB (void);
// 0x00000120 System.Boolean Mono.Net.CFNetwork/CFWebProxy::IsBypassed(System.Uri)
extern void CFWebProxy_IsBypassed_m1E2CC3D34FA80BA0FC1026047CCC2947AA2D0EA7 (void);
// 0x00000121 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m9E10A71FD7E271A87BF207893367B1CF1398C7CA (void);
// 0x00000122 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::<ExecuteProxyAutoConfigurationURL>b__0(System.IntPtr,System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_mFE212AE14442B7E102A25A01CC3347AFB5C3BD13 (void);
// 0x00000123 System.Int32 Mono.Net.Security.BufferOffsetSize::get_EndOffset()
extern void BufferOffsetSize_get_EndOffset_m3D0A21592979F5088101892843183FCFB8C9BF2A (void);
// 0x00000124 System.Int32 Mono.Net.Security.BufferOffsetSize::get_Remaining()
extern void BufferOffsetSize_get_Remaining_mBD3EA6B0F643284A54FDCA2860FE0F65C5CAF054 (void);
// 0x00000125 System.Void Mono.Net.Security.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize__ctor_m3DE692137428B2E6AB46008825FC5C1B63FDAF4F (void);
// 0x00000126 System.String Mono.Net.Security.BufferOffsetSize::ToString()
extern void BufferOffsetSize_ToString_mEEB6528B305FE796622A87E8692C7132423D4655 (void);
// 0x00000127 System.Void Mono.Net.Security.BufferOffsetSize2::.ctor(System.Int32)
extern void BufferOffsetSize2__ctor_m68156625CD993C66D5EA9C5194263DD9A4F59F3F (void);
// 0x00000128 System.Void Mono.Net.Security.BufferOffsetSize2::Reset()
extern void BufferOffsetSize2_Reset_m4426212B4ECDC2D1487AE5B825918B747D947AB7 (void);
// 0x00000129 System.Void Mono.Net.Security.BufferOffsetSize2::MakeRoom(System.Int32)
extern void BufferOffsetSize2_MakeRoom_mD7CCEC959C12276B0333DFFEAA8581C465FF44ED (void);
// 0x0000012A System.Void Mono.Net.Security.BufferOffsetSize2::AppendData(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize2_AppendData_m96903990058C4793A3B56FDE82006E4EC90A2508 (void);
// 0x0000012B System.Int32 Mono.Net.Security.AsyncProtocolResult::get_UserResult()
extern void AsyncProtocolResult_get_UserResult_mCCD14DC517D32C83AA61320D6D1D2E7F1430A3C8 (void);
// 0x0000012C System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.AsyncProtocolResult::get_Error()
extern void AsyncProtocolResult_get_Error_m90252805C3FCD7277CD1CB01CB765183889E6E29 (void);
// 0x0000012D System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Int32)
extern void AsyncProtocolResult__ctor_m9F01278D600A337B6A0CF5F6C9EFF7760BD758D8 (void);
// 0x0000012E System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void AsyncProtocolResult__ctor_mD63EC8610596D4B15DB1325C58FF32A41DAD48CF (void);
// 0x0000012F Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.AsyncProtocolRequest::get_Parent()
extern void AsyncProtocolRequest_get_Parent_m1F7659D1FAFC679076165336ED380C4BD123B452 (void);
// 0x00000130 System.Boolean Mono.Net.Security.AsyncProtocolRequest::get_RunSynchronously()
extern void AsyncProtocolRequest_get_RunSynchronously_m66A26ED05543D9AF1ED86287DCE8389BC1CB319A (void);
// 0x00000131 System.String Mono.Net.Security.AsyncProtocolRequest::get_Name()
extern void AsyncProtocolRequest_get_Name_m1999BAB96B06DCB4DC11BF5F3B0BF4C6E2A26FF6 (void);
// 0x00000132 System.Int32 Mono.Net.Security.AsyncProtocolRequest::get_UserResult()
extern void AsyncProtocolRequest_get_UserResult_m53CEBBACE5031D4CE92308ABBAEA38AEF74DDBD3 (void);
// 0x00000133 System.Void Mono.Net.Security.AsyncProtocolRequest::set_UserResult(System.Int32)
extern void AsyncProtocolRequest_set_UserResult_mBF62363240DC9BE894231E56047F594EF452CD19 (void);
// 0x00000134 System.Void Mono.Net.Security.AsyncProtocolRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncProtocolRequest__ctor_mFE18CBE3FAA084FF6DF2AD8BECC2CA6DF4C6E769 (void);
// 0x00000135 System.Void Mono.Net.Security.AsyncProtocolRequest::RequestRead(System.Int32)
extern void AsyncProtocolRequest_RequestRead_mFE5CEC3957F554C144DFBD3965538192A954D064 (void);
// 0x00000136 System.Void Mono.Net.Security.AsyncProtocolRequest::RequestWrite()
extern void AsyncProtocolRequest_RequestWrite_m2A27B2F2C4734DA21AD7D36B18B0D67EB3D54ED7 (void);
// 0x00000137 System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> Mono.Net.Security.AsyncProtocolRequest::StartOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_StartOperation_mA13EA6B8ED143BC043F506815D05EB3F49F22682 (void);
// 0x00000138 System.Threading.Tasks.Task Mono.Net.Security.AsyncProtocolRequest::ProcessOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_ProcessOperation_m6DD0D7800F73C41BE9A5313737357801B22ED71D (void);
// 0x00000139 System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest::InnerRead(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_InnerRead_m902FA39460933B383900CB60BDF8CCFC96BF3499 (void);
// 0x0000013A Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus)
// 0x0000013B System.String Mono.Net.Security.AsyncProtocolRequest::ToString()
extern void AsyncProtocolRequest_ToString_m2D8062B5811D7B7A071CC451D2FD03E5BF61B529 (void);
// 0x0000013C System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::MoveNext()
extern void U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2 (void);
// 0x0000013D System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A (void);
// 0x0000013E System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::MoveNext()
extern void U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D (void);
// 0x0000013F System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3 (void);
// 0x00000140 System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::MoveNext()
extern void U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D (void);
// 0x00000141 System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3 (void);
// 0x00000142 System.Void Mono.Net.Security.AsyncHandshakeRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncHandshakeRequest__ctor_mD64E5A00147B8D0859732BE2ACE93D32868F8210 (void);
// 0x00000143 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncHandshakeRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncHandshakeRequest_Run_m4C9BCE2E991E582B738E2A4E7F2D088227685B98 (void);
// 0x00000144 Mono.Net.Security.BufferOffsetSize Mono.Net.Security.AsyncReadOrWriteRequest::get_UserBuffer()
extern void AsyncReadOrWriteRequest_get_UserBuffer_m628B7BB1EB536BA73CFE467242E0E749A7B0AE6A (void);
// 0x00000145 System.Int32 Mono.Net.Security.AsyncReadOrWriteRequest::get_CurrentSize()
extern void AsyncReadOrWriteRequest_get_CurrentSize_m5AE6CC50F25E8504438DF2C9C2E2A44000621142 (void);
// 0x00000146 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::set_CurrentSize(System.Int32)
extern void AsyncReadOrWriteRequest_set_CurrentSize_mAB6067CAD6F9DB5B3D274FC09E70BFA8DCBA288B (void);
// 0x00000147 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadOrWriteRequest__ctor_m880E292B39EF76B9EDF3A5AB0A9A333A38A5575F (void);
// 0x00000148 System.String Mono.Net.Security.AsyncReadOrWriteRequest::ToString()
extern void AsyncReadOrWriteRequest_ToString_mDF6B2FA7AFA4E8B6571656E60CEF9BCFDCF05EDD (void);
// 0x00000149 System.Void Mono.Net.Security.AsyncReadRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadRequest__ctor_mAF75247AFFC230BA5433424D27D13ACF53B3A239 (void);
// 0x0000014A Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncReadRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncReadRequest_Run_mC9FDEBDFB3C4519C11A47FF358D4B7AB62514E11 (void);
// 0x0000014B System.Void Mono.Net.Security.AsyncWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncWriteRequest__ctor_mF3534E810074917ABDE7E4CE7EE61715694F9EB8 (void);
// 0x0000014C Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncWriteRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncWriteRequest_Run_mA3FF2D74BD568114BF3EA7FF6B0BE568D25D81BC (void);
// 0x0000014D System.Void Mono.Net.Security.ServerCertValidationCallbackWrapper::.ctor(System.Object,System.IntPtr)
extern void ServerCertValidationCallbackWrapper__ctor_m6EB9B9436E627C4C616BC14AA8EF5B6BD28B4F4E (void);
// 0x0000014E System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::Invoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void ServerCertValidationCallbackWrapper_Invoke_mC75038D5C50C3354D6938DD77608DCE39D5DC1AE (void);
// 0x0000014F System.IAsyncResult Mono.Net.Security.ServerCertValidationCallbackWrapper::BeginInvoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors,System.AsyncCallback,System.Object)
extern void ServerCertValidationCallbackWrapper_BeginInvoke_mCCBD269244B22D143E7CF8F02FBF9DA99488F1D9 (void);
// 0x00000150 System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::EndInvoke(System.IAsyncResult)
extern void ServerCertValidationCallbackWrapper_EndInvoke_m4F4A10E18E6928B33347B2A7C31B7AE9A0BD796B (void);
// 0x00000151 Mono.Security.Interface.ICertificateValidator Mono.Net.Security.ChainValidationHelper::GetInternalValidator(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void ChainValidationHelper_GetInternalValidator_mBDF9A751ADCBA2326B75ABF4BDE8410F08FF5FAC (void);
// 0x00000152 System.Void Mono.Net.Security.ChainValidationHelper::.ctor(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings,System.Boolean,Mono.Net.Security.MonoTlsStream,Mono.Net.Security.ServerCertValidationCallbackWrapper)
extern void ChainValidationHelper__ctor_mFE078E9D7EB24B1E12975ABFC262C403F1A54CBF (void);
// 0x00000153 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.ChainValidationHelper::DefaultSelectionCallback(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void ChainValidationHelper_DefaultSelectionCallback_mC8C3FAEDFCAC634F7C77EA067637E0088863B31A (void);
// 0x00000154 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.ChainValidationHelper::get_Settings()
extern void ChainValidationHelper_get_Settings_m0D7AF0562DCF1102D27554FFE64628F8EFBB8684 (void);
// 0x00000155 System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
extern void ChainValidationHelper_SelectClientCertificate_m116ABB9254158E98AA9A0EB323980138B1F11983 (void);
// 0x00000156 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void ChainValidationHelper_ValidateCertificate_m0DE6FB5264C61C93FA06B954A0CBF670AB7C3A08 (void);
// 0x00000157 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void ChainValidationHelper_ValidateCertificate_mE482A7E49237B8C3CA8F491A78CC6E6084671188 (void);
// 0x00000158 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_m1FED22B0446D155E82E39C2743C9A16EDE6F62ED (void);
// 0x00000159 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain&,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_m7A807FE9B1CBE778FE851D07E24D80A3D567B90B (void);
// 0x0000015A System.Void Mono.Net.Security.MobileAuthenticatedStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void MobileAuthenticatedStream__ctor_mF6BF50D6BFDEF283FF8036F5170281D29FDD7628 (void);
// 0x0000015B Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::get_Settings()
extern void MobileAuthenticatedStream_get_Settings_mA58954FF6C914DBAACB8F508ACFC5165A9A43155 (void);
// 0x0000015C Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MobileAuthenticatedStream::get_Provider()
extern void MobileAuthenticatedStream_get_Provider_mC36232C2AF537A29FBB55B1AD3C99F02A9731C37 (void);
// 0x0000015D System.Void Mono.Net.Security.MobileAuthenticatedStream::CheckThrow(System.Boolean,System.Boolean)
extern void MobileAuthenticatedStream_CheckThrow_m2AAEC9435176D4AA10890A896C5909330B23683E (void);
// 0x0000015E System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetSSPIException(System.Exception)
extern void MobileAuthenticatedStream_GetSSPIException_m574F0E57FDDC71287516A9908D7E57FC61A8ED27 (void);
// 0x0000015F System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetIOException(System.Exception,System.String)
extern void MobileAuthenticatedStream_GetIOException_mE435E11E49448A2035BCABF04AA5F72F44DC26D4 (void);
// 0x00000160 System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::SetException(System.Exception)
extern void MobileAuthenticatedStream_SetException_mAFD628C4C8A54C4FE24BFB30C0F5863FDDFC8A7F (void);
// 0x00000161 System.Security.Authentication.SslProtocols Mono.Net.Security.MobileAuthenticatedStream::get_DefaultProtocols()
extern void MobileAuthenticatedStream_get_DefaultProtocols_m4786DD642B1C1E3E57EBB073E6F67C58214F04E2 (void);
// 0x00000162 System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsClient(System.String)
extern void MobileAuthenticatedStream_AuthenticateAsClient_m9D541438C1BFEF84A4F37033AB1D32043AE9FCA1 (void);
// 0x00000163 System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsClient_mD5CF73BAD8ABDB6BBFE869EDD519F440767F3749 (void);
// 0x00000164 System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsServer_mF6F76CA384D369470FB3EB1492711E8E3936DF51 (void);
// 0x00000165 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::ProcessAuthentication(System.Boolean,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileAuthenticatedStream_ProcessAuthentication_m1A9EEBB26CCD694B0B844D8375EA85E6A353B73E (void);
// 0x00000166 Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
// 0x00000167 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginRead_m678B1BECC958CD3B67D66134E56AD3CAEB07019C (void);
// 0x00000168 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::EndRead(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndRead_m347ACCE77CCCE6738781A2B182949CBA72CF9143 (void);
// 0x00000169 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginWrite_m01F98CCE1A968C5654028F266F3C648CF858864B (void);
// 0x0000016A System.Void Mono.Net.Security.MobileAuthenticatedStream::EndWrite(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndWrite_m0CA1FD8354542D4F2BCA50BB4B0B852472D775C1 (void);
// 0x0000016B System.Int32 Mono.Net.Security.MobileAuthenticatedStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Read_mB273DD14EDCED08E88F57CB340B97A206BA7DDE1 (void);
// 0x0000016C System.Void Mono.Net.Security.MobileAuthenticatedStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Write_m0264ACE9D90AFB72A1A27B6130DD1B2876334DDF (void);
// 0x0000016D System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_ReadAsync_mA54D1973D54A2F0DB84CE3FB41EAE1974988BB32 (void);
// 0x0000016E System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_WriteAsync_m2521D8A56CEC0EA00B99F2DD570FCCEDEBFF1807 (void);
// 0x0000016F System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::StartOperation(Mono.Net.Security.MobileAuthenticatedStream/OperationType,Mono.Net.Security.AsyncProtocolRequest,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_StartOperation_mB3763CD0086F3FB7D75AF3E10A9E1532FAD5BDB7 (void);
// 0x00000170 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::InternalRead(System.Byte[],System.Int32,System.Int32,System.Boolean&)
extern void MobileAuthenticatedStream_InternalRead_m61B06DFDEA8207EEB7F1C350A428D7158ED25764 (void);
// 0x00000171 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::InternalRead(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalRead_mE90566374244F746502383488E02279B6A4F2E47 (void);
// 0x00000172 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_mD2BD17B591D53F923FAC63558AA1D35B21DB4E21 (void);
// 0x00000173 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize2,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_m1B5142B048B310D81A4929D4266FF9F0B0BE1B5D (void);
// 0x00000174 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::InnerRead(System.Boolean,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerRead_m0EDB58159985F661C68EBA26247546ED06999D0F (void);
// 0x00000175 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::InnerWrite(System.Boolean,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerWrite_m36FEDC8E842C497B62D566D6392287270FD698AC (void);
// 0x00000176 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.MobileAuthenticatedStream::ProcessHandshake(Mono.Net.Security.AsyncOperationStatus)
extern void MobileAuthenticatedStream_ProcessHandshake_mE6B1280A8F2D9FB6EA6EC2AC003906FFB49AA9CC (void);
// 0x00000177 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessRead(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessRead_mB005268451AB3F73B29AD1F787B576D5F3279371 (void);
// 0x00000178 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessWrite(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessWrite_m30427A9308C97FAD0964F81A6A9F436FB2507F0F (void);
// 0x00000179 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_IsAuthenticated()
extern void MobileAuthenticatedStream_get_IsAuthenticated_m8D978D4684246BB2629CB1E2D207D2D76C132E3A (void);
// 0x0000017A System.Void Mono.Net.Security.MobileAuthenticatedStream::Dispose(System.Boolean)
extern void MobileAuthenticatedStream_Dispose_mB7DAA195CE82F2FA15AB576C961A7CE5D58C3106 (void);
// 0x0000017B System.Void Mono.Net.Security.MobileAuthenticatedStream::Flush()
extern void MobileAuthenticatedStream_Flush_m20FAE0A0A6C311E1925367C03ECA23BBFB74BE8D (void);
// 0x0000017C System.Int64 Mono.Net.Security.MobileAuthenticatedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MobileAuthenticatedStream_Seek_m2D799812EC327A4E25AA165B9966514B2B1475A6 (void);
// 0x0000017D System.Void Mono.Net.Security.MobileAuthenticatedStream::SetLength(System.Int64)
extern void MobileAuthenticatedStream_SetLength_m8FCE457448E738481D5AAC29A8A9333A1B67D8C1 (void);
// 0x0000017E System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanRead()
extern void MobileAuthenticatedStream_get_CanRead_mE230E0D6A7CA3324925CD6311465B7BD41A144CE (void);
// 0x0000017F System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanWrite()
extern void MobileAuthenticatedStream_get_CanWrite_mAF3696EAD7809A7D9EB50A091BDAE02586E0DF54 (void);
// 0x00000180 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanSeek()
extern void MobileAuthenticatedStream_get_CanSeek_mFD9C9EF3A622E65965F14997361F9F611B2314A2 (void);
// 0x00000181 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Length()
extern void MobileAuthenticatedStream_get_Length_mD76215A3195543708BCB40C787678535541CE71E (void);
// 0x00000182 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Position()
extern void MobileAuthenticatedStream_get_Position_mD05763AB69A4C7F98E6276F32645AEDFD8888731 (void);
// 0x00000183 System.Void Mono.Net.Security.MobileAuthenticatedStream::set_Position(System.Int64)
extern void MobileAuthenticatedStream_set_Position_m5A309FE43C490AA7C1D9AE181D269CCA12B26260 (void);
// 0x00000184 System.Void Mono.Net.Security.MobileAuthenticatedStream::.cctor()
extern void MobileAuthenticatedStream__cctor_mCC74CDBC64394AA7D5FE8CA0EE03EC0F11D7FEB6 (void);
// 0x00000185 System.Void Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>b__67_0()
extern void MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_mA67CDCE05B68516E41F5A6A8BF836B0AAE18D3B9 (void);
// 0x00000186 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::MoveNext()
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82 (void);
// 0x00000187 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B (void);
// 0x00000188 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::MoveNext()
extern void U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466 (void);
// 0x00000189 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC (void);
// 0x0000018A System.Void Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::.ctor()
extern void U3CU3Ec__DisplayClass66_0__ctor_m4ADA8611B27CC1C1BE9AFD1D22978A6621F720BE (void);
// 0x0000018B System.Int32 Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::<InnerRead>b__0()
extern void U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF1C5674011A7F38D3AE4A911BE1E8E36E5CE0348 (void);
// 0x0000018C System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::MoveNext()
extern void U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96 (void);
// 0x0000018D System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381 (void);
// 0x0000018E System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::MoveNext()
extern void U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542 (void);
// 0x0000018F System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A (void);
// 0x00000190 System.Void Mono.Net.Security.MobileTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileTlsContext__ctor_m449BA0C8EEB97C8D13FBDF2B18F46F37408292E2 (void);
// 0x00000191 Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.MobileTlsContext::get_Parent()
extern void MobileTlsContext_get_Parent_m0FD89F43463E15B8D86845F0B3A9DF8B1C555DCF (void);
// 0x00000192 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileTlsContext::get_Settings()
extern void MobileTlsContext_get_Settings_mD01B5D15FBD79707BB1F283814FF76817230E35D (void);
// 0x00000193 System.Boolean Mono.Net.Security.MobileTlsContext::get_IsAuthenticated()
// 0x00000194 System.Boolean Mono.Net.Security.MobileTlsContext::get_IsServer()
extern void MobileTlsContext_get_IsServer_mEC45475AE45AAB2485A829E6694B4E3BA1865C44 (void);
// 0x00000195 System.String Mono.Net.Security.MobileTlsContext::get_TargetHost()
extern void MobileTlsContext_get_TargetHost_m9A21D6E1D130B27A98EC48E33823BAEA78E3103F (void);
// 0x00000196 System.String Mono.Net.Security.MobileTlsContext::get_ServerName()
extern void MobileTlsContext_get_ServerName_m4E6D70D85F6EF3AE2D69F7C94EE30AA94B29D5DE (void);
// 0x00000197 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Net.Security.MobileTlsContext::get_ClientCertificates()
extern void MobileTlsContext_get_ClientCertificates_m9EBE077A35DCE8333AF50C2CE8D22BE18DD26961 (void);
// 0x00000198 System.Void Mono.Net.Security.MobileTlsContext::StartHandshake()
// 0x00000199 System.Boolean Mono.Net.Security.MobileTlsContext::ProcessHandshake()
// 0x0000019A System.Void Mono.Net.Security.MobileTlsContext::FinishHandshake()
// 0x0000019B System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Read(System.Byte[],System.Int32,System.Int32)
// 0x0000019C System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Write(System.Byte[],System.Int32,System.Int32)
// 0x0000019D System.Void Mono.Net.Security.MobileTlsContext::Shutdown()
// 0x0000019E System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void MobileTlsContext_ValidateCertificate_m4A466CEC18A060EDFD9D65F66600FA7F63632F7A (void);
// 0x0000019F System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void MobileTlsContext_ValidateCertificate_mC4B0D79BE85414111AAEF998B89A3397B2FBA25B (void);
// 0x000001A0 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::SelectClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void MobileTlsContext_SelectClientCertificate_mECA3191985152439F02BAF708106264FAE73295E (void);
// 0x000001A1 System.Void Mono.Net.Security.MobileTlsContext::Dispose()
extern void MobileTlsContext_Dispose_m28EF01B1A0096B9A7820BAA0A77DB59C96A619DD (void);
// 0x000001A2 System.Void Mono.Net.Security.MobileTlsContext::Dispose(System.Boolean)
extern void MobileTlsContext_Dispose_mA5A0EBCF3B159E9C83F76C00BA50FC67C360A7D1 (void);
// 0x000001A3 System.Void Mono.Net.Security.MobileTlsContext::Finalize()
extern void MobileTlsContext_Finalize_m5751EFC24E645E0948C5ED11BD9C6C9E31170BA0 (void);
// 0x000001A4 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProviderInternal()
extern void MonoTlsProviderFactory_GetProviderInternal_m39B343490A04AEA1AA38A90180E1B3BB1FB09020 (void);
// 0x000001A5 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeInternal()
extern void MonoTlsProviderFactory_InitializeInternal_m6F039B9508B57C42B56DC7ED10C4F165B43F9200 (void);
// 0x000001A6 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::LookupProvider(System.String,System.Boolean)
extern void MonoTlsProviderFactory_LookupProvider_mCCE6D95A81D810BA625035EEC1F974C16C748700 (void);
// 0x000001A7 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeProviderRegistration()
extern void MonoTlsProviderFactory_InitializeProviderRegistration_mB8EDA2E5365BDCE5E8848A0259C78C1108FABC8D (void);
// 0x000001A8 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::CreateDefaultProviderImpl()
extern void MonoTlsProviderFactory_CreateDefaultProviderImpl_mCD05512BAD4E80E43384340A06057306064EFACE (void);
// 0x000001A9 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProvider()
extern void MonoTlsProviderFactory_GetProvider_m78F329C7EAEB40EBD9A044CC1F0B89026DA2CE4D (void);
// 0x000001AA System.Void Mono.Net.Security.MonoTlsProviderFactory::.cctor()
extern void MonoTlsProviderFactory__cctor_mF95517B2A6920440ACFBE55DEA0EE9C1211BF26A (void);
// 0x000001AB System.Net.HttpWebRequest Mono.Net.Security.MonoTlsStream::get_Request()
extern void MonoTlsStream_get_Request_m2A0C4CA4D549165015FACBFDB99051387A0A6ABA (void);
// 0x000001AC System.Void Mono.Net.Security.MonoTlsStream::set_CertificateValidationFailed(System.Boolean)
extern void MonoTlsStream_set_CertificateValidationFailed_mAECE839D304818A9CA38E598B85B962064F45B3F (void);
// 0x000001AD System.Object Mono.Net.Security.NoReflectionHelper::GetInternalValidator(System.Object,System.Object)
extern void NoReflectionHelper_GetInternalValidator_m231BC9D1C0A711D48F25B6F0162ACABBA93A0D74 (void);
// 0x000001AE System.Object Mono.Net.Security.NoReflectionHelper::GetProvider()
extern void NoReflectionHelper_GetProvider_m59893E33828D7422C8A4779F4C608373877FC05A (void);
// 0x000001AF System.Void Mono.Net.Security.SystemCertificateValidator::.cctor()
extern void SystemCertificateValidator__cctor_mBF04D8E389B7377FC07044B9CF044A966C572193 (void);
// 0x000001B0 System.Security.Cryptography.X509Certificates.X509Chain Mono.Net.Security.SystemCertificateValidator::CreateX509Chain(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void SystemCertificateValidator_CreateX509Chain_mB9965896005703ADC050BC1E6415D30FBDC42091 (void);
// 0x000001B1 System.Boolean Mono.Net.Security.SystemCertificateValidator::NeedsChain(Mono.Security.Interface.MonoTlsSettings)
extern void SystemCertificateValidator_NeedsChain_m51D5E6A2B5A26BECA8764E613D19345A9353BA52 (void);
// 0x000001B2 Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::PublicToMono(System.Net.Security.RemoteCertificateValidationCallback)
extern void CallbackHelpers_PublicToMono_m84CC573B0D8E011058AEC077734D8C76921DD04C (void);
// 0x000001B3 Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Net.Security.Private.CallbackHelpers::PublicToMono(System.Net.Security.LocalCertificateSelectionCallback)
extern void CallbackHelpers_PublicToMono_m1CA5926DB777E92367F0C69583DE272E800E43F1 (void);
// 0x000001B4 System.Net.Security.RemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::MonoToPublic(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
extern void CallbackHelpers_MonoToPublic_mA514EEB118D8EC3D84A607A42A0B48B5DA1FA500 (void);
// 0x000001B5 System.Net.Security.LocalCertSelectionCallback Mono.Net.Security.Private.CallbackHelpers::MonoToInternal(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
extern void CallbackHelpers_MonoToInternal_m82BDD9A21269FA19DA58564160BE5A2C083A4199 (void);
// 0x000001B6 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mA3851A05D04281AEB715F93118D39916A6427108 (void);
// 0x000001B7 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0::<PublicToMono>b__0(System.String,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void U3CU3Ec__DisplayClass0_0_U3CPublicToMonoU3Eb__0_m6FE7B68D49CC73BE9827FE5BB16ADBE161FC37B5 (void);
// 0x000001B8 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m492092FC9882667749BB83BAEAA9A3E071159C2A (void);
// 0x000001B9 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass1_0::<PublicToMono>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void U3CU3Ec__DisplayClass1_0_U3CPublicToMonoU3Eb__0_m4DBC5C72F03BFC069888B7B4D29A189369967692 (void);
// 0x000001BA System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m220DD155C36F2E4600624C5208FBCAC3DBDBC31D (void);
// 0x000001BB System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::<MonoToPublic>b__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_mA228BC7BEF63CBFCF290284572E847A6BCCFECF7 (void);
// 0x000001BC System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m2D537E7900C0394F5478CF4E408AACDF9F926E86 (void);
// 0x000001BD System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::<MonoToInternal>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m0B62590D3F567A6C864B7B82B577676087CACB6B (void);
// 0x000001BE System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.SafeHandle,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeWaitHandle&,System.Int32,System.Boolean,System.Int32)
extern void NativeMethods_DuplicateHandle_m78864E2A6608237C7AD9F392672CF62C102EFAB9 (void);
// 0x000001BF System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeProcessHandle&,System.Int32,System.Boolean,System.Int32)
extern void NativeMethods_DuplicateHandle_mD5F5CFE9AF5F0A0831B226D5A2E7D8B27BC77420 (void);
// 0x000001C0 System.IntPtr Microsoft.Win32.NativeMethods::GetCurrentProcess()
extern void NativeMethods_GetCurrentProcess_m470BC1AB38E76F7D3609E5973164BA429A5A99F0 (void);
// 0x000001C1 System.Boolean Microsoft.Win32.NativeMethods::GetExitCodeProcess(System.IntPtr,System.Int32&)
extern void NativeMethods_GetExitCodeProcess_m0B68F9BEAE74B6484B647B2B6184A277D7F9B85E (void);
// 0x000001C2 System.Boolean Microsoft.Win32.NativeMethods::GetExitCodeProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle,System.Int32&)
extern void NativeMethods_GetExitCodeProcess_m7D3B74718B6769AC344772C3371029A23A9F63F2 (void);
// 0x000001C3 System.Boolean Microsoft.Win32.NativeMethods::TerminateProcess(System.IntPtr,System.Int32)
extern void NativeMethods_TerminateProcess_mBC4E2594C95D3509663AD05AB574C5BBEC21BC88 (void);
// 0x000001C4 System.Boolean Microsoft.Win32.NativeMethods::TerminateProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle,System.Int32)
extern void NativeMethods_TerminateProcess_m71EEA18511EFFAA5A89D30B3F5CF57084F937617 (void);
// 0x000001C5 System.Int32 Microsoft.Win32.NativeMethods::GetCurrentProcessId()
extern void NativeMethods_GetCurrentProcessId_m0016C19BD1E7D529B3DE06613A7ABDD6B5898386 (void);
// 0x000001C6 System.Boolean Microsoft.Win32.NativeMethods::CloseProcess(System.IntPtr)
extern void NativeMethods_CloseProcess_m95778319FAE1520630CDF2814F892186E8D977B3 (void);
// 0x000001C7 System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr)
extern void SafeProcessHandle__ctor_mACAF3A4631B2722598CCF2A2643A25FE19B8D16D (void);
// 0x000001C8 System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeProcessHandle__ctor_m713A0BCAD1C7ED5FC8C6209AAFFDB13F4D0C0B74 (void);
// 0x000001C9 System.Boolean Microsoft.Win32.SafeHandles.SafeProcessHandle::ReleaseHandle()
extern void SafeProcessHandle_ReleaseHandle_m0748515ED950677F3A4565858B2155DC2D5417A5 (void);
// 0x000001CA System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.cctor()
extern void SafeProcessHandle__cctor_mF612BA387B3390D761F2198447AEE905441E1911 (void);
// 0x000001CB System.Void System.UriBuilder::.ctor()
extern void UriBuilder__ctor_mFC8729DAB4291B5B6500207C85DCB3985B46BB52 (void);
// 0x000001CC System.Void System.UriBuilder::.ctor(System.Uri)
extern void UriBuilder__ctor_m1B050A706B91D8EDCF5DD4A98CA1F1A0FE6EA8AE (void);
// 0x000001CD System.Void System.UriBuilder::Init(System.Uri)
extern void UriBuilder_Init_mB18B3A4578F102E7E99F18542236A6B5B6ABA174 (void);
// 0x000001CE System.Void System.UriBuilder::set_Host(System.String)
extern void UriBuilder_set_Host_m7213BE98F62DE6A099EA8EEFF479949C5F1EA680 (void);
// 0x000001CF System.Void System.UriBuilder::set_Port(System.Int32)
extern void UriBuilder_set_Port_m14DBA6E597BED983B73F4AD7F1215C6E474DB6F3 (void);
// 0x000001D0 System.Void System.UriBuilder::set_Scheme(System.String)
extern void UriBuilder_set_Scheme_mD20C10C2D43C0C2C96D9098BE4331D46FCC45921 (void);
// 0x000001D1 System.Uri System.UriBuilder::get_Uri()
extern void UriBuilder_get_Uri_mDCABA4CD1D05D4B9C4CBA063BC7CA94EE6CCC631 (void);
// 0x000001D2 System.Boolean System.UriBuilder::Equals(System.Object)
extern void UriBuilder_Equals_m370D16A9DCA721B688549EE192A9B79C737FE16D (void);
// 0x000001D3 System.Int32 System.UriBuilder::GetHashCode()
extern void UriBuilder_GetHashCode_m4FBBBBE01B56EF5DF92C4F5A2BCAF5E86A585BE7 (void);
// 0x000001D4 System.Void System.UriBuilder::SetFieldsFromUri(System.Uri)
extern void UriBuilder_SetFieldsFromUri_m54B4EB1ACEF01F2B0B11EC81768BB7D56245447F (void);
// 0x000001D5 System.String System.UriBuilder::ToString()
extern void UriBuilder_ToString_m5BF9ED358C61008561663680C0D843C22C25443D (void);
// 0x000001D6 System.Void System.SecurityUtils::DemandReflectionAccess(System.Type)
extern void SecurityUtils_DemandReflectionAccess_mC21CA419C4B77BBDE16AAF5C33DCBF86E3CCA5F0 (void);
// 0x000001D7 System.Boolean System.SecurityUtils::HasReflectionPermission(System.Type)
extern void SecurityUtils_HasReflectionPermission_mE162700DD39C0E439075D744EA4DD3C768AA5D96 (void);
// 0x000001D8 System.Object System.SecurityUtils::SecureCreateInstance(System.Type)
extern void SecurityUtils_SecureCreateInstance_m00B165286E54C3393CFFE82948E078F96018750A (void);
// 0x000001D9 System.Object System.SecurityUtils::SecureCreateInstance(System.Type,System.Object[],System.Boolean)
extern void SecurityUtils_SecureCreateInstance_m75CC5B0308F53B01ADC1B5EEBF831C49A53808F4 (void);
// 0x000001DA System.Object System.SecurityUtils::SecureConstructorInvoke(System.Type,System.Type[],System.Object[],System.Boolean)
extern void SecurityUtils_SecureConstructorInvoke_m7DA77EA06BECD2F9B36481C8CAD9429674166D27 (void);
// 0x000001DB System.Object System.SecurityUtils::SecureConstructorInvoke(System.Type,System.Type[],System.Object[],System.Boolean,System.Reflection.BindingFlags)
extern void SecurityUtils_SecureConstructorInvoke_mE027B99C9C5C9A325AFC67CAC4B4106DBE855585 (void);
// 0x000001DC System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_mA9BAAD6D244ADEE8986FDC0DFB3DFDA90C093A6C (void);
// 0x000001DD System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_m5ED29083C22062AEAB8B5787C9A27CFEEC397AD9 (void);
// 0x000001DE System.Boolean System.IriHelper::CheckIsReserved(System.Char,System.UriComponents)
extern void IriHelper_CheckIsReserved_m5C0A35BF0890852A3FC564618DB0836BBB6C0F1C (void);
// 0x000001DF System.String System.IriHelper::EscapeUnescapeIri(System.Char*,System.Int32,System.Int32,System.UriComponents)
extern void IriHelper_EscapeUnescapeIri_m6DE347247CE35DB4CE3129BEC2179F0095D69239 (void);
// 0x000001E0 System.Boolean System.Uri::get_IsImplicitFile()
extern void Uri_get_IsImplicitFile_m048350CB1E9AB92599F1557680A5D3B5FDE7C35D (void);
// 0x000001E1 System.Boolean System.Uri::get_IsUncOrDosPath()
extern void Uri_get_IsUncOrDosPath_mE372CA996BE5B29DD531D7C6DD1809E17441005E (void);
// 0x000001E2 System.Boolean System.Uri::get_IsDosPath()
extern void Uri_get_IsDosPath_m89CA4E32381C529502E91872BC89BD18F5419D08 (void);
// 0x000001E3 System.Boolean System.Uri::get_IsUncPath()
extern void Uri_get_IsUncPath_mD5EE84D5105BFB7D64E5C26B9549A67B720A7AE8 (void);
// 0x000001E4 System.Uri/Flags System.Uri::get_HostType()
extern void Uri_get_HostType_mBB4EE8652EA19E2FB8C696302D5EBE82F358EC90 (void);
// 0x000001E5 System.UriParser System.Uri::get_Syntax()
extern void Uri_get_Syntax_m3DB6A5D9E6FC3E0D0A63EA8A4527AF4106F9BD78 (void);
// 0x000001E6 System.Boolean System.Uri::get_IsNotAbsoluteUri()
extern void Uri_get_IsNotAbsoluteUri_mF9706123EB027C6E9AB263B98CE58CF319A22919 (void);
// 0x000001E7 System.Boolean System.Uri::IriParsingStatic(System.UriParser)
extern void Uri_IriParsingStatic_m39FC9677B4B9EFBADF814F2EEA58280F35A1D3E5 (void);
// 0x000001E8 System.Boolean System.Uri::get_AllowIdn()
extern void Uri_get_AllowIdn_mF1833CB700E04D746D75428948BEBC70536E1941 (void);
// 0x000001E9 System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
extern void Uri_AllowIdnStatic_mFABD19611F334DF87EC3FF2B9A1FA061CAE3A5C5 (void);
// 0x000001EA System.Boolean System.Uri::IsIntranet(System.String)
extern void Uri_IsIntranet_mE98CA41B60FE0D4970737C8B7C81E5C63BFC07E1 (void);
// 0x000001EB System.Boolean System.Uri::get_UserDrivenParsing()
extern void Uri_get_UserDrivenParsing_mFF27964894B5C0432C37E425F319D6C915BCDC39 (void);
// 0x000001EC System.Void System.Uri::SetUserDrivenParsing()
extern void Uri_SetUserDrivenParsing_m0368CB47B9E9C35CB49B3F02DBE8DFED8756226B (void);
// 0x000001ED System.UInt16 System.Uri::get_SecuredPathIndex()
extern void Uri_get_SecuredPathIndex_mC59A2366D6F3667017F677351C4350C9541905AA (void);
// 0x000001EE System.Boolean System.Uri::NotAny(System.Uri/Flags)
extern void Uri_NotAny_mC5DC04B72B13D2997B055B9E41FCFEEC1CE5263D (void);
// 0x000001EF System.Boolean System.Uri::InFact(System.Uri/Flags)
extern void Uri_InFact_m4CE890C86FA34154A044516D2F3C9463389220D7 (void);
// 0x000001F0 System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticNotAny_mC07A1201FBE032238FCFA96E9FB5D60AEDACCC5A (void);
// 0x000001F1 System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticInFact_m77BB2AE094534AFD7B9F68683C2A4356A75E39B8 (void);
// 0x000001F2 System.Uri/UriInfo System.Uri::EnsureUriInfo()
extern void Uri_EnsureUriInfo_m4B46DF8611FA6D20D497D12D00544CFB466DCFA7 (void);
// 0x000001F3 System.Void System.Uri::EnsureParseRemaining()
extern void Uri_EnsureParseRemaining_m33815B5767FAFADB762F7E39364E6432340F210B (void);
// 0x000001F4 System.Void System.Uri::EnsureHostString(System.Boolean)
extern void Uri_EnsureHostString_m4BD63AA5A88CA09572A8A7CF3B2EDDE17EF9C720 (void);
// 0x000001F5 System.Void System.Uri::.ctor(System.String)
extern void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (void);
// 0x000001F6 System.Void System.Uri::.ctor(System.String,System.UriKind)
extern void Uri__ctor_mA02DB222F4F35380DE2700D84F58EB42497FDDE4 (void);
// 0x000001F7 System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern void Uri__ctor_m42192656437FBEF1EEA8724D3EF2BB67DA0ED6BF (void);
// 0x000001F8 System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
extern void Uri_GetCombinedString_m7B95A90BC09E899CF41B0047E0B681FA7CEB8668 (void);
// 0x000001F9 System.UriFormatException System.Uri::GetException(System.ParsingError)
extern void Uri_GetException_m2E833A8358C84BCF0397341160FADB1164290164 (void);
// 0x000001FA System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri__ctor_m020E8051B3C0C9E60D8A868CBA0774B3FFB7C3FF (void);
// 0x000001FB System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_mD4773E59427820077E86F2B298DA1386028DAC9C (void);
// 0x000001FC System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_GetObjectData_mC8CCD55C21CB624E369258E27A89F363F8271E68 (void);
// 0x000001FD System.String System.Uri::get_AbsolutePath()
extern void Uri_get_AbsolutePath_mA9A825E2BBD0A43AD76EB9A9765E29E45FE32F31 (void);
// 0x000001FE System.String System.Uri::get_PrivateAbsolutePath()
extern void Uri_get_PrivateAbsolutePath_mC1CDB66963BF6D6AEDE0713D3CF0CE0647A6A532 (void);
// 0x000001FF System.String System.Uri::get_AbsoluteUri()
extern void Uri_get_AbsoluteUri_m4326730E572E7E3874021E802813EB6F49F7F99E (void);
// 0x00000200 System.String System.Uri::get_LocalPath()
extern void Uri_get_LocalPath_mA82E33D3A3CC238669E0CE3B7AD298AA9C8695D0 (void);
// 0x00000201 System.String System.Uri::get_Authority()
extern void Uri_get_Authority_m8C0B264FFF519F0D0C2CB3F9B6B0E87D2F3835C1 (void);
// 0x00000202 System.Boolean System.Uri::get_IsDefaultPort()
extern void Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304 (void);
// 0x00000203 System.Boolean System.Uri::get_IsFile()
extern void Uri_get_IsFile_m06AB5A15E2A34BBC5177C6E902C5C9D7E766A213 (void);
// 0x00000204 System.Boolean System.Uri::get_IsLoopback()
extern void Uri_get_IsLoopback_mCD7E1228C8296730CBD31C713B0A81B660D99BC4 (void);
// 0x00000205 System.String System.Uri::get_PathAndQuery()
extern void Uri_get_PathAndQuery_mF079BA04B7A397B2729E5B5DEE72B3654A44E384 (void);
// 0x00000206 System.Boolean System.Uri::get_IsUnc()
extern void Uri_get_IsUnc_m70B47E68BDAE06A7E5362DCE5AAD97C12119AB99 (void);
// 0x00000207 System.String System.Uri::get_Host()
extern void Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151 (void);
// 0x00000208 System.Boolean System.Uri::StaticIsFile(System.UriParser)
extern void Uri_StaticIsFile_mD270A5F6C8B59AAF6256B4565ABE5917ABA545E3 (void);
// 0x00000209 System.Object System.Uri::get_InitializeLock()
extern void Uri_get_InitializeLock_m45D6A11D14958E716715351E52207DCA808F00EE (void);
// 0x0000020A System.Void System.Uri::InitializeUriConfig()
extern void Uri_InitializeUriConfig_m1B2F98DF0BB1A48FEB328E9D8BF3C23B32196FE2 (void);
// 0x0000020B System.String System.Uri::GetLocalPath()
extern void Uri_GetLocalPath_m0E14B876FC912A64FC37663FBB3F65234FD4146E (void);
// 0x0000020C System.Int32 System.Uri::get_Port()
extern void Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C (void);
// 0x0000020D System.String System.Uri::get_Query()
extern void Uri_get_Query_m3F64514B4DB7C849C8255BA3FE08C6BE983D2D56 (void);
// 0x0000020E System.String System.Uri::get_Fragment()
extern void Uri_get_Fragment_m111666DD668AC59B9F3C3D3CEEEC7F70F6904D41 (void);
// 0x0000020F System.String System.Uri::get_Scheme()
extern void Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187 (void);
// 0x00000210 System.Boolean System.Uri::get_OriginalStringSwitched()
extern void Uri_get_OriginalStringSwitched_m79E1C9F1C4E0ACCC85BB68841C167DDEA15CC72D (void);
// 0x00000211 System.String System.Uri::get_OriginalString()
extern void Uri_get_OriginalString_m56099E46276F0A52524347F1F46A2F88E948504F (void);
// 0x00000212 System.String System.Uri::get_DnsSafeHost()
extern void Uri_get_DnsSafeHost_mC2D93669288A9C05CC13EE5754CEBF2D74D04704 (void);
// 0x00000213 System.Boolean System.Uri::get_IsAbsoluteUri()
extern void Uri_get_IsAbsoluteUri_m8C189085F1C675DBC3148AA70C38074EC075D722 (void);
// 0x00000214 System.Boolean System.Uri::get_UserEscaped()
extern void Uri_get_UserEscaped_m8F29E9A593E84E66DD4AC06CBD5880B93A5F0307 (void);
// 0x00000215 System.String System.Uri::get_UserInfo()
extern void Uri_get_UserInfo_m201C93A932C446805E9143EBE969048D7E75C71E (void);
// 0x00000216 System.Boolean System.Uri::IsGenDelim(System.Char)
extern void Uri_IsGenDelim_m376CCA5D00D019A69FD746C57D236A54EB9D3CF3 (void);
// 0x00000217 System.Boolean System.Uri::CheckSchemeName(System.String)
extern void Uri_CheckSchemeName_m351E06F4546E0F84E2DDB286B531F39D379589BC (void);
// 0x00000218 System.Boolean System.Uri::IsHexDigit(System.Char)
extern void Uri_IsHexDigit_m3B2881FA99F0B2197F8017E70C3AE6EBF9849836 (void);
// 0x00000219 System.Int32 System.Uri::FromHex(System.Char)
extern void Uri_FromHex_m9EAC76A5DBFED86532FF7E1BBD809176337A227B (void);
// 0x0000021A System.Int32 System.Uri::GetHashCode()
extern void Uri_GetHashCode_m06066B9059649A690C5B4DE58D32DF227933F515 (void);
// 0x0000021B System.String System.Uri::ToString()
extern void Uri_ToString_mB76863E11134B9635149E8E5F59AB75A74A760E2 (void);
// 0x0000021C System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern void Uri_op_Equality_mFED3D4AFAB090B76D2088C485507F8F702ADA18F (void);
// 0x0000021D System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern void Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B (void);
// 0x0000021E System.Boolean System.Uri::Equals(System.Object)
extern void Uri_Equals_m432A30F5E72A0F2B729AC051892BF9E1F4D26629 (void);
// 0x0000021F System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseScheme_m61CAE16F1EC76725E5E0B23B09577F91BB223884 (void);
// 0x00000220 System.UriFormatException System.Uri::ParseMinimal()
extern void Uri_ParseMinimal_m35FCFE52F12315DA60733B807E7C0AB408C0A9CF (void);
// 0x00000221 System.ParsingError System.Uri::PrivateParseMinimal()
extern void Uri_PrivateParseMinimal_mE1DA461DDA053787906BBEC2BC2B3046B1B329F0 (void);
// 0x00000222 System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
extern void Uri_PrivateParseMinimalIri_m29F0CA367080586448C648332F59BED0096AB2D0 (void);
// 0x00000223 System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
extern void Uri_CreateUriInfo_mC112D6E7002CA014AB6BEA878A66ECC46340FAAF (void);
// 0x00000224 System.Void System.Uri::CreateHostString()
extern void Uri_CreateHostString_m6FEC48641D3786D73B50D5DC792804C9A4D70C54 (void);
// 0x00000225 System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
extern void Uri_CreateHostStringHelper_m6C5EEA8BD2CDBCDD8A63FB74D3B801329EDE7BDD (void);
// 0x00000226 System.Void System.Uri::GetHostViaCustomSyntax()
extern void Uri_GetHostViaCustomSyntax_mD591A4A615803E70A03D7C75E7C114E4E460AED3 (void);
// 0x00000227 System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
extern void Uri_GetParts_mF5840DC010E6D420EB5A0722320EDAAEA2D0269F (void);
// 0x00000228 System.String System.Uri::GetEscapedParts(System.UriComponents)
extern void Uri_GetEscapedParts_m745615124808CB89A18D499988F4425F678938C4 (void);
// 0x00000229 System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
extern void Uri_GetUnescapedParts_m051A75B5D2DDAE55F107457CA468EE9A2563FED3 (void);
// 0x0000022A System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
extern void Uri_ReCreateParts_mF50263ABC7D750E939B57BF61FA48A8762144FD7 (void);
// 0x0000022B System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
extern void Uri_GetUriPartsFromUserString_m95A7794F28625B6AFD514C08765C27CAAE4BD1B6 (void);
// 0x0000022C System.Void System.Uri::ParseRemaining()
extern void Uri_ParseRemaining_mBAE0F9850CD84965B3793B17444C677D77D58774 (void);
// 0x0000022D System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseSchemeCheckImplicitFile_m92A658AE6C04E038058AD8E9581A41B06B6D6243 (void);
// 0x0000022E System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
extern void Uri_CheckKnownSchemes_mCA95AE251E7C9208570543B446385BCF2C727E8D (void);
// 0x0000022F System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
extern void Uri_CheckSchemeSyntax_m1181D9BEA35D9D22852FD2FE815CABB267BA5A8F (void);
// 0x00000230 System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
extern void Uri_CheckAuthorityHelper_m5046CE781115A54CAE3ACD2C03987F526A761387 (void);
// 0x00000231 System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleDnsIri_m366E36029D4C9A00C0F216055B15F5E4805AED28 (void);
// 0x00000232 System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleAnyHostIri_m76FEA31E3FEDF3D1614987C6484ECF15022AE9D8 (void);
// 0x00000233 System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_mF276ABD008291C1FDC4B433A2F274058D06D8A6B (void);
// 0x00000234 System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_mDCDF860C405E9F31F7CFE9AFFE7C096812697AEF (void);
// 0x00000235 System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_CheckCanonical_mED3910E55213D1DFEAA5B33079E3A89D369B10B6 (void);
// 0x00000236 System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
extern void Uri_GetCanonicalPath_mDE02BFA56EDD09479DDB2A5A50F6DF5210CA73F2 (void);
// 0x00000237 System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
extern void Uri_UnescapeOnly_mB8F87981CDD4CFBFCD97EE668FF281CE26453F21 (void);
// 0x00000238 System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
extern void Uri_Compress_m02224082A9665F07D35AB6EB6E3198642F9E7BCF (void);
// 0x00000239 System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
extern void Uri_CalculateCaseInsensitiveHashCode_m634FFDF8FCD81DECCB87161B153D1093C0A6FCE4 (void);
// 0x0000023A System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
extern void Uri_CombineUri_m77B7B8B856CF8100E51250247930963E7C544F91 (void);
// 0x0000023B System.Boolean System.Uri::get_HasAuthority()
extern void Uri_get_HasAuthority_m969936D80AE0309273733487C8B38BEE33468712 (void);
// 0x0000023C System.Boolean System.Uri::IsLWS(System.Char)
extern void Uri_IsLWS_m7A9F3B969CCEE56B9F98E40F1903C737DA7DF0D6 (void);
// 0x0000023D System.Boolean System.Uri::IsAsciiLetter(System.Char)
extern void Uri_IsAsciiLetter_m93435A20DF4DEE153B87B26D07B9963F1BF4F373 (void);
// 0x0000023E System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
extern void Uri_IsAsciiLetterOrDigit_mEBA81E735141504B5804F0B3C94EC39B24AF8661 (void);
// 0x0000023F System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
extern void Uri_IsBidiControlCharacter_mB14EA5816A434B7CE382EB9ACBD1432916EC341D (void);
// 0x00000240 System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
extern void Uri_StripBidiControlCharacter_m49D782826401F99D943C1AD76A75125879FF332F (void);
// 0x00000241 System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
extern void Uri_CreateThis_mCB3DC849A426498E9CCD249850CBC69C9D67D864 (void);
// 0x00000242 System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
extern void Uri_InitializeUri_m5D99BD8533F3FAAD479B1193505B5B19B8C2F2DE (void);
// 0x00000243 System.Boolean System.Uri::CheckForConfigLoad(System.String)
extern void Uri_CheckForConfigLoad_m13002EFBBFD437183ED0A7FCBE5681C510996B0F (void);
// 0x00000244 System.Boolean System.Uri::CheckForUnicode(System.String)
extern void Uri_CheckForUnicode_m78E4938E82EE352BD5D8493AE0314224BC2543CD (void);
// 0x00000245 System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
extern void Uri_CheckForEscapedUnreserved_mFE708A44EC74C7E773B96B82CD9A5DF25EF97D4A (void);
// 0x00000246 System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern void Uri_TryCreate_mEEB6736FEDAF52AAE36ACC1EA1EC8CEBB7C52DAB (void);
// 0x00000247 System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
extern void Uri_GetComponents_m0346CA8037531DE1FC630775E0BD1F5D1E7920B6 (void);
// 0x00000248 System.String System.Uri::UnescapeDataString(System.String)
extern void Uri_UnescapeDataString_mE1F40FC5CA3FF03DEE9EB01E3D8BD502D36A284D (void);
// 0x00000249 System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
extern void Uri_EscapeUnescapeIri_mDE5E4BAE74E2C2373AD186732FEE7AD6E0EA7180 (void);
// 0x0000024A System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
extern void Uri__ctor_m4605489523A7A973459720C1BBE4039FD10557CD (void);
// 0x0000024B System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
extern void Uri_CreateHelper_m024137C47351CA9959E4AC66F9443AEEE87D89C0 (void);
// 0x0000024C System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
extern void Uri_ResolveHelper_mEDF1549C3E9AC1CF6177DCF93B17D574411916BC (void);
// 0x0000024D System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
extern void Uri_GetRelativeSerializationString_m5D0CD02E255BB96532F056BB382CF7D74D62BE58 (void);
// 0x0000024E System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
extern void Uri_GetComponentsHelper_m28B0D80FD94A40685C0F70652AB26755C457B2D3 (void);
// 0x0000024F System.Void System.Uri::CreateThisFromUri(System.Uri)
extern void Uri_CreateThisFromUri_m9A4AE7CD70F7EDE9154634057EBE600E74A5D544 (void);
// 0x00000250 System.Void System.Uri::.cctor()
extern void Uri__cctor_m2B8179039C09C64936CF8262E3EF4A7E7C2F90F2 (void);
// 0x00000251 System.Void System.Uri/UriInfo::.ctor()
extern void UriInfo__ctor_m24EFE7B4E03C9FFB8B797770D626680947C87D98 (void);
// 0x00000252 System.Void System.Uri/MoreInfo::.ctor()
extern void MoreInfo__ctor_mFE29F028646C12EDCAF7F0F78F9A85D52C10B83C (void);
// 0x00000253 System.Void System.UriFormatException::.ctor()
extern void UriFormatException__ctor_mBA5F8C423C09F600B1AF895521C892EA356CA424 (void);
// 0x00000254 System.Void System.UriFormatException::.ctor(System.String)
extern void UriFormatException__ctor_mE1D46962CC168EB07B59D1265F5734A8F587567D (void);
// 0x00000255 System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException__ctor_mE7F5B073E9F9DB5F22536C54959BEB0D1E7DA1D5 (void);
// 0x00000256 System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_mED4C06AC35B7F94955ECC0D8F00383888C1127DC (void);
// 0x00000257 System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
extern void UriHelper_EscapeString_mF0077A016F05127923308DF7E7E99BD7B9837E8B (void);
// 0x00000258 System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern void UriHelper_EnsureDestinationSize_m64F4907D0411AAAD1C05E0AD0D2EB120DCBA9217 (void);
// 0x00000259 System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mC172F713349E3D22985A92BC4F5B51D0BCEE61AF (void);
// 0x0000025A System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mD4815AEAF34E25D31AA4BB4A76B88055F0A49E89 (void);
// 0x0000025B System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void UriHelper_MatchUTF8Sequence_m4835D9BB77C2701643B14D6FFD3D7057F8C9007F (void);
// 0x0000025C System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern void UriHelper_EscapeAsciiChar_mFD7DE796BD53CBD2B1E73080FE0346D37F358902 (void);
// 0x0000025D System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern void UriHelper_EscapedAscii_m06D556717795E649EBBB30E4CBCF3D221C1FEB78 (void);
// 0x0000025E System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern void UriHelper_IsNotSafeForUnescape_m1D0461E7C5A3CFBD7A2A7F7322B66BC68CCE741D (void);
// 0x0000025F System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern void UriHelper_IsReservedUnreservedOrHash_m3D7256DABA7F540F8D379FC1D1C54F1C63E46059 (void);
// 0x00000260 System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern void UriHelper_IsUnreserved_mAADC7DCEEA864AFB49311696ABBDD76811FAAE48 (void);
// 0x00000261 System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
extern void UriHelper_Is3986Unreserved_m3799F2ADA8C63DDB4995F82B974C8EC1DEEBA76A (void);
// 0x00000262 System.Void System.UriHelper::.cctor()
extern void UriHelper__cctor_m9537B8AAAA1D6EF77D29A179EC79F5511C662F27 (void);
// 0x00000263 System.String System.UriParser::get_SchemeName()
extern void UriParser_get_SchemeName_mFC9EFD71512A64E640866792CCB7DAC5187DE9F1 (void);
// 0x00000264 System.Int32 System.UriParser::get_DefaultPort()
extern void UriParser_get_DefaultPort_m050510870CCD4DD08DF7E98E2AF3D616446AD99D (void);
// 0x00000265 System.UriParser System.UriParser::OnNewUri()
extern void UriParser_OnNewUri_m7D55337A7A9B6B67FB0AD7CA96F472751EF5A897 (void);
// 0x00000266 System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InitializeAndValidate_m3E31D86FEE445E313BB7141F760626301767A0E0 (void);
// 0x00000267 System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_Resolve_mF21D3AA42AB1EC2B173617D76E4041EB3481D979 (void);
// 0x00000268 System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_GetComponents_m8A226F43638FA7CD135A651CDE3D4E475E8FC181 (void);
// 0x00000269 System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern void UriParser_get_ShouldUseLegacyV2Quirks_mD4C8DF67677ACCCC3B5E026099ECC0BDA24D96DD (void);
// 0x0000026A System.Void System.UriParser::.cctor()
extern void UriParser__cctor_m00C2855D5C8C07790C5627BBB90AC84A7E8B6BC2 (void);
// 0x0000026B System.UriSyntaxFlags System.UriParser::get_Flags()
extern void UriParser_get_Flags_mBCF4C3E94892F00B6E8856BFED1B650FB6A0C039 (void);
// 0x0000026C System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern void UriParser_NotAny_mC998A35DC290F35FFAFFB6A8B66C7B881F2559D3 (void);
// 0x0000026D System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern void UriParser_InFact_mDD42FA932B6830D99AA04C2AE7875BA5067C86F3 (void);
// 0x0000026E System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
extern void UriParser_IsAllSet_m74BEC412DC8AF3B1A33E11964EBB3164D9D8C77E (void);
// 0x0000026F System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern void UriParser_IsFullMatch_m7B5F47A62FA721E550C5439FAA4C6AFAC34EB23E (void);
// 0x00000270 System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern void UriParser__ctor_mAF168F2B88BC5301B722C1BAAD45E381FBA22E3D (void);
// 0x00000271 System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
extern void UriParser_FindOrFetchAsUnknownV1Syntax_m3A57CA15FE27DC7982F186E8321B810B56EBD9AD (void);
// 0x00000272 System.UriParser System.UriParser::GetSyntax(System.String)
extern void UriParser_GetSyntax_mC2FEAF79ECEB6550573A1C0578141BB236F7EF16 (void);
// 0x00000273 System.Boolean System.UriParser::get_IsSimple()
extern void UriParser_get_IsSimple_mDDB03A5F6EEE6E92926A386655E5BBD553719B9C (void);
// 0x00000274 System.UriParser System.UriParser::InternalOnNewUri()
extern void UriParser_InternalOnNewUri_m7D55F5CD59A3B9BF57BC68F715A27CC1A44566CA (void);
// 0x00000275 System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InternalValidate_mF2FEB0E76E48B621EB2058FBE7DCC6A42A1681E2 (void);
// 0x00000276 System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_InternalResolve_m2A027789CB5105E32B09810E81810E8E35DD1F26 (void);
// 0x00000277 System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_InternalGetComponents_mFD4B211C71E0506AE4E4E99D92ECAF1780CE4674 (void);
// 0x00000278 System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern void BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C (void);
// 0x00000279 System.String System.DomainNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void DomainNameHelper_ParseCanonicalName_mFE738FD1237E2D9D9A1B27BA73F58B1689D451E4 (void);
// 0x0000027A System.Boolean System.DomainNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValid_mE9672A824F71E32116358C5FA029789855A4B461 (void);
// 0x0000027B System.Boolean System.DomainNameHelper::IsValidByIri(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValidByIri_m13E2A6D9EBD42326C096F2423DBB0014763D47BF (void);
// 0x0000027C System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_IdnEquivalent_m439593BAF7C6C801F577E7C27B0C4FBB1772E49F (void);
// 0x0000027D System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.String&)
extern void DomainNameHelper_IdnEquivalent_m459BFF3040F8E6BFE1CE1C6432A1343A2ECF2F57 (void);
// 0x0000027E System.Boolean System.DomainNameHelper::IsIdnAce(System.String,System.Int32)
extern void DomainNameHelper_IsIdnAce_m2231C778C4CCE141ACDC412737642CC365307445 (void);
// 0x0000027F System.Boolean System.DomainNameHelper::IsIdnAce(System.Char*,System.Int32)
extern void DomainNameHelper_IsIdnAce_m9193B7D824FC6965820FCE980FEE3E0B40EA94B8 (void);
// 0x00000280 System.String System.DomainNameHelper::UnicodeEquivalent(System.String,System.Char*,System.Int32,System.Int32)
extern void DomainNameHelper_UnicodeEquivalent_mA80E5FF3AD6AFBB9FC257ED1C4F0D31C8F0EFEC3 (void);
// 0x00000281 System.String System.DomainNameHelper::UnicodeEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_UnicodeEquivalent_mD5A7A659B82F1FBF7ABF30009117CFBF8BC4D55F (void);
// 0x00000282 System.Boolean System.DomainNameHelper::IsASCIILetterOrDigit(System.Char,System.Boolean&)
extern void DomainNameHelper_IsASCIILetterOrDigit_mD3B0B9BD4573FADEF6AC7330A5EC58C220455F01 (void);
// 0x00000283 System.Boolean System.DomainNameHelper::IsValidDomainLabelCharacter(System.Char,System.Boolean&)
extern void DomainNameHelper_IsValidDomainLabelCharacter_mF6DEB20D9D03A8728B1C58006C40D6603B7D61D1 (void);
// 0x00000284 System.String System.IPv4AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void IPv4AddressHelper_ParseCanonicalName_m2A8C35045CE02D6FC2C4251F239D1C0074E0E813 (void);
// 0x00000285 System.Int32 System.IPv4AddressHelper::ParseHostNumber(System.String,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseHostNumber_m798FB6828971F70775D1125565A1D1025C897F14 (void);
// 0x00000286 System.Boolean System.IPv4AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValid_mD96D91E0F3830414F4601A4521E71DE832A45843 (void);
// 0x00000287 System.Boolean System.IPv4AddressHelper::IsValidCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValidCanonical_mC27E31F1F043D68BC52719892D34EDDC7851B120 (void);
// 0x00000288 System.Int64 System.IPv4AddressHelper::ParseNonCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv4AddressHelper_ParseNonCanonical_mDCD1CD7FB85C4FFBF3070B1435A0D632C1A7B97E (void);
// 0x00000289 System.Boolean System.IPv4AddressHelper::Parse(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_Parse_m08110623FAC14806376148D7C16AB95A428EA6CF (void);
// 0x0000028A System.Boolean System.IPv4AddressHelper::ParseCanonical(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseCanonical_m9D4552558C934E373D188DDA0BC1D1DEF5A62C33 (void);
// 0x0000028B System.String System.IPv6AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Boolean&,System.String&)
extern void IPv6AddressHelper_ParseCanonicalName_m3944530A7B686031653F97824EF712424E0BEE14 (void);
// 0x0000028C System.String System.IPv6AddressHelper::CreateCanonicalName(System.UInt16*)
extern void IPv6AddressHelper_CreateCanonicalName_m0B1C201DFADBEB58869E0BE8BFA967EEE64B096A (void);
// 0x0000028D System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.UInt16*)
extern void IPv6AddressHelper_FindCompressionRange_mE70B131DDA05D3059325246A5AB7F6029B6EF6BD (void);
// 0x0000028E System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.UInt16*)
extern void IPv6AddressHelper_ShouldHaveIpv4Embedded_m262634E9099141536C00213C1CFC123665A641DE (void);
// 0x0000028F System.Boolean System.IPv6AddressHelper::InternalIsValid(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv6AddressHelper_InternalIsValid_m3BD7E7524455146D4464037DA3B65530E547AB7A (void);
// 0x00000290 System.Boolean System.IPv6AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValid_m2383F1A867665B04A4F2B8D82FF2B62BE51C2289 (void);
// 0x00000291 System.Boolean System.IPv6AddressHelper::IsValidStrict(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValidStrict_m4D3701E2EE4840DA681BB9D9BDACDDDBAE80A575 (void);
// 0x00000292 System.Boolean System.IPv6AddressHelper::Parse(System.String,System.UInt16*,System.Int32,System.String&)
extern void IPv6AddressHelper_Parse_m36CE2F56465C4F9F7791E80E954C7C0ECBD16DFB (void);
// 0x00000293 System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void UncNameHelper_ParseCanonicalName_mCBE64015FD1B6B4829CEAA89625C1D44E280E37E (void);
// 0x00000294 System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
extern void UncNameHelper_IsValid_m4055361D79684EE7B098C055B2E9068EE06F1EF6 (void);
// 0x00000295 System.Void System.IOAsyncCallback::.ctor(System.Object,System.IntPtr)
extern void IOAsyncCallback__ctor_m1010BF5234B0ECC2FEB54105BA15B313633C1985 (void);
// 0x00000296 System.Void System.IOAsyncCallback::Invoke(System.IOAsyncResult)
extern void IOAsyncCallback_Invoke_mB95F7E7F0E8326CE5364A30F42FC1073B0AB2D8B (void);
// 0x00000297 System.IAsyncResult System.IOAsyncCallback::BeginInvoke(System.IOAsyncResult,System.AsyncCallback,System.Object)
extern void IOAsyncCallback_BeginInvoke_mB8CACF8990B91DF4A695E597CEBE4BA09354C32C (void);
// 0x00000298 System.Void System.IOAsyncCallback::EndInvoke(System.IAsyncResult)
extern void IOAsyncCallback_EndInvoke_m397237D5497A9029CC3FACE692D11BDC1558A727 (void);
// 0x00000299 System.Void System.IOAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void IOAsyncResult__ctor_m95A3D285F38AF74293A4956A6232F6B11DB8CFB9 (void);
// 0x0000029A System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
extern void IOAsyncResult_get_AsyncCallback_m1D3A0A3BCC3432B64968E7DC4D3A2ECAA6ABDB60 (void);
// 0x0000029B System.Object System.IOAsyncResult::get_AsyncState()
extern void IOAsyncResult_get_AsyncState_m9D507541D18B17FFF72F90D8DBB3F301213EA4A7 (void);
// 0x0000029C System.Threading.WaitHandle System.IOAsyncResult::get_AsyncWaitHandle()
extern void IOAsyncResult_get_AsyncWaitHandle_mBB8E187CEE0D781E6CC1C0E4576A82D02936B9C5 (void);
// 0x0000029D System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
extern void IOAsyncResult_get_CompletedSynchronously_m55D4C57A46BF019D4FAF05ABE30E6EEEA6A78277 (void);
// 0x0000029E System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
extern void IOAsyncResult_set_CompletedSynchronously_mF2CA3BB7E351A84EEC942B66816756361616EA75 (void);
// 0x0000029F System.Boolean System.IOAsyncResult::get_IsCompleted()
extern void IOAsyncResult_get_IsCompleted_m15FEFA884BA3ACC35503E54F08E209AC5A94BADF (void);
// 0x000002A0 System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
extern void IOAsyncResult_set_IsCompleted_mEC1108082A9F409122195D340A5EC901D67F013E (void);
// 0x000002A1 System.Void System.IOAsyncResult::CompleteDisposed()
// 0x000002A2 System.Void System.IOSelectorJob::.ctor(System.IOOperation,System.IOAsyncCallback,System.IOAsyncResult)
extern void IOSelectorJob__ctor_m2E68791B3E12177FE5236874FA9BDBE1CA97C676 (void);
// 0x000002A3 System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_mF6591C2577197BFD98B2423F8696E5816191FF3F (void);
// 0x000002A4 System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException)
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m3BB2FE95A7033F6994973BF8814C16F4B163A0D6 (void);
// 0x000002A5 System.Void System.IOSelectorJob::MarkDisposed()
extern void IOSelectorJob_MarkDisposed_m2B168E38A597550A3605ABF0032F67967CD43077 (void);
// 0x000002A6 System.Void System.IOSelector::Add(System.IntPtr,System.IOSelectorJob)
extern void IOSelector_Add_m43E2807BB2C9AE5ACB3ECDBC4E7BA2FA967504D1 (void);
// 0x000002A7 System.Int32 System.Platform::uname(System.IntPtr)
extern void Platform_uname_m0769828FE0BC855E1DE4129D7EBE09E999D7AB7D (void);
// 0x000002A8 System.Void System.Platform::CheckOS()
extern void Platform_CheckOS_mE140C06A839F2EA49C9A0FE795A85311E283CC45 (void);
// 0x000002A9 System.Boolean System.Platform::get_IsMacOS()
extern void Platform_get_IsMacOS_m7E1B4DAEFA519F65C50D16CC5DEA7A9FA0EE4D77 (void);
// 0x000002AA System.Void System.UriTypeConverter::.ctor()
extern void UriTypeConverter__ctor_m1CAEEF1C615B28212B83C76D892938E0A77D3A64 (void);
// 0x000002AB System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern void UriTypeConverter_CanConvert_m0F0FB34A1DC16C677BF8F4ED0E720144C17C4795 (void);
// 0x000002AC System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void UriTypeConverter_CanConvertFrom_m1D18F7B5924B6B682AB1CC90FB814DC3331DFF47 (void);
// 0x000002AD System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void UriTypeConverter_CanConvertTo_mC19530C1DD75AC92C20697EFDD0A0E2DB568E099 (void);
// 0x000002AE System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void UriTypeConverter_ConvertFrom_m2FE8479F26F35A578983E194038CF186D6CD2F85 (void);
// 0x000002AF System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void UriTypeConverter_ConvertTo_m2059A4086714BACA32E7618BD97713CCD5DCFEF4 (void);
// 0x000002B0 System.Void System.Text.RegularExpressions.Regex::.ctor()
extern void Regex__ctor_mFDE4B6A423C15AA60BF9FEC7D4D7DFD4657D7C6E (void);
// 0x000002B1 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern void Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C (void);
// 0x000002B2 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex__ctor_mEF4515C4C44DF8BE410F388C82CC679D743FB5CD (void);
// 0x000002B3 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan,System.Boolean)
extern void Regex__ctor_m87918FB2A856E264A492D2A2B4B412BE4E2370BB (void);
// 0x000002B4 System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex__ctor_mF11825F6E24D7D780BD34C74C96392DEC3602A5D (void);
// 0x000002B5 System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m95B0E2523A72DF6AC56DEA7CDA286F771E06B0FD (void);
// 0x000002B6 System.Void System.Text.RegularExpressions.Regex::ValidateMatchTimeout(System.TimeSpan)
extern void Regex_ValidateMatchTimeout_m71FE7188780DEAD57093B7345CCC50D0159218BE (void);
// 0x000002B7 System.TimeSpan System.Text.RegularExpressions.Regex::InitDefaultMatchTimeout()
extern void Regex_InitDefaultMatchTimeout_mC91736B02BD12B92CBD93C329E7A8233CD0B9DA4 (void);
// 0x000002B8 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern void Regex_get_Options_m823A30690EEA63798DB8497F3E9CF062412B8653 (void);
// 0x000002B9 System.TimeSpan System.Text.RegularExpressions.Regex::get_MatchTimeout()
extern void Regex_get_MatchTimeout_mD484D1CF0B6BF8516A08991D1387761CAE2340D6 (void);
// 0x000002BA System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern void Regex_get_RightToLeft_m546BF531C94563A11427CD24367525462CDB4509 (void);
// 0x000002BB System.String System.Text.RegularExpressions.Regex::ToString()
extern void Regex_ToString_mF967EF5E8BD74C3692379B8436AB8D3C5963FA75 (void);
// 0x000002BC System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern void Regex_IsMatch_m79684C4D2CE6C5495BCCE9A32AC029E1E5950B7C (void);
// 0x000002BD System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern void Regex_IsMatch_m2FB867817B341A5FA3E64A41F31820C9658F22A5 (void);
// 0x000002BE System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern void Regex_Match_mC2C718B93803F6633A708E430F8698E70354B77C (void);
// 0x000002BF System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern void Regex_Match_mA36A33D32F895CE84957DC7DA82E2CD45EF19EEA (void);
// 0x000002C0 System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern void Regex_Replace_mB4E5642068CF8B6DFA3C3C6E21E8AD33AED12223 (void);
// 0x000002C1 System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_Replace_mD7649C6657458BEAA6B18E2BEB158ECA320A4609 (void);
// 0x000002C2 System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern void Regex_Replace_m57129CA8DD318E87C364526DCF0157AD7A4933CB (void);
// 0x000002C3 System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern void Regex_Replace_mF5075A8D78C9AD734DBE740479A6C1F7F9078D73 (void);
// 0x000002C4 System.Void System.Text.RegularExpressions.Regex::InitializeReferences()
extern void Regex_InitializeReferences_m2CD000C1AFAA8B214F32D989C7D116B684A31840 (void);
// 0x000002C5 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Run(System.Boolean,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Regex_Run_m74FB5EF178DF43F88B9058B94939F557479B93FC (void);
// 0x000002C6 System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::LookupCachedAndUpdate(System.String)
extern void Regex_LookupCachedAndUpdate_m88CA03797C5ED796BD5E1319DF6B1B6B6FCE6C0D (void);
// 0x000002C7 System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::CacheCode(System.String)
extern void Regex_CacheCode_m68F93FF3B918776D190D4DB807A3323691C77F0A (void);
// 0x000002C8 System.Boolean System.Text.RegularExpressions.Regex::UseOptionR()
extern void Regex_UseOptionR_m84945EDBEDCD61DBCEB691C929CA28F4B0AF4B49 (void);
// 0x000002C9 System.Boolean System.Text.RegularExpressions.Regex::UseOptionInvariant()
extern void Regex_UseOptionInvariant_m0CA185DBDB15932BB8A8B4F53EB8ACECEC006566 (void);
// 0x000002CA System.Void System.Text.RegularExpressions.Regex::.cctor()
extern void Regex__cctor_m86CE9B8D0FF5F2B54D4FF27D2213A1E6917477DF (void);
// 0x000002CB System.Void System.Text.RegularExpressions.CachedCodeEntry::.ctor(System.String,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.Text.RegularExpressions.SharedReference)
extern void CachedCodeEntry__ctor_m78BCA6060E7D83B172F998AF60D17FB41BE703B8 (void);
// 0x000002CC System.Object System.Text.RegularExpressions.ExclusiveReference::Get()
extern void ExclusiveReference_Get_mE79B077388AFBD19A4524E630701783E7DCE61E4 (void);
// 0x000002CD System.Void System.Text.RegularExpressions.ExclusiveReference::Release(System.Object)
extern void ExclusiveReference_Release_m9A1577138872106EA54A04EA4AB77F710CEDE336 (void);
// 0x000002CE System.Void System.Text.RegularExpressions.ExclusiveReference::.ctor()
extern void ExclusiveReference__ctor_m0427943C75CBB283EF26034339E3D412A080B5D7 (void);
// 0x000002CF System.Object System.Text.RegularExpressions.SharedReference::Get()
extern void SharedReference_Get_m4133101195827AC22016F903F8F945C249E4FCA1 (void);
// 0x000002D0 System.Void System.Text.RegularExpressions.SharedReference::Cache(System.Object)
extern void SharedReference_Cache_mEFA6A88B206EAFEAD6222E239A03BD6E4B244430 (void);
// 0x000002D1 System.Void System.Text.RegularExpressions.SharedReference::.ctor()
extern void SharedReference__ctor_m48E749BC646BEC89282B8F336325D42DE48CFC81 (void);
// 0x000002D2 System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
extern void RegexBoyerMoore__ctor_m39674FB18BB75DD891AAE3781FDA0CCDDEBC2F8C (void);
// 0x000002D3 System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::MatchPattern(System.String,System.Int32)
extern void RegexBoyerMoore_MatchPattern_m41D57E11972B2142649662886DA145AFE396F602 (void);
// 0x000002D4 System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::IsMatch(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_IsMatch_m820D06ED51C062451AFAF22682D2EB06C8DFABD9 (void);
// 0x000002D5 System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::Scan(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_Scan_m204A42056131A694B6D31FC69563355788CABD67 (void);
// 0x000002D6 System.String System.Text.RegularExpressions.RegexBoyerMoore::ToString()
extern void RegexBoyerMoore_ToString_mB0A62E68E8A3CAC5CE3AC45E1C54FA72DFB626F6 (void);
// 0x000002D7 System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern void Capture__ctor_m6CC8A5385C7BD6B8AE63F9812293EC3252A65B3B (void);
// 0x000002D8 System.Int32 System.Text.RegularExpressions.Capture::get_Index()
extern void Capture_get_Index_m46BE6FFC6E8474F55B0504269903F287C45C4B31 (void);
// 0x000002D9 System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern void Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94 (void);
// 0x000002DA System.String System.Text.RegularExpressions.Capture::get_Value()
extern void Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C (void);
// 0x000002DB System.String System.Text.RegularExpressions.Capture::ToString()
extern void Capture_ToString_mD49A28CAD5727E8F629643EDE0C6BAB476BA639E (void);
// 0x000002DC System.String System.Text.RegularExpressions.Capture::GetOriginalString()
extern void Capture_GetOriginalString_m35D3CD7902B7BC29E00AD043D8784FFE4E67539F (void);
// 0x000002DD System.String System.Text.RegularExpressions.Capture::GetLeftSubstring()
extern void Capture_GetLeftSubstring_mF82C23C9E17F3F048605955F76B9D69C3E82FCD7 (void);
// 0x000002DE System.String System.Text.RegularExpressions.Capture::GetRightSubstring()
extern void Capture_GetRightSubstring_m1A17502FFAE73FC4D35540716DB2311717267D5E (void);
// 0x000002DF System.Void System.Text.RegularExpressions.Capture::.ctor()
extern void Capture__ctor_m3ED807279C93FFCE8BE4EAF447DA01E62EF93D7B (void);
// 0x000002E0 System.Void System.Text.RegularExpressions.RegexCharClass::.cctor()
extern void RegexCharClass__cctor_m5170E52D9864BA712125FB33F309FE9E37869EA8 (void);
// 0x000002E1 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor()
extern void RegexCharClass__ctor_mAA44510F3E5001A8612355B4FFB718D9DDC74264 (void);
// 0x000002E2 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor(System.Boolean,System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>,System.Text.StringBuilder,System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass__ctor_mB05A6CC8015C5D545C639682454A524DE7E2EA97 (void);
// 0x000002E3 System.Boolean System.Text.RegularExpressions.RegexCharClass::get_CanMerge()
extern void RegexCharClass_get_CanMerge_mC27A4CF83CFBEF3741A3DB4F99ABA6DE76B57837 (void);
// 0x000002E4 System.Void System.Text.RegularExpressions.RegexCharClass::set_Negate(System.Boolean)
extern void RegexCharClass_set_Negate_mEB8659D83748A4DF28CDDFC3AC573A6504385E09 (void);
// 0x000002E5 System.Void System.Text.RegularExpressions.RegexCharClass::AddChar(System.Char)
extern void RegexCharClass_AddChar_m4C4BFD42572978A9F98ADE75BE3811593957A9E3 (void);
// 0x000002E6 System.Void System.Text.RegularExpressions.RegexCharClass::AddCharClass(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddCharClass_m0E5DD1105844AFB7CE45B5C801304B5C803FB5CA (void);
// 0x000002E7 System.Void System.Text.RegularExpressions.RegexCharClass::AddSet(System.String)
extern void RegexCharClass_AddSet_mFFDE070E770BE967173D630AD50010C3397F7B97 (void);
// 0x000002E8 System.Void System.Text.RegularExpressions.RegexCharClass::AddSubtraction(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddSubtraction_m17E538235B02A1435BD43D4FE4501DA67AA35145 (void);
// 0x000002E9 System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
extern void RegexCharClass_AddRange_mCFE9B670B3EBB13A5CDB694B1D1D6B1C0249D110 (void);
// 0x000002EA System.Void System.Text.RegularExpressions.RegexCharClass::AddCategoryFromName(System.String,System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddCategoryFromName_m9AD2D607E1E34A52CBC26FC38D468905C43A9202 (void);
// 0x000002EB System.Void System.Text.RegularExpressions.RegexCharClass::AddCategory(System.String)
extern void RegexCharClass_AddCategory_m6A4625370DA8927DF5342275CB1F6155FC2BA255 (void);
// 0x000002EC System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercase(System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercase_m01C1B11EB0B82E065276C7ECF60725886F59A07A (void);
// 0x000002ED System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercaseRange(System.Char,System.Char,System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercaseRange_mCDDE9661C9C300DFEB51A8FE36E2F790E3E75D75 (void);
// 0x000002EE System.Void System.Text.RegularExpressions.RegexCharClass::AddWord(System.Boolean,System.Boolean)
extern void RegexCharClass_AddWord_m1D2553B878162B32B0548536AE4C3EE673041CA0 (void);
// 0x000002EF System.Void System.Text.RegularExpressions.RegexCharClass::AddSpace(System.Boolean,System.Boolean)
extern void RegexCharClass_AddSpace_mC6557749D96EBD114BCB133D14887A29304196D8 (void);
// 0x000002F0 System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddDigit_mC4DE43D884E575729BB2E575DA5552989368F6B3 (void);
// 0x000002F1 System.Char System.Text.RegularExpressions.RegexCharClass::SingletonChar(System.String)
extern void RegexCharClass_SingletonChar_m01C15732FAD399460FF5BB449B8177A77CAB1DB9 (void);
// 0x000002F2 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsMergeable(System.String)
extern void RegexCharClass_IsMergeable_mB9A0CD8306728BAFA5460C7FD748A2A7AD4BA448 (void);
// 0x000002F3 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsEmpty(System.String)
extern void RegexCharClass_IsEmpty_mAD6C63FE25C4CF3E52A20185418925D12C4C07CF (void);
// 0x000002F4 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingleton(System.String)
extern void RegexCharClass_IsSingleton_m89D3E8460B0E7020DB0ABA607AC2F76FB9A34F1A (void);
// 0x000002F5 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingletonInverse(System.String)
extern void RegexCharClass_IsSingletonInverse_m3E75D541C85AD842B9EB80705D6869EDB3F6928D (void);
// 0x000002F6 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSubtraction(System.String)
extern void RegexCharClass_IsSubtraction_m3C9EF97AFE7E4BCC24A2DF10834BF62279D7EE26 (void);
// 0x000002F7 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsNegated(System.String)
extern void RegexCharClass_IsNegated_m9CEDECE7EDA98ACD502E75783CA631A719DBC675 (void);
// 0x000002F8 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsECMAWordChar(System.Char)
extern void RegexCharClass_IsECMAWordChar_m6E7FC296DB816D89E3D6CF8672DCE6DFC519D741 (void);
// 0x000002F9 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsWordChar(System.Char)
extern void RegexCharClass_IsWordChar_m2DF03D32DAB403138E397CB05F45D37BD50EB18C (void);
// 0x000002FA System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
extern void RegexCharClass_CharInClass_m194AAA57BBBD30E78E70255D6F53FAFDB785EC0E (void);
// 0x000002FB System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassRecursive(System.Char,System.String,System.Int32)
extern void RegexCharClass_CharInClassRecursive_m5560DBADE1463FDEC38643C72CDF2FD5B3F69A5F (void);
// 0x000002FC System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassInternal(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInClassInternal_m5D1634F64092E4BD9EB6427447F952983211A760 (void);
// 0x000002FD System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategory(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInCategory_mCDE20DF783F8D4E4403EC7F00F9C12E34D86C2DD (void);
// 0x000002FE System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategoryGroup(System.Char,System.Globalization.UnicodeCategory,System.String,System.Int32&)
extern void RegexCharClass_CharInCategoryGroup_m28E498004F5EA6445C83F1B8EB4A776C210D30C5 (void);
// 0x000002FF System.String System.Text.RegularExpressions.RegexCharClass::NegateCategory(System.String)
extern void RegexCharClass_NegateCategory_mF2E03FFFE79E427F39D9368013A334F5BD118E13 (void);
// 0x00000300 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::Parse(System.String)
extern void RegexCharClass_Parse_mBC3780FFF0DDFB62CA2085746618E6C256E8D86C (void);
// 0x00000301 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::ParseRecursive(System.String,System.Int32)
extern void RegexCharClass_ParseRecursive_mF7E7DD4EB594C9C30A60E72CD3CFD4EC1D822CF5 (void);
// 0x00000302 System.Int32 System.Text.RegularExpressions.RegexCharClass::RangeCount()
extern void RegexCharClass_RangeCount_mEACBB4BD08CE18A9C4F0C433A7D6C5726F563E2E (void);
// 0x00000303 System.String System.Text.RegularExpressions.RegexCharClass::ToStringClass()
extern void RegexCharClass_ToStringClass_m7A760D96732A03D46C4060064B3FC58349D2B4D5 (void);
// 0x00000304 System.Text.RegularExpressions.RegexCharClass/SingleRange System.Text.RegularExpressions.RegexCharClass::GetRangeAt(System.Int32)
extern void RegexCharClass_GetRangeAt_mE563FF8072DD9B4E1179F55416CCD7FC4EB2C4FC (void);
// 0x00000305 System.Void System.Text.RegularExpressions.RegexCharClass::Canonicalize()
extern void RegexCharClass_Canonicalize_m44EEFB16DB02E73C1E7280D15DAE98E50F4D6FA4 (void);
// 0x00000306 System.String System.Text.RegularExpressions.RegexCharClass::SetFromProperty(System.String,System.Boolean,System.String)
extern void RegexCharClass_SetFromProperty_mA33170AF599765B5FDE8611BED646A850FB2330E (void);
// 0x00000307 System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
extern void LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187 (void);
// 0x00000308 System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
extern void SingleRangeComparer_Compare_mF2CAD555BAC4D9CBF6A8F90D829CB528BD7BCCC9 (void);
// 0x00000309 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
extern void SingleRangeComparer__ctor_m9E44BF07F0F0C9E565E0BA050C1A26F496226BAD (void);
// 0x0000030A System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
extern void SingleRange__ctor_m4674722AFC97A111D2466AE2050C2E4E6E57303E (void);
// 0x0000030B System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Text.RegularExpressions.RegexPrefix,System.Int32,System.Boolean)
extern void RegexCode__ctor_mBCB059D3E98AEA211794E89DDF99193231F298CA (void);
// 0x0000030C System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
extern void RegexCode_OpcodeBacktracks_mDA23B91B55FE4991B168BF8E18F6DDDC7667B882 (void);
// 0x0000030D System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_FirstChars_mC60DC5CA9A078998CB55594436AB9CBFD86478FB (void);
// 0x0000030E System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Prefix_m50B30C508C6745832FD3A76B2169462455C1A28E (void);
// 0x0000030F System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Anchors_m562FA644F10503074714E0F58A2A00F9F727D75E (void);
// 0x00000310 System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
extern void RegexFCD_AnchorFromType_m4B458E2C589633A43F9324C14F9192EF68F80A14 (void);
// 0x00000311 System.Void System.Text.RegularExpressions.RegexFCD::.ctor()
extern void RegexFCD__ctor_mFC6A3309CAFA8C3C2B94094AD443738823388A3B (void);
// 0x00000312 System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
extern void RegexFCD_PushInt_m63817D3969DF7BD31B7C93D43EE45C4AF539868F (void);
// 0x00000313 System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
extern void RegexFCD_IntIsEmpty_mE825A8A0DF9D5BA6618357ABBA93421D4099AAEB (void);
// 0x00000314 System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
extern void RegexFCD_PopInt_m1E4B64F2F6DDBCB7495E673540CF25FDD4D01B7E (void);
// 0x00000315 System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
extern void RegexFCD_PushFC_mBE154E351E7C49FFFC26E603B4672136D91479C7 (void);
// 0x00000316 System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
extern void RegexFCD_FCIsEmpty_m57FDE5D4E352620B7773AD54B286531CA21FCDAD (void);
// 0x00000317 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
extern void RegexFCD_PopFC_m987A35E9ADF69335799EDEEB12C2CD3A3F40FB6E (void);
// 0x00000318 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
extern void RegexFCD_TopFC_m26ED21621830CF30FDA46AE8D7F3AC9F50DE416F (void);
// 0x00000319 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_RegexFCFromRegexTree_mA85E74765529D05113116C73EC397E832D81D0BC (void);
// 0x0000031A System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
extern void RegexFCD_SkipChild_m661F5D339305B97A37D855240A0B9AF500FE03F6 (void);
// 0x0000031B System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexFCD_CalculateFC_m2267FAA6BCA80275E21DC9A0BAF90BBC85204BD8 (void);
// 0x0000031C System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
extern void RegexFC__ctor_m354E8197215F3EE9097B69E783B744365A38EF20 (void);
// 0x0000031D System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern void RegexFC__ctor_m023D08ED0365AE9AAC539333B4390A8052C59229 (void);
// 0x0000031E System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
extern void RegexFC__ctor_mDCBBCCC1BB476741943D7F9AD88731B1DCA0C1B5 (void);
// 0x0000031F System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
extern void RegexFC_AddFC_m5B05CD1D7700817843366EC1DF728977EDD4D11E (void);
// 0x00000320 System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
extern void RegexFC_GetFirstChars_m7252E826F9A5BC1842A5A255BAC5A36EE8DADAF5 (void);
// 0x00000321 System.Boolean System.Text.RegularExpressions.RegexFC::IsCaseInsensitive()
extern void RegexFC_IsCaseInsensitive_mD87B0C49AAEBB61215F09A9C5ABF8CCB8B5AB64E (void);
// 0x00000322 System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
extern void RegexPrefix__ctor_m93489A4FF55425A15BF5390E77EE0B84F6F9364C (void);
// 0x00000323 System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
extern void RegexPrefix_get_Prefix_m7137EC6CA5B857F49946E2EAEA19784040D430CF (void);
// 0x00000324 System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
extern void RegexPrefix_get_CaseInsensitive_m76E04480FA9FFAE4C5031CA12F4AE9A2576212C0 (void);
// 0x00000325 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
extern void RegexPrefix_get_Empty_mAD10DECDBC7C51F9ACF5C02E3191874252DF9B8B (void);
// 0x00000326 System.Void System.Text.RegularExpressions.RegexPrefix::.cctor()
extern void RegexPrefix__cctor_mCDCE7EDB98AFB119EE0281D37F7BC019AD28773D (void);
// 0x00000327 System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32[],System.Int32,System.String)
extern void Group__ctor_mECF4574592517D363C35ADC07F9D6F7E7DE6B4F6 (void);
// 0x00000328 System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern void Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521 (void);
// 0x00000329 System.Void System.Text.RegularExpressions.Group::.cctor()
extern void Group__cctor_m213E26F039439904671CFD5DAF5D85B47D5CBE68 (void);
// 0x0000032A System.Void System.Text.RegularExpressions.Group::.ctor()
extern void Group__ctor_mDCB3D51B8A672B342F452177D42D6D3F2F9BA91A (void);
// 0x0000032B System.Void System.Text.RegularExpressions.RegexInterpreter::.ctor(System.Text.RegularExpressions.RegexCode,System.Globalization.CultureInfo)
extern void RegexInterpreter__ctor_m7B9BA594CF5F338B2E257EDADC2481826BF4C6BB (void);
// 0x0000032C System.Void System.Text.RegularExpressions.RegexInterpreter::InitTrackCount()
extern void RegexInterpreter_InitTrackCount_mD93771C3D75617898528698E29AD09B7EA5EE24B (void);
// 0x0000032D System.Void System.Text.RegularExpressions.RegexInterpreter::Advance()
extern void RegexInterpreter_Advance_mCD1A51680CD0318DDF6D104DE8C722FCCC468CCA (void);
// 0x0000032E System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
extern void RegexInterpreter_Advance_m779870D7E1FA3580492E2E8B75E2805613525AF7 (void);
// 0x0000032F System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
extern void RegexInterpreter_Goto_m438DE9CE790DF0757383C91126DEA68C6B0DADFE (void);
// 0x00000330 System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
extern void RegexInterpreter_Textto_m6CE60A7C8FA9F9CEECD26BD6025F055EB64887AA (void);
// 0x00000331 System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
extern void RegexInterpreter_Trackto_m0C7B05A7385BE3F9BB096FE28DC22942A9F96783 (void);
// 0x00000332 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
extern void RegexInterpreter_Textstart_mE71CFC006954F38B9EB6CD85BCC0867E63BF0894 (void);
// 0x00000333 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
extern void RegexInterpreter_Textpos_mC66F0DE729E76EDA0BEEA7B1ABEE369BA6C81D5B (void);
// 0x00000334 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
extern void RegexInterpreter_Trackpos_m472ADA4F5E1D07E71896E42714DFB723CB016842 (void);
// 0x00000335 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
extern void RegexInterpreter_TrackPush_m5A8B9F863211AAEC7E5FAD14ECDDAFDE3059210D (void);
// 0x00000336 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
extern void RegexInterpreter_TrackPush_mB2AF47E651D2A3853A719EFB908C30D27EC2FF5F (void);
// 0x00000337 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_m3EA36B28D636D1C617F85CEA57650344B562A38F (void);
// 0x00000338 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_mBCAADB1DF177D91DC9AA4518DCDB3AAF7D6C0E15 (void);
// 0x00000339 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
extern void RegexInterpreter_TrackPush2_m4EBCF8B183717311AEE3FAA6AD6FAF1F08B14F77 (void);
// 0x0000033A System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush2_mD591F73FDDF69084636E0834BCCD530B057898FF (void);
// 0x0000033B System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
extern void RegexInterpreter_Backtrack_m46612DE84F898D1656DE30F3BA86E93209E279E1 (void);
// 0x0000033C System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
extern void RegexInterpreter_SetOperator_m5B633C33EE4CD85364E7C60003ACE8EA93FDAC91 (void);
// 0x0000033D System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
extern void RegexInterpreter_TrackPop_m84B55BE8F346693942045E937174EC8C1AE91F08 (void);
// 0x0000033E System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
extern void RegexInterpreter_TrackPop_m73AB2E002DB92E231B62510861277320F76BEEED (void);
// 0x0000033F System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
extern void RegexInterpreter_TrackPeek_m4EF7918CC0F10FFF7E73C1C9D13E74D1D8D13318 (void);
// 0x00000340 System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
extern void RegexInterpreter_TrackPeek_mEECF3E94E7823A68474C691F695D71087729553C (void);
// 0x00000341 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
extern void RegexInterpreter_StackPush_mC28C3F8B3C811C4DCA6CD312F7F487206C871E55 (void);
// 0x00000342 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
extern void RegexInterpreter_StackPush_m911FF20379BF912884E7F98BB59CFB6C51AA1861 (void);
// 0x00000343 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
extern void RegexInterpreter_StackPop_mD057CA7B190ED8FBD33C6CE48E1F28E4B09FC4F2 (void);
// 0x00000344 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
extern void RegexInterpreter_StackPop_m90FC35FD76D9B63851ECFD641DAA08B1B58C7B91 (void);
// 0x00000345 System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
extern void RegexInterpreter_StackPeek_m08C28311048F6B075379EE46B924FC211BA48EC6 (void);
// 0x00000346 System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
extern void RegexInterpreter_StackPeek_m308DE22A8E1AF524319E7F1D5A94DBFEC37700ED (void);
// 0x00000347 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
extern void RegexInterpreter_Operator_m4DE2EAA1744D15294F2767D5217F753FE74FAC0B (void);
// 0x00000348 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
extern void RegexInterpreter_Operand_m1ACB9C398C9C7ADF8DA58824877B99F08F181526 (void);
// 0x00000349 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
extern void RegexInterpreter_Leftchars_m3A200CD41FFE8C89CCB85B3CC7A367E32C5988D1 (void);
// 0x0000034A System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
extern void RegexInterpreter_Rightchars_m3DB37A53D6C3DC3311C9EA020690CC0824959D30 (void);
// 0x0000034B System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
extern void RegexInterpreter_Bump_mC33CB8A0CC0DF1C69F11115BD225D2D8B63F8753 (void);
// 0x0000034C System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
extern void RegexInterpreter_Forwardchars_mE5E437E285604CDC60551C112F7B2CEF7297F4ED (void);
// 0x0000034D System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
extern void RegexInterpreter_Forwardcharnext_mD2C6694CC31BC75D3E20C511D1004D28AAE1390F (void);
// 0x0000034E System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
extern void RegexInterpreter_Stringmatch_m543BC6834400A925D2603AE6FBB47944694AFDF1 (void);
// 0x0000034F System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
extern void RegexInterpreter_Refmatch_m52369ADBF64E25A9EEEBE216939454EBB8D8E138 (void);
// 0x00000350 System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
extern void RegexInterpreter_Backwardnext_mD10CE2A9E229D0655EF01565DB39C902654D00CD (void);
// 0x00000351 System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
extern void RegexInterpreter_CharAt_mAE2AF6D293F53C2D8961C2D0C145BC3ADF6EC105 (void);
// 0x00000352 System.Boolean System.Text.RegularExpressions.RegexInterpreter::FindFirstChar()
extern void RegexInterpreter_FindFirstChar_m95CDB0ECB99F7850479D951A5F32BB6B19B91F44 (void);
// 0x00000353 System.Void System.Text.RegularExpressions.RegexInterpreter::Go()
extern void RegexInterpreter_Go_mBE9DEAECBD68F60DDFE2BB5A8C24CF92A1FB503A (void);
// 0x00000354 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern void Match_get_Empty_m5D3AE3D0580F06ED901EE69FCCED6AF44715528F (void);
// 0x00000355 System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Match__ctor_m08A8262ACD89C9E47AA7168D0F2CC6E3338855D7 (void);
// 0x00000356 System.Void System.Text.RegularExpressions.Match::Reset(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void Match_Reset_m9EDCC3689E8A5A57A644946AEC3E41C1901C7DAF (void);
// 0x00000357 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern void Match_NextMatch_mA9BB438B4D7DE12D45A73720C063CFFF15FE596D (void);
// 0x00000358 System.String System.Text.RegularExpressions.Match::GroupToStringImpl(System.Int32)
extern void Match_GroupToStringImpl_m933A6494C68E43C8CE37F64FA298ECBCF6F3C4AE (void);
// 0x00000359 System.String System.Text.RegularExpressions.Match::LastGroupToStringImpl()
extern void Match_LastGroupToStringImpl_m92EDBD078D266F78252C71C35E1693105CDA3825 (void);
// 0x0000035A System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32)
extern void Match_AddMatch_m3C9178A7D6F8175A7628E4BE579FD209B7C7650A (void);
// 0x0000035B System.Void System.Text.RegularExpressions.Match::BalanceMatch(System.Int32)
extern void Match_BalanceMatch_mCC0EC358E4C33191B896226512FE8F086EFEA4CF (void);
// 0x0000035C System.Void System.Text.RegularExpressions.Match::RemoveMatch(System.Int32)
extern void Match_RemoveMatch_m6268C01D537F0BACB7DD707E11FA873C3E1918C7 (void);
// 0x0000035D System.Boolean System.Text.RegularExpressions.Match::IsMatched(System.Int32)
extern void Match_IsMatched_m7686CA418F588EC198A82DE287326C46F4CBDD5F (void);
// 0x0000035E System.Int32 System.Text.RegularExpressions.Match::MatchIndex(System.Int32)
extern void Match_MatchIndex_mA39CA9F84C3872675CB9C76EC342EFB30A2B5DA0 (void);
// 0x0000035F System.Int32 System.Text.RegularExpressions.Match::MatchLength(System.Int32)
extern void Match_MatchLength_m25492EACF56E8211FEEC4856F93D7A19D30A984F (void);
// 0x00000360 System.Void System.Text.RegularExpressions.Match::Tidy(System.Int32)
extern void Match_Tidy_m88B2494631267F8CF7E90F3305F713550ED39CE8 (void);
// 0x00000361 System.Void System.Text.RegularExpressions.Match::.cctor()
extern void Match__cctor_m9158A9D469720E89CD9004B65F55EEEF5E330C0E (void);
// 0x00000362 System.Void System.Text.RegularExpressions.Match::.ctor()
extern void Match__ctor_m38BC8AD7EEFA99C6FC25587D6FE56450FA849E0C (void);
// 0x00000363 System.Void System.Text.RegularExpressions.MatchSparse::.ctor(System.Text.RegularExpressions.Regex,System.Collections.Hashtable,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchSparse__ctor_mEA523FCAF96D8A81401D3ED010CACE4463CCE811 (void);
// 0x00000364 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException__ctor_mCCDB413A8F68D924B276B8FED2744E81BE4C89AF (void);
// 0x00000365 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor()
extern void RegexMatchTimeoutException__ctor_m4EFD030442FEEC81E59AB8CDF35D603A5D551058 (void);
// 0x00000366 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException__ctor_m554FE8CFA7F42483517F11948A61E4D3C9F44D07 (void);
// 0x00000367 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m78FACBA38C002E195A507A32CDAB768D8DBC93E7 (void);
// 0x00000368 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init()
extern void RegexMatchTimeoutException_Init_m09AF601CC7369F2D7E1300B166517FE7D20EB6F1 (void);
// 0x00000369 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException_Init_m0F165C7170A46724458C06DA5EC05536D8CB95B7 (void);
// 0x0000036A System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
extern void RegexNode__ctor_m29676E9646F598C827F25E906EEB6EA14A6FD5DB (void);
// 0x0000036B System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
extern void RegexNode__ctor_m92FB70D6C28D7E021A2A1ACBAD583461AB014F11 (void);
// 0x0000036C System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
extern void RegexNode__ctor_m89ACB97FB7FE8B38C0D69F0F2445A7916BC67D85 (void);
// 0x0000036D System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
extern void RegexNode__ctor_mAE76BA90AA85F205CB0CC6799F06D1AD85A49F64 (void);
// 0x0000036E System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
extern void RegexNode__ctor_m0EFEB707603B3C667626117E09A7EED58BBEC6D4 (void);
// 0x0000036F System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
extern void RegexNode_UseOptionR_mB931929BBD1D89F8B263AA846C1665775096713E (void);
// 0x00000370 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
extern void RegexNode_ReverseLeft_m994638E4886D007B9B29BC23EA3C8D76A92099FD (void);
// 0x00000371 System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
extern void RegexNode_MakeRep_mC310B028FBE3BD5EB80F83E4E05B891ADEE45C22 (void);
// 0x00000372 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
extern void RegexNode_Reduce_mE9E22C30C296E328ABC7EDC9C52F18059FAE27C1 (void);
// 0x00000373 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
extern void RegexNode_StripEnation_mE19E0A57BCE0D0BF47F51A5103C08FCC7BB9E24F (void);
// 0x00000374 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
extern void RegexNode_ReduceGroup_m069FA93D4F88006F18473E647069B349683B9204 (void);
// 0x00000375 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
extern void RegexNode_ReduceRep_m726F03D9E2420F276A37777942B66D15CA73F77E (void);
// 0x00000376 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
extern void RegexNode_ReduceSet_m912F4A0DFF694EB14DE520599369A811C2E9D10D (void);
// 0x00000377 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
extern void RegexNode_ReduceAlternation_m60EECC172A975620A5118D14D6ECF8B846ECED9F (void);
// 0x00000378 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
extern void RegexNode_ReduceConcatenation_m4BE1B6DBBC0F4BAB9A3873414B5EE77D825AD53B (void);
// 0x00000379 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
extern void RegexNode_MakeQuantifier_m1332537AA6BCCCD68A3E59EA7994CCFE69A19444 (void);
// 0x0000037A System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
extern void RegexNode_AddChild_m734A86A25E6074316FAC566F7D127253F7B71703 (void);
// 0x0000037B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
extern void RegexNode_Child_m5AA4FFDDCCFA22FE70BA0F236F19A963AEF72079 (void);
// 0x0000037C System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
extern void RegexNode_ChildCount_m23B6965575DB0DBC1D90212820DEA144FCB06996 (void);
// 0x0000037D System.Int32 System.Text.RegularExpressions.RegexNode::Type()
extern void RegexNode_Type_mFA1C2F11F3487BB1BCBA7F58FFB7975EC18E9CD4 (void);
// 0x0000037E System.Text.RegularExpressions.RegexTree System.Text.RegularExpressions.RegexParser::Parse(System.String,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Parse_mD206BB554B6087ED35C5F744D72A93A07721D789 (void);
// 0x0000037F System.Text.RegularExpressions.RegexReplacement System.Text.RegularExpressions.RegexParser::ParseReplacement(System.String,System.Collections.Hashtable,System.Int32,System.Collections.Hashtable,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_ParseReplacement_m13F769D7F27406A5E080C5E69F273758CBF37948 (void);
// 0x00000380 System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
extern void RegexParser__ctor_mC69D13B4FC323EE77392251139C5F2C456171310 (void);
// 0x00000381 System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
extern void RegexParser_SetPattern_m4B385D83A9680A1B2707EBCA8659B6E12EDD5E46 (void);
// 0x00000382 System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Reset_mEC49D1DCEBC555768D2FB90DA42374F1C547E328 (void);
// 0x00000383 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
extern void RegexParser_ScanRegex_m62049A6C66D6D8CDD795B9C740283D1EC85126DB (void);
// 0x00000384 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanReplacement()
extern void RegexParser_ScanReplacement_m25F626A8546B29D06850DE337D58892567E11033 (void);
// 0x00000385 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean)
extern void RegexParser_ScanCharClass_mF775DA8BFD214C64BC3D91E07436543717976DC4 (void);
// 0x00000386 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
extern void RegexParser_ScanCharClass_mFE669B1C9CB6652157D9E8DAEE5B924C581AE81F (void);
// 0x00000387 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
extern void RegexParser_ScanGroupOpen_mA4918ACA08C7E4C945197BBE4EF734AF5B35096C (void);
// 0x00000388 System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
extern void RegexParser_ScanBlank_m99BA3097E182DE425BE0137BAFDD0218F0DF360D (void);
// 0x00000389 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash()
extern void RegexParser_ScanBackslash_m45E9E0ABDB7DF70F58850B48905DE9DE026EA64C (void);
// 0x0000038A System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash()
extern void RegexParser_ScanBasicBackslash_m5F438E56ACBE272622D39D4208B2D5ED536DD7B8 (void);
// 0x0000038B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanDollar()
extern void RegexParser_ScanDollar_m55F746009E6BFDA1A1A9A7CCA941EA247D984ED7 (void);
// 0x0000038C System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
extern void RegexParser_ScanCapname_m1D4DB4E5DA312CBCA841391F729CC626DC657D85 (void);
// 0x0000038D System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
extern void RegexParser_ScanOctal_mCF3925D06CBBA1DD0CB60199F59991D099430C3A (void);
// 0x0000038E System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
extern void RegexParser_ScanDecimal_mE966D2C7F357215A52F88120F40A37707C1AB33A (void);
// 0x0000038F System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
extern void RegexParser_ScanHex_m296FC19218F8186D2C1B630DF9F138CFB195625E (void);
// 0x00000390 System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
extern void RegexParser_HexDigit_m4BAEE94B2077B96A4B1D56C459EFB2B1938E1174 (void);
// 0x00000391 System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
extern void RegexParser_ScanControl_m244F59DA2B0711D154B7D68CCB5765390C65B5B8 (void);
// 0x00000392 System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_IsOnlyTopOption_m66FE256A81BBD173C96B90EE9EBE9721F9ED16A1 (void);
// 0x00000393 System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
extern void RegexParser_ScanOptions_m5CD283C15179190846762B90F78F0A87E7495537 (void);
// 0x00000394 System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
extern void RegexParser_ScanCharEscape_mF8821EE73F3F8A5D4267642F6E4F0A666FA5E7A6 (void);
// 0x00000395 System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
extern void RegexParser_ParseProperty_m69C638E755F0A5C1A2BC8E08827E6124889C2CEF (void);
// 0x00000396 System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
extern void RegexParser_TypeFromCode_m0969E0D233AC767039B0A333901F47A22BABE0E8 (void);
// 0x00000397 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
extern void RegexParser_OptionFromCode_m6BCD10574DF5E08599B5F7FC8E947E3DC69EE151 (void);
// 0x00000398 System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
extern void RegexParser_CountCaptures_m5255DE4B24B8D9BA7B2A2A7A1FD79A67B36F4634 (void);
// 0x00000399 System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
extern void RegexParser_NoteCaptureSlot_m8B2D20B819C86E427837C879CCA72B9BCD1C4AA8 (void);
// 0x0000039A System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
extern void RegexParser_NoteCaptureName_m96A5301077C4C6554E993A2266EA40B690F455C4 (void);
// 0x0000039B System.Void System.Text.RegularExpressions.RegexParser::NoteCaptures(System.Collections.Hashtable,System.Int32,System.Collections.Hashtable)
extern void RegexParser_NoteCaptures_m984EFFB499AA60257CB3BE40718EB78DFA7D30FD (void);
// 0x0000039C System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
extern void RegexParser_AssignNameSlots_m168605CD3A6D6AAA52AFFDB13BE3D5DFAC3FE94B (void);
// 0x0000039D System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
extern void RegexParser_CaptureSlotFromName_mE3FD1D57EB29D4C7A0E4029E4D4785297798EE43 (void);
// 0x0000039E System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
extern void RegexParser_IsCaptureSlot_m80540BE449D9B98B2B159CD5169F7AA6DB63CB80 (void);
// 0x0000039F System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
extern void RegexParser_IsCaptureName_mBFB85B16ED80CA59452491B4C3278C77ADCA1FDF (void);
// 0x000003A0 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
extern void RegexParser_UseOptionN_mE9C62585222B2D99D295708E4486C952973F35D5 (void);
// 0x000003A1 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
extern void RegexParser_UseOptionI_mFA3B59BD8A6F61626E20F8FE909A23289E694263 (void);
// 0x000003A2 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
extern void RegexParser_UseOptionM_mDE945B2DE782D12A5013D408F4FFBCABEC48C63D (void);
// 0x000003A3 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
extern void RegexParser_UseOptionS_mE96EEA754E1EEEF658AAF73885D048342D1D200E (void);
// 0x000003A4 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
extern void RegexParser_UseOptionX_mD63DEED6741AEA0B3F6CC4239712A4B2EF690810 (void);
// 0x000003A5 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
extern void RegexParser_UseOptionE_mC171EEF863E091591BAD771F16B72D742F044096 (void);
// 0x000003A6 System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
extern void RegexParser_IsSpecial_mFF68456E944ACAF048B4F96F5758FFDD1D5E7DCD (void);
// 0x000003A7 System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
extern void RegexParser_IsStopperX_m0BCF2DB4B0E1324C9109C8BFD486FC5DBA8DC646 (void);
// 0x000003A8 System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
extern void RegexParser_IsQuantifier_mE0620E30A63AD0C0DB9550A52A4A7D0BB4BC3A31 (void);
// 0x000003A9 System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
extern void RegexParser_IsTrueQuantifier_m4AA95A9CE7CD78600E8D525ECA5A095984FBC63F (void);
// 0x000003AA System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
extern void RegexParser_IsSpace_m1E41FA7DD1FB93BF9220530CA91B35EF08879F30 (void);
// 0x000003AB System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
extern void RegexParser_AddConcatenate_m3743C87DFCD1784A949BFDCE9443845CCD630A5D (void);
// 0x000003AC System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
extern void RegexParser_PushGroup_m6F4246ECA3A6F29DA096C3B41D97652427E3175E (void);
// 0x000003AD System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
extern void RegexParser_PopGroup_m43AB1FB84E11D8DFF6C5D38B9CAD324E5425DD74 (void);
// 0x000003AE System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
extern void RegexParser_EmptyStack_mB65B33DCF98A5967407B7C6A07F8799681202BE5 (void);
// 0x000003AF System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_StartGroup_m36A6C0ED245D844CD2E630160994C3F2D7CCA994 (void);
// 0x000003B0 System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
extern void RegexParser_AddAlternate_mDBDEEF8180738DE0D31CC05B0E223EFF0D66939B (void);
// 0x000003B1 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
extern void RegexParser_AddConcatenate_mF80F14978ED6626A8F8E5F37AEB3B946A01192C1 (void);
// 0x000003B2 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
extern void RegexParser_AddConcatenate_m81CC39ED404E571347F0E97650F3BEB14639B1B0 (void);
// 0x000003B3 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
extern void RegexParser_Unit_mEAEEAC39DBE372DC762644F49E6E163CA37EA34E (void);
// 0x000003B4 System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
extern void RegexParser_AddUnitOne_m72DFA82092408E9C63544126093D98390E0C2145 (void);
// 0x000003B5 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
extern void RegexParser_AddUnitNotone_mAA142A94BB7B6A358BA36A3920DB139382889749 (void);
// 0x000003B6 System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
extern void RegexParser_AddUnitSet_m024168548909EA2DF649E6194D60135312ADF5B3 (void);
// 0x000003B7 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_AddUnitNode_m6EE11A898128A169E41A5C7B38B1F3DD314FB304 (void);
// 0x000003B8 System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
extern void RegexParser_AddUnitType_m1ECB4025CA3B580F051CF6891D9C96922CA2FA7A (void);
// 0x000003B9 System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
extern void RegexParser_AddGroup_m54BBB919E4D4AD05EFECBC3ECBE46FC4A90569EA (void);
// 0x000003BA System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
extern void RegexParser_PushOptions_m2034533961B704CBFA0F97BD4A54CB7269F0D88A (void);
// 0x000003BB System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
extern void RegexParser_PopOptions_mA18691037302741375A44BD8BDC9387DFB07B676 (void);
// 0x000003BC System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
extern void RegexParser_EmptyOptionsStack_m5FCB7AF81ACB5C91A73231C9F0AA0DFB32067A45 (void);
// 0x000003BD System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
extern void RegexParser_PopKeepOptions_m8ACBCD324BAF7269F90AEB3CF901B666524658FA (void);
// 0x000003BE System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
extern void RegexParser_MakeException_m6D521D75808E2CD4255A68DC3456EAF2A88F2874 (void);
// 0x000003BF System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
extern void RegexParser_Textpos_m36658DED82367E05DF4333E68A666FEEBC3DAC07 (void);
// 0x000003C0 System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
extern void RegexParser_Textto_m5C8BAB13E35429238EA9A5F13D5A5A580D0DD3AC (void);
// 0x000003C1 System.Char System.Text.RegularExpressions.RegexParser::MoveRightGetChar()
extern void RegexParser_MoveRightGetChar_m3CF088DE129BADB346CCEEF1D547E2D260BC894A (void);
// 0x000003C2 System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
extern void RegexParser_MoveRight_m6F0A1C10AE9EA183F04A9E06B62B2B53648688AC (void);
// 0x000003C3 System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
extern void RegexParser_MoveRight_m7D1D27C901CAB81BCF60803E22FBDF2DEEC6CC51 (void);
// 0x000003C4 System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
extern void RegexParser_MoveLeft_m1BC035A4EA49F4168093B2AB0EEAB2653CB04033 (void);
// 0x000003C5 System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
extern void RegexParser_CharAt_m08DBAE0DFD788548F74E061031B7221154F96A77 (void);
// 0x000003C6 System.Char System.Text.RegularExpressions.RegexParser::RightChar()
extern void RegexParser_RightChar_m9E231199A8E5EA994AA1746FC5E977AF3823FDEB (void);
// 0x000003C7 System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
extern void RegexParser_RightChar_m246E9E1F8D0A4A8E485C23E233CD3915C23739D8 (void);
// 0x000003C8 System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
extern void RegexParser_CharsRight_m318662CFE3223C3FA5E921D376409B4E1B28F9B4 (void);
// 0x000003C9 System.Void System.Text.RegularExpressions.RegexParser::.cctor()
extern void RegexParser__cctor_mF468AF3C5916BA72C579CBD41A73D2DAD004F0EE (void);
// 0x000003CA System.Void System.Text.RegularExpressions.RegexReplacement::.ctor(System.String,System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable)
extern void RegexReplacement__ctor_m380FB887FB6FC62BB1DF59D01A859EB813FD670A (void);
// 0x000003CB System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImpl(System.Text.StringBuilder,System.Text.RegularExpressions.Match)
extern void RegexReplacement_ReplacementImpl_mA3F4702CCE8307AB25F3565FE9A3F6B6643591CE (void);
// 0x000003CC System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImplRTL(System.Collections.Generic.List`1<System.String>,System.Text.RegularExpressions.Match)
extern void RegexReplacement_ReplacementImplRTL_m16AF2466D4C7112191A74EB9CD21C9B7A0405913 (void);
// 0x000003CD System.String System.Text.RegularExpressions.RegexReplacement::get_Pattern()
extern void RegexReplacement_get_Pattern_m1F4A81BA1F012141DF3B358167025DE0072E1A72 (void);
// 0x000003CE System.String System.Text.RegularExpressions.RegexReplacement::Replace(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern void RegexReplacement_Replace_m470485F90D044CA2879155BA72E5283C928E4343 (void);
// 0x000003CF System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
extern void RegexRunner__ctor_mC04D94995556E71E813F8420C8A4EC0B66404550 (void);
// 0x000003D0 System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
extern void RegexRunner_Scan_m1C3B1B034601773D510A4D2DEC337635A540BE31 (void);
// 0x000003D1 System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
extern void RegexRunner_StartTimeoutWatch_m257FBE0C72761082A11D275954C6A1343EB13301 (void);
// 0x000003D2 System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
extern void RegexRunner_CheckTimeout_m52486A9CE7B6EA4C83BB60FB200196AF0EE5687B (void);
// 0x000003D3 System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
extern void RegexRunner_DoCheckTimeout_mCDAA40848A2F8AAD70928FFD8A6C08FF2D9E72A3 (void);
// 0x000003D4 System.Void System.Text.RegularExpressions.RegexRunner::Go()
// 0x000003D5 System.Boolean System.Text.RegularExpressions.RegexRunner::FindFirstChar()
// 0x000003D6 System.Void System.Text.RegularExpressions.RegexRunner::InitTrackCount()
// 0x000003D7 System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
extern void RegexRunner_InitMatch_mF9CD772D4A8E12F89B4785324CD6939ABAE89AD4 (void);
// 0x000003D8 System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
extern void RegexRunner_TidyMatch_m61A8AE20E505F2055B276EB020EB0B804ED2D924 (void);
// 0x000003D9 System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
extern void RegexRunner_EnsureStorage_m6BC13F773B014E2875CCD9A83E4093A77AA1053C (void);
// 0x000003DA System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsBoundary_m6C846E11790EC61A9E75A24230E1477913DB3441 (void);
// 0x000003DB System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsECMABoundary_m35C5F5DDC7C2F0E57EBA2E9D9892A88EDAEE4B97 (void);
// 0x000003DC System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
extern void RegexRunner_DoubleTrack_m057C14C51F137222469C6526406B0E1069747618 (void);
// 0x000003DD System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
extern void RegexRunner_DoubleStack_m8969F05F9E086EAA194DCBD2F137778239918925 (void);
// 0x000003DE System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
extern void RegexRunner_DoubleCrawl_mF0425849E5E3C2BA5E9009CED7DE245C8CA0F7CC (void);
// 0x000003DF System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
extern void RegexRunner_Crawl_m655A5D262056F7E13F0645CE5611AE65E83D97DB (void);
// 0x000003E0 System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
extern void RegexRunner_Popcrawl_mD8C76E2C584E6908F4BB11E055B97581F0CF7268 (void);
// 0x000003E1 System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
extern void RegexRunner_Crawlpos_m26A92CA69EF0C65BC7389834A12AD331538D064D (void);
// 0x000003E2 System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_Capture_mE34CB0D3351BCC69F6FDE6CDEA763B93C5E92642 (void);
// 0x000003E3 System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
extern void RegexRunner_TransferCapture_m4F01B5A96647BC3FD338ACF6D509741D80FEC837 (void);
// 0x000003E4 System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
extern void RegexRunner_Uncapture_mA7163C77BE1683E508821AB251F33FB7520CE3F8 (void);
// 0x000003E5 System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
extern void RegexRunner_IsMatched_mD7F580AA0533D5C4BC41D18824FA74BE16EAE7A3 (void);
// 0x000003E6 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
extern void RegexRunner_MatchIndex_mA8EEC418C65572A82720F5D16BAC99224CF0251A (void);
// 0x000003E7 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
extern void RegexRunner_MatchLength_m06FA694D5EFE42F89C25C8599BBE86C7726DB2C6 (void);
// 0x000003E8 System.Text.RegularExpressions.RegexRunner System.Text.RegularExpressions.RegexRunnerFactory::CreateInstance()
// 0x000003E9 System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
extern void RegexTree__ctor_m5B10D5149928B35CE397472028EE327669C211DA (void);
// 0x000003EA System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::Write(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_Write_m57CF8209EF566CD40F9146C74DF889C8AA06E061 (void);
// 0x000003EB System.Void System.Text.RegularExpressions.RegexWriter::.ctor()
extern void RegexWriter__ctor_m63A858FAE36A8640812DFF917751C1E215A2AE82 (void);
// 0x000003EC System.Void System.Text.RegularExpressions.RegexWriter::PushInt(System.Int32)
extern void RegexWriter_PushInt_mFBC85956A26FEBC66244C8DFC881106D85DD2C1D (void);
// 0x000003ED System.Boolean System.Text.RegularExpressions.RegexWriter::EmptyStack()
extern void RegexWriter_EmptyStack_mB0C109FA21F5CFD16A34438BA1CC1CE8BED91E7C (void);
// 0x000003EE System.Int32 System.Text.RegularExpressions.RegexWriter::PopInt()
extern void RegexWriter_PopInt_m8885F9428571674EC224D6BBC93570B1B4671713 (void);
// 0x000003EF System.Int32 System.Text.RegularExpressions.RegexWriter::CurPos()
extern void RegexWriter_CurPos_mEA105879492A4B415FA8AC25B29AA49153F83C18 (void);
// 0x000003F0 System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
extern void RegexWriter_PatchJump_m6C0A440142E7AC772AD4AF7DF5D8291B6CA6D7D2 (void);
// 0x000003F1 System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
extern void RegexWriter_Emit_mDC0B76CE49A6DE83DD2D169236BCD516AE9263EF (void);
// 0x000003F2 System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
extern void RegexWriter_Emit_m6B0ACB44155A07161060838F483D555E7EF6ACED (void);
// 0x000003F3 System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
extern void RegexWriter_Emit_m7C1D08F071C805F13DBF7684AEC3F2F7E748C497 (void);
// 0x000003F4 System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
extern void RegexWriter_StringCode_m6AA17FFEBDD5E155004F05A78CF13B0D8E901158 (void);
// 0x000003F5 System.ArgumentException System.Text.RegularExpressions.RegexWriter::MakeException(System.String)
extern void RegexWriter_MakeException_m443C4CFA99AE06710D1E1BFA3D6EB9737AE70F17 (void);
// 0x000003F6 System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
extern void RegexWriter_MapCapnum_m6AFE8BED80960BAA522EAA873D535C9D5AD4B811 (void);
// 0x000003F7 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_RegexCodeFromRegexTree_mAC489A29C00688CA929661BC394F1C4CF997CFC5 (void);
// 0x000003F8 System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexWriter_EmitFragment_mEFDD8EA3A65320222CF4EA8A52B33C687EE0C5AC (void);
// 0x000003F9 System.Void System.Diagnostics.BooleanSwitch::.ctor(System.String,System.String)
extern void BooleanSwitch__ctor_m6F066AB4D9A1AF132569B625CB857AE671F94C0B (void);
// 0x000003FA System.Void System.Diagnostics.Switch::.ctor(System.String,System.String)
extern void Switch__ctor_mCEC1A7A86582AA8639404DCF7607B160A8B53A42 (void);
// 0x000003FB System.Void System.Diagnostics.Switch::.ctor(System.String,System.String,System.String)
extern void Switch__ctor_mA94CBF64FF82CBF4819158911159130231ADE484 (void);
// 0x000003FC System.Void System.Diagnostics.Switch::_pruneCachedSwitches()
extern void Switch__pruneCachedSwitches_m7500DBE46E6A2B4AA6BBE2978C90166B6EA35790 (void);
// 0x000003FD System.Void System.Diagnostics.Switch::.cctor()
extern void Switch__cctor_mC01362AF23DB366F6103AC3762E913F3149B923C (void);
// 0x000003FE System.Void System.Diagnostics.SwitchLevelAttribute::.ctor(System.Type)
extern void SwitchLevelAttribute__ctor_mD0C828AD634514271EDA0B06938D962B17EAFD52 (void);
// 0x000003FF System.Void System.Diagnostics.SwitchLevelAttribute::set_SwitchLevelType(System.Type)
extern void SwitchLevelAttribute_set_SwitchLevelType_m88B4C116AB67D726698620238DFF195913299929 (void);
// 0x00000400 System.Void System.Diagnostics.AsyncStreamReader::Close()
extern void AsyncStreamReader_Close_m486C71B80DC335E0658DEB3C10B3CDE971EFD671 (void);
// 0x00000401 System.Void System.Diagnostics.AsyncStreamReader::Dispose(System.Boolean)
extern void AsyncStreamReader_Dispose_m2F8D092B7BB3B1AEBBD16DCD45DF538ED3725931 (void);
// 0x00000402 System.Void System.Diagnostics.AsyncStreamReader::CancelOperation()
extern void AsyncStreamReader_CancelOperation_m9C32CDEDAE7E7EDA3FE144C3BCDB1EF64FE8EF7C (void);
// 0x00000403 System.Void System.Diagnostics.Process::.ctor(System.String,System.Boolean,System.Int32,System.Diagnostics.ProcessInfo)
extern void Process__ctor_m97C82BFAEADF09C4C0C998412A309045D964FA06 (void);
// 0x00000404 System.Boolean System.Diagnostics.Process::get_Associated()
extern void Process_get_Associated_m111D9050797E247609760FE092C27F3E53B133B7 (void);
// 0x00000405 System.Boolean System.Diagnostics.Process::get_HasExited()
extern void Process_get_HasExited_m1C844339E476935B0CAEF283E73A4053B1B68EB3 (void);
// 0x00000406 System.Int32 System.Diagnostics.Process::get_Id()
extern void Process_get_Id_m3130DCBA499817972DE9AE67C048F203BC795F0D (void);
// 0x00000407 System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::get_SynchronizingObject()
extern void Process_get_SynchronizingObject_m9CEF0159B0BFB98564FA44848595E74AFAD1A900 (void);
// 0x00000408 System.Void System.Diagnostics.Process::ReleaseProcessHandle(Microsoft.Win32.SafeHandles.SafeProcessHandle)
extern void Process_ReleaseProcessHandle_mC9A835417E9F209548D7A6B89A998A03FD4557D8 (void);
// 0x00000409 System.Void System.Diagnostics.Process::Dispose(System.Boolean)
extern void Process_Dispose_m0DD8E1484B1DBD2D770CD8B5653084FBC727B869 (void);
// 0x0000040A System.Void System.Diagnostics.Process::Close()
extern void Process_Close_mB900793DBFD83308567EA034A4B853269EA115B7 (void);
// 0x0000040B System.Void System.Diagnostics.Process::EnsureState(System.Diagnostics.Process/State)
extern void Process_EnsureState_m1C2BC10044D363B89A8A1769DC37872C461E7305 (void);
// 0x0000040C System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
extern void Process_GetCurrentProcess_mF8C1CE43DB601735EFB3FB0E0F16D76B01EC897A (void);
// 0x0000040D System.Void System.Diagnostics.Process::OnExited()
extern void Process_OnExited_m1C4ECCFCAABF53AA49B24C9A40E228920D4E7F89 (void);
// 0x0000040E Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::GetProcessHandle(System.Int32,System.Boolean)
extern void Process_GetProcessHandle_m36E359EFCA909FB72EEC18BF5CD04355FA73903E (void);
// 0x0000040F Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::GetProcessHandle(System.Int32)
extern void Process_GetProcessHandle_m04F3F996FEF759943C0882D138B3503D507EBBBD (void);
// 0x00000410 System.Void System.Diagnostics.Process::Refresh()
extern void Process_Refresh_m53E3CDFBB87818DC2C2464DF11864D739D5EAD76 (void);
// 0x00000411 System.Void System.Diagnostics.Process::Kill()
extern void Process_Kill_m1C563A96671F43F5C0D207CB568F7662CB2D303A (void);
// 0x00000412 System.Void System.Diagnostics.Process::StopWatchingForExit()
extern void Process_StopWatchingForExit_m54F80F17A31FB89FCD0755DB55D0EF592CF6DB11 (void);
// 0x00000413 System.String System.Diagnostics.Process::ToString()
extern void Process_ToString_m384B1AB716489860A603CA01DBC2E7AF1CBF4B75 (void);
// 0x00000414 System.String System.Diagnostics.Process::ProcessName_internal(System.IntPtr)
extern void Process_ProcessName_internal_mAB82C0DBF61925D43E633BA72D00236EEF91F0FB (void);
// 0x00000415 System.String System.Diagnostics.Process::ProcessName_internal(Microsoft.Win32.SafeHandles.SafeProcessHandle)
extern void Process_ProcessName_internal_m8B7A18CE1C7E9BD278BDFDB91E8F0FFA1E5E03FB (void);
// 0x00000416 System.String System.Diagnostics.Process::get_ProcessName()
extern void Process_get_ProcessName_m4722F047841ABB0DE2BFBF213433DA966C0482B2 (void);
// 0x00000417 System.Void System.Diagnostics.Process::RaiseOnExited()
extern void Process_RaiseOnExited_mDE9BFF6338F716042F99BBB7734A03B20F15A555 (void);
// 0x00000418 System.Void System.Diagnostics.ProcessWaitHandle::.ctor(Microsoft.Win32.SafeHandles.SafeProcessHandle)
extern void ProcessWaitHandle__ctor_mD7749337B2636BF285A2D877FB9C2C16B0677E5B (void);
// 0x00000419 System.Void System.Diagnostics.MonitoringDescriptionAttribute::.ctor(System.String)
extern void MonitoringDescriptionAttribute__ctor_m15423075A71190AA107449BCAD7EA5F4498D55C4 (void);
// 0x0000041A System.String System.Diagnostics.MonitoringDescriptionAttribute::get_Description()
extern void MonitoringDescriptionAttribute_get_Description_m562AE0405A7118076A2526D510B6655601CEF6F3 (void);
// 0x0000041B System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern void Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA (void);
// 0x0000041C System.Void System.Diagnostics.Stopwatch::.ctor()
extern void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (void);
// 0x0000041D System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern void Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (void);
// 0x0000041E System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern void Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (void);
// 0x0000041F System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern void Stopwatch_get_ElapsedTicks_mABB4710231090C75F057E90A29C71C553077A901 (void);
// 0x00000420 System.Void System.Diagnostics.Stopwatch::Start()
extern void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (void);
// 0x00000421 System.Void System.Diagnostics.Stopwatch::Stop()
extern void Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3 (void);
// 0x00000422 System.Void System.Diagnostics.Stopwatch::Restart()
extern void Stopwatch_Restart_m11E77A8E4EE81D072F6AE91972E1EE005149E141 (void);
// 0x00000423 System.Void System.Diagnostics.Stopwatch::.cctor()
extern void Stopwatch__cctor_m137C0B2E7182FAEA6E030CD1EDC909E5A3F7A064 (void);
// 0x00000424 System.Void System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute::.ctor()
extern void ExcludeFromCodeCoverageAttribute__ctor_m6A88F20304C2FA71955F81BA5B06887F7C495ECA (void);
// 0x00000425 System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void ArrayConverter_ConvertTo_mAEA49FE8501D2CA2989D859B2721CECCD5D0291B (void);
// 0x00000426 System.Void System.ComponentModel.ArrayConverter::.ctor()
extern void ArrayConverter__ctor_m831D145364A55A155BC896935367961A476D53B7 (void);
// 0x00000427 System.Void System.ComponentModel.ArraySubsetEnumerator::.ctor(System.Array,System.Int32)
extern void ArraySubsetEnumerator__ctor_m39C3859EB2625F6E584E35FDB1950B5E8407761C (void);
// 0x00000428 System.Boolean System.ComponentModel.ArraySubsetEnumerator::MoveNext()
extern void ArraySubsetEnumerator_MoveNext_mDA14E48B8A7B78616EEF81E31CE8E9A258C1A905 (void);
// 0x00000429 System.Void System.ComponentModel.ArraySubsetEnumerator::Reset()
extern void ArraySubsetEnumerator_Reset_mC82A8E1D642B024903CA780F6034797EB423BEB4 (void);
// 0x0000042A System.Object System.ComponentModel.ArraySubsetEnumerator::get_Current()
extern void ArraySubsetEnumerator_get_Current_m09128B3111243A65657005FFCBB036CD3EF1C0FC (void);
// 0x0000042B System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern void AttributeCollection__ctor_m1EBB330147608510FB1B60549BA95812EA2A1190 (void);
// 0x0000042C System.Attribute[] System.ComponentModel.AttributeCollection::get_Attributes()
extern void AttributeCollection_get_Attributes_m1EFD91DE73B1AB6FDB061108CA8FEF54F2FB5BF0 (void);
// 0x0000042D System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern void AttributeCollection_get_Count_m18B4E5D1755D27754C9B3C7C89B4BD91B1458EC4 (void);
// 0x0000042E System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern void AttributeCollection_get_Item_m2124C159EC9B2357A091B520AEEE0901A1F0D686 (void);
// 0x0000042F System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern void AttributeCollection_GetDefaultAttribute_mE4E776D746426F6C8E4FB92754FBA9067F0D7A3F (void);
// 0x00000430 System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern void AttributeCollection_GetEnumerator_m0A6B7803DAA1D559DF91BB18D0230F449A036DCB (void);
// 0x00000431 System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern void AttributeCollection_System_Collections_ICollection_get_Count_mE6419B4E22BAC7B304BFC745319C683C889CC7F7 (void);
// 0x00000432 System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern void AttributeCollection_System_Collections_ICollection_get_SyncRoot_mA3D7D19888BBE89E51D4BD84EE6AAA9237504E74 (void);
// 0x00000433 System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern void AttributeCollection_CopyTo_mAE40D3E0FE070974B37F9BA5F4600E622E6F621F (void);
// 0x00000434 System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern void AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m582487AE671B368FDDF140B132FA868EC14349FD (void);
// 0x00000435 System.Void System.ComponentModel.AttributeCollection::.cctor()
extern void AttributeCollection__cctor_m53AA3C8B32DE173EF653258A5BA9BCA1E5C5FCA9 (void);
// 0x00000436 System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void BooleanConverter_CanConvertFrom_mD2CCC35D0029B29ED16C531E4389EE94F04AB955 (void);
// 0x00000437 System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void BooleanConverter_ConvertFrom_mAE7E5524CBFA2C3C060A5D7006E1F41BC8AD8426 (void);
// 0x00000438 System.Void System.ComponentModel.BooleanConverter::.ctor()
extern void BooleanConverter__ctor_m8293C29BCB7B90516FFE978C6295C0378C1BFEE4 (void);
// 0x00000439 System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
extern void BrowsableAttribute__ctor_m74B2B058CBFEE54B61640489C57D22055C7B482C (void);
// 0x0000043A System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
extern void BrowsableAttribute_get_Browsable_m84931BFF3F51CB9F14D7B1D7548B796FE2DBB8D2 (void);
// 0x0000043B System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
extern void BrowsableAttribute_Equals_mE405587EE66B0D70C2D59B27C01C65C96C391FBF (void);
// 0x0000043C System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
extern void BrowsableAttribute_GetHashCode_mB190CC4AC3C2A7F8351335208D308E11C12A342D (void);
// 0x0000043D System.Boolean System.ComponentModel.BrowsableAttribute::IsDefaultAttribute()
extern void BrowsableAttribute_IsDefaultAttribute_m71A749AC32DD9BCF4555DB7DE953E11C8A11651C (void);
// 0x0000043E System.Void System.ComponentModel.BrowsableAttribute::.cctor()
extern void BrowsableAttribute__cctor_mE60A9058276719078B402CD5CA7E2D2FD831FE93 (void);
// 0x0000043F System.Type System.ComponentModel.ByteConverter::get_TargetType()
extern void ByteConverter_get_TargetType_m21CE42EF4CCA5DB8100AC9DECF783C8A005B8B26 (void);
// 0x00000440 System.Object System.ComponentModel.ByteConverter::FromString(System.String,System.Int32)
extern void ByteConverter_FromString_m0CAA015CF3C267450EF9F6EAD7D1AADF18B783C1 (void);
// 0x00000441 System.Object System.ComponentModel.ByteConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void ByteConverter_FromString_m382279DD8FDF6650EDFC5977445BD2737200BC87 (void);
// 0x00000442 System.String System.ComponentModel.ByteConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void ByteConverter_ToString_m605162970D456ECCCD143AE873B1A66B7B8A5372 (void);
// 0x00000443 System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void CollectionConverter_ConvertTo_m75D7A858FB6E5B535386F5DB31CE3B6C8B153837 (void);
// 0x00000444 System.Void System.ComponentModel.CollectionConverter::.ctor()
extern void CollectionConverter__ctor_m86DBE477F4462418329C5CFB45C86A9420F852E7 (void);
// 0x00000445 System.Void System.ComponentModel.Component::Finalize()
extern void Component_Finalize_m868907479C0DC7487C423BD23F7A73B09352FDB7 (void);
// 0x00000446 System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern void Component_get_CanRaiseEvents_m6DE6AEAAC799CBA0E31C78BA036590F3FE6543C2 (void);
// 0x00000447 System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
extern void Component_get_CanRaiseEventsInternal_mEB36254A3CA5E7A1BD31D1B9F13D93ACC295936F (void);
// 0x00000448 System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern void Component_get_Site_m45F03D1CF679A6E7EFEEE72F3B399663C0CF720A (void);
// 0x00000449 System.Void System.ComponentModel.Component::Dispose()
extern void Component_Dispose_m823396D3128BA14DDC7522A760EEEEAC30518E98 (void);
// 0x0000044A System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern void Component_Dispose_m80D68BDF38465CD605E93ABFBEBA8F0C9BFFC03B (void);
// 0x0000044B System.Object System.ComponentModel.Component::GetService(System.Type)
extern void Component_GetService_mE7073D944A8F916BA1C93E9E6E6C9920A2D933FA (void);
// 0x0000044C System.Boolean System.ComponentModel.Component::get_DesignMode()
extern void Component_get_DesignMode_m5C2604368D1EC3DD4D2669AAC15F6EC25DBCAF61 (void);
// 0x0000044D System.String System.ComponentModel.Component::ToString()
extern void Component_ToString_m051D2542B10347587C9F258405623C6E482F4BB6 (void);
// 0x0000044E System.Void System.ComponentModel.Component::.ctor()
extern void Component__ctor_m7E00FCEC8E392D7C6AE3806CE5B4616B8CC84594 (void);
// 0x0000044F System.Void System.ComponentModel.Component::.cctor()
extern void Component__cctor_mC716FB6A30E5EFC523414AD3CE9B63B77F7535D3 (void);
// 0x00000450 System.Void System.ComponentModel.CustomTypeDescriptor::.ctor()
extern void CustomTypeDescriptor__ctor_mD442A0BE59DB1D9EF0AC695FC857C18570B2AAD2 (void);
// 0x00000451 System.ComponentModel.AttributeCollection System.ComponentModel.CustomTypeDescriptor::GetAttributes()
extern void CustomTypeDescriptor_GetAttributes_mA2DFA9E08F4CBE42FF54C0EA9313ACACF22AF1E9 (void);
// 0x00000452 System.ComponentModel.TypeConverter System.ComponentModel.CustomTypeDescriptor::GetConverter()
extern void CustomTypeDescriptor_GetConverter_m326AC0250B0AECC9EE172FF9A6A112098EC7EB6C (void);
// 0x00000453 System.Boolean System.ComponentModel.DecimalConverter::get_AllowHex()
extern void DecimalConverter_get_AllowHex_mFB916A7101AA8F202F2EE1952E47B98D8D8D9AD7 (void);
// 0x00000454 System.Type System.ComponentModel.DecimalConverter::get_TargetType()
extern void DecimalConverter_get_TargetType_m9D7F2BB39848B5F8A436A900487B55F6FCA94F20 (void);
// 0x00000455 System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void DecimalConverter_CanConvertTo_m055F9F0239B7D7970F61F3D5B14B3C1991E82C49 (void);
// 0x00000456 System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void DecimalConverter_ConvertTo_m5B21E6AB73251329BE83E9A25C4E2DECD2AE82C2 (void);
// 0x00000457 System.Object System.ComponentModel.DecimalConverter::FromString(System.String,System.Int32)
extern void DecimalConverter_FromString_m00911E3824B71042A46E46CF5F0270D5EBBE77AA (void);
// 0x00000458 System.Object System.ComponentModel.DecimalConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void DecimalConverter_FromString_m3FF2CFCCA66D2D6EBEC5E10A48A9F450C7F37949 (void);
// 0x00000459 System.String System.ComponentModel.DecimalConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void DecimalConverter_ToString_m9E32217983BD348797296512695A5341C30697AD (void);
// 0x0000045A System.Void System.ComponentModel.DecimalConverter::.ctor()
extern void DecimalConverter__ctor_mB015B3871CF834D0C5D8290C9FD15509249921E7 (void);
// 0x0000045B System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
extern void DefaultEventAttribute__ctor_m635F34B6ED07BCB32D4DA9CD82D9FFE10FED5714 (void);
// 0x0000045C System.String System.ComponentModel.DefaultEventAttribute::get_Name()
extern void DefaultEventAttribute_get_Name_m1134D3145164417819FEABD3FB749DB89E09A098 (void);
// 0x0000045D System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
extern void DefaultEventAttribute_Equals_mF08E278698E07E1FB911C0F87598ED64F6C7F019 (void);
// 0x0000045E System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
extern void DefaultEventAttribute_GetHashCode_m3D9A349540F5E08C9113FA277D0CF0C23FF64306 (void);
// 0x0000045F System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
extern void DefaultEventAttribute__cctor_m858BAA32435A47A90F28317DF95A20741AB0223B (void);
// 0x00000460 System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
extern void DefaultPropertyAttribute__ctor_m1BEFABEC4497B47DBFDABDEB90BEEF2070445668 (void);
// 0x00000461 System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
extern void DefaultPropertyAttribute_get_Name_mE3DA224DF16CD92E047FF0CD3DAC7157300B82EB (void);
// 0x00000462 System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
extern void DefaultPropertyAttribute_Equals_m633F58C3EED00082CA450B40F0A968C23CDF8B76 (void);
// 0x00000463 System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
extern void DefaultPropertyAttribute_GetHashCode_m1D5149D2A924BE05CED1FAFEA31BDE0282E055DB (void);
// 0x00000464 System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
extern void DefaultPropertyAttribute__cctor_m6ADAF3FC47ABF97DC42C2201EC2F237176259FA6 (void);
// 0x00000465 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
extern void DefaultValueAttribute__ctor_m7572A53E3D06C0DAAA2AC7C24E0A7F2647135867 (void);
// 0x00000466 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
extern void DefaultValueAttribute__ctor_m1BC9CBB38A9314A5513B910C942861DA122A852A (void);
// 0x00000467 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Object)
extern void DefaultValueAttribute__ctor_m2B67802B0DD6D056BB6BDDFEA71D5350F45E9AEE (void);
// 0x00000468 System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
extern void DefaultValueAttribute_get_Value_m4C07236B56BD114C38BA7DA8C94605A174EEC005 (void);
// 0x00000469 System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
extern void DefaultValueAttribute_Equals_m337FB64F797F188E4815CF051E5DAB44E6E555D3 (void);
// 0x0000046A System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
extern void DefaultValueAttribute_GetHashCode_m890451093F442C83A29160FD8B39A32559F2C7A9 (void);
// 0x0000046B System.Void System.ComponentModel.DelegatingTypeDescriptionProvider::.ctor(System.Type)
extern void DelegatingTypeDescriptionProvider__ctor_mCA7A19A0B8F2306A3FCBE5541B92E0F1D1376B01 (void);
// 0x0000046C System.ComponentModel.TypeDescriptionProvider System.ComponentModel.DelegatingTypeDescriptionProvider::get_Provider()
extern void DelegatingTypeDescriptionProvider_get_Provider_mA048A519047ACF1FB8AB8604AC985038883688E7 (void);
// 0x0000046D System.Collections.IDictionary System.ComponentModel.DelegatingTypeDescriptionProvider::GetCache(System.Object)
extern void DelegatingTypeDescriptionProvider_GetCache_mB2D34194960FB5604FCCA8DEB3F563BD0E73321C (void);
// 0x0000046E System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.DelegatingTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern void DelegatingTypeDescriptionProvider_GetExtendedTypeDescriptor_m253D9E8BB497010592F6EDA8D601DEDF11191CD2 (void);
// 0x0000046F System.Type System.ComponentModel.DelegatingTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern void DelegatingTypeDescriptionProvider_GetReflectionType_mAE5CE00625A29447106956644B1E52E7E7588E79 (void);
// 0x00000470 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.DelegatingTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern void DelegatingTypeDescriptionProvider_GetTypeDescriptor_mFD091994993864869A433CD2507DE15B70D2A7E6 (void);
// 0x00000471 System.Void System.ComponentModel.DescriptionAttribute::.ctor()
extern void DescriptionAttribute__ctor_m4813112E0C52509AA577C0A9A27A8C1D596CFF4E (void);
// 0x00000472 System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
extern void DescriptionAttribute__ctor_m5964EBBE5F72FC3B765F2657E0C7A6A9EF1DF2C5 (void);
// 0x00000473 System.String System.ComponentModel.DescriptionAttribute::get_Description()
extern void DescriptionAttribute_get_Description_m86EA9FDCEF55F6643C195B45A9BA6A58E30875B3 (void);
// 0x00000474 System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
extern void DescriptionAttribute_get_DescriptionValue_mD892D328BECCFE526144A4B778DCC2B4BC8D45CD (void);
// 0x00000475 System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
extern void DescriptionAttribute_Equals_mD0C91C3BDA1081BC9ECD15B9D8770EC9B8CCCB51 (void);
// 0x00000476 System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
extern void DescriptionAttribute_GetHashCode_m936BEDB9238E6BF727014567451AD7DAC9F2B163 (void);
// 0x00000477 System.Boolean System.ComponentModel.DescriptionAttribute::IsDefaultAttribute()
extern void DescriptionAttribute_IsDefaultAttribute_m027507DDAF18946B4CB2FA3015FE73EBAC53D62D (void);
// 0x00000478 System.Void System.ComponentModel.DescriptionAttribute::.cctor()
extern void DescriptionAttribute__cctor_m70E48D1F612C3405E8C981060431512C0374C438 (void);
// 0x00000479 System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String)
extern void DesignerAttribute__ctor_m9F223BB1B2B8A3D480FF9854F4775C2A101A443A (void);
// 0x0000047A System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern void DesignerAttribute__ctor_m80FC02525242A357EB829F1FF6E323C243571DF5 (void);
// 0x0000047B System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern void DesignerAttribute_get_TypeId_m5FEB8253BDB826CF1B19CD7CEAE5622ADBFA6A63 (void);
// 0x0000047C System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern void DesignerAttribute_Equals_m8F8B48C9F60766DE6DEB22CB0ED72F2B16C8C659 (void);
// 0x0000047D System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern void DesignerAttribute_GetHashCode_m756E31506E31D909272E5289ADC2DCB0DA675437 (void);
// 0x0000047E System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
extern void DesignerCategoryAttribute__ctor_mF489EBD57068DA5F3FE4DCA8300CB5A78CF34CE0 (void);
// 0x0000047F System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
extern void DesignerCategoryAttribute__ctor_m4699FB87C02E6D4B8E417C462B5BB6F76E0EC694 (void);
// 0x00000480 System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
extern void DesignerCategoryAttribute_get_Category_mDCB2D0B9A4F5FAD33260300979D52A4A9EC1C80D (void);
// 0x00000481 System.Object System.ComponentModel.DesignerCategoryAttribute::get_TypeId()
extern void DesignerCategoryAttribute_get_TypeId_mE1C3D89F3555E98D93523CCECD91D2A7235A10FA (void);
// 0x00000482 System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
extern void DesignerCategoryAttribute_Equals_m7F9DFE7D18B55A1B0B68FBDA034F0FE9CA351CEB (void);
// 0x00000483 System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
extern void DesignerCategoryAttribute_GetHashCode_m2CF3EB39D6E5352C9D944679018CE41B6CC2FED4 (void);
// 0x00000484 System.Boolean System.ComponentModel.DesignerCategoryAttribute::IsDefaultAttribute()
extern void DesignerCategoryAttribute_IsDefaultAttribute_m661EFD9151FCBB2DD7BB3E54EB45E4AD26DB6F8F (void);
// 0x00000485 System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
extern void DesignerCategoryAttribute__cctor_m5A20D3E6497B394223C44441C654C53794C5B5C4 (void);
// 0x00000486 System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
extern void DesignerSerializationVisibilityAttribute__ctor_m5DCCCF10B65CB984ACAA2C821CD59E0A5591CC91 (void);
// 0x00000487 System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
extern void DesignerSerializationVisibilityAttribute_get_Visibility_mAE359C5749C4000C2A382C64B1DCFC3AC4B2FFC5 (void);
// 0x00000488 System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
extern void DesignerSerializationVisibilityAttribute_Equals_mC35A99157702232DE7952D5A7275DA7204E0294F (void);
// 0x00000489 System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
extern void DesignerSerializationVisibilityAttribute_GetHashCode_m0DA75A13695D5C191EDF0C7918E3AF166E1805C7 (void);
// 0x0000048A System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::IsDefaultAttribute()
extern void DesignerSerializationVisibilityAttribute_IsDefaultAttribute_mA881E4CCC85E9269F90BCEA231073875C653605E (void);
// 0x0000048B System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
extern void DesignerSerializationVisibilityAttribute__cctor_mEB0BCCD12F1113C50BF1C0364EF2A99E41AD424A (void);
// 0x0000048C System.Boolean System.ComponentModel.DoubleConverter::get_AllowHex()
extern void DoubleConverter_get_AllowHex_mDB902FA678E2823F8775CF2410F8BCFD45135A9A (void);
// 0x0000048D System.Type System.ComponentModel.DoubleConverter::get_TargetType()
extern void DoubleConverter_get_TargetType_mE2AA85910CF4D5EE2857F5472FAD6F60E96FDA6E (void);
// 0x0000048E System.Object System.ComponentModel.DoubleConverter::FromString(System.String,System.Int32)
extern void DoubleConverter_FromString_mDCD894BDC0A4DFB12E269CE8FF72B377691E4095 (void);
// 0x0000048F System.Object System.ComponentModel.DoubleConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void DoubleConverter_FromString_m0FA24E767CC4FFA9CFD7B7CE0D382A0CA8903980 (void);
// 0x00000490 System.String System.ComponentModel.DoubleConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void DoubleConverter_ToString_m9C99B65F40B918222ED348FA19F750EC02DCD72B (void);
// 0x00000491 System.Void System.ComponentModel.DoubleConverter::.ctor()
extern void DoubleConverter__ctor_m419F1E782FFBC765D22792D76E56D54FC94E6AEB (void);
// 0x00000492 System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
extern void EditorBrowsableAttribute__ctor_mACDE45DF0DCAA6E923120D6AEC45422AEF958C2E (void);
// 0x00000493 System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
extern void EditorBrowsableAttribute_Equals_m6F5EF9CC298CBDC862CBCA5187379A79635726FA (void);
// 0x00000494 System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
extern void EditorBrowsableAttribute_GetHashCode_m74229847CE44E771F282E2E73FFC4DE55771A1B6 (void);
// 0x00000495 System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern void EnumConverter__ctor_mBA8B2E210D061A3CF86950F6D797E911A2E3C774 (void);
// 0x00000496 System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void EnumConverter_CanConvertFrom_m283E54FE7BFCFC3CF022827F20678CE40698BAE2 (void);
// 0x00000497 System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void EnumConverter_CanConvertTo_m0BDD50EB0F3A7B3364DDD86650151F95C4D4965B (void);
// 0x00000498 System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void EnumConverter_ConvertFrom_m06D2FC9021EB3AF4BF131CE8E7268CC41A8994CF (void);
// 0x00000499 System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void EnumConverter_ConvertTo_mBDC59D2EE871592603097C069D557F4D9A79ABFB (void);
// 0x0000049A System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.ComponentModel.EventDescriptor[])
extern void EventDescriptorCollection__ctor_m39980AB8EA7F2F7B480F18E4EC36796C1A259CD7 (void);
// 0x0000049B System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.ComponentModel.EventDescriptor[],System.Boolean)
extern void EventDescriptorCollection__ctor_mDC62048A9CCD9F4E5C2CE7BBEB7C995A60ACB0D5 (void);
// 0x0000049C System.Int32 System.ComponentModel.EventDescriptorCollection::get_Count()
extern void EventDescriptorCollection_get_Count_mCAA673C0D2447E4823B34AE97D61BBC999A3E6BC (void);
// 0x0000049D System.ComponentModel.EventDescriptor System.ComponentModel.EventDescriptorCollection::get_Item(System.Int32)
extern void EventDescriptorCollection_get_Item_m861DB4DC0B594DC2BCB973266F49F77DB790689E (void);
// 0x0000049E System.Int32 System.ComponentModel.EventDescriptorCollection::Add(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Add_mC05DAE99E5D1B041F5755F71E6A2E114640F9779 (void);
// 0x0000049F System.Void System.ComponentModel.EventDescriptorCollection::Clear()
extern void EventDescriptorCollection_Clear_m72C4D0C9B92F9055A62EE6D86D9F3E86264405B5 (void);
// 0x000004A0 System.Boolean System.ComponentModel.EventDescriptorCollection::Contains(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Contains_mD58C927756864E91133BD59356756E96253D4416 (void);
// 0x000004A1 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void EventDescriptorCollection_System_Collections_ICollection_CopyTo_mB67B73650B5657F8405395D0BD6521ED8A3AF0D6 (void);
// 0x000004A2 System.Void System.ComponentModel.EventDescriptorCollection::EnsureEventsOwned()
extern void EventDescriptorCollection_EnsureEventsOwned_mF1722C2F3574DFE39C8509B62BA0013A68A1C8FB (void);
// 0x000004A3 System.Void System.ComponentModel.EventDescriptorCollection::EnsureSize(System.Int32)
extern void EventDescriptorCollection_EnsureSize_m025A1E96DE65403C6BB70BB95F9098E6572EF191 (void);
// 0x000004A4 System.Int32 System.ComponentModel.EventDescriptorCollection::IndexOf(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_IndexOf_m2F0D99D9E5885CC7DB6133839635E9C806F6A385 (void);
// 0x000004A5 System.Void System.ComponentModel.EventDescriptorCollection::Insert(System.Int32,System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Insert_mB3259BB95ADAA9B11B8A2171F5FAD03C52C40557 (void);
// 0x000004A6 System.Void System.ComponentModel.EventDescriptorCollection::Remove(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Remove_m9F6BF67636B9406EEFB0E3589F4EB3BAF625447E (void);
// 0x000004A7 System.Void System.ComponentModel.EventDescriptorCollection::RemoveAt(System.Int32)
extern void EventDescriptorCollection_RemoveAt_m3124EA86A586B8FE157E6D6F594E3DCA0752D6D1 (void);
// 0x000004A8 System.Collections.IEnumerator System.ComponentModel.EventDescriptorCollection::GetEnumerator()
extern void EventDescriptorCollection_GetEnumerator_mEC07212EAD84EF5CD1DB03CFF3773669A030342F (void);
// 0x000004A9 System.Void System.ComponentModel.EventDescriptorCollection::InternalSort(System.String[])
extern void EventDescriptorCollection_InternalSort_mFC9324E5B172C969B8930B47ABE42FF8C2FEEC72 (void);
// 0x000004AA System.Void System.ComponentModel.EventDescriptorCollection::InternalSort(System.Collections.IComparer)
extern void EventDescriptorCollection_InternalSort_mAF3920AA7607A00C1B327539E007F9BBCD2FF13F (void);
// 0x000004AB System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_Count()
extern void EventDescriptorCollection_System_Collections_ICollection_get_Count_m360696919250EEB37806F7B331BC2D5127021716 (void);
// 0x000004AC System.Object System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern void EventDescriptorCollection_System_Collections_ICollection_get_SyncRoot_mBDACC0F4D991CDC34E1447AA9D5BE06B6A0E44F2 (void);
// 0x000004AD System.Collections.IEnumerator System.ComponentModel.EventDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern void EventDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m175494690E3ECAC20382096A8D43493C6DF3245A (void);
// 0x000004AE System.Object System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern void EventDescriptorCollection_System_Collections_IList_get_Item_mF9F2044326BAD3E203EE9C4B71998C6139671E7C (void);
// 0x000004AF System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void EventDescriptorCollection_System_Collections_IList_set_Item_m12BD29BF86D1A0AC1255C811F7E9BE0D56DD48DD (void);
// 0x000004B0 System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Add(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Add_mA285053C7C5617586A25D1B3FD1DA834A484F9B9 (void);
// 0x000004B1 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Clear()
extern void EventDescriptorCollection_System_Collections_IList_Clear_m690719A2AC9F81A4B9D94878CA2A991F07F2538C (void);
// 0x000004B2 System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Contains_mF75078ECF8D88E161AA11A9AAE71543ECB3CEC26 (void);
// 0x000004B3 System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_IndexOf_m48410473C90632946175F748D09BFAA506D0578E (void);
// 0x000004B4 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Insert_m0538802AE7EB66BDF621A96C23637A50738FD995 (void);
// 0x000004B5 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Remove_m7416A79A4EA58351DBF9B8111C69A6CA8DD1DB05 (void);
// 0x000004B6 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern void EventDescriptorCollection_System_Collections_IList_RemoveAt_m9DCA747BC2AC75F2920EC289C66FCE2099622329 (void);
// 0x000004B7 System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_IsReadOnly()
extern void EventDescriptorCollection_System_Collections_IList_get_IsReadOnly_m1D57F4D7C77E62F7E06273DEC783685E107D0DB5 (void);
// 0x000004B8 System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_IsFixedSize()
extern void EventDescriptorCollection_System_Collections_IList_get_IsFixedSize_m00833DCAD0FB8406395CDA1CA0E6C4DDBF958100 (void);
// 0x000004B9 System.Void System.ComponentModel.EventDescriptorCollection::.cctor()
extern void EventDescriptorCollection__cctor_m027E184FD1333633CEFBEE18BA140A89E8DEEFB1 (void);
// 0x000004BA System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern void EventHandlerList_get_Item_mFB7DC8CD40DFDA76E9732CB48CE774DDEC373C42 (void);
// 0x000004BB System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
extern void EventHandlerList_Find_m0D64F77486BF4EABD934BF04CE38EF6DB0450B42 (void);
// 0x000004BC System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::get_Provider()
extern void ExtenderProvidedPropertyAttribute_get_Provider_m54BFFEFF3AF82BD3F36AC3A1D473FAC53CF368C6 (void);
// 0x000004BD System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site()
// 0x000004BE System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent)
// 0x000004BF System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor::GetAttributes()
// 0x000004C0 System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor::GetConverter()
// 0x000004C1 System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container()
// 0x000004C2 System.Boolean System.ComponentModel.ISite::get_DesignMode()
// 0x000004C3 System.String System.ComponentModel.ISite::get_Name()
// 0x000004C4 System.Boolean System.ComponentModel.ISynchronizeInvoke::get_InvokeRequired()
// 0x000004C5 System.IAsyncResult System.ComponentModel.ISynchronizeInvoke::BeginInvoke(System.Delegate,System.Object[])
// 0x000004C6 System.Type System.ComponentModel.Int16Converter::get_TargetType()
extern void Int16Converter_get_TargetType_m03C28B87C29C22B04B4D41C0F654612CADBBD144 (void);
// 0x000004C7 System.Object System.ComponentModel.Int16Converter::FromString(System.String,System.Int32)
extern void Int16Converter_FromString_m5037FE57C286C9CAC9CDE3116D0F426EF88993FC (void);
// 0x000004C8 System.Object System.ComponentModel.Int16Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void Int16Converter_FromString_m68A48D7A88B2206AD366C3CD5824C90CB483A01B (void);
// 0x000004C9 System.String System.ComponentModel.Int16Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void Int16Converter_ToString_m04E267BEB959CCCD5FF76F5221B4A82D3B90DE23 (void);
// 0x000004CA System.Void System.ComponentModel.Int16Converter::.ctor()
extern void Int16Converter__ctor_mD4D022096E6FB9FFDB84D879E31177A892DD072D (void);
// 0x000004CB System.Type System.ComponentModel.Int32Converter::get_TargetType()
extern void Int32Converter_get_TargetType_mADD76E2E99D4B78ECB684AE296C6AD5E45840433 (void);
// 0x000004CC System.Object System.ComponentModel.Int32Converter::FromString(System.String,System.Int32)
extern void Int32Converter_FromString_m522F024625D49139F89AC5DE44EA3DCFDD490B55 (void);
// 0x000004CD System.Object System.ComponentModel.Int32Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void Int32Converter_FromString_m99A5C50498D91308BEA81C8E9E134608DD525799 (void);
// 0x000004CE System.String System.ComponentModel.Int32Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void Int32Converter_ToString_m30AAD6DCBB228CBD58299310D39D80A44AEB7C6A (void);
// 0x000004CF System.Void System.ComponentModel.Int32Converter::.ctor()
extern void Int32Converter__ctor_m1CD79AE5880FDE2EC91F1D67E567AAA3618D19B9 (void);
// 0x000004D0 System.Type System.ComponentModel.Int64Converter::get_TargetType()
extern void Int64Converter_get_TargetType_mA6FF642BF7B48C93043B520B6F56598262324155 (void);
// 0x000004D1 System.Object System.ComponentModel.Int64Converter::FromString(System.String,System.Int32)
extern void Int64Converter_FromString_m40D208F2EDE6FFDFF6A897EDE71636290F759A61 (void);
// 0x000004D2 System.Object System.ComponentModel.Int64Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void Int64Converter_FromString_m9537EF10EF270D889756264177A7AD71BAC3342C (void);
// 0x000004D3 System.String System.ComponentModel.Int64Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void Int64Converter_ToString_m914E4B677BB3D12FEFF432696606554C7276093C (void);
// 0x000004D4 System.Void System.ComponentModel.Int64Converter::.ctor()
extern void Int64Converter__ctor_mE4DC71A97EF110B854F22A48AB0F0D3792B53A74 (void);
// 0x000004D5 System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern void MemberDescriptor_get_AttributeArray_mDB41975C313AF40B0FA82B33F0AD504E92F3FDE8 (void);
// 0x000004D6 System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern void MemberDescriptor_get_Attributes_m4D430272C6E7D07FD2DD901B6FC26E3886217153 (void);
// 0x000004D7 System.String System.ComponentModel.MemberDescriptor::get_Name()
extern void MemberDescriptor_get_Name_mFADCC43480F88C3749FA2B82EAECA54F79D848BB (void);
// 0x000004D8 System.Void System.ComponentModel.MemberDescriptor::CheckAttributesValid()
extern void MemberDescriptor_CheckAttributesValid_mEAFC02C4EAED626FCDC291F1512DD0E602E232BE (void);
// 0x000004D9 System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern void MemberDescriptor_CreateAttributeCollection_m579C3F75B24CD1373AE01189CD3CB9CBC6C49E66 (void);
// 0x000004DA System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern void MemberDescriptor_FillAttributes_mA33C5FFD1DE2BA560E335B6549E60A229B9F773B (void);
// 0x000004DB System.Void System.ComponentModel.MemberDescriptor::FilterAttributesIfNeeded()
extern void MemberDescriptor_FilterAttributesIfNeeded_mDEFEACE930F7537A7DF7A530198F04C73301D591 (void);
// 0x000004DC System.Void System.ComponentModel.PropertyChangedEventArgs::.ctor(System.String)
extern void PropertyChangedEventArgs__ctor_mBC582C76F42CDEE455B350302FFDF687D135A9E2 (void);
// 0x000004DD System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void PropertyChangedEventHandler__ctor_mC6EC20F2995A9376A72EB51981850A9E5C8450E7 (void);
// 0x000004DE System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern void PropertyChangedEventHandler_Invoke_m7DB0AABF07302887DD3FEE589E1F585B4C768F57 (void);
// 0x000004DF System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern void PropertyChangedEventHandler_BeginInvoke_m77D416AC801FF29FBF4D294574231171FE2E551D (void);
// 0x000004E0 System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern void PropertyChangedEventHandler_EndInvoke_m3539B5822D063A13DF8EBCA57CA475A7B5BE32FE (void);
// 0x000004E1 System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
extern void PropertyDescriptorCollection__ctor_m132BE5B53DC73850841F2AB9A6633F4626C538BC (void);
// 0x000004E2 System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[],System.Boolean)
extern void PropertyDescriptorCollection__ctor_m7DDFDE6996940ED1E0BF5073548E5C5B058D6D6D (void);
// 0x000004E3 System.Int32 System.ComponentModel.PropertyDescriptorCollection::get_Count()
extern void PropertyDescriptorCollection_get_Count_mAA1EA8D4BE590EE7F7E469876FB503F2A0F0E4B0 (void);
// 0x000004E4 System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.Int32)
extern void PropertyDescriptorCollection_get_Item_mD0F537639842BDFC56F142C00A4041CF598D26C2 (void);
// 0x000004E5 System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.String)
extern void PropertyDescriptorCollection_get_Item_m2FEEB6EF3922067EC403A4261D4FB6E77843F628 (void);
// 0x000004E6 System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Add_m4EC994159DE3EC1B05CCD9186099D7935FF3ED33 (void);
// 0x000004E7 System.Void System.ComponentModel.PropertyDescriptorCollection::Clear()
extern void PropertyDescriptorCollection_Clear_mAD94D5BF4918591FEE475B3FC15A64729F89A3DE (void);
// 0x000004E8 System.Boolean System.ComponentModel.PropertyDescriptorCollection::Contains(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Contains_m8262E7DEBA9D0C9496CE3DDA85BC1F1995F18DBA (void);
// 0x000004E9 System.Void System.ComponentModel.PropertyDescriptorCollection::CopyTo(System.Array,System.Int32)
extern void PropertyDescriptorCollection_CopyTo_m7F65E93884A12E569B035774440FA977CB9D3A30 (void);
// 0x000004EA System.Void System.ComponentModel.PropertyDescriptorCollection::EnsurePropsOwned()
extern void PropertyDescriptorCollection_EnsurePropsOwned_mA7CDF7318480D4512B76733D3E1DF9EAE6C378A1 (void);
// 0x000004EB System.Void System.ComponentModel.PropertyDescriptorCollection::EnsureSize(System.Int32)
extern void PropertyDescriptorCollection_EnsureSize_mCCF9502C5BE2212F88FDC6507E598175CF1298BA (void);
// 0x000004EC System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::Find(System.String,System.Boolean)
extern void PropertyDescriptorCollection_Find_m5B0293378066DA6E64B89658470B49EC2767E3B8 (void);
// 0x000004ED System.Int32 System.ComponentModel.PropertyDescriptorCollection::IndexOf(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_IndexOf_mFBCAE0B916F2BF733D494020EBA7EFEEEFC20A45 (void);
// 0x000004EE System.Void System.ComponentModel.PropertyDescriptorCollection::Insert(System.Int32,System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Insert_m22DC9C6797AE20CFE2815DCB8C5A98A9A363BDCD (void);
// 0x000004EF System.Void System.ComponentModel.PropertyDescriptorCollection::Remove(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Remove_mCFFC999272C8C7B4C325B6D32A9DA2FC6DABC997 (void);
// 0x000004F0 System.Void System.ComponentModel.PropertyDescriptorCollection::RemoveAt(System.Int32)
extern void PropertyDescriptorCollection_RemoveAt_m988ED89DD8C6F2D254BD664991461869786977F0 (void);
// 0x000004F1 System.Void System.ComponentModel.PropertyDescriptorCollection::InternalSort(System.String[])
extern void PropertyDescriptorCollection_InternalSort_m5BEF1BE7A393A601E9E404644C037EB7552362C6 (void);
// 0x000004F2 System.Void System.ComponentModel.PropertyDescriptorCollection::InternalSort(System.Collections.IComparer)
extern void PropertyDescriptorCollection_InternalSort_m05765A385A5F324219F60E3880193230BCCE8863 (void);
// 0x000004F3 System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator()
extern void PropertyDescriptorCollection_GetEnumerator_mFAB322230D6F91D8B5076910CF9D6107DBC768BD (void);
// 0x000004F4 System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_Count()
extern void PropertyDescriptorCollection_System_Collections_ICollection_get_Count_m4A8DC9D8BD368E2998FB84F1E764B746AB406C2D (void);
// 0x000004F5 System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern void PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m0100C4A2C9B18F6E1A201E29C6F12D1F265DCA4A (void);
// 0x000004F6 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Add(System.Object,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Add_m76AF67DE822D94A046E14382F1841C835EADA094 (void);
// 0x000004F7 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Clear()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Clear_mCD2DED6F88201D0839F266BA27ADA4C9CDAD8E7C (void);
// 0x000004F8 System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Contains(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m2BF92AB5B0E6DE71F06C21D6A79F40EEB66DE53A (void);
// 0x000004F9 System.Collections.IDictionaryEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.GetEnumerator()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_m8BAA6008671D58327735A8CAF9F5916EAFA4B2F2 (void);
// 0x000004FA System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_IsReadOnly()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_get_IsReadOnly_mCA0E47965BC12EE580E220E38B71BB97CC2807C9 (void);
// 0x000004FB System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Item(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_m55B7B06FCFD64E0549A25F402E880015FA39237D (void);
// 0x000004FC System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_m45799DA37784A9840E8BCA5FA746535CDD86D696 (void);
// 0x000004FD System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Keys()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_get_Keys_mB81D8CBB4D00C6C8588A02D1DAB7936E7A41DD48 (void);
// 0x000004FE System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Values()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_get_Values_m8753BBF5531A5623FDEB4BB961BCB0CBFC69EF24 (void);
// 0x000004FF System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Remove(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Remove_mEE3E78216CC8C1192BEF19A0610D5345808B1D76 (void);
// 0x00000500 System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern void PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m98DD98C01E84C0A8729E0C7EEDC9265A4911FB61 (void);
// 0x00000501 System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Add(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Add_m7805DEADF351C068D3397DB5C6D84C639452B874 (void);
// 0x00000502 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Clear()
extern void PropertyDescriptorCollection_System_Collections_IList_Clear_mB8004EB4547BD17A52732BB53EE9D54FAB27C638 (void);
// 0x00000503 System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Contains_m480A973ED000ECA6482E3BE2970009A09ED545FA (void);
// 0x00000504 System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_IndexOf_m5784A077E0E4C9936D1DD476E58374AD27063CF7 (void);
// 0x00000505 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Insert_m8B356017EBDC3A70B466B4787016840F89074F0D (void);
// 0x00000506 System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_IsReadOnly()
extern void PropertyDescriptorCollection_System_Collections_IList_get_IsReadOnly_mC37BCD9B3BE2F5B9773062BF82C3AA5D6645F227 (void);
// 0x00000507 System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_IsFixedSize()
extern void PropertyDescriptorCollection_System_Collections_IList_get_IsFixedSize_m56B5321D84E8B06C5A557009E62A7335A4EFA018 (void);
// 0x00000508 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Remove_m23C0000AD3979585B0659FEBCDE0B3EFF1207FEC (void);
// 0x00000509 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern void PropertyDescriptorCollection_System_Collections_IList_RemoveAt_m9FD20F8FDF9167173D07E0FE7C22E0D3A85B781D (void);
// 0x0000050A System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern void PropertyDescriptorCollection_System_Collections_IList_get_Item_m444F1383137CD08C6AE33B93743C22970975B68B (void);
// 0x0000050B System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_set_Item_mC9C9476E42ADB9166CFD8FC7C7AA379EBB8F8E4B (void);
// 0x0000050C System.Void System.ComponentModel.PropertyDescriptorCollection::.cctor()
extern void PropertyDescriptorCollection__cctor_m5DE8BDE158CD72E98E2ADD9DB3151F931CC9FB0F (void);
// 0x0000050D System.Void System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::.ctor(System.ComponentModel.PropertyDescriptorCollection)
extern void PropertyDescriptorEnumerator__ctor_mD766982CCA3E90487BD77781B1EA0C29F9477B7D (void);
// 0x0000050E System.Object System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Current()
extern void PropertyDescriptorEnumerator_get_Current_m010FD0E05A0FA950A30C202CF643D7B3934557D8 (void);
// 0x0000050F System.Collections.DictionaryEntry System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Entry()
extern void PropertyDescriptorEnumerator_get_Entry_m8BDC6BA3A4A5620F2EA393763B6BF271FD58AB60 (void);
// 0x00000510 System.Object System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Key()
extern void PropertyDescriptorEnumerator_get_Key_m229FC1FF77DE80A679B1FE548094C02AF396A9B0 (void);
// 0x00000511 System.Object System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Value()
extern void PropertyDescriptorEnumerator_get_Value_mADCA4A1AE3EB26072C808EACB670596099943359 (void);
// 0x00000512 System.Boolean System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::MoveNext()
extern void PropertyDescriptorEnumerator_MoveNext_m6AB35EFF1B4CC455D419DF2C4F55DFCFFE420E1B (void);
// 0x00000513 System.Void System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::Reset()
extern void PropertyDescriptorEnumerator_Reset_m4FFA35A10951E339F0A75683E0151217D120329D (void);
// 0x00000514 System.Void System.ComponentModel.ReferenceConverter::.cctor()
extern void ReferenceConverter__cctor_m6B8D4BF669E7923D139320E54DF971BF30D4825C (void);
// 0x00000515 System.Void System.ComponentModel.ReflectTypeDescriptionProvider::.ctor()
extern void ReflectTypeDescriptionProvider__ctor_mE3E181FF24A78513F9E285D485FA292B11708B17 (void);
// 0x00000516 System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters()
extern void ReflectTypeDescriptionProvider_get_IntrinsicTypeConverters_m9CC87D07619955CD00731AD91FC7F8323C18AF4F (void);
// 0x00000517 System.Object System.ComponentModel.ReflectTypeDescriptionProvider::CreateInstance(System.Type,System.Type)
extern void ReflectTypeDescriptionProvider_CreateInstance_m1A50E07E2455EA23FDE96B06EFD81DCA451025D4 (void);
// 0x00000518 System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider::GetAttributes(System.Type)
extern void ReflectTypeDescriptionProvider_GetAttributes_mD827142E84D2111FBD6F88118D1DD0BCF898700C (void);
// 0x00000519 System.Collections.IDictionary System.ComponentModel.ReflectTypeDescriptionProvider::GetCache(System.Object)
extern void ReflectTypeDescriptionProvider_GetCache_m90103F5B0B173BA5AA6F8B773FA02EE66FA58D7F (void);
// 0x0000051A System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider::GetConverter(System.Type,System.Object)
extern void ReflectTypeDescriptionProvider_GetConverter_mB8782B30A3D40FBDB37A4FD68A635149B0154880 (void);
// 0x0000051B System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedAttributes(System.Object)
extern void ReflectTypeDescriptionProvider_GetExtendedAttributes_m27849C4290581FFD9B350AD671E5DE9764531E46 (void);
// 0x0000051C System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedConverter(System.Object)
extern void ReflectTypeDescriptionProvider_GetExtendedConverter_m54A3FED3A123C2C0375E2FBCA5C4B29C6220BA2D (void);
// 0x0000051D System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern void ReflectTypeDescriptionProvider_GetExtendedTypeDescriptor_mE33F57B6C037B34BACC549681047C513D9C6934F (void);
// 0x0000051E System.Type System.ComponentModel.ReflectTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern void ReflectTypeDescriptionProvider_GetReflectionType_mF229DC91D51765143C01388F689FAA98EB4EC658 (void);
// 0x0000051F System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData System.ComponentModel.ReflectTypeDescriptionProvider::GetTypeData(System.Type,System.Boolean)
extern void ReflectTypeDescriptionProvider_GetTypeData_m297505206CB7033A420244CD3962881B3FAA55E4 (void);
// 0x00000520 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.ReflectTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern void ReflectTypeDescriptionProvider_GetTypeDescriptor_m99EE1E613367E54A6132ADD94E0D34772BBEB67C (void);
// 0x00000521 System.Boolean System.ComponentModel.ReflectTypeDescriptionProvider::IsPopulated(System.Type)
extern void ReflectTypeDescriptionProvider_IsPopulated_mDA141741A260991A87C6B4C7EE84FAB26220A534 (void);
// 0x00000522 System.Attribute[] System.ComponentModel.ReflectTypeDescriptionProvider::ReflectGetAttributes(System.Type)
extern void ReflectTypeDescriptionProvider_ReflectGetAttributes_m378C9A3D2CB09CE7EBA76BCF431A99F6C2EF67DD (void);
// 0x00000523 System.Void System.ComponentModel.ReflectTypeDescriptionProvider::Refresh(System.Type)
extern void ReflectTypeDescriptionProvider_Refresh_m6C8F1779B16BB22FAAABA8E16E5DB5AB1025DF89 (void);
// 0x00000524 System.Object System.ComponentModel.ReflectTypeDescriptionProvider::SearchIntrinsicTable(System.Collections.Hashtable,System.Type)
extern void ReflectTypeDescriptionProvider_SearchIntrinsicTable_mD70A9E795A2A1411479E8BB0ACE34604726C9D82 (void);
// 0x00000525 System.Void System.ComponentModel.ReflectTypeDescriptionProvider::.cctor()
extern void ReflectTypeDescriptionProvider__cctor_mB9C7F73E1722134C687B3BB8E0F484EF2F30FEA5 (void);
// 0x00000526 System.Void System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::.ctor(System.Type)
extern void ReflectedTypeData__ctor_mA8A7CF229ABE16D20515D5A827382370C78151AA (void);
// 0x00000527 System.Boolean System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::get_IsPopulated()
extern void ReflectedTypeData_get_IsPopulated_m0BE08AAC57F2AA79A21B33C3A4A3FC7EECE35549 (void);
// 0x00000528 System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::GetAttributes()
extern void ReflectedTypeData_GetAttributes_m663A1FD9948A46D290B3D9E033F291B1E535452E (void);
// 0x00000529 System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::GetConverter(System.Object)
extern void ReflectedTypeData_GetConverter_mD37346D7D19C72DC50CBB82BF4F4F9DF5218D0B6 (void);
// 0x0000052A System.Type System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::GetTypeFromName(System.String)
extern void ReflectedTypeData_GetTypeFromName_m9E59CF61CA7CAC4E47B9736F36891FCB2E325D27 (void);
// 0x0000052B System.Void System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::Refresh()
extern void ReflectedTypeData_Refresh_mA966D08F6AC6693D49DCB60CE3BF23ADBF4DE7BA (void);
// 0x0000052C System.Void System.ComponentModel.RefreshEventArgs::.ctor(System.Type)
extern void RefreshEventArgs__ctor_mEC162508026E43A0B4E193163E6ED7D6B682D342 (void);
// 0x0000052D System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern void RefreshEventHandler__ctor_m37CAC58BA1E426C888118B568F540D5FA6E4E9CC (void);
// 0x0000052E System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern void RefreshEventHandler_Invoke_mF3ADA58FAFE8E56B53F99B9717A4D3E252575FF5 (void);
// 0x0000052F System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern void RefreshEventHandler_BeginInvoke_m21258C5F768FBD9949B49F95A574B80981515AFF (void);
// 0x00000530 System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern void RefreshEventHandler_EndInvoke_mAF60D2A0CC7D45F8AFD1C1135EA3DF225545C030 (void);
// 0x00000531 System.Type System.ComponentModel.SByteConverter::get_TargetType()
extern void SByteConverter_get_TargetType_m034BBA889EAAC775483117120F159E328D1260D6 (void);
// 0x00000532 System.Object System.ComponentModel.SByteConverter::FromString(System.String,System.Int32)
extern void SByteConverter_FromString_m0AE243DE3D62BE5B4D6B5902412E59B6F2B4C6B4 (void);
// 0x00000533 System.Object System.ComponentModel.SByteConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void SByteConverter_FromString_mE18AD8A52E1E48B186DE67EAE676B20B29C69DD3 (void);
// 0x00000534 System.String System.ComponentModel.SByteConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void SByteConverter_ToString_m7DFD79BF472530D27DE2EFA08023C39AEF3EE048 (void);
// 0x00000535 System.Boolean System.ComponentModel.SingleConverter::get_AllowHex()
extern void SingleConverter_get_AllowHex_m9A8EC29BC10782CF9BC2E9C526B1F958876DDA43 (void);
// 0x00000536 System.Type System.ComponentModel.SingleConverter::get_TargetType()
extern void SingleConverter_get_TargetType_mEE841A77D0642D07A7978A8A871FD73DD57EB7DF (void);
// 0x00000537 System.Object System.ComponentModel.SingleConverter::FromString(System.String,System.Int32)
extern void SingleConverter_FromString_mAE00A2E4F24907D0666B2C4B62833289E96FDE8C (void);
// 0x00000538 System.Object System.ComponentModel.SingleConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void SingleConverter_FromString_mAB67D8A4BDEAC852EA4060FCE6F69C40F48E13DB (void);
// 0x00000539 System.String System.ComponentModel.SingleConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void SingleConverter_ToString_m5002E1C3937CECC3094583349B9EF72474524583 (void);
// 0x0000053A System.Void System.ComponentModel.SingleConverter::.ctor()
extern void SingleConverter__ctor_m8EA7D412C3EE9A9522E7592774DD46EBC6118AA8 (void);
// 0x0000053B System.Boolean System.ComponentModel.StringConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void StringConverter_CanConvertFrom_m50224B731176E5B25E43B35F74C0D1EA0859EC81 (void);
// 0x0000053C System.Object System.ComponentModel.StringConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void StringConverter_ConvertFrom_mC11C90F2FD2BD033AEA354185DC892D951FA5005 (void);
// 0x0000053D System.Void System.ComponentModel.StringConverter::.ctor()
extern void StringConverter__ctor_m2718AC00691AF4A3AF8A8D64896BE3B5D58658B2 (void);
// 0x0000053E System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TimeSpanConverter_CanConvertFrom_m693C336C7A5435912FC4AC569E1EAD30BEB32FFF (void);
// 0x0000053F System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TimeSpanConverter_CanConvertTo_m5AC96B662FA4EACCEADAC81931591E0B14711276 (void);
// 0x00000540 System.Object System.ComponentModel.TimeSpanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void TimeSpanConverter_ConvertFrom_m4244DF51D5A1AC286C35FCE04D82F5A9A2F33894 (void);
// 0x00000541 System.Object System.ComponentModel.TimeSpanConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void TimeSpanConverter_ConvertTo_m6A1E0C832909670E26B892813AD9E14F08EE316E (void);
// 0x00000542 System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern void TimeSpanConverter__ctor_m28E7294174F979EF86FEF9511474B0AB9431217B (void);
// 0x00000543 System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern void TypeConverter_CanConvertFrom_mB405721DE7D2532FA893C4F9242BD7675784DF3D (void);
// 0x00000544 System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TypeConverter_CanConvertFrom_m8E1F9E41B7DEE6A032EAC70130ADC6356C3F227D (void);
// 0x00000545 System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern void TypeConverter_CanConvertTo_mFD084EFAE4C064C6844E20E5A0C6719925A2D938 (void);
// 0x00000546 System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TypeConverter_CanConvertTo_m1CD3397D9E5717DE72A13B28C0A75D997A9F337D (void);
// 0x00000547 System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void TypeConverter_ConvertFrom_mD5AE49E422520F6E07B3C0D6202788E49B4698A3 (void);
// 0x00000548 System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void TypeConverter_ConvertTo_mFC7AA7F0A382607E75CCE820A705B5965D099AAC (void);
// 0x00000549 System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern void TypeConverter_ConvertToInvariantString_m761850CEC1FEE3C82ABE5F794DE84FFE29C852A2 (void);
// 0x0000054A System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern void TypeConverter_ConvertToInvariantString_m382F27F2262271AB0775D6FA6F413D24BEA28808 (void);
// 0x0000054B System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void TypeConverter_ConvertToString_m2601B49A8D7AB780DBA7F2DD08A3790DF7987FB4 (void);
// 0x0000054C System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern void TypeConverter_GetConvertFromException_m10012C012ED008F8AC9DF76BBAD93E19DDA6EAC3 (void);
// 0x0000054D System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern void TypeConverter_GetConvertToException_mD906D7D39A16CC8ACFC0179208CE2627B73D5C32 (void);
// 0x0000054E System.Void System.ComponentModel.TypeConverter::.ctor()
extern void TypeConverter__ctor_m7F8A006E775CCB83A8ACB042B296E48B0AE501CD (void);
// 0x0000054F System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
extern void TypeConverterAttribute__ctor_mD0795A29B6FD59978CAAC6DAF3AC7EC564C519A5 (void);
// 0x00000550 System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
extern void TypeConverterAttribute__ctor_m52D4E66A914F1A04F2F10A7131A701670225D41C (void);
// 0x00000551 System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
extern void TypeConverterAttribute_get_ConverterTypeName_m883941C77E14FC5B4A3E32DD8F59F11739D5D6D8 (void);
// 0x00000552 System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
extern void TypeConverterAttribute_Equals_mDA74DFC28CC7ABC315407EDD1AAC14531C5F6AC4 (void);
// 0x00000553 System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
extern void TypeConverterAttribute_GetHashCode_m35874D49724DA3F72C6C2575FD595A711A659DAA (void);
// 0x00000554 System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
extern void TypeConverterAttribute__cctor_mB1A775F56A5933A17CF349BD466B0CCE66B1078A (void);
// 0x00000555 System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern void TypeDescriptionProvider__ctor_m9A35B40DE4D4CCB86B72BD3BABF375982DB32912 (void);
// 0x00000556 System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object)
extern void TypeDescriptionProvider_GetCache_m9D7FBAC80ED350BC4C50D5C58FDB8F5C6DCDC2E8 (void);
// 0x00000557 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern void TypeDescriptionProvider_GetExtendedTypeDescriptor_mA6C0C2BCF78F4018FA4C2278CBFD07E2E77E3347 (void);
// 0x00000558 System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type)
extern void TypeDescriptionProvider_GetReflectionType_m5A731257A8DCBE75C4FE588A1CC73EE2FFCA7E16 (void);
// 0x00000559 System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern void TypeDescriptionProvider_GetReflectionType_mEDACDCA9A57ADF6F376DD6847315931630CE538D (void);
// 0x0000055A System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type)
extern void TypeDescriptionProvider_GetTypeDescriptor_m8CC34F54B8A643F99C2F4E4C254D661D3DC212D2 (void);
// 0x0000055B System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Object)
extern void TypeDescriptionProvider_GetTypeDescriptor_m04847083CB9DB8E7BF69CFCD06283A8D817293A0 (void);
// 0x0000055C System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern void TypeDescriptionProvider_GetTypeDescriptor_mE0B51D84608BE9DAB9597220D009C8F03ED7EE39 (void);
// 0x0000055D System.Void System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor::.ctor()
extern void EmptyCustomTypeDescriptor__ctor_m3AF937D2171D0224FC6501A9AFA23F89BAC5B1D0 (void);
// 0x0000055E System.Void System.ComponentModel.TypeDescriptionProviderAttribute::.ctor(System.String)
extern void TypeDescriptionProviderAttribute__ctor_m10489BA811D0D61760F9C90B2D72542A08A3F90A (void);
// 0x0000055F System.String System.ComponentModel.TypeDescriptionProviderAttribute::get_TypeName()
extern void TypeDescriptionProviderAttribute_get_TypeName_m6C47AACE737391F28BD1C0A762AABBECA8DB8F75 (void);
// 0x00000560 System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern void TypeDescriptor_get_ComObjectType_mD9A4F9CDA5863A62DEE85F88DECB3FF37CE42A4F (void);
// 0x00000561 System.Type System.ComponentModel.TypeDescriptor::get_InterfaceType()
extern void TypeDescriptor_get_InterfaceType_m0DB3316CB939FE67643C044BAF39EB4F69D758E6 (void);
// 0x00000562 System.Int32 System.ComponentModel.TypeDescriptor::get_MetadataVersion()
extern void TypeDescriptor_get_MetadataVersion_m70C215D1B15DCBD67B58127EB0E6D7E6F5D020DC (void);
// 0x00000563 System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern void TypeDescriptor_AddProvider_mD81A072B4AB0D7801F9297879CB43071C8740C9A (void);
// 0x00000564 System.Void System.ComponentModel.TypeDescriptor::CheckDefaultProvider(System.Type)
extern void TypeDescriptor_CheckDefaultProvider_m992A2ED0D5F3621C00369DF8CF35D6AFB17D3ADC (void);
// 0x00000565 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern void TypeDescriptor_GetAttributes_m945F6ABA03A5014918ACA5F9B57F1F58B805EC0B (void);
// 0x00000566 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern void TypeDescriptor_GetAttributes_m0325F763D0AA6354E3F7859E15FF7BE3A8D5F3D3 (void);
// 0x00000567 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern void TypeDescriptor_GetAttributes_mA96E001729AC6C2EF5ED8E0E5573BABF67501C44 (void);
// 0x00000568 System.Collections.IDictionary System.ComponentModel.TypeDescriptor::GetCache(System.Object)
extern void TypeDescriptor_GetCache_mC7540D2FBAB562E689ED1BC2399D3F3C31D97145 (void);
// 0x00000569 System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern void TypeDescriptor_GetConverter_m30E075F6ED53FD85B7C1F7F44E58BA20645A68BA (void);
// 0x0000056A System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor::GetDescriptor(System.Type,System.String)
extern void TypeDescriptor_GetDescriptor_m03B8BB2FE0F4EB472FC543B31A37D627CD02D5EB (void);
// 0x0000056B System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor::GetDescriptor(System.Object,System.Boolean)
extern void TypeDescriptor_GetDescriptor_m557DDD4B793F92E5D71B980E264ACCF1C6A2EFB1 (void);
// 0x0000056C System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor::GetExtendedDescriptor(System.Object)
extern void TypeDescriptor_GetExtendedDescriptor_mD3B3C0990D1E6DF8A99C269710B4FC77DAC1BCFE (void);
// 0x0000056D System.String System.ComponentModel.TypeDescriptor::GetExtenderCollisionSuffix(System.ComponentModel.MemberDescriptor)
extern void TypeDescriptor_GetExtenderCollisionSuffix_m686BE0F744E8E5511310EA611B39FF891AEDC784 (void);
// 0x0000056E System.Type System.ComponentModel.TypeDescriptor::GetNodeForBaseType(System.Type)
extern void TypeDescriptor_GetNodeForBaseType_mD4DC672E329294D1CC62ED255A60FEB216151414 (void);
// 0x0000056F System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProviderRecursive(System.Type)
extern void TypeDescriptor_GetProviderRecursive_mFA9FD212A625262784E9B1B05D3B82564B393877 (void);
// 0x00000570 System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern void TypeDescriptor_GetReflectionType_mB28D64FBA294D618334381A77DAE790811611C3D (void);
// 0x00000571 System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Type)
extern void TypeDescriptor_NodeFor_m767FF87E78839CA052D9BA45FC6E18BD28F8E2E2 (void);
// 0x00000572 System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Type,System.Boolean)
extern void TypeDescriptor_NodeFor_m47CC24E4CFA599136DD05F6DD9A72A4B309D0D90 (void);
// 0x00000573 System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Object)
extern void TypeDescriptor_NodeFor_m5CD091DA5BF7D035FA36E6E397A96B2A9610E9D5 (void);
// 0x00000574 System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Object,System.Boolean)
extern void TypeDescriptor_NodeFor_m90ADBC22F629303B34247E6000724298EDDF3E61 (void);
// 0x00000575 System.Collections.ICollection System.ComponentModel.TypeDescriptor::PipelineFilter(System.Int32,System.Collections.ICollection,System.Object,System.Collections.IDictionary)
extern void TypeDescriptor_PipelineFilter_m7522739B5B21B076A5722C659E9B17A404196487 (void);
// 0x00000576 System.Collections.ICollection System.ComponentModel.TypeDescriptor::PipelineInitialize(System.Int32,System.Collections.ICollection,System.Collections.IDictionary)
extern void TypeDescriptor_PipelineInitialize_mE238329E4034835777FC35289A14EA9A1397CF66 (void);
// 0x00000577 System.Collections.ICollection System.ComponentModel.TypeDescriptor::PipelineMerge(System.Int32,System.Collections.ICollection,System.Collections.ICollection,System.Object,System.Collections.IDictionary)
extern void TypeDescriptor_PipelineMerge_m12CD63D0457BCA451AF9635E4E754A1E27122E65 (void);
// 0x00000578 System.Void System.ComponentModel.TypeDescriptor::RaiseRefresh(System.Type)
extern void TypeDescriptor_RaiseRefresh_m75708E2026685B087D03E5383F08E65F1608332C (void);
// 0x00000579 System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern void TypeDescriptor_Refresh_m3EE0C2B17D9683C6C719C590D0D9744D16F58027 (void);
// 0x0000057A System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern void TypeDescriptor_SortDescriptorArray_mF1BF8FDE18108198B6E5CF6B31909A7F544F649C (void);
// 0x0000057B System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern void TypeDescriptor__cctor_m93DDEDF2D6E089FEFA7A29B425C854E1E04E6145 (void);
// 0x0000057C System.Void System.ComponentModel.TypeDescriptor/FilterCacheItem::.ctor(System.ComponentModel.Design.ITypeDescriptorFilterService,System.Collections.ICollection)
extern void FilterCacheItem__ctor_m9398DF7D02FBE4926AFB8D768F6F0936E0929181 (void);
// 0x0000057D System.Boolean System.ComponentModel.TypeDescriptor/FilterCacheItem::IsValid(System.ComponentModel.Design.ITypeDescriptorFilterService)
extern void FilterCacheItem_IsValid_m91C02B95AF49F2BD09314CF2EB67F6090052B8B4 (void);
// 0x0000057E System.Int32 System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Compare(System.Object,System.Object)
extern void MemberDescriptorComparer_Compare_m9C56C6E64A892DB13EEB4B1F551B6F161B4C237E (void);
// 0x0000057F System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.ctor()
extern void MemberDescriptorComparer__ctor_mE0D379E9AA3712B69614E48771226910DE517618 (void);
// 0x00000580 System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.cctor()
extern void MemberDescriptorComparer__cctor_m9E4FF9CCCC93BEE24671FD459069CB7793ED97C6 (void);
// 0x00000581 System.Void System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor,System.ComponentModel.ICustomTypeDescriptor)
extern void MergedTypeDescriptor__ctor_m07BED02593A42C075C4F95B23D208CF1222C12A0 (void);
// 0x00000582 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern void MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m2DD60D9C133AE18F38D7A27189168A2FBF3729FD (void);
// 0x00000583 System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern void MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mFC2AC7E8BEF7680E424A34D335EB4FCC9A6BACB6 (void);
// 0x00000584 System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern void TypeDescriptionNode__ctor_m18D16A33443D7C6C32D09203AE94E5A5DA65BDFF (void);
// 0x00000585 System.Collections.IDictionary System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetCache(System.Object)
extern void TypeDescriptionNode_GetCache_m275E9B8AA100455DA54B9CBD3581B9556C5DE825 (void);
// 0x00000586 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetExtendedTypeDescriptor(System.Object)
extern void TypeDescriptionNode_GetExtendedTypeDescriptor_m014DF481F410A49BBB0B087DD65EA4DBD51E9AF2 (void);
// 0x00000587 System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetReflectionType(System.Type,System.Object)
extern void TypeDescriptionNode_GetReflectionType_m4C80319088CB3DFFEF76A5DB4C862FCDD98BDC92 (void);
// 0x00000588 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetTypeDescriptor(System.Type,System.Object)
extern void TypeDescriptionNode_GetTypeDescriptor_m55BB50B1A0B0542BD4736FE3F7A14A7ABEC94903 (void);
// 0x00000589 System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Object)
extern void DefaultExtendedTypeDescriptor__ctor_mD297D84C0AEF8C2AF0867391BD0FD037D8E6AB86 (void);
// 0x0000058A System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF4C670B634C8C86057E939F3DD5EAA4173DAB1A8 (void);
// 0x0000058B System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mE26BB774C31A0760EC238B30A3BDE0EE202EF1A6 (void);
// 0x0000058C System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Type,System.Object)
extern void DefaultTypeDescriptor__ctor_m8542D50B70E1A86255B2C64908C9397B971BBC90 (void);
// 0x0000058D System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m6EEBB8DB4E72761D9CB03978D149295CFE2B39EC (void);
// 0x0000058E System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mA5D26F3E5D42548F740BD72B1AA9AE1CE89EC6E7 (void);
// 0x0000058F System.Type System.ComponentModel.UInt16Converter::get_TargetType()
extern void UInt16Converter_get_TargetType_m09485223873376B5306CC41EE00DE41C7C9A4D48 (void);
// 0x00000590 System.Object System.ComponentModel.UInt16Converter::FromString(System.String,System.Int32)
extern void UInt16Converter_FromString_m6C68C86307AAFB890294E95FAFEEC5558F898B7B (void);
// 0x00000591 System.Object System.ComponentModel.UInt16Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void UInt16Converter_FromString_m086976C0A5AE966B1BF493EF9215D7CD5FA1E248 (void);
// 0x00000592 System.String System.ComponentModel.UInt16Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void UInt16Converter_ToString_m104A682B05A314790038B0F6C080A2242B813E62 (void);
// 0x00000593 System.Type System.ComponentModel.UInt32Converter::get_TargetType()
extern void UInt32Converter_get_TargetType_mB0970D9A54AF4DBB22763BCF302C1BF96987514D (void);
// 0x00000594 System.Object System.ComponentModel.UInt32Converter::FromString(System.String,System.Int32)
extern void UInt32Converter_FromString_mC2A923816231211450F8DE19A663F73CC32F9C23 (void);
// 0x00000595 System.Object System.ComponentModel.UInt32Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void UInt32Converter_FromString_m3311119AE44125DA0CF3703D93966E7D3B9A66A7 (void);
// 0x00000596 System.String System.ComponentModel.UInt32Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void UInt32Converter_ToString_m19F6F8A0D732BA61405B020CF1D2A1EDF6847AA6 (void);
// 0x00000597 System.Type System.ComponentModel.UInt64Converter::get_TargetType()
extern void UInt64Converter_get_TargetType_mFDC942E31D697EB81B1BC6F2DC0C1984E5B4CDF2 (void);
// 0x00000598 System.Object System.ComponentModel.UInt64Converter::FromString(System.String,System.Int32)
extern void UInt64Converter_FromString_m0F4D6141688C8C778E7B5CF3F38F8F2FDC88308C (void);
// 0x00000599 System.Object System.ComponentModel.UInt64Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void UInt64Converter_FromString_m335C75F6E6840F7BF678CB73845C905C1216671C (void);
// 0x0000059A System.String System.ComponentModel.UInt64Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void UInt64Converter_ToString_mB2E701BBFDC1465555D4049C047FBEB8888E29D5 (void);
// 0x0000059B System.Void System.ComponentModel.Win32Exception::.ctor()
extern void Win32Exception__ctor_mC03E215A1695ED64DDC50F4BE9F59966974DF759 (void);
// 0x0000059C System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern void Win32Exception__ctor_m2BEA755F6AA536ADDDF07D83BD8297F02584F714 (void);
// 0x0000059D System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern void Win32Exception__ctor_m94A043EE26097BBFE0ED22FD4EBEA357F142EFE6 (void);
// 0x0000059E System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception__ctor_mC7ADDE9D2FEE4E17432F63C24EF1D872380094DB (void);
// 0x0000059F System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern void Win32Exception_get_NativeErrorCode_mADB2F3845BEC2405353354CE6B6232741359D857 (void);
// 0x000005A0 System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception_GetObjectData_m7CD0D7A0806E4A9D8E78ADCBC616700379AB79E8 (void);
// 0x000005A1 System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
extern void Win32Exception_GetErrorMessage_m6085687D868718B45289CB6AF6EDCB7F89D7350D (void);
// 0x000005A2 System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
extern void Win32Exception_InitializeErrorMessages_m4FE6F56C1C2CCB3F6468F0F9F5AD6E1B08673438 (void);
// 0x000005A3 System.Void System.ComponentModel.Win32Exception::.cctor()
extern void Win32Exception__cctor_m800CD9D0B3E3253B79A19B6646A7D28B29C3FC52 (void);
// 0x000005A4 System.Boolean System.ComponentModel.BaseNumberConverter::get_AllowHex()
extern void BaseNumberConverter_get_AllowHex_m994DD130AADA77ADA7E3AF7DF18674E617417CED (void);
// 0x000005A5 System.Type System.ComponentModel.BaseNumberConverter::get_TargetType()
// 0x000005A6 System.Object System.ComponentModel.BaseNumberConverter::FromString(System.String,System.Int32)
// 0x000005A7 System.Object System.ComponentModel.BaseNumberConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
// 0x000005A8 System.Exception System.ComponentModel.BaseNumberConverter::FromStringError(System.String,System.Exception)
extern void BaseNumberConverter_FromStringError_mF63BDCFB96540E83A867B6F206D2C453B9BB0A42 (void);
// 0x000005A9 System.String System.ComponentModel.BaseNumberConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
// 0x000005AA System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void BaseNumberConverter_CanConvertFrom_mCAE77B4E99810F0C9B06FCB2F4F7036C733E3016 (void);
// 0x000005AB System.Object System.ComponentModel.BaseNumberConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void BaseNumberConverter_ConvertFrom_mA629768C8117947BD168EACC84D02DBA1FCA51E6 (void);
// 0x000005AC System.Object System.ComponentModel.BaseNumberConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void BaseNumberConverter_ConvertTo_m672375F1E58DB241E693E5F45A7FFD38C3070B6A (void);
// 0x000005AD System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void BaseNumberConverter_CanConvertTo_mBAA70FD6742A616F9E0F9E42908EF6C70C3214B7 (void);
// 0x000005AE System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern void BaseNumberConverter__ctor_mD78E1C7E1F8A977BC7AD33DB0C1E5E32C60E8E83 (void);
// 0x000005AF System.Void System.ComponentModel.WeakHashtable::.ctor()
extern void WeakHashtable__ctor_mE6517A855F67EE9584AF60DB7BC3AF5B2D58C249 (void);
// 0x000005B0 System.Void System.ComponentModel.WeakHashtable::Clear()
extern void WeakHashtable_Clear_m0559384B1ED014495416A4CD76EE26A8CCBD9531 (void);
// 0x000005B1 System.Void System.ComponentModel.WeakHashtable::Remove(System.Object)
extern void WeakHashtable_Remove_m6780AE4C0C4B072B9857C7A11ABC6AAF4805F9D3 (void);
// 0x000005B2 System.Void System.ComponentModel.WeakHashtable::.cctor()
extern void WeakHashtable__cctor_m7EECB04C288887CC895D8ED91A837C7822A299CE (void);
// 0x000005B3 System.Boolean System.ComponentModel.WeakHashtable/WeakKeyComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern void WeakKeyComparer_System_Collections_IEqualityComparer_Equals_mC3D733EAC828C7C1C1B8F0890B0CD86F67F3668C (void);
// 0x000005B4 System.Int32 System.ComponentModel.WeakHashtable/WeakKeyComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern void WeakKeyComparer_System_Collections_IEqualityComparer_GetHashCode_m8A2DBF9E2E7D75717DF22C7CF88550E0502E2F98 (void);
// 0x000005B5 System.Void System.ComponentModel.WeakHashtable/WeakKeyComparer::.ctor()
extern void WeakKeyComparer__ctor_m084512BBA20EA3050E018C920AF05AA43F1EC704 (void);
// 0x000005B6 System.ComponentModel.IComponent System.ComponentModel.Design.IDesignerHost::get_RootComponent()
// 0x000005B7 System.Object System.ComponentModel.Design.IDictionaryService::GetValue(System.Object)
// 0x000005B8 System.Void System.ComponentModel.Design.IDictionaryService::SetValue(System.Object,System.Object)
// 0x000005B9 System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterAttributes(System.ComponentModel.IComponent,System.Collections.IDictionary)
// 0x000005BA System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterEvents(System.ComponentModel.IComponent,System.Collections.IDictionary)
// 0x000005BB System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterProperties(System.ComponentModel.IComponent,System.Collections.IDictionary)
// 0x000005BC System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern void InstanceDescriptor__ctor_m90DA8CABB01052EA5C5022E14FE50533254C71DD (void);
// 0x000005BD System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern void InstanceDescriptor__ctor_m47D0A6167384EA496F0734E951DECD7EE576CAC4 (void);
// 0x000005BE System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern void InstanceDescriptor_Invoke_mFA1E52E0F4971ABC4432D30F7CF80304272355C0 (void);
// 0x000005BF System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
extern void RootDesignerSerializerAttribute__ctor_m0F3B236B6A2362EEF20773BC3205FE7DA72AD6AE (void);
// 0x000005C0 System.Object System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::get_TypeId()
extern void RootDesignerSerializerAttribute_get_TypeId_mC34D430C36628B810BB11754EAD222F65805D2A7 (void);
// 0x000005C1 System.Void System.Security.Authentication.AuthenticationException::.ctor()
extern void AuthenticationException__ctor_m28782FCB7D9F3773F20A9F422CB2843FB70D723A (void);
// 0x000005C2 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String,System.Exception)
extern void AuthenticationException__ctor_m431AB34EFB028337941758B192DF4D045BA93005 (void);
// 0x000005C3 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AuthenticationException__ctor_m547DE1104C83024255A4F61AAAE6C6049383C7E6 (void);
// 0x000005C4 System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern void Oid__ctor_m45F49EB1ABFD4F3EB0FC9729C76FF83995752743 (void);
// 0x000005C5 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
extern void Oid__ctor_m67437A59D4E75ABF6E40D503F57F81199546E5EC (void);
// 0x000005C6 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern void Oid__ctor_m0656E1FC1A7E7BBF694A568DDDF8BE4AFA544985 (void);
// 0x000005C7 System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern void Oid__ctor_mA7AFE14DF30B47447BFFC9E41B37B8DB46C9D079 (void);
// 0x000005C8 System.String System.Security.Cryptography.Oid::get_Value()
extern void Oid_get_Value_mFE18BDFF095DD5A6643F4FEC3E57846716F37F05 (void);
// 0x000005C9 System.Void System.Security.Cryptography.Oid::set_Value(System.String)
extern void Oid_set_Value_m304CEF248379566701402100FA015EAC640C033F (void);
// 0x000005CA System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern void Oid_get_FriendlyName_mEA531D74DAD8FD43948097C418DA23F66399B694 (void);
// 0x000005CB System.Void System.Security.Cryptography.OidCollection::.ctor()
extern void OidCollection__ctor_m99B93BB5B35BF7A395CFB7F8B155DFA8DD734800 (void);
// 0x000005CC System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern void OidCollection_Add_m1FF686421A22A86F8296259D99DA38E02B8BBF5C (void);
// 0x000005CD System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern void OidCollection_get_Item_mB37F923F4714BFE0DF44E8EE4A1A5EA1F3EBB1D9 (void);
// 0x000005CE System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern void OidCollection_get_Count_m6AC0709CDD68451F4CAC942CE94A5A97F3C294B2 (void);
// 0x000005CF System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OidCollection_System_Collections_IEnumerable_GetEnumerator_m3FD3A96DFF93BD88A3B28E35A4DEF57AF25ECB30 (void);
// 0x000005D0 System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OidCollection_System_Collections_ICollection_CopyTo_mE508CB1FD9E56CCFE5A4BDD5251D815BF78AC5A9 (void);
// 0x000005D1 System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern void OidCollection_get_SyncRoot_m6C13949F67338F684C29DD162C8228986DAB6850 (void);
// 0x000005D2 System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern void OidEnumerator__ctor_mCA4FBC8408E2B04FD0A524E256E284E8A44E0797 (void);
// 0x000005D3 System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern void OidEnumerator_System_Collections_IEnumerator_get_Current_mF11B1F886842EA79EDB215BD5106D0C4C65EBE53 (void);
// 0x000005D4 System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern void OidEnumerator_MoveNext_m073D94D5D3254D53DF53429ACAD0AA9BD682221D (void);
// 0x000005D5 System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern void OidEnumerator_Reset_m5006C3B1283711E2BDDEA6C25FDF93BBB900195E (void);
// 0x000005D6 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoNameFromKey(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoNameFromKey_mA2FD2F391E133E586BC8B827DD916613B590E698 (void);
// 0x000005D7 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoKeyFromName(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoKeyFromName_m7809CD491D913D58FA1B996B835A0A91C413E9DB (void);
// 0x000005D8 System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern void AsnEncodedData__ctor_mED24E9D1F11942741819652302C0531D18C39BE6 (void);
// 0x000005D9 System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern void AsnEncodedData__ctor_m793EED53B4B8D49D92EE7CEED6B46B16A421D761 (void);
// 0x000005DA System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern void AsnEncodedData_set_Oid_m91E38503AAFD8E6FD98970D94FD43E7A738242A6 (void);
// 0x000005DB System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern void AsnEncodedData_get_RawData_mB9F8281A96011161C67EB3A9208E26C423B187EC (void);
// 0x000005DC System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern void AsnEncodedData_set_RawData_mD7FE2383373A6AF578A4983999D677B58BD6B4EC (void);
// 0x000005DD System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void AsnEncodedData_CopyFrom_m3937C7ACC425960B8E48B7D2EB50E9417A7CD4B7 (void);
// 0x000005DE System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern void AsnEncodedData_ToString_m502785F2F8B4D1EBDF5CEE612FD8D0C2044390D7 (void);
// 0x000005DF System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern void AsnEncodedData_Default_mEEA94BA253ED1B8A719466A8152A5333E0E3FF07 (void);
// 0x000005E0 System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern void AsnEncodedData_BasicConstraintsExtension_m64D690A2456E16AF39F6F0784CE74BC9533BB182 (void);
// 0x000005E1 System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern void AsnEncodedData_EnhancedKeyUsageExtension_mE04DC17ACCBF3850AFBA454D9937EC4713CC5058 (void);
// 0x000005E2 System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern void AsnEncodedData_KeyUsageExtension_m4EE74EA5C4A3C0B72C50DEB22A537812997AF590 (void);
// 0x000005E3 System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern void AsnEncodedData_SubjectKeyIdentifierExtension_m261D32E7AE226499BA8AD3FBE24FC0E71C9DEB76 (void);
// 0x000005E4 System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern void AsnEncodedData_SubjectAltName_m94FE55170A872B3174D5C495A27AD09F3BACAF49 (void);
// 0x000005E5 System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern void AsnEncodedData_NetscapeCertType_m9191830C380BEC39DBE09065B2A4134193EA92D4 (void);
// 0x000005E6 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfo_mE43E0522988511319B8B9F69AF7D0A10B4AE8FA2 (void);
// 0x000005E7 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfoWithFallback(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfoWithFallback_m98443176879ABC2054619D4AA491FE086D406950 (void);
// 0x000005E8 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern void PublicKey__ctor_mE8D32598F92B3941B4DC6AC367C7FFD75C7FAE20 (void);
// 0x000005E9 System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern void PublicKey_get_EncodedKeyValue_m4BD0975B491E89FFE2A75C1ACDEB1DCCAF586D4F (void);
// 0x000005EA System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern void PublicKey_get_EncodedParameters_m629FF8D7E4EEDED96BC455B7B953DC5A46D26F4F (void);
// 0x000005EB System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern void PublicKey_get_Key_m9690CE02A29978F4F97623CB72361EC3E69935F7 (void);
// 0x000005EC System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern void PublicKey_get_Oid_mB0AD65FDF84716726D5C7756E5B50CEAD1E4C2AE (void);
// 0x000005ED System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern void PublicKey_GetUnsignedBigInteger_mA92B0B30FA75335EFEFE6B5E8580543C387C3785 (void);
// 0x000005EE System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern void PublicKey_DecodeDSA_mFE5301F7BC0E4ED8DF0EBCCAA0D1DA48972BC901 (void);
// 0x000005EF System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern void PublicKey_DecodeRSA_m39565B7B6C8DDB7666D5C3ABF7951DDC93D35965 (void);
// 0x000005F0 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
extern void PublicKey__cctor_m9F739A93AE91AE86889835AAE256410F4DB808CC (void);
// 0x000005F1 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern void X509BasicConstraintsExtension__ctor_m1D3F45762EB686500D2195886AD26FF84E5F4B3C (void);
// 0x000005F2 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_mEED7AECEE911DF6CE692301F8F6F6B197DC05729 (void);
// 0x000005F3 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_mD08FE3682F4B2EA23450C6609360F45656495780 (void);
// 0x000005F4 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern void X509BasicConstraintsExtension_get_CertificateAuthority_m282E5D9E7640A06AF2CE06A0FA374571F25BAB6F (void);
// 0x000005F5 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern void X509BasicConstraintsExtension_get_HasPathLengthConstraint_m463A8B4DF4BEB46A9353309AA5EF3EAA2F7A4D42 (void);
// 0x000005F6 System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern void X509BasicConstraintsExtension_get_PathLengthConstraint_m93EF2B2BA6D6AD72DE59D98EB0E40DDD2AB3B49F (void);
// 0x000005F7 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509BasicConstraintsExtension_CopyFrom_mE64F232FB7DF702DCDB6692537B8F1010AA316DC (void);
// 0x000005F8 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern void X509BasicConstraintsExtension_Decode_m40A688DD3A933B24A3E9EFE505299F70AFF32E81 (void);
// 0x000005F9 System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern void X509BasicConstraintsExtension_Encode_m04068558E7AF843C57A8BA9C39E251B7B37A1CDF (void);
// 0x000005FA System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern void X509BasicConstraintsExtension_ToString_m75957B2B18A84645897676F0DAC473F022848336 (void);
// 0x000005FB System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Certificate2::get_Impl()
extern void X509Certificate2_get_Impl_m94A4BA63853808B2FAC8DD5E50BF4B2FA7C223F3 (void);
// 0x000005FC System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor()
extern void X509Certificate2__ctor_m97D8E28308096BB3A2500555747B6483F27859FD (void);
// 0x000005FD System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.String)
extern void X509Certificate2__ctor_m9AD075769E9AA57F2055D40879F8DC84FEFEDA70 (void);
// 0x000005FE System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void X509Certificate2__ctor_m50D7739EB358531A13410F4A29353D0418F9EE51 (void);
// 0x000005FF System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern void X509Certificate2_get_NotAfter_mD2C055B86883353CFB0E8C1D6CE35D785756C624 (void);
// 0x00000600 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern void X509Certificate2_get_NotBefore_mC074732D5C2E74642F1BA1C303B060A381A4A777 (void);
// 0x00000601 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern void X509Certificate2_get_PrivateKey_m91743B42723CF3480CAD698F086CAE1DB7BBD266 (void);
// 0x00000602 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern void X509Certificate2_get_PublicKey_m325BCDA2DE132D5B7B2093BCED2942ED657D89E3 (void);
// 0x00000603 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern void X509Certificate2_get_SerialNumber_m19595DBE6522106CAAAFA680EF4CE67698A8F51D (void);
// 0x00000604 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern void X509Certificate2_get_SignatureAlgorithm_mF9BED26F8117E76F230A87F79FD4C19242FAE662 (void);
// 0x00000605 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern void X509Certificate2_get_Thumbprint_m4C3269CB216BC275CFEA77A808A787B5773E97AA (void);
// 0x00000606 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern void X509Certificate2_get_Version_m21075DDC00E0FA0C7A9FAA5D561973F720B7BDE3 (void);
// 0x00000607 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_m5D2E42024D98335D958C3875D188C8F8127299BA (void);
// 0x00000608 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_m8687BF7214331468AE004EFE3C65E73B0057F0AC (void);
// 0x00000609 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern void X509Certificate2_Reset_mEE19ADA2C022461B3DB1F39100997A6F34FFB1D3 (void);
// 0x0000060A System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern void X509Certificate2_ToString_mFEEFBB4A2B5779A9D16F9E2536F1D94F423CA3A8 (void);
// 0x0000060B System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern void X509Certificate2_ToString_m2613DF600F5A88EC6836930FD45D6063251C9391 (void);
// 0x0000060C System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2_AppendBuffer_mACE3DD61A1C5C88DEF25BC5C4562B5790ED97312 (void);
// 0x0000060D System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern void X509Certificate2__cctor_mABA66D529C24C35091DD9560BC7314F0F3AF979D (void);
// 0x0000060E System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.cctor()
extern void X509Certificate2Collection__cctor_m8F5A775DC6302B95D1CA30B5C576AD4907E94516 (void);
// 0x0000060F System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PrivateKey()
// 0x00000610 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PublicKey()
// 0x00000611 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_SignatureAlgorithm()
// 0x00000612 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_Version()
// 0x00000613 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_IntermediateCertificates()
// 0x00000614 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
// 0x00000615 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Reset()
// 0x00000616 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
extern void X509Certificate2Impl__ctor_m121B40B8937DAEE3D81BA7577555E09194FF11A2 (void);
// 0x00000617 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IsValid()
extern void X509Certificate2ImplMono_get_IsValid_m4C590E5F7A23A9F1DD5594A7D88F51474646817C (void);
// 0x00000618 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
extern void X509Certificate2ImplMono__ctor_m9DE01D05F0A540B906D6F826B51B64FD7FC9E028 (void);
// 0x00000619 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
extern void X509Certificate2ImplMono__ctor_mEBE15206EC5939F6722168220CB8B110FFD915D2 (void);
// 0x0000061A System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Clone()
extern void X509Certificate2ImplMono_Clone_m1870DF0CF85E284FCA158FD11238F23796354498 (void);
// 0x0000061B System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetIssuerName(System.Boolean)
extern void X509Certificate2ImplMono_GetIssuerName_mC61A5CC300E550C2C4C12733D6EE0C5806723233 (void);
// 0x0000061C System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSubjectName(System.Boolean)
extern void X509Certificate2ImplMono_GetSubjectName_mCE8064CFCFD15F29ED869C1F552BDA1911944728 (void);
// 0x0000061D System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetRawCertData()
extern void X509Certificate2ImplMono_GetRawCertData_mF60B75105FDED073333B0A45D417DC84970CA808 (void);
// 0x0000061E System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetCertHash(System.Boolean)
extern void X509Certificate2ImplMono_GetCertHash_m552986EA33DB6FD437358D422E14B5A3BA69092A (void);
// 0x0000061F System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidFrom()
extern void X509Certificate2ImplMono_GetValidFrom_m9E27BEDF0995B987B5BBE2074C5626A6092C6AB8 (void);
// 0x00000620 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidUntil()
extern void X509Certificate2ImplMono_GetValidUntil_m221B50B0D2216CD5CCF290C4E37ADECFC723381C (void);
// 0x00000621 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean&)
extern void X509Certificate2ImplMono_Equals_m072C86FBDE9AE37E0AF69E4DA7AD04A8412F7232 (void);
// 0x00000622 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSerialNumber()
extern void X509Certificate2ImplMono_GetSerialNumber_m0F23B3F377F4801057A57949E977918166A6DFC3 (void);
// 0x00000623 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor()
extern void X509Certificate2ImplMono__ctor_m6494CD178AF6E96CE4046E4CC1AB68236CCE7399 (void);
// 0x00000624 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PrivateKey()
extern void X509Certificate2ImplMono_get_PrivateKey_m0F1E05FC97141DEDB3230B4B4B3617DAEBFDCD2C (void);
// 0x00000625 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PublicKey()
extern void X509Certificate2ImplMono_get_PublicKey_m9FEE1E367B63542EEA2A517C7A4618C163C4B2D7 (void);
// 0x00000626 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_SignatureAlgorithm()
extern void X509Certificate2ImplMono_get_SignatureAlgorithm_m158A12F7972A7104172BBC8F5FE31186B2758D3C (void);
// 0x00000627 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Version()
extern void X509Certificate2ImplMono_get_Version_mAF4475ABA5E17ABB6FD9EE9A6BDCB8EA269836CC (void);
// 0x00000628 Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
extern void X509Certificate2ImplMono_ImportPkcs12_m7C9D1CD7EB5D1CBD27E20EB92D494C65BDA240D0 (void);
// 0x00000629 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2ImplMono_Import_mB7A89EF3758EDF0BA2BA0AF78AE2D4BB61D5E0FF (void);
// 0x0000062A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Reset()
extern void X509Certificate2ImplMono_Reset_m91B0462356708973478FC82A9D12EECF56FD4FAE (void);
// 0x0000062B System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString()
extern void X509Certificate2ImplMono_ToString_mB5CE336C20BF230C1B0153BF1D2612FD22E0347F (void);
// 0x0000062C System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString(System.Boolean)
extern void X509Certificate2ImplMono_ToString_m88CDD1F5BDC5CDB329A872B58AF69CDB10799321 (void);
// 0x0000062D System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2ImplMono_AppendBuffer_mDB49D80453E139498ABF2BC30ED526A61D2F4F71 (void);
// 0x0000062E System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IntermediateCertificates()
extern void X509Certificate2ImplMono_get_IntermediateCertificates_m053FE037CA3747C75B056C11AA56DB1F2EE36809 (void);
// 0x0000062F System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.cctor()
extern void X509Certificate2ImplMono__cctor_m8ABA0491BD741AF08233E6B3B2B4F61420FF4C65 (void);
// 0x00000630 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern void X509CertificateCollection__ctor_m3CEEDA1CDA93234E6E78DFB6563738B050AFF6CA (void);
// 0x00000631 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection__ctor_m24BAA500237577256DCA1BD814ED88D163E702E3 (void);
// 0x00000632 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern void X509CertificateCollection_get_Item_m799058377874ABF0EEE8AD63AE89B62B930A1E57 (void);
// 0x00000633 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void X509CertificateCollection_Add_mDF43F609EAE240711FCE880E66EE814178AB2E66 (void);
// 0x00000634 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection_AddRange_m420F91827C84ED68AB81855E07BBF0CA7D150289 (void);
// 0x00000635 System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern void X509CertificateCollection_GetEnumerator_mD28E40E9104E833480FA012B1CE905AC08A7AD4F (void);
// 0x00000636 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern void X509CertificateCollection_GetHashCode_m383BD6816EEFE8FA5CA81CA4279B5334231EF84D (void);
// 0x00000637 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateEnumerator__ctor_m81F0C80052FB25D722E5E66D5121D9F559A2EEB4 (void);
// 0x00000638 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern void X509CertificateEnumerator_get_Current_mDA87DA5B1CD027E452E22112ED43423F95573BE0 (void);
// 0x00000639 System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m92ACFD522418E3D722E6C723FA93FBFC7A1A3EBC (void);
// 0x0000063A System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m99B025AB34B4F5CFAD7836A73D01FBE1AEA019F4 (void);
// 0x0000063B System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m7EC63F5898E3A9881E73EB6205238C31ED4CC323 (void);
// 0x0000063C System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern void X509CertificateEnumerator_MoveNext_m472F420F968A52D970486D21BFFABCCE5329F714 (void);
// 0x0000063D System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
extern void X509CertificateImplCollection__ctor_mC714F3565563EC51068E2601AE9B9F34E2850876 (void);
// 0x0000063E System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
extern void X509CertificateImplCollection__ctor_mBD6BE41E55AE1A9FF1E6B528638D002209F7BFB0 (void);
// 0x0000063F System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Count()
extern void X509CertificateImplCollection_get_Count_m1503CBCEDE4650173097C408898F1806582CC77E (void);
// 0x00000640 System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Item(System.Int32)
extern void X509CertificateImplCollection_get_Item_m24CA14D68946B6E0006B162BA284EB51F826F276 (void);
// 0x00000641 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
extern void X509CertificateImplCollection_Add_m3A1312DA419D2777C0A5F37ADA482A40C3256BE6 (void);
// 0x00000642 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
extern void X509CertificateImplCollection_Clone_mFA9129A5042E00B9068B45572B98E83EF3EF7368 (void);
// 0x00000643 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose()
extern void X509CertificateImplCollection_Dispose_mF63BF196D21676FD5055763520ABC93F56A4449F (void);
// 0x00000644 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean)
extern void X509CertificateImplCollection_Dispose_m7C6F7B2BB470BE090CCA19E50C4A6E9004441D67 (void);
// 0x00000645 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Finalize()
extern void X509CertificateImplCollection_Finalize_mAFC19642C1398BE1591E4628C10179D4D676ED99 (void);
// 0x00000646 System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::get_Impl()
extern void X509Chain_get_Impl_mC8D8FB1BED19A1E40D1DAA7561448ADFA094B740 (void);
// 0x00000647 System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern void X509Chain__ctor_mC6F6E3F01D21638D909E13D151923EB4BF592CAB (void);
// 0x00000648 System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern void X509Chain__ctor_m8273B96D3DA26CDF61C71723A980E09214D1DF36 (void);
// 0x00000649 System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509Chain_set_ChainPolicy_mFFC95743026B78C7B6DA33B51CEBD81FA2215EDD (void);
// 0x0000064A System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
extern void X509Chain_Dispose_m4CC4E701CE9CA80CC1C3787E84D955D6B7632A2E (void);
// 0x0000064B System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
extern void X509Chain_Dispose_m0233872244BD2AA33E6C4D2AE572FFB991909FE9 (void);
// 0x0000064C System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
extern void X509Chain_Finalize_mC31E8C29EA7A66E5B4D2D41C1CACF7AF5BB94AD3 (void);
// 0x0000064D System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern void X509ChainElementCollection__ctor_m035B6BC8E21811A1536A60FFA9BAB9A4159323E3 (void);
// 0x0000064E System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern void X509ChainElementCollection_get_Count_m93E1B437A465A5DC0D48F0184EF55370D0E29E2F (void);
// 0x0000064F System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern void X509ChainElementCollection_get_SyncRoot_m376A94E55300F3C9CC2A37C50774E04FFE4F7776 (void);
// 0x00000650 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void X509ChainElementCollection_System_Collections_ICollection_CopyTo_mFB0649BFDEA056BF980F17B68DE6B66DF436E3D8 (void);
// 0x00000651 System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern void X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_mA687F2811DD1F678D629FC166F4288DD340D02F9 (void);
// 0x00000652 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern void X509ChainElementEnumerator__ctor_mC91FB54A5BD2C0B0E972FBCA193C5A453FC6957A (void);
// 0x00000653 System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mC3EC8EDFD95897AD140B4F680905E65D8B04B49C (void);
// 0x00000654 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern void X509ChainElementEnumerator_MoveNext_mF90FBF977D510F6FCF47D5B8CB34254C2822A775 (void);
// 0x00000655 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern void X509ChainElementEnumerator_Reset_m1D149AB7FF36C6200FB205408D5E856FCE624CCA (void);
// 0x00000656 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid()
// 0x00000657 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
// 0x00000658 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
extern void X509ChainImpl_Dispose_m0018CE8D4317FCAEEA5465425BF5BB5A4A728CBA (void);
// 0x00000659 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
extern void X509ChainImpl_Dispose_m0F4B69EE7F402C78C833599FB0F4BEC101CB328B (void);
// 0x0000065A System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
extern void X509ChainImpl_Finalize_mD3777623D36204B695026890DAAC789BE8273724 (void);
// 0x0000065B System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
extern void X509ChainImpl__ctor_m2DC75C34EFF93D4A1DEF14F168489613A557C962 (void);
// 0x0000065C System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
extern void X509ChainImplMono__ctor_m9EEB55A0D2F4EC7D21C5D8FB470A8B9B9094A935 (void);
// 0x0000065D System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_IsValid()
extern void X509ChainImplMono_get_IsValid_m782E5277F3BEF121956B1C90D56FA275879BD706 (void);
// 0x0000065E System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509ChainImplMono_set_ChainPolicy_m16F6430F9445BF75D7965A0ED22F8E17E8A4DDF2 (void);
// 0x0000065F System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.cctor()
extern void X509ChainImplMono__cctor_m95136BE1101C06B64816562118FA9E3502406EB2 (void);
// 0x00000660 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern void X509ChainPolicy__ctor_m68882C53D2D8D22007332CCA165F650078751ED4 (void);
// 0x00000661 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509ChainPolicy__ctor_m53AB51FBA21115B866EB0AB6AEE039B6167F6A4D (void);
// 0x00000662 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern void X509ChainPolicy_Reset_m651C65C1321FEFE9E3EDFC1BE2706AEFE2C612DA (void);
// 0x00000663 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509EnhancedKeyUsageExtension__ctor_mC91E46E79086AAFCD611FB3A223797D20BA9C1C2 (void);
// 0x00000664 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509EnhancedKeyUsageExtension_CopyFrom_mC206A056C8C59401AA01F8C935DDE27D7E34D96A (void);
// 0x00000665 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern void X509EnhancedKeyUsageExtension_Decode_m1865B86FE190237641C00804A058BF56F125183D (void);
// 0x00000666 System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern void X509EnhancedKeyUsageExtension_ToString_m99085514587961F4AB1CA3FB82E5223801475818 (void);
// 0x00000667 System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern void X509Extension__ctor_m75C6A788965E9C797F3D47DEFEC366EC2F69F384 (void);
// 0x00000668 System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern void X509Extension_get_Critical_m8F4D4C2F0ECBE5CB4C9998CE3E56D5040E2EEBE2 (void);
// 0x00000669 System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern void X509Extension_set_Critical_mA2B424FF17DE53E01E586015DD1C742773B060B4 (void);
// 0x0000066A System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509Extension_CopyFrom_m03B3EAD99E076090F01D26FF483E827397903A02 (void);
// 0x0000066B System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern void X509Extension_FormatUnkownData_mE5BAB7DB56CE215EB704A7E4E6866EBECA18F90A (void);
// 0x0000066C System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.cctor()
extern void X509ExtensionCollection__cctor_m6411CBA0D4CBA290257D88C740C5FD7E40B209C1 (void);
// 0x0000066D System.Void System.Security.Cryptography.X509Certificates.X509Helper2::Initialize()
extern void X509Helper2_Initialize_m6FA880503C9B3B72009F718503C6B0A0BF301004 (void);
// 0x0000066E System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl)
extern void X509Helper2_ThrowIfContextInvalid_mF76EFD9C0DE50B993ABBEDFCFCF4A235435E521E (void);
// 0x0000066F System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,System.Boolean)
extern void X509Helper2_Import_mF1D23CC497CC19E02E74727315D59A28714FCA92 (void);
// 0x00000670 System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean)
extern void X509Helper2_Import_m3DF644063B9FF160B750E5CD056FE06B1AEEDF8C (void);
// 0x00000671 System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
extern void X509Helper2_CreateChainImpl_m5A5909ADD8809F95E64FC576BB29EF5B5F878D24 (void);
// 0x00000672 System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_IsValid_mE1C295645E14225C9013A23339E52201C05419F7 (void);
// 0x00000673 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_ThrowIfContextInvalid_m2CE36D57CDF7DCD4EDD5586EF5D526386B009DB5 (void);
// 0x00000674 System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
extern void X509Helper2_GetInvalidChainContextException_m6435C6B754A3A3E6A69DCF16C9F962E0205323AC (void);
// 0x00000675 System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::Import(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void MyNativeHelper_Import_m447532D56EE4A4E2FD5B61528D0E5DCABF7CF6B0 (void);
// 0x00000676 System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
extern void MyNativeHelper__ctor_m3AF762F0DB59E0F744C69BB9306F39DF6AAE7516 (void);
// 0x00000677 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern void X509KeyUsageExtension__ctor_mCCDDE2A55EF78832C8117C680FB264CE91893A99 (void);
// 0x00000678 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509KeyUsageExtension__ctor_mA9DDAD17EA38ABB83CD6CC9A353A0667A9EAC018 (void);
// 0x00000679 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern void X509KeyUsageExtension__ctor_mBC544E9444992C7883638DB0B4607945F33E7426 (void);
// 0x0000067A System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern void X509KeyUsageExtension_get_KeyUsages_m9544DC0FAAD02C53D6C649E1831176CB54EFE505 (void);
// 0x0000067B System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509KeyUsageExtension_CopyFrom_m8DA1FA691943CBD4B94E45096E83FC5EA9EEEA3F (void);
// 0x0000067C System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern void X509KeyUsageExtension_GetValidFlags_m7946BD756F14B17D707EE12E7D82878531D115EB (void);
// 0x0000067D System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern void X509KeyUsageExtension_Decode_mDE97A425A199661D89FE252A75C8644D4280F1B2 (void);
// 0x0000067E System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern void X509KeyUsageExtension_Encode_mBBF95E13B1FE1A0507FD692F770D6E98A68E3360 (void);
// 0x0000067F System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern void X509KeyUsageExtension_ToString_m4455C1B31C62530B930CFADE55DC0E77C60C7EFC (void);
// 0x00000680 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern void X509SubjectKeyIdentifierExtension__ctor_mD586705C293A9C27B5B57BF9CF1D8EAD84864B29 (void);
// 0x00000681 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m45218EE7D32231FA6C44A40FEC2E5052162012D6 (void);
// 0x00000682 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m182458124147FFEE402584E6415C2EA407B59C5B (void);
// 0x00000683 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m95DD08883D5E284C15820274737324063C4E4432 (void);
// 0x00000684 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m98571FC543622A4BD3EA7788BB132348D9E0A3E3 (void);
// 0x00000685 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_mF692F46CE97CB60AF86C1A74E709E8276B7D9AB1 (void);
// 0x00000686 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern void X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m3480A14D8377B6C2D220F99D37AB8B13BEFE76FF (void);
// 0x00000687 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509SubjectKeyIdentifierExtension_CopyFrom_m45E7EB4E976E4759046077C79FBC4A820C9A95EC (void);
// 0x00000688 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChar_m7BDBE176CD85DCA3193FECF78D6CF15E349121BC (void);
// 0x00000689 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChars_mB2D3EBC7E627D44254A82E5628A2079C1DB24C38 (void);
// 0x0000068A System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern void X509SubjectKeyIdentifierExtension_FromHex_m654E8BB1D2F9D8C878EF854D7933C6EA825F272B (void);
// 0x0000068B System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern void X509SubjectKeyIdentifierExtension_Decode_m6EB136D7525F3DFB9FA93F8B3653D2F6FA3B72D1 (void);
// 0x0000068C System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern void X509SubjectKeyIdentifierExtension_Encode_m11C84A3DCE621526C1FC282E214001D70937D6BD (void);
// 0x0000068D System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern void X509SubjectKeyIdentifierExtension_ToString_mB22086D5277B22093240BB9841D32D9008D26AFA (void);
// 0x0000068E System.Void System.IO.DefaultWatcherData::.ctor()
extern void DefaultWatcherData__ctor_m1BD7AB37DAF4B7B945AEC94F6822188F6A1D2142 (void);
// 0x0000068F System.Void System.IO.FileData::.ctor()
extern void FileData__ctor_m83656116EFD7E87515DAA656496385C9D5645B24 (void);
// 0x00000690 System.Void System.IO.DefaultWatcher::.ctor()
extern void DefaultWatcher__ctor_mF273E25E56807A821BADA660C9FCF74542CF72BD (void);
// 0x00000691 System.Boolean System.IO.DefaultWatcher::GetInstance(System.IO.IFileWatcher&)
extern void DefaultWatcher_GetInstance_m7F959204FEA11DEEF41BDDFBA00D50F33EDEEE46 (void);
// 0x00000692 System.Void System.IO.DefaultWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern void DefaultWatcher_StartDispatching_mB8C15D154DB7BF7A3B9C34873EE5C584DD5EFA3A (void);
// 0x00000693 System.Void System.IO.DefaultWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern void DefaultWatcher_StopDispatching_mD71BB52C142FD3EEB95CC9814322C1EBD21C7408 (void);
// 0x00000694 System.Void System.IO.DefaultWatcher::Monitor()
extern void DefaultWatcher_Monitor_mEE81EBFB5AE83AED48A36D1AFB199C2D4818E135 (void);
// 0x00000695 System.Boolean System.IO.DefaultWatcher::UpdateDataAndDispatch(System.IO.DefaultWatcherData,System.Boolean)
extern void DefaultWatcher_UpdateDataAndDispatch_m8117225264E165ACD45A067D8C20ADF1BBA46074 (void);
// 0x00000696 System.Void System.IO.DefaultWatcher::DispatchEvents(System.IO.FileSystemWatcher,System.IO.FileAction,System.String)
extern void DefaultWatcher_DispatchEvents_m58C25A8D045EF8820321B73A1CAF4405FE5B42D6 (void);
// 0x00000697 System.Void System.IO.DefaultWatcher::DoFiles(System.IO.DefaultWatcherData,System.String,System.Boolean)
extern void DefaultWatcher_DoFiles_mD9DB69F1C88561E83B7A68624A7845D6A5385AC4 (void);
// 0x00000698 System.Void System.IO.DefaultWatcher::IterateAndModifyFilesData(System.IO.DefaultWatcherData,System.String,System.Boolean,System.String[])
extern void DefaultWatcher_IterateAndModifyFilesData_m1F44A4E1D7DD8FAD30FDA8EE9AE5FEC8ED9E2E77 (void);
// 0x00000699 System.IO.FileData System.IO.DefaultWatcher::CreateFileData(System.String,System.String)
extern void DefaultWatcher_CreateFileData_m4A3D4F2143DCA2BB7B50C4DC5DB4620E3D22558E (void);
// 0x0000069A System.Void System.IO.DefaultWatcher::.cctor()
extern void DefaultWatcher__cctor_m5E5DC3DB0AAD27DCE89141321EEBE5C91E0E6813 (void);
// 0x0000069B System.Void System.IO.ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern void ErrorEventHandler__ctor_m3E09BA9274CEEEA547246DE24B7627239CB5F69B (void);
// 0x0000069C System.Void System.IO.ErrorEventHandler::Invoke(System.Object,System.IO.ErrorEventArgs)
extern void ErrorEventHandler_Invoke_mD7EB3F307E911CE70FE14EED9AE21821CF0FE46A (void);
// 0x0000069D System.IAsyncResult System.IO.ErrorEventHandler::BeginInvoke(System.Object,System.IO.ErrorEventArgs,System.AsyncCallback,System.Object)
extern void ErrorEventHandler_BeginInvoke_m7DE5D5966992AECC44702E72D798517079CE9931 (void);
// 0x0000069E System.Void System.IO.ErrorEventHandler::EndInvoke(System.IAsyncResult)
extern void ErrorEventHandler_EndInvoke_m224171A7049D31D3A42E07F894636BFA1E5A2C35 (void);
// 0x0000069F System.Void System.IO.FileSystemEventArgs::.ctor(System.IO.WatcherChangeTypes,System.String,System.String)
extern void FileSystemEventArgs__ctor_m92D6B265D63497B90A7448405DC8228C08697728 (void);
// 0x000006A0 System.Void System.IO.FileSystemEventHandler::.ctor(System.Object,System.IntPtr)
extern void FileSystemEventHandler__ctor_mAF414F567A9E961182A5D18F6A04FDFB629829A0 (void);
// 0x000006A1 System.Void System.IO.FileSystemEventHandler::Invoke(System.Object,System.IO.FileSystemEventArgs)
extern void FileSystemEventHandler_Invoke_m16B1200B966D379B4B128D290C9CF6E80F73E407 (void);
// 0x000006A2 System.IAsyncResult System.IO.FileSystemEventHandler::BeginInvoke(System.Object,System.IO.FileSystemEventArgs,System.AsyncCallback,System.Object)
extern void FileSystemEventHandler_BeginInvoke_m17CAEDC9B0D57AF1468F3ED553C8058DA42B9501 (void);
// 0x000006A3 System.Void System.IO.FileSystemEventHandler::EndInvoke(System.IAsyncResult)
extern void FileSystemEventHandler_EndInvoke_m3F4D3F77091A6D2170C0E2A93995C6B84F43FAE0 (void);
// 0x000006A4 System.Void System.IO.FileSystemWatcher::.ctor(System.String,System.String)
extern void FileSystemWatcher__ctor_m2E17475DA5A181CACDA21AF99B615E53CA53C042 (void);
// 0x000006A5 System.Void System.IO.FileSystemWatcher::InitWatcher()
extern void FileSystemWatcher_InitWatcher_m67B9B2B5CBD08D1B18CC4F73F8828580249D1850 (void);
// 0x000006A6 System.Boolean System.IO.FileSystemWatcher::get_Waiting()
extern void FileSystemWatcher_get_Waiting_m5BA1A30C5E32A9C460DA51B7030CDB5E1474B439 (void);
// 0x000006A7 System.Void System.IO.FileSystemWatcher::set_Waiting(System.Boolean)
extern void FileSystemWatcher_set_Waiting_mDEC26E9D3F3A567B2CF59DE042CD03AC969D912E (void);
// 0x000006A8 System.String System.IO.FileSystemWatcher::get_MangledFilter()
extern void FileSystemWatcher_get_MangledFilter_m019A38321DDA296B04ABCCC0ABAB0704D2D2687C (void);
// 0x000006A9 System.IO.SearchPattern2 System.IO.FileSystemWatcher::get_Pattern()
extern void FileSystemWatcher_get_Pattern_m65A73D2DD1F95FBE66DF16644744D57028324823 (void);
// 0x000006AA System.String System.IO.FileSystemWatcher::get_FullPath()
extern void FileSystemWatcher_get_FullPath_mC54DE9939AC466A05AEEC2F47676A219A4E04E24 (void);
// 0x000006AB System.Void System.IO.FileSystemWatcher::set_EnableRaisingEvents(System.Boolean)
extern void FileSystemWatcher_set_EnableRaisingEvents_m947AB405CE841D3B6780E9AE373AE2E8F794DA2C (void);
// 0x000006AC System.Boolean System.IO.FileSystemWatcher::get_IncludeSubdirectories()
extern void FileSystemWatcher_get_IncludeSubdirectories_m1526800BE526B20E418BAFA3B1F3380ABAAC7D14 (void);
// 0x000006AD System.Void System.IO.FileSystemWatcher::set_NotifyFilter(System.IO.NotifyFilters)
extern void FileSystemWatcher_set_NotifyFilter_m29C114B49876A6AF58E21ACE208FCB96A4207814 (void);
// 0x000006AE System.ComponentModel.ISite System.IO.FileSystemWatcher::get_Site()
extern void FileSystemWatcher_get_Site_mA7A50E3F3FC656A396573E3CDDF566733FA1201E (void);
// 0x000006AF System.Void System.IO.FileSystemWatcher::Dispose(System.Boolean)
extern void FileSystemWatcher_Dispose_m5133996E0FC027546E3402A7F2F5BFCA6E7E223D (void);
// 0x000006B0 System.Void System.IO.FileSystemWatcher::Finalize()
extern void FileSystemWatcher_Finalize_mD0256810C6AA152A8153EE62D128C2B65CA46550 (void);
// 0x000006B1 System.Void System.IO.FileSystemWatcher::RaiseEvent(System.Delegate,System.EventArgs,System.IO.FileSystemWatcher/EventType)
extern void FileSystemWatcher_RaiseEvent_m5B2AF414F6FCCDF4327C85559F04B46828F25A55 (void);
// 0x000006B2 System.Void System.IO.FileSystemWatcher::OnChanged(System.IO.FileSystemEventArgs)
extern void FileSystemWatcher_OnChanged_m7AE89CE287B637F65F3B8B985627956F9536998F (void);
// 0x000006B3 System.Void System.IO.FileSystemWatcher::OnCreated(System.IO.FileSystemEventArgs)
extern void FileSystemWatcher_OnCreated_mB091E054FBF03BFEF07224C17EFDADDE83F50E38 (void);
// 0x000006B4 System.Void System.IO.FileSystemWatcher::OnDeleted(System.IO.FileSystemEventArgs)
extern void FileSystemWatcher_OnDeleted_m241A3FD12116628246D4C684309CDC6B6637DC2B (void);
// 0x000006B5 System.Void System.IO.FileSystemWatcher::OnRenamed(System.IO.RenamedEventArgs)
extern void FileSystemWatcher_OnRenamed_mFD3C51BFDEBD0CE6C3686C5DDAC4ED580B30A42F (void);
// 0x000006B6 System.Void System.IO.FileSystemWatcher::DispatchEvents(System.IO.FileAction,System.String,System.IO.RenamedEventArgs&)
extern void FileSystemWatcher_DispatchEvents_mEA4A91FD6C52392848EADF06E5F27AAD26CC26FD (void);
// 0x000006B7 System.Void System.IO.FileSystemWatcher::Start()
extern void FileSystemWatcher_Start_mF8C8DACE54BEC14B66FB2AB2023DADC7954526AD (void);
// 0x000006B8 System.Void System.IO.FileSystemWatcher::Stop()
extern void FileSystemWatcher_Stop_m44B8C1A81F0CCB6F16310E4DDCA6441C2F33A505 (void);
// 0x000006B9 System.Void System.IO.FileSystemWatcher::add_Changed(System.IO.FileSystemEventHandler)
extern void FileSystemWatcher_add_Changed_m50FA16A43956D49F1C79B76596D8C297A4B52225 (void);
// 0x000006BA System.Void System.IO.FileSystemWatcher::remove_Changed(System.IO.FileSystemEventHandler)
extern void FileSystemWatcher_remove_Changed_m2F0C9A37408FCC0DE73600B88F18CDA7B3CA22AB (void);
// 0x000006BB System.Int32 System.IO.FileSystemWatcher::InternalSupportsFSW()
extern void FileSystemWatcher_InternalSupportsFSW_m13269BE88BD6301467D39555661FE4A261396A9D (void);
// 0x000006BC System.Void System.IO.FileSystemWatcher::.cctor()
extern void FileSystemWatcher__cctor_m5D24AAD6DA96B9636AAF31CDAAC9E27CE6CE169B (void);
// 0x000006BD System.Void System.IO.IFileWatcher::StartDispatching(System.IO.FileSystemWatcher)
// 0x000006BE System.Void System.IO.IFileWatcher::StopDispatching(System.IO.FileSystemWatcher)
// 0x000006BF System.Void System.IO.IODescriptionAttribute::.ctor(System.String)
extern void IODescriptionAttribute__ctor_mEB30794A9FDA28EC8E387DF4510912DE1384B9FC (void);
// 0x000006C0 System.String System.IO.IODescriptionAttribute::get_Description()
extern void IODescriptionAttribute_get_Description_m25AA8E7C9C94721A343EB43A442BEFBE21B76650 (void);
// 0x000006C1 System.Void System.IO.InvalidDataException::.ctor()
extern void InvalidDataException__ctor_m00C4E880DA84C1425853C44B9AF697AFA8739334 (void);
// 0x000006C2 System.Void System.IO.InvalidDataException::.ctor(System.String)
extern void InvalidDataException__ctor_m9E70F76F454223A518AFC7E98AABA05D94237281 (void);
// 0x000006C3 System.Void System.IO.InvalidDataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void InvalidDataException__ctor_m002DF64CE04566C00AAA4D5283961E429CF32DBA (void);
// 0x000006C4 System.Void System.IO.NullFileWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern void NullFileWatcher_StartDispatching_mF43E6F3F272FE08442A9383D06BBDFD6D74A95BA (void);
// 0x000006C5 System.Void System.IO.NullFileWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern void NullFileWatcher_StopDispatching_m589DE9B7207DC228EDE2FFF77772A798B4C52FAE (void);
// 0x000006C6 System.Boolean System.IO.NullFileWatcher::GetInstance(System.IO.IFileWatcher&)
extern void NullFileWatcher_GetInstance_m28FD83AD24BBA8874E6B696D96FDA4EE8DB54D70 (void);
// 0x000006C7 System.Void System.IO.NullFileWatcher::.ctor()
extern void NullFileWatcher__ctor_m6563AAFF63915CC1BEFF4CD8ECE4FA26B3DEA70A (void);
// 0x000006C8 System.Void System.IO.RenamedEventArgs::.ctor(System.IO.WatcherChangeTypes,System.String,System.String,System.String)
extern void RenamedEventArgs__ctor_mEA13644A1ED1B8E04BFE38CDDEE0711801F20F54 (void);
// 0x000006C9 System.Void System.IO.RenamedEventHandler::.ctor(System.Object,System.IntPtr)
extern void RenamedEventHandler__ctor_m5A67C39B4ED5922C67E00AB0EF2DCE2A18A9130E (void);
// 0x000006CA System.Void System.IO.RenamedEventHandler::Invoke(System.Object,System.IO.RenamedEventArgs)
extern void RenamedEventHandler_Invoke_m96544E8A1B4EE4104B00459BEABBD0D3CE31CCE8 (void);
// 0x000006CB System.IAsyncResult System.IO.RenamedEventHandler::BeginInvoke(System.Object,System.IO.RenamedEventArgs,System.AsyncCallback,System.Object)
extern void RenamedEventHandler_BeginInvoke_m7821F96C5E9B21C9B61C672E176E7F1B16325E9E (void);
// 0x000006CC System.Void System.IO.RenamedEventHandler::EndInvoke(System.IAsyncResult)
extern void RenamedEventHandler_EndInvoke_m4D430ADAAC2D983E7389BDFF68E93B09BBC10B36 (void);
// 0x000006CD System.Void System.IO.SearchPattern2::.ctor(System.String)
extern void SearchPattern2__ctor_m640287AC3D982EEC12C97DC50058392110C572FD (void);
// 0x000006CE System.Void System.IO.SearchPattern2::.ctor(System.String,System.Boolean)
extern void SearchPattern2__ctor_mEB9EBF962D4511134D1F4853AF5676A967DCE202 (void);
// 0x000006CF System.Boolean System.IO.SearchPattern2::get_HasWildcard()
extern void SearchPattern2_get_HasWildcard_m048D1ABA0766CE006FB8D4DBF2B229CF9FE61D35 (void);
// 0x000006D0 System.Void System.IO.SearchPattern2::Compile(System.String)
extern void SearchPattern2_Compile_m9A91FA8763BBC2B931F6E46C89395E0B5C5BC0D8 (void);
// 0x000006D1 System.Void System.IO.SearchPattern2::.cctor()
extern void SearchPattern2__cctor_m73C16BF7DE1AB239D7595F39B75A9B8B6AAC3508 (void);
// 0x000006D2 System.Void System.IO.SearchPattern2/Op::.ctor(System.IO.SearchPattern2/OpCode)
extern void Op__ctor_mC79954E7A495084395002BE9A244D37BF32417F8 (void);
// 0x000006D3 System.Void System.IO.WaitForChangedResult::set_ChangeType(System.IO.WatcherChangeTypes)
extern void WaitForChangedResult_set_ChangeType_m779175206406BD72572AF846383AEDEEA44B7290 (void);
// 0x000006D4 System.Void System.IO.WaitForChangedResult::set_Name(System.String)
extern void WaitForChangedResult_set_Name_mBD5B6415D0C2FE4199DE81935EF3FB92573346DE (void);
// 0x000006D5 System.Void System.IO.WaitForChangedResult::set_OldName(System.String)
extern void WaitForChangedResult_set_OldName_m3B96A62F4EBC550A0451A06020CE354C2A64D9DF (void);
// 0x000006D6 System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern void CredentialCache_get_DefaultCredentials_m669684689D1F69432F33D9B1E0ECF53080BB8CDC (void);
// 0x000006D7 System.Void System.Net.SystemNetworkCredential::.ctor()
extern void SystemNetworkCredential__ctor_m51111F468A7CFB7B990C2C618A99EDC7FA7B307A (void);
// 0x000006D8 System.Void System.Net.SystemNetworkCredential::.cctor()
extern void SystemNetworkCredential__cctor_m42F0FC8A6A428F7764FC5A86B38469FC032D3340 (void);
// 0x000006D9 System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern void EndPoint_get_AddressFamily_m7B7DC3AE75480FCA543AE5434EFA8C8C09450C66 (void);
// 0x000006DA System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern void EndPoint_Serialize_m118001AAA9AC84B4B28E8267055A7173D8C1F376 (void);
// 0x000006DB System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern void EndPoint_Create_m98FBA607C33234AC35DF79DB6494D13AED7A501C (void);
// 0x000006DC System.Void System.Net.EndPoint::.ctor()
extern void EndPoint__ctor_mFCD3A4BB994F59D40A3A94A6F1DEC4A731CC8776 (void);
// 0x000006DD System.Net.IWebProxy System.Net.GlobalProxySelection::get_Select()
extern void GlobalProxySelection_get_Select_mE826A34EB04E3906E699A317417506C89551F54B (void);
// 0x000006DE System.Net.IWebProxy System.Net.GlobalProxySelection::GetEmptyWebProxy()
extern void GlobalProxySelection_GetEmptyWebProxy_m66C1CA6E4480F45F78145DD23AB51A59B5A246AD (void);
// 0x000006DF System.Void System.Net.HttpVersion::.cctor()
extern void HttpVersion__cctor_m19EB2E84E83F160B93594A35BB6C96C5B50D6856 (void);
// 0x000006E0 System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
// 0x000006E1 System.Void System.Net.IPAddress::.ctor(System.Int64)
extern void IPAddress__ctor_mFD0AF2F6A282D1158DF3C34EF2E63B73814E7748 (void);
// 0x000006E2 System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern void IPAddress__ctor_m373D3930BEEA00EC628E98C5A13AE9BE2B2CEC84 (void);
// 0x000006E3 System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.UInt32)
extern void IPAddress__ctor_m7A866EC7E9B1A8F89158C0EA1AC0A966CFE819ED (void);
// 0x000006E4 System.Void System.Net.IPAddress::.ctor(System.Int32)
extern void IPAddress__ctor_mCC321EEDA0750DA97447EB60529BCBCB4EA0249D (void);
// 0x000006E5 System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern void IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA (void);
// 0x000006E6 System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern void IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (void);
// 0x000006E7 System.Net.IPAddress System.Net.IPAddress::InternalParse(System.String,System.Boolean)
extern void IPAddress_InternalParse_m69E95769392647AE9B82AFEC6D7E74C4F7CCFD47 (void);
// 0x000006E8 System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern void IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2 (void);
// 0x000006E9 System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern void IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693 (void);
// 0x000006EA System.Int64 System.Net.IPAddress::get_ScopeId()
extern void IPAddress_get_ScopeId_m941461DEBDECCD858F8D3165F3CA366A318064D9 (void);
// 0x000006EB System.String System.Net.IPAddress::ToString()
extern void IPAddress_ToString_m0CAEDDAF2A42F23EB1BE3BB353ABE741486710BF (void);
// 0x000006EC System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern void IPAddress_IsLoopback_m84B87F0732723BE939EB9534E8271A13EE599027 (void);
// 0x000006ED System.Boolean System.Net.IPAddress::get_IsBroadcast()
extern void IPAddress_get_IsBroadcast_mD9674AA08F6D75A9C40A2E8177EF949588D97322 (void);
// 0x000006EE System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
extern void IPAddress_Equals_mADA54686760DE75E2C31B8651224FFEB019316D6 (void);
// 0x000006EF System.Boolean System.Net.IPAddress::Equals(System.Object)
extern void IPAddress_Equals_mB38BAC1A15885A3181507BC9FD4E8F5765FA6678 (void);
// 0x000006F0 System.Int32 System.Net.IPAddress::GetHashCode()
extern void IPAddress_GetHashCode_m36CE850AFAAD382A29B7D72844989A3105565D7C (void);
// 0x000006F1 System.Net.IPAddress System.Net.IPAddress::MapToIPv6()
extern void IPAddress_MapToIPv6_mC852A3F6831381331095C81AB75B0A70ABD2498B (void);
// 0x000006F2 System.Void System.Net.IPAddress::.cctor()
extern void IPAddress__cctor_m4DF372012DF900E7BB489931296D0BFE4EBD4AEA (void);
// 0x000006F3 System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern void IPEndPoint_get_AddressFamily_m53CEE40486A2F3615571B5255CA6D4C28387703A (void);
// 0x000006F4 System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern void IPEndPoint__ctor_m5D901E504DB160F93F70404CB2A5B1D69459ADFC (void);
// 0x000006F5 System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (void);
// 0x000006F6 System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern void IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4 (void);
// 0x000006F7 System.Int32 System.Net.IPEndPoint::get_Port()
extern void IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9 (void);
// 0x000006F8 System.String System.Net.IPEndPoint::ToString()
extern void IPEndPoint_ToString_mB132354BB333FA5FD9CA5B6B86F751AAA87AFEC2 (void);
// 0x000006F9 System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern void IPEndPoint_Serialize_mE4201DDF2EB6D872A31A2620D20C718DC1F28962 (void);
// 0x000006FA System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern void IPEndPoint_Create_m1B1932CCD58627047FAEDC2402C333BF6468A3D7 (void);
// 0x000006FB System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern void IPEndPoint_Equals_mBD402EE46BB0C0922C25E2DEFB64412E4666EC6D (void);
// 0x000006FC System.Int32 System.Net.IPEndPoint::GetHashCode()
extern void IPEndPoint_GetHashCode_m52D8AEEDB5B1409EDD08F18B2018CEB1712266C0 (void);
// 0x000006FD System.Void System.Net.IPEndPoint::.cctor()
extern void IPEndPoint__cctor_mD88387D86BAE58328D7BA158704E91B0415F9B81 (void);
// 0x000006FE System.String System.Net.IPHostEntry::get_HostName()
extern void IPHostEntry_get_HostName_m58DC3A2664BA86513E055ECA103214D00EFD1605 (void);
// 0x000006FF System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern void IPHostEntry_set_HostName_mE132ABF58C3C4C28A58A48132698FA99F55C328D (void);
// 0x00000700 System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern void IPHostEntry_set_Aliases_m4D05E9F3D5C6FD0996C86816B36B1DF9BE79D8ED (void);
// 0x00000701 System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern void IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56 (void);
// 0x00000702 System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern void IPHostEntry_set_AddressList_m057A9B8FA93A129A0DAF5222231BD155B774B50B (void);
// 0x00000703 System.Void System.Net.IPHostEntry::.ctor()
extern void IPHostEntry__ctor_m539B6CE87B29D7B23A4F46C73BF7D6BB74D0331F (void);
// 0x00000704 System.Void System.Net.InternalException::.ctor()
extern void InternalException__ctor_m4963B2F0FC3F351663C67F3F71CAC601D73DF499 (void);
// 0x00000705 System.Boolean System.Net.NclUtilities::IsAddressLocal(System.Net.IPAddress)
extern void NclUtilities_IsAddressLocal_m15E0BC8FA72FF335F31D5377AC1ED599FA5966DC (void);
// 0x00000706 System.Net.IPHostEntry System.Net.NclUtilities::GetLocalHost()
extern void NclUtilities_GetLocalHost_m05F1444B07A59C035365C4F17DD28959EA8843BD (void);
// 0x00000707 System.Net.IPAddress[] System.Net.NclUtilities::get_LocalAddresses()
extern void NclUtilities_get_LocalAddresses_mCD150C4D4468FA5A5841F1A9DEA23779221321D8 (void);
// 0x00000708 System.Object System.Net.NclUtilities::get_LocalAddressesLock()
extern void NclUtilities_get_LocalAddressesLock_m873FF32D6C0398541CBB1CE734A5A66A8ED1A2C2 (void);
// 0x00000709 System.Boolean System.Net.ValidationHelper::IsBlankString(System.String)
extern void ValidationHelper_IsBlankString_m78C3603B0E8C93CAD3FB945CA57C3E4729A09B89 (void);
// 0x0000070A System.Boolean System.Net.ValidationHelper::ValidateTcpPort(System.Int32)
extern void ValidationHelper_ValidateTcpPort_m899B89B4810C6531306EC6C34FF452732D41979D (void);
// 0x0000070B System.Void System.Net.ValidationHelper::.cctor()
extern void ValidationHelper__cctor_mE5C7F68FC003121FE3AC2039FFA9B2E88500E16A (void);
// 0x0000070C System.NotImplementedException System.Net.ExceptionHelper::get_MethodNotImplementedException()
extern void ExceptionHelper_get_MethodNotImplementedException_m607FF8B70BAE0BB51B306CC3282A08B59C657D84 (void);
// 0x0000070D System.NotImplementedException System.Net.ExceptionHelper::get_PropertyNotImplementedException()
extern void ExceptionHelper_get_PropertyNotImplementedException_m7A641AB1C2BDAB3199A4A2674561E23302FB637B (void);
// 0x0000070E System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern void NetworkCredential__ctor_m6FAE0A13FFBFC74F1E810399223B5297DF9B4C76 (void);
// 0x0000070F System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern void NetworkCredential__ctor_mFAFA0E2205D5A144C0EAB9420F7FBBE71ED677D4 (void);
// 0x00000710 System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern void NetworkCredential_set_UserName_m17D8E6ABE7EDA733A8E01967698669293FCF2E22 (void);
// 0x00000711 System.Void System.Net.NetworkCredential::set_Password(System.String)
extern void NetworkCredential_set_Password_mEEF6A7577788282996C4A5A989D9BA47B13D882E (void);
// 0x00000712 System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern void NetworkCredential_set_Domain_m5046BA97B0F1D839ABB6F928C1DF2FA2387DBA9C (void);
// 0x00000713 System.Void System.Net.ProtocolViolationException::.ctor()
extern void ProtocolViolationException__ctor_m9E1CE4D0A1DBB0EAE0BE6C7C026154C789F41A49 (void);
// 0x00000714 System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern void ProtocolViolationException__ctor_m36E802912D318858D2D98F929722AACA1A2EC38C (void);
// 0x00000715 System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException__ctor_m63A4EA715BBFE3D72929AD3FEDB1E398B75C41F5 (void);
// 0x00000716 System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m044186C620380DB9812441EE011806354C23D0B6 (void);
// 0x00000717 System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_GetObjectData_m37E19ADFB1B9FA924D562BDFE0D57728AD5F2A37 (void);
// 0x00000718 System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern void SocketAddress_get_Family_mA5C74070602CE88CF4E8C77A06B7B60D73BC736D (void);
// 0x00000719 System.Int32 System.Net.SocketAddress::get_Size()
extern void SocketAddress_get_Size_mF4849EFEEA3BA3E2109D3E05E635072F89DE57CB (void);
// 0x0000071A System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern void SocketAddress_get_Item_m9B0A7BADAFEC83332452472EFB0F2B2A8AF7C442 (void);
// 0x0000071B System.Void System.Net.SocketAddress::set_Item(System.Int32,System.Byte)
extern void SocketAddress_set_Item_m99934FEE4418DC91A6272059E8090293D79DB881 (void);
// 0x0000071C System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern void SocketAddress__ctor_m8ACFF855B4B34E64D63221D8964F67393AC5C2C0 (void);
// 0x0000071D System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress)
extern void SocketAddress__ctor_mBD53CC91765543655C8A685599BF9E83CBD7EDA1 (void);
// 0x0000071E System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress,System.Int32)
extern void SocketAddress__ctor_m727264D4E76104274842A01FCA0C42F424463B5B (void);
// 0x0000071F System.Net.IPAddress System.Net.SocketAddress::GetIPAddress()
extern void SocketAddress_GetIPAddress_mB6CBFAEAD75170561033660215DAA67EE91E6A85 (void);
// 0x00000720 System.Net.IPEndPoint System.Net.SocketAddress::GetIPEndPoint()
extern void SocketAddress_GetIPEndPoint_mDB28840AEBFA9C37CC41BEC66E67BA9EDCEC2700 (void);
// 0x00000721 System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern void SocketAddress_Equals_m51EE0D3DF560D78987904A2F7D449D9008B7F4E7 (void);
// 0x00000722 System.Int32 System.Net.SocketAddress::GetHashCode()
extern void SocketAddress_GetHashCode_mD765A06DB2C807684567958F8B82266A72A51B63 (void);
// 0x00000723 System.String System.Net.SocketAddress::ToString()
extern void SocketAddress_ToString_mDF5B4B0AF200471C84B09D553EB33BC4F0EE20EB (void);
// 0x00000724 System.Void System.Net.WebException::.ctor()
extern void WebException__ctor_m3CC3B7531100A92762AB2A131B85742D403D6370 (void);
// 0x00000725 System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern void WebException__ctor_m864B9642C3D47B5ED0CDA9397ACB8CC70D2B9E4E (void);
// 0x00000726 System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern void WebException__ctor_mABBCD10936CE582BDF68BA0204ECBDA253119AFE (void);
// 0x00000727 System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_mC093D93CFCE3064622C7AF755BC3D3150E5A8D2D (void);
// 0x00000728 System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m5363C3AC28BABD353ABD5295C3A4FD44724D9407 (void);
// 0x00000729 System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException__ctor_m4BFDADE5C6613BE14CE11DE30B350A671DDA7C16 (void);
// 0x0000072A System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mE242FB2EA4DB6AAC3C6C08DBEFD8F3A7D8C9E2DF (void);
// 0x0000072B System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_GetObjectData_m72AC26432F46DEC77E8BEE3B60150CA524EB8D43 (void);
// 0x0000072C System.String System.Net.WebExceptionMapping::GetWebStatusString(System.Net.WebExceptionStatus)
extern void WebExceptionMapping_GetWebStatusString_mEB4A50FC87E40382A86D007C2E80FCCDEFCB5B91 (void);
// 0x0000072D System.Void System.Net.WebExceptionMapping::.cctor()
extern void WebExceptionMapping__cctor_m25DD11B1F6D1AFB6D3DCD727B6D0D0F9C551EDE6 (void);
// 0x0000072E System.Void System.Net.WebHeaderCollection::NormalizeCommonHeaders()
extern void WebHeaderCollection_NormalizeCommonHeaders_m3FE2945857B86D96E0B495218D61593CC6AD1991 (void);
// 0x0000072F System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::get_InnerCollection()
extern void WebHeaderCollection_get_InnerCollection_m74FAC0EF1815ABEA9D44E817BA54B413A7D21645 (void);
// 0x00000730 System.Void System.Net.WebHeaderCollection::AddInternal(System.String,System.String)
extern void WebHeaderCollection_AddInternal_m6D3C568730974B187804895F8F3DAA50AB37C6A8 (void);
// 0x00000731 System.String System.Net.WebHeaderCollection::CheckBadChars(System.String,System.Boolean)
extern void WebHeaderCollection_CheckBadChars_mDBB3AA0A529389E24E9DFBD08C259F34412C0523 (void);
// 0x00000732 System.Boolean System.Net.WebHeaderCollection::ContainsNonAsciiChars(System.String)
extern void WebHeaderCollection_ContainsNonAsciiChars_mA89278F21B4B5F507898C91472747092C3E152BE (void);
// 0x00000733 System.Void System.Net.WebHeaderCollection::ThrowOnRestrictedHeader(System.String)
extern void WebHeaderCollection_ThrowOnRestrictedHeader_mD66B7AB428CEE7686AA15963F42F6645880A7A6B (void);
// 0x00000734 System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern void WebHeaderCollection_Add_mB254E228D958CFE984049FBFA75815196B1BB993 (void);
// 0x00000735 System.String System.Net.WebHeaderCollection::ToString()
extern void WebHeaderCollection_ToString_mAF0DD5057B67B6D935F9F81254FE4EF3816AE1F5 (void);
// 0x00000736 System.String System.Net.WebHeaderCollection::GetAsString(System.Collections.Specialized.NameValueCollection,System.Boolean,System.Boolean)
extern void WebHeaderCollection_GetAsString_m2446E221F9367C3C2D0FCC9E1686E3E5292B6932 (void);
// 0x00000737 System.Void System.Net.WebHeaderCollection::.ctor()
extern void WebHeaderCollection__ctor_mDE789C8E11131B5FB1FD5FF79382893DE73E8752 (void);
// 0x00000738 System.Void System.Net.WebHeaderCollection::.ctor(System.Net.WebHeaderCollectionType)
extern void WebHeaderCollection__ctor_mD9851B680C175978BABED32CA813D66553B5DB48 (void);
// 0x00000739 System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection__ctor_mA6673D3256664909BD3B6BA1DED72901CBF302DD (void);
// 0x0000073A System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern void WebHeaderCollection_OnDeserialization_mFD1302BFFB2508360BB2241B4F6AEBF47F6FB53E (void);
// 0x0000073B System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_GetObjectData_mBDBD7A68D3851F96DCFE6819ECE1FB5B7B733D50 (void);
// 0x0000073C System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mF606120A9A8D480A73ECC80F3134437CC170DACC (void);
// 0x0000073D System.String System.Net.WebHeaderCollection::Get(System.String)
extern void WebHeaderCollection_Get_mBAE90C4839B7748D8889C011ADE5E8CD9ABADD7C (void);
// 0x0000073E System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern void WebHeaderCollection_GetEnumerator_m3B38A75F803A0EA365EC3A5FB2E71F85B784B71C (void);
// 0x0000073F System.Int32 System.Net.WebHeaderCollection::get_Count()
extern void WebHeaderCollection_get_Count_mF4776644017CCC37A364707BC35BD4431BB66C80 (void);
// 0x00000740 System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern void WebHeaderCollection_Get_mB4CF6863B19E3815EEBE1A86F1881B6F744A47B2 (void);
// 0x00000741 System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern void WebHeaderCollection_GetKey_mC4DBE9E8F0044B4F1AA95F5DF76955E8692655F0 (void);
// 0x00000742 System.Void System.Net.WebHeaderCollection::.cctor()
extern void WebHeaderCollection__cctor_m779CABD05DE263A98071763B54A53757E33B9A6A (void);
// 0x00000743 System.Int32 System.Net.CaseInsensitiveAscii::GetHashCode(System.Object)
extern void CaseInsensitiveAscii_GetHashCode_mEDEDA9FD6885627614E710E60A2EA06D69F6D436 (void);
// 0x00000744 System.Int32 System.Net.CaseInsensitiveAscii::Compare(System.Object,System.Object)
extern void CaseInsensitiveAscii_Compare_m89633B3A475AC918C505843E6F7824FE789A6E4B (void);
// 0x00000745 System.Int32 System.Net.CaseInsensitiveAscii::FastGetHashCode(System.String)
extern void CaseInsensitiveAscii_FastGetHashCode_m3718D0BF4E0D19D8DBBD9E3177B8B1479EEB7090 (void);
// 0x00000746 System.Boolean System.Net.CaseInsensitiveAscii::Equals(System.Object,System.Object)
extern void CaseInsensitiveAscii_Equals_m31D348231E3122FF20FA5BDEFC6BC3A8B65CB9C0 (void);
// 0x00000747 System.Void System.Net.CaseInsensitiveAscii::.ctor()
extern void CaseInsensitiveAscii__ctor_m3C5EA0D73AE6F2E60CC2335DFC861C64B2FCEEBA (void);
// 0x00000748 System.Void System.Net.CaseInsensitiveAscii::.cctor()
extern void CaseInsensitiveAscii__cctor_m759446C030AB0E794F53B4D3E38A5813361A7886 (void);
// 0x00000749 System.Object System.Net.WebRequest::get_InternalSyncObject()
extern void WebRequest_get_InternalSyncObject_m80BB55BB5C09059A46F4E10599FA455F41286330 (void);
// 0x0000074A System.Void System.Net.WebRequest::.ctor()
extern void WebRequest__ctor_mFF46D19A613D1A8E5E9318DEFA794B18AC206D57 (void);
// 0x0000074B System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest__ctor_mD4C70AB50E522A71C1B47263DD8714FC3B52A3C1 (void);
// 0x0000074C System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_mA128ED1898FD0A9943A96190103BE40F418BAB03 (void);
// 0x0000074D System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_GetObjectData_m06BD9D15936178B48D44F18C02CD94EE21DD1CF0 (void);
// 0x0000074E System.Net.IWebProxy System.Net.WebRequest::get_InternalDefaultWebProxy()
extern void WebRequest_get_InternalDefaultWebProxy_m13E2CAB3FE298CF26023A3626454FE989CF687C7 (void);
// 0x0000074F System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern void WebRequest_get_DefaultWebProxy_m65F367761268F3797F96B8BE99F85FF8CB1C117A (void);
// 0x00000750 System.Void System.Net.WebRequest::.cctor()
extern void WebRequest__cctor_mF114B4DA7976F2211658435221ABC2968FF13798 (void);
// 0x00000751 System.Void System.Net.WebRequest/DesignerWebRequestCreate::.ctor()
extern void DesignerWebRequestCreate__ctor_m57F5ADABDB3D9A8F8617EBFD5F40FB0D8A9DF7D3 (void);
// 0x00000752 System.Uri System.Net.WebRequest/WebProxyWrapperOpaque::GetProxy(System.Uri)
extern void WebProxyWrapperOpaque_GetProxy_m1A8A0E96628ABA4A57B401AC2D60016808BA840D (void);
// 0x00000753 System.Boolean System.Net.WebRequest/WebProxyWrapperOpaque::IsBypassed(System.Uri)
extern void WebProxyWrapperOpaque_IsBypassed_mAB04ED8FC80CF3E3045042D4F618C3189ABBF07C (void);
// 0x00000754 System.Net.WebProxy System.Net.WebRequest/WebProxyWrapper::get_WebProxy()
extern void WebProxyWrapper_get_WebProxy_m64892D5D4C1D1C4A11188F1549D2762AF50A5EE8 (void);
// 0x00000755 System.Void System.Net.WebResponse::.ctor()
extern void WebResponse__ctor_m0A254FF1607AEACDAA102A8ABA8941A42B2929A6 (void);
// 0x00000756 System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse__ctor_mC4FCBBBB946A8703F5279A1390D56A50CBE7164B (void);
// 0x00000757 System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_mE662B42630016B991CFC1E861F774DC1CDDD00DA (void);
// 0x00000758 System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_GetObjectData_m52CD293C2D47F35D8FF1EA2769D272E48398EB4A (void);
// 0x00000759 System.Void System.Net.WebResponse::Close()
extern void WebResponse_Close_m970DECB5745AACAC9CA7B88FB818066A0DFC4998 (void);
// 0x0000075A System.Void System.Net.WebResponse::Dispose()
extern void WebResponse_Dispose_mC0C80BE4CDA26A6A26EEAE961C588A461FEE9FE4 (void);
// 0x0000075B System.Void System.Net.WebResponse::Dispose(System.Boolean)
extern void WebResponse_Dispose_mD37AF3FE467717A008830A34E72215D3DBC244EC (void);
// 0x0000075C System.Void System.Net.HeaderParser::.ctor(System.Object,System.IntPtr)
extern void HeaderParser__ctor_m3505961B694DA7A327216C93C9ECF14883F0FD76 (void);
// 0x0000075D System.String[] System.Net.HeaderParser::Invoke(System.String)
extern void HeaderParser_Invoke_m9B1C027C8642CE3AA54366690471A23E181D41B6 (void);
// 0x0000075E System.IAsyncResult System.Net.HeaderParser::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void HeaderParser_BeginInvoke_m9FD2F44038291DA86379F725BB39C636E9442D6E (void);
// 0x0000075F System.String[] System.Net.HeaderParser::EndInvoke(System.IAsyncResult)
extern void HeaderParser_EndInvoke_m357E4BCDE566A5DCB07B1F07F6EEC3F0BBD05E8A (void);
// 0x00000760 System.Void System.Net.HeaderInfo::.ctor(System.String,System.Boolean,System.Boolean,System.Boolean,System.Net.HeaderParser)
extern void HeaderInfo__ctor_m0A21C755086755564093EE140BB76B17BF19D119 (void);
// 0x00000761 System.String[] System.Net.HeaderInfoTable::ParseSingleValue(System.String)
extern void HeaderInfoTable_ParseSingleValue_mCE6140F9CE345D6AF51B89C7D8C42E6C7AC41EA0 (void);
// 0x00000762 System.String[] System.Net.HeaderInfoTable::ParseMultiValue(System.String)
extern void HeaderInfoTable_ParseMultiValue_mF581CA5C6C9D338CC17232EC49C4471DB5DFC014 (void);
// 0x00000763 System.Void System.Net.HeaderInfoTable::.cctor()
extern void HeaderInfoTable__cctor_mE96A69FD8B8F938623442DCD661EA5FB8E608B16 (void);
// 0x00000764 System.Net.HeaderInfo System.Net.HeaderInfoTable::get_Item(System.String)
extern void HeaderInfoTable_get_Item_m87D6C7DCC3A5EA433F038365677E93B311A41885 (void);
// 0x00000765 System.Void System.Net.HeaderInfoTable::.ctor()
extern void HeaderInfoTable__ctor_m7CAFD794EF41A0799F26DF974DBC848A03275531 (void);
// 0x00000766 System.Void System.Net.ICloseEx::CloseEx(System.Net.CloseExState)
// 0x00000767 System.Net.LazyAsyncResult/ThreadContext System.Net.LazyAsyncResult::get_CurrentThreadContext()
extern void LazyAsyncResult_get_CurrentThreadContext_m72EA4FF3D8FA7A473BABC9CB6C74D197BC1CCD98 (void);
// 0x00000768 System.Object System.Net.LazyAsyncResult::get_AsyncObject()
extern void LazyAsyncResult_get_AsyncObject_mA91273208B3DCE1E9830B3CB028298D40C635059 (void);
// 0x00000769 System.Void System.Net.LazyAsyncResult::ProtectedInvokeCallback(System.Object,System.IntPtr)
extern void LazyAsyncResult_ProtectedInvokeCallback_mE4BFC9A8F54A60F45DC23A775D75E7F9B3BE61AE (void);
// 0x0000076A System.Void System.Net.LazyAsyncResult::InvokeCallback(System.Object)
extern void LazyAsyncResult_InvokeCallback_m61F2403E47B10A03CA2CCE45D5DB1C5033A57C8B (void);
// 0x0000076B System.Void System.Net.LazyAsyncResult::Complete(System.IntPtr)
extern void LazyAsyncResult_Complete_m1149B1B2741B4B2D22775A68D74B955BC3EA4A64 (void);
// 0x0000076C System.Void System.Net.LazyAsyncResult::WorkerThreadComplete(System.Object)
extern void LazyAsyncResult_WorkerThreadComplete_m9144EAFE34F64C805224410D61F45300D854A6BD (void);
// 0x0000076D System.Void System.Net.LazyAsyncResult::Cleanup()
extern void LazyAsyncResult_Cleanup_m60696D3703963856A2069A821F8F68DEE1F81D4F (void);
// 0x0000076E System.Void System.Net.LazyAsyncResult/ThreadContext::.ctor()
extern void ThreadContext__ctor_mA7A43774615EA8E5A20D406F33EFE2004B9944E2 (void);
// 0x0000076F System.String System.Net.NetRes::GetWebStatusString(System.String,System.Net.WebExceptionStatus)
extern void NetRes_GetWebStatusString_m507D1110F525757C699C6F95A3AA4B8AD41BED81 (void);
// 0x00000770 System.Void System.Net.TimerThread::.cctor()
extern void TimerThread__cctor_m92260B88BACC7706E288A0AD202FA71CD0696199 (void);
// 0x00000771 System.Net.TimerThread/Queue System.Net.TimerThread::CreateQueue(System.Int32)
extern void TimerThread_CreateQueue_m38F306BCB0D055ADBC36F3D8F2B77EBE4BFF8C82 (void);
// 0x00000772 System.Void System.Net.TimerThread::StopTimerThread()
extern void TimerThread_StopTimerThread_m5D33E7D7EAAB667AEE1ABC6E0F832DA361BA83CB (void);
// 0x00000773 System.Void System.Net.TimerThread::OnDomainUnload(System.Object,System.EventArgs)
extern void TimerThread_OnDomainUnload_m3CA503B871CEE33D278B6995FBF8ED5B92001E1D (void);
// 0x00000774 System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
extern void Queue__ctor_mED7AD466F7A2AD32777D05229BE4E7A6BC358C06 (void);
// 0x00000775 System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
extern void Timer__ctor_mF6B46FBB94C7B044423D0931A24646947612D40E (void);
// 0x00000776 System.Boolean System.Net.TimerThread/Timer::Cancel()
// 0x00000777 System.Void System.Net.TimerThread/Timer::Dispose()
extern void Timer_Dispose_mCB85185EBA6CE836BDAA5CB5B5D98326E0279F0D (void);
// 0x00000778 System.Void System.Net.TimerThread/Callback::.ctor(System.Object,System.IntPtr)
extern void Callback__ctor_m4E3A7A3D8252FA436373FF975A78C11BFE218BEF (void);
// 0x00000779 System.Void System.Net.TimerThread/Callback::Invoke(System.Net.TimerThread/Timer,System.Int32,System.Object)
extern void Callback_Invoke_m429C63F5BE16B526F6875846B107639638CF2F75 (void);
// 0x0000077A System.IAsyncResult System.Net.TimerThread/Callback::BeginInvoke(System.Net.TimerThread/Timer,System.Int32,System.Object,System.AsyncCallback,System.Object)
extern void Callback_BeginInvoke_m41DDA2A728FAF5D8FC7BDD6BAF1E5A5FAA44067A (void);
// 0x0000077B System.Void System.Net.TimerThread/Callback::EndInvoke(System.IAsyncResult)
extern void Callback_EndInvoke_mCA87962B7FC7ACCD1BD62977C8A1DF1F2ECC8D1F (void);
// 0x0000077C System.Void System.Net.TimerThread/TimerQueue::.ctor(System.Int32)
extern void TimerQueue__ctor_m0AE128C18B38F02F946242A6D18C788B83CF4A0F (void);
// 0x0000077D System.Void System.Net.TimerThread/InfiniteTimerQueue::.ctor()
extern void InfiniteTimerQueue__ctor_m9399FB8D3AF6FCE71EB29A97665E871E9D13C5E7 (void);
// 0x0000077E System.Void System.Net.TimerThread/TimerNode::.ctor()
extern void TimerNode__ctor_m18DCD26BDC1FE8F661FE7C056F59785CB48F09E7 (void);
// 0x0000077F System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
extern void TimerNode_get_Next_m91904310F38E6EF8D94261890F86387942EA81DE (void);
// 0x00000780 System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Next_m6A6F1ACDE24E867EA3D88F2C889C677AE7AAC3BD (void);
// 0x00000781 System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
extern void TimerNode_get_Prev_m694B4D7BD49FE9A47B961DE0E12FF036B940CEE5 (void);
// 0x00000782 System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Prev_m6AE80A4996048AADCBD43D8CFEB5DDB8CAAC1B8E (void);
// 0x00000783 System.Boolean System.Net.TimerThread/TimerNode::Cancel()
extern void TimerNode_Cancel_m691597518E9CAF2719C10B63577E24DC65A4B974 (void);
// 0x00000784 System.Void System.Net.EmptyWebProxy::.ctor()
extern void EmptyWebProxy__ctor_m1087116F8816BF3AD6D7ADE134F1579659AA00A5 (void);
// 0x00000785 System.Uri System.Net.EmptyWebProxy::GetProxy(System.Uri)
extern void EmptyWebProxy_GetProxy_m41932E59E773523BF705A1FDFD168CAB61F9C4FC (void);
// 0x00000786 System.Boolean System.Net.EmptyWebProxy::IsBypassed(System.Uri)
extern void EmptyWebProxy_IsBypassed_m91E4C131B35CBE9CE062B93710BC938A608CC445 (void);
// 0x00000787 System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern void FileWebRequest__ctor_m6BF9BF0E17060D4E719795DE5742BFFC65D34C6B (void);
// 0x00000788 System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest__ctor_m1FFFB33A0414E016669B3179FF16F141FA6E838D (void);
// 0x00000789 System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m9B6440775FE50243D85010EB8F8D6DDBFE8A3BE4 (void);
// 0x0000078A System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_GetObjectData_mC8A7DDCA00C0E3ADADB267284F196C4EE9E8D3BB (void);
// 0x0000078B System.Boolean System.Net.FileWebRequest::get_Aborted()
extern void FileWebRequest_get_Aborted_mD504D723802D217E3F741C68EF2576AFC2C0006F (void);
// 0x0000078C System.Void System.Net.FileWebRequest::GetRequestStreamCallback(System.Object)
extern void FileWebRequest_GetRequestStreamCallback_mCC6AEA46D613AA7B5035F4C5C27E848DC601951C (void);
// 0x0000078D System.Void System.Net.FileWebRequest::GetResponseCallback(System.Object)
extern void FileWebRequest_GetResponseCallback_m1C0A747466A03A05FF9D6D45456DFAFEEA38BF48 (void);
// 0x0000078E System.Void System.Net.FileWebRequest::UnblockReader()
extern void FileWebRequest_UnblockReader_m9E687E8F4413F2727339A41C3DE03A7D8ADBEDE3 (void);
// 0x0000078F System.Void System.Net.FileWebRequest::.cctor()
extern void FileWebRequest__cctor_m98058ED26B0744413A32327D2FF6778E4B52D5F4 (void);
// 0x00000790 System.Void System.Net.FileWebRequestCreator::.ctor()
extern void FileWebRequestCreator__ctor_m550EAB9632992C942E14D5B34C48FA6196595B9B (void);
// 0x00000791 System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern void FileWebRequestCreator_Create_m5A5314BCF6AA30E63196C05A64ECE6EA11D4E545 (void);
// 0x00000792 System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern void FileWebStream__ctor_m80D7CF5508F845D57EF371DD820A480A53D5C27C (void);
// 0x00000793 System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
extern void FileWebStream__ctor_m087F956637DD4C2FCE8247EC13021B1E75B35609 (void);
// 0x00000794 System.Void System.Net.FileWebStream::Dispose(System.Boolean)
extern void FileWebStream_Dispose_mC797EE18FAAF3613C73EF95AB81D1E9C0EE9A40A (void);
// 0x00000795 System.Void System.Net.FileWebStream::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebStream_System_Net_ICloseEx_CloseEx_mDB04D260B47E82C6161F2D65EA9EE8A832D03D18 (void);
// 0x00000796 System.Int32 System.Net.FileWebStream::Read(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Read_mBA56658D84F3C5742FE812D1A7AD58116541C779 (void);
// 0x00000797 System.Void System.Net.FileWebStream::Write(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Write_m79C3CB2CE195D5348D313E6CFA6C8F4394E9681F (void);
// 0x00000798 System.IAsyncResult System.Net.FileWebStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginRead_m1E98F98D1956A77B4CBD4F111EC895A855C291D8 (void);
// 0x00000799 System.Int32 System.Net.FileWebStream::EndRead(System.IAsyncResult)
extern void FileWebStream_EndRead_mD4F843221DB3767E3CFB3E052E24E9CC94135302 (void);
// 0x0000079A System.IAsyncResult System.Net.FileWebStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginWrite_mD2E9B62CE8C7FF3A16763BB128E6AC9E31C985D0 (void);
// 0x0000079B System.Void System.Net.FileWebStream::EndWrite(System.IAsyncResult)
extern void FileWebStream_EndWrite_m9505A80B585F611DE18E22C9ACC319FB901E6A94 (void);
// 0x0000079C System.Void System.Net.FileWebStream::CheckError()
extern void FileWebStream_CheckError_m70F0ABB558C83EB00CB830DC1B449E7254B561D7 (void);
// 0x0000079D System.Void System.Net.FileWebResponse::.ctor(System.Net.FileWebRequest,System.Uri,System.IO.FileAccess,System.Boolean)
extern void FileWebResponse__ctor_mD521D067A1815BD4E42DE18E13B82FC6EAB58379 (void);
// 0x0000079E System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse__ctor_m8596AAABC73AFAF749351F4B0D2CBFB9214726C1 (void);
// 0x0000079F System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m1A6DD095E9F848AD3951E80A670DA080CED12BCB (void);
// 0x000007A0 System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_GetObjectData_m1553AB318AB78A871A047F1D842356776B283E4F (void);
// 0x000007A1 System.Void System.Net.FileWebResponse::Close()
extern void FileWebResponse_Close_mBD2FC4D7E4EDE7C10648E463201E1A1DDEE7D551 (void);
// 0x000007A2 System.Void System.Net.FileWebResponse::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebResponse_System_Net_ICloseEx_CloseEx_mEB324E8E15B8A2D26F34220B88A2667EEBB02C8A (void);
// 0x000007A3 System.Uri System.Net.IWebProxy::GetProxy(System.Uri)
// 0x000007A4 System.Boolean System.Net.IWebProxy::IsBypassed(System.Uri)
// 0x000007A5 System.Void System.Net.WebProxy::.ctor()
extern void WebProxy__ctor_mD47326CF9857B797EFCC3CA369F83D51D19317CE (void);
// 0x000007A6 System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern void WebProxy__ctor_m2354821664C2380AF107CBC5C66F0325068C5DA7 (void);
// 0x000007A7 System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern void WebProxy_get_Credentials_mF546D5D8441F10F4A46A9A3C5D52BFFBE7D735B0 (void);
// 0x000007A8 System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern void WebProxy_get_UseDefaultCredentials_m661B51178D8050D605835FCB034A166BF33B009B (void);
// 0x000007A9 System.Void System.Net.WebProxy::set_UseDefaultCredentials(System.Boolean)
extern void WebProxy_set_UseDefaultCredentials_m53AF92FFC63A223541B629E01D939AF2A75BB4E7 (void);
// 0x000007AA System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern void WebProxy_GetProxy_m59215526173C7FD907EC86C35C44AF4FC4EFF28A (void);
// 0x000007AB System.Void System.Net.WebProxy::UpdateRegExList(System.Boolean)
extern void WebProxy_UpdateRegExList_mEAE558ABD241391C3AAD19D62066AB67EC3AE46B (void);
// 0x000007AC System.Boolean System.Net.WebProxy::IsMatchInBypassList(System.Uri)
extern void WebProxy_IsMatchInBypassList_m6B8C5DA8C56E6D50B0C84CCD094DB8FFBECDCC93 (void);
// 0x000007AD System.Boolean System.Net.WebProxy::IsLocal(System.Uri)
extern void WebProxy_IsLocal_m22583E899743095130F899378336361304BE71AC (void);
// 0x000007AE System.Boolean System.Net.WebProxy::IsLocalInProxyHash(System.Uri)
extern void WebProxy_IsLocalInProxyHash_mB4C405FEB5AFC01644FFE81AA3CB76918A7D45A5 (void);
// 0x000007AF System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern void WebProxy_IsBypassed_m1DB51D78C18C700F26EEE00938F4A202EF944B5E (void);
// 0x000007B0 System.Boolean System.Net.WebProxy::IsBypassedManual(System.Uri)
extern void WebProxy_IsBypassedManual_m96199F172C51F06EE36CCE5D937BDD7BF873FEFC (void);
// 0x000007B1 System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy__ctor_mC76DA2892292BF1609EE4874C11206819F96899E (void);
// 0x000007B2 System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_mB855266F0AA17F2652B6BF6286A749097A9455E2 (void);
// 0x000007B3 System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_GetObjectData_mF4C20C0FADD55674E00C1E13A16F4A14B2777D6B (void);
// 0x000007B4 System.Net.AutoWebProxyScriptEngine System.Net.WebProxy::get_ScriptEngine()
extern void WebProxy_get_ScriptEngine_m6E040080EC0330E0C15849B1BB6469DBFE92A057 (void);
// 0x000007B5 System.Net.IWebProxy System.Net.WebProxy::CreateDefaultProxy()
extern void WebProxy_CreateDefaultProxy_m0F1C8D957370920707869349941412B6BC3323A5 (void);
// 0x000007B6 System.Void System.Net.WebProxy::.ctor(System.Boolean)
extern void WebProxy__ctor_m387E8EB6694953D1FA4E77E00D449B20E2C0B84F (void);
// 0x000007B7 System.Void System.Net.WebProxy::UnsafeUpdateFromRegistry()
extern void WebProxy_UnsafeUpdateFromRegistry_mDFB67EA19AAD6F1D5BCF9B7D585B33A84D14DC4E (void);
// 0x000007B8 System.Boolean System.Net.WebProxy::GetProxyAuto(System.Uri,System.Uri&)
extern void WebProxy_GetProxyAuto_m1EACF0FDED5E764C7B3EAF243F39A73646B94CD2 (void);
// 0x000007B9 System.Boolean System.Net.WebProxy::IsBypassedAuto(System.Uri,System.Boolean&)
extern void WebProxy_IsBypassedAuto_m96DE81A96B947F6F6A25A49D5F5D8430346809C0 (void);
// 0x000007BA System.Boolean System.Net.WebProxy::AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean)
extern void WebProxy_AreAllBypassed_m6E869A92B478E61C29F0B9D9085E2AC6A075B59E (void);
// 0x000007BB System.Uri System.Net.WebProxy::ProxyUri(System.String)
extern void WebProxy_ProxyUri_mE09DD6D37536E7D5AC20A9519DFABCDB974F2B42 (void);
// 0x000007BC System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&)
extern void AutoWebProxyScriptEngine_GetProxies_mCBAD00EC0BE65DF947C48B1DBC377EB80F075902 (void);
// 0x000007BD System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&,System.Int32&)
extern void AutoWebProxyScriptEngine_GetProxies_m228520D18B1350998E32FCACF796316DBBBA111A (void);
// 0x000007BE System.Security.SecureString System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateSecureString(System.String)
extern void SecureStringHelper_CreateSecureString_m36F065E59FF9B8AC79289E4B2A42F96C23BD4F0C (void);
// 0x000007BF System.Void System.Net.ServerCertValidationCallback::.ctor(System.Net.Security.RemoteCertificateValidationCallback)
extern void ServerCertValidationCallback__ctor_m01DC1DC5935B7807EA9D35D50BDF9F00B68E1A23 (void);
// 0x000007C0 System.Void System.Net.ServerCertValidationCallback::Callback(System.Object)
extern void ServerCertValidationCallback_Callback_m2F51ACBBF63B010C39B4C415ECD209BFB4243733 (void);
// 0x000007C1 System.Boolean System.Net.ServerCertValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerCertValidationCallback_Invoke_m9A3D9984E12278ACD7DEEE5E4B039A3250D6A8D0 (void);
// 0x000007C2 System.Void System.Net.ServerCertValidationCallback/CallbackContext::.ctor(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void CallbackContext__ctor_m98617E58A5FC792C785185C96D2AACADB98B89CB (void);
// 0x000007C3 System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByName_internal_mFEA5DFFBD99C1E7364B146B0F95FDE3F5DA67EC8 (void);
// 0x000007C4 System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByAddr_internal_mCB4425B47D6768392E20C80C4EE1C5E28956663D (void);
// 0x000007C5 System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern void Dns_GetHostName_internal_m69BF784F0F6C595AFC4B0027E8EB0D465B6845F6 (void);
// 0x000007C6 System.Void System.Net.Dns::Error_11001(System.String)
extern void Dns_Error_11001_m783146DF96023BA4CAD30F55D8DC527D2ABBCB72 (void);
// 0x000007C7 System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String,System.String[],System.String[])
extern void Dns_hostent_to_IPHostEntry_mCD03D1D4689BF1B272CB8212506C4C853C6D06C3 (void);
// 0x000007C8 System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern void Dns_GetHostByAddressFromString_mBE5EF710810CFA07D13ADB525AAA34D32E040681 (void);
// 0x000007C9 System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern void Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38 (void);
// 0x000007CA System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern void Dns_GetHostEntry_mEACB9ADFF37EBC9B353155EB8F0290F7CB9E1574 (void);
// 0x000007CB System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern void Dns_GetHostAddresses_mBB73A3CFACAF787C2DDB8EF473E87D31940A379D (void);
// 0x000007CC System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern void Dns_GetHostByName_m1DD689606F93DAAB12896C4D3CA6A33731A4CE62 (void);
// 0x000007CD System.String System.Net.Dns::GetHostName()
extern void Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2 (void);
// 0x000007CE System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern void FtpRequestCreator_Create_mB9CD950EDF1B3F06F7C928E490806C12FB1D7306 (void);
// 0x000007CF System.Void System.Net.FtpRequestCreator::.ctor()
extern void FtpRequestCreator__ctor_m0DACF33EF40A75AE489FEF288DC61837FFFA8BEF (void);
// 0x000007D0 System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern void FtpWebRequest__ctor_mEB166EB5A1F20FC008DA66D46AADE550EE176892 (void);
// 0x000007D1 System.Void System.Net.FtpWebRequest::.cctor()
extern void FtpWebRequest__cctor_m3652EDD67F0C55207C33B710F1DA9808E1D31AFB (void);
// 0x000007D2 System.Void System.Net.HttpRequestCreator::.ctor()
extern void HttpRequestCreator__ctor_m2B7DE24FCB9C1814F8972B4B167127F86DB1BF39 (void);
// 0x000007D3 System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern void HttpRequestCreator_Create_mE3E077C98503C150AA328D4EED41FE9F8F518F46 (void);
// 0x000007D4 System.Void System.Net.HttpWebRequest::.cctor()
extern void HttpWebRequest__cctor_mA59FB9F51019C563A3B276B79A1131CFDBE0035D (void);
// 0x000007D5 System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern void HttpWebRequest__ctor_m85AA1BD537DCDBF3B1BCD75F6C93C6AA8B831D7F (void);
// 0x000007D6 System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest__ctor_m85CA8AA15E849598BC5ED6217805CBDF8D5BAA0E (void);
// 0x000007D7 System.Void System.Net.HttpWebRequest::ResetAuthorization()
extern void HttpWebRequest_ResetAuthorization_mAA12582B7D5B809AFFA7559AEA5582AADD6B23AF (void);
// 0x000007D8 System.Void System.Net.HttpWebRequest::set_ThrowOnError(System.Boolean)
extern void HttpWebRequest_set_ThrowOnError_m7A186C503E47933A82ABC3AA32081213004BF0FD (void);
// 0x000007D9 System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern void HttpWebRequest_get_ServicePoint_m7E95E58719904639C79F9420F080A3F94BAB63EC (void);
// 0x000007DA System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePointNoLock()
extern void HttpWebRequest_get_ServicePointNoLock_m6749645299E6A6C85445E9B7F2DAD248FC6FA1E1 (void);
// 0x000007DB System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::get_ServerCertValidationCallback()
extern void HttpWebRequest_get_ServerCertValidationCallback_mE535B7C3510E634EF8B2E2C9698BE4069D376619 (void);
// 0x000007DC System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern void HttpWebRequest_GetServicePoint_m2F4A5E8A7A723C3CA97203FE2A4D9913EAC185E6 (void);
// 0x000007DD System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m14EED4626353FF9CB5ABAC2978C2CA37890306AC (void);
// 0x000007DE System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_GetObjectData_mF600B207AECA50F8B6ACB8D4C29366A6ABE36C45 (void);
// 0x000007DF System.Void System.Net.HttpWebRequest::.ctor()
extern void HttpWebRequest__ctor_m71D51512F53504F6BCBCFBCBBCB5D803357145D0 (void);
// 0x000007E0 System.Void System.Net.HttpWebRequest/AuthorizationState::.ctor(System.Net.HttpWebRequest,System.Boolean)
extern void AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D (void);
// 0x000007E1 System.String System.Net.HttpWebRequest/AuthorizationState::ToString()
extern void AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A (void);
// 0x000007E2 System.Void System.Net.IPv6AddressFormatter::.ctor(System.UInt16[],System.Int64)
extern void IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497 (void);
// 0x000007E3 System.UInt16 System.Net.IPv6AddressFormatter::SwapUShort(System.UInt16)
extern void IPv6AddressFormatter_SwapUShort_m6B7BA905E96BB0889C580EE25F3614C7A4A9164C (void);
// 0x000007E4 System.UInt32 System.Net.IPv6AddressFormatter::AsIPv4Int()
extern void IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F (void);
// 0x000007E5 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Compatible()
extern void IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC (void);
// 0x000007E6 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Mapped()
extern void IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127 (void);
// 0x000007E7 System.String System.Net.IPv6AddressFormatter::ToString()
extern void IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F (void);
// 0x000007E8 System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern void ServicePoint__ctor_m788957B0CF9F256F581975F6ACDA0DB122D2BE85 (void);
// 0x000007E9 System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern void ServicePoint_set_Expect100Continue_m9F795AEF8CCA79C80CDD27F7EA7AD01DAD92618B (void);
// 0x000007EA System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern void ServicePoint_set_UseNagleAlgorithm_mA40D127E6B6DDB7FE8EBDE9A075FF0FF96CAE3FB (void);
// 0x000007EB System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern void ServicePoint_set_SendContinue_m92320EA69F94AE266D2C8797E5DCEA965DF5C8ED (void);
// 0x000007EC System.Void System.Net.ServicePoint::SetTcpKeepAlive(System.Boolean,System.Int32,System.Int32)
extern void ServicePoint_SetTcpKeepAlive_mBA9E8F9615C7BAA38E396F21B73549BE72AFB165 (void);
// 0x000007ED System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern void ServicePoint_set_UsesProxy_m81B24DCBB2CDB67877B1631AD53EA4925B2D77D2 (void);
// 0x000007EE System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern void ServicePoint_set_UseConnect_m63B28421D36EA6064A66588382A7381C9318CAA2 (void);
// 0x000007EF System.Void System.Net.ServicePoint::UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateServerCertificate_m4D130D9346CC9D940FE6CB00B40FB9B976853F01 (void);
// 0x000007F0 System.Void System.Net.ServicePointManager::.cctor()
extern void ServicePointManager__cctor_m5E74472D2F21CBE2808E62160416C0F572306498 (void);
// 0x000007F1 System.Net.ICertificatePolicy System.Net.ServicePointManager::GetLegacyCertificatePolicy()
extern void ServicePointManager_GetLegacyCertificatePolicy_m91F5A99F923B7085226C21F50BD30C1BC056EC98 (void);
// 0x000007F2 System.Net.ServerCertValidationCallback System.Net.ServicePointManager::get_ServerCertValidationCallback()
extern void ServicePointManager_get_ServerCertValidationCallback_mD060FAFC9DC69DA28963397C5C61BED8343C0381 (void);
// 0x000007F3 System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern void ServicePointManager_FindServicePoint_m9941E847AA8745D9CEC1CCB2559BD0348B3B58BF (void);
// 0x000007F4 System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Uri,System.Boolean)
extern void SPKey__ctor_mEFB0271B87BA8145BF5ABFBFC580444AC87E8378 (void);
// 0x000007F5 System.Boolean System.Net.ServicePointManager/SPKey::get_UsesProxy()
extern void SPKey_get_UsesProxy_m43005CE469081EA1C0EBCDCEF7047817882A13EE (void);
// 0x000007F6 System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern void SPKey_GetHashCode_m4686BFC3EE7C5322B912BCC739EA3C2AB33D8622 (void);
// 0x000007F7 System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern void SPKey_Equals_mF29C836C97373F9F739EE977115DB8F521921CFB (void);
// 0x000007F8 System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern void SocketException_WSAGetLastError_internal_m18F05CF8D9CE2435225A4215ED757D8D98716FC3 (void);
// 0x000007F9 System.Void System.Net.Sockets.SocketException::.ctor()
extern void SocketException__ctor_mB16B95B2752EAD626C88A5230C1A8FEB7CF632CA (void);
// 0x000007FA System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern void SocketException__ctor_m68F7126C5B5AD6C6E1EF8A06DE8F5068D6A46002 (void);
// 0x000007FB System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern void SocketException__ctor_m1853BFE92CDFB7A46B2AD59841A3B1DB95244533 (void);
// 0x000007FC System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
extern void SocketException__ctor_m2687C4EFA4D012280C5D19B89D8D01F97B6A2F1A (void);
// 0x000007FD System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void SocketException__ctor_m4C36461DF98089890FBF01908A4AAD301CABE071 (void);
// 0x000007FE System.String System.Net.Sockets.SocketException::get_Message()
extern void SocketException_get_Message_m50B9DF4BB6F3B20F650E2F965B3DD654C8970378 (void);
// 0x000007FF System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern void SocketException_get_SocketErrorCode_m2ADCFE3E77E69B2C54930319F2B72BABCCB8A824 (void);
// 0x00000800 System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
extern void LingerOption__ctor_m3DF407AEF218AA4C7291FF92543BE0BAD40B760A (void);
// 0x00000801 System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
extern void LingerOption_set_Enabled_m698CECD028CDD6D6E7CC82C12D5A0B7A291A74B1 (void);
// 0x00000802 System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
extern void LingerOption_set_LingerTime_m366DDFE3598E938C9EA7C288E306682E64D44755 (void);
// 0x00000803 System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern void NetworkStream__ctor_m9629E0E9BD6011BA4E7E923B71410EC3A611FE83 (void);
// 0x00000804 System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern void NetworkStream_get_CanRead_mBF98E4498C6F7C76D911F675962F544DD6336BCF (void);
// 0x00000805 System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern void NetworkStream_get_CanSeek_m6D65109C6D751B848B97C220FC02B75A4B833A14 (void);
// 0x00000806 System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern void NetworkStream_get_CanWrite_mDA3F37747199641E18F088E19FDE4E05BD45B4A2 (void);
// 0x00000807 System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern void NetworkStream_get_Length_m6CF8079769A034BEE882C1E02FCA16F67F80DC11 (void);
// 0x00000808 System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern void NetworkStream_get_Position_mB8AF2E84720E0D5FDA49C24673667566316C167F (void);
// 0x00000809 System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern void NetworkStream_set_Position_m07B5B94010D39A5EBBE763C916F5A344DD99DAB4 (void);
// 0x0000080A System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void NetworkStream_Seek_m206C93B5C10E443853C7DF8C0D094328AEF9F94B (void);
// 0x0000080B System.Void System.Net.Sockets.NetworkStream::InitNetworkStream(System.Net.Sockets.Socket,System.IO.FileAccess)
extern void NetworkStream_InitNetworkStream_m4749E17D45A2B9F3452ED76D673C59B6CF09E542 (void);
// 0x0000080C System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Read_mF5137678893C1868A0B56475E63493D349A17A5E (void);
// 0x0000080D System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Write_m2CF72A308913D3CB3EA37F5A3493FDA0A51FE910 (void);
// 0x0000080E System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern void NetworkStream_Dispose_mC4F2E85F8F098254D60ED053F5D3E45CF7B2B4E0 (void);
// 0x0000080F System.Void System.Net.Sockets.NetworkStream::Finalize()
extern void NetworkStream_Finalize_m97B1A123AB9C7EF73CB91684189632C4E86BD422 (void);
// 0x00000810 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginRead_mB4803C638A3A3265669A663DBDA859DC5A5ED009 (void);
// 0x00000811 System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern void NetworkStream_EndRead_mAFBB41B6DE1BD74C47DB890C5BC3617172F9F14E (void);
// 0x00000812 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginWrite_mCC5FAC2886E330DE2E1DB4B7D4509F6F110396D7 (void);
// 0x00000813 System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern void NetworkStream_EndWrite_m9A30266EFA0648D3E2E22F6097271FFF8C00E501 (void);
// 0x00000814 System.Void System.Net.Sockets.NetworkStream::Flush()
extern void NetworkStream_Flush_mD24343AA0BED24CC098BA9BFF2F118CC0865DB40 (void);
// 0x00000815 System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern void NetworkStream_SetLength_mA3CA693C34E7EF187E55731B089D4A38319F2CB0 (void);
// 0x00000816 System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (void);
// 0x00000817 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern void Socket_get_SupportsIPv4_m2D8B6C4B1E1359F09B4C8C422B2AF38A39C41F81 (void);
// 0x00000818 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern void Socket_get_OSSupportsIPv4_m0A5CF1017F08C741FE899C3D457A1C678EAFD599 (void);
// 0x00000819 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern void Socket_get_SupportsIPv6_m76AE5D0EA624C0AEB6EFAE0E56B3956C9A734FA4 (void);
// 0x0000081A System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern void Socket_get_OSSupportsIPv6_m923EC612566AEA217F71397FD8BED111AC951DED (void);
// 0x0000081B System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern void Socket_get_Handle_mA1965009F9BACF2047AB982354B00E1C0A95D4DE (void);
// 0x0000081C System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern void Socket_get_AddressFamily_m33B7B2581828A024C81CE52DF4287A2447A54D6F (void);
// 0x0000081D System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern void Socket_get_SocketType_m61AE4997710B0CE75832B42919A2892F00740E37 (void);
// 0x0000081E System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern void Socket_get_ProtocolType_mE9C131BE9AEA271B35821FC80C8CB62414E1546E (void);
// 0x0000081F System.Void System.Net.Sockets.Socket::set_ExclusiveAddressUse(System.Boolean)
extern void Socket_set_ExclusiveAddressUse_mF5C01EC0BCC18E3BEBC345104C2FA5324254D6FD (void);
// 0x00000820 System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern void Socket_set_DontFragment_m2683AAA1C87A0E2CCC426EFA4D8BF5790AA2D136 (void);
// 0x00000821 System.Boolean System.Net.Sockets.Socket::get_DualMode()
extern void Socket_get_DualMode_m6FB7069091397FB35DE520DADBC6F28A45E6B68C (void);
// 0x00000822 System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
extern void Socket_set_DualMode_mDC9084953B95EBF0B75B69D0E37F7E8B43612C9A (void);
// 0x00000823 System.Boolean System.Net.Sockets.Socket::get_IsDualMode()
extern void Socket_get_IsDualMode_m5F32679545518176E4AFE66901AF86DFA6499655 (void);
// 0x00000824 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Send_m2FF02253EFA5AC56C2684594FF0DA4E9392FE4B5 (void);
// 0x00000825 System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Send_m1ED8F737070D66D68B93B64E09ED9C726AA75638 (void);
// 0x00000826 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mBBAB318D0BB5BF0B8FA4C9192EABCC4B179429EE (void);
// 0x00000827 System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_mFC7C84096D49297C58D498DB0DF7496967FC9759 (void);
// 0x00000828 System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_m69B3F392972DFA666F0C869F2349F8486DE472D6 (void);
// 0x00000829 System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.EndPoint&)
extern void Socket_ReceiveFrom_mD95E4E0292060CAD14B9A2FD8C49AB99125227CF (void);
// 0x0000082A System.Void System.Net.Sockets.Socket::SetIPProtectionLevel(System.Net.Sockets.IPProtectionLevel)
extern void Socket_SetIPProtectionLevel_m01CE85FD88045EA923BB9F8506C467883B5C7F52 (void);
// 0x0000082B System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_m05E491600486AAC8EFAF5F4EB0C24B13210D640E (void);
// 0x0000082C System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern void Socket_EndSend_mD941F4E5F502FC0EDCA70BB7CB637217320709EC (void);
// 0x0000082D System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30 (void);
// 0x0000082E System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern void Socket_EndReceive_mF4C73ED2C78731706B7891AB94B7D4EF084476F0 (void);
// 0x0000082F System.Object System.Net.Sockets.Socket::get_InternalSyncObject()
extern void Socket_get_InternalSyncObject_m7325FA3D411ED7E590F9E026CE2859CB654B614F (void);
// 0x00000830 System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
extern void Socket_get_CleanedUp_mFEF17F0AD881817F7A8A0B584E0077E968373684 (void);
// 0x00000831 System.Void System.Net.Sockets.Socket::InitializeSockets()
extern void Socket_InitializeSockets_mB1CBCEFBB0AC0E6848D38A0EEA33EACDF6A9EC7F (void);
// 0x00000832 System.Void System.Net.Sockets.Socket::Dispose()
extern void Socket_Dispose_m34C079AE162CF588FB9FFA9F76B010DF337DE362 (void);
// 0x00000833 System.Void System.Net.Sockets.Socket::Finalize()
extern void Socket_Finalize_mF2575EF924283A62F9064992816393410D7C880C (void);
// 0x00000834 System.Void System.Net.Sockets.Socket::InternalShutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_InternalShutdown_mE1DDB563CF7D94D792F6C2F32FECEBC8270D4E81 (void);
// 0x00000835 System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SafeSocketHandle)
extern void Socket__ctor_m6F08E0C60ECB2DC6DDD921D729D7BD7AEB6A633F (void);
// 0x00000836 System.Void System.Net.Sockets.Socket::SocketDefaults()
extern void Socket_SocketDefaults_m3AE1F652A9ED2E599A57BFDF82EB39C4EF32DB32 (void);
// 0x00000837 System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern void Socket_Socket_internal_m6EC2025D3A1C29EB966E6FD091C28ABEAB080E21 (void);
// 0x00000838 System.Void System.Net.Sockets.Socket::set_EnableBroadcast(System.Boolean)
extern void Socket_set_EnableBroadcast_mAF6DE2B827F1D6D57C53981CB89C708B08D80626 (void);
// 0x00000839 System.Boolean System.Net.Sockets.Socket::get_IsBound()
extern void Socket_get_IsBound_mAA2B548E5DBCC2B693A6DAA612648199C6291A8A (void);
// 0x0000083A System.Void System.Net.Sockets.Socket::set_MulticastLoopback(System.Boolean)
extern void Socket_set_MulticastLoopback_m02D0582B9E00D015FC6BAF2B9C3CB601724BDCED (void);
// 0x0000083B System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern void Socket_get_Blocking_mBEF4541F893F4ECE9354245BF7E6D8C5118206FF (void);
// 0x0000083C System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern void Socket_set_Blocking_mB447A573F44452B55F5D6B6105FD1C55865E0EDC (void);
// 0x0000083D System.Void System.Net.Sockets.Socket::Blocking_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m13B3D6C3A383411BD26F8EED6BCA4C6517E49BAD (void);
// 0x0000083E System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m4F1F07A40A6FD3CFECC7F7F836B52337C61833A9 (void);
// 0x0000083F System.Boolean System.Net.Sockets.Socket::get_Connected()
extern void Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE (void);
// 0x00000840 System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern void Socket_set_NoDelay_mB51929BB6C13E4C051C59B62A9C5CBEA3A129D76 (void);
// 0x00000841 System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
extern void Socket_get_RemoteEndPoint_mD926D4C2BD8A8B534D992E177D155F7EF8685D20 (void);
// 0x00000842 System.Net.SocketAddress System.Net.Sockets.Socket::RemoteEndPoint_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_RemoteEndPoint_internal_mF19F7BFFC08D0917716B7911923EEBAF6588D85F (void);
// 0x00000843 System.Net.SocketAddress System.Net.Sockets.Socket::RemoteEndPoint_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_RemoteEndPoint_internal_m2CBB00B1D82337AD3B4102E0F2AE48E1DA1E7A41 (void);
// 0x00000844 System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern void Socket_Poll_mF1F23215F0C768A8F891F933221B8D3F7DA53B28 (void);
// 0x00000845 System.Boolean System.Net.Sockets.Socket::Poll_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m325547116F4B37F9B7016B64A19846CEA0DE5753 (void);
// 0x00000846 System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m0EB7285E1AE8CC42F200FDE13C8991EE4659D276 (void);
// 0x00000847 System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern void Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7 (void);
// 0x00000848 System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern void Socket_Accept_mC12CAE783F87CD63E6FF83D55F1973C2E5E7BDEC (void);
// 0x00000849 System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern void Socket_EndAccept_mABD175ECBE095DE93D623259610B1332911266A1 (void);
// 0x0000084A System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern void Socket_EndAccept_m005E845E347FEA71E41BDB1AFE9E5A39BC393D04 (void);
// 0x0000084B System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::Accept_internal(System.Net.Sockets.SafeSocketHandle,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_mE1FADFF816972DDE8AD35519E92D69B4F9D9109D (void);
// 0x0000084C System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_m52A4190380D5DFBB0AD1F4AB6D2F0A49850FD3B9 (void);
// 0x0000084D System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern void Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30 (void);
// 0x0000084E System.Void System.Net.Sockets.Socket::Bind_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_m3E7154040E7446689883A441D55456E7562F2E47 (void);
// 0x0000084F System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_mE7C0A0306E3AEC46ED06CAE920C799B7B92AC8E9 (void);
// 0x00000850 System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern void Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540 (void);
// 0x00000851 System.Void System.Net.Sockets.Socket::Listen_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_Listen_internal_mF351F058B339E905D497FE522C2E74080A444D10 (void);
// 0x00000852 System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_Listen_internal_m9B7599632C30804400D22A556A758D4A0B02F145 (void);
// 0x00000853 System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
extern void Socket_Connect_mE3F6A0F6D9A997E44F4F6EA04E7C3EFDAE35EE0A (void);
// 0x00000854 System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern void Socket_Connect_m06F14E236617A4BA22146BEC4334E24ED39D8536 (void);
// 0x00000855 System.Void System.Net.Sockets.Socket::BeginMConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginMConnect_m97B0959875F9DD732C1B90D08E00018D383AFFE4 (void);
// 0x00000856 System.Void System.Net.Sockets.Socket::BeginSConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginSConnect_m91344C94E64D4215A8CD2F6FD63067DBF32D97F7 (void);
// 0x00000857 System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern void Socket_EndConnect_m0CFDCA9629EAF8E764A7EB9D61C9DDA83988209F (void);
// 0x00000858 System.Void System.Net.Sockets.Socket::Connect_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m907A5990A8F440BA59CE041CF7881FF9C2D7E8AE (void);
// 0x00000859 System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m0CF19A6266F179B65384D3FBB8B0D0792E055A97 (void);
// 0x0000085A System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern void Socket_Disconnect_mBE602342DA1C63767110C02BEFF1C45E45037619 (void);
// 0x0000085B System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern void Socket_EndDisconnect_m3CA2C23A595DAB49DB71A18E24E98BE63ABB09B9 (void);
// 0x0000085C System.Void System.Net.Sockets.Socket::Disconnect_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m3CE5479D4ADE00354F21C2B6B40B7DE4C30F8068 (void);
// 0x0000085D System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m97B2794B8CF301AE28B1151EDF0CE8F810636D0E (void);
// 0x0000085E System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mC87CCEF55EF312730B08629F4EA24F4D4311FFC3 (void);
// 0x0000085F System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mA822C50F868C16CA33ED8BEAC5AE2F7D0018F345 (void);
// 0x00000860 System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mAB09C0EF50CCA20B368771E0FB56F788A10C5C21 (void);
// 0x00000861 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndReceive_m76672177BFAD926BA214D664EEE7827AFEA0693B (void);
// 0x00000862 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m55FA162A25E221777277E755B9A3B4D8BCB1CDB0 (void);
// 0x00000863 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mC2987A1339F02BD493366DF0C3FD9A63BF9F0268 (void);
// 0x00000864 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m0DBCB62396D083723FA9E43B847278DE07591E59 (void);
// 0x00000865 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mED8291F42882678A0E7D65A7697E890FCCDA9A46 (void);
// 0x00000866 System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern void Socket_ReceiveFrom_m7115D6E24DEF6BD3BA6A476E18C36D023F2EBEBA (void);
// 0x00000867 System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Net.Sockets.SocketError&)
extern void Socket_ReceiveFrom_m743C33ED62910EE4B6850400AA0FE7D44337C112 (void);
// 0x00000868 System.IAsyncResult System.Net.Sockets.Socket::BeginReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.AsyncCallback,System.Object)
extern void Socket_BeginReceiveFrom_m2172BFF2AE75E731BF10D25964401F7C6A3F6F29 (void);
// 0x00000869 System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern void Socket_EndReceiveFrom_m534A60EABD1A1FCE593901355FC7E840C94B1AA4 (void);
// 0x0000086A System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_mEA5003975D91AB2F18A6CF7E6889FF0D3D139B31 (void);
// 0x0000086B System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_m43D3E1FA721210154B38D2EF7F2135625C61A613 (void);
// 0x0000086C System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_m4652C4C32F15F5B18A7AF28086B87C074844AEA4 (void);
// 0x0000086D System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_mFBF7C653CB5BC6BA91F4415378F34F13897259DE (void);
// 0x0000086E System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_mA6C244A07735EEA6B4DA335545237F0FF42F8A7C (void);
// 0x0000086F System.Void System.Net.Sockets.Socket::BeginSendCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
extern void Socket_BeginSendCallback_m2E4DF0CAEE665252159EE10E8EFA46463980F5CF (void);
// 0x00000870 System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndSend_m58F48E67A449034B31B52F7EF2F46856FBCE0310 (void);
// 0x00000871 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m23758BA709E17D55050E23A679DC8149B2944C1A (void);
// 0x00000872 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mF991C3643BB5E358474652659680232787B12927 (void);
// 0x00000873 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m1D6B90528CD689D0E857CAE776E573E178362D37 (void);
// 0x00000874 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mC7309CA15FA175E000DCF98711950B46D1250D8C (void);
// 0x00000875 System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern void Socket_SendTo_m95926F192663BB81CC267386B93F6D8E57FDF434 (void);
// 0x00000876 System.IAsyncResult System.Net.Sockets.Socket::BeginSendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint,System.AsyncCallback,System.Object)
extern void Socket_BeginSendTo_m964B09576701931F5DE9CCA8370738B0BFC56831 (void);
// 0x00000877 System.Void System.Net.Sockets.Socket::BeginSendToCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
extern void Socket_BeginSendToCallback_mF313F700ACF73A6E01F563710704BDE606083496 (void);
// 0x00000878 System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern void Socket_EndSendTo_m8A51FA7E8F6D65435DA47F1DD7D74C9695884CF1 (void);
// 0x00000879 System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_SendTo_internal_m8F2A58A31FF586CAB14F7100973E83A1D9C6BEF1 (void);
// 0x0000087A System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_SendTo_internal_mC9ABBD01ED1CA808E364521D5795351722EDA18E (void);
// 0x0000087B System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern void Socket_GetSocketOption_m0810701BA5C30F393D05386BA150A87CA905710D (void);
// 0x0000087C System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_mB80B47214B569FD08FD3D83DC4AD23F30EF0E1F5 (void);
// 0x0000087D System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_m7C531C9B7D40C1730EBEDF12EA12559B3AC6A95D (void);
// 0x0000087E System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern void Socket_SetSocketOption_mDD4791B69C63D5156C5F733593D5888EDF7A7C93 (void);
// 0x0000087F System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_m4CD6A4EB2E6B43A654E7393C15E6339DA717699A (void);
// 0x00000880 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_m79AFC3FAB34B01E7749886DF7D3DFF10223953AF (void);
// 0x00000881 System.Void System.Net.Sockets.Socket::Close()
extern void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (void);
// 0x00000882 System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern void Socket_Close_m77322C5F6C16BCE94498430C920EC1EBCF8BC8A2 (void);
// 0x00000883 System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern void Socket_Close_internal_mDC62C0CC0402756EC2AF208253EA987D38C1C97C (void);
// 0x00000884 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_mDB5B705BAEE0962DF070CC97E4569277C1BAB3C7 (void);
// 0x00000885 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_mEBB0DF91C761500931F2A3D7CE3103ECE0553060 (void);
// 0x00000886 System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern void Socket_Dispose_m24CC84D16DA94C78C460A3E2EC7068273E40B710 (void);
// 0x00000887 System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern void Socket_Linger_m8BC490F462914AEE570BB8C5883DF5B70967D823 (void);
// 0x00000888 System.Void System.Net.Sockets.Socket::ThrowIfDisposedAndClosed()
extern void Socket_ThrowIfDisposedAndClosed_mCDA9C2603B4166665F14BABFA4FB3423508DEAA7 (void);
// 0x00000889 System.Void System.Net.Sockets.Socket::ThrowIfBufferNull(System.Byte[])
extern void Socket_ThrowIfBufferNull_m038FD1656C891AD4AF2883AFBA1084CF95286252 (void);
// 0x0000088A System.Void System.Net.Sockets.Socket::ThrowIfBufferOutOfRange(System.Byte[],System.Int32,System.Int32)
extern void Socket_ThrowIfBufferOutOfRange_m06C012616B2650E2344CFADF8D7DEDE3A1F6272F (void);
// 0x0000088B System.Void System.Net.Sockets.Socket::ThrowIfUdp()
extern void Socket_ThrowIfUdp_mCC07B58F7A539B485A355A28D36174F6F1CC3FEA (void);
// 0x0000088C System.Net.Sockets.SocketAsyncResult System.Net.Sockets.Socket::ValidateEndIAsyncResult(System.IAsyncResult,System.String,System.String)
extern void Socket_ValidateEndIAsyncResult_m509940324A570251B33301A59DC3C01B5DAB944A (void);
// 0x0000088D System.Void System.Net.Sockets.Socket::QueueIOSelectorJob(System.Threading.SemaphoreSlim,System.IntPtr,System.IOSelectorJob)
extern void Socket_QueueIOSelectorJob_m5BF661B575E897D2F8A03CB1A189674EA977EFB5 (void);
// 0x0000088E System.Net.IPEndPoint System.Net.Sockets.Socket::RemapIPEndPoint(System.Net.IPEndPoint)
extern void Socket_RemapIPEndPoint_m3EF595CE2E7BCDF1CBFEA02E101908877FF90706 (void);
// 0x0000088F System.Void System.Net.Sockets.Socket::cancel_blocking_socket_operation(System.Threading.Thread)
extern void Socket_cancel_blocking_socket_operation_m14366BBE65240C8833ED22AE8DE299E771FA3058 (void);
// 0x00000890 System.Int32 System.Net.Sockets.Socket::get_FamilyHint()
extern void Socket_get_FamilyHint_m9C8E3739473BE1AF6E8FDD6FD3579BE5A9675224 (void);
// 0x00000891 System.Boolean System.Net.Sockets.Socket::IsProtocolSupported_internal(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_internal_m5C586C81E1F7B545669E57AE413AF07A6400B907 (void);
// 0x00000892 System.Boolean System.Net.Sockets.Socket::IsProtocolSupported(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_mD0EC79AB174CC92B01EEC866E6837CCF1B330A37 (void);
// 0x00000893 System.Void System.Net.Sockets.Socket::.cctor()
extern void Socket__cctor_mC1130CB5B4FF386DBF641F72A301C65142EF6AD2 (void);
// 0x00000894 System.Void System.Net.Sockets.Socket/<>c::.cctor()
extern void U3CU3Ec__cctor_m189E5660A587DF9A7CA7B87434E92DB20CFE6DD5 (void);
// 0x00000895 System.Void System.Net.Sockets.Socket/<>c::.ctor()
extern void U3CU3Ec__ctor_m421B31AEC17C6130D0F77B8823F05048643B8A2C (void);
// 0x00000896 System.Void System.Net.Sockets.Socket/<>c::<BeginSend>b__241_0(System.IOAsyncResult)
extern void U3CU3Ec_U3CBeginSendU3Eb__241_0_mED3657F5D9278E1CF28553337FDB5BB377EDFCF4 (void);
// 0x00000897 System.Void System.Net.Sockets.Socket/<>c::<BeginSendTo>b__253_0(System.IOAsyncResult)
extern void U3CU3Ec_U3CBeginSendToU3Eb__253_0_m325D72F5BDA8C4CACF9D6AEBEE6D9C610ACA8551 (void);
// 0x00000898 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_0(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_0_mA1E4E9EBD8C59F3452F3C291A116338BD04123B3 (void);
// 0x00000899 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_1(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_1_mFE31CFBA6F2BE4A47926572EE46D8368D4BB6D3D (void);
// 0x0000089A System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_2(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_2_mEEA9AFDA35A729986A198CCC9785205946F10425 (void);
// 0x0000089B System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_3(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_3_m6DC581C3C4C027974F71C41B8E3AD0E9C64405BA (void);
// 0x0000089C System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_4(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_4_m8D8DA2E8BC6EAD867C7FB95D126E3C0B8CBC2630 (void);
// 0x0000089D System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_5(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_5_m124EFFED3D1E44E4C1A5F5A1E586AFBEC6EB42D1 (void);
// 0x0000089E System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_6(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_6_mC8539B0D721812B995C06217EC22C578EF76E01A (void);
// 0x0000089F System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_7(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_7_mB19175AFC1F2BB2A749184A61DD84BBB76135E45 (void);
// 0x000008A0 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_8(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_8_mA9F0B14FEA60E5CA4D29CDF2F8BBABE4CEDEDB5F (void);
// 0x000008A1 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_9(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_9_mBA3DCDDE64656E216E23EC585A364C692370765E (void);
// 0x000008A2 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_10(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_10_m7AB7D356C3FD8B2B8BF0C280B14675A3D597501F (void);
// 0x000008A3 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_11(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_11_m54D0A1A002B2CA233DAA2E13818D0B514C750156 (void);
// 0x000008A4 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_12(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_12_m6A2545287216688A2636B385C1E550CA4C6E12F7 (void);
// 0x000008A5 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_13(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_13_m557F5E3E30E4AAF3D185278BAB5EEC27AA33C657 (void);
// 0x000008A6 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_14(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_14_m2E7D16D51C6DFA7706CFBC0A906A81BA94CA2932 (void);
// 0x000008A7 System.Void System.Net.Sockets.Socket/<>c__DisplayClass242_0::.ctor()
extern void U3CU3Ec__DisplayClass242_0__ctor_m37038B01FD9E383353E2D3618C0E6C1CA443298F (void);
// 0x000008A8 System.Void System.Net.Sockets.Socket/<>c__DisplayClass242_0::<BeginSendCallback>b__0(System.IOAsyncResult)
extern void U3CU3Ec__DisplayClass242_0_U3CBeginSendCallbackU3Eb__0_m2D1B9158103E534CC52214422CE5B043F4CEE08E (void);
// 0x000008A9 System.Void System.Net.Sockets.Socket/<>c__DisplayClass254_0::.ctor()
extern void U3CU3Ec__DisplayClass254_0__ctor_m2859C076248F2A57503930ECD1D797CA1CFF5ECA (void);
// 0x000008AA System.Void System.Net.Sockets.Socket/<>c__DisplayClass254_0::<BeginSendToCallback>b__0(System.IOAsyncResult)
extern void U3CU3Ec__DisplayClass254_0_U3CBeginSendToCallbackU3Eb__0_mB7A594123AD3383D0A57E5F3232D3CB08ADC3C4A (void);
// 0x000008AB System.Void System.Net.Sockets.Socket/<>c__DisplayClass298_0::.ctor()
extern void U3CU3Ec__DisplayClass298_0__ctor_m24532A068CEE2B919D0FD16BC70121982187EB94 (void);
// 0x000008AC System.Void System.Net.Sockets.Socket/<>c__DisplayClass298_0::<QueueIOSelectorJob>b__0(System.Threading.Tasks.Task)
extern void U3CU3Ec__DisplayClass298_0_U3CQueueIOSelectorJobU3Eb__0_mF53A22B944AA6C92B918DF06ABFAF923D53824F9 (void);
// 0x000008AD System.Void System.Net.Sockets.TcpClient::.ctor()
extern void TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF (void);
// 0x000008AE System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.Sockets.AddressFamily)
extern void TcpClient__ctor_m1B221687523D22D24C3EAA6C804E13D998CED343 (void);
// 0x000008AF System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.Sockets.Socket)
extern void TcpClient__ctor_m4891C4797051AF6B75FB846DC0E09BE3527A2188 (void);
// 0x000008B0 System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern void TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395 (void);
// 0x000008B1 System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
extern void TcpClient_set_Client_m932460A905C55EC815A5471D37C2EF7DDE63EFCB (void);
// 0x000008B2 System.Boolean System.Net.Sockets.TcpClient::get_Connected()
extern void TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C (void);
// 0x000008B3 System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
extern void TcpClient_Connect_m6E8AD9DC60C1B44FCFB27223E88F21AC78ABCC23 (void);
// 0x000008B4 System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPEndPoint)
extern void TcpClient_Connect_m2B56642B9B1E9767444A7BA29AB12456AC8BEBCC (void);
// 0x000008B5 System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern void TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B (void);
// 0x000008B6 System.Void System.Net.Sockets.TcpClient::Close()
extern void TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE (void);
// 0x000008B7 System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern void TcpClient_Dispose_mD44F6453D48E9FB528D143BB27D384557AA52106 (void);
// 0x000008B8 System.Void System.Net.Sockets.TcpClient::Dispose()
extern void TcpClient_Dispose_m621D5436D4091ADC22194DEB8774FB50E9CC7DE7 (void);
// 0x000008B9 System.Void System.Net.Sockets.TcpClient::Finalize()
extern void TcpClient_Finalize_mFBDA36FFECC5373631CC601903380AFC596608DA (void);
// 0x000008BA System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
extern void TcpClient_set_ReceiveTimeout_m36276E390F5FDFCC5E170BC187B36DA66869239D (void);
// 0x000008BB System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
extern void TcpClient_set_SendTimeout_m323916999A477F938121A52B1192D6B94DFC3F41 (void);
// 0x000008BC System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
extern void TcpClient_set_NoDelay_mEBF30E23E072AD94F1FC9F9D2AD0134016FBE492 (void);
// 0x000008BD System.Void System.Net.Sockets.TcpClient::initialize()
extern void TcpClient_initialize_m50BEA4060C1628784A0B66E2628A0A8110ED3B97 (void);
// 0x000008BE System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern void TcpListener__ctor_m2E1AEE3C98472DD2BB2439725CF0AF62505971B7 (void);
// 0x000008BF System.Net.Sockets.TcpListener System.Net.Sockets.TcpListener::Create(System.Int32)
extern void TcpListener_Create_mF6BA5823E4D97C8F594A061F4D8AD4F7E54B55C0 (void);
// 0x000008C0 System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
extern void TcpListener_get_Server_m47C4797186DDB94DBDADE5FC567B56BD292D88C6 (void);
// 0x000008C1 System.Void System.Net.Sockets.TcpListener::Start()
extern void TcpListener_Start_m7F59BAC98F3819580CE5F2D911513D42FF21F101 (void);
// 0x000008C2 System.Void System.Net.Sockets.TcpListener::Start(System.Int32)
extern void TcpListener_Start_m6A01A932A65F9C820E69485E28385CBEB777ED34 (void);
// 0x000008C3 System.Void System.Net.Sockets.TcpListener::Stop()
extern void TcpListener_Stop_m9087121EA1A353EA84DEFE49BFBAE810155AFA5A (void);
// 0x000008C4 System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern void TcpListener_AcceptTcpClient_mA55444BAE76E163D81C41D0D46D07F67662E48C2 (void);
// 0x000008C5 System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
extern void UdpClient__ctor_m16B5D497B74A33323D10285538BF31147B2E5984 (void);
// 0x000008C6 System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32,System.Net.Sockets.AddressFamily)
extern void UdpClient__ctor_m6E7C38C5468E7D71AAEABCD93CBE81E8DC25EE8C (void);
// 0x000008C7 System.Net.Sockets.Socket System.Net.Sockets.UdpClient::get_Client()
extern void UdpClient_get_Client_mE07E2E6ECA14E7B0631E71322216FC4F661AC4B0 (void);
// 0x000008C8 System.Void System.Net.Sockets.UdpClient::set_Client(System.Net.Sockets.Socket)
extern void UdpClient_set_Client_mB47A406C236E22ED96CB490005991BC1BD794C05 (void);
// 0x000008C9 System.Void System.Net.Sockets.UdpClient::set_MulticastLoopback(System.Boolean)
extern void UdpClient_set_MulticastLoopback_m4A15F688F88CB143B9DB7DA53872169852854A76 (void);
// 0x000008CA System.Void System.Net.Sockets.UdpClient::set_EnableBroadcast(System.Boolean)
extern void UdpClient_set_EnableBroadcast_mEF85C1CC00B369A1E664636A05975FABCE1A1055 (void);
// 0x000008CB System.Void System.Net.Sockets.UdpClient::Close()
extern void UdpClient_Close_mA85B745647A63FDF485BEF7C5E59567C0430695E (void);
// 0x000008CC System.Void System.Net.Sockets.UdpClient::FreeResources()
extern void UdpClient_FreeResources_m4E063109A69CA8C0ABED9BFABF65131E09FD1E49 (void);
// 0x000008CD System.Void System.Net.Sockets.UdpClient::Dispose()
extern void UdpClient_Dispose_mA3999F7BD0780AECDC27B2274BFC61B56C163ADB (void);
// 0x000008CE System.Void System.Net.Sockets.UdpClient::Dispose(System.Boolean)
extern void UdpClient_Dispose_m909F37E4E1B2FA1B35452459E1E9655519096509 (void);
// 0x000008CF System.Void System.Net.Sockets.UdpClient::CheckForBroadcast(System.Net.IPAddress)
extern void UdpClient_CheckForBroadcast_mE4313D0D2053DA5AD2128E2F8F3E048CDE639057 (void);
// 0x000008D0 System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern void UdpClient_Send_mA99A0DDFDD01BFFA3B7C99E62928D72C80D90543 (void);
// 0x000008D1 System.IAsyncResult System.Net.Sockets.UdpClient::BeginSend(System.Byte[],System.Int32,System.Net.IPEndPoint,System.AsyncCallback,System.Object)
extern void UdpClient_BeginSend_m93531B72BD7DE277D00D75E5242354169E1BFC4D (void);
// 0x000008D2 System.Int32 System.Net.Sockets.UdpClient::EndSend(System.IAsyncResult)
extern void UdpClient_EndSend_mA5A0412117CCBD69560D591B5C6D9736A5094C0F (void);
// 0x000008D3 System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
extern void UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302 (void);
// 0x000008D4 System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
extern void UdpClient_EndReceive_mF25D1BFECC2581E32DB6A1202EA4670B20580A4F (void);
// 0x000008D5 System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.UdpClient::SendAsync(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern void UdpClient_SendAsync_m63BB8F04167BA24167E5B1F0B54574EEBF5D90B1 (void);
// 0x000008D6 System.Threading.Tasks.Task`1<System.Net.Sockets.UdpReceiveResult> System.Net.Sockets.UdpClient::ReceiveAsync()
extern void UdpClient_ReceiveAsync_mFE2D5A49B3724ECD0EBA5CA294EF5B89A1666103 (void);
// 0x000008D7 System.Void System.Net.Sockets.UdpClient::createClientSocket()
extern void UdpClient_createClientSocket_m2C189F4006CA33C16101017209A6107503927A78 (void);
// 0x000008D8 System.IAsyncResult System.Net.Sockets.UdpClient::<ReceiveAsync>b__64_0(System.AsyncCallback,System.Object)
extern void UdpClient_U3CReceiveAsyncU3Eb__64_0_mA5C8FA42AB232DCB9C72F69954E39562D3AD80E3 (void);
// 0x000008D9 System.Net.Sockets.UdpReceiveResult System.Net.Sockets.UdpClient::<ReceiveAsync>b__64_1(System.IAsyncResult)
extern void UdpClient_U3CReceiveAsyncU3Eb__64_1_m25A655348C6DB3BBA54428936A734BE0F484CB7F (void);
// 0x000008DA System.Void System.Net.Sockets.UdpReceiveResult::.ctor(System.Byte[],System.Net.IPEndPoint)
extern void UdpReceiveResult__ctor_m8BBB681664BA7DE9BBBBAB83790B79DB7A11622D (void);
// 0x000008DB System.Byte[] System.Net.Sockets.UdpReceiveResult::get_Buffer()
extern void UdpReceiveResult_get_Buffer_mE4C6D3176994CE67B2F457D85B5CF9D710809BC1 (void);
// 0x000008DC System.Net.IPEndPoint System.Net.Sockets.UdpReceiveResult::get_RemoteEndPoint()
extern void UdpReceiveResult_get_RemoteEndPoint_m7FEC108ADC0081AAAA70FB21E070DE358DE7084E (void);
// 0x000008DD System.Int32 System.Net.Sockets.UdpReceiveResult::GetHashCode()
extern void UdpReceiveResult_GetHashCode_mC060461B3CAE3B0D052C81DE13EB6DBAC75DE90C (void);
// 0x000008DE System.Boolean System.Net.Sockets.UdpReceiveResult::Equals(System.Object)
extern void UdpReceiveResult_Equals_mEDF64AE5BA4817B82D0AF66C9FB57AA54B2E3B81 (void);
// 0x000008DF System.Boolean System.Net.Sockets.UdpReceiveResult::Equals(System.Net.Sockets.UdpReceiveResult)
extern void UdpReceiveResult_Equals_mA0E30DD7F34BE3921D005918E9DB8C797AC1605D (void);
// 0x000008E0 System.Void System.Net.Sockets.SafeSocketHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeSocketHandle__ctor_m7A417F105464C193628218AF4E93B797E8888480 (void);
// 0x000008E1 System.Boolean System.Net.Sockets.SafeSocketHandle::ReleaseHandle()
extern void SafeSocketHandle_ReleaseHandle_m2DF10268C0814FED4266C031FD32D58B31CA5409 (void);
// 0x000008E2 System.Void System.Net.Sockets.SafeSocketHandle::RegisterForBlockingSyscall()
extern void SafeSocketHandle_RegisterForBlockingSyscall_m648E07077BFE30CFD66FEAAFD0AE595F8BD67E60 (void);
// 0x000008E3 System.Void System.Net.Sockets.SafeSocketHandle::UnRegisterForBlockingSyscall()
extern void SafeSocketHandle_UnRegisterForBlockingSyscall_m2F2BD3A6CFE6CEF5587ED4D8EAE441CBC0E945AB (void);
// 0x000008E4 System.Void System.Net.Sockets.SafeSocketHandle::.cctor()
extern void SafeSocketHandle__cctor_m53EFD60FADB351C93A9ECAEF0F7F41A6C5D79A84 (void);
// 0x000008E5 System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern void SocketAsyncEventArgs_get_AcceptSocket_m3BD8876BC4B1859E1E7956AD9B3E0227B9E77F75 (void);
// 0x000008E6 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern void SocketAsyncEventArgs_set_AcceptSocket_m7EEFF83859DD66A54E98A34FB7000DD670F1B1C1 (void);
// 0x000008E7 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern void SocketAsyncEventArgs_set_BytesTransferred_mFEA9222385B83E3CAD5546E53F1C3F81C5EEA4AE (void);
// 0x000008E8 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern void SocketAsyncEventArgs_set_SocketError_mFCDAA84BC41D0B28B2517AFD1DCBADCFAAE29499 (void);
// 0x000008E9 System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern void SocketAsyncEventArgs_Dispose_m1CD7F7378013D412BAEAAE4E96CC7DBEB54A7168 (void);
// 0x000008EA System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern void SocketAsyncEventArgs_Dispose_m2E653A7ACE155AA1533C72CF1C07EDD2258DB39E (void);
// 0x000008EB System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete()
extern void SocketAsyncEventArgs_Complete_mA77F4405B5C9CF2AEE3CA78A8E4BDECE9F6B972A (void);
// 0x000008EC System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern void SocketAsyncEventArgs_OnCompleted_m330F7F5F140260C0AFCAC74F160C2EF9BA23AAC8 (void);
// 0x000008ED System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
extern void SocketAsyncResult_get_Handle_mA1FCAC625E2265493F931EF8C717E50BE7921ABB (void);
// 0x000008EE System.Void System.Net.Sockets.SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult__ctor_mA600493FFA7C8A3553FA39CBFF18CF8A8F890E0F (void);
// 0x000008EF System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
extern void SocketAsyncResult_get_ErrorCode_m0888A12E8AE75A62CDC76F139829240215E8B6DE (void);
// 0x000008F0 System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
extern void SocketAsyncResult_CheckIfThrowDelayedException_mA857B11642F239B6FE95EC9E57F99E01F114FCAD (void);
// 0x000008F1 System.Void System.Net.Sockets.SocketAsyncResult::CompleteDisposed()
extern void SocketAsyncResult_CompleteDisposed_m7D814AACBE449F4F68500B3594EB71E755FCDBE9 (void);
// 0x000008F2 System.Void System.Net.Sockets.SocketAsyncResult::Complete()
extern void SocketAsyncResult_Complete_m956632BDCB195816D5BD8F57B6493329C10DCD32 (void);
// 0x000008F3 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
extern void SocketAsyncResult_Complete_m7D9B9A60DFD7281D5EE7FD6EFE07BA4E9CB07CA1 (void);
// 0x000008F4 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
extern void SocketAsyncResult_Complete_mDEB3A49AC0BAC2FAF31ABA8523371C5B1B813776 (void);
// 0x000008F5 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern void SocketAsyncResult_Complete_m16E71358A4FB937FCC3DC080EBB00C4C350DA31C (void);
// 0x000008F6 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
extern void SocketAsyncResult_Complete_m2319BDC7E4BBE78746850481BBD1711916949DF6 (void);
// 0x000008F7 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern void SocketAsyncResult_Complete_m2644D553368DA3CF95D49473AEA8B656E73463DF (void);
// 0x000008F8 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern void SocketAsyncResult_Complete_mC7A67AFEC2C33BD0D7E191EB6AA0658C1A53907A (void);
// 0x000008F9 System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
extern void U3CU3Ec__cctor_m0096D8732373ECAFCCC3553EDDE54F1CB40D6EA2 (void);
// 0x000008FA System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
extern void U3CU3Ec__ctor_m6E4EE081CCEE6E72C143685C5612BA492B00F1BA (void);
// 0x000008FB System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
extern void U3CU3Ec_U3CCompleteU3Eb__27_0_mBC254448542DAB8EBC47160EB33A36700D1A32E9 (void);
// 0x000008FC System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern void AuthenticatedStream__ctor_mFCFA51BD3C5544DC6390CF5094E1C0DBA133C172 (void);
// 0x000008FD System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern void AuthenticatedStream_get_InnerStream_mB7DF06B2F011B3F9F301D068438BBD01C24DCDDC (void);
// 0x000008FE System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern void AuthenticatedStream_Dispose_m5610A806886C36698AC932D21F5FBDCAE9FA3E14 (void);
// 0x000008FF System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// 0x00000900 System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern void LocalCertificateSelectionCallback__ctor_m7CAC68C30F63B889613824039FCF827F78475E5F (void);
// 0x00000901 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void LocalCertificateSelectionCallback_Invoke_mC560E6706F8520A856513EBCDE45A2B8F5ED6A3F (void);
// 0x00000902 System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern void LocalCertificateSelectionCallback_BeginInvoke_m1049EE3CAAE57029C936479E2C2F140E0330523A (void);
// 0x00000903 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern void LocalCertificateSelectionCallback_EndInvoke_mCD6CE0AB7C4F4D981BDA29ABCDAD5559891B5112 (void);
// 0x00000904 System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern void RemoteCertificateValidationCallback__ctor_m830361B1E3107AC75A34E07042B4A2567B331E3F (void);
// 0x00000905 System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void RemoteCertificateValidationCallback_Invoke_mD2863E7241D3768F16B3F85589623B4397EDF86F (void);
// 0x00000906 System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern void RemoteCertificateValidationCallback_BeginInvoke_m21A4B4335CCCDF893A38C75DD1171A31B466A687 (void);
// 0x00000907 System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern void RemoteCertificateValidationCallback_EndInvoke_mB5C28FA15AC0883EC65DBD8E6FC5610BF91B9140 (void);
// 0x00000908 System.Void System.Net.Security.LocalCertSelectionCallback::.ctor(System.Object,System.IntPtr)
extern void LocalCertSelectionCallback__ctor_mEA7E533B4C8CF46131F4097785E653C9DF1E2A85 (void);
// 0x00000909 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void LocalCertSelectionCallback_Invoke_m710A68C0A2D13DBB5E8434FC6E0ED75F90E7C176 (void);
// 0x0000090A System.IAsyncResult System.Net.Security.LocalCertSelectionCallback::BeginInvoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern void LocalCertSelectionCallback_BeginInvoke_m52E115683F283EFE63006DC899952C6958350285 (void);
// 0x0000090B System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::EndInvoke(System.IAsyncResult)
extern void LocalCertSelectionCallback_EndInvoke_mAC5037A64623906D66FB80410DF916D3A47E09C4 (void);
// 0x0000090C Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::get_Impl()
extern void SslStream_get_Impl_m29F58D35745DFC013BFAEFCF3952391234D8BC9A (void);
// 0x0000090D Mono.Security.Interface.MonoTlsProvider System.Net.Security.SslStream::GetProvider()
extern void SslStream_GetProvider_m745E2C52DFED4D4045613A88E00B3EF1E20A7033 (void);
// 0x0000090E System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern void SslStream__ctor_m1DFCBD4F4C88F181B1F23EF649F4BAE71EC37580 (void);
// 0x0000090F System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern void SslStream__ctor_m4DA680B7D511456DB5789F62EC80117AE5E16532 (void);
// 0x00000910 System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream__ctor_mA434A097CD9B052AC8510C8B5BFF9E5E6B541DC9 (void);
// 0x00000911 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::CreateMonoSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream_CreateMonoSslStream_m2DA6B0A589490351B37010F5BCF2DA3D734FF266 (void);
// 0x00000912 System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String)
extern void SslStream_AuthenticateAsClient_mA05DB2C8245FB47D1A8258BD68536D498A1BEE08 (void);
// 0x00000913 System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern void SslStream_AuthenticateAsServer_m18D11C1C45EA1C59C392FCE79CCCE0E7F40B1F96 (void);
// 0x00000914 System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern void SslStream_get_IsAuthenticated_m273C64C4DF6FFD4E9772EF714EFA982D4C0A9D83 (void);
// 0x00000915 System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern void SslStream_get_CanSeek_mD0CB66ABEA39EE6BEAB9BD53ADF03476FEA2E266 (void);
// 0x00000916 System.Boolean System.Net.Security.SslStream::get_CanRead()
extern void SslStream_get_CanRead_m49799854D297DCF71A497F8858B64DDD1C10BF00 (void);
// 0x00000917 System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern void SslStream_get_CanWrite_m25569C1704B5F54A27234D1B9B69647D5018CCEF (void);
// 0x00000918 System.Int64 System.Net.Security.SslStream::get_Length()
extern void SslStream_get_Length_m1A4DBA93F0D140FA33892E0193DDE8C6E4175763 (void);
// 0x00000919 System.Int64 System.Net.Security.SslStream::get_Position()
extern void SslStream_get_Position_mDCFD4EFB697DAFF90BA366ED8519487027E21671 (void);
// 0x0000091A System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern void SslStream_set_Position_m4D2093D31E1557590786FA41197CD585CAC79E3A (void);
// 0x0000091B System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern void SslStream_SetLength_m76EF6CF39E831CF1C3E0DD70598938B46441504C (void);
// 0x0000091C System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void SslStream_Seek_m53AB94845DF9E4A126414BC25E024053D43627D1 (void);
// 0x0000091D System.Void System.Net.Security.SslStream::Flush()
extern void SslStream_Flush_m409B5ED6ACB6B2496DAF6725C6CAAF5D51BEADE3 (void);
// 0x0000091E System.Void System.Net.Security.SslStream::CheckDisposed()
extern void SslStream_CheckDisposed_mFCE61CD9DDFDF97DD850B2EAF0908EFE50008DE4 (void);
// 0x0000091F System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern void SslStream_Dispose_mFDB97E2E26CD194DBCBE47710EE5402B2298B919 (void);
// 0x00000920 System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Read_m4FE23134855CE89200771C5A8851DDDDDF182FF3 (void);
// 0x00000921 System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Write_m262369AF62D8AA0CCC4EAC5BF3274693AA27B1BC (void);
// 0x00000922 System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginRead_m4D96895D1B0C302EF4D52681FEDA82D1E53E7C3F (void);
// 0x00000923 System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern void SslStream_EndRead_m918E3DCEB2DE563A21B042D7FF530E96EBA8EF51 (void);
// 0x00000924 System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginWrite_mB8CC50460AFEF640D3C36C68938EE921F3E11844 (void);
// 0x00000925 System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern void SslStream_EndWrite_m796ACEAE821536F59642EDC2748B2A5F232953AB (void);
// 0x00000926 System.Boolean System.Net.NetworkInformation.IPGlobalProperties::get_PlatformNeedsLibCWorkaround()
extern void IPGlobalProperties_get_PlatformNeedsLibCWorkaround_mB5BC19873B5F06D8F8EE23856B7736ECB9C7722B (void);
// 0x00000927 System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::GetIPGlobalProperties()
extern void IPGlobalProperties_GetIPGlobalProperties_m9754DEEC16047B231DA6208C8AE6317BB0F3D8CA (void);
// 0x00000928 System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::InternalGetIPGlobalProperties()
extern void IPGlobalProperties_InternalGetIPGlobalProperties_m74758C4E4DB69BA34CE6923E5C640D335BC6E014 (void);
// 0x00000929 System.String System.Net.NetworkInformation.IPGlobalProperties::get_DomainName()
// 0x0000092A System.Void System.Net.NetworkInformation.IPGlobalProperties::.ctor()
extern void IPGlobalProperties__ctor_m1C3267FBFEC8DD72CC56A4C5EC19C76AA7680B6B (void);
// 0x0000092B System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor()
extern void NetworkInformationException__ctor_mBA60EDC47C5B8373C69C2BB998014CB1B99319FB (void);
// 0x0000092C System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NetworkInformationException__ctor_mFF36F090C8A2438A1C8B75BA60B47933B13DD876 (void);
// 0x0000092D System.Int32 System.Net.NetworkInformation.CommonUnixIPGlobalProperties::getdomainname(System.Byte[],System.Int32)
extern void CommonUnixIPGlobalProperties_getdomainname_mF48E7AAE74313578ACC25E8C9FBAAD66F280DDCD (void);
// 0x0000092E System.String System.Net.NetworkInformation.CommonUnixIPGlobalProperties::get_DomainName()
extern void CommonUnixIPGlobalProperties_get_DomainName_m8F359828BAB5DC5F338C2384908E2D34799BAE86 (void);
// 0x0000092F System.Void System.Net.NetworkInformation.CommonUnixIPGlobalProperties::.ctor()
extern void CommonUnixIPGlobalProperties__ctor_mD26E185C9CE6B7E2D0E6B11FDB9BA7C73429CDDF (void);
// 0x00000930 System.Void System.Net.NetworkInformation.UnixIPGlobalProperties::.ctor()
extern void UnixIPGlobalProperties__ctor_mD82447A37FC171F372C28E442583745EB4D0E744 (void);
// 0x00000931 System.String System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::get_DomainName()
extern void UnixNoLibCIPGlobalProperties_get_DomainName_m472CDAA87DD800EE30A6C2F3154F836CD067538E (void);
// 0x00000932 System.Void System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::.ctor()
extern void UnixNoLibCIPGlobalProperties__ctor_m9FFB83304274EEBCE61CDE8E3E0F86B4B04D49FF (void);
// 0x00000933 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.ctor(System.String)
extern void MibIPGlobalProperties__ctor_m5C3492BED5AC48BA43C068B00D70FF8CC55816E7 (void);
// 0x00000934 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.cctor()
extern void MibIPGlobalProperties__cctor_m874A8D290A3B1DBFD14A091E479BE2924DFA547D (void);
// 0x00000935 System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DomainName()
extern void Win32IPGlobalProperties_get_DomainName_mF0BAF6309AF69217DF87D3EB0C44589ED70419B6 (void);
// 0x00000936 System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::.ctor()
extern void Win32IPGlobalProperties__ctor_mCCF10D6073FCA3B87D513794539C831D75E8D236 (void);
// 0x00000937 System.Int32 System.Net.NetworkInformation.Win32NetworkInterface::GetNetworkParams(System.IntPtr,System.Int32&)
extern void Win32NetworkInterface_GetNetworkParams_mC4CE2C65E1AC80E4C2371950E3201D2DE40A62B7 (void);
// 0x00000938 System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::get_FixedInfo()
extern void Win32NetworkInterface_get_FixedInfo_m5C321EB3F491660D8054D89A57FE8842DE2755E9 (void);
// 0x00000939 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode()
extern void DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_m1FBAB2FA8C0B87ADA0523CAA34F9D5230098A795 (void);
// 0x0000093A System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetSystemWebProxy()
extern void DefaultProxySectionInternal_GetSystemWebProxy_m7BE3F8E1011DD7156B05BEA3264DB8ED549072C0 (void);
// 0x0000093B System.Object System.Net.Configuration.DefaultProxySectionInternal::get_ClassSyncObject()
extern void DefaultProxySectionInternal_get_ClassSyncObject_mB2D90511F956EA13FAB810CBF9A4C656E5D56F65 (void);
// 0x0000093C System.Net.Configuration.DefaultProxySectionInternal System.Net.Configuration.DefaultProxySectionInternal::GetSection()
extern void DefaultProxySectionInternal_GetSection_mC140525EBD14DF74602DFCA7AFECE376AFADE34F (void);
// 0x0000093D System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::get_WebProxy()
extern void DefaultProxySectionInternal_get_WebProxy_m38F5DF1772271FC6014B56D93654B771D745AB9B (void);
// 0x0000093E System.Void System.Net.Configuration.DefaultProxySectionInternal::.ctor()
extern void DefaultProxySectionInternal__ctor_m0C5C6CB50669D34ED3B3699B39170041383E0005 (void);
// 0x0000093F System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::get_Section()
extern void SettingsSectionInternal_get_Section_m109D7450776A48BEFA47FA7CBB521CE6BA0CA5C9 (void);
// 0x00000940 System.Boolean System.Net.Configuration.SettingsSectionInternal::get_Ipv6Enabled()
extern void SettingsSectionInternal_get_Ipv6Enabled_mA9CA51E8A3512524460E9AC8C9DE920F64C33FB8 (void);
// 0x00000941 System.Void System.Net.Configuration.SettingsSectionInternal::.ctor()
extern void SettingsSectionInternal__ctor_mED2DFF382A20FC3136B1514D8BD40B520758F636 (void);
// 0x00000942 System.Void System.Net.Configuration.SettingsSectionInternal::.cctor()
extern void SettingsSectionInternal__cctor_mB44A40867AA454670DC1D71ADE59576183610030 (void);
// 0x00000943 System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern void HybridDictionary__ctor_m18ABDB797A0591DF595BBDD2A03F1670DDD07AA7 (void);
// 0x00000944 System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Boolean)
extern void HybridDictionary__ctor_mBA75388EDF5456916408D7D3954B6873D50BA2F1 (void);
// 0x00000945 System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern void HybridDictionary_get_Item_mE16332A6CE6880D436633519FAC3662ED4A89E11 (void);
// 0x00000946 System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern void HybridDictionary_set_Item_mFFC14A7F4B45807D97503616AF98160061F6B9D3 (void);
// 0x00000947 System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::get_List()
extern void HybridDictionary_get_List_mA5314524D5C411AFB165F07D860010DC0E11D28E (void);
// 0x00000948 System.Void System.Collections.Specialized.HybridDictionary::ChangeOver()
extern void HybridDictionary_ChangeOver_m41ACD333E29ACCFF1C0CF45DF9E09E84EA28F173 (void);
// 0x00000949 System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern void HybridDictionary_get_Count_m170B942CEB7FA1B42BFFB246D72B583BD1397738 (void);
// 0x0000094A System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Keys()
extern void HybridDictionary_get_Keys_m1ED05F9E3965475BA4F787CD61FC93A27AFEBB45 (void);
// 0x0000094B System.Boolean System.Collections.Specialized.HybridDictionary::get_IsReadOnly()
extern void HybridDictionary_get_IsReadOnly_mB58FCC395C6CC8A569B0277DE6D0B02550E786E1 (void);
// 0x0000094C System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern void HybridDictionary_get_SyncRoot_m3A81A716ADC2A40444AF517E38EA943FDC72AB97 (void);
// 0x0000094D System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Values()
extern void HybridDictionary_get_Values_m23B45F48BDCE2FB8A48D818C9868A80A4CE2FB93 (void);
// 0x0000094E System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern void HybridDictionary_Add_m8022C90B2CAE2484ED0D740734EA4E512D8B130D (void);
// 0x0000094F System.Void System.Collections.Specialized.HybridDictionary::Clear()
extern void HybridDictionary_Clear_m9C53B8C32A090321B9D928B0F2B8ACDE1BA8591E (void);
// 0x00000950 System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern void HybridDictionary_Contains_mF8C826101599A5F6EDB300954BD90FDEC4BCA6D6 (void);
// 0x00000951 System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern void HybridDictionary_CopyTo_m130965C0084284EE331912B40157958A1075E4A1 (void);
// 0x00000952 System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern void HybridDictionary_GetEnumerator_m02B2FC70ED4C2E91818DC8EAA3F3602B0DE81437 (void);
// 0x00000953 System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m4B6D49D2814E11C16C7005F84DFC58333BCBFAA0 (void);
// 0x00000954 System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern void HybridDictionary_Remove_mF87829C60C964F938DE42D453582712B726A2CD7 (void);
// 0x00000955 System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern void ListDictionary__ctor_mEB7BEC57F72A27168FCCE46DAC90CD5B8B7088A5 (void);
// 0x00000956 System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern void ListDictionary__ctor_mD1A7D146747D4E3AD93C261C1783CE34B10E48EC (void);
// 0x00000957 System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern void ListDictionary_get_Item_m34D2DAE21AFFB6B1801EDE8A6998732CD9B45605 (void);
// 0x00000958 System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern void ListDictionary_set_Item_m89155730D3E404A1270CBDE7BEEC99138FBC64A0 (void);
// 0x00000959 System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern void ListDictionary_get_Count_m4CB9ACB21730241E566764AAB76B8B2A3D72418B (void);
// 0x0000095A System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern void ListDictionary_get_Keys_m373CB050F926332B5B29A2E0A28708CE12D393F1 (void);
// 0x0000095B System.Boolean System.Collections.Specialized.ListDictionary::get_IsReadOnly()
extern void ListDictionary_get_IsReadOnly_mD2FC02FAB99A9FA7FA8A69F5CAB8E5887AAEC0CE (void);
// 0x0000095C System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern void ListDictionary_get_SyncRoot_m58A889327021D843C7EB9171BD6B0D1E482C8BD7 (void);
// 0x0000095D System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Values()
extern void ListDictionary_get_Values_m57265648B196A12231439F5544E3CBDD6AD4ACB3 (void);
// 0x0000095E System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern void ListDictionary_Add_m2204C61650D1B23A093627DF4D87009A7E3F9EDB (void);
// 0x0000095F System.Void System.Collections.Specialized.ListDictionary::Clear()
extern void ListDictionary_Clear_m9D51C37F441D6390E7FF8B633EFD144F4771DB1E (void);
// 0x00000960 System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern void ListDictionary_Contains_mA832E669186A7B91FF5819A535F8D394C963C508 (void);
// 0x00000961 System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern void ListDictionary_CopyTo_m9B1961C99A5B80996E42431630907C6BC02627A0 (void);
// 0x00000962 System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern void ListDictionary_GetEnumerator_m17E264D47385C88C7C366177CE8127CE933B0F9D (void);
// 0x00000963 System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void ListDictionary_System_Collections_IEnumerable_GetEnumerator_mF0DF8988C2CA6D5D493A61C502F20DA7879FA8E3 (void);
// 0x00000964 System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern void ListDictionary_Remove_m8CDD8E6A5B18DAC6446C1D93BADEB0A804AC9C5E (void);
// 0x00000965 System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern void NodeEnumerator__ctor_m61652E6AF76A5460A6F4EA14BF97B982B7BB0261 (void);
// 0x00000966 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Current()
extern void NodeEnumerator_get_Current_m08DA3FD558CA771BD75B9C9A54FE681EDE668D25 (void);
// 0x00000967 System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
extern void NodeEnumerator_get_Entry_m5C0AAD879BADE3838D42B8525084C8C5DF96C56D (void);
// 0x00000968 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Key()
extern void NodeEnumerator_get_Key_m83C059C6F52DE85B2E1605051400F3751534F8FF (void);
// 0x00000969 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Value()
extern void NodeEnumerator_get_Value_m8532A492ECB3CE11B557109057E81DD2175070C7 (void);
// 0x0000096A System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::MoveNext()
extern void NodeEnumerator_MoveNext_m111785D3C26CEB364566F3E517B3EB7528940552 (void);
// 0x0000096B System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::Reset()
extern void NodeEnumerator_Reset_m66F3E60AB0A5AFCB3B3A8C37399B5357098BDD2E (void);
// 0x0000096C System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
extern void NodeKeyValueCollection__ctor_mBF0291B806BB05362A17B81EDA63C226185DCA6F (void);
// 0x0000096D System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mCC33404006DA28BC9202556B1D653706C914A146 (void);
// 0x0000096E System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_Count()
extern void NodeKeyValueCollection_System_Collections_ICollection_get_Count_m9CCC8AA8BCDAFD60ACCD94566195CF609DED32DF (void);
// 0x0000096F System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
extern void NodeKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m4C48DE5210CB2F1942942B639A14FA49955732F9 (void);
// 0x00000970 System.Collections.IEnumerator System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
extern void NodeKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m338360EE5BF9F49F6AD2458E9C24D7617279B6CF (void);
// 0x00000971 System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
extern void NodeKeyValueEnumerator__ctor_m774CF727E707A8DADE033449AC4AE88A69087236 (void);
// 0x00000972 System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::get_Current()
extern void NodeKeyValueEnumerator_get_Current_mC558946649A91AC239AEE435D9D0AA021AD6B971 (void);
// 0x00000973 System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::MoveNext()
extern void NodeKeyValueEnumerator_MoveNext_mB9B2B50D92E0CEA58D8C98D54115BFC91E17B48B (void);
// 0x00000974 System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::Reset()
extern void NodeKeyValueEnumerator_Reset_mD407B8AC28DADB9B4A16EEEAC17D8C929FF4A656 (void);
// 0x00000975 System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor()
extern void DictionaryNode__ctor_m824EFE3D79F05D11FE0DE6FD5491D2FB1D382619 (void);
// 0x00000976 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern void NameObjectCollectionBase__ctor_m97EB64FF4F1733FB7BA9C6427EA871813AD49C8C (void);
// 0x00000977 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m3A2420574843F0567355F3B2F79D8BB4229580B6 (void);
// 0x00000978 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m1C0BA736F4454310BEAAB54CB2307F905C1A1F8C (void);
// 0x00000979 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
extern void NameObjectCollectionBase__ctor_mFC42544A14AA22758AB189CD5BCC8FE563A9569A (void);
// 0x0000097A System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase__ctor_m0995BB1255888BA4156EF35F69462ECDEBB39C13 (void);
// 0x0000097B System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase_GetObjectData_m751D688171C6E676A6778036561E47AD1E0BD772 (void);
// 0x0000097C System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern void NameObjectCollectionBase_OnDeserialization_mE380D49EDB18F4456CF66DD8790E289BB3D091CD (void);
// 0x0000097D System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
extern void NameObjectCollectionBase_Reset_m3446C8F69C1CD6228C6AB5CE0CB1EB90342B4C4A (void);
// 0x0000097E System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
extern void NameObjectCollectionBase_Reset_m6D9FEB20EBE98529CF3A8A66566526F965D0FC03 (void);
// 0x0000097F System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
extern void NameObjectCollectionBase_FindEntry_m718AABE1DF5F139F552DAA073FB2863EBE4AF77F (void);
// 0x00000980 System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern void NameObjectCollectionBase_get_IsReadOnly_mACD1AE0A27A5AC2E06C73AE37B012D2DE43A1FF8 (void);
// 0x00000981 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern void NameObjectCollectionBase_BaseAdd_mD6FC01196B5CCF6591834C8A9F183B477202B129 (void);
// 0x00000982 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern void NameObjectCollectionBase_BaseGet_m34B277D6BF8AE4C4BCCDA290D62897C9739EA626 (void);
// 0x00000983 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern void NameObjectCollectionBase_BaseGet_m6C79F9B2DF510481D1D71FEE71782074781B8E71 (void);
// 0x00000984 System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern void NameObjectCollectionBase_BaseGetKey_m695607B27E3D7C591C5E630DA5DC611C47B195B7 (void);
// 0x00000985 System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern void NameObjectCollectionBase_GetEnumerator_mAAFB01528169706D8E604D3EA8C9CE9EDAB9B3FD (void);
// 0x00000986 System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern void NameObjectCollectionBase_get_Count_m55654BD7ABD342E64543B6B34A0ED2E55D14172A (void);
// 0x00000987 System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mAF83DFFCF913CB0EB4EA054599CFBA83B285B4E2 (void);
// 0x00000988 System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mDAD72AF014EA323F18F7E6C4DC71DEE13A1CE909 (void);
// 0x00000989 System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
extern void NameObjectCollectionBase__cctor_mB31DAEC0EB0A04003468496FC87D42812F0A0691 (void);
// 0x0000098A System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
extern void NameObjectEntry__ctor_m995C545D6465499656D27A10071FE7C670DCD6A1 (void);
// 0x0000098B System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern void NameObjectKeysEnumerator__ctor_mB9768A57865CD35FD66913A54BD288CD9D6036F3 (void);
// 0x0000098C System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
extern void NameObjectKeysEnumerator_MoveNext_mEA36FF36EF6F1956ED9F9D6D8559A22482760F52 (void);
// 0x0000098D System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
extern void NameObjectKeysEnumerator_Reset_m150D4F13AFA8D2D5D6E26B0A8C05FCE847C02FE9 (void);
// 0x0000098E System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
extern void NameObjectKeysEnumerator_get_Current_m140DD35019E2A824900B7F4A9F116E8AEB80256F (void);
// 0x0000098F System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern void CompatibleComparer__ctor_m26DB6C338A8491558326D0F472D432EAC4D5D3D4 (void);
// 0x00000990 System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
extern void CompatibleComparer_Equals_mBB2FF4E0B234C0A1854821B349899246FDD37E95 (void);
// 0x00000991 System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
extern void CompatibleComparer_GetHashCode_m02DFA8D6B5B49382CD4FA659D2B7F8C7E9000A6B (void);
// 0x00000992 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
extern void CompatibleComparer_get_Comparer_mF8B7EDA05E675046EB7BF2E6DEEFBAE1C2AA5E2F (void);
// 0x00000993 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
extern void CompatibleComparer_get_HashCodeProvider_m2CED6D7A8ED865AE214D806F751C7F17BD24BED3 (void);
// 0x00000994 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
extern void CompatibleComparer_get_DefaultComparer_mA4978DD07C60DB282096F4C5C8E66D7D935C83CB (void);
// 0x00000995 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
extern void CompatibleComparer_get_DefaultHashCodeProvider_m0BD9F3BFCB9AD8D80E14EE483C42A81CA36A9D20 (void);
// 0x00000996 System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern void NameValueCollection__ctor_m778D8601E84C12D4EABEAA3A8B495FB92A953909 (void);
// 0x00000997 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameValueCollection__ctor_m5E1391BA01E5D9BAF25A865025F031283B05AC62 (void);
// 0x00000998 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
extern void NameValueCollection__ctor_mC65E70EA2E216395614CCAB82401B9853AED94AA (void);
// 0x00000999 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameValueCollection__ctor_m5BB309F095815D835ED9E9BF73266383892215C3 (void);
// 0x0000099A System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern void NameValueCollection_InvalidateCachedArrays_mBBA5CF68C6D8E24D304B2A6C94B423702BE024F3 (void);
// 0x0000099B System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
extern void NameValueCollection_GetAsOneString_m701748B8F46B509BA82DE9C72F7EC4E0FEEC664F (void);
// 0x0000099C System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern void NameValueCollection_Add_m2BA01C700F8C0A5A2F6550DA7298887A4FE5C249 (void);
// 0x0000099D System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern void NameValueCollection_Get_m300E47F531EE449FC72B6319D6AC7423AB9E991C (void);
// 0x0000099E System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern void NameValueCollection_get_Item_m2A6445E94FF2B24C9DF6190767D14E7920871CDC (void);
// 0x0000099F System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern void NameValueCollection_Get_mBB1620F0B7E68EA41CE34FACBF5429DC216817DF (void);
// 0x000009A0 System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern void NameValueCollection_GetKey_m61FFBF58CDF5769282DED45F920161A89276EAE2 (void);
// 0x000009A1 System.Void System.Collections.Specialized.OrderedDictionary::.ctor()
extern void OrderedDictionary__ctor_mABFCC28E59BA806C34604B33877C1CEAD0AA9CE9 (void);
// 0x000009A2 System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
extern void OrderedDictionary__ctor_m278F36318DAF73A39FB15CF0ED1439C36237C175 (void);
// 0x000009A3 System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void OrderedDictionary__ctor_mEE01676A6098C432B4981481099AE2C305E606F4 (void);
// 0x000009A4 System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void OrderedDictionary__ctor_mD73E278CB399AD723FEC465939C20D2AAE434B3E (void);
// 0x000009A5 System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
extern void OrderedDictionary_get_Count_m55F1F94E727BA49C8D94E7A7088D4C2E4B33605C (void);
// 0x000009A6 System.Boolean System.Collections.Specialized.OrderedDictionary::get_IsReadOnly()
extern void OrderedDictionary_get_IsReadOnly_mF9796A4518A4F291F1FF0BD4042F5077B75710A2 (void);
// 0x000009A7 System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Keys()
extern void OrderedDictionary_get_Keys_mDE4B67A8DFCD4426DCF60DF7F64DFE423B44D74E (void);
// 0x000009A8 System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::get_objectsArray()
extern void OrderedDictionary_get_objectsArray_m690618ABC6772FE7A565AC5BDF5EE2896EB83045 (void);
// 0x000009A9 System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::get_objectsTable()
extern void OrderedDictionary_get_objectsTable_m0D81CE869362587F2124DAB3CE393E902DBB9F80 (void);
// 0x000009AA System.Object System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_SyncRoot()
extern void OrderedDictionary_System_Collections_ICollection_get_SyncRoot_mFCD92778BDB71764F12583F9F27054EF6957CE42 (void);
// 0x000009AB System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Object)
extern void OrderedDictionary_get_Item_m4BA1DD5702BF43A016E1785285DE53D4E9902E7B (void);
// 0x000009AC System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Object,System.Object)
extern void OrderedDictionary_set_Item_mA8C71C7FD9354ABDCB0DBFB1977459680BD748BB (void);
// 0x000009AD System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Values()
extern void OrderedDictionary_get_Values_mF389293625F26A739573D543FB5E21FEC6BDAE13 (void);
// 0x000009AE System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
extern void OrderedDictionary_Add_mF2EC1AE8051D89FD384B7D8B25E03E8A1817BC19 (void);
// 0x000009AF System.Void System.Collections.Specialized.OrderedDictionary::Clear()
extern void OrderedDictionary_Clear_mBC338E68811632FEA7E12E1C8CB896A9D17D9D74 (void);
// 0x000009B0 System.Boolean System.Collections.Specialized.OrderedDictionary::Contains(System.Object)
extern void OrderedDictionary_Contains_m957B6F29E97A93AB5A0AF9272ED0AB65E4401EF1 (void);
// 0x000009B1 System.Void System.Collections.Specialized.OrderedDictionary::CopyTo(System.Array,System.Int32)
extern void OrderedDictionary_CopyTo_m6D7C307CED28372BFE59C365B4392EBCDE64CFE2 (void);
// 0x000009B2 System.Int32 System.Collections.Specialized.OrderedDictionary::IndexOfKey(System.Object)
extern void OrderedDictionary_IndexOfKey_m9CC5C8BCA6AEAED5821C6A8235DB9C90140291D2 (void);
// 0x000009B3 System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object)
extern void OrderedDictionary_OnDeserialization_mC430F0CA656131C627EE2F1920749DD36A745357 (void);
// 0x000009B4 System.Void System.Collections.Specialized.OrderedDictionary::Remove(System.Object)
extern void OrderedDictionary_Remove_m32466C87EC2ED256642300B29B89101DD5227AA0 (void);
// 0x000009B5 System.Collections.IDictionaryEnumerator System.Collections.Specialized.OrderedDictionary::GetEnumerator()
extern void OrderedDictionary_GetEnumerator_mDFBC515FDE9C8A8AE56064C0655C19C3D130EB26 (void);
// 0x000009B6 System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m47B64CD9FF588025B1C067C150670B2EA363CB29 (void);
// 0x000009B7 System.Void System.Collections.Specialized.OrderedDictionary::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void OrderedDictionary_GetObjectData_m64EA42255566CF993C85C556897C5A73263AA5C6 (void);
// 0x000009B8 System.Void System.Collections.Specialized.OrderedDictionary::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1B07A96F704FCEDF5A1163E40C894FC77FA6EDDB (void);
// 0x000009B9 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::.ctor(System.Collections.ArrayList,System.Int32)
extern void OrderedDictionaryEnumerator__ctor_m0C688CE7F033E4A145EBC003E5FAC145EC117265 (void);
// 0x000009BA System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Current()
extern void OrderedDictionaryEnumerator_get_Current_m3D8DF89674C33D4DEA12463FEC53FCF1780ADE70 (void);
// 0x000009BB System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Entry()
extern void OrderedDictionaryEnumerator_get_Entry_m378B3659B18D635E114695226BDA8094AFC46E06 (void);
// 0x000009BC System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Key()
extern void OrderedDictionaryEnumerator_get_Key_m536FA8AF2BBBED8E47FBF8A3467596654984FF25 (void);
// 0x000009BD System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Value()
extern void OrderedDictionaryEnumerator_get_Value_m2199F649E120FDE587520D7DED478C7E0A764DDE (void);
// 0x000009BE System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::MoveNext()
extern void OrderedDictionaryEnumerator_MoveNext_m93D8BD7C91EFCCBFDD85BED6FF9130E957652CD1 (void);
// 0x000009BF System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::Reset()
extern void OrderedDictionaryEnumerator_Reset_m6FC4640DE96193B4BD596C9476DD56E034A9440B (void);
// 0x000009C0 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::.ctor(System.Collections.ArrayList,System.Boolean)
extern void OrderedDictionaryKeyValueCollection__ctor_mD7596CC3855A371FF8EB8C05B3E886EC52F081BC (void);
// 0x000009C1 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_mE81AE69E425015D650DB16850C8BA51D73E8320A (void);
// 0x000009C2 System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_Count()
extern void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m247949B9D6061A309DACDD9CB1D8982C0AAE4E0C (void);
// 0x000009C3 System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
extern void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m2415812982AE4651AE467053E83243522CE5F979 (void);
// 0x000009C4 System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m0A5A85B1101591DE72343805CD5F1DE725DC0D04 (void);
// 0x000009C5 System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern void StringCollection_get_Item_m6289E4904A6358446DE30B8D06EFAD2FEEB2EDF8 (void);
// 0x000009C6 System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern void StringCollection_set_Item_mEAE8DDA53D08232F6597E9091A7FEB8496BF7FDD (void);
// 0x000009C7 System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern void StringCollection_get_Count_m4307EBE5F76A894AE550321977CE58DDDFCB85BF (void);
// 0x000009C8 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern void StringCollection_System_Collections_IList_get_IsReadOnly_m4A1506C2B94AF66FB47FDCDFC434ACB8488AC47F (void);
// 0x000009C9 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern void StringCollection_System_Collections_IList_get_IsFixedSize_m26E281D01AF589C9BB1C09989C6F2AC9AFFE01D4 (void);
// 0x000009CA System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern void StringCollection_Add_mF15C799896470DD2C807334107ADFD01C8BAF497 (void);
// 0x000009CB System.Void System.Collections.Specialized.StringCollection::Clear()
extern void StringCollection_Clear_mD4940751F46D8B3EBCB148A0A5B14A5AE2FC217C (void);
// 0x000009CC System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern void StringCollection_Contains_mF8AD018C19F7760E4693B1A24148F8659C486502 (void);
// 0x000009CD System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
extern void StringCollection_CopyTo_m22FDAD087DBC9ACAC1C2BD3614AD448C173F8893 (void);
// 0x000009CE System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern void StringCollection_IndexOf_m860B2D7C91CE7633F376CB8AB7C46CC1E103EC17 (void);
// 0x000009CF System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern void StringCollection_Insert_m9847FF62B17A3776A419642922F93D39356198BC (void);
// 0x000009D0 System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern void StringCollection_Remove_m3FF866980BE6C484CEEB9C42B97BAC6B602AE95E (void);
// 0x000009D1 System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern void StringCollection_RemoveAt_mA455E99CC2C275AC94FE206E49E87B433257EAA2 (void);
// 0x000009D2 System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern void StringCollection_get_SyncRoot_m2A6A118CF992AA80F7923CE3E6A49D25AC7F730B (void);
// 0x000009D3 System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern void StringCollection_System_Collections_IList_get_Item_m1FB397E9881B366B0E0BD85883F5F8EE4B0A2E66 (void);
// 0x000009D4 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_set_Item_m84FFCB0C0EDF382722E6D86EA441056197E742BC (void);
// 0x000009D5 System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern void StringCollection_System_Collections_IList_Add_m31EA60F5452738475A79F562CC741336D2C9A2CF (void);
// 0x000009D6 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern void StringCollection_System_Collections_IList_Contains_mF385154C4DDD61DDFE3D9273598E212977DDDDF8 (void);
// 0x000009D7 System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern void StringCollection_System_Collections_IList_IndexOf_mDE4B1B0D406BCE5065474EF50EED32663E996177 (void);
// 0x000009D8 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_Insert_m97C6AF183F6E33425F90A6746B1B9BCA2EC18DB2 (void);
// 0x000009D9 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern void StringCollection_System_Collections_IList_Remove_m81D305F7785DD4D4BCDBD5439004D122E26A6A36 (void);
// 0x000009DA System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void StringCollection_System_Collections_ICollection_CopyTo_m911BB41A37B6860D0E98A5EF71F0C00797408A77 (void);
// 0x000009DB System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern void StringCollection_System_Collections_IEnumerable_GetEnumerator_m1620B22B92CB96A6E4AFB2775FBB9D5E0F9666DE (void);
// 0x000009DC System.Void System.Collections.Specialized.StringCollection::.ctor()
extern void StringCollection__ctor_m4358E3B91F6861DD166CAC4BD9B2D353FDA5FA14 (void);
// 0x000009DD System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_mF54F6C422B6D29BDE6700F27D6C4D78E5F13E230 (void);
// 0x000009DE System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_mAE1BAD26F0E1B83966CF8778C43E93A70FB1C6F1 (void);
// 0x000009DF System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m943A83837BE2284CBD8315F433255773B093F0C8 (void);
// 0x000009E0 System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m418F59CD7EAD5BB4EB72880D7A74233BB2BE34B3 (void);
// 0x000009E1 System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m1F58654B1EB9756618F21C8BC716D7F5B771EB38 (void);
// 0x000009E2 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000009E3 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
// 0x000009E4 System.Void System.Collections.Generic.IDictionaryDebugView`2::.ctor(System.Collections.Generic.IDictionary`2<K,V>)
// 0x000009E5 System.Collections.Generic.KeyValuePair`2<K,V>[] System.Collections.Generic.IDictionaryDebugView`2::get_Items()
// 0x000009E6 System.Void System.Collections.Generic.DictionaryKeyCollectionDebugView`2::.ctor(System.Collections.Generic.ICollection`1<TKey>)
// 0x000009E7 TKey[] System.Collections.Generic.DictionaryKeyCollectionDebugView`2::get_Items()
// 0x000009E8 System.Void System.Collections.Generic.DictionaryValueCollectionDebugView`2::.ctor(System.Collections.Generic.ICollection`1<TValue>)
// 0x000009E9 TValue[] System.Collections.Generic.DictionaryValueCollectionDebugView`2::get_Items()
// 0x000009EA System.Void System.Collections.Generic.LinkedList`1::.ctor()
// 0x000009EB System.Void System.Collections.Generic.LinkedList`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000009EC System.Int32 System.Collections.Generic.LinkedList`1::get_Count()
// 0x000009ED System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::get_First()
// 0x000009EE System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000009EF System.Void System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000009F0 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddFirst(T)
// 0x000009F1 System.Void System.Collections.Generic.LinkedList`1::AddFirst(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000009F2 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddLast(T)
// 0x000009F3 System.Void System.Collections.Generic.LinkedList`1::Clear()
// 0x000009F4 System.Boolean System.Collections.Generic.LinkedList`1::Contains(T)
// 0x000009F5 System.Void System.Collections.Generic.LinkedList`1::CopyTo(T[],System.Int32)
// 0x000009F6 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::Find(T)
// 0x000009F7 System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1::GetEnumerator()
// 0x000009F8 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000009F9 System.Boolean System.Collections.Generic.LinkedList`1::Remove(T)
// 0x000009FA System.Void System.Collections.Generic.LinkedList`1::Remove(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000009FB System.Void System.Collections.Generic.LinkedList`1::RemoveLast()
// 0x000009FC System.Void System.Collections.Generic.LinkedList`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000009FD System.Void System.Collections.Generic.LinkedList`1::OnDeserialization(System.Object)
// 0x000009FE System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
// 0x000009FF System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000A00 System.Void System.Collections.Generic.LinkedList`1::InternalRemoveNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000A01 System.Void System.Collections.Generic.LinkedList`1::ValidateNewNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000A02 System.Void System.Collections.Generic.LinkedList`1::ValidateNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000A03 System.Object System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000A04 System.Void System.Collections.Generic.LinkedList`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000A05 System.Collections.IEnumerator System.Collections.Generic.LinkedList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000A06 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Collections.Generic.LinkedList`1<T>)
// 0x00000A07 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000A08 T System.Collections.Generic.LinkedList`1/Enumerator::get_Current()
// 0x00000A09 System.Object System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000A0A System.Boolean System.Collections.Generic.LinkedList`1/Enumerator::MoveNext()
// 0x00000A0B System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000A0C System.Void System.Collections.Generic.LinkedList`1/Enumerator::Dispose()
// 0x00000A0D System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000A0E System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x00000A0F System.Void System.Collections.Generic.LinkedListNode`1::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
// 0x00000A10 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::get_Next()
// 0x00000A11 T System.Collections.Generic.LinkedListNode`1::get_Value()
// 0x00000A12 System.Void System.Collections.Generic.LinkedListNode`1::Invalidate()
// 0x00000A13 System.Void System.Collections.Generic.Queue`1::.ctor()
// 0x00000A14 System.Void System.Collections.Generic.Queue`1::.ctor(System.Int32)
// 0x00000A15 System.Int32 System.Collections.Generic.Queue`1::get_Count()
// 0x00000A16 System.Object System.Collections.Generic.Queue`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000A17 System.Void System.Collections.Generic.Queue`1::Clear()
// 0x00000A18 System.Void System.Collections.Generic.Queue`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000A19 System.Void System.Collections.Generic.Queue`1::Enqueue(T)
// 0x00000A1A System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1::GetEnumerator()
// 0x00000A1B System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000A1C System.Collections.IEnumerator System.Collections.Generic.Queue`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000A1D T System.Collections.Generic.Queue`1::Dequeue()
// 0x00000A1E T System.Collections.Generic.Queue`1::Peek()
// 0x00000A1F System.Boolean System.Collections.Generic.Queue`1::Contains(T)
// 0x00000A20 T[] System.Collections.Generic.Queue`1::ToArray()
// 0x00000A21 System.Void System.Collections.Generic.Queue`1::SetCapacity(System.Int32)
// 0x00000A22 System.Void System.Collections.Generic.Queue`1::MoveNext(System.Int32&)
// 0x00000A23 System.Void System.Collections.Generic.Queue`1::ThrowForEmptyQueue()
// 0x00000A24 System.Void System.Collections.Generic.Queue`1/Enumerator::.ctor(System.Collections.Generic.Queue`1<T>)
// 0x00000A25 System.Void System.Collections.Generic.Queue`1/Enumerator::Dispose()
// 0x00000A26 System.Boolean System.Collections.Generic.Queue`1/Enumerator::MoveNext()
// 0x00000A27 T System.Collections.Generic.Queue`1/Enumerator::get_Current()
// 0x00000A28 System.Void System.Collections.Generic.Queue`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000A29 System.Object System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000A2A System.Void System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000A2B System.Void System.Collections.Generic.QueueDebugView`1::.ctor(System.Collections.Generic.Queue`1<T>)
// 0x00000A2C T[] System.Collections.Generic.QueueDebugView`1::get_Items()
// 0x00000A2D System.Void System.Collections.Generic.SortedList`2::.ctor()
// 0x00000A2E System.Void System.Collections.Generic.SortedList`2::Add(TKey,TValue)
// 0x00000A2F System.Void System.Collections.Generic.SortedList`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// 0x00000A30 System.Boolean System.Collections.Generic.SortedList`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// 0x00000A31 System.Boolean System.Collections.Generic.SortedList`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// 0x00000A32 System.Void System.Collections.Generic.SortedList`2::set_Capacity(System.Int32)
// 0x00000A33 System.Void System.Collections.Generic.SortedList`2::System.Collections.IDictionary.Add(System.Object,System.Object)
// 0x00000A34 System.Int32 System.Collections.Generic.SortedList`2::get_Count()
// 0x00000A35 System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.SortedList`2::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// 0x00000A36 System.Collections.ICollection System.Collections.Generic.SortedList`2::System.Collections.IDictionary.get_Keys()
// 0x00000A37 System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.SortedList`2::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
// 0x00000A38 System.Collections.Generic.IList`1<TValue> System.Collections.Generic.SortedList`2::get_Values()
// 0x00000A39 System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.SortedList`2::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// 0x00000A3A System.Collections.ICollection System.Collections.Generic.SortedList`2::System.Collections.IDictionary.get_Values()
// 0x00000A3B System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.SortedList`2::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
// 0x00000A3C System.Collections.Generic.SortedList`2/KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::GetKeyListHelper()
// 0x00000A3D System.Collections.Generic.SortedList`2/ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::GetValueListHelper()
// 0x00000A3E System.Boolean System.Collections.Generic.SortedList`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// 0x00000A3F System.Boolean System.Collections.Generic.SortedList`2::System.Collections.IDictionary.get_IsReadOnly()
// 0x00000A40 System.Object System.Collections.Generic.SortedList`2::System.Collections.ICollection.get_SyncRoot()
// 0x00000A41 System.Void System.Collections.Generic.SortedList`2::Clear()
// 0x00000A42 System.Boolean System.Collections.Generic.SortedList`2::System.Collections.IDictionary.Contains(System.Object)
// 0x00000A43 System.Boolean System.Collections.Generic.SortedList`2::ContainsKey(TKey)
// 0x00000A44 System.Boolean System.Collections.Generic.SortedList`2::ContainsValue(TValue)
// 0x00000A45 System.Void System.Collections.Generic.SortedList`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// 0x00000A46 System.Void System.Collections.Generic.SortedList`2::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000A47 System.Void System.Collections.Generic.SortedList`2::EnsureCapacity(System.Int32)
// 0x00000A48 TValue System.Collections.Generic.SortedList`2::GetByIndex(System.Int32)
// 0x00000A49 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedList`2::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// 0x00000A4A System.Collections.IDictionaryEnumerator System.Collections.Generic.SortedList`2::System.Collections.IDictionary.GetEnumerator()
// 0x00000A4B System.Collections.IEnumerator System.Collections.Generic.SortedList`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000A4C TKey System.Collections.Generic.SortedList`2::GetKey(System.Int32)
// 0x00000A4D TValue System.Collections.Generic.SortedList`2::get_Item(TKey)
// 0x00000A4E System.Void System.Collections.Generic.SortedList`2::set_Item(TKey,TValue)
// 0x00000A4F System.Object System.Collections.Generic.SortedList`2::System.Collections.IDictionary.get_Item(System.Object)
// 0x00000A50 System.Void System.Collections.Generic.SortedList`2::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// 0x00000A51 System.Int32 System.Collections.Generic.SortedList`2::IndexOfKey(TKey)
// 0x00000A52 System.Int32 System.Collections.Generic.SortedList`2::IndexOfValue(TValue)
// 0x00000A53 System.Void System.Collections.Generic.SortedList`2::Insert(System.Int32,TKey,TValue)
// 0x00000A54 System.Boolean System.Collections.Generic.SortedList`2::TryGetValue(TKey,TValue&)
// 0x00000A55 System.Void System.Collections.Generic.SortedList`2::RemoveAt(System.Int32)
// 0x00000A56 System.Boolean System.Collections.Generic.SortedList`2::Remove(TKey)
// 0x00000A57 System.Void System.Collections.Generic.SortedList`2::System.Collections.IDictionary.Remove(System.Object)
// 0x00000A58 System.Boolean System.Collections.Generic.SortedList`2::IsCompatibleKey(System.Object)
// 0x00000A59 System.Void System.Collections.Generic.SortedList`2/Enumerator::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>,System.Int32)
// 0x00000A5A System.Void System.Collections.Generic.SortedList`2/Enumerator::Dispose()
// 0x00000A5B System.Object System.Collections.Generic.SortedList`2/Enumerator::System.Collections.IDictionaryEnumerator.get_Key()
// 0x00000A5C System.Boolean System.Collections.Generic.SortedList`2/Enumerator::MoveNext()
// 0x00000A5D System.Collections.DictionaryEntry System.Collections.Generic.SortedList`2/Enumerator::System.Collections.IDictionaryEnumerator.get_Entry()
// 0x00000A5E System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator::get_Current()
// 0x00000A5F System.Object System.Collections.Generic.SortedList`2/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000A60 System.Object System.Collections.Generic.SortedList`2/Enumerator::System.Collections.IDictionaryEnumerator.get_Value()
// 0x00000A61 System.Void System.Collections.Generic.SortedList`2/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000A62 System.Void System.Collections.Generic.SortedList`2/SortedListKeyEnumerator::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
// 0x00000A63 System.Void System.Collections.Generic.SortedList`2/SortedListKeyEnumerator::Dispose()
// 0x00000A64 System.Boolean System.Collections.Generic.SortedList`2/SortedListKeyEnumerator::MoveNext()
// 0x00000A65 TKey System.Collections.Generic.SortedList`2/SortedListKeyEnumerator::get_Current()
// 0x00000A66 System.Object System.Collections.Generic.SortedList`2/SortedListKeyEnumerator::System.Collections.IEnumerator.get_Current()
// 0x00000A67 System.Void System.Collections.Generic.SortedList`2/SortedListKeyEnumerator::System.Collections.IEnumerator.Reset()
// 0x00000A68 System.Void System.Collections.Generic.SortedList`2/SortedListValueEnumerator::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
// 0x00000A69 System.Void System.Collections.Generic.SortedList`2/SortedListValueEnumerator::Dispose()
// 0x00000A6A System.Boolean System.Collections.Generic.SortedList`2/SortedListValueEnumerator::MoveNext()
// 0x00000A6B TValue System.Collections.Generic.SortedList`2/SortedListValueEnumerator::get_Current()
// 0x00000A6C System.Object System.Collections.Generic.SortedList`2/SortedListValueEnumerator::System.Collections.IEnumerator.get_Current()
// 0x00000A6D System.Void System.Collections.Generic.SortedList`2/SortedListValueEnumerator::System.Collections.IEnumerator.Reset()
// 0x00000A6E System.Void System.Collections.Generic.SortedList`2/KeyList::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
// 0x00000A6F System.Int32 System.Collections.Generic.SortedList`2/KeyList::get_Count()
// 0x00000A70 System.Boolean System.Collections.Generic.SortedList`2/KeyList::get_IsReadOnly()
// 0x00000A71 System.Object System.Collections.Generic.SortedList`2/KeyList::System.Collections.ICollection.get_SyncRoot()
// 0x00000A72 System.Void System.Collections.Generic.SortedList`2/KeyList::Add(TKey)
// 0x00000A73 System.Void System.Collections.Generic.SortedList`2/KeyList::Clear()
// 0x00000A74 System.Boolean System.Collections.Generic.SortedList`2/KeyList::Contains(TKey)
// 0x00000A75 System.Void System.Collections.Generic.SortedList`2/KeyList::CopyTo(TKey[],System.Int32)
// 0x00000A76 System.Void System.Collections.Generic.SortedList`2/KeyList::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000A77 System.Void System.Collections.Generic.SortedList`2/KeyList::Insert(System.Int32,TKey)
// 0x00000A78 TKey System.Collections.Generic.SortedList`2/KeyList::get_Item(System.Int32)
// 0x00000A79 System.Void System.Collections.Generic.SortedList`2/KeyList::set_Item(System.Int32,TKey)
// 0x00000A7A System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.SortedList`2/KeyList::GetEnumerator()
// 0x00000A7B System.Collections.IEnumerator System.Collections.Generic.SortedList`2/KeyList::System.Collections.IEnumerable.GetEnumerator()
// 0x00000A7C System.Int32 System.Collections.Generic.SortedList`2/KeyList::IndexOf(TKey)
// 0x00000A7D System.Boolean System.Collections.Generic.SortedList`2/KeyList::Remove(TKey)
// 0x00000A7E System.Void System.Collections.Generic.SortedList`2/KeyList::RemoveAt(System.Int32)
// 0x00000A7F System.Void System.Collections.Generic.SortedList`2/ValueList::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
// 0x00000A80 System.Int32 System.Collections.Generic.SortedList`2/ValueList::get_Count()
// 0x00000A81 System.Boolean System.Collections.Generic.SortedList`2/ValueList::get_IsReadOnly()
// 0x00000A82 System.Object System.Collections.Generic.SortedList`2/ValueList::System.Collections.ICollection.get_SyncRoot()
// 0x00000A83 System.Void System.Collections.Generic.SortedList`2/ValueList::Add(TValue)
// 0x00000A84 System.Void System.Collections.Generic.SortedList`2/ValueList::Clear()
// 0x00000A85 System.Boolean System.Collections.Generic.SortedList`2/ValueList::Contains(TValue)
// 0x00000A86 System.Void System.Collections.Generic.SortedList`2/ValueList::CopyTo(TValue[],System.Int32)
// 0x00000A87 System.Void System.Collections.Generic.SortedList`2/ValueList::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000A88 System.Void System.Collections.Generic.SortedList`2/ValueList::Insert(System.Int32,TValue)
// 0x00000A89 TValue System.Collections.Generic.SortedList`2/ValueList::get_Item(System.Int32)
// 0x00000A8A System.Void System.Collections.Generic.SortedList`2/ValueList::set_Item(System.Int32,TValue)
// 0x00000A8B System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ValueList::GetEnumerator()
// 0x00000A8C System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ValueList::System.Collections.IEnumerable.GetEnumerator()
// 0x00000A8D System.Int32 System.Collections.Generic.SortedList`2/ValueList::IndexOf(TValue)
// 0x00000A8E System.Boolean System.Collections.Generic.SortedList`2/ValueList::Remove(TValue)
// 0x00000A8F System.Void System.Collections.Generic.SortedList`2/ValueList::RemoveAt(System.Int32)
// 0x00000A90 System.Void System.Collections.Generic.SortedSet`1::.ctor()
// 0x00000A91 System.Void System.Collections.Generic.SortedSet`1::.ctor(System.Collections.Generic.IComparer`1<T>)
// 0x00000A92 System.Void System.Collections.Generic.SortedSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000A93 System.Boolean System.Collections.Generic.SortedSet`1::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000A94 System.Boolean System.Collections.Generic.SortedSet`1::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
// 0x00000A95 System.Boolean System.Collections.Generic.SortedSet`1::BreadthFirstTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
// 0x00000A96 System.Int32 System.Collections.Generic.SortedSet`1::get_Count()
// 0x00000A97 System.Collections.Generic.IComparer`1<T> System.Collections.Generic.SortedSet`1::get_Comparer()
// 0x00000A98 System.Boolean System.Collections.Generic.SortedSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000A99 System.Object System.Collections.Generic.SortedSet`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000A9A System.Void System.Collections.Generic.SortedSet`1::VersionCheck()
// 0x00000A9B System.Boolean System.Collections.Generic.SortedSet`1::IsWithinRange(T)
// 0x00000A9C System.Boolean System.Collections.Generic.SortedSet`1::Add(T)
// 0x00000A9D System.Void System.Collections.Generic.SortedSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000A9E System.Boolean System.Collections.Generic.SortedSet`1::AddIfNotPresent(T)
// 0x00000A9F System.Boolean System.Collections.Generic.SortedSet`1::Remove(T)
// 0x00000AA0 System.Boolean System.Collections.Generic.SortedSet`1::DoRemove(T)
// 0x00000AA1 System.Void System.Collections.Generic.SortedSet`1::Clear()
// 0x00000AA2 System.Boolean System.Collections.Generic.SortedSet`1::Contains(T)
// 0x00000AA3 System.Void System.Collections.Generic.SortedSet`1::CopyTo(T[],System.Int32)
// 0x00000AA4 System.Void System.Collections.Generic.SortedSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000AA5 System.Void System.Collections.Generic.SortedSet`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000AA6 System.Collections.Generic.SortedSet`1/Enumerator<T> System.Collections.Generic.SortedSet`1::GetEnumerator()
// 0x00000AA7 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.SortedSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000AA8 System.Collections.IEnumerator System.Collections.Generic.SortedSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000AA9 System.Void System.Collections.Generic.SortedSet`1::InsertionBalance(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>&,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AAA System.Void System.Collections.Generic.SortedSet`1::ReplaceChildOrRoot(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AAB System.Void System.Collections.Generic.SortedSet`1::ReplaceNode(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AAC System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1::FindNode(T)
// 0x00000AAD System.Int32 System.Collections.Generic.SortedSet`1::InternalIndexOf(T)
// 0x00000AAE System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1::FindRange(T,T,System.Boolean,System.Boolean)
// 0x00000AAF System.Boolean System.Collections.Generic.SortedSet`1::HasEqualComparer(System.Collections.Generic.SortedSet`1<T>)
// 0x00000AB0 System.Boolean System.Collections.Generic.SortedSet`1::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000AB1 System.Boolean System.Collections.Generic.SortedSet`1::IsSubsetOfSortedSetWithSameComparer(System.Collections.Generic.SortedSet`1<T>)
// 0x00000AB2 System.Boolean System.Collections.Generic.SortedSet`1::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000AB3 System.Boolean System.Collections.Generic.SortedSet`1::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000AB4 System.Boolean System.Collections.Generic.SortedSet`1::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000AB5 System.Boolean System.Collections.Generic.SortedSet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000AB6 System.Boolean System.Collections.Generic.SortedSet`1::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000AB7 System.Collections.Generic.SortedSet`1/ElementCount<T> System.Collections.Generic.SortedSet`1::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x00000AB8 T System.Collections.Generic.SortedSet`1::get_Min()
// 0x00000AB9 T System.Collections.Generic.SortedSet`1::get_MinInternal()
// 0x00000ABA T System.Collections.Generic.SortedSet`1::get_Max()
// 0x00000ABB T System.Collections.Generic.SortedSet`1::get_MaxInternal()
// 0x00000ABC System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1::GetViewBetween(T,T)
// 0x00000ABD System.Void System.Collections.Generic.SortedSet`1::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000ABE System.Void System.Collections.Generic.SortedSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000ABF System.Void System.Collections.Generic.SortedSet`1::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x00000AC0 System.Void System.Collections.Generic.SortedSet`1::OnDeserialization(System.Object)
// 0x00000AC1 System.Int32 System.Collections.Generic.SortedSet`1::Log2(System.Int32)
// 0x00000AC2 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::.ctor(System.Collections.Generic.SortedSet`1<T>,T,T,System.Boolean,System.Boolean)
// 0x00000AC3 System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::AddIfNotPresent(T)
// 0x00000AC4 System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::Contains(T)
// 0x00000AC5 System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::DoRemove(T)
// 0x00000AC6 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::Clear()
// 0x00000AC7 System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::IsWithinRange(T)
// 0x00000AC8 T System.Collections.Generic.SortedSet`1/TreeSubSet::get_MinInternal()
// 0x00000AC9 T System.Collections.Generic.SortedSet`1/TreeSubSet::get_MaxInternal()
// 0x00000ACA System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
// 0x00000ACB System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::BreadthFirstTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
// 0x00000ACC System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/TreeSubSet::FindNode(T)
// 0x00000ACD System.Int32 System.Collections.Generic.SortedSet`1/TreeSubSet::InternalIndexOf(T)
// 0x00000ACE System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::VersionCheck()
// 0x00000ACF System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::VersionCheckImpl()
// 0x00000AD0 System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/TreeSubSet::GetViewBetween(T,T)
// 0x00000AD1 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000AD2 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000AD3 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x00000AD4 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet::OnDeserialization(System.Object)
// 0x00000AD5 System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet::<VersionCheckImpl>b__20_0(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AD6 System.Void System.Collections.Generic.SortedSet`1/TreeSubSet/<>c__DisplayClass9_0::.ctor()
// 0x00000AD7 System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet/<>c__DisplayClass9_0::<Clear>b__0(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AD8 System.Void System.Collections.Generic.SortedSet`1/Node::.ctor(T,System.Collections.Generic.NodeColor)
// 0x00000AD9 System.Boolean System.Collections.Generic.SortedSet`1/Node::IsNonNullRed(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000ADA System.Boolean System.Collections.Generic.SortedSet`1/Node::IsNullOrBlack(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000ADB T System.Collections.Generic.SortedSet`1/Node::get_Item()
// 0x00000ADC System.Void System.Collections.Generic.SortedSet`1/Node::set_Item(T)
// 0x00000ADD System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::get_Left()
// 0x00000ADE System.Void System.Collections.Generic.SortedSet`1/Node::set_Left(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000ADF System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::get_Right()
// 0x00000AE0 System.Void System.Collections.Generic.SortedSet`1/Node::set_Right(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AE1 System.Collections.Generic.NodeColor System.Collections.Generic.SortedSet`1/Node::get_Color()
// 0x00000AE2 System.Void System.Collections.Generic.SortedSet`1/Node::set_Color(System.Collections.Generic.NodeColor)
// 0x00000AE3 System.Boolean System.Collections.Generic.SortedSet`1/Node::get_IsBlack()
// 0x00000AE4 System.Boolean System.Collections.Generic.SortedSet`1/Node::get_IsRed()
// 0x00000AE5 System.Boolean System.Collections.Generic.SortedSet`1/Node::get_Is2Node()
// 0x00000AE6 System.Boolean System.Collections.Generic.SortedSet`1/Node::get_Is4Node()
// 0x00000AE7 System.Void System.Collections.Generic.SortedSet`1/Node::ColorBlack()
// 0x00000AE8 System.Void System.Collections.Generic.SortedSet`1/Node::ColorRed()
// 0x00000AE9 System.Collections.Generic.TreeRotation System.Collections.Generic.SortedSet`1/Node::GetRotation(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AEA System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::GetSibling(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AEB System.Void System.Collections.Generic.SortedSet`1/Node::Split4Node()
// 0x00000AEC System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::Rotate(System.Collections.Generic.TreeRotation)
// 0x00000AED System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::RotateLeft()
// 0x00000AEE System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::RotateLeftRight()
// 0x00000AEF System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::RotateRight()
// 0x00000AF0 System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Node::RotateRightLeft()
// 0x00000AF1 System.Void System.Collections.Generic.SortedSet`1/Node::Merge2Nodes()
// 0x00000AF2 System.Void System.Collections.Generic.SortedSet`1/Node::ReplaceChild(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000AF3 System.Void System.Collections.Generic.SortedSet`1/Enumerator::.ctor(System.Collections.Generic.SortedSet`1<T>)
// 0x00000AF4 System.Void System.Collections.Generic.SortedSet`1/Enumerator::.ctor(System.Collections.Generic.SortedSet`1<T>,System.Boolean)
// 0x00000AF5 System.Void System.Collections.Generic.SortedSet`1/Enumerator::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000AF6 System.Void System.Collections.Generic.SortedSet`1/Enumerator::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x00000AF7 System.Void System.Collections.Generic.SortedSet`1/Enumerator::Initialize()
// 0x00000AF8 System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::MoveNext()
// 0x00000AF9 System.Void System.Collections.Generic.SortedSet`1/Enumerator::Dispose()
// 0x00000AFA T System.Collections.Generic.SortedSet`1/Enumerator::get_Current()
// 0x00000AFB System.Object System.Collections.Generic.SortedSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000AFC System.Void System.Collections.Generic.SortedSet`1/Enumerator::Reset()
// 0x00000AFD System.Void System.Collections.Generic.SortedSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000AFE System.Void System.Collections.Generic.SortedSet`1/Enumerator::.cctor()
// 0x00000AFF System.Void System.Collections.Generic.SortedSet`1/<>c__DisplayClass52_0::.ctor()
// 0x00000B00 System.Boolean System.Collections.Generic.SortedSet`1/<>c__DisplayClass52_0::<CopyTo>b__0(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000B01 System.Void System.Collections.Generic.SortedSet`1/<>c__DisplayClass53_0::.ctor()
// 0x00000B02 System.Void System.Collections.Generic.SortedSet`1/<>c__DisplayClass53_1::.ctor()
// 0x00000B03 System.Boolean System.Collections.Generic.SortedSet`1/<>c__DisplayClass53_1::<System.Collections.ICollection.CopyTo>b__0(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000B04 System.Void System.Collections.Generic.TreeWalkPredicate`1::.ctor(System.Object,System.IntPtr)
// 0x00000B05 System.Boolean System.Collections.Generic.TreeWalkPredicate`1::Invoke(System.Collections.Generic.SortedSet`1/Node<T>)
// 0x00000B06 System.IAsyncResult System.Collections.Generic.TreeWalkPredicate`1::BeginInvoke(System.Collections.Generic.SortedSet`1/Node<T>,System.AsyncCallback,System.Object)
// 0x00000B07 System.Boolean System.Collections.Generic.TreeWalkPredicate`1::EndInvoke(System.IAsyncResult)
// 0x00000B08 System.Void System.Collections.Generic.Stack`1::.ctor()
// 0x00000B09 System.Void System.Collections.Generic.Stack`1::.ctor(System.Int32)
// 0x00000B0A System.Int32 System.Collections.Generic.Stack`1::get_Count()
// 0x00000B0B System.Object System.Collections.Generic.Stack`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000B0C System.Void System.Collections.Generic.Stack`1::Clear()
// 0x00000B0D System.Void System.Collections.Generic.Stack`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000B0E System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000B0F System.Collections.IEnumerator System.Collections.Generic.Stack`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000B10 T System.Collections.Generic.Stack`1::Peek()
// 0x00000B11 T System.Collections.Generic.Stack`1::Pop()
// 0x00000B12 System.Void System.Collections.Generic.Stack`1::Push(T)
// 0x00000B13 T[] System.Collections.Generic.Stack`1::ToArray()
// 0x00000B14 System.Void System.Collections.Generic.Stack`1::ThrowForEmptyStack()
// 0x00000B15 System.Void System.Collections.Generic.Stack`1/Enumerator::.ctor(System.Collections.Generic.Stack`1<T>)
// 0x00000B16 System.Void System.Collections.Generic.Stack`1/Enumerator::Dispose()
// 0x00000B17 System.Boolean System.Collections.Generic.Stack`1/Enumerator::MoveNext()
// 0x00000B18 T System.Collections.Generic.Stack`1/Enumerator::get_Current()
// 0x00000B19 System.Void System.Collections.Generic.Stack`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000B1A System.Object System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000B1B System.Void System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000B1C System.Void System.Collections.Generic.StackDebugView`1::.ctor(System.Collections.Generic.Stack`1<T>)
// 0x00000B1D T[] System.Collections.Generic.StackDebugView`1::get_Items()
// 0x00000B1E System.Boolean System.Collections.Generic.ISet`1::Add(T)
// 0x00000B1F System.Boolean System.Collections.Generic.ISet`1::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000B20 System.Boolean System.Collections.Generic.ISet`1::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000B21 System.Boolean System.Collections.Generic.ISet`1::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000B22 System.Boolean System.Collections.Generic.ISet`1::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000B23 System.Boolean System.Collections.Generic.ISet`1::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000B24 System.Boolean System.Collections.Generic.ISet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000B25 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7C7DB27BC4297A74A96AC53E1EDD3E7415DFB874 (void);
// 0x00000B26 System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern void BypassElementCollection__ctor_m867AF1FE6DBB2768AA199F45039C3E2641A9627A (void);
// 0x00000B27 System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern void ConnectionManagementElementCollection__ctor_mA29AB3A62411F032C5EF86B16E7633A386000C7B (void);
// 0x00000B28 System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
extern void ConnectionManagementSection__ctor_m1112C1BE1A9466BBCDD5C2ED20E80CDE03B46CA4 (void);
// 0x00000B29 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
extern void ConnectionManagementSection_get_Properties_m1737189D2D78E81728CFF1CCCEB99E1FFFEA3F19 (void);
// 0x00000B2A System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern void DefaultProxySection__ctor_m41EADE87065B61EDF32F67D2E62F04946886DAF6 (void);
// 0x00000B2B System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern void DefaultProxySection_get_Properties_m6F70EC02D977EB16F86354188A72DC87A8959555 (void);
// 0x00000B2C System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern void DefaultProxySection_Reset_m54AC9323047B1FB38795C9F466C1C01192F75276 (void);
// 0x00000B2D System.Void System.Net.Configuration.ProxyElement::.ctor()
extern void ProxyElement__ctor_mAFD852231DF0231726E41911409CB2725BE990AC (void);
// 0x00000B2E System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
extern void ProxyElement_get_Properties_m8A3EE4A3EEF2571DE4768730CEF4107331490377 (void);
// 0x00000B2F System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
extern void HttpWebRequestElement__ctor_mE3A4CA43FCC72E10B6C7B4920F429C028765E233 (void);
// 0x00000B30 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
extern void HttpWebRequestElement_get_Properties_m531EDF2F56823100C47A9EEE1575143E5EB5463C (void);
// 0x00000B31 System.Void System.Net.Configuration.Ipv6Element::.ctor()
extern void Ipv6Element__ctor_m3F7DF39E6E51517E1429BAE43FA782BF3AF17965 (void);
// 0x00000B32 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
extern void Ipv6Element_get_Properties_m156008D7E5279C50DE4CEDB6D4D3CEDAF2ACF8DC (void);
// 0x00000B33 System.Void System.Net.Configuration.NetSectionGroup::.ctor()
extern void NetSectionGroup__ctor_m566D7C9466957BCE3B8FE2D0EA2582CC2F95F269 (void);
// 0x00000B34 System.Void System.Net.Configuration.SettingsSection::.ctor()
extern void SettingsSection__ctor_mC5F3D29EDC94D87B0B0542DE3702795441AC3005 (void);
// 0x00000B35 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
extern void SettingsSection_get_Properties_m1ABB76DEC7441CFEDD4E7EDF99B8F5C258101254 (void);
// 0x00000B36 System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
extern void PerformanceCountersElement__ctor_m5A090222699B48BEB5FCC743198613FA8D081083 (void);
// 0x00000B37 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
extern void PerformanceCountersElement_get_Properties_m3C7B73AC6E5F5E92426D7DC091A2ECE5CFCD9FD0 (void);
// 0x00000B38 System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
extern void ServicePointManagerElement__ctor_m61B031714F8498D467B5A0958EE62F73E0C58EB7 (void);
// 0x00000B39 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
extern void ServicePointManagerElement_get_Properties_mC1C586246B4FE10AC90622A0CC6A5936D501B677 (void);
// 0x00000B3A System.Void System.Net.Configuration.SocketElement::.ctor()
extern void SocketElement__ctor_m428B7094399223FFB9A5B62BF9D8CEA18A00A4C3 (void);
// 0x00000B3B System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
extern void SocketElement_get_Properties_m9CF8E9B1A9B41B7EC24A4F91CE2E8ECBF317426A (void);
// 0x00000B3C System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
extern void WebProxyScriptElement__ctor_mC8AF875E80D96B18AA387148009AE1C630D83591 (void);
// 0x00000B3D System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
extern void WebProxyScriptElement_get_Properties_m8AD25399F804B2D22BC8312102EBC28A0CAE6E26 (void);
// 0x00000B3E System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
extern void WebRequestModulesSection__ctor_m0CAB6F207E3B29D65AEA38A6AC191873E3000F02 (void);
// 0x00000B3F System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
extern void WebRequestModulesSection_get_Properties_m909A3E4C4A61BFCC9D09F397D9314E5F74F3FE44 (void);
// 0x00000B40 System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern void WebRequestModuleElementCollection__ctor_m8B880B0EAE7CEF1CB79CD264A9B6D62AB6A22961 (void);
// 0x00000B41 System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern void DiagnosticsConfigurationHandler__ctor_m185BC74B0225A3E16EEB4164923931B79AAA0CF0 (void);
// 0x00000B42 System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern void DiagnosticsConfigurationHandler_Create_mCC7EF5B43B6913E2429B37EC5923202EBB20AA96 (void);
// 0x00000B43 System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD (void);
static Il2CppMethodPointer s_methodPointers[2883] = 
{
	SR_GetString_m9548BD6DD52DFDB46372F211078AE57FA2401E39,
	SR_GetString_m9D671CBA422B18D15B8FF59B22DCCEB32E3D16E2,
	SR_GetString_m3FC710B15474A9B651DA02B303241B6D8B87E2A7,
	SR_Format_m0F2CEC6937029AEC3360EE21DB1D6329D5BE8906,
	SR_Format_mCE758E323017FDB5E39921BE8757AC78665C7504,
	MonoPInvokeCallbackAttribute__ctor_mE8E2FC84195F0A97049CAF083F56A3C4254323FC,
	CertHelper_AddCertificatesToNativeChain_m1D22A9A50CA05E1F931B8B309E047092DDE01CFF,
	CertHelper_AddCertificateToNativeChain_m223E545813937EC29B6EF428DAE3F45551728166,
	CertHelper_NativeChainToManagedCollection_m671B74DB858DFEC5DE82CB70687F76EE5212630C,
	Debug_CheckAndThrow_mF8B2344487801910DCF927F9394FD2F13A61F8E8,
	Debug_CheckAndThrow_m4B13EAF7CA50D7535BF7F663D23886279A4CDBF5,
	UnityTls_GetUnityTlsInterface_mB672D3C985554FC0EDFAB68EB4A77BCB74FEE719,
	UnityTls_get_IsSupported_mA17DA466EA04B7B44B4C3C37EF24494F9CDE238C,
	UnityTls_get_NativeInterface_mB7B44E93A89C271D6C65B44DE2EE9C4A5786E88E,
	unitytls_x509verify_callback__ctor_m9D04862B333145C9F179B31F08C390E0DEA4D1B0,
	unitytls_x509verify_callback_Invoke_m4DDE358F87398FA2F51CDD551E6F1D4CB5B48159,
	unitytls_x509verify_callback_BeginInvoke_m34DFF04B0DD733860B3BAE73885A90C6A936E26F,
	unitytls_x509verify_callback_EndInvoke_m17AC8D1886D2624D4E3E041E6931DC942C117FAB,
	unitytls_tlsctx_write_callback__ctor_mC7F821EB4597E74CFC9DE7A1EA50F86CFAC2F411,
	unitytls_tlsctx_write_callback_Invoke_m9E758A0D65A39C61209306CDAB781357D956F36E,
	unitytls_tlsctx_write_callback_BeginInvoke_m9FA442F88C3483A74C56938DD30BF36505666EDD,
	unitytls_tlsctx_write_callback_EndInvoke_m4615F5985BBDB75F9DBDE0398A854CE2315DF925,
	unitytls_tlsctx_read_callback__ctor_m52F2060B467B61401384C7E3693C6C8CDC3E46B7,
	unitytls_tlsctx_read_callback_Invoke_m9C045DAC27E3496B2FA429755CFF48E11A751D29,
	unitytls_tlsctx_read_callback_BeginInvoke_mFDE9382397C181E07D075AA3FDE12B10ABC2C602,
	unitytls_tlsctx_read_callback_EndInvoke_m2D814DC4681EFC9E4B0D495E8E5BBB0DCD3B62D1,
	unitytls_tlsctx_trace_callback__ctor_m4C0C53E1C112C8A363A1C1AC15B5F6B7E4CD2443,
	unitytls_tlsctx_trace_callback_Invoke_mC657E7F4F1C6F530662F48BE16D2621029846344,
	unitytls_tlsctx_trace_callback_BeginInvoke_mE23C8513E935C278BCC120731072893E86729CAA,
	unitytls_tlsctx_trace_callback_EndInvoke_m33865B83D223342F078061A59F8DF41311D20C94,
	unitytls_tlsctx_certificate_callback__ctor_m14C613364636EF10ECCD413A6F49E975A4F4A6A2,
	unitytls_tlsctx_certificate_callback_Invoke_mA90DE4AD701A89C12AECBE415FBAB506DCF66C12,
	unitytls_tlsctx_certificate_callback_BeginInvoke_m1D0AF1A60BC715B76CD3866BF3D555E5A6BFDD3E,
	unitytls_tlsctx_certificate_callback_EndInvoke_m0485EC4825ED1374DA2C0925A2F48D7F7567E21B,
	unitytls_tlsctx_x509verify_callback__ctor_m50C4160D42681A80BEAD13F18294437BD96C3D0B,
	unitytls_tlsctx_x509verify_callback_Invoke_m63FDAF56E6D0F50E1E21DB4E3515967596071CE6,
	unitytls_tlsctx_x509verify_callback_BeginInvoke_m84DAB124121532AF9AECBA6E706A0914C4EA22F4,
	unitytls_tlsctx_x509verify_callback_EndInvoke_mD0321EDEC2FCF98ACB6497F796021DC65DA0DEEC,
	unitytls_interface_struct__ctor_m91CA935D822B8FA1057010680A22A0AC9D70E381,
	unitytls_errorstate_create_t__ctor_mDB5F7A125825A4EADEFE51E41161ECF671659474,
	unitytls_errorstate_create_t_Invoke_m2A913757D4713362254BE457E8792AD299677D42,
	unitytls_errorstate_create_t_BeginInvoke_m21B464EA6F62C9C4916A69F411D0261B058E3E06,
	unitytls_errorstate_create_t_EndInvoke_m8DC3659FB8AACD5CD163A95D55D72E4337AC8F37,
	unitytls_errorstate_raise_error_t__ctor_m5F148689FFD962A73C93824087B04547B3AEE99B,
	unitytls_errorstate_raise_error_t_Invoke_m319B51663970217C195467C18E5928B5C2B68441,
	unitytls_errorstate_raise_error_t_BeginInvoke_m430EC23CE6C0A221B234161D965EF48FDE1FE3D8,
	unitytls_errorstate_raise_error_t_EndInvoke_m713725CCC70FA48D9A9BFE1770EB0406853DF1E7,
	unitytls_key_get_ref_t__ctor_m8B6688D0222A54335156F76C42D335A999C620ED,
	unitytls_key_get_ref_t_Invoke_mA8C5F2D239F4B74885F37C9671012F1136BF0BE2,
	unitytls_key_get_ref_t_BeginInvoke_m93BE7A42624E9987FC901D883E06683C90046D89,
	unitytls_key_get_ref_t_EndInvoke_m3158742DC98834DFC0519765F4E88A8C581B54F2,
	unitytls_key_parse_der_t__ctor_m702A41D29AFA524EFDF148673041B507C9538C4F,
	unitytls_key_parse_der_t_Invoke_m8CF4A1CFD7B385B3091215030E7EC2CB5B6823ED,
	unitytls_key_parse_der_t_BeginInvoke_mDD3872296FB3905F2F22D5859F4521DF44C9F19B,
	unitytls_key_parse_der_t_EndInvoke_m6ED100AAACFF6462B42B0D9804BBA5E34487808A,
	unitytls_key_parse_pem_t__ctor_mE18922EC14AD6EDA780D819DB1469A99242F5C82,
	unitytls_key_parse_pem_t_Invoke_m38F6D75BFC2A80778454B43E5C76B4704EFF75F1,
	unitytls_key_parse_pem_t_BeginInvoke_mE7922F635446EF1A040AEE37DD9CEA8694A7F771,
	unitytls_key_parse_pem_t_EndInvoke_mA547C0BB7666F5F1953F14BC46AAE90537850C77,
	unitytls_key_free_t__ctor_m6FB9CB25BA5BE0723AE199CE1F502A955DD356E3,
	unitytls_key_free_t_Invoke_m80E23E79440054744237B5BAA88AAAAB0D4E2F4B,
	unitytls_key_free_t_BeginInvoke_m9187223C9B5085D282144EC1175FA24D76AEBEE3,
	unitytls_key_free_t_EndInvoke_m152FC113C7C311F262DC6B29F0E44ED27D4A4FBB,
	unitytls_x509_export_der_t__ctor_m2FA861176B1706988B234296EC1E5C2C2385C5A5,
	unitytls_x509_export_der_t_Invoke_m90FDB333B2076F06444B096E1E1D1A42C8EEF8A0,
	unitytls_x509_export_der_t_BeginInvoke_m33E6F88E2448002C8B74EC67E172034CCD11E4D5,
	unitytls_x509_export_der_t_EndInvoke_m18AAF57D64EC364FF2312620E964F4D615E594CD,
	unitytls_x509list_get_ref_t__ctor_m2E1FC1BBC79EB53428998A9DC5299F1DCDF6BBE8,
	unitytls_x509list_get_ref_t_Invoke_mDCA9357333DA8B614E6C0F68922B3E5306A6534C,
	unitytls_x509list_get_ref_t_BeginInvoke_mCF97569A8246EA8445ADA1DE245B36DFAFB91446,
	unitytls_x509list_get_ref_t_EndInvoke_m3E4E37BCCAE29768A633C69FA2CE74EC67945A98,
	unitytls_x509list_get_x509_t__ctor_m8AF5F946C60F4AD11DCF53EB103FAB5556828421,
	unitytls_x509list_get_x509_t_Invoke_m25FDF33A713C330AF882B49E05C79B77B5CF7A22,
	unitytls_x509list_get_x509_t_BeginInvoke_m5F1D80B8C015B87B91AE11A27A01ED586E9BFFEF,
	unitytls_x509list_get_x509_t_EndInvoke_m32FF88756C519F7C7F53E36198C352B2DE96FECF,
	unitytls_x509list_create_t__ctor_m35027CAFF58C468A07D199EA8E760FA83ECC1497,
	unitytls_x509list_create_t_Invoke_m45B75F9286D2C1DC14AECFA258F419C3A1989A79,
	unitytls_x509list_create_t_BeginInvoke_mE85F1C402447D1CC543B2609C2BFD081F2954DC5,
	unitytls_x509list_create_t_EndInvoke_m2D64E81EA9962E8269292F49D86CBA9A45D8021F,
	unitytls_x509list_append_t__ctor_m5389B48F2C2EFE1E6FDAE6FEE1FF176F28F0D02C,
	unitytls_x509list_append_t_Invoke_m172237A64036BDE6C197DA0AE6A5A08010D4F361,
	unitytls_x509list_append_t_BeginInvoke_mD3FEDD5F023253232CC8C48EF5CF2120ABD7147B,
	unitytls_x509list_append_t_EndInvoke_m2DE3744B3B3919E5ABED5661FC2FA2445B933EF3,
	unitytls_x509list_append_der_t__ctor_m841BFC2DC8D5C6BA893192D3318C89CB1CBA5093,
	unitytls_x509list_append_der_t_Invoke_m1606FADA7E902086F7AEE6D8F304867C7E0A434F,
	unitytls_x509list_append_der_t_BeginInvoke_m68B8C0940627CA1AA436E080A70BE1F622A820E7,
	unitytls_x509list_append_der_t_EndInvoke_m96AFB602A6FB94D99E6AB65CE1D3C8B0B636CC6C,
	unitytls_x509list_free_t__ctor_mE08ED3D0B7810758779C72A6882354D36E51F126,
	unitytls_x509list_free_t_Invoke_m733759A5A94705388D233DB23FDFECAE2ADACDF0,
	unitytls_x509list_free_t_BeginInvoke_m1A31DC10E7A495BCB31B46F413FCB7431E408CD7,
	unitytls_x509list_free_t_EndInvoke_m4BD735662CB6AC985D4AC833288191948ABD9182,
	unitytls_x509verify_default_ca_t__ctor_m9030DF501A2B0AE32F059AF6838EAF2A5897C8E0,
	unitytls_x509verify_default_ca_t_Invoke_mE5D523AFD08CCE9A427389F17611D56C6D905B98,
	unitytls_x509verify_default_ca_t_BeginInvoke_m732CB4DFD706DEA2D1AFDD66A25C7A0A4F59641C,
	unitytls_x509verify_default_ca_t_EndInvoke_m65702493A38FA3F2598DD0D5F41A2849C4EE532D,
	unitytls_x509verify_explicit_ca_t__ctor_m4008497F04CFD72DB70FC203A50B023CD8F17864,
	unitytls_x509verify_explicit_ca_t_Invoke_mCC06B1AF3BCD90C24E3CA05A785528588C7CCEB5,
	unitytls_x509verify_explicit_ca_t_BeginInvoke_m5A0BBE08CCACF01F690B9919087359A9FF7CF468,
	unitytls_x509verify_explicit_ca_t_EndInvoke_m8EE4AE05BF8B13E7CD9A5818E3BA682F951584A4,
	unitytls_tlsctx_create_server_t__ctor_m5CDD5F7909C922C45FDFFD8E94DDFFB1279C7368,
	unitytls_tlsctx_create_server_t_Invoke_m6C7288544450304884E239BA3ACED930AAC040DF,
	unitytls_tlsctx_create_server_t_BeginInvoke_m7E60A8576D5C6BE7D9A61EBB5800D7FD402BF60D,
	unitytls_tlsctx_create_server_t_EndInvoke_mFC81040ECF1EF8D630C93F04FC8086A0F0288F6F,
	unitytls_tlsctx_create_client_t__ctor_m1E56411D4E929CCB07D6050690CA2284FCB8647D,
	unitytls_tlsctx_create_client_t_Invoke_m1DF5F05CEC35949278BEA867FA923CA399855D20,
	unitytls_tlsctx_create_client_t_BeginInvoke_m7D9286CDD8953A99DC3DAF42531E08EC2921DF9D,
	unitytls_tlsctx_create_client_t_EndInvoke_mD4C6A3C3AEB5444A52D5096080347CC4119CE729,
	unitytls_tlsctx_server_require_client_authentication_t__ctor_m9AFB7DDE9F07B0C20E932B26CF5F7CC5A34EF2EE,
	unitytls_tlsctx_server_require_client_authentication_t_Invoke_mAD3C2DC8E2407F47BCCDB9CCD03FAEF5C3C61FB4,
	unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_m34DF29BAAD16625619D9BACCAE0916CCB1EE3814,
	unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_mD90E6FDE627752E1398D872EF076990B46A0D0C4,
	unitytls_tlsctx_set_certificate_callback_t__ctor_mEE1D60229825001CFA228CAB36712F5911CA94F1,
	unitytls_tlsctx_set_certificate_callback_t_Invoke_mD72A24F7BEB100ECBFE6A02447D07EB392F8416B,
	unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_mC558DC3F79919F6336501ED0EE6E258D40ABF0E6,
	unitytls_tlsctx_set_certificate_callback_t_EndInvoke_m4A733262D24FD2ADD4A0807F5B70ACC4833E71DF,
	unitytls_tlsctx_set_trace_callback_t__ctor_m698EE0E5FA09113DDBBE2BFD5EB4FE1A4E0F97A1,
	unitytls_tlsctx_set_trace_callback_t_Invoke_m3563168D645C5A9128E07DBDFC7B5512764B2E11,
	unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m32846D6C60BEC0829F3478DB7AAB125D13B7F547,
	unitytls_tlsctx_set_trace_callback_t_EndInvoke_mEAF3A5C422616242581287326BDAD6C5515F5DC1,
	unitytls_tlsctx_set_x509verify_callback_t__ctor_m1900B77A4679CBF3A7F107114F9444A193F9B3B2,
	unitytls_tlsctx_set_x509verify_callback_t_Invoke_mB4B699E9A75AD84590634AA66243AE8BE8DE9F09,
	unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mF1D785074322CB5DD7BB67E54C6C2140C5BCE73C,
	unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_mA320598F201D2E1ECAA3595355C93B3BDD13B031,
	unitytls_tlsctx_set_supported_ciphersuites_t__ctor_mF8B2A46DCE03527B87EE1EB40F18EEB186591A58,
	unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_m9091B6D204D7611E2741CC2B3166616F8C19E594,
	unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_mAD583F841F317705AA1F100D5188AEBC4B997C1D,
	unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mFFC257704501E21B54877E6A937BEDAB526184E8,
	unitytls_tlsctx_get_ciphersuite_t__ctor_mD59D1727FCCD2F1485FC87677C593BAA0D19FD69,
	unitytls_tlsctx_get_ciphersuite_t_Invoke_m28D027E6306B1F2188E64245FBA01268CC329442,
	unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_m8BA17B437B22A3109CD7AA513F11B99A6010B215,
	unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m37132AD00EA6C15F18185B76F883D690BC9330EF,
	unitytls_tlsctx_get_protocol_t__ctor_m57AA61C6CC144AC851EF8A1BCDE1FE8A6A7CE4E3,
	unitytls_tlsctx_get_protocol_t_Invoke_m533A624ECEB2AC0E43052CE6A234D04E4E9C70AB,
	unitytls_tlsctx_get_protocol_t_BeginInvoke_m633A813CF097D32A46D0AF9B4BA62675D446E476,
	unitytls_tlsctx_get_protocol_t_EndInvoke_m31A4CD4E5918466D87B8EFED896BF0DF487FF061,
	unitytls_tlsctx_process_handshake_t__ctor_m3C5790369EFE12F841C4EDA676DABCC833BF23DE,
	unitytls_tlsctx_process_handshake_t_Invoke_mE17E62D2159809BC847BEB1D6B40C23C017ED3E8,
	unitytls_tlsctx_process_handshake_t_BeginInvoke_mDE4541085A795D1286E90FE82D1802A4A2C861BF,
	unitytls_tlsctx_process_handshake_t_EndInvoke_mDE68FC780902D4DDC02B55D01C3F5B1F2D5165CD,
	unitytls_tlsctx_read_t__ctor_m3A54D3DC95D93F41585AAC5E0CBB09E7E21C6A88,
	unitytls_tlsctx_read_t_Invoke_mAFFB3FA39F79B2BE4FFA182239DE94ED5570D803,
	unitytls_tlsctx_read_t_BeginInvoke_mC8AA0588732E45F9402F7EC9319099ECFC5AFF8C,
	unitytls_tlsctx_read_t_EndInvoke_m94A70CCFA5F55842BBB3DEC7B89D19BCBA37937A,
	unitytls_tlsctx_write_t__ctor_m99DA58D77CC21DEAA77D8332FB1F4226BCBC3317,
	unitytls_tlsctx_write_t_Invoke_mF9413F9C6DD887B3B0DA87CE25824CED940EEFC1,
	unitytls_tlsctx_write_t_BeginInvoke_mC17344DDFE83AF7AA95CE8EC00A0FD27ADBF1A9F,
	unitytls_tlsctx_write_t_EndInvoke_m6D59052A9AACE1E87DEBB2B6800B47FDAE09A524,
	unitytls_tlsctx_notify_close_t__ctor_mD372DA8B81430D8E41B7372722D5D327CF438951,
	unitytls_tlsctx_notify_close_t_Invoke_mC3B57340B3CA22EA7EB0EBFA5C941C487DE6B015,
	unitytls_tlsctx_notify_close_t_BeginInvoke_mDB587D9039A414DC2127613B9E477379FF119E14,
	unitytls_tlsctx_notify_close_t_EndInvoke_m5D323428785A814E43CA41E4244ECAF0F96EE668,
	unitytls_tlsctx_free_t__ctor_m0445C80DC50302FB1F416ED7AA8B1E2DD66529EA,
	unitytls_tlsctx_free_t_Invoke_m34DFBB044037052F67FEA5A579A5AC004E01AEC8,
	unitytls_tlsctx_free_t_BeginInvoke_m7887C3F9C1F87DCD3807A2797D7525F108CBA926,
	unitytls_tlsctx_free_t_EndInvoke_mED032427E108FD9D858A2B752544CC76CCCF647D,
	unitytls_random_generate_bytes_t__ctor_m651B0D872AA98DCBDF99B8CBB48616F9877D28C5,
	unitytls_random_generate_bytes_t_Invoke_mDF4C16458D2779B58E4C66ACB9A197DD3C61085F,
	unitytls_random_generate_bytes_t_BeginInvoke_m15487ED3C5CACFB6E0D760F7307847F531F1C3A4,
	unitytls_random_generate_bytes_t_EndInvoke_m3C6F54483F3AF797648AC5E311AB1976FFAFF61B,
	UnityTlsContext__ctor_m82A8A07485BBA40B72407958085454EBFFEB826C,
	UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mCDF88F12EFAFFA3CB29218EB5CECA54736FA577B,
	UnityTlsContext_get_IsAuthenticated_m2D21CAED85E7FC027A44D4B563559A0CAE4E82E1,
	UnityTlsContext_Read_m57A71EE175BE7D20FBBBF23208F4370198E82FCE,
	UnityTlsContext_Write_m2A845C13751DFCADF4065D4108C92065662EF6D5,
	UnityTlsContext_Shutdown_m8F28FC6DA210C07662E2237E4AE0F37CDEFAAC16,
	UnityTlsContext_Dispose_mDAFA39A1C87ACB042BA171A8FE723D07204216FD,
	UnityTlsContext_StartHandshake_m3E616FB8331ADCE5754EE66CF047C8C218D233FE,
	UnityTlsContext_ProcessHandshake_mDA4456F24FC2E02FBBE6252120506A0852BD6CCC,
	UnityTlsContext_FinishHandshake_mBC43C5018B3D65BB8807CCAEDDFEBC4D4719B2FB,
	UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F,
	UnityTlsContext_WriteCallback_mFA8E9E3FE64CD88CEEAC5F83393A939D683BE025,
	UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB,
	UnityTlsContext_ReadCallback_m4ED16457432EC59B4B9697ABE4421E093B2B0929,
	UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850,
	UnityTlsContext_VerifyCallback_mD1AB1BC9CA979D58ED90B5B1A39848FAB95C83D3,
	UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347,
	UnityTlsContext_CertificateCallback_mC2342B4F75EB243AED15E7D6AA7389394966AA8E,
	UnityTlsConversions_GetMinProtocol_mAE3AC38A5F0C6CBEFDC7265E49536E0F6EEAEEC1,
	UnityTlsConversions_GetMaxProtocol_m8991E0B43664085F8E1BD9095CA4114A3A46DCFA,
	UnityTlsConversions_ConvertProtocolVersion_m1618CAAE6886BF8070040EE8FC3ACC9036A6567E,
	UnityTlsConversions_VerifyResultToAlertDescription_m1C318DCEFF9F42E73FF8DAB347BA7B9E4E7EFF7E,
	UnityTlsConversions_VerifyResultToPolicyErrror_m0F695E9B6732F71E1719D642E28A569B39A56BB7,
	UnityTlsProvider_get_Name_mD97B0783E337EF392796C2B54B2893132AE3CE6E,
	UnityTlsProvider_get_ID_m69F15693799E92CF740F1632C811ABBDD9501CE3,
	UnityTlsProvider_get_SupportsSslStream_m75C37BCDD5970564FF33FC734CE1E53066C310F5,
	UnityTlsProvider_get_SupportsMonoExtensions_m937D906F958817CF7AF4BF3C0F6CB7FCFB271C34,
	UnityTlsProvider_get_SupportsConnectionInfo_m2F1C9B6C649675ACE3F96A80EBAC9FF44655D004,
	UnityTlsProvider_get_SupportsCleanShutdown_m0C0EDA9937BDF53475680A2892B937316D450B5C,
	UnityTlsProvider_get_SupportedProtocols_mB92C5F264ADEADACCE52A31D1DA9937777C5BC04,
	UnityTlsProvider_CreateSslStream_m7395FB4BBD905D89772F5157FDD254E5CF1F83DC,
	UnityTlsProvider_CreateSslStreamInternal_mA8AD037F184BD564ACD9945D6EA3961971030F7E,
	UnityTlsProvider_ValidateCertificate_mB131CB7451246C50BC4F3612C768E09C1DF59AAF,
	UnityTlsProvider__ctor_m84BDC7485DA3C2B3A2153CA4B0AC695FD65AF493,
	UnityTlsStream__ctor_mCFCFF6B6CCEB2BEBB904E26AB3BF22E888C75C3F,
	UnityTlsStream_CreateContext_m0626DFB8390DAFD3CDDF43BF033F6BBE6260E1C9,
	CFObject_dlopen_mFCCB233C9C9A50D506CD4F1ABED02B8B62735C78,
	CFObject_dlsym_mBF6766537A83ABF750C32B33B09C8E38F4BD1CD3,
	CFObject_dlclose_m012BF88490C06A6C7491395B5B42A794F0833F7B,
	CFObject_GetIndirect_m0CEC26DEAFEFA09E4227456BD3209CE31EEA8B9D,
	CFObject_GetCFObjectHandle_m3120B22D9181E66B627FBD3945C936227AC2CEE0,
	CFObject__ctor_mF64B1A8118687E2945D8B211BE8815B1DB640456,
	CFObject_Finalize_m006C6599C427E094BEA3C22EAD8EEAFF67725E29,
	CFObject_get_Handle_mCC370B38D8244C40F8DE155013E1F1DA5C0BAAF8,
	CFObject_set_Handle_m63B93A801DCA3AED580D08D96C73B29B0C5239EA,
	CFObject_CFRetain_m6F8AC05D65A3F2362D6FB30E167F014858515DB0,
	CFObject_Retain_mFCCF79A9B34E092526A615CC6A4C9CD0E617DE8F,
	CFObject_CFRelease_m99995BA572C171D1FCA3016F3C2264AC9DC964EC,
	CFObject_Release_m1AFEB7B3D714FE12E1CC26E473230E2AF9A7AD32,
	CFObject_Dispose_m8CF85BE6C028F1567A3066A0E47FB69CB3D13250,
	CFObject_Dispose_m7CF111071216A34F1255FFD86FA36A640516044F,
	CFArray__ctor_mD6A392F2B610ABA574B99EEB18F0B824CEA4B74B,
	CFArray__cctor_m6C3B2E90EA8971C6A6217B1EAE6982C0C6D15F42,
	CFArray_CFArrayGetCount_m7B9C0DAAD2E608AA91E6AF69D14E79CA984A4F73,
	CFArray_get_Count_mDAB0951207B368F8509220DF20A6F9659E1745BD,
	CFArray_CFArrayGetValueAtIndex_m6D81FF806B39AD0113B644D8074D1EA5C71F0042,
	CFArray_get_Item_mF96F5B64841A7AC6FB726DEC1698AF72536492F1,
	CFNumber_CFNumberGetValue_mBB4E2B5F8A0AFABFCAB24DCD9F2C0270C9F3B5AB,
	CFNumber_AsInt32_mEC1828CEFC9E0F945C22D09B09D5146B75D68770,
	CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2,
	CFString__ctor_m713E89F54692440CCDB684689F956C8861241143,
	CFString_CFStringCreateWithCharacters_mE917A7721458FEC4897D4D40F952FED5C74BBBFA,
	CFString_Create_m7F968536151F0DFC1CB848F1382F934D733A7E94,
	CFString_CFStringGetLength_m016D6289246E6BC81567F351F0715EA566AB609D,
	CFString_CFStringGetCharactersPtr_m099CE7331162D55C0D9C7E07BDD2A91352354F3F,
	CFString_CFStringGetCharacters_mC67D64C45707BF30B211BBBC70F5F9982D17566F,
	CFString_AsString_mC0ED721CE2D3EC9C1B4DC76C66EBCB2F4894C15B,
	CFString_ToString_mFFA4CF7FD17AC3DE2A7512239105593C06D073F0,
	CFDictionary__cctor_m1C9A42B30155219EAFD302304F4BCE71C0806256,
	CFDictionary__ctor_m47C3403AF6A136376DAA1033F3DEDCD01EBB8C6B,
	CFDictionary_CFDictionaryGetValue_m0EC4E585C878951EA7553FFC127257F0BE168E31,
	CFDictionary_GetValue_m541C66EDA38170813EFC86504CAD18E4984F837D,
	CFDictionary_get_Item_m4DBF14449B67051E61B351BDA1C1D75F261CB3ED,
	CFUrl__ctor_m94B28224C2267F1601BC29F618EBD556514DFC9F,
	CFUrl_CFURLCreateWithString_m1366236BDF79E91FA08FA736E4CF514805CFAF59,
	CFUrl_Create_mEC0A91ABC5696C78631CDB3C2CBE06E4A9B1AB6A,
	CFRunLoop_CFRunLoopAddSource_mE428579D40413B6FB740F7B42C64B63881F61568,
	CFRunLoop_CFRunLoopRemoveSource_m45D070FA5D5935F7040FBCA805361F05B848996D,
	CFRunLoop_CFRunLoopRunInMode_m58A4EAE225C578C02E2A03B5B188CA3DD078BFAA,
	CFRunLoop_CFRunLoopGetCurrent_m8F7E74F0B1BA966E2142CB3D4BD70752E8299419,
	CFRunLoop_CFRunLoopStop_m51B11460D5AA6A7E947F479B4897F9B4DFD1609F,
	CFRunLoop__ctor_m1D2EFD768DA1ECAE1E4FCD72448BFE2CF324AC07,
	CFRunLoop_get_CurrentRunLoop_mBCBEFF47AD9EA6FA878AE0A7F476EA58CA65B9C0,
	CFRunLoop_AddSource_m1F4505F77A5740DF6A02FE08A89CFE0F875F33E5,
	CFRunLoop_RemoveSource_mE7D7027C829D200D3AF51D026FA6F236BA436E3A,
	CFRunLoop_RunInMode_mB31A23ED32135A505EBA8D8EC7A54CB54094DAC0,
	CFRunLoop_Stop_m150B479F9DF68F537303DAEF52A5E21BF42C6C9C,
	CFProxy__cctor_m5E64CF6485D2887BAD97F92173EE34A7867EB7D4,
	CFProxy__ctor_m41DDC9A050F27587A9F2A492DB2614EB5CB6B098,
	CFProxy_CFProxyTypeToEnum_mC685B37B2264E025F168250BCA92DC848E531702,
	CFProxy_get_AutoConfigurationJavaScript_m6B62E15C6AA2B407D9B788515B519DCCF88FEC8B,
	CFProxy_get_AutoConfigurationUrl_m840D41FCB3D048DD2EAD2B3A1DC054B96E2D4E5E,
	CFProxy_get_HostName_m24443A667C88CBB73EB7CEE0AB35CA42BBECF3B2,
	CFProxy_get_Password_m20C13DAEDF18604D6F2D57B56C56758667525D6D,
	CFProxy_get_Port_mC6490D437685D8E722A81740FBC64746021190BF,
	CFProxy_get_ProxyType_m0C440E8A2DC2FEA8725E635FCCCC61CBB7EEFC88,
	CFProxy_get_Username_m8155EBB692BD8FFBC2B84325225284E6FDE5D2AD,
	CFProxySettings__cctor_m6A3C05CFF7C6FF13E81F591D83148FA36BDF3166,
	CFProxySettings__ctor_m3EF761C43D266A201620A8F9291B4E447CDDD3C4,
	CFProxySettings_get_Dictionary_m4E22C04DF8DE1D4088C462849BB2654AD2A212FF,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_m89792AB0F424FCA209DD5AE706D47A565A2839DE,
	CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_mEE70C4C4C4E0E25404E6417B126D960E79356F88,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_mF6DD5D031A74CE07FFCFA60137A3097683F313B2,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_mCE67B2B2E7E40885FBE488B67B1F748F28EA4089,
	CFNetwork_CopyProxiesForAutoConfigurationScript_mD52D441E483F955FBA484E58282E688A7DAE3BC1,
	CFNetwork_GetProxiesForAutoConfigurationScript_mEA6EE80D03DC167CB088A9BD36C84DD2919BC828,
	CFNetwork_GetProxiesForAutoConfigurationScript_m0FA93E7487DAE6993B0F1F69B4E61ACC4F46E0B7,
	CFNetwork_ExecuteProxyAutoConfigurationURL_m1645430EC8CB0FB9B128A1525436468BA71C7D7A,
	CFNetwork_CFNetworkCopyProxiesForURL_m222DA57686642F09DE2B4CC9505AA5916C5F593C,
	CFNetwork_CopyProxiesForURL_m3CC1E10A717CBA58D63403AD72AFF7C28DF09DAB,
	CFNetwork_GetProxiesForURL_m22E56EFEEA7B927C996B28C7D6D066DFB1E04673,
	CFNetwork_GetProxiesForUri_mE82A7948BF5A3CF1AFD09DC739F017C8A5694429,
	CFNetwork_CFNetworkCopySystemProxySettings_m7C9D402114A62862E1B10B3CB352DB0617860E66,
	CFNetwork_GetSystemProxySettings_mC08214866976C5825A453088EFAE1846D87D425A,
	CFNetwork_GetDefaultProxy_mFCEFB728224033F014C188FE2BBC379A7F753428,
	CFNetwork__cctor_m53723CA4A908873A10BBB2FD8B3BB7C23A23F250,
	GetProxyData_Dispose_mF6A2D7D8C67588D1D627AF94DFEF2C7AA5B76CDD,
	GetProxyData__ctor_m9CC32EF080377850BC9B6FF283B2595C167B7721,
	CFProxyAutoConfigurationResultCallback__ctor_mFBDA2507472B5CC9BE1AB00525A4985606AD36BC,
	CFProxyAutoConfigurationResultCallback_Invoke_m14AB24B2B486ABBD22AABF058F5DCA9FA12FE829,
	CFProxyAutoConfigurationResultCallback_BeginInvoke_m61976BC16FAC944A2D7C243AC67A4EA61500DAC0,
	CFProxyAutoConfigurationResultCallback_EndInvoke_mBE6E881358E26A55305C5983CE119B1AD8E52332,
	CFWebProxy__ctor_mCC44E988D527452E493FC4A23ED3722CC71E6A38,
	CFWebProxy_GetProxyUri_m3F63B622064439B7E92515CE2843669E071C6BAF,
	CFWebProxy_GetProxyUriFromScript_mC4D0A8BC56266C546C65C29996A5564F03503DEB,
	CFWebProxy_ExecuteProxyAutoConfigurationURL_mC040FE13D5540C58B8CF4EE63C5D331978B901E1,
	CFWebProxy_SelectProxy_m95C6AFD75952BA91814ADE401ED5F12C5654D046,
	CFWebProxy_GetProxy_m4743138D378D43BC119DAD673A3CA7DF4CE6CFEB,
	CFWebProxy_IsBypassed_m1E2CC3D34FA80BA0FC1026047CCC2947AA2D0EA7,
	U3CU3Ec__DisplayClass13_0__ctor_m9E10A71FD7E271A87BF207893367B1CF1398C7CA,
	U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_mFE212AE14442B7E102A25A01CC3347AFB5C3BD13,
	BufferOffsetSize_get_EndOffset_m3D0A21592979F5088101892843183FCFB8C9BF2A,
	BufferOffsetSize_get_Remaining_mBD3EA6B0F643284A54FDCA2860FE0F65C5CAF054,
	BufferOffsetSize__ctor_m3DE692137428B2E6AB46008825FC5C1B63FDAF4F,
	BufferOffsetSize_ToString_mEEB6528B305FE796622A87E8692C7132423D4655,
	BufferOffsetSize2__ctor_m68156625CD993C66D5EA9C5194263DD9A4F59F3F,
	BufferOffsetSize2_Reset_m4426212B4ECDC2D1487AE5B825918B747D947AB7,
	BufferOffsetSize2_MakeRoom_mD7CCEC959C12276B0333DFFEAA8581C465FF44ED,
	BufferOffsetSize2_AppendData_m96903990058C4793A3B56FDE82006E4EC90A2508,
	AsyncProtocolResult_get_UserResult_mCCD14DC517D32C83AA61320D6D1D2E7F1430A3C8,
	AsyncProtocolResult_get_Error_m90252805C3FCD7277CD1CB01CB765183889E6E29,
	AsyncProtocolResult__ctor_m9F01278D600A337B6A0CF5F6C9EFF7760BD758D8,
	AsyncProtocolResult__ctor_mD63EC8610596D4B15DB1325C58FF32A41DAD48CF,
	AsyncProtocolRequest_get_Parent_m1F7659D1FAFC679076165336ED380C4BD123B452,
	AsyncProtocolRequest_get_RunSynchronously_m66A26ED05543D9AF1ED86287DCE8389BC1CB319A,
	AsyncProtocolRequest_get_Name_m1999BAB96B06DCB4DC11BF5F3B0BF4C6E2A26FF6,
	AsyncProtocolRequest_get_UserResult_m53CEBBACE5031D4CE92308ABBAEA38AEF74DDBD3,
	AsyncProtocolRequest_set_UserResult_mBF62363240DC9BE894231E56047F594EF452CD19,
	AsyncProtocolRequest__ctor_mFE18CBE3FAA084FF6DF2AD8BECC2CA6DF4C6E769,
	AsyncProtocolRequest_RequestRead_mFE5CEC3957F554C144DFBD3965538192A954D064,
	AsyncProtocolRequest_RequestWrite_m2A27B2F2C4734DA21AD7D36B18B0D67EB3D54ED7,
	AsyncProtocolRequest_StartOperation_mA13EA6B8ED143BC043F506815D05EB3F49F22682,
	AsyncProtocolRequest_ProcessOperation_m6DD0D7800F73C41BE9A5313737357801B22ED71D,
	AsyncProtocolRequest_InnerRead_m902FA39460933B383900CB60BDF8CCFC96BF3499,
	NULL,
	AsyncProtocolRequest_ToString_m2D8062B5811D7B7A071CC451D2FD03E5BF61B529,
	U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2,
	U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A,
	U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D,
	U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3,
	U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D,
	U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3,
	AsyncHandshakeRequest__ctor_mD64E5A00147B8D0859732BE2ACE93D32868F8210,
	AsyncHandshakeRequest_Run_m4C9BCE2E991E582B738E2A4E7F2D088227685B98,
	AsyncReadOrWriteRequest_get_UserBuffer_m628B7BB1EB536BA73CFE467242E0E749A7B0AE6A,
	AsyncReadOrWriteRequest_get_CurrentSize_m5AE6CC50F25E8504438DF2C9C2E2A44000621142,
	AsyncReadOrWriteRequest_set_CurrentSize_mAB6067CAD6F9DB5B3D274FC09E70BFA8DCBA288B,
	AsyncReadOrWriteRequest__ctor_m880E292B39EF76B9EDF3A5AB0A9A333A38A5575F,
	AsyncReadOrWriteRequest_ToString_mDF6B2FA7AFA4E8B6571656E60CEF9BCFDCF05EDD,
	AsyncReadRequest__ctor_mAF75247AFFC230BA5433424D27D13ACF53B3A239,
	AsyncReadRequest_Run_mC9FDEBDFB3C4519C11A47FF358D4B7AB62514E11,
	AsyncWriteRequest__ctor_mF3534E810074917ABDE7E4CE7EE61715694F9EB8,
	AsyncWriteRequest_Run_mA3FF2D74BD568114BF3EA7FF6B0BE568D25D81BC,
	ServerCertValidationCallbackWrapper__ctor_m6EB9B9436E627C4C616BC14AA8EF5B6BD28B4F4E,
	ServerCertValidationCallbackWrapper_Invoke_mC75038D5C50C3354D6938DD77608DCE39D5DC1AE,
	ServerCertValidationCallbackWrapper_BeginInvoke_mCCBD269244B22D143E7CF8F02FBF9DA99488F1D9,
	ServerCertValidationCallbackWrapper_EndInvoke_m4F4A10E18E6928B33347B2A7C31B7AE9A0BD796B,
	ChainValidationHelper_GetInternalValidator_mBDF9A751ADCBA2326B75ABF4BDE8410F08FF5FAC,
	ChainValidationHelper__ctor_mFE078E9D7EB24B1E12975ABFC262C403F1A54CBF,
	ChainValidationHelper_DefaultSelectionCallback_mC8C3FAEDFCAC634F7C77EA067637E0088863B31A,
	ChainValidationHelper_get_Settings_m0D7AF0562DCF1102D27554FFE64628F8EFBB8684,
	ChainValidationHelper_SelectClientCertificate_m116ABB9254158E98AA9A0EB323980138B1F11983,
	ChainValidationHelper_ValidateCertificate_m0DE6FB5264C61C93FA06B954A0CBF670AB7C3A08,
	ChainValidationHelper_ValidateCertificate_mE482A7E49237B8C3CA8F491A78CC6E6084671188,
	ChainValidationHelper_ValidateChain_m1FED22B0446D155E82E39C2743C9A16EDE6F62ED,
	ChainValidationHelper_ValidateChain_m7A807FE9B1CBE778FE851D07E24D80A3D567B90B,
	MobileAuthenticatedStream__ctor_mF6BF50D6BFDEF283FF8036F5170281D29FDD7628,
	MobileAuthenticatedStream_get_Settings_mA58954FF6C914DBAACB8F508ACFC5165A9A43155,
	MobileAuthenticatedStream_get_Provider_mC36232C2AF537A29FBB55B1AD3C99F02A9731C37,
	MobileAuthenticatedStream_CheckThrow_m2AAEC9435176D4AA10890A896C5909330B23683E,
	MobileAuthenticatedStream_GetSSPIException_m574F0E57FDDC71287516A9908D7E57FC61A8ED27,
	MobileAuthenticatedStream_GetIOException_mE435E11E49448A2035BCABF04AA5F72F44DC26D4,
	MobileAuthenticatedStream_SetException_mAFD628C4C8A54C4FE24BFB30C0F5863FDDFC8A7F,
	MobileAuthenticatedStream_get_DefaultProtocols_m4786DD642B1C1E3E57EBB073E6F67C58214F04E2,
	MobileAuthenticatedStream_AuthenticateAsClient_m9D541438C1BFEF84A4F37033AB1D32043AE9FCA1,
	MobileAuthenticatedStream_AuthenticateAsClient_mD5CF73BAD8ABDB6BBFE869EDD519F440767F3749,
	MobileAuthenticatedStream_AuthenticateAsServer_mF6F76CA384D369470FB3EB1492711E8E3936DF51,
	MobileAuthenticatedStream_ProcessAuthentication_m1A9EEBB26CCD694B0B844D8375EA85E6A353B73E,
	NULL,
	MobileAuthenticatedStream_BeginRead_m678B1BECC958CD3B67D66134E56AD3CAEB07019C,
	MobileAuthenticatedStream_EndRead_m347ACCE77CCCE6738781A2B182949CBA72CF9143,
	MobileAuthenticatedStream_BeginWrite_m01F98CCE1A968C5654028F266F3C648CF858864B,
	MobileAuthenticatedStream_EndWrite_m0CA1FD8354542D4F2BCA50BB4B0B852472D775C1,
	MobileAuthenticatedStream_Read_mB273DD14EDCED08E88F57CB340B97A206BA7DDE1,
	MobileAuthenticatedStream_Write_m0264ACE9D90AFB72A1A27B6130DD1B2876334DDF,
	MobileAuthenticatedStream_ReadAsync_mA54D1973D54A2F0DB84CE3FB41EAE1974988BB32,
	MobileAuthenticatedStream_WriteAsync_m2521D8A56CEC0EA00B99F2DD570FCCEDEBFF1807,
	MobileAuthenticatedStream_StartOperation_mB3763CD0086F3FB7D75AF3E10A9E1532FAD5BDB7,
	MobileAuthenticatedStream_InternalRead_m61B06DFDEA8207EEB7F1C350A428D7158ED25764,
	MobileAuthenticatedStream_InternalRead_mE90566374244F746502383488E02279B6A4F2E47,
	MobileAuthenticatedStream_InternalWrite_mD2BD17B591D53F923FAC63558AA1D35B21DB4E21,
	MobileAuthenticatedStream_InternalWrite_m1B5142B048B310D81A4929D4266FF9F0B0BE1B5D,
	MobileAuthenticatedStream_InnerRead_m0EDB58159985F661C68EBA26247546ED06999D0F,
	MobileAuthenticatedStream_InnerWrite_m36FEDC8E842C497B62D566D6392287270FD698AC,
	MobileAuthenticatedStream_ProcessHandshake_mE6B1280A8F2D9FB6EA6EC2AC003906FFB49AA9CC,
	MobileAuthenticatedStream_ProcessRead_mB005268451AB3F73B29AD1F787B576D5F3279371,
	MobileAuthenticatedStream_ProcessWrite_m30427A9308C97FAD0964F81A6A9F436FB2507F0F,
	MobileAuthenticatedStream_get_IsAuthenticated_m8D978D4684246BB2629CB1E2D207D2D76C132E3A,
	MobileAuthenticatedStream_Dispose_mB7DAA195CE82F2FA15AB576C961A7CE5D58C3106,
	MobileAuthenticatedStream_Flush_m20FAE0A0A6C311E1925367C03ECA23BBFB74BE8D,
	MobileAuthenticatedStream_Seek_m2D799812EC327A4E25AA165B9966514B2B1475A6,
	MobileAuthenticatedStream_SetLength_m8FCE457448E738481D5AAC29A8A9333A1B67D8C1,
	MobileAuthenticatedStream_get_CanRead_mE230E0D6A7CA3324925CD6311465B7BD41A144CE,
	MobileAuthenticatedStream_get_CanWrite_mAF3696EAD7809A7D9EB50A091BDAE02586E0DF54,
	MobileAuthenticatedStream_get_CanSeek_mFD9C9EF3A622E65965F14997361F9F611B2314A2,
	MobileAuthenticatedStream_get_Length_mD76215A3195543708BCB40C787678535541CE71E,
	MobileAuthenticatedStream_get_Position_mD05763AB69A4C7F98E6276F32645AEDFD8888731,
	MobileAuthenticatedStream_set_Position_m5A309FE43C490AA7C1D9AE181D269CCA12B26260,
	MobileAuthenticatedStream__cctor_mCC74CDBC64394AA7D5FE8CA0EE03EC0F11D7FEB6,
	MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_mA67CDCE05B68516E41F5A6A8BF836B0AAE18D3B9,
	U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82,
	U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B,
	U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466,
	U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC,
	U3CU3Ec__DisplayClass66_0__ctor_m4ADA8611B27CC1C1BE9AFD1D22978A6621F720BE,
	U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF1C5674011A7F38D3AE4A911BE1E8E36E5CE0348,
	U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96,
	U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381,
	U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542,
	U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A,
	MobileTlsContext__ctor_m449BA0C8EEB97C8D13FBDF2B18F46F37408292E2,
	MobileTlsContext_get_Parent_m0FD89F43463E15B8D86845F0B3A9DF8B1C555DCF,
	MobileTlsContext_get_Settings_mD01B5D15FBD79707BB1F283814FF76817230E35D,
	NULL,
	MobileTlsContext_get_IsServer_mEC45475AE45AAB2485A829E6694B4E3BA1865C44,
	MobileTlsContext_get_TargetHost_m9A21D6E1D130B27A98EC48E33823BAEA78E3103F,
	MobileTlsContext_get_ServerName_m4E6D70D85F6EF3AE2D69F7C94EE30AA94B29D5DE,
	MobileTlsContext_get_ClientCertificates_m9EBE077A35DCE8333AF50C2CE8D22BE18DD26961,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_ValidateCertificate_m4A466CEC18A060EDFD9D65F66600FA7F63632F7A,
	MobileTlsContext_ValidateCertificate_mC4B0D79BE85414111AAEF998B89A3397B2FBA25B,
	MobileTlsContext_SelectClientCertificate_mECA3191985152439F02BAF708106264FAE73295E,
	MobileTlsContext_Dispose_m28EF01B1A0096B9A7820BAA0A77DB59C96A619DD,
	MobileTlsContext_Dispose_mA5A0EBCF3B159E9C83F76C00BA50FC67C360A7D1,
	MobileTlsContext_Finalize_m5751EFC24E645E0948C5ED11BD9C6C9E31170BA0,
	MonoTlsProviderFactory_GetProviderInternal_m39B343490A04AEA1AA38A90180E1B3BB1FB09020,
	MonoTlsProviderFactory_InitializeInternal_m6F039B9508B57C42B56DC7ED10C4F165B43F9200,
	MonoTlsProviderFactory_LookupProvider_mCCE6D95A81D810BA625035EEC1F974C16C748700,
	MonoTlsProviderFactory_InitializeProviderRegistration_mB8EDA2E5365BDCE5E8848A0259C78C1108FABC8D,
	MonoTlsProviderFactory_CreateDefaultProviderImpl_mCD05512BAD4E80E43384340A06057306064EFACE,
	MonoTlsProviderFactory_GetProvider_m78F329C7EAEB40EBD9A044CC1F0B89026DA2CE4D,
	MonoTlsProviderFactory__cctor_mF95517B2A6920440ACFBE55DEA0EE9C1211BF26A,
	MonoTlsStream_get_Request_m2A0C4CA4D549165015FACBFDB99051387A0A6ABA,
	MonoTlsStream_set_CertificateValidationFailed_mAECE839D304818A9CA38E598B85B962064F45B3F,
	NoReflectionHelper_GetInternalValidator_m231BC9D1C0A711D48F25B6F0162ACABBA93A0D74,
	NoReflectionHelper_GetProvider_m59893E33828D7422C8A4779F4C608373877FC05A,
	SystemCertificateValidator__cctor_mBF04D8E389B7377FC07044B9CF044A966C572193,
	SystemCertificateValidator_CreateX509Chain_mB9965896005703ADC050BC1E6415D30FBDC42091,
	SystemCertificateValidator_NeedsChain_m51D5E6A2B5A26BECA8764E613D19345A9353BA52,
	CallbackHelpers_PublicToMono_m84CC573B0D8E011058AEC077734D8C76921DD04C,
	CallbackHelpers_PublicToMono_m1CA5926DB777E92367F0C69583DE272E800E43F1,
	CallbackHelpers_MonoToPublic_mA514EEB118D8EC3D84A607A42A0B48B5DA1FA500,
	CallbackHelpers_MonoToInternal_m82BDD9A21269FA19DA58564160BE5A2C083A4199,
	U3CU3Ec__DisplayClass0_0__ctor_mA3851A05D04281AEB715F93118D39916A6427108,
	U3CU3Ec__DisplayClass0_0_U3CPublicToMonoU3Eb__0_m6FE7B68D49CC73BE9827FE5BB16ADBE161FC37B5,
	U3CU3Ec__DisplayClass1_0__ctor_m492092FC9882667749BB83BAEAA9A3E071159C2A,
	U3CU3Ec__DisplayClass1_0_U3CPublicToMonoU3Eb__0_m4DBC5C72F03BFC069888B7B4D29A189369967692,
	U3CU3Ec__DisplayClass5_0__ctor_m220DD155C36F2E4600624C5208FBCAC3DBDBC31D,
	U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_mA228BC7BEF63CBFCF290284572E847A6BCCFECF7,
	U3CU3Ec__DisplayClass8_0__ctor_m2D537E7900C0394F5478CF4E408AACDF9F926E86,
	U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m0B62590D3F567A6C864B7B82B577676087CACB6B,
	NativeMethods_DuplicateHandle_m78864E2A6608237C7AD9F392672CF62C102EFAB9,
	NativeMethods_DuplicateHandle_mD5F5CFE9AF5F0A0831B226D5A2E7D8B27BC77420,
	NativeMethods_GetCurrentProcess_m470BC1AB38E76F7D3609E5973164BA429A5A99F0,
	NativeMethods_GetExitCodeProcess_m0B68F9BEAE74B6484B647B2B6184A277D7F9B85E,
	NativeMethods_GetExitCodeProcess_m7D3B74718B6769AC344772C3371029A23A9F63F2,
	NativeMethods_TerminateProcess_mBC4E2594C95D3509663AD05AB574C5BBEC21BC88,
	NativeMethods_TerminateProcess_m71EEA18511EFFAA5A89D30B3F5CF57084F937617,
	NativeMethods_GetCurrentProcessId_m0016C19BD1E7D529B3DE06613A7ABDD6B5898386,
	NativeMethods_CloseProcess_m95778319FAE1520630CDF2814F892186E8D977B3,
	SafeProcessHandle__ctor_mACAF3A4631B2722598CCF2A2643A25FE19B8D16D,
	SafeProcessHandle__ctor_m713A0BCAD1C7ED5FC8C6209AAFFDB13F4D0C0B74,
	SafeProcessHandle_ReleaseHandle_m0748515ED950677F3A4565858B2155DC2D5417A5,
	SafeProcessHandle__cctor_mF612BA387B3390D761F2198447AEE905441E1911,
	UriBuilder__ctor_mFC8729DAB4291B5B6500207C85DCB3985B46BB52,
	UriBuilder__ctor_m1B050A706B91D8EDCF5DD4A98CA1F1A0FE6EA8AE,
	UriBuilder_Init_mB18B3A4578F102E7E99F18542236A6B5B6ABA174,
	UriBuilder_set_Host_m7213BE98F62DE6A099EA8EEFF479949C5F1EA680,
	UriBuilder_set_Port_m14DBA6E597BED983B73F4AD7F1215C6E474DB6F3,
	UriBuilder_set_Scheme_mD20C10C2D43C0C2C96D9098BE4331D46FCC45921,
	UriBuilder_get_Uri_mDCABA4CD1D05D4B9C4CBA063BC7CA94EE6CCC631,
	UriBuilder_Equals_m370D16A9DCA721B688549EE192A9B79C737FE16D,
	UriBuilder_GetHashCode_m4FBBBBE01B56EF5DF92C4F5A2BCAF5E86A585BE7,
	UriBuilder_SetFieldsFromUri_m54B4EB1ACEF01F2B0B11EC81768BB7D56245447F,
	UriBuilder_ToString_m5BF9ED358C61008561663680C0D843C22C25443D,
	SecurityUtils_DemandReflectionAccess_mC21CA419C4B77BBDE16AAF5C33DCBF86E3CCA5F0,
	SecurityUtils_HasReflectionPermission_mE162700DD39C0E439075D744EA4DD3C768AA5D96,
	SecurityUtils_SecureCreateInstance_m00B165286E54C3393CFFE82948E078F96018750A,
	SecurityUtils_SecureCreateInstance_m75CC5B0308F53B01ADC1B5EEBF831C49A53808F4,
	SecurityUtils_SecureConstructorInvoke_m7DA77EA06BECD2F9B36481C8CAD9429674166D27,
	SecurityUtils_SecureConstructorInvoke_mE027B99C9C5C9A325AFC67CAC4B4106DBE855585,
	IriHelper_CheckIriUnicodeRange_mA9BAAD6D244ADEE8986FDC0DFB3DFDA90C093A6C,
	IriHelper_CheckIriUnicodeRange_m5ED29083C22062AEAB8B5787C9A27CFEEC397AD9,
	IriHelper_CheckIsReserved_m5C0A35BF0890852A3FC564618DB0836BBB6C0F1C,
	IriHelper_EscapeUnescapeIri_m6DE347247CE35DB4CE3129BEC2179F0095D69239,
	Uri_get_IsImplicitFile_m048350CB1E9AB92599F1557680A5D3B5FDE7C35D,
	Uri_get_IsUncOrDosPath_mE372CA996BE5B29DD531D7C6DD1809E17441005E,
	Uri_get_IsDosPath_m89CA4E32381C529502E91872BC89BD18F5419D08,
	Uri_get_IsUncPath_mD5EE84D5105BFB7D64E5C26B9549A67B720A7AE8,
	Uri_get_HostType_mBB4EE8652EA19E2FB8C696302D5EBE82F358EC90,
	Uri_get_Syntax_m3DB6A5D9E6FC3E0D0A63EA8A4527AF4106F9BD78,
	Uri_get_IsNotAbsoluteUri_mF9706123EB027C6E9AB263B98CE58CF319A22919,
	Uri_IriParsingStatic_m39FC9677B4B9EFBADF814F2EEA58280F35A1D3E5,
	Uri_get_AllowIdn_mF1833CB700E04D746D75428948BEBC70536E1941,
	Uri_AllowIdnStatic_mFABD19611F334DF87EC3FF2B9A1FA061CAE3A5C5,
	Uri_IsIntranet_mE98CA41B60FE0D4970737C8B7C81E5C63BFC07E1,
	Uri_get_UserDrivenParsing_mFF27964894B5C0432C37E425F319D6C915BCDC39,
	Uri_SetUserDrivenParsing_m0368CB47B9E9C35CB49B3F02DBE8DFED8756226B,
	Uri_get_SecuredPathIndex_mC59A2366D6F3667017F677351C4350C9541905AA,
	Uri_NotAny_mC5DC04B72B13D2997B055B9E41FCFEEC1CE5263D,
	Uri_InFact_m4CE890C86FA34154A044516D2F3C9463389220D7,
	Uri_StaticNotAny_mC07A1201FBE032238FCFA96E9FB5D60AEDACCC5A,
	Uri_StaticInFact_m77BB2AE094534AFD7B9F68683C2A4356A75E39B8,
	Uri_EnsureUriInfo_m4B46DF8611FA6D20D497D12D00544CFB466DCFA7,
	Uri_EnsureParseRemaining_m33815B5767FAFADB762F7E39364E6432340F210B,
	Uri_EnsureHostString_m4BD63AA5A88CA09572A8A7CF3B2EDDE17EF9C720,
	Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2,
	Uri__ctor_mA02DB222F4F35380DE2700D84F58EB42497FDDE4,
	Uri__ctor_m42192656437FBEF1EEA8724D3EF2BB67DA0ED6BF,
	Uri_GetCombinedString_m7B95A90BC09E899CF41B0047E0B681FA7CEB8668,
	Uri_GetException_m2E833A8358C84BCF0397341160FADB1164290164,
	Uri__ctor_m020E8051B3C0C9E60D8A868CBA0774B3FFB7C3FF,
	Uri_System_Runtime_Serialization_ISerializable_GetObjectData_mD4773E59427820077E86F2B298DA1386028DAC9C,
	Uri_GetObjectData_mC8CCD55C21CB624E369258E27A89F363F8271E68,
	Uri_get_AbsolutePath_mA9A825E2BBD0A43AD76EB9A9765E29E45FE32F31,
	Uri_get_PrivateAbsolutePath_mC1CDB66963BF6D6AEDE0713D3CF0CE0647A6A532,
	Uri_get_AbsoluteUri_m4326730E572E7E3874021E802813EB6F49F7F99E,
	Uri_get_LocalPath_mA82E33D3A3CC238669E0CE3B7AD298AA9C8695D0,
	Uri_get_Authority_m8C0B264FFF519F0D0C2CB3F9B6B0E87D2F3835C1,
	Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304,
	Uri_get_IsFile_m06AB5A15E2A34BBC5177C6E902C5C9D7E766A213,
	Uri_get_IsLoopback_mCD7E1228C8296730CBD31C713B0A81B660D99BC4,
	Uri_get_PathAndQuery_mF079BA04B7A397B2729E5B5DEE72B3654A44E384,
	Uri_get_IsUnc_m70B47E68BDAE06A7E5362DCE5AAD97C12119AB99,
	Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151,
	Uri_StaticIsFile_mD270A5F6C8B59AAF6256B4565ABE5917ABA545E3,
	Uri_get_InitializeLock_m45D6A11D14958E716715351E52207DCA808F00EE,
	Uri_InitializeUriConfig_m1B2F98DF0BB1A48FEB328E9D8BF3C23B32196FE2,
	Uri_GetLocalPath_m0E14B876FC912A64FC37663FBB3F65234FD4146E,
	Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C,
	Uri_get_Query_m3F64514B4DB7C849C8255BA3FE08C6BE983D2D56,
	Uri_get_Fragment_m111666DD668AC59B9F3C3D3CEEEC7F70F6904D41,
	Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187,
	Uri_get_OriginalStringSwitched_m79E1C9F1C4E0ACCC85BB68841C167DDEA15CC72D,
	Uri_get_OriginalString_m56099E46276F0A52524347F1F46A2F88E948504F,
	Uri_get_DnsSafeHost_mC2D93669288A9C05CC13EE5754CEBF2D74D04704,
	Uri_get_IsAbsoluteUri_m8C189085F1C675DBC3148AA70C38074EC075D722,
	Uri_get_UserEscaped_m8F29E9A593E84E66DD4AC06CBD5880B93A5F0307,
	Uri_get_UserInfo_m201C93A932C446805E9143EBE969048D7E75C71E,
	Uri_IsGenDelim_m376CCA5D00D019A69FD746C57D236A54EB9D3CF3,
	Uri_CheckSchemeName_m351E06F4546E0F84E2DDB286B531F39D379589BC,
	Uri_IsHexDigit_m3B2881FA99F0B2197F8017E70C3AE6EBF9849836,
	Uri_FromHex_m9EAC76A5DBFED86532FF7E1BBD809176337A227B,
	Uri_GetHashCode_m06066B9059649A690C5B4DE58D32DF227933F515,
	Uri_ToString_mB76863E11134B9635149E8E5F59AB75A74A760E2,
	Uri_op_Equality_mFED3D4AFAB090B76D2088C485507F8F702ADA18F,
	Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B,
	Uri_Equals_m432A30F5E72A0F2B729AC051892BF9E1F4D26629,
	Uri_ParseScheme_m61CAE16F1EC76725E5E0B23B09577F91BB223884,
	Uri_ParseMinimal_m35FCFE52F12315DA60733B807E7C0AB408C0A9CF,
	Uri_PrivateParseMinimal_mE1DA461DDA053787906BBEC2BC2B3046B1B329F0,
	Uri_PrivateParseMinimalIri_m29F0CA367080586448C648332F59BED0096AB2D0,
	Uri_CreateUriInfo_mC112D6E7002CA014AB6BEA878A66ECC46340FAAF,
	Uri_CreateHostString_m6FEC48641D3786D73B50D5DC792804C9A4D70C54,
	Uri_CreateHostStringHelper_m6C5EEA8BD2CDBCDD8A63FB74D3B801329EDE7BDD,
	Uri_GetHostViaCustomSyntax_mD591A4A615803E70A03D7C75E7C114E4E460AED3,
	Uri_GetParts_mF5840DC010E6D420EB5A0722320EDAAEA2D0269F,
	Uri_GetEscapedParts_m745615124808CB89A18D499988F4425F678938C4,
	Uri_GetUnescapedParts_m051A75B5D2DDAE55F107457CA468EE9A2563FED3,
	Uri_ReCreateParts_mF50263ABC7D750E939B57BF61FA48A8762144FD7,
	Uri_GetUriPartsFromUserString_m95A7794F28625B6AFD514C08765C27CAAE4BD1B6,
	Uri_ParseRemaining_mBAE0F9850CD84965B3793B17444C677D77D58774,
	Uri_ParseSchemeCheckImplicitFile_m92A658AE6C04E038058AD8E9581A41B06B6D6243,
	Uri_CheckKnownSchemes_mCA95AE251E7C9208570543B446385BCF2C727E8D,
	Uri_CheckSchemeSyntax_m1181D9BEA35D9D22852FD2FE815CABB267BA5A8F,
	Uri_CheckAuthorityHelper_m5046CE781115A54CAE3ACD2C03987F526A761387,
	Uri_CheckAuthorityHelperHandleDnsIri_m366E36029D4C9A00C0F216055B15F5E4805AED28,
	Uri_CheckAuthorityHelperHandleAnyHostIri_m76FEA31E3FEDF3D1614987C6484ECF15022AE9D8,
	Uri_FindEndOfComponent_mF276ABD008291C1FDC4B433A2F274058D06D8A6B,
	Uri_FindEndOfComponent_mDCDF860C405E9F31F7CFE9AFFE7C096812697AEF,
	Uri_CheckCanonical_mED3910E55213D1DFEAA5B33079E3A89D369B10B6,
	Uri_GetCanonicalPath_mDE02BFA56EDD09479DDB2A5A50F6DF5210CA73F2,
	Uri_UnescapeOnly_mB8F87981CDD4CFBFCD97EE668FF281CE26453F21,
	Uri_Compress_m02224082A9665F07D35AB6EB6E3198642F9E7BCF,
	Uri_CalculateCaseInsensitiveHashCode_m634FFDF8FCD81DECCB87161B153D1093C0A6FCE4,
	Uri_CombineUri_m77B7B8B856CF8100E51250247930963E7C544F91,
	Uri_get_HasAuthority_m969936D80AE0309273733487C8B38BEE33468712,
	Uri_IsLWS_m7A9F3B969CCEE56B9F98E40F1903C737DA7DF0D6,
	Uri_IsAsciiLetter_m93435A20DF4DEE153B87B26D07B9963F1BF4F373,
	Uri_IsAsciiLetterOrDigit_mEBA81E735141504B5804F0B3C94EC39B24AF8661,
	Uri_IsBidiControlCharacter_mB14EA5816A434B7CE382EB9ACBD1432916EC341D,
	Uri_StripBidiControlCharacter_m49D782826401F99D943C1AD76A75125879FF332F,
	Uri_CreateThis_mCB3DC849A426498E9CCD249850CBC69C9D67D864,
	Uri_InitializeUri_m5D99BD8533F3FAAD479B1193505B5B19B8C2F2DE,
	Uri_CheckForConfigLoad_m13002EFBBFD437183ED0A7FCBE5681C510996B0F,
	Uri_CheckForUnicode_m78E4938E82EE352BD5D8493AE0314224BC2543CD,
	Uri_CheckForEscapedUnreserved_mFE708A44EC74C7E773B96B82CD9A5DF25EF97D4A,
	Uri_TryCreate_mEEB6736FEDAF52AAE36ACC1EA1EC8CEBB7C52DAB,
	Uri_GetComponents_m0346CA8037531DE1FC630775E0BD1F5D1E7920B6,
	Uri_UnescapeDataString_mE1F40FC5CA3FF03DEE9EB01E3D8BD502D36A284D,
	Uri_EscapeUnescapeIri_mDE5E4BAE74E2C2373AD186732FEE7AD6E0EA7180,
	Uri__ctor_m4605489523A7A973459720C1BBE4039FD10557CD,
	Uri_CreateHelper_m024137C47351CA9959E4AC66F9443AEEE87D89C0,
	Uri_ResolveHelper_mEDF1549C3E9AC1CF6177DCF93B17D574411916BC,
	Uri_GetRelativeSerializationString_m5D0CD02E255BB96532F056BB382CF7D74D62BE58,
	Uri_GetComponentsHelper_m28B0D80FD94A40685C0F70652AB26755C457B2D3,
	Uri_CreateThisFromUri_m9A4AE7CD70F7EDE9154634057EBE600E74A5D544,
	Uri__cctor_m2B8179039C09C64936CF8262E3EF4A7E7C2F90F2,
	UriInfo__ctor_m24EFE7B4E03C9FFB8B797770D626680947C87D98,
	MoreInfo__ctor_mFE29F028646C12EDCAF7F0F78F9A85D52C10B83C,
	UriFormatException__ctor_mBA5F8C423C09F600B1AF895521C892EA356CA424,
	UriFormatException__ctor_mE1D46962CC168EB07B59D1265F5734A8F587567D,
	UriFormatException__ctor_mE7F5B073E9F9DB5F22536C54959BEB0D1E7DA1D5,
	UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_mED4C06AC35B7F94955ECC0D8F00383888C1127DC,
	UriHelper_EscapeString_mF0077A016F05127923308DF7E7E99BD7B9837E8B,
	UriHelper_EnsureDestinationSize_m64F4907D0411AAAD1C05E0AD0D2EB120DCBA9217,
	UriHelper_UnescapeString_mC172F713349E3D22985A92BC4F5B51D0BCEE61AF,
	UriHelper_UnescapeString_mD4815AEAF34E25D31AA4BB4A76B88055F0A49E89,
	UriHelper_MatchUTF8Sequence_m4835D9BB77C2701643B14D6FFD3D7057F8C9007F,
	UriHelper_EscapeAsciiChar_mFD7DE796BD53CBD2B1E73080FE0346D37F358902,
	UriHelper_EscapedAscii_m06D556717795E649EBBB30E4CBCF3D221C1FEB78,
	UriHelper_IsNotSafeForUnescape_m1D0461E7C5A3CFBD7A2A7F7322B66BC68CCE741D,
	UriHelper_IsReservedUnreservedOrHash_m3D7256DABA7F540F8D379FC1D1C54F1C63E46059,
	UriHelper_IsUnreserved_mAADC7DCEEA864AFB49311696ABBDD76811FAAE48,
	UriHelper_Is3986Unreserved_m3799F2ADA8C63DDB4995F82B974C8EC1DEEBA76A,
	UriHelper__cctor_m9537B8AAAA1D6EF77D29A179EC79F5511C662F27,
	UriParser_get_SchemeName_mFC9EFD71512A64E640866792CCB7DAC5187DE9F1,
	UriParser_get_DefaultPort_m050510870CCD4DD08DF7E98E2AF3D616446AD99D,
	UriParser_OnNewUri_m7D55337A7A9B6B67FB0AD7CA96F472751EF5A897,
	UriParser_InitializeAndValidate_m3E31D86FEE445E313BB7141F760626301767A0E0,
	UriParser_Resolve_mF21D3AA42AB1EC2B173617D76E4041EB3481D979,
	UriParser_GetComponents_m8A226F43638FA7CD135A651CDE3D4E475E8FC181,
	UriParser_get_ShouldUseLegacyV2Quirks_mD4C8DF67677ACCCC3B5E026099ECC0BDA24D96DD,
	UriParser__cctor_m00C2855D5C8C07790C5627BBB90AC84A7E8B6BC2,
	UriParser_get_Flags_mBCF4C3E94892F00B6E8856BFED1B650FB6A0C039,
	UriParser_NotAny_mC998A35DC290F35FFAFFB6A8B66C7B881F2559D3,
	UriParser_InFact_mDD42FA932B6830D99AA04C2AE7875BA5067C86F3,
	UriParser_IsAllSet_m74BEC412DC8AF3B1A33E11964EBB3164D9D8C77E,
	UriParser_IsFullMatch_m7B5F47A62FA721E550C5439FAA4C6AFAC34EB23E,
	UriParser__ctor_mAF168F2B88BC5301B722C1BAAD45E381FBA22E3D,
	UriParser_FindOrFetchAsUnknownV1Syntax_m3A57CA15FE27DC7982F186E8321B810B56EBD9AD,
	UriParser_GetSyntax_mC2FEAF79ECEB6550573A1C0578141BB236F7EF16,
	UriParser_get_IsSimple_mDDB03A5F6EEE6E92926A386655E5BBD553719B9C,
	UriParser_InternalOnNewUri_m7D55F5CD59A3B9BF57BC68F715A27CC1A44566CA,
	UriParser_InternalValidate_mF2FEB0E76E48B621EB2058FBE7DCC6A42A1681E2,
	UriParser_InternalResolve_m2A027789CB5105E32B09810E81810E8E35DD1F26,
	UriParser_InternalGetComponents_mFD4B211C71E0506AE4E4E99D92ECAF1780CE4674,
	BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C,
	DomainNameHelper_ParseCanonicalName_mFE738FD1237E2D9D9A1B27BA73F58B1689D451E4,
	DomainNameHelper_IsValid_mE9672A824F71E32116358C5FA029789855A4B461,
	DomainNameHelper_IsValidByIri_m13E2A6D9EBD42326C096F2423DBB0014763D47BF,
	DomainNameHelper_IdnEquivalent_m439593BAF7C6C801F577E7C27B0C4FBB1772E49F,
	DomainNameHelper_IdnEquivalent_m459BFF3040F8E6BFE1CE1C6432A1343A2ECF2F57,
	DomainNameHelper_IsIdnAce_m2231C778C4CCE141ACDC412737642CC365307445,
	DomainNameHelper_IsIdnAce_m9193B7D824FC6965820FCE980FEE3E0B40EA94B8,
	DomainNameHelper_UnicodeEquivalent_mA80E5FF3AD6AFBB9FC257ED1C4F0D31C8F0EFEC3,
	DomainNameHelper_UnicodeEquivalent_mD5A7A659B82F1FBF7ABF30009117CFBF8BC4D55F,
	DomainNameHelper_IsASCIILetterOrDigit_mD3B0B9BD4573FADEF6AC7330A5EC58C220455F01,
	DomainNameHelper_IsValidDomainLabelCharacter_mF6DEB20D9D03A8728B1C58006C40D6603B7D61D1,
	IPv4AddressHelper_ParseCanonicalName_m2A8C35045CE02D6FC2C4251F239D1C0074E0E813,
	IPv4AddressHelper_ParseHostNumber_m798FB6828971F70775D1125565A1D1025C897F14,
	IPv4AddressHelper_IsValid_mD96D91E0F3830414F4601A4521E71DE832A45843,
	IPv4AddressHelper_IsValidCanonical_mC27E31F1F043D68BC52719892D34EDDC7851B120,
	IPv4AddressHelper_ParseNonCanonical_mDCD1CD7FB85C4FFBF3070B1435A0D632C1A7B97E,
	IPv4AddressHelper_Parse_m08110623FAC14806376148D7C16AB95A428EA6CF,
	IPv4AddressHelper_ParseCanonical_m9D4552558C934E373D188DDA0BC1D1DEF5A62C33,
	IPv6AddressHelper_ParseCanonicalName_m3944530A7B686031653F97824EF712424E0BEE14,
	IPv6AddressHelper_CreateCanonicalName_m0B1C201DFADBEB58869E0BE8BFA967EEE64B096A,
	IPv6AddressHelper_FindCompressionRange_mE70B131DDA05D3059325246A5AB7F6029B6EF6BD,
	IPv6AddressHelper_ShouldHaveIpv4Embedded_m262634E9099141536C00213C1CFC123665A641DE,
	IPv6AddressHelper_InternalIsValid_m3BD7E7524455146D4464037DA3B65530E547AB7A,
	IPv6AddressHelper_IsValid_m2383F1A867665B04A4F2B8D82FF2B62BE51C2289,
	IPv6AddressHelper_IsValidStrict_m4D3701E2EE4840DA681BB9D9BDACDDDBAE80A575,
	IPv6AddressHelper_Parse_m36CE2F56465C4F9F7791E80E954C7C0ECBD16DFB,
	UncNameHelper_ParseCanonicalName_mCBE64015FD1B6B4829CEAA89625C1D44E280E37E,
	UncNameHelper_IsValid_m4055361D79684EE7B098C055B2E9068EE06F1EF6,
	IOAsyncCallback__ctor_m1010BF5234B0ECC2FEB54105BA15B313633C1985,
	IOAsyncCallback_Invoke_mB95F7E7F0E8326CE5364A30F42FC1073B0AB2D8B,
	IOAsyncCallback_BeginInvoke_mB8CACF8990B91DF4A695E597CEBE4BA09354C32C,
	IOAsyncCallback_EndInvoke_m397237D5497A9029CC3FACE692D11BDC1558A727,
	IOAsyncResult__ctor_m95A3D285F38AF74293A4956A6232F6B11DB8CFB9,
	IOAsyncResult_get_AsyncCallback_m1D3A0A3BCC3432B64968E7DC4D3A2ECAA6ABDB60,
	IOAsyncResult_get_AsyncState_m9D507541D18B17FFF72F90D8DBB3F301213EA4A7,
	IOAsyncResult_get_AsyncWaitHandle_mBB8E187CEE0D781E6CC1C0E4576A82D02936B9C5,
	IOAsyncResult_get_CompletedSynchronously_m55D4C57A46BF019D4FAF05ABE30E6EEEA6A78277,
	IOAsyncResult_set_CompletedSynchronously_mF2CA3BB7E351A84EEC942B66816756361616EA75,
	IOAsyncResult_get_IsCompleted_m15FEFA884BA3ACC35503E54F08E209AC5A94BADF,
	IOAsyncResult_set_IsCompleted_mEC1108082A9F409122195D340A5EC901D67F013E,
	NULL,
	IOSelectorJob__ctor_m2E68791B3E12177FE5236874FA9BDBE1CA97C676,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_mF6591C2577197BFD98B2423F8696E5816191FF3F,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m3BB2FE95A7033F6994973BF8814C16F4B163A0D6,
	IOSelectorJob_MarkDisposed_m2B168E38A597550A3605ABF0032F67967CD43077,
	IOSelector_Add_m43E2807BB2C9AE5ACB3ECDBC4E7BA2FA967504D1,
	Platform_uname_m0769828FE0BC855E1DE4129D7EBE09E999D7AB7D,
	Platform_CheckOS_mE140C06A839F2EA49C9A0FE795A85311E283CC45,
	Platform_get_IsMacOS_m7E1B4DAEFA519F65C50D16CC5DEA7A9FA0EE4D77,
	UriTypeConverter__ctor_m1CAEEF1C615B28212B83C76D892938E0A77D3A64,
	UriTypeConverter_CanConvert_m0F0FB34A1DC16C677BF8F4ED0E720144C17C4795,
	UriTypeConverter_CanConvertFrom_m1D18F7B5924B6B682AB1CC90FB814DC3331DFF47,
	UriTypeConverter_CanConvertTo_mC19530C1DD75AC92C20697EFDD0A0E2DB568E099,
	UriTypeConverter_ConvertFrom_m2FE8479F26F35A578983E194038CF186D6CD2F85,
	UriTypeConverter_ConvertTo_m2059A4086714BACA32E7618BD97713CCD5DCFEF4,
	Regex__ctor_mFDE4B6A423C15AA60BF9FEC7D4D7DFD4657D7C6E,
	Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C,
	Regex__ctor_mEF4515C4C44DF8BE410F388C82CC679D743FB5CD,
	Regex__ctor_m87918FB2A856E264A492D2A2B4B412BE4E2370BB,
	Regex__ctor_mF11825F6E24D7D780BD34C74C96392DEC3602A5D,
	Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m95B0E2523A72DF6AC56DEA7CDA286F771E06B0FD,
	Regex_ValidateMatchTimeout_m71FE7188780DEAD57093B7345CCC50D0159218BE,
	Regex_InitDefaultMatchTimeout_mC91736B02BD12B92CBD93C329E7A8233CD0B9DA4,
	Regex_get_Options_m823A30690EEA63798DB8497F3E9CF062412B8653,
	Regex_get_MatchTimeout_mD484D1CF0B6BF8516A08991D1387761CAE2340D6,
	Regex_get_RightToLeft_m546BF531C94563A11427CD24367525462CDB4509,
	Regex_ToString_mF967EF5E8BD74C3692379B8436AB8D3C5963FA75,
	Regex_IsMatch_m79684C4D2CE6C5495BCCE9A32AC029E1E5950B7C,
	Regex_IsMatch_m2FB867817B341A5FA3E64A41F31820C9658F22A5,
	Regex_Match_mC2C718B93803F6633A708E430F8698E70354B77C,
	Regex_Match_mA36A33D32F895CE84957DC7DA82E2CD45EF19EEA,
	Regex_Replace_mB4E5642068CF8B6DFA3C3C6E21E8AD33AED12223,
	Regex_Replace_mD7649C6657458BEAA6B18E2BEB158ECA320A4609,
	Regex_Replace_m57129CA8DD318E87C364526DCF0157AD7A4933CB,
	Regex_Replace_mF5075A8D78C9AD734DBE740479A6C1F7F9078D73,
	Regex_InitializeReferences_m2CD000C1AFAA8B214F32D989C7D116B684A31840,
	Regex_Run_m74FB5EF178DF43F88B9058B94939F557479B93FC,
	Regex_LookupCachedAndUpdate_m88CA03797C5ED796BD5E1319DF6B1B6B6FCE6C0D,
	Regex_CacheCode_m68F93FF3B918776D190D4DB807A3323691C77F0A,
	Regex_UseOptionR_m84945EDBEDCD61DBCEB691C929CA28F4B0AF4B49,
	Regex_UseOptionInvariant_m0CA185DBDB15932BB8A8B4F53EB8ACECEC006566,
	Regex__cctor_m86CE9B8D0FF5F2B54D4FF27D2213A1E6917477DF,
	CachedCodeEntry__ctor_m78BCA6060E7D83B172F998AF60D17FB41BE703B8,
	ExclusiveReference_Get_mE79B077388AFBD19A4524E630701783E7DCE61E4,
	ExclusiveReference_Release_m9A1577138872106EA54A04EA4AB77F710CEDE336,
	ExclusiveReference__ctor_m0427943C75CBB283EF26034339E3D412A080B5D7,
	SharedReference_Get_m4133101195827AC22016F903F8F945C249E4FCA1,
	SharedReference_Cache_mEFA6A88B206EAFEAD6222E239A03BD6E4B244430,
	SharedReference__ctor_m48E749BC646BEC89282B8F336325D42DE48CFC81,
	RegexBoyerMoore__ctor_m39674FB18BB75DD891AAE3781FDA0CCDDEBC2F8C,
	RegexBoyerMoore_MatchPattern_m41D57E11972B2142649662886DA145AFE396F602,
	RegexBoyerMoore_IsMatch_m820D06ED51C062451AFAF22682D2EB06C8DFABD9,
	RegexBoyerMoore_Scan_m204A42056131A694B6D31FC69563355788CABD67,
	RegexBoyerMoore_ToString_mB0A62E68E8A3CAC5CE3AC45E1C54FA72DFB626F6,
	Capture__ctor_m6CC8A5385C7BD6B8AE63F9812293EC3252A65B3B,
	Capture_get_Index_m46BE6FFC6E8474F55B0504269903F287C45C4B31,
	Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94,
	Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C,
	Capture_ToString_mD49A28CAD5727E8F629643EDE0C6BAB476BA639E,
	Capture_GetOriginalString_m35D3CD7902B7BC29E00AD043D8784FFE4E67539F,
	Capture_GetLeftSubstring_mF82C23C9E17F3F048605955F76B9D69C3E82FCD7,
	Capture_GetRightSubstring_m1A17502FFAE73FC4D35540716DB2311717267D5E,
	Capture__ctor_m3ED807279C93FFCE8BE4EAF447DA01E62EF93D7B,
	RegexCharClass__cctor_m5170E52D9864BA712125FB33F309FE9E37869EA8,
	RegexCharClass__ctor_mAA44510F3E5001A8612355B4FFB718D9DDC74264,
	RegexCharClass__ctor_mB05A6CC8015C5D545C639682454A524DE7E2EA97,
	RegexCharClass_get_CanMerge_mC27A4CF83CFBEF3741A3DB4F99ABA6DE76B57837,
	RegexCharClass_set_Negate_mEB8659D83748A4DF28CDDFC3AC573A6504385E09,
	RegexCharClass_AddChar_m4C4BFD42572978A9F98ADE75BE3811593957A9E3,
	RegexCharClass_AddCharClass_m0E5DD1105844AFB7CE45B5C801304B5C803FB5CA,
	RegexCharClass_AddSet_mFFDE070E770BE967173D630AD50010C3397F7B97,
	RegexCharClass_AddSubtraction_m17E538235B02A1435BD43D4FE4501DA67AA35145,
	RegexCharClass_AddRange_mCFE9B670B3EBB13A5CDB694B1D1D6B1C0249D110,
	RegexCharClass_AddCategoryFromName_m9AD2D607E1E34A52CBC26FC38D468905C43A9202,
	RegexCharClass_AddCategory_m6A4625370DA8927DF5342275CB1F6155FC2BA255,
	RegexCharClass_AddLowercase_m01C1B11EB0B82E065276C7ECF60725886F59A07A,
	RegexCharClass_AddLowercaseRange_mCDDE9661C9C300DFEB51A8FE36E2F790E3E75D75,
	RegexCharClass_AddWord_m1D2553B878162B32B0548536AE4C3EE673041CA0,
	RegexCharClass_AddSpace_mC6557749D96EBD114BCB133D14887A29304196D8,
	RegexCharClass_AddDigit_mC4DE43D884E575729BB2E575DA5552989368F6B3,
	RegexCharClass_SingletonChar_m01C15732FAD399460FF5BB449B8177A77CAB1DB9,
	RegexCharClass_IsMergeable_mB9A0CD8306728BAFA5460C7FD748A2A7AD4BA448,
	RegexCharClass_IsEmpty_mAD6C63FE25C4CF3E52A20185418925D12C4C07CF,
	RegexCharClass_IsSingleton_m89D3E8460B0E7020DB0ABA607AC2F76FB9A34F1A,
	RegexCharClass_IsSingletonInverse_m3E75D541C85AD842B9EB80705D6869EDB3F6928D,
	RegexCharClass_IsSubtraction_m3C9EF97AFE7E4BCC24A2DF10834BF62279D7EE26,
	RegexCharClass_IsNegated_m9CEDECE7EDA98ACD502E75783CA631A719DBC675,
	RegexCharClass_IsECMAWordChar_m6E7FC296DB816D89E3D6CF8672DCE6DFC519D741,
	RegexCharClass_IsWordChar_m2DF03D32DAB403138E397CB05F45D37BD50EB18C,
	RegexCharClass_CharInClass_m194AAA57BBBD30E78E70255D6F53FAFDB785EC0E,
	RegexCharClass_CharInClassRecursive_m5560DBADE1463FDEC38643C72CDF2FD5B3F69A5F,
	RegexCharClass_CharInClassInternal_m5D1634F64092E4BD9EB6427447F952983211A760,
	RegexCharClass_CharInCategory_mCDE20DF783F8D4E4403EC7F00F9C12E34D86C2DD,
	RegexCharClass_CharInCategoryGroup_m28E498004F5EA6445C83F1B8EB4A776C210D30C5,
	RegexCharClass_NegateCategory_mF2E03FFFE79E427F39D9368013A334F5BD118E13,
	RegexCharClass_Parse_mBC3780FFF0DDFB62CA2085746618E6C256E8D86C,
	RegexCharClass_ParseRecursive_mF7E7DD4EB594C9C30A60E72CD3CFD4EC1D822CF5,
	RegexCharClass_RangeCount_mEACBB4BD08CE18A9C4F0C433A7D6C5726F563E2E,
	RegexCharClass_ToStringClass_m7A760D96732A03D46C4060064B3FC58349D2B4D5,
	RegexCharClass_GetRangeAt_mE563FF8072DD9B4E1179F55416CCD7FC4EB2C4FC,
	RegexCharClass_Canonicalize_m44EEFB16DB02E73C1E7280D15DAE98E50F4D6FA4,
	RegexCharClass_SetFromProperty_mA33170AF599765B5FDE8611BED646A850FB2330E,
	LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187,
	SingleRangeComparer_Compare_mF2CAD555BAC4D9CBF6A8F90D829CB528BD7BCCC9,
	SingleRangeComparer__ctor_m9E44BF07F0F0C9E565E0BA050C1A26F496226BAD,
	SingleRange__ctor_m4674722AFC97A111D2466AE2050C2E4E6E57303E,
	RegexCode__ctor_mBCB059D3E98AEA211794E89DDF99193231F298CA,
	RegexCode_OpcodeBacktracks_mDA23B91B55FE4991B168BF8E18F6DDDC7667B882,
	RegexFCD_FirstChars_mC60DC5CA9A078998CB55594436AB9CBFD86478FB,
	RegexFCD_Prefix_m50B30C508C6745832FD3A76B2169462455C1A28E,
	RegexFCD_Anchors_m562FA644F10503074714E0F58A2A00F9F727D75E,
	RegexFCD_AnchorFromType_m4B458E2C589633A43F9324C14F9192EF68F80A14,
	RegexFCD__ctor_mFC6A3309CAFA8C3C2B94094AD443738823388A3B,
	RegexFCD_PushInt_m63817D3969DF7BD31B7C93D43EE45C4AF539868F,
	RegexFCD_IntIsEmpty_mE825A8A0DF9D5BA6618357ABBA93421D4099AAEB,
	RegexFCD_PopInt_m1E4B64F2F6DDBCB7495E673540CF25FDD4D01B7E,
	RegexFCD_PushFC_mBE154E351E7C49FFFC26E603B4672136D91479C7,
	RegexFCD_FCIsEmpty_m57FDE5D4E352620B7773AD54B286531CA21FCDAD,
	RegexFCD_PopFC_m987A35E9ADF69335799EDEEB12C2CD3A3F40FB6E,
	RegexFCD_TopFC_m26ED21621830CF30FDA46AE8D7F3AC9F50DE416F,
	RegexFCD_RegexFCFromRegexTree_mA85E74765529D05113116C73EC397E832D81D0BC,
	RegexFCD_SkipChild_m661F5D339305B97A37D855240A0B9AF500FE03F6,
	RegexFCD_CalculateFC_m2267FAA6BCA80275E21DC9A0BAF90BBC85204BD8,
	RegexFC__ctor_m354E8197215F3EE9097B69E783B744365A38EF20,
	RegexFC__ctor_m023D08ED0365AE9AAC539333B4390A8052C59229,
	RegexFC__ctor_mDCBBCCC1BB476741943D7F9AD88731B1DCA0C1B5,
	RegexFC_AddFC_m5B05CD1D7700817843366EC1DF728977EDD4D11E,
	RegexFC_GetFirstChars_m7252E826F9A5BC1842A5A255BAC5A36EE8DADAF5,
	RegexFC_IsCaseInsensitive_mD87B0C49AAEBB61215F09A9C5ABF8CCB8B5AB64E,
	RegexPrefix__ctor_m93489A4FF55425A15BF5390E77EE0B84F6F9364C,
	RegexPrefix_get_Prefix_m7137EC6CA5B857F49946E2EAEA19784040D430CF,
	RegexPrefix_get_CaseInsensitive_m76E04480FA9FFAE4C5031CA12F4AE9A2576212C0,
	RegexPrefix_get_Empty_mAD10DECDBC7C51F9ACF5C02E3191874252DF9B8B,
	RegexPrefix__cctor_mCDCE7EDB98AFB119EE0281D37F7BC019AD28773D,
	Group__ctor_mECF4574592517D363C35ADC07F9D6F7E7DE6B4F6,
	Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521,
	Group__cctor_m213E26F039439904671CFD5DAF5D85B47D5CBE68,
	Group__ctor_mDCB3D51B8A672B342F452177D42D6D3F2F9BA91A,
	RegexInterpreter__ctor_m7B9BA594CF5F338B2E257EDADC2481826BF4C6BB,
	RegexInterpreter_InitTrackCount_mD93771C3D75617898528698E29AD09B7EA5EE24B,
	RegexInterpreter_Advance_mCD1A51680CD0318DDF6D104DE8C722FCCC468CCA,
	RegexInterpreter_Advance_m779870D7E1FA3580492E2E8B75E2805613525AF7,
	RegexInterpreter_Goto_m438DE9CE790DF0757383C91126DEA68C6B0DADFE,
	RegexInterpreter_Textto_m6CE60A7C8FA9F9CEECD26BD6025F055EB64887AA,
	RegexInterpreter_Trackto_m0C7B05A7385BE3F9BB096FE28DC22942A9F96783,
	RegexInterpreter_Textstart_mE71CFC006954F38B9EB6CD85BCC0867E63BF0894,
	RegexInterpreter_Textpos_mC66F0DE729E76EDA0BEEA7B1ABEE369BA6C81D5B,
	RegexInterpreter_Trackpos_m472ADA4F5E1D07E71896E42714DFB723CB016842,
	RegexInterpreter_TrackPush_m5A8B9F863211AAEC7E5FAD14ECDDAFDE3059210D,
	RegexInterpreter_TrackPush_mB2AF47E651D2A3853A719EFB908C30D27EC2FF5F,
	RegexInterpreter_TrackPush_m3EA36B28D636D1C617F85CEA57650344B562A38F,
	RegexInterpreter_TrackPush_mBCAADB1DF177D91DC9AA4518DCDB3AAF7D6C0E15,
	RegexInterpreter_TrackPush2_m4EBCF8B183717311AEE3FAA6AD6FAF1F08B14F77,
	RegexInterpreter_TrackPush2_mD591F73FDDF69084636E0834BCCD530B057898FF,
	RegexInterpreter_Backtrack_m46612DE84F898D1656DE30F3BA86E93209E279E1,
	RegexInterpreter_SetOperator_m5B633C33EE4CD85364E7C60003ACE8EA93FDAC91,
	RegexInterpreter_TrackPop_m84B55BE8F346693942045E937174EC8C1AE91F08,
	RegexInterpreter_TrackPop_m73AB2E002DB92E231B62510861277320F76BEEED,
	RegexInterpreter_TrackPeek_m4EF7918CC0F10FFF7E73C1C9D13E74D1D8D13318,
	RegexInterpreter_TrackPeek_mEECF3E94E7823A68474C691F695D71087729553C,
	RegexInterpreter_StackPush_mC28C3F8B3C811C4DCA6CD312F7F487206C871E55,
	RegexInterpreter_StackPush_m911FF20379BF912884E7F98BB59CFB6C51AA1861,
	RegexInterpreter_StackPop_mD057CA7B190ED8FBD33C6CE48E1F28E4B09FC4F2,
	RegexInterpreter_StackPop_m90FC35FD76D9B63851ECFD641DAA08B1B58C7B91,
	RegexInterpreter_StackPeek_m08C28311048F6B075379EE46B924FC211BA48EC6,
	RegexInterpreter_StackPeek_m308DE22A8E1AF524319E7F1D5A94DBFEC37700ED,
	RegexInterpreter_Operator_m4DE2EAA1744D15294F2767D5217F753FE74FAC0B,
	RegexInterpreter_Operand_m1ACB9C398C9C7ADF8DA58824877B99F08F181526,
	RegexInterpreter_Leftchars_m3A200CD41FFE8C89CCB85B3CC7A367E32C5988D1,
	RegexInterpreter_Rightchars_m3DB37A53D6C3DC3311C9EA020690CC0824959D30,
	RegexInterpreter_Bump_mC33CB8A0CC0DF1C69F11115BD225D2D8B63F8753,
	RegexInterpreter_Forwardchars_mE5E437E285604CDC60551C112F7B2CEF7297F4ED,
	RegexInterpreter_Forwardcharnext_mD2C6694CC31BC75D3E20C511D1004D28AAE1390F,
	RegexInterpreter_Stringmatch_m543BC6834400A925D2603AE6FBB47944694AFDF1,
	RegexInterpreter_Refmatch_m52369ADBF64E25A9EEEBE216939454EBB8D8E138,
	RegexInterpreter_Backwardnext_mD10CE2A9E229D0655EF01565DB39C902654D00CD,
	RegexInterpreter_CharAt_mAE2AF6D293F53C2D8961C2D0C145BC3ADF6EC105,
	RegexInterpreter_FindFirstChar_m95CDB0ECB99F7850479D951A5F32BB6B19B91F44,
	RegexInterpreter_Go_mBE9DEAECBD68F60DDFE2BB5A8C24CF92A1FB503A,
	Match_get_Empty_m5D3AE3D0580F06ED901EE69FCCED6AF44715528F,
	Match__ctor_m08A8262ACD89C9E47AA7168D0F2CC6E3338855D7,
	Match_Reset_m9EDCC3689E8A5A57A644946AEC3E41C1901C7DAF,
	Match_NextMatch_mA9BB438B4D7DE12D45A73720C063CFFF15FE596D,
	Match_GroupToStringImpl_m933A6494C68E43C8CE37F64FA298ECBCF6F3C4AE,
	Match_LastGroupToStringImpl_m92EDBD078D266F78252C71C35E1693105CDA3825,
	Match_AddMatch_m3C9178A7D6F8175A7628E4BE579FD209B7C7650A,
	Match_BalanceMatch_mCC0EC358E4C33191B896226512FE8F086EFEA4CF,
	Match_RemoveMatch_m6268C01D537F0BACB7DD707E11FA873C3E1918C7,
	Match_IsMatched_m7686CA418F588EC198A82DE287326C46F4CBDD5F,
	Match_MatchIndex_mA39CA9F84C3872675CB9C76EC342EFB30A2B5DA0,
	Match_MatchLength_m25492EACF56E8211FEEC4856F93D7A19D30A984F,
	Match_Tidy_m88B2494631267F8CF7E90F3305F713550ED39CE8,
	Match__cctor_m9158A9D469720E89CD9004B65F55EEEF5E330C0E,
	Match__ctor_m38BC8AD7EEFA99C6FC25587D6FE56450FA849E0C,
	MatchSparse__ctor_mEA523FCAF96D8A81401D3ED010CACE4463CCE811,
	RegexMatchTimeoutException__ctor_mCCDB413A8F68D924B276B8FED2744E81BE4C89AF,
	RegexMatchTimeoutException__ctor_m4EFD030442FEEC81E59AB8CDF35D603A5D551058,
	RegexMatchTimeoutException__ctor_m554FE8CFA7F42483517F11948A61E4D3C9F44D07,
	RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m78FACBA38C002E195A507A32CDAB768D8DBC93E7,
	RegexMatchTimeoutException_Init_m09AF601CC7369F2D7E1300B166517FE7D20EB6F1,
	RegexMatchTimeoutException_Init_m0F165C7170A46724458C06DA5EC05536D8CB95B7,
	RegexNode__ctor_m29676E9646F598C827F25E906EEB6EA14A6FD5DB,
	RegexNode__ctor_m92FB70D6C28D7E021A2A1ACBAD583461AB014F11,
	RegexNode__ctor_m89ACB97FB7FE8B38C0D69F0F2445A7916BC67D85,
	RegexNode__ctor_mAE76BA90AA85F205CB0CC6799F06D1AD85A49F64,
	RegexNode__ctor_m0EFEB707603B3C667626117E09A7EED58BBEC6D4,
	RegexNode_UseOptionR_mB931929BBD1D89F8B263AA846C1665775096713E,
	RegexNode_ReverseLeft_m994638E4886D007B9B29BC23EA3C8D76A92099FD,
	RegexNode_MakeRep_mC310B028FBE3BD5EB80F83E4E05B891ADEE45C22,
	RegexNode_Reduce_mE9E22C30C296E328ABC7EDC9C52F18059FAE27C1,
	RegexNode_StripEnation_mE19E0A57BCE0D0BF47F51A5103C08FCC7BB9E24F,
	RegexNode_ReduceGroup_m069FA93D4F88006F18473E647069B349683B9204,
	RegexNode_ReduceRep_m726F03D9E2420F276A37777942B66D15CA73F77E,
	RegexNode_ReduceSet_m912F4A0DFF694EB14DE520599369A811C2E9D10D,
	RegexNode_ReduceAlternation_m60EECC172A975620A5118D14D6ECF8B846ECED9F,
	RegexNode_ReduceConcatenation_m4BE1B6DBBC0F4BAB9A3873414B5EE77D825AD53B,
	RegexNode_MakeQuantifier_m1332537AA6BCCCD68A3E59EA7994CCFE69A19444,
	RegexNode_AddChild_m734A86A25E6074316FAC566F7D127253F7B71703,
	RegexNode_Child_m5AA4FFDDCCFA22FE70BA0F236F19A963AEF72079,
	RegexNode_ChildCount_m23B6965575DB0DBC1D90212820DEA144FCB06996,
	RegexNode_Type_mFA1C2F11F3487BB1BCBA7F58FFB7975EC18E9CD4,
	RegexParser_Parse_mD206BB554B6087ED35C5F744D72A93A07721D789,
	RegexParser_ParseReplacement_m13F769D7F27406A5E080C5E69F273758CBF37948,
	RegexParser__ctor_mC69D13B4FC323EE77392251139C5F2C456171310,
	RegexParser_SetPattern_m4B385D83A9680A1B2707EBCA8659B6E12EDD5E46,
	RegexParser_Reset_mEC49D1DCEBC555768D2FB90DA42374F1C547E328,
	RegexParser_ScanRegex_m62049A6C66D6D8CDD795B9C740283D1EC85126DB,
	RegexParser_ScanReplacement_m25F626A8546B29D06850DE337D58892567E11033,
	RegexParser_ScanCharClass_mF775DA8BFD214C64BC3D91E07436543717976DC4,
	RegexParser_ScanCharClass_mFE669B1C9CB6652157D9E8DAEE5B924C581AE81F,
	RegexParser_ScanGroupOpen_mA4918ACA08C7E4C945197BBE4EF734AF5B35096C,
	RegexParser_ScanBlank_m99BA3097E182DE425BE0137BAFDD0218F0DF360D,
	RegexParser_ScanBackslash_m45E9E0ABDB7DF70F58850B48905DE9DE026EA64C,
	RegexParser_ScanBasicBackslash_m5F438E56ACBE272622D39D4208B2D5ED536DD7B8,
	RegexParser_ScanDollar_m55F746009E6BFDA1A1A9A7CCA941EA247D984ED7,
	RegexParser_ScanCapname_m1D4DB4E5DA312CBCA841391F729CC626DC657D85,
	RegexParser_ScanOctal_mCF3925D06CBBA1DD0CB60199F59991D099430C3A,
	RegexParser_ScanDecimal_mE966D2C7F357215A52F88120F40A37707C1AB33A,
	RegexParser_ScanHex_m296FC19218F8186D2C1B630DF9F138CFB195625E,
	RegexParser_HexDigit_m4BAEE94B2077B96A4B1D56C459EFB2B1938E1174,
	RegexParser_ScanControl_m244F59DA2B0711D154B7D68CCB5765390C65B5B8,
	RegexParser_IsOnlyTopOption_m66FE256A81BBD173C96B90EE9EBE9721F9ED16A1,
	RegexParser_ScanOptions_m5CD283C15179190846762B90F78F0A87E7495537,
	RegexParser_ScanCharEscape_mF8821EE73F3F8A5D4267642F6E4F0A666FA5E7A6,
	RegexParser_ParseProperty_m69C638E755F0A5C1A2BC8E08827E6124889C2CEF,
	RegexParser_TypeFromCode_m0969E0D233AC767039B0A333901F47A22BABE0E8,
	RegexParser_OptionFromCode_m6BCD10574DF5E08599B5F7FC8E947E3DC69EE151,
	RegexParser_CountCaptures_m5255DE4B24B8D9BA7B2A2A7A1FD79A67B36F4634,
	RegexParser_NoteCaptureSlot_m8B2D20B819C86E427837C879CCA72B9BCD1C4AA8,
	RegexParser_NoteCaptureName_m96A5301077C4C6554E993A2266EA40B690F455C4,
	RegexParser_NoteCaptures_m984EFFB499AA60257CB3BE40718EB78DFA7D30FD,
	RegexParser_AssignNameSlots_m168605CD3A6D6AAA52AFFDB13BE3D5DFAC3FE94B,
	RegexParser_CaptureSlotFromName_mE3FD1D57EB29D4C7A0E4029E4D4785297798EE43,
	RegexParser_IsCaptureSlot_m80540BE449D9B98B2B159CD5169F7AA6DB63CB80,
	RegexParser_IsCaptureName_mBFB85B16ED80CA59452491B4C3278C77ADCA1FDF,
	RegexParser_UseOptionN_mE9C62585222B2D99D295708E4486C952973F35D5,
	RegexParser_UseOptionI_mFA3B59BD8A6F61626E20F8FE909A23289E694263,
	RegexParser_UseOptionM_mDE945B2DE782D12A5013D408F4FFBCABEC48C63D,
	RegexParser_UseOptionS_mE96EEA754E1EEEF658AAF73885D048342D1D200E,
	RegexParser_UseOptionX_mD63DEED6741AEA0B3F6CC4239712A4B2EF690810,
	RegexParser_UseOptionE_mC171EEF863E091591BAD771F16B72D742F044096,
	RegexParser_IsSpecial_mFF68456E944ACAF048B4F96F5758FFDD1D5E7DCD,
	RegexParser_IsStopperX_m0BCF2DB4B0E1324C9109C8BFD486FC5DBA8DC646,
	RegexParser_IsQuantifier_mE0620E30A63AD0C0DB9550A52A4A7D0BB4BC3A31,
	RegexParser_IsTrueQuantifier_m4AA95A9CE7CD78600E8D525ECA5A095984FBC63F,
	RegexParser_IsSpace_m1E41FA7DD1FB93BF9220530CA91B35EF08879F30,
	RegexParser_AddConcatenate_m3743C87DFCD1784A949BFDCE9443845CCD630A5D,
	RegexParser_PushGroup_m6F4246ECA3A6F29DA096C3B41D97652427E3175E,
	RegexParser_PopGroup_m43AB1FB84E11D8DFF6C5D38B9CAD324E5425DD74,
	RegexParser_EmptyStack_mB65B33DCF98A5967407B7C6A07F8799681202BE5,
	RegexParser_StartGroup_m36A6C0ED245D844CD2E630160994C3F2D7CCA994,
	RegexParser_AddAlternate_mDBDEEF8180738DE0D31CC05B0E223EFF0D66939B,
	RegexParser_AddConcatenate_mF80F14978ED6626A8F8E5F37AEB3B946A01192C1,
	RegexParser_AddConcatenate_m81CC39ED404E571347F0E97650F3BEB14639B1B0,
	RegexParser_Unit_mEAEEAC39DBE372DC762644F49E6E163CA37EA34E,
	RegexParser_AddUnitOne_m72DFA82092408E9C63544126093D98390E0C2145,
	RegexParser_AddUnitNotone_mAA142A94BB7B6A358BA36A3920DB139382889749,
	RegexParser_AddUnitSet_m024168548909EA2DF649E6194D60135312ADF5B3,
	RegexParser_AddUnitNode_m6EE11A898128A169E41A5C7B38B1F3DD314FB304,
	RegexParser_AddUnitType_m1ECB4025CA3B580F051CF6891D9C96922CA2FA7A,
	RegexParser_AddGroup_m54BBB919E4D4AD05EFECBC3ECBE46FC4A90569EA,
	RegexParser_PushOptions_m2034533961B704CBFA0F97BD4A54CB7269F0D88A,
	RegexParser_PopOptions_mA18691037302741375A44BD8BDC9387DFB07B676,
	RegexParser_EmptyOptionsStack_m5FCB7AF81ACB5C91A73231C9F0AA0DFB32067A45,
	RegexParser_PopKeepOptions_m8ACBCD324BAF7269F90AEB3CF901B666524658FA,
	RegexParser_MakeException_m6D521D75808E2CD4255A68DC3456EAF2A88F2874,
	RegexParser_Textpos_m36658DED82367E05DF4333E68A666FEEBC3DAC07,
	RegexParser_Textto_m5C8BAB13E35429238EA9A5F13D5A5A580D0DD3AC,
	RegexParser_MoveRightGetChar_m3CF088DE129BADB346CCEEF1D547E2D260BC894A,
	RegexParser_MoveRight_m6F0A1C10AE9EA183F04A9E06B62B2B53648688AC,
	RegexParser_MoveRight_m7D1D27C901CAB81BCF60803E22FBDF2DEEC6CC51,
	RegexParser_MoveLeft_m1BC035A4EA49F4168093B2AB0EEAB2653CB04033,
	RegexParser_CharAt_m08DBAE0DFD788548F74E061031B7221154F96A77,
	RegexParser_RightChar_m9E231199A8E5EA994AA1746FC5E977AF3823FDEB,
	RegexParser_RightChar_m246E9E1F8D0A4A8E485C23E233CD3915C23739D8,
	RegexParser_CharsRight_m318662CFE3223C3FA5E921D376409B4E1B28F9B4,
	RegexParser__cctor_mF468AF3C5916BA72C579CBD41A73D2DAD004F0EE,
	RegexReplacement__ctor_m380FB887FB6FC62BB1DF59D01A859EB813FD670A,
	RegexReplacement_ReplacementImpl_mA3F4702CCE8307AB25F3565FE9A3F6B6643591CE,
	RegexReplacement_ReplacementImplRTL_m16AF2466D4C7112191A74EB9CD21C9B7A0405913,
	RegexReplacement_get_Pattern_m1F4A81BA1F012141DF3B358167025DE0072E1A72,
	RegexReplacement_Replace_m470485F90D044CA2879155BA72E5283C928E4343,
	RegexRunner__ctor_mC04D94995556E71E813F8420C8A4EC0B66404550,
	RegexRunner_Scan_m1C3B1B034601773D510A4D2DEC337635A540BE31,
	RegexRunner_StartTimeoutWatch_m257FBE0C72761082A11D275954C6A1343EB13301,
	RegexRunner_CheckTimeout_m52486A9CE7B6EA4C83BB60FB200196AF0EE5687B,
	RegexRunner_DoCheckTimeout_mCDAA40848A2F8AAD70928FFD8A6C08FF2D9E72A3,
	NULL,
	NULL,
	NULL,
	RegexRunner_InitMatch_mF9CD772D4A8E12F89B4785324CD6939ABAE89AD4,
	RegexRunner_TidyMatch_m61A8AE20E505F2055B276EB020EB0B804ED2D924,
	RegexRunner_EnsureStorage_m6BC13F773B014E2875CCD9A83E4093A77AA1053C,
	RegexRunner_IsBoundary_m6C846E11790EC61A9E75A24230E1477913DB3441,
	RegexRunner_IsECMABoundary_m35C5F5DDC7C2F0E57EBA2E9D9892A88EDAEE4B97,
	RegexRunner_DoubleTrack_m057C14C51F137222469C6526406B0E1069747618,
	RegexRunner_DoubleStack_m8969F05F9E086EAA194DCBD2F137778239918925,
	RegexRunner_DoubleCrawl_mF0425849E5E3C2BA5E9009CED7DE245C8CA0F7CC,
	RegexRunner_Crawl_m655A5D262056F7E13F0645CE5611AE65E83D97DB,
	RegexRunner_Popcrawl_mD8C76E2C584E6908F4BB11E055B97581F0CF7268,
	RegexRunner_Crawlpos_m26A92CA69EF0C65BC7389834A12AD331538D064D,
	RegexRunner_Capture_mE34CB0D3351BCC69F6FDE6CDEA763B93C5E92642,
	RegexRunner_TransferCapture_m4F01B5A96647BC3FD338ACF6D509741D80FEC837,
	RegexRunner_Uncapture_mA7163C77BE1683E508821AB251F33FB7520CE3F8,
	RegexRunner_IsMatched_mD7F580AA0533D5C4BC41D18824FA74BE16EAE7A3,
	RegexRunner_MatchIndex_mA8EEC418C65572A82720F5D16BAC99224CF0251A,
	RegexRunner_MatchLength_m06FA694D5EFE42F89C25C8599BBE86C7726DB2C6,
	NULL,
	RegexTree__ctor_m5B10D5149928B35CE397472028EE327669C211DA,
	RegexWriter_Write_m57CF8209EF566CD40F9146C74DF889C8AA06E061,
	RegexWriter__ctor_m63A858FAE36A8640812DFF917751C1E215A2AE82,
	RegexWriter_PushInt_mFBC85956A26FEBC66244C8DFC881106D85DD2C1D,
	RegexWriter_EmptyStack_mB0C109FA21F5CFD16A34438BA1CC1CE8BED91E7C,
	RegexWriter_PopInt_m8885F9428571674EC224D6BBC93570B1B4671713,
	RegexWriter_CurPos_mEA105879492A4B415FA8AC25B29AA49153F83C18,
	RegexWriter_PatchJump_m6C0A440142E7AC772AD4AF7DF5D8291B6CA6D7D2,
	RegexWriter_Emit_mDC0B76CE49A6DE83DD2D169236BCD516AE9263EF,
	RegexWriter_Emit_m6B0ACB44155A07161060838F483D555E7EF6ACED,
	RegexWriter_Emit_m7C1D08F071C805F13DBF7684AEC3F2F7E748C497,
	RegexWriter_StringCode_m6AA17FFEBDD5E155004F05A78CF13B0D8E901158,
	RegexWriter_MakeException_m443C4CFA99AE06710D1E1BFA3D6EB9737AE70F17,
	RegexWriter_MapCapnum_m6AFE8BED80960BAA522EAA873D535C9D5AD4B811,
	RegexWriter_RegexCodeFromRegexTree_mAC489A29C00688CA929661BC394F1C4CF997CFC5,
	RegexWriter_EmitFragment_mEFDD8EA3A65320222CF4EA8A52B33C687EE0C5AC,
	BooleanSwitch__ctor_m6F066AB4D9A1AF132569B625CB857AE671F94C0B,
	Switch__ctor_mCEC1A7A86582AA8639404DCF7607B160A8B53A42,
	Switch__ctor_mA94CBF64FF82CBF4819158911159130231ADE484,
	Switch__pruneCachedSwitches_m7500DBE46E6A2B4AA6BBE2978C90166B6EA35790,
	Switch__cctor_mC01362AF23DB366F6103AC3762E913F3149B923C,
	SwitchLevelAttribute__ctor_mD0C828AD634514271EDA0B06938D962B17EAFD52,
	SwitchLevelAttribute_set_SwitchLevelType_m88B4C116AB67D726698620238DFF195913299929,
	AsyncStreamReader_Close_m486C71B80DC335E0658DEB3C10B3CDE971EFD671,
	AsyncStreamReader_Dispose_m2F8D092B7BB3B1AEBBD16DCD45DF538ED3725931,
	AsyncStreamReader_CancelOperation_m9C32CDEDAE7E7EDA3FE144C3BCDB1EF64FE8EF7C,
	Process__ctor_m97C82BFAEADF09C4C0C998412A309045D964FA06,
	Process_get_Associated_m111D9050797E247609760FE092C27F3E53B133B7,
	Process_get_HasExited_m1C844339E476935B0CAEF283E73A4053B1B68EB3,
	Process_get_Id_m3130DCBA499817972DE9AE67C048F203BC795F0D,
	Process_get_SynchronizingObject_m9CEF0159B0BFB98564FA44848595E74AFAD1A900,
	Process_ReleaseProcessHandle_mC9A835417E9F209548D7A6B89A998A03FD4557D8,
	Process_Dispose_m0DD8E1484B1DBD2D770CD8B5653084FBC727B869,
	Process_Close_mB900793DBFD83308567EA034A4B853269EA115B7,
	Process_EnsureState_m1C2BC10044D363B89A8A1769DC37872C461E7305,
	Process_GetCurrentProcess_mF8C1CE43DB601735EFB3FB0E0F16D76B01EC897A,
	Process_OnExited_m1C4ECCFCAABF53AA49B24C9A40E228920D4E7F89,
	Process_GetProcessHandle_m36E359EFCA909FB72EEC18BF5CD04355FA73903E,
	Process_GetProcessHandle_m04F3F996FEF759943C0882D138B3503D507EBBBD,
	Process_Refresh_m53E3CDFBB87818DC2C2464DF11864D739D5EAD76,
	Process_Kill_m1C563A96671F43F5C0D207CB568F7662CB2D303A,
	Process_StopWatchingForExit_m54F80F17A31FB89FCD0755DB55D0EF592CF6DB11,
	Process_ToString_m384B1AB716489860A603CA01DBC2E7AF1CBF4B75,
	Process_ProcessName_internal_mAB82C0DBF61925D43E633BA72D00236EEF91F0FB,
	Process_ProcessName_internal_m8B7A18CE1C7E9BD278BDFDB91E8F0FFA1E5E03FB,
	Process_get_ProcessName_m4722F047841ABB0DE2BFBF213433DA966C0482B2,
	Process_RaiseOnExited_mDE9BFF6338F716042F99BBB7734A03B20F15A555,
	ProcessWaitHandle__ctor_mD7749337B2636BF285A2D877FB9C2C16B0677E5B,
	MonitoringDescriptionAttribute__ctor_m15423075A71190AA107449BCAD7EA5F4498D55C4,
	MonitoringDescriptionAttribute_get_Description_m562AE0405A7118076A2526D510B6655601CEF6F3,
	Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA,
	Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860,
	Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB,
	Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177,
	Stopwatch_get_ElapsedTicks_mABB4710231090C75F057E90A29C71C553077A901,
	Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A,
	Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3,
	Stopwatch_Restart_m11E77A8E4EE81D072F6AE91972E1EE005149E141,
	Stopwatch__cctor_m137C0B2E7182FAEA6E030CD1EDC909E5A3F7A064,
	ExcludeFromCodeCoverageAttribute__ctor_m6A88F20304C2FA71955F81BA5B06887F7C495ECA,
	ArrayConverter_ConvertTo_mAEA49FE8501D2CA2989D859B2721CECCD5D0291B,
	ArrayConverter__ctor_m831D145364A55A155BC896935367961A476D53B7,
	ArraySubsetEnumerator__ctor_m39C3859EB2625F6E584E35FDB1950B5E8407761C,
	ArraySubsetEnumerator_MoveNext_mDA14E48B8A7B78616EEF81E31CE8E9A258C1A905,
	ArraySubsetEnumerator_Reset_mC82A8E1D642B024903CA780F6034797EB423BEB4,
	ArraySubsetEnumerator_get_Current_m09128B3111243A65657005FFCBB036CD3EF1C0FC,
	AttributeCollection__ctor_m1EBB330147608510FB1B60549BA95812EA2A1190,
	AttributeCollection_get_Attributes_m1EFD91DE73B1AB6FDB061108CA8FEF54F2FB5BF0,
	AttributeCollection_get_Count_m18B4E5D1755D27754C9B3C7C89B4BD91B1458EC4,
	AttributeCollection_get_Item_m2124C159EC9B2357A091B520AEEE0901A1F0D686,
	AttributeCollection_GetDefaultAttribute_mE4E776D746426F6C8E4FB92754FBA9067F0D7A3F,
	AttributeCollection_GetEnumerator_m0A6B7803DAA1D559DF91BB18D0230F449A036DCB,
	AttributeCollection_System_Collections_ICollection_get_Count_mE6419B4E22BAC7B304BFC745319C683C889CC7F7,
	AttributeCollection_System_Collections_ICollection_get_SyncRoot_mA3D7D19888BBE89E51D4BD84EE6AAA9237504E74,
	AttributeCollection_CopyTo_mAE40D3E0FE070974B37F9BA5F4600E622E6F621F,
	AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m582487AE671B368FDDF140B132FA868EC14349FD,
	AttributeCollection__cctor_m53AA3C8B32DE173EF653258A5BA9BCA1E5C5FCA9,
	BooleanConverter_CanConvertFrom_mD2CCC35D0029B29ED16C531E4389EE94F04AB955,
	BooleanConverter_ConvertFrom_mAE7E5524CBFA2C3C060A5D7006E1F41BC8AD8426,
	BooleanConverter__ctor_m8293C29BCB7B90516FFE978C6295C0378C1BFEE4,
	BrowsableAttribute__ctor_m74B2B058CBFEE54B61640489C57D22055C7B482C,
	BrowsableAttribute_get_Browsable_m84931BFF3F51CB9F14D7B1D7548B796FE2DBB8D2,
	BrowsableAttribute_Equals_mE405587EE66B0D70C2D59B27C01C65C96C391FBF,
	BrowsableAttribute_GetHashCode_mB190CC4AC3C2A7F8351335208D308E11C12A342D,
	BrowsableAttribute_IsDefaultAttribute_m71A749AC32DD9BCF4555DB7DE953E11C8A11651C,
	BrowsableAttribute__cctor_mE60A9058276719078B402CD5CA7E2D2FD831FE93,
	ByteConverter_get_TargetType_m21CE42EF4CCA5DB8100AC9DECF783C8A005B8B26,
	ByteConverter_FromString_m0CAA015CF3C267450EF9F6EAD7D1AADF18B783C1,
	ByteConverter_FromString_m382279DD8FDF6650EDFC5977445BD2737200BC87,
	ByteConverter_ToString_m605162970D456ECCCD143AE873B1A66B7B8A5372,
	CollectionConverter_ConvertTo_m75D7A858FB6E5B535386F5DB31CE3B6C8B153837,
	CollectionConverter__ctor_m86DBE477F4462418329C5CFB45C86A9420F852E7,
	Component_Finalize_m868907479C0DC7487C423BD23F7A73B09352FDB7,
	Component_get_CanRaiseEvents_m6DE6AEAAC799CBA0E31C78BA036590F3FE6543C2,
	Component_get_CanRaiseEventsInternal_mEB36254A3CA5E7A1BD31D1B9F13D93ACC295936F,
	Component_get_Site_m45F03D1CF679A6E7EFEEE72F3B399663C0CF720A,
	Component_Dispose_m823396D3128BA14DDC7522A760EEEEAC30518E98,
	Component_Dispose_m80D68BDF38465CD605E93ABFBEBA8F0C9BFFC03B,
	Component_GetService_mE7073D944A8F916BA1C93E9E6E6C9920A2D933FA,
	Component_get_DesignMode_m5C2604368D1EC3DD4D2669AAC15F6EC25DBCAF61,
	Component_ToString_m051D2542B10347587C9F258405623C6E482F4BB6,
	Component__ctor_m7E00FCEC8E392D7C6AE3806CE5B4616B8CC84594,
	Component__cctor_mC716FB6A30E5EFC523414AD3CE9B63B77F7535D3,
	CustomTypeDescriptor__ctor_mD442A0BE59DB1D9EF0AC695FC857C18570B2AAD2,
	CustomTypeDescriptor_GetAttributes_mA2DFA9E08F4CBE42FF54C0EA9313ACACF22AF1E9,
	CustomTypeDescriptor_GetConverter_m326AC0250B0AECC9EE172FF9A6A112098EC7EB6C,
	DecimalConverter_get_AllowHex_mFB916A7101AA8F202F2EE1952E47B98D8D8D9AD7,
	DecimalConverter_get_TargetType_m9D7F2BB39848B5F8A436A900487B55F6FCA94F20,
	DecimalConverter_CanConvertTo_m055F9F0239B7D7970F61F3D5B14B3C1991E82C49,
	DecimalConverter_ConvertTo_m5B21E6AB73251329BE83E9A25C4E2DECD2AE82C2,
	DecimalConverter_FromString_m00911E3824B71042A46E46CF5F0270D5EBBE77AA,
	DecimalConverter_FromString_m3FF2CFCCA66D2D6EBEC5E10A48A9F450C7F37949,
	DecimalConverter_ToString_m9E32217983BD348797296512695A5341C30697AD,
	DecimalConverter__ctor_mB015B3871CF834D0C5D8290C9FD15509249921E7,
	DefaultEventAttribute__ctor_m635F34B6ED07BCB32D4DA9CD82D9FFE10FED5714,
	DefaultEventAttribute_get_Name_m1134D3145164417819FEABD3FB749DB89E09A098,
	DefaultEventAttribute_Equals_mF08E278698E07E1FB911C0F87598ED64F6C7F019,
	DefaultEventAttribute_GetHashCode_m3D9A349540F5E08C9113FA277D0CF0C23FF64306,
	DefaultEventAttribute__cctor_m858BAA32435A47A90F28317DF95A20741AB0223B,
	DefaultPropertyAttribute__ctor_m1BEFABEC4497B47DBFDABDEB90BEEF2070445668,
	DefaultPropertyAttribute_get_Name_mE3DA224DF16CD92E047FF0CD3DAC7157300B82EB,
	DefaultPropertyAttribute_Equals_m633F58C3EED00082CA450B40F0A968C23CDF8B76,
	DefaultPropertyAttribute_GetHashCode_m1D5149D2A924BE05CED1FAFEA31BDE0282E055DB,
	DefaultPropertyAttribute__cctor_m6ADAF3FC47ABF97DC42C2201EC2F237176259FA6,
	DefaultValueAttribute__ctor_m7572A53E3D06C0DAAA2AC7C24E0A7F2647135867,
	DefaultValueAttribute__ctor_m1BC9CBB38A9314A5513B910C942861DA122A852A,
	DefaultValueAttribute__ctor_m2B67802B0DD6D056BB6BDDFEA71D5350F45E9AEE,
	DefaultValueAttribute_get_Value_m4C07236B56BD114C38BA7DA8C94605A174EEC005,
	DefaultValueAttribute_Equals_m337FB64F797F188E4815CF051E5DAB44E6E555D3,
	DefaultValueAttribute_GetHashCode_m890451093F442C83A29160FD8B39A32559F2C7A9,
	DelegatingTypeDescriptionProvider__ctor_mCA7A19A0B8F2306A3FCBE5541B92E0F1D1376B01,
	DelegatingTypeDescriptionProvider_get_Provider_mA048A519047ACF1FB8AB8604AC985038883688E7,
	DelegatingTypeDescriptionProvider_GetCache_mB2D34194960FB5604FCCA8DEB3F563BD0E73321C,
	DelegatingTypeDescriptionProvider_GetExtendedTypeDescriptor_m253D9E8BB497010592F6EDA8D601DEDF11191CD2,
	DelegatingTypeDescriptionProvider_GetReflectionType_mAE5CE00625A29447106956644B1E52E7E7588E79,
	DelegatingTypeDescriptionProvider_GetTypeDescriptor_mFD091994993864869A433CD2507DE15B70D2A7E6,
	DescriptionAttribute__ctor_m4813112E0C52509AA577C0A9A27A8C1D596CFF4E,
	DescriptionAttribute__ctor_m5964EBBE5F72FC3B765F2657E0C7A6A9EF1DF2C5,
	DescriptionAttribute_get_Description_m86EA9FDCEF55F6643C195B45A9BA6A58E30875B3,
	DescriptionAttribute_get_DescriptionValue_mD892D328BECCFE526144A4B778DCC2B4BC8D45CD,
	DescriptionAttribute_Equals_mD0C91C3BDA1081BC9ECD15B9D8770EC9B8CCCB51,
	DescriptionAttribute_GetHashCode_m936BEDB9238E6BF727014567451AD7DAC9F2B163,
	DescriptionAttribute_IsDefaultAttribute_m027507DDAF18946B4CB2FA3015FE73EBAC53D62D,
	DescriptionAttribute__cctor_m70E48D1F612C3405E8C981060431512C0374C438,
	DesignerAttribute__ctor_m9F223BB1B2B8A3D480FF9854F4775C2A101A443A,
	DesignerAttribute__ctor_m80FC02525242A357EB829F1FF6E323C243571DF5,
	DesignerAttribute_get_TypeId_m5FEB8253BDB826CF1B19CD7CEAE5622ADBFA6A63,
	DesignerAttribute_Equals_m8F8B48C9F60766DE6DEB22CB0ED72F2B16C8C659,
	DesignerAttribute_GetHashCode_m756E31506E31D909272E5289ADC2DCB0DA675437,
	DesignerCategoryAttribute__ctor_mF489EBD57068DA5F3FE4DCA8300CB5A78CF34CE0,
	DesignerCategoryAttribute__ctor_m4699FB87C02E6D4B8E417C462B5BB6F76E0EC694,
	DesignerCategoryAttribute_get_Category_mDCB2D0B9A4F5FAD33260300979D52A4A9EC1C80D,
	DesignerCategoryAttribute_get_TypeId_mE1C3D89F3555E98D93523CCECD91D2A7235A10FA,
	DesignerCategoryAttribute_Equals_m7F9DFE7D18B55A1B0B68FBDA034F0FE9CA351CEB,
	DesignerCategoryAttribute_GetHashCode_m2CF3EB39D6E5352C9D944679018CE41B6CC2FED4,
	DesignerCategoryAttribute_IsDefaultAttribute_m661EFD9151FCBB2DD7BB3E54EB45E4AD26DB6F8F,
	DesignerCategoryAttribute__cctor_m5A20D3E6497B394223C44441C654C53794C5B5C4,
	DesignerSerializationVisibilityAttribute__ctor_m5DCCCF10B65CB984ACAA2C821CD59E0A5591CC91,
	DesignerSerializationVisibilityAttribute_get_Visibility_mAE359C5749C4000C2A382C64B1DCFC3AC4B2FFC5,
	DesignerSerializationVisibilityAttribute_Equals_mC35A99157702232DE7952D5A7275DA7204E0294F,
	DesignerSerializationVisibilityAttribute_GetHashCode_m0DA75A13695D5C191EDF0C7918E3AF166E1805C7,
	DesignerSerializationVisibilityAttribute_IsDefaultAttribute_mA881E4CCC85E9269F90BCEA231073875C653605E,
	DesignerSerializationVisibilityAttribute__cctor_mEB0BCCD12F1113C50BF1C0364EF2A99E41AD424A,
	DoubleConverter_get_AllowHex_mDB902FA678E2823F8775CF2410F8BCFD45135A9A,
	DoubleConverter_get_TargetType_mE2AA85910CF4D5EE2857F5472FAD6F60E96FDA6E,
	DoubleConverter_FromString_mDCD894BDC0A4DFB12E269CE8FF72B377691E4095,
	DoubleConverter_FromString_m0FA24E767CC4FFA9CFD7B7CE0D382A0CA8903980,
	DoubleConverter_ToString_m9C99B65F40B918222ED348FA19F750EC02DCD72B,
	DoubleConverter__ctor_m419F1E782FFBC765D22792D76E56D54FC94E6AEB,
	EditorBrowsableAttribute__ctor_mACDE45DF0DCAA6E923120D6AEC45422AEF958C2E,
	EditorBrowsableAttribute_Equals_m6F5EF9CC298CBDC862CBCA5187379A79635726FA,
	EditorBrowsableAttribute_GetHashCode_m74229847CE44E771F282E2E73FFC4DE55771A1B6,
	EnumConverter__ctor_mBA8B2E210D061A3CF86950F6D797E911A2E3C774,
	EnumConverter_CanConvertFrom_m283E54FE7BFCFC3CF022827F20678CE40698BAE2,
	EnumConverter_CanConvertTo_m0BDD50EB0F3A7B3364DDD86650151F95C4D4965B,
	EnumConverter_ConvertFrom_m06D2FC9021EB3AF4BF131CE8E7268CC41A8994CF,
	EnumConverter_ConvertTo_mBDC59D2EE871592603097C069D557F4D9A79ABFB,
	EventDescriptorCollection__ctor_m39980AB8EA7F2F7B480F18E4EC36796C1A259CD7,
	EventDescriptorCollection__ctor_mDC62048A9CCD9F4E5C2CE7BBEB7C995A60ACB0D5,
	EventDescriptorCollection_get_Count_mCAA673C0D2447E4823B34AE97D61BBC999A3E6BC,
	EventDescriptorCollection_get_Item_m861DB4DC0B594DC2BCB973266F49F77DB790689E,
	EventDescriptorCollection_Add_mC05DAE99E5D1B041F5755F71E6A2E114640F9779,
	EventDescriptorCollection_Clear_m72C4D0C9B92F9055A62EE6D86D9F3E86264405B5,
	EventDescriptorCollection_Contains_mD58C927756864E91133BD59356756E96253D4416,
	EventDescriptorCollection_System_Collections_ICollection_CopyTo_mB67B73650B5657F8405395D0BD6521ED8A3AF0D6,
	EventDescriptorCollection_EnsureEventsOwned_mF1722C2F3574DFE39C8509B62BA0013A68A1C8FB,
	EventDescriptorCollection_EnsureSize_m025A1E96DE65403C6BB70BB95F9098E6572EF191,
	EventDescriptorCollection_IndexOf_m2F0D99D9E5885CC7DB6133839635E9C806F6A385,
	EventDescriptorCollection_Insert_mB3259BB95ADAA9B11B8A2171F5FAD03C52C40557,
	EventDescriptorCollection_Remove_m9F6BF67636B9406EEFB0E3589F4EB3BAF625447E,
	EventDescriptorCollection_RemoveAt_m3124EA86A586B8FE157E6D6F594E3DCA0752D6D1,
	EventDescriptorCollection_GetEnumerator_mEC07212EAD84EF5CD1DB03CFF3773669A030342F,
	EventDescriptorCollection_InternalSort_mFC9324E5B172C969B8930B47ABE42FF8C2FEEC72,
	EventDescriptorCollection_InternalSort_mAF3920AA7607A00C1B327539E007F9BBCD2FF13F,
	EventDescriptorCollection_System_Collections_ICollection_get_Count_m360696919250EEB37806F7B331BC2D5127021716,
	EventDescriptorCollection_System_Collections_ICollection_get_SyncRoot_mBDACC0F4D991CDC34E1447AA9D5BE06B6A0E44F2,
	EventDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m175494690E3ECAC20382096A8D43493C6DF3245A,
	EventDescriptorCollection_System_Collections_IList_get_Item_mF9F2044326BAD3E203EE9C4B71998C6139671E7C,
	EventDescriptorCollection_System_Collections_IList_set_Item_m12BD29BF86D1A0AC1255C811F7E9BE0D56DD48DD,
	EventDescriptorCollection_System_Collections_IList_Add_mA285053C7C5617586A25D1B3FD1DA834A484F9B9,
	EventDescriptorCollection_System_Collections_IList_Clear_m690719A2AC9F81A4B9D94878CA2A991F07F2538C,
	EventDescriptorCollection_System_Collections_IList_Contains_mF75078ECF8D88E161AA11A9AAE71543ECB3CEC26,
	EventDescriptorCollection_System_Collections_IList_IndexOf_m48410473C90632946175F748D09BFAA506D0578E,
	EventDescriptorCollection_System_Collections_IList_Insert_m0538802AE7EB66BDF621A96C23637A50738FD995,
	EventDescriptorCollection_System_Collections_IList_Remove_m7416A79A4EA58351DBF9B8111C69A6CA8DD1DB05,
	EventDescriptorCollection_System_Collections_IList_RemoveAt_m9DCA747BC2AC75F2920EC289C66FCE2099622329,
	EventDescriptorCollection_System_Collections_IList_get_IsReadOnly_m1D57F4D7C77E62F7E06273DEC783685E107D0DB5,
	EventDescriptorCollection_System_Collections_IList_get_IsFixedSize_m00833DCAD0FB8406395CDA1CA0E6C4DDBF958100,
	EventDescriptorCollection__cctor_m027E184FD1333633CEFBEE18BA140A89E8DEEFB1,
	EventHandlerList_get_Item_mFB7DC8CD40DFDA76E9732CB48CE774DDEC373C42,
	EventHandlerList_Find_m0D64F77486BF4EABD934BF04CE38EF6DB0450B42,
	ExtenderProvidedPropertyAttribute_get_Provider_m54BFFEFF3AF82BD3F36AC3A1D473FAC53CF368C6,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Int16Converter_get_TargetType_m03C28B87C29C22B04B4D41C0F654612CADBBD144,
	Int16Converter_FromString_m5037FE57C286C9CAC9CDE3116D0F426EF88993FC,
	Int16Converter_FromString_m68A48D7A88B2206AD366C3CD5824C90CB483A01B,
	Int16Converter_ToString_m04E267BEB959CCCD5FF76F5221B4A82D3B90DE23,
	Int16Converter__ctor_mD4D022096E6FB9FFDB84D879E31177A892DD072D,
	Int32Converter_get_TargetType_mADD76E2E99D4B78ECB684AE296C6AD5E45840433,
	Int32Converter_FromString_m522F024625D49139F89AC5DE44EA3DCFDD490B55,
	Int32Converter_FromString_m99A5C50498D91308BEA81C8E9E134608DD525799,
	Int32Converter_ToString_m30AAD6DCBB228CBD58299310D39D80A44AEB7C6A,
	Int32Converter__ctor_m1CD79AE5880FDE2EC91F1D67E567AAA3618D19B9,
	Int64Converter_get_TargetType_mA6FF642BF7B48C93043B520B6F56598262324155,
	Int64Converter_FromString_m40D208F2EDE6FFDFF6A897EDE71636290F759A61,
	Int64Converter_FromString_m9537EF10EF270D889756264177A7AD71BAC3342C,
	Int64Converter_ToString_m914E4B677BB3D12FEFF432696606554C7276093C,
	Int64Converter__ctor_mE4DC71A97EF110B854F22A48AB0F0D3792B53A74,
	MemberDescriptor_get_AttributeArray_mDB41975C313AF40B0FA82B33F0AD504E92F3FDE8,
	MemberDescriptor_get_Attributes_m4D430272C6E7D07FD2DD901B6FC26E3886217153,
	MemberDescriptor_get_Name_mFADCC43480F88C3749FA2B82EAECA54F79D848BB,
	MemberDescriptor_CheckAttributesValid_mEAFC02C4EAED626FCDC291F1512DD0E602E232BE,
	MemberDescriptor_CreateAttributeCollection_m579C3F75B24CD1373AE01189CD3CB9CBC6C49E66,
	MemberDescriptor_FillAttributes_mA33C5FFD1DE2BA560E335B6549E60A229B9F773B,
	MemberDescriptor_FilterAttributesIfNeeded_mDEFEACE930F7537A7DF7A530198F04C73301D591,
	PropertyChangedEventArgs__ctor_mBC582C76F42CDEE455B350302FFDF687D135A9E2,
	PropertyChangedEventHandler__ctor_mC6EC20F2995A9376A72EB51981850A9E5C8450E7,
	PropertyChangedEventHandler_Invoke_m7DB0AABF07302887DD3FEE589E1F585B4C768F57,
	PropertyChangedEventHandler_BeginInvoke_m77D416AC801FF29FBF4D294574231171FE2E551D,
	PropertyChangedEventHandler_EndInvoke_m3539B5822D063A13DF8EBCA57CA475A7B5BE32FE,
	PropertyDescriptorCollection__ctor_m132BE5B53DC73850841F2AB9A6633F4626C538BC,
	PropertyDescriptorCollection__ctor_m7DDFDE6996940ED1E0BF5073548E5C5B058D6D6D,
	PropertyDescriptorCollection_get_Count_mAA1EA8D4BE590EE7F7E469876FB503F2A0F0E4B0,
	PropertyDescriptorCollection_get_Item_mD0F537639842BDFC56F142C00A4041CF598D26C2,
	PropertyDescriptorCollection_get_Item_m2FEEB6EF3922067EC403A4261D4FB6E77843F628,
	PropertyDescriptorCollection_Add_m4EC994159DE3EC1B05CCD9186099D7935FF3ED33,
	PropertyDescriptorCollection_Clear_mAD94D5BF4918591FEE475B3FC15A64729F89A3DE,
	PropertyDescriptorCollection_Contains_m8262E7DEBA9D0C9496CE3DDA85BC1F1995F18DBA,
	PropertyDescriptorCollection_CopyTo_m7F65E93884A12E569B035774440FA977CB9D3A30,
	PropertyDescriptorCollection_EnsurePropsOwned_mA7CDF7318480D4512B76733D3E1DF9EAE6C378A1,
	PropertyDescriptorCollection_EnsureSize_mCCF9502C5BE2212F88FDC6507E598175CF1298BA,
	PropertyDescriptorCollection_Find_m5B0293378066DA6E64B89658470B49EC2767E3B8,
	PropertyDescriptorCollection_IndexOf_mFBCAE0B916F2BF733D494020EBA7EFEEEFC20A45,
	PropertyDescriptorCollection_Insert_m22DC9C6797AE20CFE2815DCB8C5A98A9A363BDCD,
	PropertyDescriptorCollection_Remove_mCFFC999272C8C7B4C325B6D32A9DA2FC6DABC997,
	PropertyDescriptorCollection_RemoveAt_m988ED89DD8C6F2D254BD664991461869786977F0,
	PropertyDescriptorCollection_InternalSort_m5BEF1BE7A393A601E9E404644C037EB7552362C6,
	PropertyDescriptorCollection_InternalSort_m05765A385A5F324219F60E3880193230BCCE8863,
	PropertyDescriptorCollection_GetEnumerator_mFAB322230D6F91D8B5076910CF9D6107DBC768BD,
	PropertyDescriptorCollection_System_Collections_ICollection_get_Count_m4A8DC9D8BD368E2998FB84F1E764B746AB406C2D,
	PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m0100C4A2C9B18F6E1A201E29C6F12D1F265DCA4A,
	PropertyDescriptorCollection_System_Collections_IDictionary_Add_m76AF67DE822D94A046E14382F1841C835EADA094,
	PropertyDescriptorCollection_System_Collections_IDictionary_Clear_mCD2DED6F88201D0839F266BA27ADA4C9CDAD8E7C,
	PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m2BF92AB5B0E6DE71F06C21D6A79F40EEB66DE53A,
	PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_m8BAA6008671D58327735A8CAF9F5916EAFA4B2F2,
	PropertyDescriptorCollection_System_Collections_IDictionary_get_IsReadOnly_mCA0E47965BC12EE580E220E38B71BB97CC2807C9,
	PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_m55B7B06FCFD64E0549A25F402E880015FA39237D,
	PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_m45799DA37784A9840E8BCA5FA746535CDD86D696,
	PropertyDescriptorCollection_System_Collections_IDictionary_get_Keys_mB81D8CBB4D00C6C8588A02D1DAB7936E7A41DD48,
	PropertyDescriptorCollection_System_Collections_IDictionary_get_Values_m8753BBF5531A5623FDEB4BB961BCB0CBFC69EF24,
	PropertyDescriptorCollection_System_Collections_IDictionary_Remove_mEE3E78216CC8C1192BEF19A0610D5345808B1D76,
	PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m98DD98C01E84C0A8729E0C7EEDC9265A4911FB61,
	PropertyDescriptorCollection_System_Collections_IList_Add_m7805DEADF351C068D3397DB5C6D84C639452B874,
	PropertyDescriptorCollection_System_Collections_IList_Clear_mB8004EB4547BD17A52732BB53EE9D54FAB27C638,
	PropertyDescriptorCollection_System_Collections_IList_Contains_m480A973ED000ECA6482E3BE2970009A09ED545FA,
	PropertyDescriptorCollection_System_Collections_IList_IndexOf_m5784A077E0E4C9936D1DD476E58374AD27063CF7,
	PropertyDescriptorCollection_System_Collections_IList_Insert_m8B356017EBDC3A70B466B4787016840F89074F0D,
	PropertyDescriptorCollection_System_Collections_IList_get_IsReadOnly_mC37BCD9B3BE2F5B9773062BF82C3AA5D6645F227,
	PropertyDescriptorCollection_System_Collections_IList_get_IsFixedSize_m56B5321D84E8B06C5A557009E62A7335A4EFA018,
	PropertyDescriptorCollection_System_Collections_IList_Remove_m23C0000AD3979585B0659FEBCDE0B3EFF1207FEC,
	PropertyDescriptorCollection_System_Collections_IList_RemoveAt_m9FD20F8FDF9167173D07E0FE7C22E0D3A85B781D,
	PropertyDescriptorCollection_System_Collections_IList_get_Item_m444F1383137CD08C6AE33B93743C22970975B68B,
	PropertyDescriptorCollection_System_Collections_IList_set_Item_mC9C9476E42ADB9166CFD8FC7C7AA379EBB8F8E4B,
	PropertyDescriptorCollection__cctor_m5DE8BDE158CD72E98E2ADD9DB3151F931CC9FB0F,
	PropertyDescriptorEnumerator__ctor_mD766982CCA3E90487BD77781B1EA0C29F9477B7D,
	PropertyDescriptorEnumerator_get_Current_m010FD0E05A0FA950A30C202CF643D7B3934557D8,
	PropertyDescriptorEnumerator_get_Entry_m8BDC6BA3A4A5620F2EA393763B6BF271FD58AB60,
	PropertyDescriptorEnumerator_get_Key_m229FC1FF77DE80A679B1FE548094C02AF396A9B0,
	PropertyDescriptorEnumerator_get_Value_mADCA4A1AE3EB26072C808EACB670596099943359,
	PropertyDescriptorEnumerator_MoveNext_m6AB35EFF1B4CC455D419DF2C4F55DFCFFE420E1B,
	PropertyDescriptorEnumerator_Reset_m4FFA35A10951E339F0A75683E0151217D120329D,
	ReferenceConverter__cctor_m6B8D4BF669E7923D139320E54DF971BF30D4825C,
	ReflectTypeDescriptionProvider__ctor_mE3E181FF24A78513F9E285D485FA292B11708B17,
	ReflectTypeDescriptionProvider_get_IntrinsicTypeConverters_m9CC87D07619955CD00731AD91FC7F8323C18AF4F,
	ReflectTypeDescriptionProvider_CreateInstance_m1A50E07E2455EA23FDE96B06EFD81DCA451025D4,
	ReflectTypeDescriptionProvider_GetAttributes_mD827142E84D2111FBD6F88118D1DD0BCF898700C,
	ReflectTypeDescriptionProvider_GetCache_m90103F5B0B173BA5AA6F8B773FA02EE66FA58D7F,
	ReflectTypeDescriptionProvider_GetConverter_mB8782B30A3D40FBDB37A4FD68A635149B0154880,
	ReflectTypeDescriptionProvider_GetExtendedAttributes_m27849C4290581FFD9B350AD671E5DE9764531E46,
	ReflectTypeDescriptionProvider_GetExtendedConverter_m54A3FED3A123C2C0375E2FBCA5C4B29C6220BA2D,
	ReflectTypeDescriptionProvider_GetExtendedTypeDescriptor_mE33F57B6C037B34BACC549681047C513D9C6934F,
	ReflectTypeDescriptionProvider_GetReflectionType_mF229DC91D51765143C01388F689FAA98EB4EC658,
	ReflectTypeDescriptionProvider_GetTypeData_m297505206CB7033A420244CD3962881B3FAA55E4,
	ReflectTypeDescriptionProvider_GetTypeDescriptor_m99EE1E613367E54A6132ADD94E0D34772BBEB67C,
	ReflectTypeDescriptionProvider_IsPopulated_mDA141741A260991A87C6B4C7EE84FAB26220A534,
	ReflectTypeDescriptionProvider_ReflectGetAttributes_m378C9A3D2CB09CE7EBA76BCF431A99F6C2EF67DD,
	ReflectTypeDescriptionProvider_Refresh_m6C8F1779B16BB22FAAABA8E16E5DB5AB1025DF89,
	ReflectTypeDescriptionProvider_SearchIntrinsicTable_mD70A9E795A2A1411479E8BB0ACE34604726C9D82,
	ReflectTypeDescriptionProvider__cctor_mB9C7F73E1722134C687B3BB8E0F484EF2F30FEA5,
	ReflectedTypeData__ctor_mA8A7CF229ABE16D20515D5A827382370C78151AA,
	ReflectedTypeData_get_IsPopulated_m0BE08AAC57F2AA79A21B33C3A4A3FC7EECE35549,
	ReflectedTypeData_GetAttributes_m663A1FD9948A46D290B3D9E033F291B1E535452E,
	ReflectedTypeData_GetConverter_mD37346D7D19C72DC50CBB82BF4F4F9DF5218D0B6,
	ReflectedTypeData_GetTypeFromName_m9E59CF61CA7CAC4E47B9736F36891FCB2E325D27,
	ReflectedTypeData_Refresh_mA966D08F6AC6693D49DCB60CE3BF23ADBF4DE7BA,
	RefreshEventArgs__ctor_mEC162508026E43A0B4E193163E6ED7D6B682D342,
	RefreshEventHandler__ctor_m37CAC58BA1E426C888118B568F540D5FA6E4E9CC,
	RefreshEventHandler_Invoke_mF3ADA58FAFE8E56B53F99B9717A4D3E252575FF5,
	RefreshEventHandler_BeginInvoke_m21258C5F768FBD9949B49F95A574B80981515AFF,
	RefreshEventHandler_EndInvoke_mAF60D2A0CC7D45F8AFD1C1135EA3DF225545C030,
	SByteConverter_get_TargetType_m034BBA889EAAC775483117120F159E328D1260D6,
	SByteConverter_FromString_m0AE243DE3D62BE5B4D6B5902412E59B6F2B4C6B4,
	SByteConverter_FromString_mE18AD8A52E1E48B186DE67EAE676B20B29C69DD3,
	SByteConverter_ToString_m7DFD79BF472530D27DE2EFA08023C39AEF3EE048,
	SingleConverter_get_AllowHex_m9A8EC29BC10782CF9BC2E9C526B1F958876DDA43,
	SingleConverter_get_TargetType_mEE841A77D0642D07A7978A8A871FD73DD57EB7DF,
	SingleConverter_FromString_mAE00A2E4F24907D0666B2C4B62833289E96FDE8C,
	SingleConverter_FromString_mAB67D8A4BDEAC852EA4060FCE6F69C40F48E13DB,
	SingleConverter_ToString_m5002E1C3937CECC3094583349B9EF72474524583,
	SingleConverter__ctor_m8EA7D412C3EE9A9522E7592774DD46EBC6118AA8,
	StringConverter_CanConvertFrom_m50224B731176E5B25E43B35F74C0D1EA0859EC81,
	StringConverter_ConvertFrom_mC11C90F2FD2BD033AEA354185DC892D951FA5005,
	StringConverter__ctor_m2718AC00691AF4A3AF8A8D64896BE3B5D58658B2,
	TimeSpanConverter_CanConvertFrom_m693C336C7A5435912FC4AC569E1EAD30BEB32FFF,
	TimeSpanConverter_CanConvertTo_m5AC96B662FA4EACCEADAC81931591E0B14711276,
	TimeSpanConverter_ConvertFrom_m4244DF51D5A1AC286C35FCE04D82F5A9A2F33894,
	TimeSpanConverter_ConvertTo_m6A1E0C832909670E26B892813AD9E14F08EE316E,
	TimeSpanConverter__ctor_m28E7294174F979EF86FEF9511474B0AB9431217B,
	TypeConverter_CanConvertFrom_mB405721DE7D2532FA893C4F9242BD7675784DF3D,
	TypeConverter_CanConvertFrom_m8E1F9E41B7DEE6A032EAC70130ADC6356C3F227D,
	TypeConverter_CanConvertTo_mFD084EFAE4C064C6844E20E5A0C6719925A2D938,
	TypeConverter_CanConvertTo_m1CD3397D9E5717DE72A13B28C0A75D997A9F337D,
	TypeConverter_ConvertFrom_mD5AE49E422520F6E07B3C0D6202788E49B4698A3,
	TypeConverter_ConvertTo_mFC7AA7F0A382607E75CCE820A705B5965D099AAC,
	TypeConverter_ConvertToInvariantString_m761850CEC1FEE3C82ABE5F794DE84FFE29C852A2,
	TypeConverter_ConvertToInvariantString_m382F27F2262271AB0775D6FA6F413D24BEA28808,
	TypeConverter_ConvertToString_m2601B49A8D7AB780DBA7F2DD08A3790DF7987FB4,
	TypeConverter_GetConvertFromException_m10012C012ED008F8AC9DF76BBAD93E19DDA6EAC3,
	TypeConverter_GetConvertToException_mD906D7D39A16CC8ACFC0179208CE2627B73D5C32,
	TypeConverter__ctor_m7F8A006E775CCB83A8ACB042B296E48B0AE501CD,
	TypeConverterAttribute__ctor_mD0795A29B6FD59978CAAC6DAF3AC7EC564C519A5,
	TypeConverterAttribute__ctor_m52D4E66A914F1A04F2F10A7131A701670225D41C,
	TypeConverterAttribute_get_ConverterTypeName_m883941C77E14FC5B4A3E32DD8F59F11739D5D6D8,
	TypeConverterAttribute_Equals_mDA74DFC28CC7ABC315407EDD1AAC14531C5F6AC4,
	TypeConverterAttribute_GetHashCode_m35874D49724DA3F72C6C2575FD595A711A659DAA,
	TypeConverterAttribute__cctor_mB1A775F56A5933A17CF349BD466B0CCE66B1078A,
	TypeDescriptionProvider__ctor_m9A35B40DE4D4CCB86B72BD3BABF375982DB32912,
	TypeDescriptionProvider_GetCache_m9D7FBAC80ED350BC4C50D5C58FDB8F5C6DCDC2E8,
	TypeDescriptionProvider_GetExtendedTypeDescriptor_mA6C0C2BCF78F4018FA4C2278CBFD07E2E77E3347,
	TypeDescriptionProvider_GetReflectionType_m5A731257A8DCBE75C4FE588A1CC73EE2FFCA7E16,
	TypeDescriptionProvider_GetReflectionType_mEDACDCA9A57ADF6F376DD6847315931630CE538D,
	TypeDescriptionProvider_GetTypeDescriptor_m8CC34F54B8A643F99C2F4E4C254D661D3DC212D2,
	TypeDescriptionProvider_GetTypeDescriptor_m04847083CB9DB8E7BF69CFCD06283A8D817293A0,
	TypeDescriptionProvider_GetTypeDescriptor_mE0B51D84608BE9DAB9597220D009C8F03ED7EE39,
	EmptyCustomTypeDescriptor__ctor_m3AF937D2171D0224FC6501A9AFA23F89BAC5B1D0,
	TypeDescriptionProviderAttribute__ctor_m10489BA811D0D61760F9C90B2D72542A08A3F90A,
	TypeDescriptionProviderAttribute_get_TypeName_m6C47AACE737391F28BD1C0A762AABBECA8DB8F75,
	TypeDescriptor_get_ComObjectType_mD9A4F9CDA5863A62DEE85F88DECB3FF37CE42A4F,
	TypeDescriptor_get_InterfaceType_m0DB3316CB939FE67643C044BAF39EB4F69D758E6,
	TypeDescriptor_get_MetadataVersion_m70C215D1B15DCBD67B58127EB0E6D7E6F5D020DC,
	TypeDescriptor_AddProvider_mD81A072B4AB0D7801F9297879CB43071C8740C9A,
	TypeDescriptor_CheckDefaultProvider_m992A2ED0D5F3621C00369DF8CF35D6AFB17D3ADC,
	TypeDescriptor_GetAttributes_m945F6ABA03A5014918ACA5F9B57F1F58B805EC0B,
	TypeDescriptor_GetAttributes_m0325F763D0AA6354E3F7859E15FF7BE3A8D5F3D3,
	TypeDescriptor_GetAttributes_mA96E001729AC6C2EF5ED8E0E5573BABF67501C44,
	TypeDescriptor_GetCache_mC7540D2FBAB562E689ED1BC2399D3F3C31D97145,
	TypeDescriptor_GetConverter_m30E075F6ED53FD85B7C1F7F44E58BA20645A68BA,
	TypeDescriptor_GetDescriptor_m03B8BB2FE0F4EB472FC543B31A37D627CD02D5EB,
	TypeDescriptor_GetDescriptor_m557DDD4B793F92E5D71B980E264ACCF1C6A2EFB1,
	TypeDescriptor_GetExtendedDescriptor_mD3B3C0990D1E6DF8A99C269710B4FC77DAC1BCFE,
	TypeDescriptor_GetExtenderCollisionSuffix_m686BE0F744E8E5511310EA611B39FF891AEDC784,
	TypeDescriptor_GetNodeForBaseType_mD4DC672E329294D1CC62ED255A60FEB216151414,
	TypeDescriptor_GetProviderRecursive_mFA9FD212A625262784E9B1B05D3B82564B393877,
	TypeDescriptor_GetReflectionType_mB28D64FBA294D618334381A77DAE790811611C3D,
	TypeDescriptor_NodeFor_m767FF87E78839CA052D9BA45FC6E18BD28F8E2E2,
	TypeDescriptor_NodeFor_m47CC24E4CFA599136DD05F6DD9A72A4B309D0D90,
	TypeDescriptor_NodeFor_m5CD091DA5BF7D035FA36E6E397A96B2A9610E9D5,
	TypeDescriptor_NodeFor_m90ADBC22F629303B34247E6000724298EDDF3E61,
	TypeDescriptor_PipelineFilter_m7522739B5B21B076A5722C659E9B17A404196487,
	TypeDescriptor_PipelineInitialize_mE238329E4034835777FC35289A14EA9A1397CF66,
	TypeDescriptor_PipelineMerge_m12CD63D0457BCA451AF9635E4E754A1E27122E65,
	TypeDescriptor_RaiseRefresh_m75708E2026685B087D03E5383F08E65F1608332C,
	TypeDescriptor_Refresh_m3EE0C2B17D9683C6C719C590D0D9744D16F58027,
	TypeDescriptor_SortDescriptorArray_mF1BF8FDE18108198B6E5CF6B31909A7F544F649C,
	TypeDescriptor__cctor_m93DDEDF2D6E089FEFA7A29B425C854E1E04E6145,
	FilterCacheItem__ctor_m9398DF7D02FBE4926AFB8D768F6F0936E0929181,
	FilterCacheItem_IsValid_m91C02B95AF49F2BD09314CF2EB67F6090052B8B4,
	MemberDescriptorComparer_Compare_m9C56C6E64A892DB13EEB4B1F551B6F161B4C237E,
	MemberDescriptorComparer__ctor_mE0D379E9AA3712B69614E48771226910DE517618,
	MemberDescriptorComparer__cctor_m9E4FF9CCCC93BEE24671FD459069CB7793ED97C6,
	MergedTypeDescriptor__ctor_m07BED02593A42C075C4F95B23D208CF1222C12A0,
	MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m2DD60D9C133AE18F38D7A27189168A2FBF3729FD,
	MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mFC2AC7E8BEF7680E424A34D335EB4FCC9A6BACB6,
	TypeDescriptionNode__ctor_m18D16A33443D7C6C32D09203AE94E5A5DA65BDFF,
	TypeDescriptionNode_GetCache_m275E9B8AA100455DA54B9CBD3581B9556C5DE825,
	TypeDescriptionNode_GetExtendedTypeDescriptor_m014DF481F410A49BBB0B087DD65EA4DBD51E9AF2,
	TypeDescriptionNode_GetReflectionType_m4C80319088CB3DFFEF76A5DB4C862FCDD98BDC92,
	TypeDescriptionNode_GetTypeDescriptor_m55BB50B1A0B0542BD4736FE3F7A14A7ABEC94903,
	DefaultExtendedTypeDescriptor__ctor_mD297D84C0AEF8C2AF0867391BD0FD037D8E6AB86,
	DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF4C670B634C8C86057E939F3DD5EAA4173DAB1A8,
	DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mE26BB774C31A0760EC238B30A3BDE0EE202EF1A6,
	DefaultTypeDescriptor__ctor_m8542D50B70E1A86255B2C64908C9397B971BBC90,
	DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m6EEBB8DB4E72761D9CB03978D149295CFE2B39EC,
	DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mA5D26F3E5D42548F740BD72B1AA9AE1CE89EC6E7,
	UInt16Converter_get_TargetType_m09485223873376B5306CC41EE00DE41C7C9A4D48,
	UInt16Converter_FromString_m6C68C86307AAFB890294E95FAFEEC5558F898B7B,
	UInt16Converter_FromString_m086976C0A5AE966B1BF493EF9215D7CD5FA1E248,
	UInt16Converter_ToString_m104A682B05A314790038B0F6C080A2242B813E62,
	UInt32Converter_get_TargetType_mB0970D9A54AF4DBB22763BCF302C1BF96987514D,
	UInt32Converter_FromString_mC2A923816231211450F8DE19A663F73CC32F9C23,
	UInt32Converter_FromString_m3311119AE44125DA0CF3703D93966E7D3B9A66A7,
	UInt32Converter_ToString_m19F6F8A0D732BA61405B020CF1D2A1EDF6847AA6,
	UInt64Converter_get_TargetType_mFDC942E31D697EB81B1BC6F2DC0C1984E5B4CDF2,
	UInt64Converter_FromString_m0F4D6141688C8C778E7B5CF3F38F8F2FDC88308C,
	UInt64Converter_FromString_m335C75F6E6840F7BF678CB73845C905C1216671C,
	UInt64Converter_ToString_mB2E701BBFDC1465555D4049C047FBEB8888E29D5,
	Win32Exception__ctor_mC03E215A1695ED64DDC50F4BE9F59966974DF759,
	Win32Exception__ctor_m2BEA755F6AA536ADDDF07D83BD8297F02584F714,
	Win32Exception__ctor_m94A043EE26097BBFE0ED22FD4EBEA357F142EFE6,
	Win32Exception__ctor_mC7ADDE9D2FEE4E17432F63C24EF1D872380094DB,
	Win32Exception_get_NativeErrorCode_mADB2F3845BEC2405353354CE6B6232741359D857,
	Win32Exception_GetObjectData_m7CD0D7A0806E4A9D8E78ADCBC616700379AB79E8,
	Win32Exception_GetErrorMessage_m6085687D868718B45289CB6AF6EDCB7F89D7350D,
	Win32Exception_InitializeErrorMessages_m4FE6F56C1C2CCB3F6468F0F9F5AD6E1B08673438,
	Win32Exception__cctor_m800CD9D0B3E3253B79A19B6646A7D28B29C3FC52,
	BaseNumberConverter_get_AllowHex_m994DD130AADA77ADA7E3AF7DF18674E617417CED,
	NULL,
	NULL,
	NULL,
	BaseNumberConverter_FromStringError_mF63BDCFB96540E83A867B6F206D2C453B9BB0A42,
	NULL,
	BaseNumberConverter_CanConvertFrom_mCAE77B4E99810F0C9B06FCB2F4F7036C733E3016,
	BaseNumberConverter_ConvertFrom_mA629768C8117947BD168EACC84D02DBA1FCA51E6,
	BaseNumberConverter_ConvertTo_m672375F1E58DB241E693E5F45A7FFD38C3070B6A,
	BaseNumberConverter_CanConvertTo_mBAA70FD6742A616F9E0F9E42908EF6C70C3214B7,
	BaseNumberConverter__ctor_mD78E1C7E1F8A977BC7AD33DB0C1E5E32C60E8E83,
	WeakHashtable__ctor_mE6517A855F67EE9584AF60DB7BC3AF5B2D58C249,
	WeakHashtable_Clear_m0559384B1ED014495416A4CD76EE26A8CCBD9531,
	WeakHashtable_Remove_m6780AE4C0C4B072B9857C7A11ABC6AAF4805F9D3,
	WeakHashtable__cctor_m7EECB04C288887CC895D8ED91A837C7822A299CE,
	WeakKeyComparer_System_Collections_IEqualityComparer_Equals_mC3D733EAC828C7C1C1B8F0890B0CD86F67F3668C,
	WeakKeyComparer_System_Collections_IEqualityComparer_GetHashCode_m8A2DBF9E2E7D75717DF22C7CF88550E0502E2F98,
	WeakKeyComparer__ctor_m084512BBA20EA3050E018C920AF05AA43F1EC704,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	InstanceDescriptor__ctor_m90DA8CABB01052EA5C5022E14FE50533254C71DD,
	InstanceDescriptor__ctor_m47D0A6167384EA496F0734E951DECD7EE576CAC4,
	InstanceDescriptor_Invoke_mFA1E52E0F4971ABC4432D30F7CF80304272355C0,
	RootDesignerSerializerAttribute__ctor_m0F3B236B6A2362EEF20773BC3205FE7DA72AD6AE,
	RootDesignerSerializerAttribute_get_TypeId_mC34D430C36628B810BB11754EAD222F65805D2A7,
	AuthenticationException__ctor_m28782FCB7D9F3773F20A9F422CB2843FB70D723A,
	AuthenticationException__ctor_m431AB34EFB028337941758B192DF4D045BA93005,
	AuthenticationException__ctor_m547DE1104C83024255A4F61AAAE6C6049383C7E6,
	Oid__ctor_m45F49EB1ABFD4F3EB0FC9729C76FF83995752743,
	Oid__ctor_m67437A59D4E75ABF6E40D503F57F81199546E5EC,
	Oid__ctor_m0656E1FC1A7E7BBF694A568DDDF8BE4AFA544985,
	Oid__ctor_mA7AFE14DF30B47447BFFC9E41B37B8DB46C9D079,
	Oid_get_Value_mFE18BDFF095DD5A6643F4FEC3E57846716F37F05,
	Oid_set_Value_m304CEF248379566701402100FA015EAC640C033F,
	Oid_get_FriendlyName_mEA531D74DAD8FD43948097C418DA23F66399B694,
	OidCollection__ctor_m99B93BB5B35BF7A395CFB7F8B155DFA8DD734800,
	OidCollection_Add_m1FF686421A22A86F8296259D99DA38E02B8BBF5C,
	OidCollection_get_Item_mB37F923F4714BFE0DF44E8EE4A1A5EA1F3EBB1D9,
	OidCollection_get_Count_m6AC0709CDD68451F4CAC942CE94A5A97F3C294B2,
	OidCollection_System_Collections_IEnumerable_GetEnumerator_m3FD3A96DFF93BD88A3B28E35A4DEF57AF25ECB30,
	OidCollection_System_Collections_ICollection_CopyTo_mE508CB1FD9E56CCFE5A4BDD5251D815BF78AC5A9,
	OidCollection_get_SyncRoot_m6C13949F67338F684C29DD162C8228986DAB6850,
	OidEnumerator__ctor_mCA4FBC8408E2B04FD0A524E256E284E8A44E0797,
	OidEnumerator_System_Collections_IEnumerator_get_Current_mF11B1F886842EA79EDB215BD5106D0C4C65EBE53,
	OidEnumerator_MoveNext_m073D94D5D3254D53DF53429ACAD0AA9BD682221D,
	OidEnumerator_Reset_m5006C3B1283711E2BDDEA6C25FDF93BBB900195E,
	CAPI_CryptFindOIDInfoNameFromKey_mA2FD2F391E133E586BC8B827DD916613B590E698,
	CAPI_CryptFindOIDInfoKeyFromName_m7809CD491D913D58FA1B996B835A0A91C413E9DB,
	AsnEncodedData__ctor_mED24E9D1F11942741819652302C0531D18C39BE6,
	AsnEncodedData__ctor_m793EED53B4B8D49D92EE7CEED6B46B16A421D761,
	AsnEncodedData_set_Oid_m91E38503AAFD8E6FD98970D94FD43E7A738242A6,
	AsnEncodedData_get_RawData_mB9F8281A96011161C67EB3A9208E26C423B187EC,
	AsnEncodedData_set_RawData_mD7FE2383373A6AF578A4983999D677B58BD6B4EC,
	AsnEncodedData_CopyFrom_m3937C7ACC425960B8E48B7D2EB50E9417A7CD4B7,
	AsnEncodedData_ToString_m502785F2F8B4D1EBDF5CEE612FD8D0C2044390D7,
	AsnEncodedData_Default_mEEA94BA253ED1B8A719466A8152A5333E0E3FF07,
	AsnEncodedData_BasicConstraintsExtension_m64D690A2456E16AF39F6F0784CE74BC9533BB182,
	AsnEncodedData_EnhancedKeyUsageExtension_mE04DC17ACCBF3850AFBA454D9937EC4713CC5058,
	AsnEncodedData_KeyUsageExtension_m4EE74EA5C4A3C0B72C50DEB22A537812997AF590,
	AsnEncodedData_SubjectKeyIdentifierExtension_m261D32E7AE226499BA8AD3FBE24FC0E71C9DEB76,
	AsnEncodedData_SubjectAltName_m94FE55170A872B3174D5C495A27AD09F3BACAF49,
	AsnEncodedData_NetscapeCertType_m9191830C380BEC39DBE09065B2A4134193EA92D4,
	X509Utils_FindOidInfo_mE43E0522988511319B8B9F69AF7D0A10B4AE8FA2,
	X509Utils_FindOidInfoWithFallback_m98443176879ABC2054619D4AA491FE086D406950,
	PublicKey__ctor_mE8D32598F92B3941B4DC6AC367C7FFD75C7FAE20,
	PublicKey_get_EncodedKeyValue_m4BD0975B491E89FFE2A75C1ACDEB1DCCAF586D4F,
	PublicKey_get_EncodedParameters_m629FF8D7E4EEDED96BC455B7B953DC5A46D26F4F,
	PublicKey_get_Key_m9690CE02A29978F4F97623CB72361EC3E69935F7,
	PublicKey_get_Oid_mB0AD65FDF84716726D5C7756E5B50CEAD1E4C2AE,
	PublicKey_GetUnsignedBigInteger_mA92B0B30FA75335EFEFE6B5E8580543C387C3785,
	PublicKey_DecodeDSA_mFE5301F7BC0E4ED8DF0EBCCAA0D1DA48972BC901,
	PublicKey_DecodeRSA_m39565B7B6C8DDB7666D5C3ABF7951DDC93D35965,
	PublicKey__cctor_m9F739A93AE91AE86889835AAE256410F4DB808CC,
	X509BasicConstraintsExtension__ctor_m1D3F45762EB686500D2195886AD26FF84E5F4B3C,
	X509BasicConstraintsExtension__ctor_mEED7AECEE911DF6CE692301F8F6F6B197DC05729,
	X509BasicConstraintsExtension__ctor_mD08FE3682F4B2EA23450C6609360F45656495780,
	X509BasicConstraintsExtension_get_CertificateAuthority_m282E5D9E7640A06AF2CE06A0FA374571F25BAB6F,
	X509BasicConstraintsExtension_get_HasPathLengthConstraint_m463A8B4DF4BEB46A9353309AA5EF3EAA2F7A4D42,
	X509BasicConstraintsExtension_get_PathLengthConstraint_m93EF2B2BA6D6AD72DE59D98EB0E40DDD2AB3B49F,
	X509BasicConstraintsExtension_CopyFrom_mE64F232FB7DF702DCDB6692537B8F1010AA316DC,
	X509BasicConstraintsExtension_Decode_m40A688DD3A933B24A3E9EFE505299F70AFF32E81,
	X509BasicConstraintsExtension_Encode_m04068558E7AF843C57A8BA9C39E251B7B37A1CDF,
	X509BasicConstraintsExtension_ToString_m75957B2B18A84645897676F0DAC473F022848336,
	X509Certificate2_get_Impl_m94A4BA63853808B2FAC8DD5E50BF4B2FA7C223F3,
	X509Certificate2__ctor_m97D8E28308096BB3A2500555747B6483F27859FD,
	X509Certificate2__ctor_m9AD075769E9AA57F2055D40879F8DC84FEFEDA70,
	X509Certificate2__ctor_m50D7739EB358531A13410F4A29353D0418F9EE51,
	X509Certificate2_get_NotAfter_mD2C055B86883353CFB0E8C1D6CE35D785756C624,
	X509Certificate2_get_NotBefore_mC074732D5C2E74642F1BA1C303B060A381A4A777,
	X509Certificate2_get_PrivateKey_m91743B42723CF3480CAD698F086CAE1DB7BBD266,
	X509Certificate2_get_PublicKey_m325BCDA2DE132D5B7B2093BCED2942ED657D89E3,
	X509Certificate2_get_SerialNumber_m19595DBE6522106CAAAFA680EF4CE67698A8F51D,
	X509Certificate2_get_SignatureAlgorithm_mF9BED26F8117E76F230A87F79FD4C19242FAE662,
	X509Certificate2_get_Thumbprint_m4C3269CB216BC275CFEA77A808A787B5773E97AA,
	X509Certificate2_get_Version_m21075DDC00E0FA0C7A9FAA5D561973F720B7BDE3,
	X509Certificate2_Import_m5D2E42024D98335D958C3875D188C8F8127299BA,
	X509Certificate2_Import_m8687BF7214331468AE004EFE3C65E73B0057F0AC,
	X509Certificate2_Reset_mEE19ADA2C022461B3DB1F39100997A6F34FFB1D3,
	X509Certificate2_ToString_mFEEFBB4A2B5779A9D16F9E2536F1D94F423CA3A8,
	X509Certificate2_ToString_m2613DF600F5A88EC6836930FD45D6063251C9391,
	X509Certificate2_AppendBuffer_mACE3DD61A1C5C88DEF25BC5C4562B5790ED97312,
	X509Certificate2__cctor_mABA66D529C24C35091DD9560BC7314F0F3AF979D,
	X509Certificate2Collection__cctor_m8F5A775DC6302B95D1CA30B5C576AD4907E94516,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	X509Certificate2Impl__ctor_m121B40B8937DAEE3D81BA7577555E09194FF11A2,
	X509Certificate2ImplMono_get_IsValid_m4C590E5F7A23A9F1DD5594A7D88F51474646817C,
	X509Certificate2ImplMono__ctor_m9DE01D05F0A540B906D6F826B51B64FD7FC9E028,
	X509Certificate2ImplMono__ctor_mEBE15206EC5939F6722168220CB8B110FFD915D2,
	X509Certificate2ImplMono_Clone_m1870DF0CF85E284FCA158FD11238F23796354498,
	X509Certificate2ImplMono_GetIssuerName_mC61A5CC300E550C2C4C12733D6EE0C5806723233,
	X509Certificate2ImplMono_GetSubjectName_mCE8064CFCFD15F29ED869C1F552BDA1911944728,
	X509Certificate2ImplMono_GetRawCertData_mF60B75105FDED073333B0A45D417DC84970CA808,
	X509Certificate2ImplMono_GetCertHash_m552986EA33DB6FD437358D422E14B5A3BA69092A,
	X509Certificate2ImplMono_GetValidFrom_m9E27BEDF0995B987B5BBE2074C5626A6092C6AB8,
	X509Certificate2ImplMono_GetValidUntil_m221B50B0D2216CD5CCF290C4E37ADECFC723381C,
	X509Certificate2ImplMono_Equals_m072C86FBDE9AE37E0AF69E4DA7AD04A8412F7232,
	X509Certificate2ImplMono_GetSerialNumber_m0F23B3F377F4801057A57949E977918166A6DFC3,
	X509Certificate2ImplMono__ctor_m6494CD178AF6E96CE4046E4CC1AB68236CCE7399,
	X509Certificate2ImplMono_get_PrivateKey_m0F1E05FC97141DEDB3230B4B4B3617DAEBFDCD2C,
	X509Certificate2ImplMono_get_PublicKey_m9FEE1E367B63542EEA2A517C7A4618C163C4B2D7,
	X509Certificate2ImplMono_get_SignatureAlgorithm_m158A12F7972A7104172BBC8F5FE31186B2758D3C,
	X509Certificate2ImplMono_get_Version_mAF4475ABA5E17ABB6FD9EE9A6BDCB8EA269836CC,
	X509Certificate2ImplMono_ImportPkcs12_m7C9D1CD7EB5D1CBD27E20EB92D494C65BDA240D0,
	X509Certificate2ImplMono_Import_mB7A89EF3758EDF0BA2BA0AF78AE2D4BB61D5E0FF,
	X509Certificate2ImplMono_Reset_m91B0462356708973478FC82A9D12EECF56FD4FAE,
	X509Certificate2ImplMono_ToString_mB5CE336C20BF230C1B0153BF1D2612FD22E0347F,
	X509Certificate2ImplMono_ToString_m88CDD1F5BDC5CDB329A872B58AF69CDB10799321,
	X509Certificate2ImplMono_AppendBuffer_mDB49D80453E139498ABF2BC30ED526A61D2F4F71,
	X509Certificate2ImplMono_get_IntermediateCertificates_m053FE037CA3747C75B056C11AA56DB1F2EE36809,
	X509Certificate2ImplMono__cctor_m8ABA0491BD741AF08233E6B3B2B4F61420FF4C65,
	X509CertificateCollection__ctor_m3CEEDA1CDA93234E6E78DFB6563738B050AFF6CA,
	X509CertificateCollection__ctor_m24BAA500237577256DCA1BD814ED88D163E702E3,
	X509CertificateCollection_get_Item_m799058377874ABF0EEE8AD63AE89B62B930A1E57,
	X509CertificateCollection_Add_mDF43F609EAE240711FCE880E66EE814178AB2E66,
	X509CertificateCollection_AddRange_m420F91827C84ED68AB81855E07BBF0CA7D150289,
	X509CertificateCollection_GetEnumerator_mD28E40E9104E833480FA012B1CE905AC08A7AD4F,
	X509CertificateCollection_GetHashCode_m383BD6816EEFE8FA5CA81CA4279B5334231EF84D,
	X509CertificateEnumerator__ctor_m81F0C80052FB25D722E5E66D5121D9F559A2EEB4,
	X509CertificateEnumerator_get_Current_mDA87DA5B1CD027E452E22112ED43423F95573BE0,
	X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m92ACFD522418E3D722E6C723FA93FBFC7A1A3EBC,
	X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m99B025AB34B4F5CFAD7836A73D01FBE1AEA019F4,
	X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m7EC63F5898E3A9881E73EB6205238C31ED4CC323,
	X509CertificateEnumerator_MoveNext_m472F420F968A52D970486D21BFFABCCE5329F714,
	X509CertificateImplCollection__ctor_mC714F3565563EC51068E2601AE9B9F34E2850876,
	X509CertificateImplCollection__ctor_mBD6BE41E55AE1A9FF1E6B528638D002209F7BFB0,
	X509CertificateImplCollection_get_Count_m1503CBCEDE4650173097C408898F1806582CC77E,
	X509CertificateImplCollection_get_Item_m24CA14D68946B6E0006B162BA284EB51F826F276,
	X509CertificateImplCollection_Add_m3A1312DA419D2777C0A5F37ADA482A40C3256BE6,
	X509CertificateImplCollection_Clone_mFA9129A5042E00B9068B45572B98E83EF3EF7368,
	X509CertificateImplCollection_Dispose_mF63BF196D21676FD5055763520ABC93F56A4449F,
	X509CertificateImplCollection_Dispose_m7C6F7B2BB470BE090CCA19E50C4A6E9004441D67,
	X509CertificateImplCollection_Finalize_mAFC19642C1398BE1591E4628C10179D4D676ED99,
	X509Chain_get_Impl_mC8D8FB1BED19A1E40D1DAA7561448ADFA094B740,
	X509Chain__ctor_mC6F6E3F01D21638D909E13D151923EB4BF592CAB,
	X509Chain__ctor_m8273B96D3DA26CDF61C71723A980E09214D1DF36,
	X509Chain_set_ChainPolicy_mFFC95743026B78C7B6DA33B51CEBD81FA2215EDD,
	X509Chain_Dispose_m4CC4E701CE9CA80CC1C3787E84D955D6B7632A2E,
	X509Chain_Dispose_m0233872244BD2AA33E6C4D2AE572FFB991909FE9,
	X509Chain_Finalize_mC31E8C29EA7A66E5B4D2D41C1CACF7AF5BB94AD3,
	X509ChainElementCollection__ctor_m035B6BC8E21811A1536A60FFA9BAB9A4159323E3,
	X509ChainElementCollection_get_Count_m93E1B437A465A5DC0D48F0184EF55370D0E29E2F,
	X509ChainElementCollection_get_SyncRoot_m376A94E55300F3C9CC2A37C50774E04FFE4F7776,
	X509ChainElementCollection_System_Collections_ICollection_CopyTo_mFB0649BFDEA056BF980F17B68DE6B66DF436E3D8,
	X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_mA687F2811DD1F678D629FC166F4288DD340D02F9,
	X509ChainElementEnumerator__ctor_mC91FB54A5BD2C0B0E972FBCA193C5A453FC6957A,
	X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mC3EC8EDFD95897AD140B4F680905E65D8B04B49C,
	X509ChainElementEnumerator_MoveNext_mF90FBF977D510F6FCF47D5B8CB34254C2822A775,
	X509ChainElementEnumerator_Reset_m1D149AB7FF36C6200FB205408D5E856FCE624CCA,
	NULL,
	NULL,
	X509ChainImpl_Dispose_m0018CE8D4317FCAEEA5465425BF5BB5A4A728CBA,
	X509ChainImpl_Dispose_m0F4B69EE7F402C78C833599FB0F4BEC101CB328B,
	X509ChainImpl_Finalize_mD3777623D36204B695026890DAAC789BE8273724,
	X509ChainImpl__ctor_m2DC75C34EFF93D4A1DEF14F168489613A557C962,
	X509ChainImplMono__ctor_m9EEB55A0D2F4EC7D21C5D8FB470A8B9B9094A935,
	X509ChainImplMono_get_IsValid_m782E5277F3BEF121956B1C90D56FA275879BD706,
	X509ChainImplMono_set_ChainPolicy_m16F6430F9445BF75D7965A0ED22F8E17E8A4DDF2,
	X509ChainImplMono__cctor_m95136BE1101C06B64816562118FA9E3502406EB2,
	X509ChainPolicy__ctor_m68882C53D2D8D22007332CCA165F650078751ED4,
	X509ChainPolicy__ctor_m53AB51FBA21115B866EB0AB6AEE039B6167F6A4D,
	X509ChainPolicy_Reset_m651C65C1321FEFE9E3EDFC1BE2706AEFE2C612DA,
	X509EnhancedKeyUsageExtension__ctor_mC91E46E79086AAFCD611FB3A223797D20BA9C1C2,
	X509EnhancedKeyUsageExtension_CopyFrom_mC206A056C8C59401AA01F8C935DDE27D7E34D96A,
	X509EnhancedKeyUsageExtension_Decode_m1865B86FE190237641C00804A058BF56F125183D,
	X509EnhancedKeyUsageExtension_ToString_m99085514587961F4AB1CA3FB82E5223801475818,
	X509Extension__ctor_m75C6A788965E9C797F3D47DEFEC366EC2F69F384,
	X509Extension_get_Critical_m8F4D4C2F0ECBE5CB4C9998CE3E56D5040E2EEBE2,
	X509Extension_set_Critical_mA2B424FF17DE53E01E586015DD1C742773B060B4,
	X509Extension_CopyFrom_m03B3EAD99E076090F01D26FF483E827397903A02,
	X509Extension_FormatUnkownData_mE5BAB7DB56CE215EB704A7E4E6866EBECA18F90A,
	X509ExtensionCollection__cctor_m6411CBA0D4CBA290257D88C740C5FD7E40B209C1,
	X509Helper2_Initialize_m6FA880503C9B3B72009F718503C6B0A0BF301004,
	X509Helper2_ThrowIfContextInvalid_mF76EFD9C0DE50B993ABBEDFCFCF4A235435E521E,
	X509Helper2_Import_mF1D23CC497CC19E02E74727315D59A28714FCA92,
	X509Helper2_Import_m3DF644063B9FF160B750E5CD056FE06B1AEEDF8C,
	X509Helper2_CreateChainImpl_m5A5909ADD8809F95E64FC576BB29EF5B5F878D24,
	X509Helper2_IsValid_mE1C295645E14225C9013A23339E52201C05419F7,
	X509Helper2_ThrowIfContextInvalid_m2CE36D57CDF7DCD4EDD5586EF5D526386B009DB5,
	X509Helper2_GetInvalidChainContextException_m6435C6B754A3A3E6A69DCF16C9F962E0205323AC,
	MyNativeHelper_Import_m447532D56EE4A4E2FD5B61528D0E5DCABF7CF6B0,
	MyNativeHelper__ctor_m3AF762F0DB59E0F744C69BB9306F39DF6AAE7516,
	X509KeyUsageExtension__ctor_mCCDDE2A55EF78832C8117C680FB264CE91893A99,
	X509KeyUsageExtension__ctor_mA9DDAD17EA38ABB83CD6CC9A353A0667A9EAC018,
	X509KeyUsageExtension__ctor_mBC544E9444992C7883638DB0B4607945F33E7426,
	X509KeyUsageExtension_get_KeyUsages_m9544DC0FAAD02C53D6C649E1831176CB54EFE505,
	X509KeyUsageExtension_CopyFrom_m8DA1FA691943CBD4B94E45096E83FC5EA9EEEA3F,
	X509KeyUsageExtension_GetValidFlags_m7946BD756F14B17D707EE12E7D82878531D115EB,
	X509KeyUsageExtension_Decode_mDE97A425A199661D89FE252A75C8644D4280F1B2,
	X509KeyUsageExtension_Encode_mBBF95E13B1FE1A0507FD692F770D6E98A68E3360,
	X509KeyUsageExtension_ToString_m4455C1B31C62530B930CFADE55DC0E77C60C7EFC,
	X509SubjectKeyIdentifierExtension__ctor_mD586705C293A9C27B5B57BF9CF1D8EAD84864B29,
	X509SubjectKeyIdentifierExtension__ctor_m45218EE7D32231FA6C44A40FEC2E5052162012D6,
	X509SubjectKeyIdentifierExtension__ctor_m182458124147FFEE402584E6415C2EA407B59C5B,
	X509SubjectKeyIdentifierExtension__ctor_m95DD08883D5E284C15820274737324063C4E4432,
	X509SubjectKeyIdentifierExtension__ctor_m98571FC543622A4BD3EA7788BB132348D9E0A3E3,
	X509SubjectKeyIdentifierExtension__ctor_mF692F46CE97CB60AF86C1A74E709E8276B7D9AB1,
	X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m3480A14D8377B6C2D220F99D37AB8B13BEFE76FF,
	X509SubjectKeyIdentifierExtension_CopyFrom_m45E7EB4E976E4759046077C79FBC4A820C9A95EC,
	X509SubjectKeyIdentifierExtension_FromHexChar_m7BDBE176CD85DCA3193FECF78D6CF15E349121BC,
	X509SubjectKeyIdentifierExtension_FromHexChars_mB2D3EBC7E627D44254A82E5628A2079C1DB24C38,
	X509SubjectKeyIdentifierExtension_FromHex_m654E8BB1D2F9D8C878EF854D7933C6EA825F272B,
	X509SubjectKeyIdentifierExtension_Decode_m6EB136D7525F3DFB9FA93F8B3653D2F6FA3B72D1,
	X509SubjectKeyIdentifierExtension_Encode_m11C84A3DCE621526C1FC282E214001D70937D6BD,
	X509SubjectKeyIdentifierExtension_ToString_mB22086D5277B22093240BB9841D32D9008D26AFA,
	DefaultWatcherData__ctor_m1BD7AB37DAF4B7B945AEC94F6822188F6A1D2142,
	FileData__ctor_m83656116EFD7E87515DAA656496385C9D5645B24,
	DefaultWatcher__ctor_mF273E25E56807A821BADA660C9FCF74542CF72BD,
	DefaultWatcher_GetInstance_m7F959204FEA11DEEF41BDDFBA00D50F33EDEEE46,
	DefaultWatcher_StartDispatching_mB8C15D154DB7BF7A3B9C34873EE5C584DD5EFA3A,
	DefaultWatcher_StopDispatching_mD71BB52C142FD3EEB95CC9814322C1EBD21C7408,
	DefaultWatcher_Monitor_mEE81EBFB5AE83AED48A36D1AFB199C2D4818E135,
	DefaultWatcher_UpdateDataAndDispatch_m8117225264E165ACD45A067D8C20ADF1BBA46074,
	DefaultWatcher_DispatchEvents_m58C25A8D045EF8820321B73A1CAF4405FE5B42D6,
	DefaultWatcher_DoFiles_mD9DB69F1C88561E83B7A68624A7845D6A5385AC4,
	DefaultWatcher_IterateAndModifyFilesData_m1F44A4E1D7DD8FAD30FDA8EE9AE5FEC8ED9E2E77,
	DefaultWatcher_CreateFileData_m4A3D4F2143DCA2BB7B50C4DC5DB4620E3D22558E,
	DefaultWatcher__cctor_m5E5DC3DB0AAD27DCE89141321EEBE5C91E0E6813,
	ErrorEventHandler__ctor_m3E09BA9274CEEEA547246DE24B7627239CB5F69B,
	ErrorEventHandler_Invoke_mD7EB3F307E911CE70FE14EED9AE21821CF0FE46A,
	ErrorEventHandler_BeginInvoke_m7DE5D5966992AECC44702E72D798517079CE9931,
	ErrorEventHandler_EndInvoke_m224171A7049D31D3A42E07F894636BFA1E5A2C35,
	FileSystemEventArgs__ctor_m92D6B265D63497B90A7448405DC8228C08697728,
	FileSystemEventHandler__ctor_mAF414F567A9E961182A5D18F6A04FDFB629829A0,
	FileSystemEventHandler_Invoke_m16B1200B966D379B4B128D290C9CF6E80F73E407,
	FileSystemEventHandler_BeginInvoke_m17CAEDC9B0D57AF1468F3ED553C8058DA42B9501,
	FileSystemEventHandler_EndInvoke_m3F4D3F77091A6D2170C0E2A93995C6B84F43FAE0,
	FileSystemWatcher__ctor_m2E17475DA5A181CACDA21AF99B615E53CA53C042,
	FileSystemWatcher_InitWatcher_m67B9B2B5CBD08D1B18CC4F73F8828580249D1850,
	FileSystemWatcher_get_Waiting_m5BA1A30C5E32A9C460DA51B7030CDB5E1474B439,
	FileSystemWatcher_set_Waiting_mDEC26E9D3F3A567B2CF59DE042CD03AC969D912E,
	FileSystemWatcher_get_MangledFilter_m019A38321DDA296B04ABCCC0ABAB0704D2D2687C,
	FileSystemWatcher_get_Pattern_m65A73D2DD1F95FBE66DF16644744D57028324823,
	FileSystemWatcher_get_FullPath_mC54DE9939AC466A05AEEC2F47676A219A4E04E24,
	FileSystemWatcher_set_EnableRaisingEvents_m947AB405CE841D3B6780E9AE373AE2E8F794DA2C,
	FileSystemWatcher_get_IncludeSubdirectories_m1526800BE526B20E418BAFA3B1F3380ABAAC7D14,
	FileSystemWatcher_set_NotifyFilter_m29C114B49876A6AF58E21ACE208FCB96A4207814,
	FileSystemWatcher_get_Site_mA7A50E3F3FC656A396573E3CDDF566733FA1201E,
	FileSystemWatcher_Dispose_m5133996E0FC027546E3402A7F2F5BFCA6E7E223D,
	FileSystemWatcher_Finalize_mD0256810C6AA152A8153EE62D128C2B65CA46550,
	FileSystemWatcher_RaiseEvent_m5B2AF414F6FCCDF4327C85559F04B46828F25A55,
	FileSystemWatcher_OnChanged_m7AE89CE287B637F65F3B8B985627956F9536998F,
	FileSystemWatcher_OnCreated_mB091E054FBF03BFEF07224C17EFDADDE83F50E38,
	FileSystemWatcher_OnDeleted_m241A3FD12116628246D4C684309CDC6B6637DC2B,
	FileSystemWatcher_OnRenamed_mFD3C51BFDEBD0CE6C3686C5DDAC4ED580B30A42F,
	FileSystemWatcher_DispatchEvents_mEA4A91FD6C52392848EADF06E5F27AAD26CC26FD,
	FileSystemWatcher_Start_mF8C8DACE54BEC14B66FB2AB2023DADC7954526AD,
	FileSystemWatcher_Stop_m44B8C1A81F0CCB6F16310E4DDCA6441C2F33A505,
	FileSystemWatcher_add_Changed_m50FA16A43956D49F1C79B76596D8C297A4B52225,
	FileSystemWatcher_remove_Changed_m2F0C9A37408FCC0DE73600B88F18CDA7B3CA22AB,
	FileSystemWatcher_InternalSupportsFSW_m13269BE88BD6301467D39555661FE4A261396A9D,
	FileSystemWatcher__cctor_m5D24AAD6DA96B9636AAF31CDAAC9E27CE6CE169B,
	NULL,
	NULL,
	IODescriptionAttribute__ctor_mEB30794A9FDA28EC8E387DF4510912DE1384B9FC,
	IODescriptionAttribute_get_Description_m25AA8E7C9C94721A343EB43A442BEFBE21B76650,
	InvalidDataException__ctor_m00C4E880DA84C1425853C44B9AF697AFA8739334,
	InvalidDataException__ctor_m9E70F76F454223A518AFC7E98AABA05D94237281,
	InvalidDataException__ctor_m002DF64CE04566C00AAA4D5283961E429CF32DBA,
	NullFileWatcher_StartDispatching_mF43E6F3F272FE08442A9383D06BBDFD6D74A95BA,
	NullFileWatcher_StopDispatching_m589DE9B7207DC228EDE2FFF77772A798B4C52FAE,
	NullFileWatcher_GetInstance_m28FD83AD24BBA8874E6B696D96FDA4EE8DB54D70,
	NullFileWatcher__ctor_m6563AAFF63915CC1BEFF4CD8ECE4FA26B3DEA70A,
	RenamedEventArgs__ctor_mEA13644A1ED1B8E04BFE38CDDEE0711801F20F54,
	RenamedEventHandler__ctor_m5A67C39B4ED5922C67E00AB0EF2DCE2A18A9130E,
	RenamedEventHandler_Invoke_m96544E8A1B4EE4104B00459BEABBD0D3CE31CCE8,
	RenamedEventHandler_BeginInvoke_m7821F96C5E9B21C9B61C672E176E7F1B16325E9E,
	RenamedEventHandler_EndInvoke_m4D430ADAAC2D983E7389BDFF68E93B09BBC10B36,
	SearchPattern2__ctor_m640287AC3D982EEC12C97DC50058392110C572FD,
	SearchPattern2__ctor_mEB9EBF962D4511134D1F4853AF5676A967DCE202,
	SearchPattern2_get_HasWildcard_m048D1ABA0766CE006FB8D4DBF2B229CF9FE61D35,
	SearchPattern2_Compile_m9A91FA8763BBC2B931F6E46C89395E0B5C5BC0D8,
	SearchPattern2__cctor_m73C16BF7DE1AB239D7595F39B75A9B8B6AAC3508,
	Op__ctor_mC79954E7A495084395002BE9A244D37BF32417F8,
	WaitForChangedResult_set_ChangeType_m779175206406BD72572AF846383AEDEEA44B7290,
	WaitForChangedResult_set_Name_mBD5B6415D0C2FE4199DE81935EF3FB92573346DE,
	WaitForChangedResult_set_OldName_m3B96A62F4EBC550A0451A06020CE354C2A64D9DF,
	CredentialCache_get_DefaultCredentials_m669684689D1F69432F33D9B1E0ECF53080BB8CDC,
	SystemNetworkCredential__ctor_m51111F468A7CFB7B990C2C618A99EDC7FA7B307A,
	SystemNetworkCredential__cctor_m42F0FC8A6A428F7764FC5A86B38469FC032D3340,
	EndPoint_get_AddressFamily_m7B7DC3AE75480FCA543AE5434EFA8C8C09450C66,
	EndPoint_Serialize_m118001AAA9AC84B4B28E8267055A7173D8C1F376,
	EndPoint_Create_m98FBA607C33234AC35DF79DB6494D13AED7A501C,
	EndPoint__ctor_mFCD3A4BB994F59D40A3A94A6F1DEC4A731CC8776,
	GlobalProxySelection_get_Select_mE826A34EB04E3906E699A317417506C89551F54B,
	GlobalProxySelection_GetEmptyWebProxy_m66C1CA6E4480F45F78145DD23AB51A59B5A246AD,
	HttpVersion__cctor_m19EB2E84E83F160B93594A35BB6C96C5B50D6856,
	NULL,
	IPAddress__ctor_mFD0AF2F6A282D1158DF3C34EF2E63B73814E7748,
	IPAddress__ctor_m373D3930BEEA00EC628E98C5A13AE9BE2B2CEC84,
	IPAddress__ctor_m7A866EC7E9B1A8F89158C0EA1AC0A966CFE819ED,
	IPAddress__ctor_mCC321EEDA0750DA97447EB60529BCBCB4EA0249D,
	IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA,
	IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273,
	IPAddress_InternalParse_m69E95769392647AE9B82AFEC6D7E74C4F7CCFD47,
	IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2,
	IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693,
	IPAddress_get_ScopeId_m941461DEBDECCD858F8D3165F3CA366A318064D9,
	IPAddress_ToString_m0CAEDDAF2A42F23EB1BE3BB353ABE741486710BF,
	IPAddress_IsLoopback_m84B87F0732723BE939EB9534E8271A13EE599027,
	IPAddress_get_IsBroadcast_mD9674AA08F6D75A9C40A2E8177EF949588D97322,
	IPAddress_Equals_mADA54686760DE75E2C31B8651224FFEB019316D6,
	IPAddress_Equals_mB38BAC1A15885A3181507BC9FD4E8F5765FA6678,
	IPAddress_GetHashCode_m36CE850AFAAD382A29B7D72844989A3105565D7C,
	IPAddress_MapToIPv6_mC852A3F6831381331095C81AB75B0A70ABD2498B,
	IPAddress__cctor_m4DF372012DF900E7BB489931296D0BFE4EBD4AEA,
	IPEndPoint_get_AddressFamily_m53CEE40486A2F3615571B5255CA6D4C28387703A,
	IPEndPoint__ctor_m5D901E504DB160F93F70404CB2A5B1D69459ADFC,
	IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845,
	IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4,
	IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9,
	IPEndPoint_ToString_mB132354BB333FA5FD9CA5B6B86F751AAA87AFEC2,
	IPEndPoint_Serialize_mE4201DDF2EB6D872A31A2620D20C718DC1F28962,
	IPEndPoint_Create_m1B1932CCD58627047FAEDC2402C333BF6468A3D7,
	IPEndPoint_Equals_mBD402EE46BB0C0922C25E2DEFB64412E4666EC6D,
	IPEndPoint_GetHashCode_m52D8AEEDB5B1409EDD08F18B2018CEB1712266C0,
	IPEndPoint__cctor_mD88387D86BAE58328D7BA158704E91B0415F9B81,
	IPHostEntry_get_HostName_m58DC3A2664BA86513E055ECA103214D00EFD1605,
	IPHostEntry_set_HostName_mE132ABF58C3C4C28A58A48132698FA99F55C328D,
	IPHostEntry_set_Aliases_m4D05E9F3D5C6FD0996C86816B36B1DF9BE79D8ED,
	IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56,
	IPHostEntry_set_AddressList_m057A9B8FA93A129A0DAF5222231BD155B774B50B,
	IPHostEntry__ctor_m539B6CE87B29D7B23A4F46C73BF7D6BB74D0331F,
	InternalException__ctor_m4963B2F0FC3F351663C67F3F71CAC601D73DF499,
	NclUtilities_IsAddressLocal_m15E0BC8FA72FF335F31D5377AC1ED599FA5966DC,
	NclUtilities_GetLocalHost_m05F1444B07A59C035365C4F17DD28959EA8843BD,
	NclUtilities_get_LocalAddresses_mCD150C4D4468FA5A5841F1A9DEA23779221321D8,
	NclUtilities_get_LocalAddressesLock_m873FF32D6C0398541CBB1CE734A5A66A8ED1A2C2,
	ValidationHelper_IsBlankString_m78C3603B0E8C93CAD3FB945CA57C3E4729A09B89,
	ValidationHelper_ValidateTcpPort_m899B89B4810C6531306EC6C34FF452732D41979D,
	ValidationHelper__cctor_mE5C7F68FC003121FE3AC2039FFA9B2E88500E16A,
	ExceptionHelper_get_MethodNotImplementedException_m607FF8B70BAE0BB51B306CC3282A08B59C657D84,
	ExceptionHelper_get_PropertyNotImplementedException_m7A641AB1C2BDAB3199A4A2674561E23302FB637B,
	NetworkCredential__ctor_m6FAE0A13FFBFC74F1E810399223B5297DF9B4C76,
	NetworkCredential__ctor_mFAFA0E2205D5A144C0EAB9420F7FBBE71ED677D4,
	NetworkCredential_set_UserName_m17D8E6ABE7EDA733A8E01967698669293FCF2E22,
	NetworkCredential_set_Password_mEEF6A7577788282996C4A5A989D9BA47B13D882E,
	NetworkCredential_set_Domain_m5046BA97B0F1D839ABB6F928C1DF2FA2387DBA9C,
	ProtocolViolationException__ctor_m9E1CE4D0A1DBB0EAE0BE6C7C026154C789F41A49,
	ProtocolViolationException__ctor_m36E802912D318858D2D98F929722AACA1A2EC38C,
	ProtocolViolationException__ctor_m63A4EA715BBFE3D72929AD3FEDB1E398B75C41F5,
	ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m044186C620380DB9812441EE011806354C23D0B6,
	ProtocolViolationException_GetObjectData_m37E19ADFB1B9FA924D562BDFE0D57728AD5F2A37,
	SocketAddress_get_Family_mA5C74070602CE88CF4E8C77A06B7B60D73BC736D,
	SocketAddress_get_Size_mF4849EFEEA3BA3E2109D3E05E635072F89DE57CB,
	SocketAddress_get_Item_m9B0A7BADAFEC83332452472EFB0F2B2A8AF7C442,
	SocketAddress_set_Item_m99934FEE4418DC91A6272059E8090293D79DB881,
	SocketAddress__ctor_m8ACFF855B4B34E64D63221D8964F67393AC5C2C0,
	SocketAddress__ctor_mBD53CC91765543655C8A685599BF9E83CBD7EDA1,
	SocketAddress__ctor_m727264D4E76104274842A01FCA0C42F424463B5B,
	SocketAddress_GetIPAddress_mB6CBFAEAD75170561033660215DAA67EE91E6A85,
	SocketAddress_GetIPEndPoint_mDB28840AEBFA9C37CC41BEC66E67BA9EDCEC2700,
	SocketAddress_Equals_m51EE0D3DF560D78987904A2F7D449D9008B7F4E7,
	SocketAddress_GetHashCode_mD765A06DB2C807684567958F8B82266A72A51B63,
	SocketAddress_ToString_mDF5B4B0AF200471C84B09D553EB33BC4F0EE20EB,
	WebException__ctor_m3CC3B7531100A92762AB2A131B85742D403D6370,
	WebException__ctor_m864B9642C3D47B5ED0CDA9397ACB8CC70D2B9E4E,
	WebException__ctor_mABBCD10936CE582BDF68BA0204ECBDA253119AFE,
	WebException__ctor_mC093D93CFCE3064622C7AF755BC3D3150E5A8D2D,
	WebException__ctor_m5363C3AC28BABD353ABD5295C3A4FD44724D9407,
	WebException__ctor_m4BFDADE5C6613BE14CE11DE30B350A671DDA7C16,
	WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mE242FB2EA4DB6AAC3C6C08DBEFD8F3A7D8C9E2DF,
	WebException_GetObjectData_m72AC26432F46DEC77E8BEE3B60150CA524EB8D43,
	WebExceptionMapping_GetWebStatusString_mEB4A50FC87E40382A86D007C2E80FCCDEFCB5B91,
	WebExceptionMapping__cctor_m25DD11B1F6D1AFB6D3DCD727B6D0D0F9C551EDE6,
	WebHeaderCollection_NormalizeCommonHeaders_m3FE2945857B86D96E0B495218D61593CC6AD1991,
	WebHeaderCollection_get_InnerCollection_m74FAC0EF1815ABEA9D44E817BA54B413A7D21645,
	WebHeaderCollection_AddInternal_m6D3C568730974B187804895F8F3DAA50AB37C6A8,
	WebHeaderCollection_CheckBadChars_mDBB3AA0A529389E24E9DFBD08C259F34412C0523,
	WebHeaderCollection_ContainsNonAsciiChars_mA89278F21B4B5F507898C91472747092C3E152BE,
	WebHeaderCollection_ThrowOnRestrictedHeader_mD66B7AB428CEE7686AA15963F42F6645880A7A6B,
	WebHeaderCollection_Add_mB254E228D958CFE984049FBFA75815196B1BB993,
	WebHeaderCollection_ToString_mAF0DD5057B67B6D935F9F81254FE4EF3816AE1F5,
	WebHeaderCollection_GetAsString_m2446E221F9367C3C2D0FCC9E1686E3E5292B6932,
	WebHeaderCollection__ctor_mDE789C8E11131B5FB1FD5FF79382893DE73E8752,
	WebHeaderCollection__ctor_mD9851B680C175978BABED32CA813D66553B5DB48,
	WebHeaderCollection__ctor_mA6673D3256664909BD3B6BA1DED72901CBF302DD,
	WebHeaderCollection_OnDeserialization_mFD1302BFFB2508360BB2241B4F6AEBF47F6FB53E,
	WebHeaderCollection_GetObjectData_mBDBD7A68D3851F96DCFE6819ECE1FB5B7B733D50,
	WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mF606120A9A8D480A73ECC80F3134437CC170DACC,
	WebHeaderCollection_Get_mBAE90C4839B7748D8889C011ADE5E8CD9ABADD7C,
	WebHeaderCollection_GetEnumerator_m3B38A75F803A0EA365EC3A5FB2E71F85B784B71C,
	WebHeaderCollection_get_Count_mF4776644017CCC37A364707BC35BD4431BB66C80,
	WebHeaderCollection_Get_mB4CF6863B19E3815EEBE1A86F1881B6F744A47B2,
	WebHeaderCollection_GetKey_mC4DBE9E8F0044B4F1AA95F5DF76955E8692655F0,
	WebHeaderCollection__cctor_m779CABD05DE263A98071763B54A53757E33B9A6A,
	CaseInsensitiveAscii_GetHashCode_mEDEDA9FD6885627614E710E60A2EA06D69F6D436,
	CaseInsensitiveAscii_Compare_m89633B3A475AC918C505843E6F7824FE789A6E4B,
	CaseInsensitiveAscii_FastGetHashCode_m3718D0BF4E0D19D8DBBD9E3177B8B1479EEB7090,
	CaseInsensitiveAscii_Equals_m31D348231E3122FF20FA5BDEFC6BC3A8B65CB9C0,
	CaseInsensitiveAscii__ctor_m3C5EA0D73AE6F2E60CC2335DFC861C64B2FCEEBA,
	CaseInsensitiveAscii__cctor_m759446C030AB0E794F53B4D3E38A5813361A7886,
	WebRequest_get_InternalSyncObject_m80BB55BB5C09059A46F4E10599FA455F41286330,
	WebRequest__ctor_mFF46D19A613D1A8E5E9318DEFA794B18AC206D57,
	WebRequest__ctor_mD4C70AB50E522A71C1B47263DD8714FC3B52A3C1,
	WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_mA128ED1898FD0A9943A96190103BE40F418BAB03,
	WebRequest_GetObjectData_m06BD9D15936178B48D44F18C02CD94EE21DD1CF0,
	WebRequest_get_InternalDefaultWebProxy_m13E2CAB3FE298CF26023A3626454FE989CF687C7,
	WebRequest_get_DefaultWebProxy_m65F367761268F3797F96B8BE99F85FF8CB1C117A,
	WebRequest__cctor_mF114B4DA7976F2211658435221ABC2968FF13798,
	DesignerWebRequestCreate__ctor_m57F5ADABDB3D9A8F8617EBFD5F40FB0D8A9DF7D3,
	WebProxyWrapperOpaque_GetProxy_m1A8A0E96628ABA4A57B401AC2D60016808BA840D,
	WebProxyWrapperOpaque_IsBypassed_mAB04ED8FC80CF3E3045042D4F618C3189ABBF07C,
	WebProxyWrapper_get_WebProxy_m64892D5D4C1D1C4A11188F1549D2762AF50A5EE8,
	WebResponse__ctor_m0A254FF1607AEACDAA102A8ABA8941A42B2929A6,
	WebResponse__ctor_mC4FCBBBB946A8703F5279A1390D56A50CBE7164B,
	WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_mE662B42630016B991CFC1E861F774DC1CDDD00DA,
	WebResponse_GetObjectData_m52CD293C2D47F35D8FF1EA2769D272E48398EB4A,
	WebResponse_Close_m970DECB5745AACAC9CA7B88FB818066A0DFC4998,
	WebResponse_Dispose_mC0C80BE4CDA26A6A26EEAE961C588A461FEE9FE4,
	WebResponse_Dispose_mD37AF3FE467717A008830A34E72215D3DBC244EC,
	HeaderParser__ctor_m3505961B694DA7A327216C93C9ECF14883F0FD76,
	HeaderParser_Invoke_m9B1C027C8642CE3AA54366690471A23E181D41B6,
	HeaderParser_BeginInvoke_m9FD2F44038291DA86379F725BB39C636E9442D6E,
	HeaderParser_EndInvoke_m357E4BCDE566A5DCB07B1F07F6EEC3F0BBD05E8A,
	HeaderInfo__ctor_m0A21C755086755564093EE140BB76B17BF19D119,
	HeaderInfoTable_ParseSingleValue_mCE6140F9CE345D6AF51B89C7D8C42E6C7AC41EA0,
	HeaderInfoTable_ParseMultiValue_mF581CA5C6C9D338CC17232EC49C4471DB5DFC014,
	HeaderInfoTable__cctor_mE96A69FD8B8F938623442DCD661EA5FB8E608B16,
	HeaderInfoTable_get_Item_m87D6C7DCC3A5EA433F038365677E93B311A41885,
	HeaderInfoTable__ctor_m7CAFD794EF41A0799F26DF974DBC848A03275531,
	NULL,
	LazyAsyncResult_get_CurrentThreadContext_m72EA4FF3D8FA7A473BABC9CB6C74D197BC1CCD98,
	LazyAsyncResult_get_AsyncObject_mA91273208B3DCE1E9830B3CB028298D40C635059,
	LazyAsyncResult_ProtectedInvokeCallback_mE4BFC9A8F54A60F45DC23A775D75E7F9B3BE61AE,
	LazyAsyncResult_InvokeCallback_m61F2403E47B10A03CA2CCE45D5DB1C5033A57C8B,
	LazyAsyncResult_Complete_m1149B1B2741B4B2D22775A68D74B955BC3EA4A64,
	LazyAsyncResult_WorkerThreadComplete_m9144EAFE34F64C805224410D61F45300D854A6BD,
	LazyAsyncResult_Cleanup_m60696D3703963856A2069A821F8F68DEE1F81D4F,
	ThreadContext__ctor_mA7A43774615EA8E5A20D406F33EFE2004B9944E2,
	NetRes_GetWebStatusString_m507D1110F525757C699C6F95A3AA4B8AD41BED81,
	TimerThread__cctor_m92260B88BACC7706E288A0AD202FA71CD0696199,
	TimerThread_CreateQueue_m38F306BCB0D055ADBC36F3D8F2B77EBE4BFF8C82,
	TimerThread_StopTimerThread_m5D33E7D7EAAB667AEE1ABC6E0F832DA361BA83CB,
	TimerThread_OnDomainUnload_m3CA503B871CEE33D278B6995FBF8ED5B92001E1D,
	Queue__ctor_mED7AD466F7A2AD32777D05229BE4E7A6BC358C06,
	Timer__ctor_mF6B46FBB94C7B044423D0931A24646947612D40E,
	NULL,
	Timer_Dispose_mCB85185EBA6CE836BDAA5CB5B5D98326E0279F0D,
	Callback__ctor_m4E3A7A3D8252FA436373FF975A78C11BFE218BEF,
	Callback_Invoke_m429C63F5BE16B526F6875846B107639638CF2F75,
	Callback_BeginInvoke_m41DDA2A728FAF5D8FC7BDD6BAF1E5A5FAA44067A,
	Callback_EndInvoke_mCA87962B7FC7ACCD1BD62977C8A1DF1F2ECC8D1F,
	TimerQueue__ctor_m0AE128C18B38F02F946242A6D18C788B83CF4A0F,
	InfiniteTimerQueue__ctor_m9399FB8D3AF6FCE71EB29A97665E871E9D13C5E7,
	TimerNode__ctor_m18DCD26BDC1FE8F661FE7C056F59785CB48F09E7,
	TimerNode_get_Next_m91904310F38E6EF8D94261890F86387942EA81DE,
	TimerNode_set_Next_m6A6F1ACDE24E867EA3D88F2C889C677AE7AAC3BD,
	TimerNode_get_Prev_m694B4D7BD49FE9A47B961DE0E12FF036B940CEE5,
	TimerNode_set_Prev_m6AE80A4996048AADCBD43D8CFEB5DDB8CAAC1B8E,
	TimerNode_Cancel_m691597518E9CAF2719C10B63577E24DC65A4B974,
	EmptyWebProxy__ctor_m1087116F8816BF3AD6D7ADE134F1579659AA00A5,
	EmptyWebProxy_GetProxy_m41932E59E773523BF705A1FDFD168CAB61F9C4FC,
	EmptyWebProxy_IsBypassed_m91E4C131B35CBE9CE062B93710BC938A608CC445,
	FileWebRequest__ctor_m6BF9BF0E17060D4E719795DE5742BFFC65D34C6B,
	FileWebRequest__ctor_m1FFFB33A0414E016669B3179FF16F141FA6E838D,
	FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m9B6440775FE50243D85010EB8F8D6DDBFE8A3BE4,
	FileWebRequest_GetObjectData_mC8A7DDCA00C0E3ADADB267284F196C4EE9E8D3BB,
	FileWebRequest_get_Aborted_mD504D723802D217E3F741C68EF2576AFC2C0006F,
	FileWebRequest_GetRequestStreamCallback_mCC6AEA46D613AA7B5035F4C5C27E848DC601951C,
	FileWebRequest_GetResponseCallback_m1C0A747466A03A05FF9D6D45456DFAFEEA38BF48,
	FileWebRequest_UnblockReader_m9E687E8F4413F2727339A41C3DE03A7D8ADBEDE3,
	FileWebRequest__cctor_m98058ED26B0744413A32327D2FF6778E4B52D5F4,
	FileWebRequestCreator__ctor_m550EAB9632992C942E14D5B34C48FA6196595B9B,
	FileWebRequestCreator_Create_m5A5314BCF6AA30E63196C05A64ECE6EA11D4E545,
	FileWebStream__ctor_m80D7CF5508F845D57EF371DD820A480A53D5C27C,
	FileWebStream__ctor_m087F956637DD4C2FCE8247EC13021B1E75B35609,
	FileWebStream_Dispose_mC797EE18FAAF3613C73EF95AB81D1E9C0EE9A40A,
	FileWebStream_System_Net_ICloseEx_CloseEx_mDB04D260B47E82C6161F2D65EA9EE8A832D03D18,
	FileWebStream_Read_mBA56658D84F3C5742FE812D1A7AD58116541C779,
	FileWebStream_Write_m79C3CB2CE195D5348D313E6CFA6C8F4394E9681F,
	FileWebStream_BeginRead_m1E98F98D1956A77B4CBD4F111EC895A855C291D8,
	FileWebStream_EndRead_mD4F843221DB3767E3CFB3E052E24E9CC94135302,
	FileWebStream_BeginWrite_mD2E9B62CE8C7FF3A16763BB128E6AC9E31C985D0,
	FileWebStream_EndWrite_m9505A80B585F611DE18E22C9ACC319FB901E6A94,
	FileWebStream_CheckError_m70F0ABB558C83EB00CB830DC1B449E7254B561D7,
	FileWebResponse__ctor_mD521D067A1815BD4E42DE18E13B82FC6EAB58379,
	FileWebResponse__ctor_m8596AAABC73AFAF749351F4B0D2CBFB9214726C1,
	FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m1A6DD095E9F848AD3951E80A670DA080CED12BCB,
	FileWebResponse_GetObjectData_m1553AB318AB78A871A047F1D842356776B283E4F,
	FileWebResponse_Close_mBD2FC4D7E4EDE7C10648E463201E1A1DDEE7D551,
	FileWebResponse_System_Net_ICloseEx_CloseEx_mEB324E8E15B8A2D26F34220B88A2667EEBB02C8A,
	NULL,
	NULL,
	WebProxy__ctor_mD47326CF9857B797EFCC3CA369F83D51D19317CE,
	WebProxy__ctor_m2354821664C2380AF107CBC5C66F0325068C5DA7,
	WebProxy_get_Credentials_mF546D5D8441F10F4A46A9A3C5D52BFFBE7D735B0,
	WebProxy_get_UseDefaultCredentials_m661B51178D8050D605835FCB034A166BF33B009B,
	WebProxy_set_UseDefaultCredentials_m53AF92FFC63A223541B629E01D939AF2A75BB4E7,
	WebProxy_GetProxy_m59215526173C7FD907EC86C35C44AF4FC4EFF28A,
	WebProxy_UpdateRegExList_mEAE558ABD241391C3AAD19D62066AB67EC3AE46B,
	WebProxy_IsMatchInBypassList_m6B8C5DA8C56E6D50B0C84CCD094DB8FFBECDCC93,
	WebProxy_IsLocal_m22583E899743095130F899378336361304BE71AC,
	WebProxy_IsLocalInProxyHash_mB4C405FEB5AFC01644FFE81AA3CB76918A7D45A5,
	WebProxy_IsBypassed_m1DB51D78C18C700F26EEE00938F4A202EF944B5E,
	WebProxy_IsBypassedManual_m96199F172C51F06EE36CCE5D937BDD7BF873FEFC,
	WebProxy__ctor_mC76DA2892292BF1609EE4874C11206819F96899E,
	WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_mB855266F0AA17F2652B6BF6286A749097A9455E2,
	WebProxy_GetObjectData_mF4C20C0FADD55674E00C1E13A16F4A14B2777D6B,
	WebProxy_get_ScriptEngine_m6E040080EC0330E0C15849B1BB6469DBFE92A057,
	WebProxy_CreateDefaultProxy_m0F1C8D957370920707869349941412B6BC3323A5,
	WebProxy__ctor_m387E8EB6694953D1FA4E77E00D449B20E2C0B84F,
	WebProxy_UnsafeUpdateFromRegistry_mDFB67EA19AAD6F1D5BCF9B7D585B33A84D14DC4E,
	WebProxy_GetProxyAuto_m1EACF0FDED5E764C7B3EAF243F39A73646B94CD2,
	WebProxy_IsBypassedAuto_m96DE81A96B947F6F6A25A49D5F5D8430346809C0,
	WebProxy_AreAllBypassed_m6E869A92B478E61C29F0B9D9085E2AC6A075B59E,
	WebProxy_ProxyUri_mE09DD6D37536E7D5AC20A9519DFABCDB974F2B42,
	AutoWebProxyScriptEngine_GetProxies_mCBAD00EC0BE65DF947C48B1DBC377EB80F075902,
	AutoWebProxyScriptEngine_GetProxies_m228520D18B1350998E32FCACF796316DBBBA111A,
	SecureStringHelper_CreateSecureString_m36F065E59FF9B8AC79289E4B2A42F96C23BD4F0C,
	ServerCertValidationCallback__ctor_m01DC1DC5935B7807EA9D35D50BDF9F00B68E1A23,
	ServerCertValidationCallback_Callback_m2F51ACBBF63B010C39B4C415ECD209BFB4243733,
	ServerCertValidationCallback_Invoke_m9A3D9984E12278ACD7DEEE5E4B039A3250D6A8D0,
	CallbackContext__ctor_m98617E58A5FC792C785185C96D2AACADB98B89CB,
	Dns_GetHostByName_internal_mFEA5DFFBD99C1E7364B146B0F95FDE3F5DA67EC8,
	Dns_GetHostByAddr_internal_mCB4425B47D6768392E20C80C4EE1C5E28956663D,
	Dns_GetHostName_internal_m69BF784F0F6C595AFC4B0027E8EB0D465B6845F6,
	Dns_Error_11001_m783146DF96023BA4CAD30F55D8DC527D2ABBCB72,
	Dns_hostent_to_IPHostEntry_mCD03D1D4689BF1B272CB8212506C4C853C6D06C3,
	Dns_GetHostByAddressFromString_mBE5EF710810CFA07D13ADB525AAA34D32E040681,
	Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38,
	Dns_GetHostEntry_mEACB9ADFF37EBC9B353155EB8F0290F7CB9E1574,
	Dns_GetHostAddresses_mBB73A3CFACAF787C2DDB8EF473E87D31940A379D,
	Dns_GetHostByName_m1DD689606F93DAAB12896C4D3CA6A33731A4CE62,
	Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2,
	FtpRequestCreator_Create_mB9CD950EDF1B3F06F7C928E490806C12FB1D7306,
	FtpRequestCreator__ctor_m0DACF33EF40A75AE489FEF288DC61837FFFA8BEF,
	FtpWebRequest__ctor_mEB166EB5A1F20FC008DA66D46AADE550EE176892,
	FtpWebRequest__cctor_m3652EDD67F0C55207C33B710F1DA9808E1D31AFB,
	HttpRequestCreator__ctor_m2B7DE24FCB9C1814F8972B4B167127F86DB1BF39,
	HttpRequestCreator_Create_mE3E077C98503C150AA328D4EED41FE9F8F518F46,
	HttpWebRequest__cctor_mA59FB9F51019C563A3B276B79A1131CFDBE0035D,
	HttpWebRequest__ctor_m85AA1BD537DCDBF3B1BCD75F6C93C6AA8B831D7F,
	HttpWebRequest__ctor_m85CA8AA15E849598BC5ED6217805CBDF8D5BAA0E,
	HttpWebRequest_ResetAuthorization_mAA12582B7D5B809AFFA7559AEA5582AADD6B23AF,
	HttpWebRequest_set_ThrowOnError_m7A186C503E47933A82ABC3AA32081213004BF0FD,
	HttpWebRequest_get_ServicePoint_m7E95E58719904639C79F9420F080A3F94BAB63EC,
	HttpWebRequest_get_ServicePointNoLock_m6749645299E6A6C85445E9B7F2DAD248FC6FA1E1,
	HttpWebRequest_get_ServerCertValidationCallback_mE535B7C3510E634EF8B2E2C9698BE4069D376619,
	HttpWebRequest_GetServicePoint_m2F4A5E8A7A723C3CA97203FE2A4D9913EAC185E6,
	HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m14EED4626353FF9CB5ABAC2978C2CA37890306AC,
	HttpWebRequest_GetObjectData_mF600B207AECA50F8B6ACB8D4C29366A6ABE36C45,
	HttpWebRequest__ctor_m71D51512F53504F6BCBCFBCBBCB5D803357145D0,
	AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D,
	AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A,
	IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497,
	IPv6AddressFormatter_SwapUShort_m6B7BA905E96BB0889C580EE25F3614C7A4A9164C,
	IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F,
	IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC,
	IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127,
	IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F,
	ServicePoint__ctor_m788957B0CF9F256F581975F6ACDA0DB122D2BE85,
	ServicePoint_set_Expect100Continue_m9F795AEF8CCA79C80CDD27F7EA7AD01DAD92618B,
	ServicePoint_set_UseNagleAlgorithm_mA40D127E6B6DDB7FE8EBDE9A075FF0FF96CAE3FB,
	ServicePoint_set_SendContinue_m92320EA69F94AE266D2C8797E5DCEA965DF5C8ED,
	ServicePoint_SetTcpKeepAlive_mBA9E8F9615C7BAA38E396F21B73549BE72AFB165,
	ServicePoint_set_UsesProxy_m81B24DCBB2CDB67877B1631AD53EA4925B2D77D2,
	ServicePoint_set_UseConnect_m63B28421D36EA6064A66588382A7381C9318CAA2,
	ServicePoint_UpdateServerCertificate_m4D130D9346CC9D940FE6CB00B40FB9B976853F01,
	ServicePointManager__cctor_m5E74472D2F21CBE2808E62160416C0F572306498,
	ServicePointManager_GetLegacyCertificatePolicy_m91F5A99F923B7085226C21F50BD30C1BC056EC98,
	ServicePointManager_get_ServerCertValidationCallback_mD060FAFC9DC69DA28963397C5C61BED8343C0381,
	ServicePointManager_FindServicePoint_m9941E847AA8745D9CEC1CCB2559BD0348B3B58BF,
	SPKey__ctor_mEFB0271B87BA8145BF5ABFBFC580444AC87E8378,
	SPKey_get_UsesProxy_m43005CE469081EA1C0EBCDCEF7047817882A13EE,
	SPKey_GetHashCode_m4686BFC3EE7C5322B912BCC739EA3C2AB33D8622,
	SPKey_Equals_mF29C836C97373F9F739EE977115DB8F521921CFB,
	SocketException_WSAGetLastError_internal_m18F05CF8D9CE2435225A4215ED757D8D98716FC3,
	SocketException__ctor_mB16B95B2752EAD626C88A5230C1A8FEB7CF632CA,
	SocketException__ctor_m68F7126C5B5AD6C6E1EF8A06DE8F5068D6A46002,
	SocketException__ctor_m1853BFE92CDFB7A46B2AD59841A3B1DB95244533,
	SocketException__ctor_m2687C4EFA4D012280C5D19B89D8D01F97B6A2F1A,
	SocketException__ctor_m4C36461DF98089890FBF01908A4AAD301CABE071,
	SocketException_get_Message_m50B9DF4BB6F3B20F650E2F965B3DD654C8970378,
	SocketException_get_SocketErrorCode_m2ADCFE3E77E69B2C54930319F2B72BABCCB8A824,
	LingerOption__ctor_m3DF407AEF218AA4C7291FF92543BE0BAD40B760A,
	LingerOption_set_Enabled_m698CECD028CDD6D6E7CC82C12D5A0B7A291A74B1,
	LingerOption_set_LingerTime_m366DDFE3598E938C9EA7C288E306682E64D44755,
	NetworkStream__ctor_m9629E0E9BD6011BA4E7E923B71410EC3A611FE83,
	NetworkStream_get_CanRead_mBF98E4498C6F7C76D911F675962F544DD6336BCF,
	NetworkStream_get_CanSeek_m6D65109C6D751B848B97C220FC02B75A4B833A14,
	NetworkStream_get_CanWrite_mDA3F37747199641E18F088E19FDE4E05BD45B4A2,
	NetworkStream_get_Length_m6CF8079769A034BEE882C1E02FCA16F67F80DC11,
	NetworkStream_get_Position_mB8AF2E84720E0D5FDA49C24673667566316C167F,
	NetworkStream_set_Position_m07B5B94010D39A5EBBE763C916F5A344DD99DAB4,
	NetworkStream_Seek_m206C93B5C10E443853C7DF8C0D094328AEF9F94B,
	NetworkStream_InitNetworkStream_m4749E17D45A2B9F3452ED76D673C59B6CF09E542,
	NetworkStream_Read_mF5137678893C1868A0B56475E63493D349A17A5E,
	NetworkStream_Write_m2CF72A308913D3CB3EA37F5A3493FDA0A51FE910,
	NetworkStream_Dispose_mC4F2E85F8F098254D60ED053F5D3E45CF7B2B4E0,
	NetworkStream_Finalize_m97B1A123AB9C7EF73CB91684189632C4E86BD422,
	NetworkStream_BeginRead_mB4803C638A3A3265669A663DBDA859DC5A5ED009,
	NetworkStream_EndRead_mAFBB41B6DE1BD74C47DB890C5BC3617172F9F14E,
	NetworkStream_BeginWrite_mCC5FAC2886E330DE2E1DB4B7D4509F6F110396D7,
	NetworkStream_EndWrite_m9A30266EFA0648D3E2E22F6097271FFF8C00E501,
	NetworkStream_Flush_mD24343AA0BED24CC098BA9BFF2F118CC0865DB40,
	NetworkStream_SetLength_mA3CA693C34E7EF187E55731B089D4A38319F2CB0,
	Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83,
	Socket_get_SupportsIPv4_m2D8B6C4B1E1359F09B4C8C422B2AF38A39C41F81,
	Socket_get_OSSupportsIPv4_m0A5CF1017F08C741FE899C3D457A1C678EAFD599,
	Socket_get_SupportsIPv6_m76AE5D0EA624C0AEB6EFAE0E56B3956C9A734FA4,
	Socket_get_OSSupportsIPv6_m923EC612566AEA217F71397FD8BED111AC951DED,
	Socket_get_Handle_mA1965009F9BACF2047AB982354B00E1C0A95D4DE,
	Socket_get_AddressFamily_m33B7B2581828A024C81CE52DF4287A2447A54D6F,
	Socket_get_SocketType_m61AE4997710B0CE75832B42919A2892F00740E37,
	Socket_get_ProtocolType_mE9C131BE9AEA271B35821FC80C8CB62414E1546E,
	Socket_set_ExclusiveAddressUse_mF5C01EC0BCC18E3BEBC345104C2FA5324254D6FD,
	Socket_set_DontFragment_m2683AAA1C87A0E2CCC426EFA4D8BF5790AA2D136,
	Socket_get_DualMode_m6FB7069091397FB35DE520DADBC6F28A45E6B68C,
	Socket_set_DualMode_mDC9084953B95EBF0B75B69D0E37F7E8B43612C9A,
	Socket_get_IsDualMode_m5F32679545518176E4AFE66901AF86DFA6499655,
	Socket_Send_m2FF02253EFA5AC56C2684594FF0DA4E9392FE4B5,
	Socket_Send_m1ED8F737070D66D68B93B64E09ED9C726AA75638,
	Socket_Send_mBBAB318D0BB5BF0B8FA4C9192EABCC4B179429EE,
	Socket_Receive_mFC7C84096D49297C58D498DB0DF7496967FC9759,
	Socket_Receive_m69B3F392972DFA666F0C869F2349F8486DE472D6,
	Socket_ReceiveFrom_mD95E4E0292060CAD14B9A2FD8C49AB99125227CF,
	Socket_SetIPProtectionLevel_m01CE85FD88045EA923BB9F8506C467883B5C7F52,
	Socket_BeginSend_m05E491600486AAC8EFAF5F4EB0C24B13210D640E,
	Socket_EndSend_mD941F4E5F502FC0EDCA70BB7CB637217320709EC,
	Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30,
	Socket_EndReceive_mF4C73ED2C78731706B7891AB94B7D4EF084476F0,
	Socket_get_InternalSyncObject_m7325FA3D411ED7E590F9E026CE2859CB654B614F,
	Socket_get_CleanedUp_mFEF17F0AD881817F7A8A0B584E0077E968373684,
	Socket_InitializeSockets_mB1CBCEFBB0AC0E6848D38A0EEA33EACDF6A9EC7F,
	Socket_Dispose_m34C079AE162CF588FB9FFA9F76B010DF337DE362,
	Socket_Finalize_mF2575EF924283A62F9064992816393410D7C880C,
	Socket_InternalShutdown_mE1DDB563CF7D94D792F6C2F32FECEBC8270D4E81,
	Socket__ctor_m6F08E0C60ECB2DC6DDD921D729D7BD7AEB6A633F,
	Socket_SocketDefaults_m3AE1F652A9ED2E599A57BFDF82EB39C4EF32DB32,
	Socket_Socket_internal_m6EC2025D3A1C29EB966E6FD091C28ABEAB080E21,
	Socket_set_EnableBroadcast_mAF6DE2B827F1D6D57C53981CB89C708B08D80626,
	Socket_get_IsBound_mAA2B548E5DBCC2B693A6DAA612648199C6291A8A,
	Socket_set_MulticastLoopback_m02D0582B9E00D015FC6BAF2B9C3CB601724BDCED,
	Socket_get_Blocking_mBEF4541F893F4ECE9354245BF7E6D8C5118206FF,
	Socket_set_Blocking_mB447A573F44452B55F5D6B6105FD1C55865E0EDC,
	Socket_Blocking_internal_m13B3D6C3A383411BD26F8EED6BCA4C6517E49BAD,
	Socket_Blocking_internal_m4F1F07A40A6FD3CFECC7F7F836B52337C61833A9,
	Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE,
	Socket_set_NoDelay_mB51929BB6C13E4C051C59B62A9C5CBEA3A129D76,
	Socket_get_RemoteEndPoint_mD926D4C2BD8A8B534D992E177D155F7EF8685D20,
	Socket_RemoteEndPoint_internal_mF19F7BFFC08D0917716B7911923EEBAF6588D85F,
	Socket_RemoteEndPoint_internal_m2CBB00B1D82337AD3B4102E0F2AE48E1DA1E7A41,
	Socket_Poll_mF1F23215F0C768A8F891F933221B8D3F7DA53B28,
	Socket_Poll_internal_m325547116F4B37F9B7016B64A19846CEA0DE5753,
	Socket_Poll_internal_m0EB7285E1AE8CC42F200FDE13C8991EE4659D276,
	Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7,
	Socket_Accept_mC12CAE783F87CD63E6FF83D55F1973C2E5E7BDEC,
	Socket_EndAccept_mABD175ECBE095DE93D623259610B1332911266A1,
	Socket_EndAccept_m005E845E347FEA71E41BDB1AFE9E5A39BC393D04,
	Socket_Accept_internal_mE1FADFF816972DDE8AD35519E92D69B4F9D9109D,
	Socket_Accept_internal_m52A4190380D5DFBB0AD1F4AB6D2F0A49850FD3B9,
	Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30,
	Socket_Bind_internal_m3E7154040E7446689883A441D55456E7562F2E47,
	Socket_Bind_internal_mE7C0A0306E3AEC46ED06CAE920C799B7B92AC8E9,
	Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540,
	Socket_Listen_internal_mF351F058B339E905D497FE522C2E74080A444D10,
	Socket_Listen_internal_m9B7599632C30804400D22A556A758D4A0B02F145,
	Socket_Connect_mE3F6A0F6D9A997E44F4F6EA04E7C3EFDAE35EE0A,
	Socket_Connect_m06F14E236617A4BA22146BEC4334E24ED39D8536,
	Socket_BeginMConnect_m97B0959875F9DD732C1B90D08E00018D383AFFE4,
	Socket_BeginSConnect_m91344C94E64D4215A8CD2F6FD63067DBF32D97F7,
	Socket_EndConnect_m0CFDCA9629EAF8E764A7EB9D61C9DDA83988209F,
	Socket_Connect_internal_m907A5990A8F440BA59CE041CF7881FF9C2D7E8AE,
	Socket_Connect_internal_m0CF19A6266F179B65384D3FBB8B0D0792E055A97,
	Socket_Disconnect_mBE602342DA1C63767110C02BEFF1C45E45037619,
	Socket_EndDisconnect_m3CA2C23A595DAB49DB71A18E24E98BE63ABB09B9,
	Socket_Disconnect_internal_m3CE5479D4ADE00354F21C2B6B40B7DE4C30F8068,
	Socket_Disconnect_internal_m97B2794B8CF301AE28B1151EDF0CE8F810636D0E,
	Socket_Receive_mC87CCEF55EF312730B08629F4EA24F4D4311FFC3,
	Socket_Receive_mA822C50F868C16CA33ED8BEAC5AE2F7D0018F345,
	Socket_BeginReceive_mAB09C0EF50CCA20B368771E0FB56F788A10C5C21,
	Socket_EndReceive_m76672177BFAD926BA214D664EEE7827AFEA0693B,
	Socket_Receive_internal_m55FA162A25E221777277E755B9A3B4D8BCB1CDB0,
	Socket_Receive_internal_mC2987A1339F02BD493366DF0C3FD9A63BF9F0268,
	Socket_Receive_internal_m0DBCB62396D083723FA9E43B847278DE07591E59,
	Socket_Receive_internal_mED8291F42882678A0E7D65A7697E890FCCDA9A46,
	Socket_ReceiveFrom_m7115D6E24DEF6BD3BA6A476E18C36D023F2EBEBA,
	Socket_ReceiveFrom_m743C33ED62910EE4B6850400AA0FE7D44337C112,
	Socket_BeginReceiveFrom_m2172BFF2AE75E731BF10D25964401F7C6A3F6F29,
	Socket_EndReceiveFrom_m534A60EABD1A1FCE593901355FC7E840C94B1AA4,
	Socket_ReceiveFrom_internal_mEA5003975D91AB2F18A6CF7E6889FF0D3D139B31,
	Socket_ReceiveFrom_internal_m43D3E1FA721210154B38D2EF7F2135625C61A613,
	Socket_Send_m4652C4C32F15F5B18A7AF28086B87C074844AEA4,
	Socket_Send_mFBF7C653CB5BC6BA91F4415378F34F13897259DE,
	Socket_BeginSend_mA6C244A07735EEA6B4DA335545237F0FF42F8A7C,
	Socket_BeginSendCallback_m2E4DF0CAEE665252159EE10E8EFA46463980F5CF,
	Socket_EndSend_m58F48E67A449034B31B52F7EF2F46856FBCE0310,
	Socket_Send_internal_m23758BA709E17D55050E23A679DC8149B2944C1A,
	Socket_Send_internal_mF991C3643BB5E358474652659680232787B12927,
	Socket_Send_internal_m1D6B90528CD689D0E857CAE776E573E178362D37,
	Socket_Send_internal_mC7309CA15FA175E000DCF98711950B46D1250D8C,
	Socket_SendTo_m95926F192663BB81CC267386B93F6D8E57FDF434,
	Socket_BeginSendTo_m964B09576701931F5DE9CCA8370738B0BFC56831,
	Socket_BeginSendToCallback_mF313F700ACF73A6E01F563710704BDE606083496,
	Socket_EndSendTo_m8A51FA7E8F6D65435DA47F1DD7D74C9695884CF1,
	Socket_SendTo_internal_m8F2A58A31FF586CAB14F7100973E83A1D9C6BEF1,
	Socket_SendTo_internal_mC9ABBD01ED1CA808E364521D5795351722EDA18E,
	Socket_GetSocketOption_m0810701BA5C30F393D05386BA150A87CA905710D,
	Socket_GetSocketOption_obj_internal_mB80B47214B569FD08FD3D83DC4AD23F30EF0E1F5,
	Socket_GetSocketOption_obj_internal_m7C531C9B7D40C1730EBEDF12EA12559B3AC6A95D,
	Socket_SetSocketOption_mDD4791B69C63D5156C5F733593D5888EDF7A7C93,
	Socket_SetSocketOption_internal_m4CD6A4EB2E6B43A654E7393C15E6339DA717699A,
	Socket_SetSocketOption_internal_m79AFC3FAB34B01E7749886DF7D3DFF10223953AF,
	Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09,
	Socket_Close_m77322C5F6C16BCE94498430C920EC1EBCF8BC8A2,
	Socket_Close_internal_mDC62C0CC0402756EC2AF208253EA987D38C1C97C,
	Socket_Shutdown_internal_mDB5B705BAEE0962DF070CC97E4569277C1BAB3C7,
	Socket_Shutdown_internal_mEBB0DF91C761500931F2A3D7CE3103ECE0553060,
	Socket_Dispose_m24CC84D16DA94C78C460A3E2EC7068273E40B710,
	Socket_Linger_m8BC490F462914AEE570BB8C5883DF5B70967D823,
	Socket_ThrowIfDisposedAndClosed_mCDA9C2603B4166665F14BABFA4FB3423508DEAA7,
	Socket_ThrowIfBufferNull_m038FD1656C891AD4AF2883AFBA1084CF95286252,
	Socket_ThrowIfBufferOutOfRange_m06C012616B2650E2344CFADF8D7DEDE3A1F6272F,
	Socket_ThrowIfUdp_mCC07B58F7A539B485A355A28D36174F6F1CC3FEA,
	Socket_ValidateEndIAsyncResult_m509940324A570251B33301A59DC3C01B5DAB944A,
	Socket_QueueIOSelectorJob_m5BF661B575E897D2F8A03CB1A189674EA977EFB5,
	Socket_RemapIPEndPoint_m3EF595CE2E7BCDF1CBFEA02E101908877FF90706,
	Socket_cancel_blocking_socket_operation_m14366BBE65240C8833ED22AE8DE299E771FA3058,
	Socket_get_FamilyHint_m9C8E3739473BE1AF6E8FDD6FD3579BE5A9675224,
	Socket_IsProtocolSupported_internal_m5C586C81E1F7B545669E57AE413AF07A6400B907,
	Socket_IsProtocolSupported_mD0EC79AB174CC92B01EEC866E6837CCF1B330A37,
	Socket__cctor_mC1130CB5B4FF386DBF641F72A301C65142EF6AD2,
	U3CU3Ec__cctor_m189E5660A587DF9A7CA7B87434E92DB20CFE6DD5,
	U3CU3Ec__ctor_m421B31AEC17C6130D0F77B8823F05048643B8A2C,
	U3CU3Ec_U3CBeginSendU3Eb__241_0_mED3657F5D9278E1CF28553337FDB5BB377EDFCF4,
	U3CU3Ec_U3CBeginSendToU3Eb__253_0_m325D72F5BDA8C4CACF9D6AEBEE6D9C610ACA8551,
	U3CU3Ec_U3C_cctorU3Eb__309_0_mA1E4E9EBD8C59F3452F3C291A116338BD04123B3,
	U3CU3Ec_U3C_cctorU3Eb__309_1_mFE31CFBA6F2BE4A47926572EE46D8368D4BB6D3D,
	U3CU3Ec_U3C_cctorU3Eb__309_2_mEEA9AFDA35A729986A198CCC9785205946F10425,
	U3CU3Ec_U3C_cctorU3Eb__309_3_m6DC581C3C4C027974F71C41B8E3AD0E9C64405BA,
	U3CU3Ec_U3C_cctorU3Eb__309_4_m8D8DA2E8BC6EAD867C7FB95D126E3C0B8CBC2630,
	U3CU3Ec_U3C_cctorU3Eb__309_5_m124EFFED3D1E44E4C1A5F5A1E586AFBEC6EB42D1,
	U3CU3Ec_U3C_cctorU3Eb__309_6_mC8539B0D721812B995C06217EC22C578EF76E01A,
	U3CU3Ec_U3C_cctorU3Eb__309_7_mB19175AFC1F2BB2A749184A61DD84BBB76135E45,
	U3CU3Ec_U3C_cctorU3Eb__309_8_mA9F0B14FEA60E5CA4D29CDF2F8BBABE4CEDEDB5F,
	U3CU3Ec_U3C_cctorU3Eb__309_9_mBA3DCDDE64656E216E23EC585A364C692370765E,
	U3CU3Ec_U3C_cctorU3Eb__309_10_m7AB7D356C3FD8B2B8BF0C280B14675A3D597501F,
	U3CU3Ec_U3C_cctorU3Eb__309_11_m54D0A1A002B2CA233DAA2E13818D0B514C750156,
	U3CU3Ec_U3C_cctorU3Eb__309_12_m6A2545287216688A2636B385C1E550CA4C6E12F7,
	U3CU3Ec_U3C_cctorU3Eb__309_13_m557F5E3E30E4AAF3D185278BAB5EEC27AA33C657,
	U3CU3Ec_U3C_cctorU3Eb__309_14_m2E7D16D51C6DFA7706CFBC0A906A81BA94CA2932,
	U3CU3Ec__DisplayClass242_0__ctor_m37038B01FD9E383353E2D3618C0E6C1CA443298F,
	U3CU3Ec__DisplayClass242_0_U3CBeginSendCallbackU3Eb__0_m2D1B9158103E534CC52214422CE5B043F4CEE08E,
	U3CU3Ec__DisplayClass254_0__ctor_m2859C076248F2A57503930ECD1D797CA1CFF5ECA,
	U3CU3Ec__DisplayClass254_0_U3CBeginSendToCallbackU3Eb__0_mB7A594123AD3383D0A57E5F3232D3CB08ADC3C4A,
	U3CU3Ec__DisplayClass298_0__ctor_m24532A068CEE2B919D0FD16BC70121982187EB94,
	U3CU3Ec__DisplayClass298_0_U3CQueueIOSelectorJobU3Eb__0_mF53A22B944AA6C92B918DF06ABFAF923D53824F9,
	TcpClient__ctor_m152C74CC5F0D393E707CF031F18B0E04422936BF,
	TcpClient__ctor_m1B221687523D22D24C3EAA6C804E13D998CED343,
	TcpClient__ctor_m4891C4797051AF6B75FB846DC0E09BE3527A2188,
	TcpClient_get_Client_m7EE266557B305926B1A845F3C75E2532899D4395,
	TcpClient_set_Client_m932460A905C55EC815A5471D37C2EF7DDE63EFCB,
	TcpClient_get_Connected_m49D1BA8F64A3FFA32A6E77B4A26E9AAA4822500C,
	TcpClient_Connect_m6E8AD9DC60C1B44FCFB27223E88F21AC78ABCC23,
	TcpClient_Connect_m2B56642B9B1E9767444A7BA29AB12456AC8BEBCC,
	TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B,
	TcpClient_Close_mD5023AF41D41A87FA5A946881E330E8E34F2DEFE,
	TcpClient_Dispose_mD44F6453D48E9FB528D143BB27D384557AA52106,
	TcpClient_Dispose_m621D5436D4091ADC22194DEB8774FB50E9CC7DE7,
	TcpClient_Finalize_mFBDA36FFECC5373631CC601903380AFC596608DA,
	TcpClient_set_ReceiveTimeout_m36276E390F5FDFCC5E170BC187B36DA66869239D,
	TcpClient_set_SendTimeout_m323916999A477F938121A52B1192D6B94DFC3F41,
	TcpClient_set_NoDelay_mEBF30E23E072AD94F1FC9F9D2AD0134016FBE492,
	TcpClient_initialize_m50BEA4060C1628784A0B66E2628A0A8110ED3B97,
	TcpListener__ctor_m2E1AEE3C98472DD2BB2439725CF0AF62505971B7,
	TcpListener_Create_mF6BA5823E4D97C8F594A061F4D8AD4F7E54B55C0,
	TcpListener_get_Server_m47C4797186DDB94DBDADE5FC567B56BD292D88C6,
	TcpListener_Start_m7F59BAC98F3819580CE5F2D911513D42FF21F101,
	TcpListener_Start_m6A01A932A65F9C820E69485E28385CBEB777ED34,
	TcpListener_Stop_m9087121EA1A353EA84DEFE49BFBAE810155AFA5A,
	TcpListener_AcceptTcpClient_mA55444BAE76E163D81C41D0D46D07F67662E48C2,
	UdpClient__ctor_m16B5D497B74A33323D10285538BF31147B2E5984,
	UdpClient__ctor_m6E7C38C5468E7D71AAEABCD93CBE81E8DC25EE8C,
	UdpClient_get_Client_mE07E2E6ECA14E7B0631E71322216FC4F661AC4B0,
	UdpClient_set_Client_mB47A406C236E22ED96CB490005991BC1BD794C05,
	UdpClient_set_MulticastLoopback_m4A15F688F88CB143B9DB7DA53872169852854A76,
	UdpClient_set_EnableBroadcast_mEF85C1CC00B369A1E664636A05975FABCE1A1055,
	UdpClient_Close_mA85B745647A63FDF485BEF7C5E59567C0430695E,
	UdpClient_FreeResources_m4E063109A69CA8C0ABED9BFABF65131E09FD1E49,
	UdpClient_Dispose_mA3999F7BD0780AECDC27B2274BFC61B56C163ADB,
	UdpClient_Dispose_m909F37E4E1B2FA1B35452459E1E9655519096509,
	UdpClient_CheckForBroadcast_mE4313D0D2053DA5AD2128E2F8F3E048CDE639057,
	UdpClient_Send_mA99A0DDFDD01BFFA3B7C99E62928D72C80D90543,
	UdpClient_BeginSend_m93531B72BD7DE277D00D75E5242354169E1BFC4D,
	UdpClient_EndSend_mA5A0412117CCBD69560D591B5C6D9736A5094C0F,
	UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302,
	UdpClient_EndReceive_mF25D1BFECC2581E32DB6A1202EA4670B20580A4F,
	UdpClient_SendAsync_m63BB8F04167BA24167E5B1F0B54574EEBF5D90B1,
	UdpClient_ReceiveAsync_mFE2D5A49B3724ECD0EBA5CA294EF5B89A1666103,
	UdpClient_createClientSocket_m2C189F4006CA33C16101017209A6107503927A78,
	UdpClient_U3CReceiveAsyncU3Eb__64_0_mA5C8FA42AB232DCB9C72F69954E39562D3AD80E3,
	UdpClient_U3CReceiveAsyncU3Eb__64_1_m25A655348C6DB3BBA54428936A734BE0F484CB7F,
	UdpReceiveResult__ctor_m8BBB681664BA7DE9BBBBAB83790B79DB7A11622D,
	UdpReceiveResult_get_Buffer_mE4C6D3176994CE67B2F457D85B5CF9D710809BC1,
	UdpReceiveResult_get_RemoteEndPoint_m7FEC108ADC0081AAAA70FB21E070DE358DE7084E,
	UdpReceiveResult_GetHashCode_mC060461B3CAE3B0D052C81DE13EB6DBAC75DE90C,
	UdpReceiveResult_Equals_mEDF64AE5BA4817B82D0AF66C9FB57AA54B2E3B81,
	UdpReceiveResult_Equals_mA0E30DD7F34BE3921D005918E9DB8C797AC1605D,
	SafeSocketHandle__ctor_m7A417F105464C193628218AF4E93B797E8888480,
	SafeSocketHandle_ReleaseHandle_m2DF10268C0814FED4266C031FD32D58B31CA5409,
	SafeSocketHandle_RegisterForBlockingSyscall_m648E07077BFE30CFD66FEAAFD0AE595F8BD67E60,
	SafeSocketHandle_UnRegisterForBlockingSyscall_m2F2BD3A6CFE6CEF5587ED4D8EAE441CBC0E945AB,
	SafeSocketHandle__cctor_m53EFD60FADB351C93A9ECAEF0F7F41A6C5D79A84,
	SocketAsyncEventArgs_get_AcceptSocket_m3BD8876BC4B1859E1E7956AD9B3E0227B9E77F75,
	SocketAsyncEventArgs_set_AcceptSocket_m7EEFF83859DD66A54E98A34FB7000DD670F1B1C1,
	SocketAsyncEventArgs_set_BytesTransferred_mFEA9222385B83E3CAD5546E53F1C3F81C5EEA4AE,
	SocketAsyncEventArgs_set_SocketError_mFCDAA84BC41D0B28B2517AFD1DCBADCFAAE29499,
	SocketAsyncEventArgs_Dispose_m1CD7F7378013D412BAEAAE4E96CC7DBEB54A7168,
	SocketAsyncEventArgs_Dispose_m2E653A7ACE155AA1533C72CF1C07EDD2258DB39E,
	SocketAsyncEventArgs_Complete_mA77F4405B5C9CF2AEE3CA78A8E4BDECE9F6B972A,
	SocketAsyncEventArgs_OnCompleted_m330F7F5F140260C0AFCAC74F160C2EF9BA23AAC8,
	SocketAsyncResult_get_Handle_mA1FCAC625E2265493F931EF8C717E50BE7921ABB,
	SocketAsyncResult__ctor_mA600493FFA7C8A3553FA39CBFF18CF8A8F890E0F,
	SocketAsyncResult_get_ErrorCode_m0888A12E8AE75A62CDC76F139829240215E8B6DE,
	SocketAsyncResult_CheckIfThrowDelayedException_mA857B11642F239B6FE95EC9E57F99E01F114FCAD,
	SocketAsyncResult_CompleteDisposed_m7D814AACBE449F4F68500B3594EB71E755FCDBE9,
	SocketAsyncResult_Complete_m956632BDCB195816D5BD8F57B6493329C10DCD32,
	SocketAsyncResult_Complete_m7D9B9A60DFD7281D5EE7FD6EFE07BA4E9CB07CA1,
	SocketAsyncResult_Complete_mDEB3A49AC0BAC2FAF31ABA8523371C5B1B813776,
	SocketAsyncResult_Complete_m16E71358A4FB937FCC3DC080EBB00C4C350DA31C,
	SocketAsyncResult_Complete_m2319BDC7E4BBE78746850481BBD1711916949DF6,
	SocketAsyncResult_Complete_m2644D553368DA3CF95D49473AEA8B656E73463DF,
	SocketAsyncResult_Complete_mC7A67AFEC2C33BD0D7E191EB6AA0658C1A53907A,
	U3CU3Ec__cctor_m0096D8732373ECAFCCC3553EDDE54F1CB40D6EA2,
	U3CU3Ec__ctor_m6E4EE081CCEE6E72C143685C5612BA492B00F1BA,
	U3CU3Ec_U3CCompleteU3Eb__27_0_mBC254448542DAB8EBC47160EB33A36700D1A32E9,
	AuthenticatedStream__ctor_mFCFA51BD3C5544DC6390CF5094E1C0DBA133C172,
	AuthenticatedStream_get_InnerStream_mB7DF06B2F011B3F9F301D068438BBD01C24DCDDC,
	AuthenticatedStream_Dispose_m5610A806886C36698AC932D21F5FBDCAE9FA3E14,
	NULL,
	LocalCertificateSelectionCallback__ctor_m7CAC68C30F63B889613824039FCF827F78475E5F,
	LocalCertificateSelectionCallback_Invoke_mC560E6706F8520A856513EBCDE45A2B8F5ED6A3F,
	LocalCertificateSelectionCallback_BeginInvoke_m1049EE3CAAE57029C936479E2C2F140E0330523A,
	LocalCertificateSelectionCallback_EndInvoke_mCD6CE0AB7C4F4D981BDA29ABCDAD5559891B5112,
	RemoteCertificateValidationCallback__ctor_m830361B1E3107AC75A34E07042B4A2567B331E3F,
	RemoteCertificateValidationCallback_Invoke_mD2863E7241D3768F16B3F85589623B4397EDF86F,
	RemoteCertificateValidationCallback_BeginInvoke_m21A4B4335CCCDF893A38C75DD1171A31B466A687,
	RemoteCertificateValidationCallback_EndInvoke_mB5C28FA15AC0883EC65DBD8E6FC5610BF91B9140,
	LocalCertSelectionCallback__ctor_mEA7E533B4C8CF46131F4097785E653C9DF1E2A85,
	LocalCertSelectionCallback_Invoke_m710A68C0A2D13DBB5E8434FC6E0ED75F90E7C176,
	LocalCertSelectionCallback_BeginInvoke_m52E115683F283EFE63006DC899952C6958350285,
	LocalCertSelectionCallback_EndInvoke_mAC5037A64623906D66FB80410DF916D3A47E09C4,
	SslStream_get_Impl_m29F58D35745DFC013BFAEFCF3952391234D8BC9A,
	SslStream_GetProvider_m745E2C52DFED4D4045613A88E00B3EF1E20A7033,
	SslStream__ctor_m1DFCBD4F4C88F181B1F23EF649F4BAE71EC37580,
	SslStream__ctor_m4DA680B7D511456DB5789F62EC80117AE5E16532,
	SslStream__ctor_mA434A097CD9B052AC8510C8B5BFF9E5E6B541DC9,
	SslStream_CreateMonoSslStream_m2DA6B0A589490351B37010F5BCF2DA3D734FF266,
	SslStream_AuthenticateAsClient_mA05DB2C8245FB47D1A8258BD68536D498A1BEE08,
	SslStream_AuthenticateAsServer_m18D11C1C45EA1C59C392FCE79CCCE0E7F40B1F96,
	SslStream_get_IsAuthenticated_m273C64C4DF6FFD4E9772EF714EFA982D4C0A9D83,
	SslStream_get_CanSeek_mD0CB66ABEA39EE6BEAB9BD53ADF03476FEA2E266,
	SslStream_get_CanRead_m49799854D297DCF71A497F8858B64DDD1C10BF00,
	SslStream_get_CanWrite_m25569C1704B5F54A27234D1B9B69647D5018CCEF,
	SslStream_get_Length_m1A4DBA93F0D140FA33892E0193DDE8C6E4175763,
	SslStream_get_Position_mDCFD4EFB697DAFF90BA366ED8519487027E21671,
	SslStream_set_Position_m4D2093D31E1557590786FA41197CD585CAC79E3A,
	SslStream_SetLength_m76EF6CF39E831CF1C3E0DD70598938B46441504C,
	SslStream_Seek_m53AB94845DF9E4A126414BC25E024053D43627D1,
	SslStream_Flush_m409B5ED6ACB6B2496DAF6725C6CAAF5D51BEADE3,
	SslStream_CheckDisposed_mFCE61CD9DDFDF97DD850B2EAF0908EFE50008DE4,
	SslStream_Dispose_mFDB97E2E26CD194DBCBE47710EE5402B2298B919,
	SslStream_Read_m4FE23134855CE89200771C5A8851DDDDDF182FF3,
	SslStream_Write_m262369AF62D8AA0CCC4EAC5BF3274693AA27B1BC,
	SslStream_BeginRead_m4D96895D1B0C302EF4D52681FEDA82D1E53E7C3F,
	SslStream_EndRead_m918E3DCEB2DE563A21B042D7FF530E96EBA8EF51,
	SslStream_BeginWrite_mB8CC50460AFEF640D3C36C68938EE921F3E11844,
	SslStream_EndWrite_m796ACEAE821536F59642EDC2748B2A5F232953AB,
	IPGlobalProperties_get_PlatformNeedsLibCWorkaround_mB5BC19873B5F06D8F8EE23856B7736ECB9C7722B,
	IPGlobalProperties_GetIPGlobalProperties_m9754DEEC16047B231DA6208C8AE6317BB0F3D8CA,
	IPGlobalProperties_InternalGetIPGlobalProperties_m74758C4E4DB69BA34CE6923E5C640D335BC6E014,
	NULL,
	IPGlobalProperties__ctor_m1C3267FBFEC8DD72CC56A4C5EC19C76AA7680B6B,
	NetworkInformationException__ctor_mBA60EDC47C5B8373C69C2BB998014CB1B99319FB,
	NetworkInformationException__ctor_mFF36F090C8A2438A1C8B75BA60B47933B13DD876,
	CommonUnixIPGlobalProperties_getdomainname_mF48E7AAE74313578ACC25E8C9FBAAD66F280DDCD,
	CommonUnixIPGlobalProperties_get_DomainName_m8F359828BAB5DC5F338C2384908E2D34799BAE86,
	CommonUnixIPGlobalProperties__ctor_mD26E185C9CE6B7E2D0E6B11FDB9BA7C73429CDDF,
	UnixIPGlobalProperties__ctor_mD82447A37FC171F372C28E442583745EB4D0E744,
	UnixNoLibCIPGlobalProperties_get_DomainName_m472CDAA87DD800EE30A6C2F3154F836CD067538E,
	UnixNoLibCIPGlobalProperties__ctor_m9FFB83304274EEBCE61CDE8E3E0F86B4B04D49FF,
	MibIPGlobalProperties__ctor_m5C3492BED5AC48BA43C068B00D70FF8CC55816E7,
	MibIPGlobalProperties__cctor_m874A8D290A3B1DBFD14A091E479BE2924DFA547D,
	Win32IPGlobalProperties_get_DomainName_mF0BAF6309AF69217DF87D3EB0C44589ED70419B6,
	Win32IPGlobalProperties__ctor_mCCF10D6073FCA3B87D513794539C831D75E8D236,
	Win32NetworkInterface_GetNetworkParams_mC4CE2C65E1AC80E4C2371950E3201D2DE40A62B7,
	Win32NetworkInterface_get_FixedInfo_m5C321EB3F491660D8054D89A57FE8842DE2755E9,
	DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_m1FBAB2FA8C0B87ADA0523CAA34F9D5230098A795,
	DefaultProxySectionInternal_GetSystemWebProxy_m7BE3F8E1011DD7156B05BEA3264DB8ED549072C0,
	DefaultProxySectionInternal_get_ClassSyncObject_mB2D90511F956EA13FAB810CBF9A4C656E5D56F65,
	DefaultProxySectionInternal_GetSection_mC140525EBD14DF74602DFCA7AFECE376AFADE34F,
	DefaultProxySectionInternal_get_WebProxy_m38F5DF1772271FC6014B56D93654B771D745AB9B,
	DefaultProxySectionInternal__ctor_m0C5C6CB50669D34ED3B3699B39170041383E0005,
	SettingsSectionInternal_get_Section_m109D7450776A48BEFA47FA7CBB521CE6BA0CA5C9,
	SettingsSectionInternal_get_Ipv6Enabled_mA9CA51E8A3512524460E9AC8C9DE920F64C33FB8,
	SettingsSectionInternal__ctor_mED2DFF382A20FC3136B1514D8BD40B520758F636,
	SettingsSectionInternal__cctor_mB44A40867AA454670DC1D71ADE59576183610030,
	HybridDictionary__ctor_m18ABDB797A0591DF595BBDD2A03F1670DDD07AA7,
	HybridDictionary__ctor_mBA75388EDF5456916408D7D3954B6873D50BA2F1,
	HybridDictionary_get_Item_mE16332A6CE6880D436633519FAC3662ED4A89E11,
	HybridDictionary_set_Item_mFFC14A7F4B45807D97503616AF98160061F6B9D3,
	HybridDictionary_get_List_mA5314524D5C411AFB165F07D860010DC0E11D28E,
	HybridDictionary_ChangeOver_m41ACD333E29ACCFF1C0CF45DF9E09E84EA28F173,
	HybridDictionary_get_Count_m170B942CEB7FA1B42BFFB246D72B583BD1397738,
	HybridDictionary_get_Keys_m1ED05F9E3965475BA4F787CD61FC93A27AFEBB45,
	HybridDictionary_get_IsReadOnly_mB58FCC395C6CC8A569B0277DE6D0B02550E786E1,
	HybridDictionary_get_SyncRoot_m3A81A716ADC2A40444AF517E38EA943FDC72AB97,
	HybridDictionary_get_Values_m23B45F48BDCE2FB8A48D818C9868A80A4CE2FB93,
	HybridDictionary_Add_m8022C90B2CAE2484ED0D740734EA4E512D8B130D,
	HybridDictionary_Clear_m9C53B8C32A090321B9D928B0F2B8ACDE1BA8591E,
	HybridDictionary_Contains_mF8C826101599A5F6EDB300954BD90FDEC4BCA6D6,
	HybridDictionary_CopyTo_m130965C0084284EE331912B40157958A1075E4A1,
	HybridDictionary_GetEnumerator_m02B2FC70ED4C2E91818DC8EAA3F3602B0DE81437,
	HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m4B6D49D2814E11C16C7005F84DFC58333BCBFAA0,
	HybridDictionary_Remove_mF87829C60C964F938DE42D453582712B726A2CD7,
	ListDictionary__ctor_mEB7BEC57F72A27168FCCE46DAC90CD5B8B7088A5,
	ListDictionary__ctor_mD1A7D146747D4E3AD93C261C1783CE34B10E48EC,
	ListDictionary_get_Item_m34D2DAE21AFFB6B1801EDE8A6998732CD9B45605,
	ListDictionary_set_Item_m89155730D3E404A1270CBDE7BEEC99138FBC64A0,
	ListDictionary_get_Count_m4CB9ACB21730241E566764AAB76B8B2A3D72418B,
	ListDictionary_get_Keys_m373CB050F926332B5B29A2E0A28708CE12D393F1,
	ListDictionary_get_IsReadOnly_mD2FC02FAB99A9FA7FA8A69F5CAB8E5887AAEC0CE,
	ListDictionary_get_SyncRoot_m58A889327021D843C7EB9171BD6B0D1E482C8BD7,
	ListDictionary_get_Values_m57265648B196A12231439F5544E3CBDD6AD4ACB3,
	ListDictionary_Add_m2204C61650D1B23A093627DF4D87009A7E3F9EDB,
	ListDictionary_Clear_m9D51C37F441D6390E7FF8B633EFD144F4771DB1E,
	ListDictionary_Contains_mA832E669186A7B91FF5819A535F8D394C963C508,
	ListDictionary_CopyTo_m9B1961C99A5B80996E42431630907C6BC02627A0,
	ListDictionary_GetEnumerator_m17E264D47385C88C7C366177CE8127CE933B0F9D,
	ListDictionary_System_Collections_IEnumerable_GetEnumerator_mF0DF8988C2CA6D5D493A61C502F20DA7879FA8E3,
	ListDictionary_Remove_m8CDD8E6A5B18DAC6446C1D93BADEB0A804AC9C5E,
	NodeEnumerator__ctor_m61652E6AF76A5460A6F4EA14BF97B982B7BB0261,
	NodeEnumerator_get_Current_m08DA3FD558CA771BD75B9C9A54FE681EDE668D25,
	NodeEnumerator_get_Entry_m5C0AAD879BADE3838D42B8525084C8C5DF96C56D,
	NodeEnumerator_get_Key_m83C059C6F52DE85B2E1605051400F3751534F8FF,
	NodeEnumerator_get_Value_m8532A492ECB3CE11B557109057E81DD2175070C7,
	NodeEnumerator_MoveNext_m111785D3C26CEB364566F3E517B3EB7528940552,
	NodeEnumerator_Reset_m66F3E60AB0A5AFCB3B3A8C37399B5357098BDD2E,
	NodeKeyValueCollection__ctor_mBF0291B806BB05362A17B81EDA63C226185DCA6F,
	NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mCC33404006DA28BC9202556B1D653706C914A146,
	NodeKeyValueCollection_System_Collections_ICollection_get_Count_m9CCC8AA8BCDAFD60ACCD94566195CF609DED32DF,
	NodeKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m4C48DE5210CB2F1942942B639A14FA49955732F9,
	NodeKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m338360EE5BF9F49F6AD2458E9C24D7617279B6CF,
	NodeKeyValueEnumerator__ctor_m774CF727E707A8DADE033449AC4AE88A69087236,
	NodeKeyValueEnumerator_get_Current_mC558946649A91AC239AEE435D9D0AA021AD6B971,
	NodeKeyValueEnumerator_MoveNext_mB9B2B50D92E0CEA58D8C98D54115BFC91E17B48B,
	NodeKeyValueEnumerator_Reset_mD407B8AC28DADB9B4A16EEEAC17D8C929FF4A656,
	DictionaryNode__ctor_m824EFE3D79F05D11FE0DE6FD5491D2FB1D382619,
	NameObjectCollectionBase__ctor_m97EB64FF4F1733FB7BA9C6427EA871813AD49C8C,
	NameObjectCollectionBase__ctor_m3A2420574843F0567355F3B2F79D8BB4229580B6,
	NameObjectCollectionBase__ctor_m1C0BA736F4454310BEAAB54CB2307F905C1A1F8C,
	NameObjectCollectionBase__ctor_mFC42544A14AA22758AB189CD5BCC8FE563A9569A,
	NameObjectCollectionBase__ctor_m0995BB1255888BA4156EF35F69462ECDEBB39C13,
	NameObjectCollectionBase_GetObjectData_m751D688171C6E676A6778036561E47AD1E0BD772,
	NameObjectCollectionBase_OnDeserialization_mE380D49EDB18F4456CF66DD8790E289BB3D091CD,
	NameObjectCollectionBase_Reset_m3446C8F69C1CD6228C6AB5CE0CB1EB90342B4C4A,
	NameObjectCollectionBase_Reset_m6D9FEB20EBE98529CF3A8A66566526F965D0FC03,
	NameObjectCollectionBase_FindEntry_m718AABE1DF5F139F552DAA073FB2863EBE4AF77F,
	NameObjectCollectionBase_get_IsReadOnly_mACD1AE0A27A5AC2E06C73AE37B012D2DE43A1FF8,
	NameObjectCollectionBase_BaseAdd_mD6FC01196B5CCF6591834C8A9F183B477202B129,
	NameObjectCollectionBase_BaseGet_m34B277D6BF8AE4C4BCCDA290D62897C9739EA626,
	NameObjectCollectionBase_BaseGet_m6C79F9B2DF510481D1D71FEE71782074781B8E71,
	NameObjectCollectionBase_BaseGetKey_m695607B27E3D7C591C5E630DA5DC611C47B195B7,
	NameObjectCollectionBase_GetEnumerator_mAAFB01528169706D8E604D3EA8C9CE9EDAB9B3FD,
	NameObjectCollectionBase_get_Count_m55654BD7ABD342E64543B6B34A0ED2E55D14172A,
	NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mAF83DFFCF913CB0EB4EA054599CFBA83B285B4E2,
	NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mDAD72AF014EA323F18F7E6C4DC71DEE13A1CE909,
	NameObjectCollectionBase__cctor_mB31DAEC0EB0A04003468496FC87D42812F0A0691,
	NameObjectEntry__ctor_m995C545D6465499656D27A10071FE7C670DCD6A1,
	NameObjectKeysEnumerator__ctor_mB9768A57865CD35FD66913A54BD288CD9D6036F3,
	NameObjectKeysEnumerator_MoveNext_mEA36FF36EF6F1956ED9F9D6D8559A22482760F52,
	NameObjectKeysEnumerator_Reset_m150D4F13AFA8D2D5D6E26B0A8C05FCE847C02FE9,
	NameObjectKeysEnumerator_get_Current_m140DD35019E2A824900B7F4A9F116E8AEB80256F,
	CompatibleComparer__ctor_m26DB6C338A8491558326D0F472D432EAC4D5D3D4,
	CompatibleComparer_Equals_mBB2FF4E0B234C0A1854821B349899246FDD37E95,
	CompatibleComparer_GetHashCode_m02DFA8D6B5B49382CD4FA659D2B7F8C7E9000A6B,
	CompatibleComparer_get_Comparer_mF8B7EDA05E675046EB7BF2E6DEEFBAE1C2AA5E2F,
	CompatibleComparer_get_HashCodeProvider_m2CED6D7A8ED865AE214D806F751C7F17BD24BED3,
	CompatibleComparer_get_DefaultComparer_mA4978DD07C60DB282096F4C5C8E66D7D935C83CB,
	CompatibleComparer_get_DefaultHashCodeProvider_m0BD9F3BFCB9AD8D80E14EE483C42A81CA36A9D20,
	NameValueCollection__ctor_m778D8601E84C12D4EABEAA3A8B495FB92A953909,
	NameValueCollection__ctor_m5E1391BA01E5D9BAF25A865025F031283B05AC62,
	NameValueCollection__ctor_mC65E70EA2E216395614CCAB82401B9853AED94AA,
	NameValueCollection__ctor_m5BB309F095815D835ED9E9BF73266383892215C3,
	NameValueCollection_InvalidateCachedArrays_mBBA5CF68C6D8E24D304B2A6C94B423702BE024F3,
	NameValueCollection_GetAsOneString_m701748B8F46B509BA82DE9C72F7EC4E0FEEC664F,
	NameValueCollection_Add_m2BA01C700F8C0A5A2F6550DA7298887A4FE5C249,
	NameValueCollection_Get_m300E47F531EE449FC72B6319D6AC7423AB9E991C,
	NameValueCollection_get_Item_m2A6445E94FF2B24C9DF6190767D14E7920871CDC,
	NameValueCollection_Get_mBB1620F0B7E68EA41CE34FACBF5429DC216817DF,
	NameValueCollection_GetKey_m61FFBF58CDF5769282DED45F920161A89276EAE2,
	OrderedDictionary__ctor_mABFCC28E59BA806C34604B33877C1CEAD0AA9CE9,
	OrderedDictionary__ctor_m278F36318DAF73A39FB15CF0ED1439C36237C175,
	OrderedDictionary__ctor_mEE01676A6098C432B4981481099AE2C305E606F4,
	OrderedDictionary__ctor_mD73E278CB399AD723FEC465939C20D2AAE434B3E,
	OrderedDictionary_get_Count_m55F1F94E727BA49C8D94E7A7088D4C2E4B33605C,
	OrderedDictionary_get_IsReadOnly_mF9796A4518A4F291F1FF0BD4042F5077B75710A2,
	OrderedDictionary_get_Keys_mDE4B67A8DFCD4426DCF60DF7F64DFE423B44D74E,
	OrderedDictionary_get_objectsArray_m690618ABC6772FE7A565AC5BDF5EE2896EB83045,
	OrderedDictionary_get_objectsTable_m0D81CE869362587F2124DAB3CE393E902DBB9F80,
	OrderedDictionary_System_Collections_ICollection_get_SyncRoot_mFCD92778BDB71764F12583F9F27054EF6957CE42,
	OrderedDictionary_get_Item_m4BA1DD5702BF43A016E1785285DE53D4E9902E7B,
	OrderedDictionary_set_Item_mA8C71C7FD9354ABDCB0DBFB1977459680BD748BB,
	OrderedDictionary_get_Values_mF389293625F26A739573D543FB5E21FEC6BDAE13,
	OrderedDictionary_Add_mF2EC1AE8051D89FD384B7D8B25E03E8A1817BC19,
	OrderedDictionary_Clear_mBC338E68811632FEA7E12E1C8CB896A9D17D9D74,
	OrderedDictionary_Contains_m957B6F29E97A93AB5A0AF9272ED0AB65E4401EF1,
	OrderedDictionary_CopyTo_m6D7C307CED28372BFE59C365B4392EBCDE64CFE2,
	OrderedDictionary_IndexOfKey_m9CC5C8BCA6AEAED5821C6A8235DB9C90140291D2,
	OrderedDictionary_OnDeserialization_mC430F0CA656131C627EE2F1920749DD36A745357,
	OrderedDictionary_Remove_m32466C87EC2ED256642300B29B89101DD5227AA0,
	OrderedDictionary_GetEnumerator_mDFBC515FDE9C8A8AE56064C0655C19C3D130EB26,
	OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m47B64CD9FF588025B1C067C150670B2EA363CB29,
	OrderedDictionary_GetObjectData_m64EA42255566CF993C85C556897C5A73263AA5C6,
	OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1B07A96F704FCEDF5A1163E40C894FC77FA6EDDB,
	OrderedDictionaryEnumerator__ctor_m0C688CE7F033E4A145EBC003E5FAC145EC117265,
	OrderedDictionaryEnumerator_get_Current_m3D8DF89674C33D4DEA12463FEC53FCF1780ADE70,
	OrderedDictionaryEnumerator_get_Entry_m378B3659B18D635E114695226BDA8094AFC46E06,
	OrderedDictionaryEnumerator_get_Key_m536FA8AF2BBBED8E47FBF8A3467596654984FF25,
	OrderedDictionaryEnumerator_get_Value_m2199F649E120FDE587520D7DED478C7E0A764DDE,
	OrderedDictionaryEnumerator_MoveNext_m93D8BD7C91EFCCBFDD85BED6FF9130E957652CD1,
	OrderedDictionaryEnumerator_Reset_m6FC4640DE96193B4BD596C9476DD56E034A9440B,
	OrderedDictionaryKeyValueCollection__ctor_mD7596CC3855A371FF8EB8C05B3E886EC52F081BC,
	OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_mE81AE69E425015D650DB16850C8BA51D73E8320A,
	OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m247949B9D6061A309DACDD9CB1D8982C0AAE4E0C,
	OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m2415812982AE4651AE467053E83243522CE5F979,
	OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m0A5A85B1101591DE72343805CD5F1DE725DC0D04,
	StringCollection_get_Item_m6289E4904A6358446DE30B8D06EFAD2FEEB2EDF8,
	StringCollection_set_Item_mEAE8DDA53D08232F6597E9091A7FEB8496BF7FDD,
	StringCollection_get_Count_m4307EBE5F76A894AE550321977CE58DDDFCB85BF,
	StringCollection_System_Collections_IList_get_IsReadOnly_m4A1506C2B94AF66FB47FDCDFC434ACB8488AC47F,
	StringCollection_System_Collections_IList_get_IsFixedSize_m26E281D01AF589C9BB1C09989C6F2AC9AFFE01D4,
	StringCollection_Add_mF15C799896470DD2C807334107ADFD01C8BAF497,
	StringCollection_Clear_mD4940751F46D8B3EBCB148A0A5B14A5AE2FC217C,
	StringCollection_Contains_mF8AD018C19F7760E4693B1A24148F8659C486502,
	StringCollection_CopyTo_m22FDAD087DBC9ACAC1C2BD3614AD448C173F8893,
	StringCollection_IndexOf_m860B2D7C91CE7633F376CB8AB7C46CC1E103EC17,
	StringCollection_Insert_m9847FF62B17A3776A419642922F93D39356198BC,
	StringCollection_Remove_m3FF866980BE6C484CEEB9C42B97BAC6B602AE95E,
	StringCollection_RemoveAt_mA455E99CC2C275AC94FE206E49E87B433257EAA2,
	StringCollection_get_SyncRoot_m2A6A118CF992AA80F7923CE3E6A49D25AC7F730B,
	StringCollection_System_Collections_IList_get_Item_m1FB397E9881B366B0E0BD85883F5F8EE4B0A2E66,
	StringCollection_System_Collections_IList_set_Item_m84FFCB0C0EDF382722E6D86EA441056197E742BC,
	StringCollection_System_Collections_IList_Add_m31EA60F5452738475A79F562CC741336D2C9A2CF,
	StringCollection_System_Collections_IList_Contains_mF385154C4DDD61DDFE3D9273598E212977DDDDF8,
	StringCollection_System_Collections_IList_IndexOf_mDE4B1B0D406BCE5065474EF50EED32663E996177,
	StringCollection_System_Collections_IList_Insert_m97C6AF183F6E33425F90A6746B1B9BCA2EC18DB2,
	StringCollection_System_Collections_IList_Remove_m81D305F7785DD4D4BCDBD5439004D122E26A6A36,
	StringCollection_System_Collections_ICollection_CopyTo_m911BB41A37B6860D0E98A5EF71F0C00797408A77,
	StringCollection_System_Collections_IEnumerable_GetEnumerator_m1620B22B92CB96A6E4AFB2775FBB9D5E0F9666DE,
	StringCollection__ctor_m4358E3B91F6861DD166CAC4BD9B2D353FDA5FA14,
	BitHelper__ctor_mF54F6C422B6D29BDE6700F27D6C4D78E5F13E230,
	BitHelper__ctor_mAE1BAD26F0E1B83966CF8778C43E93A70FB1C6F1,
	BitHelper_MarkBit_m943A83837BE2284CBD8315F433255773B093F0C8,
	BitHelper_IsMarked_m418F59CD7EAD5BB4EB72880D7A74233BB2BE34B3,
	BitHelper_ToIntArrayLength_m1F58654B1EB9756618F21C8BC716D7F5B771EB38,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7C7DB27BC4297A74A96AC53E1EDD3E7415DFB874,
	BypassElementCollection__ctor_m867AF1FE6DBB2768AA199F45039C3E2641A9627A,
	ConnectionManagementElementCollection__ctor_mA29AB3A62411F032C5EF86B16E7633A386000C7B,
	ConnectionManagementSection__ctor_m1112C1BE1A9466BBCDD5C2ED20E80CDE03B46CA4,
	ConnectionManagementSection_get_Properties_m1737189D2D78E81728CFF1CCCEB99E1FFFEA3F19,
	DefaultProxySection__ctor_m41EADE87065B61EDF32F67D2E62F04946886DAF6,
	DefaultProxySection_get_Properties_m6F70EC02D977EB16F86354188A72DC87A8959555,
	DefaultProxySection_Reset_m54AC9323047B1FB38795C9F466C1C01192F75276,
	ProxyElement__ctor_mAFD852231DF0231726E41911409CB2725BE990AC,
	ProxyElement_get_Properties_m8A3EE4A3EEF2571DE4768730CEF4107331490377,
	HttpWebRequestElement__ctor_mE3A4CA43FCC72E10B6C7B4920F429C028765E233,
	HttpWebRequestElement_get_Properties_m531EDF2F56823100C47A9EEE1575143E5EB5463C,
	Ipv6Element__ctor_m3F7DF39E6E51517E1429BAE43FA782BF3AF17965,
	Ipv6Element_get_Properties_m156008D7E5279C50DE4CEDB6D4D3CEDAF2ACF8DC,
	NetSectionGroup__ctor_m566D7C9466957BCE3B8FE2D0EA2582CC2F95F269,
	SettingsSection__ctor_mC5F3D29EDC94D87B0B0542DE3702795441AC3005,
	SettingsSection_get_Properties_m1ABB76DEC7441CFEDD4E7EDF99B8F5C258101254,
	PerformanceCountersElement__ctor_m5A090222699B48BEB5FCC743198613FA8D081083,
	PerformanceCountersElement_get_Properties_m3C7B73AC6E5F5E92426D7DC091A2ECE5CFCD9FD0,
	ServicePointManagerElement__ctor_m61B031714F8498D467B5A0958EE62F73E0C58EB7,
	ServicePointManagerElement_get_Properties_mC1C586246B4FE10AC90622A0CC6A5936D501B677,
	SocketElement__ctor_m428B7094399223FFB9A5B62BF9D8CEA18A00A4C3,
	SocketElement_get_Properties_m9CF8E9B1A9B41B7EC24A4F91CE2E8ECBF317426A,
	WebProxyScriptElement__ctor_mC8AF875E80D96B18AA387148009AE1C630D83591,
	WebProxyScriptElement_get_Properties_m8AD25399F804B2D22BC8312102EBC28A0CAE6E26,
	WebRequestModulesSection__ctor_m0CAB6F207E3B29D65AEA38A6AC191873E3000F02,
	WebRequestModulesSection_get_Properties_m909A3E4C4A61BFCC9D09F397D9314E5F74F3FE44,
	WebRequestModuleElementCollection__ctor_m8B880B0EAE7CEF1CB79CD264A9B6D62AB6A22961,
	DiagnosticsConfigurationHandler__ctor_m185BC74B0225A3E16EEB4164923931B79AAA0CF0,
	DiagnosticsConfigurationHandler_Create_mCC7EF5B43B6913E2429B37EC5923202EBB20AA96,
	ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD,
};
extern void CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A_AdjustorThunk (void);
extern void LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187_AdjustorThunk (void);
extern void DefaultExtendedTypeDescriptor__ctor_mD297D84C0AEF8C2AF0867391BD0FD037D8E6AB86_AdjustorThunk (void);
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF4C670B634C8C86057E939F3DD5EAA4173DAB1A8_AdjustorThunk (void);
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mE26BB774C31A0760EC238B30A3BDE0EE202EF1A6_AdjustorThunk (void);
extern void DefaultTypeDescriptor__ctor_m8542D50B70E1A86255B2C64908C9397B971BBC90_AdjustorThunk (void);
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m6EEBB8DB4E72761D9CB03978D149295CFE2B39EC_AdjustorThunk (void);
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mA5D26F3E5D42548F740BD72B1AA9AE1CE89EC6E7_AdjustorThunk (void);
extern void WaitForChangedResult_set_ChangeType_m779175206406BD72572AF846383AEDEEA44B7290_AdjustorThunk (void);
extern void WaitForChangedResult_set_Name_mBD5B6415D0C2FE4199DE81935EF3FB92573346DE_AdjustorThunk (void);
extern void WaitForChangedResult_set_OldName_m3B96A62F4EBC550A0451A06020CE354C2A64D9DF_AdjustorThunk (void);
extern void AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D_AdjustorThunk (void);
extern void AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A_AdjustorThunk (void);
extern void IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497_AdjustorThunk (void);
extern void IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127_AdjustorThunk (void);
extern void IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F_AdjustorThunk (void);
extern void UdpReceiveResult__ctor_m8BBB681664BA7DE9BBBBAB83790B79DB7A11622D_AdjustorThunk (void);
extern void UdpReceiveResult_get_Buffer_mE4C6D3176994CE67B2F457D85B5CF9D710809BC1_AdjustorThunk (void);
extern void UdpReceiveResult_get_RemoteEndPoint_m7FEC108ADC0081AAAA70FB21E070DE358DE7084E_AdjustorThunk (void);
extern void UdpReceiveResult_GetHashCode_mC060461B3CAE3B0D052C81DE13EB6DBAC75DE90C_AdjustorThunk (void);
extern void UdpReceiveResult_Equals_mEDF64AE5BA4817B82D0AF66C9FB57AA54B2E3B81_AdjustorThunk (void);
extern void UdpReceiveResult_Equals_mA0E30DD7F34BE3921D005918E9DB8C797AC1605D_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[38] = 
{
	{ 0x060000DB, CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2_AdjustorThunk },
	{ 0x0600013C, U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2_AdjustorThunk },
	{ 0x0600013D, U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A_AdjustorThunk },
	{ 0x0600013E, U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D_AdjustorThunk },
	{ 0x0600013F, U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3_AdjustorThunk },
	{ 0x06000140, U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D_AdjustorThunk },
	{ 0x06000141, U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3_AdjustorThunk },
	{ 0x06000186, U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82_AdjustorThunk },
	{ 0x06000187, U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B_AdjustorThunk },
	{ 0x06000188, U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466_AdjustorThunk },
	{ 0x06000189, U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC_AdjustorThunk },
	{ 0x0600018C, U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96_AdjustorThunk },
	{ 0x0600018D, U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381_AdjustorThunk },
	{ 0x0600018E, U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542_AdjustorThunk },
	{ 0x0600018F, U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A_AdjustorThunk },
	{ 0x06000307, LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187_AdjustorThunk },
	{ 0x06000589, DefaultExtendedTypeDescriptor__ctor_mD297D84C0AEF8C2AF0867391BD0FD037D8E6AB86_AdjustorThunk },
	{ 0x0600058A, DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF4C670B634C8C86057E939F3DD5EAA4173DAB1A8_AdjustorThunk },
	{ 0x0600058B, DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mE26BB774C31A0760EC238B30A3BDE0EE202EF1A6_AdjustorThunk },
	{ 0x0600058C, DefaultTypeDescriptor__ctor_m8542D50B70E1A86255B2C64908C9397B971BBC90_AdjustorThunk },
	{ 0x0600058D, DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m6EEBB8DB4E72761D9CB03978D149295CFE2B39EC_AdjustorThunk },
	{ 0x0600058E, DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mA5D26F3E5D42548F740BD72B1AA9AE1CE89EC6E7_AdjustorThunk },
	{ 0x060006D3, WaitForChangedResult_set_ChangeType_m779175206406BD72572AF846383AEDEEA44B7290_AdjustorThunk },
	{ 0x060006D4, WaitForChangedResult_set_Name_mBD5B6415D0C2FE4199DE81935EF3FB92573346DE_AdjustorThunk },
	{ 0x060006D5, WaitForChangedResult_set_OldName_m3B96A62F4EBC550A0451A06020CE354C2A64D9DF_AdjustorThunk },
	{ 0x060007E0, AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D_AdjustorThunk },
	{ 0x060007E1, AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A_AdjustorThunk },
	{ 0x060007E2, IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497_AdjustorThunk },
	{ 0x060007E4, IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F_AdjustorThunk },
	{ 0x060007E5, IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC_AdjustorThunk },
	{ 0x060007E6, IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127_AdjustorThunk },
	{ 0x060007E7, IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F_AdjustorThunk },
	{ 0x060008DA, UdpReceiveResult__ctor_m8BBB681664BA7DE9BBBBAB83790B79DB7A11622D_AdjustorThunk },
	{ 0x060008DB, UdpReceiveResult_get_Buffer_mE4C6D3176994CE67B2F457D85B5CF9D710809BC1_AdjustorThunk },
	{ 0x060008DC, UdpReceiveResult_get_RemoteEndPoint_m7FEC108ADC0081AAAA70FB21E070DE358DE7084E_AdjustorThunk },
	{ 0x060008DD, UdpReceiveResult_GetHashCode_mC060461B3CAE3B0D052C81DE13EB6DBAC75DE90C_AdjustorThunk },
	{ 0x060008DE, UdpReceiveResult_Equals_mEDF64AE5BA4817B82D0AF66C9FB57AA54B2E3B81_AdjustorThunk },
	{ 0x060008DF, UdpReceiveResult_Equals_mA0E30DD7F34BE3921D005918E9DB8C797AC1605D_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2883] = 
{
	1,
	2,
	0,
	1,
	2,
	26,
	1103,
	1103,
	1104,
	1105,
	1106,
	766,
	49,
	4,
	124,
	1107,
	1108,
	112,
	124,
	1109,
	1110,
	154,
	124,
	1109,
	1110,
	154,
	124,
	1111,
	1112,
	26,
	124,
	1113,
	1114,
	26,
	124,
	1115,
	1116,
	112,
	23,
	124,
	1117,
	105,
	1118,
	124,
	64,
	1119,
	26,
	124,
	1120,
	1121,
	1122,
	124,
	1123,
	1124,
	1125,
	124,
	1123,
	1124,
	1125,
	124,
	6,
	1126,
	26,
	124,
	1127,
	1128,
	154,
	124,
	1129,
	1121,
	1130,
	124,
	1131,
	1132,
	1133,
	124,
	1134,
	1126,
	1125,
	124,
	1135,
	1136,
	26,
	124,
	1137,
	1110,
	26,
	124,
	6,
	1126,
	26,
	124,
	1138,
	1139,
	112,
	124,
	1140,
	1141,
	112,
	124,
	1142,
	1143,
	1125,
	124,
	1144,
	1145,
	1125,
	124,
	1146,
	1116,
	26,
	124,
	1147,
	1148,
	26,
	124,
	1147,
	1148,
	26,
	124,
	1147,
	1148,
	26,
	124,
	1137,
	1110,
	26,
	124,
	1149,
	1121,
	112,
	124,
	1149,
	1121,
	112,
	124,
	1149,
	1121,
	112,
	124,
	1109,
	1110,
	154,
	124,
	1109,
	1110,
	154,
	124,
	570,
	1121,
	26,
	124,
	6,
	1126,
	26,
	124,
	1150,
	1151,
	26,
	1152,
	1153,
	89,
	1154,
	1154,
	23,
	31,
	23,
	89,
	23,
	1155,
	1156,
	1155,
	1156,
	1157,
	1158,
	1159,
	1160,
	21,
	21,
	21,
	47,
	21,
	14,
	715,
	89,
	89,
	89,
	89,
	10,
	1090,
	1095,
	1096,
	23,
	1161,
	1162,
	1010,
	923,
	25,
	923,
	923,
	172,
	23,
	15,
	7,
	1005,
	23,
	25,
	23,
	31,
	23,
	172,
	3,
	1005,
	10,
	1163,
	16,
	1164,
	164,
	129,
	172,
	1165,
	0,
	1005,
	1005,
	1166,
	18,
	14,
	3,
	172,
	1163,
	1167,
	1167,
	172,
	1165,
	0,
	1168,
	1168,
	1169,
	766,
	25,
	172,
	4,
	1170,
	1170,
	1171,
	23,
	3,
	26,
	164,
	15,
	15,
	14,
	14,
	10,
	10,
	14,
	3,
	26,
	14,
	1172,
	1173,
	3,
	1172,
	720,
	720,
	720,
	720,
	1163,
	1,
	1,
	1,
	766,
	4,
	4,
	3,
	23,
	23,
	124,
	1174,
	1175,
	26,
	23,
	682,
	1176,
	1176,
	716,
	28,
	9,
	23,
	1174,
	10,
	10,
	35,
	14,
	32,
	23,
	32,
	35,
	10,
	14,
	32,
	26,
	14,
	89,
	14,
	10,
	32,
	452,
	32,
	23,
	1177,
	1177,
	1177,
	37,
	14,
	23,
	26,
	23,
	26,
	23,
	26,
	452,
	37,
	14,
	10,
	32,
	1178,
	14,
	1178,
	37,
	1178,
	37,
	124,
	1092,
	1093,
	9,
	1,
	1179,
	352,
	14,
	1089,
	1090,
	847,
	1180,
	1181,
	1161,
	14,
	14,
	42,
	0,
	1,
	28,
	10,
	26,
	739,
	1091,
	1182,
	1162,
	732,
	112,
	732,
	26,
	504,
	35,
	730,
	730,
	1183,
	631,
	1184,
	1185,
	1186,
	1187,
	1188,
	37,
	1189,
	1189,
	89,
	31,
	23,
	731,
	208,
	89,
	89,
	89,
	181,
	181,
	208,
	3,
	23,
	23,
	26,
	23,
	26,
	23,
	10,
	23,
	26,
	23,
	26,
	1152,
	14,
	14,
	89,
	89,
	14,
	14,
	14,
	23,
	89,
	23,
	1154,
	1154,
	23,
	90,
	9,
	105,
	23,
	31,
	23,
	4,
	3,
	162,
	3,
	4,
	4,
	3,
	14,
	31,
	1,
	4,
	3,
	0,
	114,
	0,
	0,
	0,
	0,
	23,
	1092,
	23,
	125,
	23,
	1092,
	23,
	125,
	1190,
	1191,
	766,
	638,
	224,
	1192,
	134,
	106,
	592,
	7,
	172,
	89,
	3,
	23,
	26,
	26,
	26,
	32,
	26,
	14,
	9,
	10,
	26,
	14,
	163,
	114,
	0,
	214,
	567,
	1193,
	1194,
	1195,
	1196,
	1197,
	89,
	89,
	89,
	89,
	181,
	14,
	89,
	114,
	89,
	1198,
	9,
	89,
	23,
	246,
	433,
	433,
	1199,
	1199,
	14,
	23,
	31,
	26,
	130,
	27,
	1200,
	43,
	111,
	111,
	111,
	14,
	14,
	14,
	14,
	14,
	89,
	89,
	89,
	14,
	89,
	14,
	114,
	4,
	3,
	14,
	10,
	14,
	14,
	14,
	89,
	14,
	14,
	89,
	89,
	14,
	48,
	114,
	48,
	238,
	10,
	14,
	135,
	135,
	9,
	1201,
	14,
	10,
	937,
	208,
	23,
	1202,
	23,
	199,
	34,
	199,
	1203,
	34,
	23,
	1204,
	1205,
	1206,
	1207,
	1208,
	1209,
	1210,
	1211,
	1212,
	1213,
	1214,
	1215,
	94,
	552,
	89,
	48,
	48,
	48,
	48,
	1216,
	1217,
	832,
	9,
	9,
	9,
	420,
	199,
	0,
	59,
	941,
	1218,
	1219,
	34,
	199,
	26,
	3,
	23,
	23,
	23,
	26,
	111,
	111,
	1220,
	1221,
	1222,
	1223,
	1224,
	1225,
	1226,
	48,
	48,
	48,
	48,
	3,
	14,
	10,
	14,
	632,
	683,
	54,
	49,
	3,
	10,
	30,
	30,
	30,
	52,
	32,
	0,
	0,
	89,
	14,
	632,
	683,
	54,
	35,
	1227,
	1228,
	1228,
	1229,
	1229,
	134,
	392,
	1230,
	1229,
	1231,
	1231,
	1227,
	582,
	1232,
	1233,
	1234,
	1235,
	1235,
	1236,
	96,
	1237,
	382,
	1238,
	386,
	386,
	1239,
	1227,
	1240,
	124,
	26,
	213,
	26,
	27,
	14,
	14,
	14,
	89,
	31,
	89,
	31,
	23,
	364,
	23,
	26,
	23,
	1241,
	164,
	3,
	49,
	23,
	9,
	90,
	90,
	213,
	125,
	23,
	26,
	130,
	1242,
	111,
	111,
	989,
	988,
	10,
	314,
	89,
	14,
	9,
	141,
	28,
	58,
	2,
	1243,
	105,
	488,
	23,
	1244,
	0,
	28,
	89,
	89,
	3,
	1245,
	14,
	26,
	23,
	14,
	26,
	23,
	1246,
	141,
	1247,
	505,
	14,
	35,
	10,
	10,
	14,
	14,
	14,
	14,
	14,
	23,
	3,
	23,
	1248,
	89,
	31,
	605,
	26,
	26,
	26,
	1249,
	1246,
	26,
	26,
	1250,
	42,
	42,
	1251,
	241,
	114,
	114,
	114,
	114,
	114,
	114,
	48,
	48,
	1252,
	1253,
	1254,
	1254,
	1255,
	0,
	0,
	119,
	10,
	14,
	34,
	23,
	1256,
	1257,
	41,
	23,
	1249,
	1258,
	46,
	0,
	0,
	94,
	21,
	23,
	32,
	89,
	10,
	26,
	89,
	14,
	14,
	28,
	23,
	801,
	31,
	1259,
	810,
	474,
	28,
	89,
	452,
	14,
	89,
	4,
	3,
	1260,
	89,
	3,
	23,
	27,
	23,
	23,
	32,
	32,
	32,
	32,
	10,
	10,
	10,
	23,
	32,
	129,
	38,
	32,
	129,
	23,
	32,
	23,
	32,
	10,
	37,
	32,
	129,
	23,
	32,
	10,
	37,
	10,
	37,
	10,
	10,
	10,
	10,
	246,
	9,
	52,
	23,
	417,
	89,
	23,
	4,
	1261,
	1262,
	14,
	34,
	14,
	38,
	32,
	32,
	30,
	37,
	37,
	32,
	3,
	23,
	1263,
	1264,
	23,
	111,
	111,
	23,
	1264,
	129,
	1265,
	614,
	38,
	337,
	89,
	14,
	38,
	14,
	34,
	14,
	14,
	14,
	14,
	14,
	1266,
	26,
	34,
	10,
	10,
	119,
	1267,
	26,
	26,
	32,
	14,
	14,
	123,
	365,
	14,
	23,
	14,
	14,
	14,
	14,
	246,
	10,
	417,
	238,
	246,
	30,
	23,
	246,
	14,
	240,
	238,
	23,
	129,
	130,
	107,
	23,
	112,
	30,
	9,
	89,
	89,
	89,
	89,
	89,
	89,
	48,
	48,
	48,
	89,
	48,
	1268,
	23,
	23,
	89,
	26,
	23,
	23,
	1269,
	14,
	605,
	605,
	26,
	26,
	32,
	23,
	23,
	23,
	89,
	23,
	28,
	10,
	32,
	246,
	23,
	32,
	23,
	417,
	246,
	417,
	10,
	3,
	206,
	27,
	27,
	14,
	488,
	23,
	1270,
	23,
	23,
	23,
	23,
	89,
	23,
	23,
	123,
	23,
	773,
	773,
	23,
	23,
	23,
	32,
	10,
	10,
	38,
	337,
	23,
	30,
	37,
	37,
	14,
	1271,
	0,
	23,
	32,
	89,
	10,
	10,
	129,
	32,
	129,
	38,
	112,
	28,
	37,
	28,
	801,
	27,
	27,
	206,
	3,
	3,
	26,
	26,
	23,
	31,
	23,
	1272,
	89,
	89,
	10,
	14,
	26,
	31,
	23,
	32,
	4,
	23,
	93,
	34,
	23,
	23,
	23,
	14,
	18,
	0,
	14,
	23,
	26,
	26,
	14,
	159,
	23,
	314,
	181,
	181,
	23,
	23,
	23,
	3,
	23,
	125,
	23,
	130,
	89,
	23,
	14,
	26,
	14,
	10,
	28,
	28,
	14,
	10,
	14,
	130,
	14,
	3,
	90,
	213,
	23,
	31,
	89,
	9,
	10,
	89,
	3,
	14,
	58,
	105,
	105,
	125,
	23,
	23,
	89,
	89,
	14,
	23,
	31,
	28,
	89,
	14,
	23,
	3,
	23,
	14,
	14,
	89,
	14,
	90,
	125,
	58,
	105,
	105,
	23,
	26,
	14,
	9,
	10,
	3,
	26,
	14,
	9,
	10,
	3,
	31,
	26,
	26,
	14,
	9,
	10,
	26,
	14,
	28,
	28,
	105,
	105,
	23,
	26,
	14,
	14,
	9,
	10,
	89,
	3,
	26,
	27,
	14,
	9,
	10,
	23,
	26,
	14,
	14,
	9,
	10,
	89,
	3,
	32,
	10,
	9,
	10,
	89,
	3,
	89,
	14,
	58,
	105,
	105,
	23,
	32,
	9,
	10,
	26,
	90,
	90,
	213,
	125,
	26,
	452,
	10,
	34,
	112,
	23,
	9,
	130,
	23,
	32,
	112,
	62,
	26,
	32,
	14,
	26,
	26,
	10,
	14,
	14,
	34,
	62,
	112,
	23,
	9,
	112,
	62,
	26,
	32,
	89,
	89,
	3,
	28,
	28,
	14,
	14,
	26,
	14,
	14,
	14,
	89,
	14,
	89,
	105,
	14,
	58,
	105,
	105,
	23,
	14,
	58,
	105,
	105,
	23,
	14,
	58,
	105,
	105,
	23,
	14,
	14,
	14,
	23,
	14,
	26,
	23,
	26,
	124,
	27,
	125,
	26,
	26,
	452,
	10,
	34,
	28,
	112,
	23,
	9,
	130,
	23,
	32,
	157,
	112,
	62,
	26,
	32,
	26,
	26,
	14,
	10,
	14,
	27,
	23,
	9,
	14,
	89,
	28,
	27,
	14,
	14,
	26,
	14,
	112,
	23,
	9,
	112,
	62,
	89,
	89,
	26,
	32,
	34,
	62,
	3,
	26,
	14,
	688,
	14,
	14,
	89,
	23,
	3,
	23,
	4,
	1,
	28,
	28,
	105,
	28,
	28,
	28,
	105,
	157,
	105,
	9,
	0,
	26,
	1,
	3,
	26,
	89,
	14,
	28,
	28,
	23,
	26,
	124,
	26,
	213,
	26,
	14,
	58,
	105,
	105,
	89,
	14,
	58,
	105,
	105,
	23,
	90,
	213,
	23,
	90,
	90,
	213,
	125,
	23,
	9,
	90,
	9,
	90,
	213,
	125,
	28,
	105,
	213,
	28,
	105,
	23,
	23,
	26,
	14,
	9,
	10,
	3,
	23,
	28,
	28,
	28,
	105,
	28,
	28,
	105,
	23,
	26,
	14,
	4,
	4,
	106,
	137,
	163,
	0,
	0,
	162,
	0,
	0,
	1,
	162,
	0,
	0,
	0,
	0,
	0,
	0,
	162,
	0,
	162,
	579,
	442,
	1273,
	163,
	163,
	163,
	3,
	27,
	9,
	41,
	23,
	3,
	27,
	14,
	14,
	26,
	28,
	28,
	105,
	105,
	27,
	14,
	14,
	206,
	14,
	14,
	14,
	58,
	105,
	105,
	14,
	58,
	105,
	105,
	14,
	58,
	105,
	105,
	23,
	32,
	62,
	111,
	10,
	111,
	43,
	3,
	3,
	89,
	14,
	58,
	105,
	105,
	105,
	90,
	213,
	125,
	90,
	23,
	23,
	23,
	26,
	3,
	90,
	112,
	23,
	14,
	28,
	27,
	90,
	90,
	90,
	27,
	156,
	14,
	156,
	14,
	23,
	27,
	111,
	26,
	355,
	27,
	26,
	14,
	26,
	14,
	23,
	112,
	34,
	10,
	14,
	130,
	14,
	26,
	14,
	89,
	23,
	119,
	119,
	23,
	27,
	26,
	14,
	26,
	26,
	123,
	123,
	123,
	123,
	123,
	123,
	123,
	123,
	1274,
	1274,
	26,
	14,
	14,
	14,
	14,
	0,
	1,
	0,
	3,
	23,
	452,
	1275,
	89,
	89,
	10,
	26,
	112,
	14,
	123,
	14,
	23,
	27,
	111,
	110,
	110,
	14,
	14,
	14,
	14,
	14,
	10,
	118,
	118,
	23,
	14,
	123,
	137,
	3,
	3,
	14,
	14,
	14,
	10,
	14,
	118,
	23,
	23,
	89,
	26,
	26,
	14,
	123,
	123,
	14,
	123,
	110,
	110,
	799,
	14,
	23,
	14,
	14,
	14,
	10,
	105,
	118,
	23,
	14,
	123,
	137,
	14,
	3,
	23,
	26,
	34,
	112,
	26,
	14,
	10,
	26,
	14,
	14,
	89,
	23,
	89,
	23,
	26,
	10,
	34,
	452,
	14,
	23,
	31,
	23,
	14,
	23,
	31,
	26,
	23,
	31,
	23,
	23,
	10,
	14,
	130,
	14,
	26,
	14,
	89,
	23,
	89,
	26,
	23,
	31,
	23,
	23,
	31,
	89,
	26,
	3,
	23,
	26,
	23,
	452,
	26,
	112,
	123,
	23,
	89,
	31,
	26,
	28,
	3,
	3,
	163,
	1276,
	162,
	821,
	114,
	163,
	4,
	28,
	23,
	23,
	452,
	133,
	10,
	26,
	37,
	112,
	14,
	123,
	23,
	452,
	452,
	452,
	452,
	355,
	14,
	26,
	48,
	244,
	0,
	112,
	14,
	123,
	23,
	23,
	23,
	382,
	26,
	26,
	23,
	474,
	492,
	156,
	1277,
	1,
	3,
	124,
	27,
	125,
	26,
	364,
	124,
	27,
	125,
	26,
	27,
	23,
	89,
	31,
	14,
	14,
	14,
	31,
	89,
	32,
	14,
	31,
	23,
	118,
	26,
	26,
	26,
	26,
	1278,
	23,
	23,
	26,
	26,
	106,
	3,
	26,
	26,
	26,
	14,
	23,
	26,
	111,
	26,
	26,
	382,
	23,
	40,
	124,
	27,
	125,
	26,
	26,
	452,
	89,
	26,
	3,
	32,
	32,
	26,
	26,
	4,
	23,
	3,
	10,
	14,
	28,
	23,
	4,
	4,
	3,
	1092,
	208,
	180,
	130,
	32,
	224,
	0,
	162,
	14,
	10,
	181,
	14,
	114,
	89,
	474,
	9,
	10,
	14,
	3,
	10,
	299,
	130,
	14,
	10,
	14,
	14,
	28,
	9,
	10,
	3,
	14,
	26,
	26,
	14,
	26,
	23,
	23,
	114,
	4,
	4,
	4,
	114,
	46,
	3,
	4,
	4,
	27,
	206,
	26,
	26,
	26,
	23,
	26,
	111,
	111,
	111,
	10,
	10,
	30,
	133,
	129,
	26,
	130,
	14,
	14,
	9,
	10,
	14,
	23,
	27,
	130,
	1260,
	1279,
	111,
	111,
	111,
	43,
	3,
	23,
	14,
	27,
	162,
	114,
	26,
	27,
	14,
	571,
	23,
	605,
	111,
	26,
	111,
	111,
	28,
	14,
	10,
	34,
	34,
	3,
	112,
	41,
	112,
	90,
	23,
	3,
	4,
	23,
	111,
	111,
	111,
	4,
	4,
	3,
	23,
	28,
	9,
	14,
	23,
	111,
	111,
	111,
	23,
	23,
	31,
	124,
	28,
	213,
	28,
	1280,
	0,
	0,
	3,
	28,
	23,
	32,
	4,
	14,
	124,
	26,
	7,
	26,
	23,
	23,
	119,
	3,
	43,
	3,
	137,
	32,
	32,
	89,
	23,
	124,
	107,
	569,
	26,
	32,
	23,
	23,
	14,
	26,
	14,
	26,
	89,
	23,
	28,
	9,
	26,
	111,
	111,
	111,
	89,
	163,
	163,
	23,
	3,
	23,
	28,
	1262,
	1281,
	31,
	32,
	504,
	35,
	732,
	112,
	732,
	26,
	23,
	739,
	111,
	111,
	111,
	23,
	32,
	28,
	9,
	23,
	921,
	14,
	89,
	31,
	28,
	31,
	9,
	9,
	9,
	9,
	9,
	111,
	111,
	111,
	14,
	4,
	31,
	23,
	799,
	799,
	620,
	0,
	799,
	648,
	0,
	26,
	26,
	1092,
	115,
	1282,
	1282,
	382,
	163,
	352,
	162,
	0,
	0,
	0,
	0,
	4,
	28,
	23,
	26,
	3,
	23,
	28,
	3,
	26,
	111,
	23,
	31,
	14,
	14,
	14,
	14,
	111,
	111,
	23,
	452,
	14,
	180,
	243,
	10,
	89,
	89,
	14,
	35,
	31,
	31,
	31,
	1269,
	31,
	31,
	26,
	3,
	4,
	4,
	1,
	156,
	89,
	10,
	9,
	106,
	23,
	62,
	32,
	32,
	111,
	14,
	10,
	826,
	31,
	32,
	452,
	89,
	89,
	89,
	181,
	181,
	208,
	731,
	130,
	504,
	35,
	31,
	23,
	732,
	112,
	732,
	26,
	23,
	208,
	38,
	49,
	49,
	49,
	49,
	15,
	10,
	10,
	10,
	31,
	31,
	89,
	31,
	89,
	504,
	503,
	505,
	505,
	503,
	414,
	32,
	1283,
	112,
	1283,
	112,
	4,
	89,
	3,
	23,
	23,
	32,
	1284,
	23,
	1285,
	31,
	89,
	31,
	89,
	31,
	837,
	1286,
	89,
	31,
	14,
	1287,
	1288,
	52,
	1289,
	1290,
	14,
	26,
	28,
	1291,
	1292,
	1293,
	26,
	686,
	1294,
	32,
	842,
	1295,
	130,
	26,
	163,
	163,
	26,
	1296,
	1297,
	31,
	26,
	837,
	1286,
	1298,
	1299,
	1300,
	414,
	1301,
	1302,
	1301,
	1302,
	1298,
	1303,
	1300,
	414,
	1304,
	1305,
	1298,
	1299,
	1300,
	368,
	414,
	1301,
	1302,
	1301,
	1302,
	1306,
	1307,
	368,
	112,
	1308,
	1309,
	199,
	1310,
	1311,
	38,
	1312,
	1313,
	23,
	32,
	718,
	842,
	1295,
	31,
	7,
	23,
	26,
	35,
	23,
	213,
	986,
	28,
	163,
	106,
	46,
	46,
	3,
	3,
	23,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	32,
	26,
	14,
	26,
	89,
	130,
	26,
	14,
	23,
	31,
	23,
	23,
	32,
	32,
	31,
	23,
	130,
	43,
	14,
	23,
	32,
	23,
	14,
	32,
	129,
	14,
	26,
	31,
	31,
	23,
	23,
	23,
	31,
	26,
	782,
	569,
	112,
	105,
	477,
	481,
	14,
	23,
	105,
	1314,
	27,
	14,
	14,
	10,
	9,
	1315,
	172,
	89,
	23,
	23,
	3,
	14,
	26,
	32,
	32,
	31,
	23,
	23,
	26,
	15,
	115,
	10,
	23,
	23,
	23,
	31,
	32,
	452,
	26,
	26,
	130,
	3,
	23,
	26,
	452,
	14,
	31,
	89,
	124,
	1316,
	1317,
	28,
	124,
	1092,
	1093,
	9,
	124,
	125,
	1094,
	28,
	14,
	4,
	126,
	921,
	921,
	1318,
	26,
	1091,
	89,
	89,
	89,
	89,
	181,
	181,
	208,
	208,
	731,
	23,
	23,
	31,
	504,
	35,
	732,
	112,
	732,
	26,
	49,
	4,
	4,
	14,
	23,
	23,
	111,
	131,
	14,
	23,
	23,
	14,
	23,
	26,
	3,
	14,
	23,
	20,
	1319,
	4,
	4,
	4,
	4,
	14,
	23,
	4,
	89,
	23,
	3,
	23,
	31,
	28,
	27,
	14,
	23,
	10,
	14,
	89,
	14,
	14,
	27,
	23,
	9,
	130,
	14,
	14,
	26,
	23,
	26,
	28,
	27,
	10,
	14,
	89,
	14,
	14,
	27,
	23,
	9,
	130,
	14,
	14,
	26,
	26,
	14,
	688,
	14,
	14,
	89,
	23,
	452,
	130,
	10,
	14,
	14,
	452,
	14,
	89,
	23,
	23,
	23,
	26,
	62,
	26,
	111,
	111,
	26,
	23,
	32,
	28,
	89,
	27,
	28,
	34,
	34,
	14,
	10,
	130,
	14,
	3,
	27,
	26,
	89,
	23,
	14,
	27,
	90,
	112,
	14,
	14,
	4,
	4,
	23,
	62,
	26,
	111,
	23,
	0,
	27,
	28,
	28,
	34,
	34,
	23,
	32,
	62,
	111,
	10,
	89,
	14,
	14,
	14,
	14,
	28,
	27,
	14,
	27,
	23,
	9,
	130,
	112,
	26,
	26,
	14,
	14,
	111,
	26,
	130,
	14,
	688,
	14,
	14,
	89,
	23,
	452,
	130,
	10,
	14,
	14,
	34,
	62,
	10,
	89,
	89,
	112,
	23,
	9,
	130,
	112,
	62,
	26,
	32,
	14,
	34,
	62,
	112,
	9,
	112,
	62,
	26,
	130,
	14,
	23,
	64,
	130,
	32,
	30,
	21,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	94,
	23,
	23,
	23,
	14,
	23,
	14,
	26,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	23,
	213,
	3,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x060000AA, 2,  (void**)&UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F_RuntimeMethod_var, 0 },
	{ 0x060000AC, 3,  (void**)&UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB_RuntimeMethod_var, 0 },
	{ 0x060000AE, 4,  (void**)&UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850_RuntimeMethod_var, 0 },
	{ 0x060000B0, 5,  (void**)&UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[25] = 
{
	{ 0x020001DD, { 0, 2 } },
	{ 0x020001DE, { 2, 2 } },
	{ 0x020001DF, { 4, 2 } },
	{ 0x020001E0, { 6, 2 } },
	{ 0x020001E1, { 8, 23 } },
	{ 0x020001E2, { 31, 2 } },
	{ 0x020001E4, { 33, 9 } },
	{ 0x020001E5, { 42, 3 } },
	{ 0x020001E6, { 45, 1 } },
	{ 0x020001E7, { 46, 43 } },
	{ 0x020001E8, { 89, 5 } },
	{ 0x020001E9, { 94, 2 } },
	{ 0x020001EA, { 96, 2 } },
	{ 0x020001EB, { 98, 7 } },
	{ 0x020001EC, { 105, 6 } },
	{ 0x020001ED, { 111, 93 } },
	{ 0x020001EE, { 204, 47 } },
	{ 0x020001EF, { 251, 2 } },
	{ 0x020001F0, { 253, 18 } },
	{ 0x020001F1, { 271, 21 } },
	{ 0x020001F3, { 292, 1 } },
	{ 0x020001F5, { 293, 2 } },
	{ 0x020001F9, { 295, 7 } },
	{ 0x020001FA, { 302, 3 } },
	{ 0x020001FB, { 305, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[306] = 
{
	{ (Il2CppRGCTXDataType)2, 23369 },
	{ (Il2CppRGCTXDataType)2, 23371 },
	{ (Il2CppRGCTXDataType)2, 34433 },
	{ (Il2CppRGCTXDataType)2, 23378 },
	{ (Il2CppRGCTXDataType)2, 23383 },
	{ (Il2CppRGCTXDataType)2, 23385 },
	{ (Il2CppRGCTXDataType)2, 23389 },
	{ (Il2CppRGCTXDataType)2, 23391 },
	{ (Il2CppRGCTXDataType)3, 26681 },
	{ (Il2CppRGCTXDataType)2, 23395 },
	{ (Il2CppRGCTXDataType)3, 26682 },
	{ (Il2CppRGCTXDataType)3, 26683 },
	{ (Il2CppRGCTXDataType)3, 26684 },
	{ (Il2CppRGCTXDataType)3, 26685 },
	{ (Il2CppRGCTXDataType)3, 26686 },
	{ (Il2CppRGCTXDataType)3, 26687 },
	{ (Il2CppRGCTXDataType)3, 26688 },
	{ (Il2CppRGCTXDataType)3, 26689 },
	{ (Il2CppRGCTXDataType)3, 26690 },
	{ (Il2CppRGCTXDataType)2, 34434 },
	{ (Il2CppRGCTXDataType)2, 23396 },
	{ (Il2CppRGCTXDataType)3, 26691 },
	{ (Il2CppRGCTXDataType)2, 23398 },
	{ (Il2CppRGCTXDataType)3, 26692 },
	{ (Il2CppRGCTXDataType)3, 26693 },
	{ (Il2CppRGCTXDataType)3, 26694 },
	{ (Il2CppRGCTXDataType)3, 26695 },
	{ (Il2CppRGCTXDataType)2, 23397 },
	{ (Il2CppRGCTXDataType)3, 26696 },
	{ (Il2CppRGCTXDataType)1, 23397 },
	{ (Il2CppRGCTXDataType)2, 23397 },
	{ (Il2CppRGCTXDataType)3, 26697 },
	{ (Il2CppRGCTXDataType)2, 23404 },
	{ (Il2CppRGCTXDataType)3, 26698 },
	{ (Il2CppRGCTXDataType)2, 23427 },
	{ (Il2CppRGCTXDataType)3, 26699 },
	{ (Il2CppRGCTXDataType)3, 26700 },
	{ (Il2CppRGCTXDataType)3, 26701 },
	{ (Il2CppRGCTXDataType)2, 23425 },
	{ (Il2CppRGCTXDataType)3, 26702 },
	{ (Il2CppRGCTXDataType)3, 26703 },
	{ (Il2CppRGCTXDataType)3, 26704 },
	{ (Il2CppRGCTXDataType)3, 26705 },
	{ (Il2CppRGCTXDataType)3, 26706 },
	{ (Il2CppRGCTXDataType)2, 23432 },
	{ (Il2CppRGCTXDataType)3, 26707 },
	{ (Il2CppRGCTXDataType)3, 26708 },
	{ (Il2CppRGCTXDataType)3, 26709 },
	{ (Il2CppRGCTXDataType)3, 26710 },
	{ (Il2CppRGCTXDataType)2, 34435 },
	{ (Il2CppRGCTXDataType)2, 23446 },
	{ (Il2CppRGCTXDataType)3, 26711 },
	{ (Il2CppRGCTXDataType)3, 26712 },
	{ (Il2CppRGCTXDataType)3, 26713 },
	{ (Il2CppRGCTXDataType)3, 26714 },
	{ (Il2CppRGCTXDataType)3, 26715 },
	{ (Il2CppRGCTXDataType)3, 26716 },
	{ (Il2CppRGCTXDataType)3, 26717 },
	{ (Il2CppRGCTXDataType)2, 34436 },
	{ (Il2CppRGCTXDataType)3, 26718 },
	{ (Il2CppRGCTXDataType)3, 26719 },
	{ (Il2CppRGCTXDataType)2, 34437 },
	{ (Il2CppRGCTXDataType)2, 34438 },
	{ (Il2CppRGCTXDataType)2, 23447 },
	{ (Il2CppRGCTXDataType)1, 23446 },
	{ (Il2CppRGCTXDataType)1, 23447 },
	{ (Il2CppRGCTXDataType)3, 26720 },
	{ (Il2CppRGCTXDataType)3, 26721 },
	{ (Il2CppRGCTXDataType)2, 23454 },
	{ (Il2CppRGCTXDataType)3, 26722 },
	{ (Il2CppRGCTXDataType)2, 23455 },
	{ (Il2CppRGCTXDataType)3, 26723 },
	{ (Il2CppRGCTXDataType)3, 26724 },
	{ (Il2CppRGCTXDataType)3, 26725 },
	{ (Il2CppRGCTXDataType)3, 26726 },
	{ (Il2CppRGCTXDataType)2, 34439 },
	{ (Il2CppRGCTXDataType)3, 26727 },
	{ (Il2CppRGCTXDataType)3, 26728 },
	{ (Il2CppRGCTXDataType)3, 26729 },
	{ (Il2CppRGCTXDataType)3, 26730 },
	{ (Il2CppRGCTXDataType)2, 23456 },
	{ (Il2CppRGCTXDataType)2, 23448 },
	{ (Il2CppRGCTXDataType)3, 26731 },
	{ (Il2CppRGCTXDataType)2, 34440 },
	{ (Il2CppRGCTXDataType)3, 26732 },
	{ (Il2CppRGCTXDataType)3, 26733 },
	{ (Il2CppRGCTXDataType)3, 26734 },
	{ (Il2CppRGCTXDataType)3, 26735 },
	{ (Il2CppRGCTXDataType)3, 26736 },
	{ (Il2CppRGCTXDataType)3, 26737 },
	{ (Il2CppRGCTXDataType)2, 23467 },
	{ (Il2CppRGCTXDataType)2, 23468 },
	{ (Il2CppRGCTXDataType)2, 23469 },
	{ (Il2CppRGCTXDataType)3, 26738 },
	{ (Il2CppRGCTXDataType)3, 26739 },
	{ (Il2CppRGCTXDataType)2, 23477 },
	{ (Il2CppRGCTXDataType)3, 26740 },
	{ (Il2CppRGCTXDataType)2, 23486 },
	{ (Il2CppRGCTXDataType)3, 26741 },
	{ (Il2CppRGCTXDataType)3, 26742 },
	{ (Il2CppRGCTXDataType)3, 26743 },
	{ (Il2CppRGCTXDataType)2, 34441 },
	{ (Il2CppRGCTXDataType)3, 26744 },
	{ (Il2CppRGCTXDataType)2, 23493 },
	{ (Il2CppRGCTXDataType)3, 26745 },
	{ (Il2CppRGCTXDataType)3, 26746 },
	{ (Il2CppRGCTXDataType)3, 26747 },
	{ (Il2CppRGCTXDataType)3, 26748 },
	{ (Il2CppRGCTXDataType)2, 34442 },
	{ (Il2CppRGCTXDataType)3, 26749 },
	{ (Il2CppRGCTXDataType)3, 26750 },
	{ (Il2CppRGCTXDataType)3, 26751 },
	{ (Il2CppRGCTXDataType)2, 34443 },
	{ (Il2CppRGCTXDataType)2, 23522 },
	{ (Il2CppRGCTXDataType)2, 23526 },
	{ (Il2CppRGCTXDataType)3, 26752 },
	{ (Il2CppRGCTXDataType)3, 26753 },
	{ (Il2CppRGCTXDataType)3, 26754 },
	{ (Il2CppRGCTXDataType)2, 23529 },
	{ (Il2CppRGCTXDataType)2, 34444 },
	{ (Il2CppRGCTXDataType)3, 26755 },
	{ (Il2CppRGCTXDataType)3, 26756 },
	{ (Il2CppRGCTXDataType)3, 26757 },
	{ (Il2CppRGCTXDataType)3, 26758 },
	{ (Il2CppRGCTXDataType)3, 26759 },
	{ (Il2CppRGCTXDataType)3, 26760 },
	{ (Il2CppRGCTXDataType)3, 26761 },
	{ (Il2CppRGCTXDataType)2, 34445 },
	{ (Il2CppRGCTXDataType)3, 26762 },
	{ (Il2CppRGCTXDataType)3, 26763 },
	{ (Il2CppRGCTXDataType)3, 26764 },
	{ (Il2CppRGCTXDataType)3, 26765 },
	{ (Il2CppRGCTXDataType)3, 26766 },
	{ (Il2CppRGCTXDataType)3, 26767 },
	{ (Il2CppRGCTXDataType)3, 26768 },
	{ (Il2CppRGCTXDataType)2, 23527 },
	{ (Il2CppRGCTXDataType)3, 26769 },
	{ (Il2CppRGCTXDataType)3, 26770 },
	{ (Il2CppRGCTXDataType)2, 23520 },
	{ (Il2CppRGCTXDataType)3, 26771 },
	{ (Il2CppRGCTXDataType)3, 26772 },
	{ (Il2CppRGCTXDataType)3, 26773 },
	{ (Il2CppRGCTXDataType)3, 26774 },
	{ (Il2CppRGCTXDataType)2, 23527 },
	{ (Il2CppRGCTXDataType)3, 26775 },
	{ (Il2CppRGCTXDataType)3, 26776 },
	{ (Il2CppRGCTXDataType)3, 26777 },
	{ (Il2CppRGCTXDataType)3, 26778 },
	{ (Il2CppRGCTXDataType)3, 26779 },
	{ (Il2CppRGCTXDataType)3, 26780 },
	{ (Il2CppRGCTXDataType)3, 26781 },
	{ (Il2CppRGCTXDataType)3, 26782 },
	{ (Il2CppRGCTXDataType)3, 26783 },
	{ (Il2CppRGCTXDataType)3, 26784 },
	{ (Il2CppRGCTXDataType)3, 26785 },
	{ (Il2CppRGCTXDataType)3, 26786 },
	{ (Il2CppRGCTXDataType)3, 26787 },
	{ (Il2CppRGCTXDataType)3, 26788 },
	{ (Il2CppRGCTXDataType)3, 26789 },
	{ (Il2CppRGCTXDataType)3, 26790 },
	{ (Il2CppRGCTXDataType)3, 26791 },
	{ (Il2CppRGCTXDataType)3, 26792 },
	{ (Il2CppRGCTXDataType)3, 26793 },
	{ (Il2CppRGCTXDataType)2, 34446 },
	{ (Il2CppRGCTXDataType)3, 26794 },
	{ (Il2CppRGCTXDataType)3, 26795 },
	{ (Il2CppRGCTXDataType)2, 23523 },
	{ (Il2CppRGCTXDataType)3, 26796 },
	{ (Il2CppRGCTXDataType)3, 26797 },
	{ (Il2CppRGCTXDataType)2, 34447 },
	{ (Il2CppRGCTXDataType)3, 26798 },
	{ (Il2CppRGCTXDataType)2, 23524 },
	{ (Il2CppRGCTXDataType)3, 26799 },
	{ (Il2CppRGCTXDataType)2, 34448 },
	{ (Il2CppRGCTXDataType)3, 26800 },
	{ (Il2CppRGCTXDataType)3, 26801 },
	{ (Il2CppRGCTXDataType)2, 23525 },
	{ (Il2CppRGCTXDataType)3, 26802 },
	{ (Il2CppRGCTXDataType)3, 26803 },
	{ (Il2CppRGCTXDataType)3, 26804 },
	{ (Il2CppRGCTXDataType)3, 26805 },
	{ (Il2CppRGCTXDataType)3, 26806 },
	{ (Il2CppRGCTXDataType)3, 26807 },
	{ (Il2CppRGCTXDataType)2, 23529 },
	{ (Il2CppRGCTXDataType)3, 26808 },
	{ (Il2CppRGCTXDataType)3, 26809 },
	{ (Il2CppRGCTXDataType)3, 26810 },
	{ (Il2CppRGCTXDataType)3, 26811 },
	{ (Il2CppRGCTXDataType)3, 26812 },
	{ (Il2CppRGCTXDataType)3, 26813 },
	{ (Il2CppRGCTXDataType)3, 26814 },
	{ (Il2CppRGCTXDataType)3, 26815 },
	{ (Il2CppRGCTXDataType)3, 26816 },
	{ (Il2CppRGCTXDataType)2, 34266 },
	{ (Il2CppRGCTXDataType)3, 26817 },
	{ (Il2CppRGCTXDataType)3, 26818 },
	{ (Il2CppRGCTXDataType)3, 26819 },
	{ (Il2CppRGCTXDataType)2, 34449 },
	{ (Il2CppRGCTXDataType)3, 26820 },
	{ (Il2CppRGCTXDataType)3, 26821 },
	{ (Il2CppRGCTXDataType)1, 23520 },
	{ (Il2CppRGCTXDataType)2, 23524 },
	{ (Il2CppRGCTXDataType)1, 23524 },
	{ (Il2CppRGCTXDataType)3, 26822 },
	{ (Il2CppRGCTXDataType)3, 26823 },
	{ (Il2CppRGCTXDataType)2, 23535 },
	{ (Il2CppRGCTXDataType)3, 26824 },
	{ (Il2CppRGCTXDataType)3, 26825 },
	{ (Il2CppRGCTXDataType)3, 26826 },
	{ (Il2CppRGCTXDataType)3, 26827 },
	{ (Il2CppRGCTXDataType)3, 26828 },
	{ (Il2CppRGCTXDataType)3, 26829 },
	{ (Il2CppRGCTXDataType)3, 26830 },
	{ (Il2CppRGCTXDataType)3, 24782 },
	{ (Il2CppRGCTXDataType)2, 34450 },
	{ (Il2CppRGCTXDataType)3, 26831 },
	{ (Il2CppRGCTXDataType)2, 34451 },
	{ (Il2CppRGCTXDataType)3, 26832 },
	{ (Il2CppRGCTXDataType)3, 26833 },
	{ (Il2CppRGCTXDataType)2, 23537 },
	{ (Il2CppRGCTXDataType)3, 26834 },
	{ (Il2CppRGCTXDataType)3, 26835 },
	{ (Il2CppRGCTXDataType)3, 26836 },
	{ (Il2CppRGCTXDataType)3, 26837 },
	{ (Il2CppRGCTXDataType)3, 26838 },
	{ (Il2CppRGCTXDataType)2, 34452 },
	{ (Il2CppRGCTXDataType)3, 26839 },
	{ (Il2CppRGCTXDataType)3, 26840 },
	{ (Il2CppRGCTXDataType)3, 26841 },
	{ (Il2CppRGCTXDataType)3, 26842 },
	{ (Il2CppRGCTXDataType)2, 34453 },
	{ (Il2CppRGCTXDataType)3, 26843 },
	{ (Il2CppRGCTXDataType)3, 26844 },
	{ (Il2CppRGCTXDataType)3, 26845 },
	{ (Il2CppRGCTXDataType)3, 26846 },
	{ (Il2CppRGCTXDataType)3, 26847 },
	{ (Il2CppRGCTXDataType)2, 34454 },
	{ (Il2CppRGCTXDataType)3, 26848 },
	{ (Il2CppRGCTXDataType)3, 26849 },
	{ (Il2CppRGCTXDataType)3, 26850 },
	{ (Il2CppRGCTXDataType)3, 26851 },
	{ (Il2CppRGCTXDataType)3, 26852 },
	{ (Il2CppRGCTXDataType)3, 26853 },
	{ (Il2CppRGCTXDataType)3, 26854 },
	{ (Il2CppRGCTXDataType)3, 26855 },
	{ (Il2CppRGCTXDataType)2, 34455 },
	{ (Il2CppRGCTXDataType)3, 26856 },
	{ (Il2CppRGCTXDataType)3, 26857 },
	{ (Il2CppRGCTXDataType)3, 26858 },
	{ (Il2CppRGCTXDataType)2, 34456 },
	{ (Il2CppRGCTXDataType)3, 26859 },
	{ (Il2CppRGCTXDataType)3, 26860 },
	{ (Il2CppRGCTXDataType)3, 26861 },
	{ (Il2CppRGCTXDataType)3, 26862 },
	{ (Il2CppRGCTXDataType)3, 26863 },
	{ (Il2CppRGCTXDataType)3, 26864 },
	{ (Il2CppRGCTXDataType)3, 26865 },
	{ (Il2CppRGCTXDataType)3, 26866 },
	{ (Il2CppRGCTXDataType)3, 26867 },
	{ (Il2CppRGCTXDataType)3, 26868 },
	{ (Il2CppRGCTXDataType)2, 23550 },
	{ (Il2CppRGCTXDataType)3, 26869 },
	{ (Il2CppRGCTXDataType)3, 26870 },
	{ (Il2CppRGCTXDataType)3, 26871 },
	{ (Il2CppRGCTXDataType)3, 26872 },
	{ (Il2CppRGCTXDataType)3, 26873 },
	{ (Il2CppRGCTXDataType)3, 26874 },
	{ (Il2CppRGCTXDataType)3, 26875 },
	{ (Il2CppRGCTXDataType)3, 26876 },
	{ (Il2CppRGCTXDataType)3, 26877 },
	{ (Il2CppRGCTXDataType)3, 26878 },
	{ (Il2CppRGCTXDataType)3, 26879 },
	{ (Il2CppRGCTXDataType)3, 26880 },
	{ (Il2CppRGCTXDataType)3, 26881 },
	{ (Il2CppRGCTXDataType)3, 26882 },
	{ (Il2CppRGCTXDataType)2, 23557 },
	{ (Il2CppRGCTXDataType)2, 34457 },
	{ (Il2CppRGCTXDataType)3, 26883 },
	{ (Il2CppRGCTXDataType)3, 26884 },
	{ (Il2CppRGCTXDataType)3, 26885 },
	{ (Il2CppRGCTXDataType)3, 26886 },
	{ (Il2CppRGCTXDataType)3, 26887 },
	{ (Il2CppRGCTXDataType)3, 26888 },
	{ (Il2CppRGCTXDataType)3, 26889 },
	{ (Il2CppRGCTXDataType)3, 26890 },
	{ (Il2CppRGCTXDataType)3, 26891 },
	{ (Il2CppRGCTXDataType)2, 23558 },
	{ (Il2CppRGCTXDataType)3, 26892 },
	{ (Il2CppRGCTXDataType)3, 26893 },
	{ (Il2CppRGCTXDataType)2, 23562 },
	{ (Il2CppRGCTXDataType)3, 26894 },
	{ (Il2CppRGCTXDataType)2, 34458 },
	{ (Il2CppRGCTXDataType)3, 26895 },
	{ (Il2CppRGCTXDataType)3, 26896 },
	{ (Il2CppRGCTXDataType)2, 23577 },
	{ (Il2CppRGCTXDataType)3, 26897 },
	{ (Il2CppRGCTXDataType)2, 23598 },
	{ (Il2CppRGCTXDataType)3, 26898 },
	{ (Il2CppRGCTXDataType)2, 34459 },
	{ (Il2CppRGCTXDataType)3, 26899 },
	{ (Il2CppRGCTXDataType)3, 26900 },
	{ (Il2CppRGCTXDataType)3, 26901 },
	{ (Il2CppRGCTXDataType)3, 26902 },
	{ (Il2CppRGCTXDataType)3, 26903 },
	{ (Il2CppRGCTXDataType)2, 23603 },
	{ (Il2CppRGCTXDataType)3, 26904 },
};
extern const Il2CppCodeGenModule g_SystemCodeGenModule;
const Il2CppCodeGenModule g_SystemCodeGenModule = 
{
	"System.dll",
	2883,
	s_methodPointers,
	38,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	25,
	s_rgctxIndices,
	306,
	s_rgctxValues,
	NULL,
};
