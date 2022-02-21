#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* WebSocketClientWebGl_CloseCallBack_m5A3C7F68D38F7A1DE8F990F5E78A6AEAD80FED00_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_ErrorCallback_m9E9D7A1A8C522DFFE4799B41E17C1B41401BD2B3_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_MessageCallback_m8827FD5E0D2473A51DBC47EF5060CAC5C6ED1A69_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_OpenCallback_mAD7CEB7BC927646C6A7B11AC41A9CC6714B8F413_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 Mirror.SimpleWeb.SimpleWebClient Mirror.SimpleWeb.SimpleWebClient::Create(System.Int32,System.Int32,Mirror.SimpleWeb.TcpConfig)
extern void SimpleWebClient_Create_m09C7B332EEABD6FE3F8CC6722AB02222C5EC15C5 (void);
// 0x00000002 System.Void Mirror.SimpleWeb.SimpleWebClient::.ctor(System.Int32,System.Int32)
extern void SimpleWebClient__ctor_m8F89B12F62A0FC27DF94D5447C6E9F0E9E90E8C0 (void);
// 0x00000003 Mirror.SimpleWeb.ClientState Mirror.SimpleWeb.SimpleWebClient::get_ConnectionState()
extern void SimpleWebClient_get_ConnectionState_m5DB9A2BB6860529F60CD583C7A8EB0CBE014D5FC (void);
// 0x00000004 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onConnect(System.Action)
extern void SimpleWebClient_add_onConnect_m7B6F5543A5F46F383EA7E17937D83BFC51B757D3 (void);
// 0x00000005 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onConnect(System.Action)
extern void SimpleWebClient_remove_onConnect_m15001B282D2E22826324D3E56A7B68D7E4E1B086 (void);
// 0x00000006 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onDisconnect(System.Action)
extern void SimpleWebClient_add_onDisconnect_m972E5010EA59A16F32C5FE257C1C8828A9146040 (void);
// 0x00000007 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onDisconnect(System.Action)
extern void SimpleWebClient_remove_onDisconnect_m94FFBAD0F6B7B15D0E1F30AE54F3C2396085950E (void);
// 0x00000008 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void SimpleWebClient_add_onData_mBA6F548D6AD663AC37B7DF757A0699C16742FEB6 (void);
// 0x00000009 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void SimpleWebClient_remove_onData_mE44B0D79E71ABE04A49F81245A17E51641BA9C01 (void);
// 0x0000000A System.Void Mirror.SimpleWeb.SimpleWebClient::add_onError(System.Action`1<System.Exception>)
extern void SimpleWebClient_add_onError_m7BDAB0BCA3AF9CFD72180D1B8079D75F2782F0A1 (void);
// 0x0000000B System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onError(System.Action`1<System.Exception>)
extern void SimpleWebClient_remove_onError_m4617B28F210AEDA15C102BA2DC15E50EA9C0E169 (void);
// 0x0000000C System.Void Mirror.SimpleWeb.SimpleWebClient::ProcessMessageQueue(UnityEngine.MonoBehaviour)
extern void SimpleWebClient_ProcessMessageQueue_m3B29B9BA0A9AFB3B4AABDC84CA2C26AD584AD140 (void);
// 0x0000000D System.Void Mirror.SimpleWeb.SimpleWebClient::Connect(System.Uri)
// 0x0000000E System.Void Mirror.SimpleWeb.SimpleWebClient::Disconnect()
// 0x0000000F System.Void Mirror.SimpleWeb.SimpleWebClient::Send(System.ArraySegment`1<System.Byte>)
// 0x00000010 System.Boolean Mirror.SimpleWeb.ClientHandshake::TryHandshake(Mirror.SimpleWeb.Connection,System.Uri)
extern void ClientHandshake_TryHandshake_m283EB9A04EC9B127F72040721B22EA243F93B56A (void);
// 0x00000011 System.Void Mirror.SimpleWeb.ClientHandshake::.ctor()
extern void ClientHandshake__ctor_m2F4DD107802EF39796BB2EEBAD89865213484EAF (void);
// 0x00000012 System.Boolean Mirror.SimpleWeb.ClientSslHelper::TryCreateStream(Mirror.SimpleWeb.Connection,System.Uri)
extern void ClientSslHelper_TryCreateStream_m78B4B166AAC04CB388E58842735D5A59493BE11C (void);
// 0x00000013 System.IO.Stream Mirror.SimpleWeb.ClientSslHelper::CreateStream(System.Net.Sockets.NetworkStream,System.Uri)
extern void ClientSslHelper_CreateStream_mF0243F39852131082C2D2326FC2D2822249400A7 (void);
// 0x00000014 System.Boolean Mirror.SimpleWeb.ClientSslHelper::ValidateServerCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ClientSslHelper_ValidateServerCertificate_m1F4C6CFB5595484317A53FBF8819E7ABC0F70566 (void);
// 0x00000015 System.Void Mirror.SimpleWeb.ClientSslHelper::.ctor()
extern void ClientSslHelper__ctor_mD65B4EA123F79EF2411AC034F3B5C31C21ED2D91 (void);
// 0x00000016 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::.ctor(System.Int32,System.Int32,Mirror.SimpleWeb.TcpConfig)
extern void WebSocketClientStandAlone__ctor_mE5AEC78D943AB2273E833C508C8C28423B4A3518 (void);
// 0x00000017 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Connect(System.Uri)
extern void WebSocketClientStandAlone_Connect_m507D83E56BC70C9EDA4706290D78137E2327854B (void);
// 0x00000018 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::ConnectAndReceiveLoop(System.Uri)
extern void WebSocketClientStandAlone_ConnectAndReceiveLoop_mCC5D61CF1DC572C971BF5EFDF45D3B98FBB2557D (void);
// 0x00000019 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::AfterConnectionDisposed(Mirror.SimpleWeb.Connection)
extern void WebSocketClientStandAlone_AfterConnectionDisposed_m0A17BA82B4E639A8EE772883AB94368586989E39 (void);
// 0x0000001A System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Disconnect()
extern void WebSocketClientStandAlone_Disconnect_m526FACB91ECED67582516E4B87F2716C01C23366 (void);
// 0x0000001B System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Send(System.ArraySegment`1<System.Byte>)
extern void WebSocketClientStandAlone_Send_m7450DCD36AD04C9C00B1D34804062A5B1101734D (void);
// 0x0000001C System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::<ConnectAndReceiveLoop>b__6_0()
extern void WebSocketClientStandAlone_U3CConnectAndReceiveLoopU3Eb__6_0_mC554778884F28BCA86698D9391CB9941639B8DC9 (void);
// 0x0000001D System.Boolean Mirror.SimpleWeb.SimpleWebJSLib::IsConnected(System.Int32)
extern void SimpleWebJSLib_IsConnected_mDCC0E83A8EB8622AD7B384411C91550D955250D8 (void);
// 0x0000001E System.Int32 Mirror.SimpleWeb.SimpleWebJSLib::Connect(System.String,System.Action`1<System.Int32>,System.Action`1<System.Int32>,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Action`1<System.Int32>)
extern void SimpleWebJSLib_Connect_mC7C0FE72919E56902B30D665CF6F2B0BFE5951DB (void);
// 0x0000001F System.Void Mirror.SimpleWeb.SimpleWebJSLib::Disconnect(System.Int32)
extern void SimpleWebJSLib_Disconnect_m57E2E20921495E5BD50C4F2D0617E4365B430707 (void);
// 0x00000020 System.Boolean Mirror.SimpleWeb.SimpleWebJSLib::Send(System.Int32,System.Byte[],System.Int32,System.Int32)
extern void SimpleWebJSLib_Send_mD540FE8795376AB371FF6BBE841FA133D5967CA2 (void);
// 0x00000021 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::.ctor(System.Int32,System.Int32)
extern void WebSocketClientWebGl__ctor_mEB774732CA63DB5A8ADA0A4BA86A3CCF0F512B94 (void);
// 0x00000022 System.Boolean Mirror.SimpleWeb.WebSocketClientWebGl::CheckJsConnected()
extern void WebSocketClientWebGl_CheckJsConnected_m705353286E64A5B24D461D3A2118B810B9AE089A (void);
// 0x00000023 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Connect(System.Uri)
extern void WebSocketClientWebGl_Connect_mB9E69E3DF2D9899B76F9338C3DBB66F9A4C07545 (void);
// 0x00000024 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Disconnect()
extern void WebSocketClientWebGl_Disconnect_mDDC56C4E0F3D80B6D752BD989A9F73C75AB04A3F (void);
// 0x00000025 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Send(System.ArraySegment`1<System.Byte>)
extern void WebSocketClientWebGl_Send_mD4F90B639844FD05DE42AE8663960B154003FCFF (void);
// 0x00000026 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onOpen()
extern void WebSocketClientWebGl_onOpen_mA97F39516B9BD51F359AA668AD0C4DA3057324C1 (void);
// 0x00000027 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onClose()
extern void WebSocketClientWebGl_onClose_m8E18FC19E43F617E6C9CA5C52765E01A821DD9DA (void);
// 0x00000028 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onMessage(System.IntPtr,System.Int32)
extern void WebSocketClientWebGl_onMessage_m4884E309888753644DB8A5089200FC5016D36B9B (void);
// 0x00000029 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onErr()
extern void WebSocketClientWebGl_onErr_m2E387B7514720BA1450FC3B6AD0B6976BB1E3238 (void);
// 0x0000002A System.Void Mirror.SimpleWeb.WebSocketClientWebGl::OpenCallback(System.Int32)
extern void WebSocketClientWebGl_OpenCallback_mAD7CEB7BC927646C6A7B11AC41A9CC6714B8F413 (void);
// 0x0000002B System.Void Mirror.SimpleWeb.WebSocketClientWebGl::CloseCallBack(System.Int32)
extern void WebSocketClientWebGl_CloseCallBack_m5A3C7F68D38F7A1DE8F990F5E78A6AEAD80FED00 (void);
// 0x0000002C System.Void Mirror.SimpleWeb.WebSocketClientWebGl::MessageCallback(System.Int32,System.IntPtr,System.Int32)
extern void WebSocketClientWebGl_MessageCallback_m8827FD5E0D2473A51DBC47EF5060CAC5C6ED1A69 (void);
// 0x0000002D System.Void Mirror.SimpleWeb.WebSocketClientWebGl::ErrorCallback(System.Int32)
extern void WebSocketClientWebGl_ErrorCallback_m9E9D7A1A8C522DFFE4799B41E17C1B41401BD2B3 (void);
// 0x0000002E System.Void Mirror.SimpleWeb.WebSocketClientWebGl::.cctor()
extern void WebSocketClientWebGl__cctor_m441903F27F2FFC759DB343C4976A42A97F9D66BC (void);
// 0x0000002F System.Void Mirror.SimpleWeb.IBufferOwner::Return(Mirror.SimpleWeb.ArrayBuffer)
// 0x00000030 System.Void Mirror.SimpleWeb.ArrayBuffer::SetReleasesRequired(System.Int32)
extern void ArrayBuffer_SetReleasesRequired_m48A89A931E608BEE6124005AB7948AD2C8407593 (void);
// 0x00000031 System.Void Mirror.SimpleWeb.ArrayBuffer::.ctor(Mirror.SimpleWeb.IBufferOwner,System.Int32)
extern void ArrayBuffer__ctor_m6A073590355953433D8A7B7BA328906E21489F05 (void);
// 0x00000032 System.Void Mirror.SimpleWeb.ArrayBuffer::Release()
extern void ArrayBuffer_Release_m689C2233D55AF9F00F101CA6C820FA34DEBA42B8 (void);
// 0x00000033 System.Void Mirror.SimpleWeb.ArrayBuffer::Dispose()
extern void ArrayBuffer_Dispose_mECF269EB79268A887FE601D739ED7E08264C6F50 (void);
// 0x00000034 System.Void Mirror.SimpleWeb.ArrayBuffer::CopyTo(System.Byte[],System.Int32)
extern void ArrayBuffer_CopyTo_m814B37C7EF4B603D6ECB2177D3CA127BE2A9A0B2 (void);
// 0x00000035 System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.ArraySegment`1<System.Byte>)
extern void ArrayBuffer_CopyFrom_m6E8D9D4719EEE0845E65C78B482E1BE5322EFDD7 (void);
// 0x00000036 System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.Byte[],System.Int32,System.Int32)
extern void ArrayBuffer_CopyFrom_m012AB58B5603C368CFDB73D3645750C0E778B67B (void);
// 0x00000037 System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.IntPtr,System.Int32)
extern void ArrayBuffer_CopyFrom_mB79F039D79394AADC8C8094EA024DE3BDB124C58 (void);
// 0x00000038 System.ArraySegment`1<System.Byte> Mirror.SimpleWeb.ArrayBuffer::ToSegment()
extern void ArrayBuffer_ToSegment_m06952522FD31ABD557FA9E3AA1F4129ECB41E59E (void);
// 0x00000039 System.Void Mirror.SimpleWeb.ArrayBuffer::Validate(System.Int32)
extern void ArrayBuffer_Validate_m40ED809A40AECE77A7F510B57E81D4092558CCD0 (void);
// 0x0000003A System.Void Mirror.SimpleWeb.BufferBucket::.ctor(System.Int32)
extern void BufferBucket__ctor_m5D83ED3F4CA550D537B2E1AC087FF4DCA812E09E (void);
// 0x0000003B Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.BufferBucket::Take()
extern void BufferBucket_Take_mF2565E360F6BE150AF12B9B6F7E73B6CBD0D60CC (void);
// 0x0000003C System.Void Mirror.SimpleWeb.BufferBucket::Return(Mirror.SimpleWeb.ArrayBuffer)
extern void BufferBucket_Return_m2C699B6CFAFB435877A2AA7016F84ACCEFD96421 (void);
// 0x0000003D System.Void Mirror.SimpleWeb.BufferBucket::IncrementCreated()
extern void BufferBucket_IncrementCreated_m15B115712B1D8F536AEA27BB174AF52A6B4972EB (void);
// 0x0000003E System.Void Mirror.SimpleWeb.BufferBucket::DecrementCreated()
extern void BufferBucket_DecrementCreated_m65559AF2723EED0F8F158CA447743C61497841FA (void);
// 0x0000003F System.Void Mirror.SimpleWeb.BufferPool::.ctor(System.Int32,System.Int32,System.Int32)
extern void BufferPool__ctor_m858F5E294291804ACA4A3CC6A5976FC63F028664 (void);
// 0x00000040 System.Void Mirror.SimpleWeb.BufferPool::Validate()
extern void BufferPool_Validate_m443DE8D3791A07AF0DDAE836EE297D2A4BA80A06 (void);
// 0x00000041 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.BufferPool::Take(System.Int32)
extern void BufferPool_Take_mF205E99F684E4F7C58B97376FDB445E7523D130B (void);
// 0x00000042 System.Void Mirror.SimpleWeb.Connection::.ctor(System.Net.Sockets.TcpClient,System.Action`1<Mirror.SimpleWeb.Connection>)
extern void Connection__ctor_m6E6D5B378B698D983B4A8C040840AA03167F479C (void);
// 0x00000043 System.Void Mirror.SimpleWeb.Connection::Dispose()
extern void Connection_Dispose_mE60F70B65E590F9D962B04C40FC539F137CAFD17 (void);
// 0x00000044 System.String Mirror.SimpleWeb.Connection::ToString()
extern void Connection_ToString_m5A9433E65CB3D3F5ABB5FF286EBF43436F74B75A (void);
// 0x00000045 System.Void Mirror.SimpleWeb.Constants::.cctor()
extern void Constants__cctor_mA9572F5FEA824A5B45937D8643196628FEA0948A (void);
// 0x00000046 System.String Mirror.SimpleWeb.Log::BufferToString(System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
extern void Log_BufferToString_m48F33DAC8329D0D92D07173AFB8E91BC5558DA00 (void);
// 0x00000047 System.Void Mirror.SimpleWeb.Log::DumpBuffer(System.String,System.Byte[],System.Int32,System.Int32)
extern void Log_DumpBuffer_mFF46D164DD546575D879D8297340804AFDC0DB4E (void);
// 0x00000048 System.Void Mirror.SimpleWeb.Log::DumpBuffer(System.String,Mirror.SimpleWeb.ArrayBuffer)
extern void Log_DumpBuffer_m3005C81FC3895438043C4E50D5520190A07A1848 (void);
// 0x00000049 System.Void Mirror.SimpleWeb.Log::Verbose(System.String,System.Boolean)
extern void Log_Verbose_m2DD072EEAE70AC17202F8B3B1C7B993B938968FF (void);
// 0x0000004A System.Void Mirror.SimpleWeb.Log::Info(System.String,System.Boolean)
extern void Log_Info_m5866AF2FAE539F7F94B8FCD2DC9B880095FF668B (void);
// 0x0000004B System.Void Mirror.SimpleWeb.Log::InfoException(System.Exception)
extern void Log_InfoException_mC2047F8120A71420A0994DFDFB82C96C9539B4A9 (void);
// 0x0000004C System.Void Mirror.SimpleWeb.Log::Warn(System.String,System.Boolean)
extern void Log_Warn_m91E1164B567FF0B4C892E45E283738631CE49F03 (void);
// 0x0000004D System.Void Mirror.SimpleWeb.Log::Error(System.String,System.Boolean)
extern void Log_Error_m404A46EBC61E85D1BDB8224474B260FB078380A2 (void);
// 0x0000004E System.Void Mirror.SimpleWeb.Log::Exception(System.Exception)
extern void Log_Exception_m00D3AF0BC8E4746BBF5C0C7316F64DD35B8B2E6D (void);
// 0x0000004F System.Void Mirror.SimpleWeb.Log::.cctor()
extern void Log__cctor_mCE46FA916786E0EBFC3D9655CED58648423895E6 (void);
// 0x00000050 System.Void Mirror.SimpleWeb.Message::.ctor(Mirror.SimpleWeb.EventType)
extern void Message__ctor_m6334D1507C2049BE349820608D41269D84A5E04B (void);
// 0x00000051 System.Void Mirror.SimpleWeb.Message::.ctor(Mirror.SimpleWeb.ArrayBuffer)
extern void Message__ctor_mC5B5DD4BE7AC57DBDFDC73258DC8ACBEC83A76C9 (void);
// 0x00000052 System.Void Mirror.SimpleWeb.Message::.ctor(System.Exception)
extern void Message__ctor_mAB0A32426379EE5C1A1E6C6456BCFF2B3ABF0D56 (void);
// 0x00000053 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,Mirror.SimpleWeb.EventType)
extern void Message__ctor_m792966215DDB9B92AAFF6F5EA1EC670F9F7112CE (void);
// 0x00000054 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,Mirror.SimpleWeb.ArrayBuffer)
extern void Message__ctor_m922FB43CFCD7D4B72D0741923ADDFE381AC479E6 (void);
// 0x00000055 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,System.Exception)
extern void Message__ctor_m29551DA61A371C722BA045FE5D570328F4F3702B (void);
// 0x00000056 System.Byte Mirror.SimpleWeb.MessageProcessor::FirstLengthByte(System.Byte[])
extern void MessageProcessor_FirstLengthByte_mAE1081655DA1314DB0E735BA1AF2CCB76BDD1B4A (void);
// 0x00000057 System.Boolean Mirror.SimpleWeb.MessageProcessor::NeedToReadShortLength(System.Byte[])
extern void MessageProcessor_NeedToReadShortLength_mE362DD61795EADAA6D135FA69EC97F8C4AEF0900 (void);
// 0x00000058 System.Int32 Mirror.SimpleWeb.MessageProcessor::GetOpcode(System.Byte[])
extern void MessageProcessor_GetOpcode_m0FFD17FD652AC86692083A9B0BB5DFB2E247BAB7 (void);
// 0x00000059 System.Int32 Mirror.SimpleWeb.MessageProcessor::GetPayloadLength(System.Byte[])
extern void MessageProcessor_GetPayloadLength_mF3FE27CC9CC01437A2EB45D82BE90659F76AD842 (void);
// 0x0000005A System.Void Mirror.SimpleWeb.MessageProcessor::ValidateHeader(System.Byte[],System.Int32,System.Boolean)
extern void MessageProcessor_ValidateHeader_m665C8C59671C00B68F59EC47AB6C7EB73E155E7B (void);
// 0x0000005B System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_mFBAF55F5A3BE367D53583EE8F083536655D71D90 (void);
// 0x0000005C System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,Mirror.SimpleWeb.ArrayBuffer,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_m8FA37E51EC0743EA95B23EA0AA768AAF4D83DEDB (void);
// 0x0000005D System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_mCDE88C90587D74C8777BBA0C67AECA06612608A9 (void);
// 0x0000005E System.Int32 Mirror.SimpleWeb.MessageProcessor::GetMessageLength(System.Byte[],System.Int32,System.Byte)
extern void MessageProcessor_GetMessageLength_mF5664D654B5EBB0688BED1B9763A97524A960B90 (void);
// 0x0000005F System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfNotFinished(System.Boolean)
extern void MessageProcessor_ThrowIfNotFinished_m11DA15D4874856BDD1DF90274EE7524CCCFC7845 (void);
// 0x00000060 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfMaskNotExpected(System.Boolean,System.Boolean)
extern void MessageProcessor_ThrowIfMaskNotExpected_mF0719BF9509997BFF47689CC8ACDD267386537D3 (void);
// 0x00000061 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfBadOpCode(System.Int32)
extern void MessageProcessor_ThrowIfBadOpCode_m3CBF468C3128811842482FF5163430382BE4BEA8 (void);
// 0x00000062 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfLengthZero(System.Int32)
extern void MessageProcessor_ThrowIfLengthZero_m17E8471649F0D5BC1BD0F0B1DEB0FE446F9F9108 (void);
// 0x00000063 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfMsgLengthTooLong(System.Int32,System.Int32)
extern void MessageProcessor_ThrowIfMsgLengthTooLong_m67DFB3F9F103D9E5EF007AD1728412E8CB400BBF (void);
// 0x00000064 System.Int32 Mirror.SimpleWeb.ReadHelper::Read(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ReadHelper_Read_mEC972DC75305ABC00938779D148448B487660F52 (void);
// 0x00000065 System.Boolean Mirror.SimpleWeb.ReadHelper::TryRead(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ReadHelper_TryRead_m2CE3E988F7D5D1A92A6733BF97509F728DEF9F48 (void);
// 0x00000066 System.Nullable`1<System.Int32> Mirror.SimpleWeb.ReadHelper::SafeReadTillMatch(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Byte[])
extern void ReadHelper_SafeReadTillMatch_mCF696AC24F619D4F6D9998B9936376DBEFC59CEB (void);
// 0x00000067 System.Void Mirror.SimpleWeb.ReadHelperException::.ctor(System.String)
extern void ReadHelperException__ctor_m80DFAAB583E41B248CAB474C7348697D2F872A28 (void);
// 0x00000068 System.Void Mirror.SimpleWeb.ReadHelperException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ReadHelperException__ctor_m91B74DF3103801FACFB9EE5993CECF5C5C29C6C4 (void);
// 0x00000069 System.Void Mirror.SimpleWeb.ReceiveLoop::Loop(Mirror.SimpleWeb.ReceiveLoop/Config)
extern void ReceiveLoop_Loop_m4F4B23AF0DC75EEBD973497B4BFD1612CE7B8772 (void);
// 0x0000006A System.Void Mirror.SimpleWeb.ReceiveLoop::ReadOneMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[])
extern void ReceiveLoop_ReadOneMessage_mC0210200215C0282272350FC06DB4E9724F1C014 (void);
// 0x0000006B System.Void Mirror.SimpleWeb.ReceiveLoop::HandleArrayMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_HandleArrayMessage_m5D70DDC26F1C0253DF25A8574CF16F8F0481ED42 (void);
// 0x0000006C System.Void Mirror.SimpleWeb.ReceiveLoop::HandleCloseMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_HandleCloseMessage_m0477F5D8D974B4854FF7F2265EDBA0BB2E6DBC37 (void);
// 0x0000006D System.String Mirror.SimpleWeb.ReceiveLoop::GetCloseMessage(System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_GetCloseMessage_mF4B3A88658B76ADE9906703F384E28B7D4E4B30A (void);
// 0x0000006E System.Int32 Mirror.SimpleWeb.ReceiveLoop::GetCloseCode(System.Byte[],System.Int32)
extern void ReceiveLoop_GetCloseCode_m2DF102E2C5666ED4EB6F62F0582F4DBB33E9C979 (void);
// 0x0000006F System.Void Mirror.SimpleWeb.SendLoopConfig::.cctor()
extern void SendLoopConfig__cctor_mE2C71DDE0B7098A58A65460145EECD4A498FF8F7 (void);
// 0x00000070 System.Void Mirror.SimpleWeb.SendLoop::Loop(Mirror.SimpleWeb.SendLoop/Config)
extern void SendLoop_Loop_mC216257FB87211979A2B1D538EEFCD3CB8B353A8 (void);
// 0x00000071 System.Int32 Mirror.SimpleWeb.SendLoop::SendMessage(System.Byte[],System.Int32,Mirror.SimpleWeb.ArrayBuffer,System.Boolean,Mirror.SimpleWeb.SendLoop/MaskHelper)
extern void SendLoop_SendMessage_m07D98D50405A0CD76CE80CBEF0A308B15066CAAA (void);
// 0x00000072 System.Int32 Mirror.SimpleWeb.SendLoop::WriteHeader(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern void SendLoop_WriteHeader_mAF9EA39F8BE04BC0E93CE2DEB709BAF5F03943BC (void);
// 0x00000073 System.Void Mirror.SimpleWeb.TcpConfig::.ctor(System.Boolean,System.Int32,System.Int32)
extern void TcpConfig__ctor_mFD91205F3034702E65FA83038F39C36D4BB422EB (void);
// 0x00000074 System.Void Mirror.SimpleWeb.TcpConfig::ApplyTo(System.Net.Sockets.TcpClient)
extern void TcpConfig_ApplyTo_mDFD87993BB2782F242A04FCE9DDF0412DD7B60D0 (void);
// 0x00000075 System.Void Mirror.SimpleWeb.Utils::CheckForInterupt()
extern void Utils_CheckForInterupt_mDC950DB0841943FAAD2083D8C16EDCD89286BA26 (void);
// 0x00000076 System.Void Mirror.SimpleWeb.ServerHandshake::.ctor(Mirror.SimpleWeb.BufferPool,System.Int32)
extern void ServerHandshake__ctor_m9CD0552911E0F8E34B34FFCCADC2D556047F1B4B (void);
// 0x00000077 System.Void Mirror.SimpleWeb.ServerHandshake::Finalize()
extern void ServerHandshake_Finalize_mDB1CA28FACDE64C6431DE51B1DD981CB113A0A64 (void);
// 0x00000078 System.Boolean Mirror.SimpleWeb.ServerHandshake::TryHandshake(Mirror.SimpleWeb.Connection)
extern void ServerHandshake_TryHandshake_m3BCC4B58381F7EFCC13430D0C1D35957B380413F (void);
// 0x00000079 System.String Mirror.SimpleWeb.ServerHandshake::ReadToEndForHandshake(System.IO.Stream)
extern void ServerHandshake_ReadToEndForHandshake_m159EA71CFBDE160A57062316FEACF46B51D48392 (void);
// 0x0000007A System.Boolean Mirror.SimpleWeb.ServerHandshake::IsGet(System.Byte[])
extern void ServerHandshake_IsGet_mFEE36A2E599D8701651E540CF00725AA752DBB1F (void);
// 0x0000007B System.Void Mirror.SimpleWeb.ServerHandshake::AcceptHandshake(System.IO.Stream,System.String)
extern void ServerHandshake_AcceptHandshake_mB85520CC2CDA20220C8838A76624F4116E7B9307 (void);
// 0x0000007C System.Void Mirror.SimpleWeb.ServerHandshake::GetKey(System.String,System.Byte[])
extern void ServerHandshake_GetKey_m718E11A9481B067557D162B6257B8CF60D886EFE (void);
// 0x0000007D System.Void Mirror.SimpleWeb.ServerHandshake::AppendGuid(System.Byte[])
extern void ServerHandshake_AppendGuid_mE7FFCB696EC2F3843E6E2D6DB59E4F4BF1710B62 (void);
// 0x0000007E System.Byte[] Mirror.SimpleWeb.ServerHandshake::CreateHash(System.Byte[])
extern void ServerHandshake_CreateHash_mFF19583C8EFD68D092C3C3C40AF4B6F724F60DD9 (void);
// 0x0000007F System.Void Mirror.SimpleWeb.ServerHandshake::CreateResponse(System.Byte[],System.Byte[])
extern void ServerHandshake_CreateResponse_m547A8BC3311B87F3233D7D0C2B1E69F1CF0A9BE8 (void);
// 0x00000080 System.Void Mirror.SimpleWeb.SslConfig::.ctor(System.Boolean,System.String,System.String,System.Security.Authentication.SslProtocols)
extern void SslConfig__ctor_mA33075E5F601A766D80BBA3ECBED6F0FE9FEAFC6 (void);
// 0x00000081 System.Void Mirror.SimpleWeb.ServerSslHelper::.ctor(Mirror.SimpleWeb.SslConfig)
extern void ServerSslHelper__ctor_m2D908F1AAFAA2F2B579BB9D49D861C6C0DB1FBBC (void);
// 0x00000082 System.Boolean Mirror.SimpleWeb.ServerSslHelper::TryCreateStream(Mirror.SimpleWeb.Connection)
extern void ServerSslHelper_TryCreateStream_m082BFF65087FF27BD3B7C9A24819D04EA9CCE0DF (void);
// 0x00000083 System.IO.Stream Mirror.SimpleWeb.ServerSslHelper::CreateStream(System.Net.Sockets.NetworkStream)
extern void ServerSslHelper_CreateStream_mB7A447E215BBD871B83689FFE6462CB714FD3B00 (void);
// 0x00000084 System.Boolean Mirror.SimpleWeb.ServerSslHelper::acceptClient(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerSslHelper_acceptClient_mC0A15671A5E1CD98F8F6CE682A6141E464D02BEA (void);
// 0x00000085 System.Void Mirror.SimpleWeb.SimpleWebServer::.ctor(System.Int32,Mirror.SimpleWeb.TcpConfig,System.Int32,System.Int32,Mirror.SimpleWeb.SslConfig)
extern void SimpleWebServer__ctor_m57870EAAA2E548EB52AA4D4A0F725A872024641A (void);
// 0x00000086 System.Boolean Mirror.SimpleWeb.SimpleWebServer::get_Active()
extern void SimpleWebServer_get_Active_m2B07FD27430514FE9D02F1EAA6E64400BD88B9B0 (void);
// 0x00000087 System.Void Mirror.SimpleWeb.SimpleWebServer::set_Active(System.Boolean)
extern void SimpleWebServer_set_Active_m7E9CE1FA9FBECD4A4F9B979FBCBC0CE04D3FF1CD (void);
// 0x00000088 System.Void Mirror.SimpleWeb.SimpleWebServer::add_onConnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_add_onConnect_m887D77A40C674F5124D0AEEF78F5788100CD9283 (void);
// 0x00000089 System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onConnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_remove_onConnect_m4A856D4D947A786E1F5E7E8A7D4BD1DEBB7F753F (void);
// 0x0000008A System.Void Mirror.SimpleWeb.SimpleWebServer::add_onDisconnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_add_onDisconnect_mF292131C9D624CC0698A30AE5DF36B99666B12AE (void);
// 0x0000008B System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onDisconnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_remove_onDisconnect_m96B0C569ACDD53F4FD71BD404B374E0E0F01C1C6 (void);
// 0x0000008C System.Void Mirror.SimpleWeb.SimpleWebServer::add_onData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void SimpleWebServer_add_onData_m40BFED33A9905F1FF32E0B5B9B71EB13D37FE19E (void);
// 0x0000008D System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void SimpleWebServer_remove_onData_m8550C9030CE1776510DE10642F9C605727499C3A (void);
// 0x0000008E System.Void Mirror.SimpleWeb.SimpleWebServer::add_onError(System.Action`2<System.Int32,System.Exception>)
extern void SimpleWebServer_add_onError_m47FA1E12646E9F7AB531891C9244FBBC632E8E49 (void);
// 0x0000008F System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onError(System.Action`2<System.Int32,System.Exception>)
extern void SimpleWebServer_remove_onError_mF81D6BAD7604A36EEED33319A1988C92CD7D2D3A (void);
// 0x00000090 System.Void Mirror.SimpleWeb.SimpleWebServer::Start(System.UInt16)
extern void SimpleWebServer_Start_mA88122669884631BD910A19DC90DF39565DD4BF9 (void);
// 0x00000091 System.Void Mirror.SimpleWeb.SimpleWebServer::Stop()
extern void SimpleWebServer_Stop_m993C6FF0DC9BBD33D95D651A5416FB969EC208CA (void);
// 0x00000092 System.Void Mirror.SimpleWeb.SimpleWebServer::SendAll(System.Collections.Generic.List`1<System.Int32>,System.ArraySegment`1<System.Byte>)
extern void SimpleWebServer_SendAll_mE111AA3E988D771F2D19B60B621E5E58C57C5A27 (void);
// 0x00000093 System.Void Mirror.SimpleWeb.SimpleWebServer::SendOne(System.Int32,System.ArraySegment`1<System.Byte>)
extern void SimpleWebServer_SendOne_m9F3D0BC74BA91E00D3F308B69BBCB853866C2B6D (void);
// 0x00000094 System.Boolean Mirror.SimpleWeb.SimpleWebServer::KickClient(System.Int32)
extern void SimpleWebServer_KickClient_m7B96284429AFDD5CB64F798035FEAB0AF8088F3F (void);
// 0x00000095 System.String Mirror.SimpleWeb.SimpleWebServer::GetClientAddress(System.Int32)
extern void SimpleWebServer_GetClientAddress_m09CB4D0BB99D8EA8FDA0B555725F930C42FF2E47 (void);
// 0x00000096 System.Void Mirror.SimpleWeb.SimpleWebServer::ProcessMessageQueue(UnityEngine.MonoBehaviour)
extern void SimpleWebServer_ProcessMessageQueue_mE31F6C05C0965F53B6C2BAB9C4B51D800AA3D5D4 (void);
// 0x00000097 System.Void Mirror.SimpleWeb.WebSocketServer::.ctor(Mirror.SimpleWeb.TcpConfig,System.Int32,System.Int32,Mirror.SimpleWeb.SslConfig,Mirror.SimpleWeb.BufferPool)
extern void WebSocketServer__ctor_m3F3C7FE2720B4AF8F095177C7D942ED4A5F86718 (void);
// 0x00000098 System.Void Mirror.SimpleWeb.WebSocketServer::Listen(System.Int32)
extern void WebSocketServer_Listen_m027EE96263CBDF681A02AB57EE99CD6AA142007E (void);
// 0x00000099 System.Void Mirror.SimpleWeb.WebSocketServer::Stop()
extern void WebSocketServer_Stop_m434223003BFC46034A29123187B95D33D13B5A6B (void);
// 0x0000009A System.Void Mirror.SimpleWeb.WebSocketServer::acceptLoop()
extern void WebSocketServer_acceptLoop_m2B55CC9854577ADF2C3223E50D88FE6CD448C04C (void);
// 0x0000009B System.Void Mirror.SimpleWeb.WebSocketServer::HandshakeAndReceiveLoop(Mirror.SimpleWeb.Connection)
extern void WebSocketServer_HandshakeAndReceiveLoop_m636642054F53DB6A2E7583D1E738960159B94A4C (void);
// 0x0000009C System.Void Mirror.SimpleWeb.WebSocketServer::AfterConnectionDisposed(Mirror.SimpleWeb.Connection)
extern void WebSocketServer_AfterConnectionDisposed_m68E5DBFCE15628E937E869DF2D97C9A8B6784738 (void);
// 0x0000009D System.Void Mirror.SimpleWeb.WebSocketServer::Send(System.Int32,Mirror.SimpleWeb.ArrayBuffer)
extern void WebSocketServer_Send_mE123DCCAB8D9FA6A2556D1A3A1680176E6B9B2A1 (void);
// 0x0000009E System.Boolean Mirror.SimpleWeb.WebSocketServer::CloseConnection(System.Int32)
extern void WebSocketServer_CloseConnection_m749AAE0C75BA7EA8008DFC7EF32E4C0D9700BDD6 (void);
// 0x0000009F System.String Mirror.SimpleWeb.WebSocketServer::GetClientAddress(System.Int32)
extern void WebSocketServer_GetClientAddress_m53DA445080F95E2A8C8B8F4C02316A02D09E2294 (void);
// 0x000000A0 Mirror.SimpleWeb.Log/Levels Mirror.SimpleWeb.SimpleWebTransport::get_LogLevels()
extern void SimpleWebTransport_get_LogLevels_m91DD6ADC45277627D52C9BD0B05430023E41A14D (void);
// 0x000000A1 System.Void Mirror.SimpleWeb.SimpleWebTransport::set_LogLevels(Mirror.SimpleWeb.Log/Levels)
extern void SimpleWebTransport_set_LogLevels_m36A0C47920EE78A6E90C2C9315B950825A8E90F9 (void);
// 0x000000A2 System.Void Mirror.SimpleWeb.SimpleWebTransport::OnValidate()
extern void SimpleWebTransport_OnValidate_m529626CE148BE517E06898B41F673865C0D97D53 (void);
// 0x000000A3 Mirror.SimpleWeb.TcpConfig Mirror.SimpleWeb.SimpleWebTransport::get_TcpConfig()
extern void SimpleWebTransport_get_TcpConfig_m4CEF30A4416EE54AC51F782CE380826AFDAB1AAF (void);
// 0x000000A4 System.Boolean Mirror.SimpleWeb.SimpleWebTransport::Available()
extern void SimpleWebTransport_Available_m0F8987D21301810DAFDAC68D6477D7BC01ADD457 (void);
// 0x000000A5 System.Int32 Mirror.SimpleWeb.SimpleWebTransport::GetMaxPacketSize(System.Int32)
extern void SimpleWebTransport_GetMaxPacketSize_mDA600942410A6ED4DBCBADA92D53A8575B31ED85 (void);
// 0x000000A6 System.Void Mirror.SimpleWeb.SimpleWebTransport::Awake()
extern void SimpleWebTransport_Awake_mB88C343BE85D092C98F1C7DF8272F9BD266498AF (void);
// 0x000000A7 System.Void Mirror.SimpleWeb.SimpleWebTransport::Shutdown()
extern void SimpleWebTransport_Shutdown_m0E52D221C35E06D535FAF8206C904DDE607E596E (void);
// 0x000000A8 System.String Mirror.SimpleWeb.SimpleWebTransport::GetClientScheme()
extern void SimpleWebTransport_GetClientScheme_mBC368326593A067687B5C18C4AB043D8E9650575 (void);
// 0x000000A9 System.String Mirror.SimpleWeb.SimpleWebTransport::GetServerScheme()
extern void SimpleWebTransport_GetServerScheme_mC372D78B47586417DEDEED8044720A892065EB70 (void);
// 0x000000AA System.Boolean Mirror.SimpleWeb.SimpleWebTransport::ClientConnected()
extern void SimpleWebTransport_ClientConnected_m2DDAA3D78DA86C680EC9063A4E62A6D1D0C7CB63 (void);
// 0x000000AB System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientConnect(System.String)
extern void SimpleWebTransport_ClientConnect_m47BAD669CCC6C783900DEE0785D2D64432C8B20B (void);
// 0x000000AC System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientDisconnect()
extern void SimpleWebTransport_ClientDisconnect_m6FFDC81707521F6F8896D3C5C13DBA1ECD208B82 (void);
// 0x000000AD System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
extern void SimpleWebTransport_ClientSend_m539404270E091859940B3F150385B4C1BF63A8CC (void);
// 0x000000AE System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientEarlyUpdate()
extern void SimpleWebTransport_ClientEarlyUpdate_m6D79389E36686276592377B9BD087D2AD770C4AE (void);
// 0x000000AF System.Boolean Mirror.SimpleWeb.SimpleWebTransport::ServerActive()
extern void SimpleWebTransport_ServerActive_m4DBC14C86C65B0F4C02FCE5002ED32155A04AE19 (void);
// 0x000000B0 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerStart()
extern void SimpleWebTransport_ServerStart_m65CFDB54DC221BBC0ACE64B07B81FFC709186255 (void);
// 0x000000B1 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerStop()
extern void SimpleWebTransport_ServerStop_m26DD1BEA0182B1E3623685E8B25B532FA68A2793 (void);
// 0x000000B2 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerDisconnect(System.Int32)
extern void SimpleWebTransport_ServerDisconnect_m1CFE38475FE42AA2A3DCF37CD76401FBA1F3C7D1 (void);
// 0x000000B3 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
extern void SimpleWebTransport_ServerSend_mC582DEB0A931D27B62DA7973F919C2C0FD302F8F (void);
// 0x000000B4 System.String Mirror.SimpleWeb.SimpleWebTransport::ServerGetClientAddress(System.Int32)
extern void SimpleWebTransport_ServerGetClientAddress_mEF867056221EDC65832666D54DDC69637914854D (void);
// 0x000000B5 System.Uri Mirror.SimpleWeb.SimpleWebTransport::ServerUri()
extern void SimpleWebTransport_ServerUri_m219E2BD0185A7E2532ABA6674D6D0670D3096F34 (void);
// 0x000000B6 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerEarlyUpdate()
extern void SimpleWebTransport_ServerEarlyUpdate_m78A5F2A2932600576866697BD231D0C70238A96C (void);
// 0x000000B7 System.Void Mirror.SimpleWeb.SimpleWebTransport::.ctor()
extern void SimpleWebTransport__ctor_m1B0B4F1644ABC9B5AEFAB735E671DC1D74FD1FB7 (void);
// 0x000000B8 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_0()
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_0_m189E0A9F2DF63A5F82499141E049929777F806B8 (void);
// 0x000000B9 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_1(System.ArraySegment`1<System.Byte>)
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_1_mFF181FC361D94D33A9E8F74A3242E2EE5152BC2C (void);
// 0x000000BA System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_2(System.Exception)
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_2_mB2682AC6FE401817A6D4CF7FC62E3074FB426C77 (void);
// 0x000000BB System.Void Mirror.SimpleWeb.SimpleWebTransport::<ServerStart>b__37_0(System.Int32,System.ArraySegment`1<System.Byte>)
extern void SimpleWebTransport_U3CServerStartU3Eb__37_0_m5EE7CDE9E477FE673C1646A79EBAF5E279407C98 (void);
// 0x000000BC Mirror.SimpleWeb.SslConfig Mirror.SimpleWeb.SslConfigLoader::Load(Mirror.SimpleWeb.SimpleWebTransport)
extern void SslConfigLoader_Load_mE8A8FD310BE61A022C0E3892BBC031033C48F87E (void);
// 0x000000BD Mirror.SimpleWeb.SslConfigLoader/Cert Mirror.SimpleWeb.SslConfigLoader::LoadCertJson(System.String)
extern void SslConfigLoader_LoadCertJson_m310EE3BC7B53DEE4CDBBB006CC6EF00B79191FD2 (void);
// 0x000000BE System.Void Mirror.SimpleWeb.SslConfigLoader::.ctor()
extern void SslConfigLoader__ctor_m1BA9D48AF3829EA9327E65C1E87C923E1AF467A3 (void);
// 0x000000BF System.Void Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m877A946B44CB251F0F510C5D8A04C164CC6A7185 (void);
// 0x000000C0 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0::<Connect>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CConnectU3Eb__0_m17D19D3ED6706895773DF717FBEB0F9CE9BCC0CB (void);
// 0x000000C1 System.Void Mirror.SimpleWeb.ReadHelper/<>c::.cctor()
extern void U3CU3Ec__cctor_m8B2AD1ECF634347B403354563B77C502FF76E11B (void);
// 0x000000C2 System.Void Mirror.SimpleWeb.ReadHelper/<>c::.ctor()
extern void U3CU3Ec__ctor_m9B17680A18E64DA2716C968536DC3F930D8E1FF7 (void);
// 0x000000C3 System.Boolean Mirror.SimpleWeb.ReadHelper/<>c::<Read>b__0_0(System.Exception)
extern void U3CU3Ec_U3CReadU3Eb__0_0_mB270AE70BEA2AB14E471C3CFD2B60F0AF0E8A7E8 (void);
// 0x000000C4 System.Void Mirror.SimpleWeb.ReceiveLoop/Config::.ctor(Mirror.SimpleWeb.Connection,System.Int32,System.Boolean,System.Collections.Concurrent.ConcurrentQueue`1<Mirror.SimpleWeb.Message>,Mirror.SimpleWeb.BufferPool)
extern void Config__ctor_m91688410A309469BBF9628C96E75CD6F073F4FF4 (void);
// 0x000000C5 System.Void Mirror.SimpleWeb.ReceiveLoop/Config::Deconstruct(Mirror.SimpleWeb.Connection&,System.Int32&,System.Boolean&,System.Collections.Concurrent.ConcurrentQueue`1<Mirror.SimpleWeb.Message>&,Mirror.SimpleWeb.BufferPool&)
extern void Config_Deconstruct_mE1EBA49496D438F07A46B2B51B799618D6FDCD26 (void);
// 0x000000C6 System.Void Mirror.SimpleWeb.SendLoop/Config::.ctor(Mirror.SimpleWeb.Connection,System.Int32,System.Boolean)
extern void Config__ctor_mB2F6F0EEF1065FBC0A50DCAB5599D07244B67936 (void);
// 0x000000C7 System.Void Mirror.SimpleWeb.SendLoop/Config::Deconstruct(Mirror.SimpleWeb.Connection&,System.Int32&,System.Boolean&)
extern void Config_Deconstruct_m05B5DD481B018CCD30C5316CC97CDF5C3E68F644 (void);
// 0x000000C8 System.Void Mirror.SimpleWeb.SendLoop/MaskHelper::.ctor()
extern void MaskHelper__ctor_m7A3BF795CE7937FD4C165671316CE803129303D1 (void);
// 0x000000C9 System.Void Mirror.SimpleWeb.SendLoop/MaskHelper::Dispose()
extern void MaskHelper_Dispose_mBB4C6B0CF0989DD48E7C9FC91E7D60EC7E88C636 (void);
// 0x000000CA System.Int32 Mirror.SimpleWeb.SendLoop/MaskHelper::WriteMask(System.Byte[],System.Int32)
extern void MaskHelper_WriteMask_m0F3A1213208C222312003AF82A7C61349161DE03 (void);
// 0x000000CB System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m42749CCCC20948737179C7C66CFC4C9498CB3902 (void);
// 0x000000CC System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0::<acceptLoop>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CacceptLoopU3Eb__0_m9F46576C4AE39DAA11814009D4D05CC5FF960324 (void);
// 0x000000CD System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m342FF454E0B90B5C0B3BE64AF6F41EAC01740243 (void);
// 0x000000CE System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0::<HandshakeAndReceiveLoop>b__0()
extern void U3CU3Ec__DisplayClass15_0_U3CHandshakeAndReceiveLoopU3Eb__0_mDE32CE1E1BAAC8FB988ADE899FC187CBAF152EDC (void);
static Il2CppMethodPointer s_methodPointers[206] = 
{
	SimpleWebClient_Create_m09C7B332EEABD6FE3F8CC6722AB02222C5EC15C5,
	SimpleWebClient__ctor_m8F89B12F62A0FC27DF94D5447C6E9F0E9E90E8C0,
	SimpleWebClient_get_ConnectionState_m5DB9A2BB6860529F60CD583C7A8EB0CBE014D5FC,
	SimpleWebClient_add_onConnect_m7B6F5543A5F46F383EA7E17937D83BFC51B757D3,
	SimpleWebClient_remove_onConnect_m15001B282D2E22826324D3E56A7B68D7E4E1B086,
	SimpleWebClient_add_onDisconnect_m972E5010EA59A16F32C5FE257C1C8828A9146040,
	SimpleWebClient_remove_onDisconnect_m94FFBAD0F6B7B15D0E1F30AE54F3C2396085950E,
	SimpleWebClient_add_onData_mBA6F548D6AD663AC37B7DF757A0699C16742FEB6,
	SimpleWebClient_remove_onData_mE44B0D79E71ABE04A49F81245A17E51641BA9C01,
	SimpleWebClient_add_onError_m7BDAB0BCA3AF9CFD72180D1B8079D75F2782F0A1,
	SimpleWebClient_remove_onError_m4617B28F210AEDA15C102BA2DC15E50EA9C0E169,
	SimpleWebClient_ProcessMessageQueue_m3B29B9BA0A9AFB3B4AABDC84CA2C26AD584AD140,
	NULL,
	NULL,
	NULL,
	ClientHandshake_TryHandshake_m283EB9A04EC9B127F72040721B22EA243F93B56A,
	ClientHandshake__ctor_m2F4DD107802EF39796BB2EEBAD89865213484EAF,
	ClientSslHelper_TryCreateStream_m78B4B166AAC04CB388E58842735D5A59493BE11C,
	ClientSslHelper_CreateStream_mF0243F39852131082C2D2326FC2D2822249400A7,
	ClientSslHelper_ValidateServerCertificate_m1F4C6CFB5595484317A53FBF8819E7ABC0F70566,
	ClientSslHelper__ctor_mD65B4EA123F79EF2411AC034F3B5C31C21ED2D91,
	WebSocketClientStandAlone__ctor_mE5AEC78D943AB2273E833C508C8C28423B4A3518,
	WebSocketClientStandAlone_Connect_m507D83E56BC70C9EDA4706290D78137E2327854B,
	WebSocketClientStandAlone_ConnectAndReceiveLoop_mCC5D61CF1DC572C971BF5EFDF45D3B98FBB2557D,
	WebSocketClientStandAlone_AfterConnectionDisposed_m0A17BA82B4E639A8EE772883AB94368586989E39,
	WebSocketClientStandAlone_Disconnect_m526FACB91ECED67582516E4B87F2716C01C23366,
	WebSocketClientStandAlone_Send_m7450DCD36AD04C9C00B1D34804062A5B1101734D,
	WebSocketClientStandAlone_U3CConnectAndReceiveLoopU3Eb__6_0_mC554778884F28BCA86698D9391CB9941639B8DC9,
	SimpleWebJSLib_IsConnected_mDCC0E83A8EB8622AD7B384411C91550D955250D8,
	SimpleWebJSLib_Connect_mC7C0FE72919E56902B30D665CF6F2B0BFE5951DB,
	SimpleWebJSLib_Disconnect_m57E2E20921495E5BD50C4F2D0617E4365B430707,
	SimpleWebJSLib_Send_mD540FE8795376AB371FF6BBE841FA133D5967CA2,
	WebSocketClientWebGl__ctor_mEB774732CA63DB5A8ADA0A4BA86A3CCF0F512B94,
	WebSocketClientWebGl_CheckJsConnected_m705353286E64A5B24D461D3A2118B810B9AE089A,
	WebSocketClientWebGl_Connect_mB9E69E3DF2D9899B76F9338C3DBB66F9A4C07545,
	WebSocketClientWebGl_Disconnect_mDDC56C4E0F3D80B6D752BD989A9F73C75AB04A3F,
	WebSocketClientWebGl_Send_mD4F90B639844FD05DE42AE8663960B154003FCFF,
	WebSocketClientWebGl_onOpen_mA97F39516B9BD51F359AA668AD0C4DA3057324C1,
	WebSocketClientWebGl_onClose_m8E18FC19E43F617E6C9CA5C52765E01A821DD9DA,
	WebSocketClientWebGl_onMessage_m4884E309888753644DB8A5089200FC5016D36B9B,
	WebSocketClientWebGl_onErr_m2E387B7514720BA1450FC3B6AD0B6976BB1E3238,
	WebSocketClientWebGl_OpenCallback_mAD7CEB7BC927646C6A7B11AC41A9CC6714B8F413,
	WebSocketClientWebGl_CloseCallBack_m5A3C7F68D38F7A1DE8F990F5E78A6AEAD80FED00,
	WebSocketClientWebGl_MessageCallback_m8827FD5E0D2473A51DBC47EF5060CAC5C6ED1A69,
	WebSocketClientWebGl_ErrorCallback_m9E9D7A1A8C522DFFE4799B41E17C1B41401BD2B3,
	WebSocketClientWebGl__cctor_m441903F27F2FFC759DB343C4976A42A97F9D66BC,
	NULL,
	ArrayBuffer_SetReleasesRequired_m48A89A931E608BEE6124005AB7948AD2C8407593,
	ArrayBuffer__ctor_m6A073590355953433D8A7B7BA328906E21489F05,
	ArrayBuffer_Release_m689C2233D55AF9F00F101CA6C820FA34DEBA42B8,
	ArrayBuffer_Dispose_mECF269EB79268A887FE601D739ED7E08264C6F50,
	ArrayBuffer_CopyTo_m814B37C7EF4B603D6ECB2177D3CA127BE2A9A0B2,
	ArrayBuffer_CopyFrom_m6E8D9D4719EEE0845E65C78B482E1BE5322EFDD7,
	ArrayBuffer_CopyFrom_m012AB58B5603C368CFDB73D3645750C0E778B67B,
	ArrayBuffer_CopyFrom_mB79F039D79394AADC8C8094EA024DE3BDB124C58,
	ArrayBuffer_ToSegment_m06952522FD31ABD557FA9E3AA1F4129ECB41E59E,
	ArrayBuffer_Validate_m40ED809A40AECE77A7F510B57E81D4092558CCD0,
	BufferBucket__ctor_m5D83ED3F4CA550D537B2E1AC087FF4DCA812E09E,
	BufferBucket_Take_mF2565E360F6BE150AF12B9B6F7E73B6CBD0D60CC,
	BufferBucket_Return_m2C699B6CFAFB435877A2AA7016F84ACCEFD96421,
	BufferBucket_IncrementCreated_m15B115712B1D8F536AEA27BB174AF52A6B4972EB,
	BufferBucket_DecrementCreated_m65559AF2723EED0F8F158CA447743C61497841FA,
	BufferPool__ctor_m858F5E294291804ACA4A3CC6A5976FC63F028664,
	BufferPool_Validate_m443DE8D3791A07AF0DDAE836EE297D2A4BA80A06,
	BufferPool_Take_mF205E99F684E4F7C58B97376FDB445E7523D130B,
	Connection__ctor_m6E6D5B378B698D983B4A8C040840AA03167F479C,
	Connection_Dispose_mE60F70B65E590F9D962B04C40FC539F137CAFD17,
	Connection_ToString_m5A9433E65CB3D3F5ABB5FF286EBF43436F74B75A,
	Constants__cctor_mA9572F5FEA824A5B45937D8643196628FEA0948A,
	Log_BufferToString_m48F33DAC8329D0D92D07173AFB8E91BC5558DA00,
	Log_DumpBuffer_mFF46D164DD546575D879D8297340804AFDC0DB4E,
	Log_DumpBuffer_m3005C81FC3895438043C4E50D5520190A07A1848,
	Log_Verbose_m2DD072EEAE70AC17202F8B3B1C7B993B938968FF,
	Log_Info_m5866AF2FAE539F7F94B8FCD2DC9B880095FF668B,
	Log_InfoException_mC2047F8120A71420A0994DFDFB82C96C9539B4A9,
	Log_Warn_m91E1164B567FF0B4C892E45E283738631CE49F03,
	Log_Error_m404A46EBC61E85D1BDB8224474B260FB078380A2,
	Log_Exception_m00D3AF0BC8E4746BBF5C0C7316F64DD35B8B2E6D,
	Log__cctor_mCE46FA916786E0EBFC3D9655CED58648423895E6,
	Message__ctor_m6334D1507C2049BE349820608D41269D84A5E04B,
	Message__ctor_mC5B5DD4BE7AC57DBDFDC73258DC8ACBEC83A76C9,
	Message__ctor_mAB0A32426379EE5C1A1E6C6456BCFF2B3ABF0D56,
	Message__ctor_m792966215DDB9B92AAFF6F5EA1EC670F9F7112CE,
	Message__ctor_m922FB43CFCD7D4B72D0741923ADDFE381AC479E6,
	Message__ctor_m29551DA61A371C722BA045FE5D570328F4F3702B,
	MessageProcessor_FirstLengthByte_mAE1081655DA1314DB0E735BA1AF2CCB76BDD1B4A,
	MessageProcessor_NeedToReadShortLength_mE362DD61795EADAA6D135FA69EC97F8C4AEF0900,
	MessageProcessor_GetOpcode_m0FFD17FD652AC86692083A9B0BB5DFB2E247BAB7,
	MessageProcessor_GetPayloadLength_mF3FE27CC9CC01437A2EB45D82BE90659F76AD842,
	MessageProcessor_ValidateHeader_m665C8C59671C00B68F59EC47AB6C7EB73E155E7B,
	MessageProcessor_ToggleMask_mFBAF55F5A3BE367D53583EE8F083536655D71D90,
	MessageProcessor_ToggleMask_m8FA37E51EC0743EA95B23EA0AA768AAF4D83DEDB,
	MessageProcessor_ToggleMask_mCDE88C90587D74C8777BBA0C67AECA06612608A9,
	MessageProcessor_GetMessageLength_mF5664D654B5EBB0688BED1B9763A97524A960B90,
	MessageProcessor_ThrowIfNotFinished_m11DA15D4874856BDD1DF90274EE7524CCCFC7845,
	MessageProcessor_ThrowIfMaskNotExpected_mF0719BF9509997BFF47689CC8ACDD267386537D3,
	MessageProcessor_ThrowIfBadOpCode_m3CBF468C3128811842482FF5163430382BE4BEA8,
	MessageProcessor_ThrowIfLengthZero_m17E8471649F0D5BC1BD0F0B1DEB0FE446F9F9108,
	MessageProcessor_ThrowIfMsgLengthTooLong_m67DFB3F9F103D9E5EF007AD1728412E8CB400BBF,
	ReadHelper_Read_mEC972DC75305ABC00938779D148448B487660F52,
	ReadHelper_TryRead_m2CE3E988F7D5D1A92A6733BF97509F728DEF9F48,
	ReadHelper_SafeReadTillMatch_mCF696AC24F619D4F6D9998B9936376DBEFC59CEB,
	ReadHelperException__ctor_m80DFAAB583E41B248CAB474C7348697D2F872A28,
	ReadHelperException__ctor_m91B74DF3103801FACFB9EE5993CECF5C5C29C6C4,
	ReceiveLoop_Loop_m4F4B23AF0DC75EEBD973497B4BFD1612CE7B8772,
	ReceiveLoop_ReadOneMessage_mC0210200215C0282272350FC06DB4E9724F1C014,
	ReceiveLoop_HandleArrayMessage_m5D70DDC26F1C0253DF25A8574CF16F8F0481ED42,
	ReceiveLoop_HandleCloseMessage_m0477F5D8D974B4854FF7F2265EDBA0BB2E6DBC37,
	ReceiveLoop_GetCloseMessage_mF4B3A88658B76ADE9906703F384E28B7D4E4B30A,
	ReceiveLoop_GetCloseCode_m2DF102E2C5666ED4EB6F62F0582F4DBB33E9C979,
	SendLoopConfig__cctor_mE2C71DDE0B7098A58A65460145EECD4A498FF8F7,
	SendLoop_Loop_mC216257FB87211979A2B1D538EEFCD3CB8B353A8,
	SendLoop_SendMessage_m07D98D50405A0CD76CE80CBEF0A308B15066CAAA,
	SendLoop_WriteHeader_mAF9EA39F8BE04BC0E93CE2DEB709BAF5F03943BC,
	TcpConfig__ctor_mFD91205F3034702E65FA83038F39C36D4BB422EB,
	TcpConfig_ApplyTo_mDFD87993BB2782F242A04FCE9DDF0412DD7B60D0,
	Utils_CheckForInterupt_mDC950DB0841943FAAD2083D8C16EDCD89286BA26,
	ServerHandshake__ctor_m9CD0552911E0F8E34B34FFCCADC2D556047F1B4B,
	ServerHandshake_Finalize_mDB1CA28FACDE64C6431DE51B1DD981CB113A0A64,
	ServerHandshake_TryHandshake_m3BCC4B58381F7EFCC13430D0C1D35957B380413F,
	ServerHandshake_ReadToEndForHandshake_m159EA71CFBDE160A57062316FEACF46B51D48392,
	ServerHandshake_IsGet_mFEE36A2E599D8701651E540CF00725AA752DBB1F,
	ServerHandshake_AcceptHandshake_mB85520CC2CDA20220C8838A76624F4116E7B9307,
	ServerHandshake_GetKey_m718E11A9481B067557D162B6257B8CF60D886EFE,
	ServerHandshake_AppendGuid_mE7FFCB696EC2F3843E6E2D6DB59E4F4BF1710B62,
	ServerHandshake_CreateHash_mFF19583C8EFD68D092C3C3C40AF4B6F724F60DD9,
	ServerHandshake_CreateResponse_m547A8BC3311B87F3233D7D0C2B1E69F1CF0A9BE8,
	SslConfig__ctor_mA33075E5F601A766D80BBA3ECBED6F0FE9FEAFC6,
	ServerSslHelper__ctor_m2D908F1AAFAA2F2B579BB9D49D861C6C0DB1FBBC,
	ServerSslHelper_TryCreateStream_m082BFF65087FF27BD3B7C9A24819D04EA9CCE0DF,
	ServerSslHelper_CreateStream_mB7A447E215BBD871B83689FFE6462CB714FD3B00,
	ServerSslHelper_acceptClient_mC0A15671A5E1CD98F8F6CE682A6141E464D02BEA,
	SimpleWebServer__ctor_m57870EAAA2E548EB52AA4D4A0F725A872024641A,
	SimpleWebServer_get_Active_m2B07FD27430514FE9D02F1EAA6E64400BD88B9B0,
	SimpleWebServer_set_Active_m7E9CE1FA9FBECD4A4F9B979FBCBC0CE04D3FF1CD,
	SimpleWebServer_add_onConnect_m887D77A40C674F5124D0AEEF78F5788100CD9283,
	SimpleWebServer_remove_onConnect_m4A856D4D947A786E1F5E7E8A7D4BD1DEBB7F753F,
	SimpleWebServer_add_onDisconnect_mF292131C9D624CC0698A30AE5DF36B99666B12AE,
	SimpleWebServer_remove_onDisconnect_m96B0C569ACDD53F4FD71BD404B374E0E0F01C1C6,
	SimpleWebServer_add_onData_m40BFED33A9905F1FF32E0B5B9B71EB13D37FE19E,
	SimpleWebServer_remove_onData_m8550C9030CE1776510DE10642F9C605727499C3A,
	SimpleWebServer_add_onError_m47FA1E12646E9F7AB531891C9244FBBC632E8E49,
	SimpleWebServer_remove_onError_mF81D6BAD7604A36EEED33319A1988C92CD7D2D3A,
	SimpleWebServer_Start_mA88122669884631BD910A19DC90DF39565DD4BF9,
	SimpleWebServer_Stop_m993C6FF0DC9BBD33D95D651A5416FB969EC208CA,
	SimpleWebServer_SendAll_mE111AA3E988D771F2D19B60B621E5E58C57C5A27,
	SimpleWebServer_SendOne_m9F3D0BC74BA91E00D3F308B69BBCB853866C2B6D,
	SimpleWebServer_KickClient_m7B96284429AFDD5CB64F798035FEAB0AF8088F3F,
	SimpleWebServer_GetClientAddress_m09CB4D0BB99D8EA8FDA0B555725F930C42FF2E47,
	SimpleWebServer_ProcessMessageQueue_mE31F6C05C0965F53B6C2BAB9C4B51D800AA3D5D4,
	WebSocketServer__ctor_m3F3C7FE2720B4AF8F095177C7D942ED4A5F86718,
	WebSocketServer_Listen_m027EE96263CBDF681A02AB57EE99CD6AA142007E,
	WebSocketServer_Stop_m434223003BFC46034A29123187B95D33D13B5A6B,
	WebSocketServer_acceptLoop_m2B55CC9854577ADF2C3223E50D88FE6CD448C04C,
	WebSocketServer_HandshakeAndReceiveLoop_m636642054F53DB6A2E7583D1E738960159B94A4C,
	WebSocketServer_AfterConnectionDisposed_m68E5DBFCE15628E937E869DF2D97C9A8B6784738,
	WebSocketServer_Send_mE123DCCAB8D9FA6A2556D1A3A1680176E6B9B2A1,
	WebSocketServer_CloseConnection_m749AAE0C75BA7EA8008DFC7EF32E4C0D9700BDD6,
	WebSocketServer_GetClientAddress_m53DA445080F95E2A8C8B8F4C02316A02D09E2294,
	SimpleWebTransport_get_LogLevels_m91DD6ADC45277627D52C9BD0B05430023E41A14D,
	SimpleWebTransport_set_LogLevels_m36A0C47920EE78A6E90C2C9315B950825A8E90F9,
	SimpleWebTransport_OnValidate_m529626CE148BE517E06898B41F673865C0D97D53,
	SimpleWebTransport_get_TcpConfig_m4CEF30A4416EE54AC51F782CE380826AFDAB1AAF,
	SimpleWebTransport_Available_m0F8987D21301810DAFDAC68D6477D7BC01ADD457,
	SimpleWebTransport_GetMaxPacketSize_mDA600942410A6ED4DBCBADA92D53A8575B31ED85,
	SimpleWebTransport_Awake_mB88C343BE85D092C98F1C7DF8272F9BD266498AF,
	SimpleWebTransport_Shutdown_m0E52D221C35E06D535FAF8206C904DDE607E596E,
	SimpleWebTransport_GetClientScheme_mBC368326593A067687B5C18C4AB043D8E9650575,
	SimpleWebTransport_GetServerScheme_mC372D78B47586417DEDEED8044720A892065EB70,
	SimpleWebTransport_ClientConnected_m2DDAA3D78DA86C680EC9063A4E62A6D1D0C7CB63,
	SimpleWebTransport_ClientConnect_m47BAD669CCC6C783900DEE0785D2D64432C8B20B,
	SimpleWebTransport_ClientDisconnect_m6FFDC81707521F6F8896D3C5C13DBA1ECD208B82,
	SimpleWebTransport_ClientSend_m539404270E091859940B3F150385B4C1BF63A8CC,
	SimpleWebTransport_ClientEarlyUpdate_m6D79389E36686276592377B9BD087D2AD770C4AE,
	SimpleWebTransport_ServerActive_m4DBC14C86C65B0F4C02FCE5002ED32155A04AE19,
	SimpleWebTransport_ServerStart_m65CFDB54DC221BBC0ACE64B07B81FFC709186255,
	SimpleWebTransport_ServerStop_m26DD1BEA0182B1E3623685E8B25B532FA68A2793,
	SimpleWebTransport_ServerDisconnect_m1CFE38475FE42AA2A3DCF37CD76401FBA1F3C7D1,
	SimpleWebTransport_ServerSend_mC582DEB0A931D27B62DA7973F919C2C0FD302F8F,
	SimpleWebTransport_ServerGetClientAddress_mEF867056221EDC65832666D54DDC69637914854D,
	SimpleWebTransport_ServerUri_m219E2BD0185A7E2532ABA6674D6D0670D3096F34,
	SimpleWebTransport_ServerEarlyUpdate_m78A5F2A2932600576866697BD231D0C70238A96C,
	SimpleWebTransport__ctor_m1B0B4F1644ABC9B5AEFAB735E671DC1D74FD1FB7,
	SimpleWebTransport_U3CClientConnectU3Eb__32_0_m189E0A9F2DF63A5F82499141E049929777F806B8,
	SimpleWebTransport_U3CClientConnectU3Eb__32_1_mFF181FC361D94D33A9E8F74A3242E2EE5152BC2C,
	SimpleWebTransport_U3CClientConnectU3Eb__32_2_mB2682AC6FE401817A6D4CF7FC62E3074FB426C77,
	SimpleWebTransport_U3CServerStartU3Eb__37_0_m5EE7CDE9E477FE673C1646A79EBAF5E279407C98,
	SslConfigLoader_Load_mE8A8FD310BE61A022C0E3892BBC031033C48F87E,
	SslConfigLoader_LoadCertJson_m310EE3BC7B53DEE4CDBBB006CC6EF00B79191FD2,
	SslConfigLoader__ctor_m1BA9D48AF3829EA9327E65C1E87C923E1AF467A3,
	U3CU3Ec__DisplayClass5_0__ctor_m877A946B44CB251F0F510C5D8A04C164CC6A7185,
	U3CU3Ec__DisplayClass5_0_U3CConnectU3Eb__0_m17D19D3ED6706895773DF717FBEB0F9CE9BCC0CB,
	U3CU3Ec__cctor_m8B2AD1ECF634347B403354563B77C502FF76E11B,
	U3CU3Ec__ctor_m9B17680A18E64DA2716C968536DC3F930D8E1FF7,
	U3CU3Ec_U3CReadU3Eb__0_0_mB270AE70BEA2AB14E471C3CFD2B60F0AF0E8A7E8,
	Config__ctor_m91688410A309469BBF9628C96E75CD6F073F4FF4,
	Config_Deconstruct_mE1EBA49496D438F07A46B2B51B799618D6FDCD26,
	Config__ctor_mB2F6F0EEF1065FBC0A50DCAB5599D07244B67936,
	Config_Deconstruct_m05B5DD481B018CCD30C5316CC97CDF5C3E68F644,
	MaskHelper__ctor_m7A3BF795CE7937FD4C165671316CE803129303D1,
	MaskHelper_Dispose_mBB4C6B0CF0989DD48E7C9FC91E7D60EC7E88C636,
	MaskHelper_WriteMask_m0F3A1213208C222312003AF82A7C61349161DE03,
	U3CU3Ec__DisplayClass14_0__ctor_m42749CCCC20948737179C7C66CFC4C9498CB3902,
	U3CU3Ec__DisplayClass14_0_U3CacceptLoopU3Eb__0_m9F46576C4AE39DAA11814009D4D05CC5FF960324,
	U3CU3Ec__DisplayClass15_0__ctor_m342FF454E0B90B5C0B3BE64AF6F41EAC01740243,
	U3CU3Ec__DisplayClass15_0_U3CHandshakeAndReceiveLoopU3Eb__0_mDE32CE1E1BAAC8FB988ADE899FC187CBAF152EDC,
};
extern void Message__ctor_m6334D1507C2049BE349820608D41269D84A5E04B_AdjustorThunk (void);
extern void Message__ctor_mC5B5DD4BE7AC57DBDFDC73258DC8ACBEC83A76C9_AdjustorThunk (void);
extern void Message__ctor_mAB0A32426379EE5C1A1E6C6456BCFF2B3ABF0D56_AdjustorThunk (void);
extern void Message__ctor_m792966215DDB9B92AAFF6F5EA1EC670F9F7112CE_AdjustorThunk (void);
extern void Message__ctor_m922FB43CFCD7D4B72D0741923ADDFE381AC479E6_AdjustorThunk (void);
extern void Message__ctor_m29551DA61A371C722BA045FE5D570328F4F3702B_AdjustorThunk (void);
extern void TcpConfig__ctor_mFD91205F3034702E65FA83038F39C36D4BB422EB_AdjustorThunk (void);
extern void TcpConfig_ApplyTo_mDFD87993BB2782F242A04FCE9DDF0412DD7B60D0_AdjustorThunk (void);
extern void SslConfig__ctor_mA33075E5F601A766D80BBA3ECBED6F0FE9FEAFC6_AdjustorThunk (void);
extern void Config__ctor_m91688410A309469BBF9628C96E75CD6F073F4FF4_AdjustorThunk (void);
extern void Config_Deconstruct_mE1EBA49496D438F07A46B2B51B799618D6FDCD26_AdjustorThunk (void);
extern void Config__ctor_mB2F6F0EEF1065FBC0A50DCAB5599D07244B67936_AdjustorThunk (void);
extern void Config_Deconstruct_m05B5DD481B018CCD30C5316CC97CDF5C3E68F644_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[13] = 
{
	{ 0x06000050, Message__ctor_m6334D1507C2049BE349820608D41269D84A5E04B_AdjustorThunk },
	{ 0x06000051, Message__ctor_mC5B5DD4BE7AC57DBDFDC73258DC8ACBEC83A76C9_AdjustorThunk },
	{ 0x06000052, Message__ctor_mAB0A32426379EE5C1A1E6C6456BCFF2B3ABF0D56_AdjustorThunk },
	{ 0x06000053, Message__ctor_m792966215DDB9B92AAFF6F5EA1EC670F9F7112CE_AdjustorThunk },
	{ 0x06000054, Message__ctor_m922FB43CFCD7D4B72D0741923ADDFE381AC479E6_AdjustorThunk },
	{ 0x06000055, Message__ctor_m29551DA61A371C722BA045FE5D570328F4F3702B_AdjustorThunk },
	{ 0x06000073, TcpConfig__ctor_mFD91205F3034702E65FA83038F39C36D4BB422EB_AdjustorThunk },
	{ 0x06000074, TcpConfig_ApplyTo_mDFD87993BB2782F242A04FCE9DDF0412DD7B60D0_AdjustorThunk },
	{ 0x06000080, SslConfig__ctor_mA33075E5F601A766D80BBA3ECBED6F0FE9FEAFC6_AdjustorThunk },
	{ 0x060000C4, Config__ctor_m91688410A309469BBF9628C96E75CD6F073F4FF4_AdjustorThunk },
	{ 0x060000C5, Config_Deconstruct_mE1EBA49496D438F07A46B2B51B799618D6FDCD26_AdjustorThunk },
	{ 0x060000C6, Config__ctor_mB2F6F0EEF1065FBC0A50DCAB5599D07244B67936_AdjustorThunk },
	{ 0x060000C7, Config_Deconstruct_m05B5DD481B018CCD30C5316CC97CDF5C3E68F644_AdjustorThunk },
};
static const int32_t s_InvokerIndices[206] = 
{
	2876,
	129,
	10,
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
	1765,
	90,
	23,
	90,
	105,
	1323,
	23,
	2877,
	26,
	26,
	26,
	23,
	1765,
	23,
	46,
	2878,
	173,
	2879,
	129,
	89,
	26,
	23,
	1765,
	23,
	23,
	2880,
	23,
	173,
	173,
	2881,
	173,
	3,
	26,
	32,
	130,
	23,
	23,
	130,
	1765,
	35,
	2880,
	2026,
	32,
	32,
	14,
	26,
	23,
	23,
	38,
	23,
	34,
	27,
	23,
	14,
	3,
	2882,
	196,
	137,
	613,
	613,
	163,
	613,
	613,
	163,
	3,
	32,
	26,
	26,
	129,
	62,
	62,
	114,
	114,
	94,
	94,
	2883,
	2884,
	2885,
	2886,
	860,
	856,
	2887,
	173,
	173,
	174,
	190,
	2521,
	2888,
	26,
	111,
	2889,
	2890,
	2891,
	2891,
	202,
	131,
	3,
	2894,
	2895,
	2896,
	1269,
	26,
	3,
	130,
	23,
	9,
	28,
	114,
	27,
	137,
	163,
	28,
	137,
	2897,
	2898,
	9,
	28,
	1092,
	2899,
	89,
	31,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	605,
	23,
	2900,
	1946,
	30,
	34,
	26,
	2901,
	32,
	23,
	23,
	26,
	26,
	62,
	30,
	34,
	10,
	32,
	23,
	2902,
	89,
	37,
	23,
	23,
	14,
	14,
	89,
	26,
	23,
	1944,
	23,
	89,
	23,
	23,
	32,
	1945,
	34,
	14,
	23,
	23,
	23,
	1765,
	26,
	1946,
	2903,
	2904,
	23,
	23,
	23,
	3,
	23,
	9,
	2892,
	2893,
	355,
	721,
	23,
	23,
	503,
	23,
	23,
	23,
	23,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x0600002A, 7,  (void**)&WebSocketClientWebGl_OpenCallback_mAD7CEB7BC927646C6A7B11AC41A9CC6714B8F413_RuntimeMethod_var, 0 },
	{ 0x0600002B, 8,  (void**)&WebSocketClientWebGl_CloseCallBack_m5A3C7F68D38F7A1DE8F990F5E78A6AEAD80FED00_RuntimeMethod_var, 0 },
	{ 0x0600002C, 9,  (void**)&WebSocketClientWebGl_MessageCallback_m8827FD5E0D2473A51DBC47EF5060CAC5C6ED1A69_RuntimeMethod_var, 0 },
	{ 0x0600002D, 10,  (void**)&WebSocketClientWebGl_ErrorCallback_m9E9D7A1A8C522DFFE4799B41E17C1B41401BD2B3_RuntimeMethod_var, 0 },
};
extern const Il2CppCodeGenModule g_SimpleWebTransportCodeGenModule;
const Il2CppCodeGenModule g_SimpleWebTransportCodeGenModule = 
{
	"SimpleWebTransport.dll",
	206,
	s_methodPointers,
	13,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
