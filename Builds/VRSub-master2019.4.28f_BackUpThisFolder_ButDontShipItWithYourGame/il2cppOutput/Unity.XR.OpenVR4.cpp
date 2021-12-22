#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Valve.VR.Utils
struct Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t Utils_ToUtf8_mB7A3E057C4ED92BDDD22F53891CBCECF6EB4E9CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utils__cctor_m041ED7361FE730538999B026C01F8A3DB43C0459_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB_MetadataUsageId;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Valve.VR.Utils
struct Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01  : public RuntimeObject
{
public:

public:
};

struct Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields
{
public:
	// System.Byte[] Valve.VR.Utils::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_0;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields, ___buffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Valve.VR.HmdMatrix34_t
struct HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 
{
public:
	// System.Single Valve.VR.HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single Valve.VR.HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single Valve.VR.HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single Valve.VR.HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single Valve.VR.HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single Valve.VR.HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single Valve.VR.HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single Valve.VR.HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single Valve.VR.HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single Valve.VR.HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single Valve.VR.HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single Valve.VR.HmdMatrix34_t::m11
	float ___m11_11;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}
};


// Valve.VR.HmdMatrix44_t
struct HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB 
{
public:
	// System.Single Valve.VR.HmdMatrix44_t::m0
	float ___m0_0;
	// System.Single Valve.VR.HmdMatrix44_t::m1
	float ___m1_1;
	// System.Single Valve.VR.HmdMatrix44_t::m2
	float ___m2_2;
	// System.Single Valve.VR.HmdMatrix44_t::m3
	float ___m3_3;
	// System.Single Valve.VR.HmdMatrix44_t::m4
	float ___m4_4;
	// System.Single Valve.VR.HmdMatrix44_t::m5
	float ___m5_5;
	// System.Single Valve.VR.HmdMatrix44_t::m6
	float ___m6_6;
	// System.Single Valve.VR.HmdMatrix44_t::m7
	float ___m7_7;
	// System.Single Valve.VR.HmdMatrix44_t::m8
	float ___m8_8;
	// System.Single Valve.VR.HmdMatrix44_t::m9
	float ___m9_9;
	// System.Single Valve.VR.HmdMatrix44_t::m10
	float ___m10_10;
	// System.Single Valve.VR.HmdMatrix44_t::m11
	float ___m11_11;
	// System.Single Valve.VR.HmdMatrix44_t::m12
	float ___m12_12;
	// System.Single Valve.VR.HmdMatrix44_t::m13
	float ___m13_13;
	// System.Single Valve.VR.HmdMatrix44_t::m14
	float ___m14_14;
	// System.Single Valve.VR.HmdMatrix44_t::m15
	float ___m15_15;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}

	inline static int32_t get_offset_of_m12_12() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m12_12)); }
	inline float get_m12_12() const { return ___m12_12; }
	inline float* get_address_of_m12_12() { return &___m12_12; }
	inline void set_m12_12(float value)
	{
		___m12_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m14_14() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m14_14)); }
	inline float get_m14_14() const { return ___m14_14; }
	inline float* get_address_of_m14_14() { return &___m14_14; }
	inline void set_m14_14(float value)
	{
		___m14_14 = value;
	}

	inline static int32_t get_offset_of_m15_15() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB, ___m15_15)); }
	inline float get_m15_15() const { return ___m15_15; }
	inline float* get_address_of_m15_15() { return &___m15_15; }
	inline void set_m15_15(float value)
	{
		___m15_15 = value;
	}
};


// Valve.VR.HmdQuaternionf_t
struct HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70 
{
public:
	// System.Single Valve.VR.HmdQuaternionf_t::w
	float ___w_0;
	// System.Single Valve.VR.HmdQuaternionf_t::x
	float ___x_1;
	// System.Single Valve.VR.HmdQuaternionf_t::y
	float ___y_2;
	// System.Single Valve.VR.HmdQuaternionf_t::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70, ___w_0)); }
	inline float get_w_0() const { return ___w_0; }
	inline float* get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(float value)
	{
		___w_0 = value;
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};


// Valve.VR.HmdVector2_t
struct HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A 
{
public:
	// System.Single Valve.VR.HmdVector2_t::v0
	float ___v0_0;
	// System.Single Valve.VR.HmdVector2_t::v1
	float ___v1_1;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A, ___v0_0)); }
	inline float get_v0_0() const { return ___v0_0; }
	inline float* get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(float value)
	{
		___v0_0 = value;
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A, ___v1_1)); }
	inline float get_v1_1() const { return ___v1_1; }
	inline float* get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(float value)
	{
		___v1_1 = value;
	}
};


// Valve.VR.HmdVector3_t
struct HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 
{
public:
	// System.Single Valve.VR.HmdVector3_t::v0
	float ___v0_0;
	// System.Single Valve.VR.HmdVector3_t::v1
	float ___v1_1;
	// System.Single Valve.VR.HmdVector3_t::v2
	float ___v2_2;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3, ___v0_0)); }
	inline float get_v0_0() const { return ___v0_0; }
	inline float* get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(float value)
	{
		___v0_0 = value;
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3, ___v1_1)); }
	inline float get_v1_1() const { return ___v1_1; }
	inline float* get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(float value)
	{
		___v1_1 = value;
	}

	inline static int32_t get_offset_of_v2_2() { return static_cast<int32_t>(offsetof(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3, ___v2_2)); }
	inline float get_v2_2() const { return ___v2_2; }
	inline float* get_address_of_v2_2() { return &___v2_2; }
	inline void set_v2_2(float value)
	{
		___v2_2 = value;
	}
};


// Valve.VR.HmdVector4_t
struct HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3 
{
public:
	// System.Single Valve.VR.HmdVector4_t::v0
	float ___v0_0;
	// System.Single Valve.VR.HmdVector4_t::v1
	float ___v1_1;
	// System.Single Valve.VR.HmdVector4_t::v2
	float ___v2_2;
	// System.Single Valve.VR.HmdVector4_t::v3
	float ___v3_3;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3, ___v0_0)); }
	inline float get_v0_0() const { return ___v0_0; }
	inline float* get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(float value)
	{
		___v0_0 = value;
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3, ___v1_1)); }
	inline float get_v1_1() const { return ___v1_1; }
	inline float* get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(float value)
	{
		___v1_1 = value;
	}

	inline static int32_t get_offset_of_v2_2() { return static_cast<int32_t>(offsetof(HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3, ___v2_2)); }
	inline float get_v2_2() const { return ___v2_2; }
	inline float* get_address_of_v2_2() { return &___v2_2; }
	inline void set_v2_2(float value)
	{
		___v2_2 = value;
	}

	inline static int32_t get_offset_of_v3_3() { return static_cast<int32_t>(offsetof(HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3, ___v3_3)); }
	inline float get_v3_3() const { return ___v3_3; }
	inline float* get_address_of_v3_3() { return &___v3_3; }
	inline void set_v3_3(float value)
	{
		___v3_3 = value;
	}
};


// Valve.VR.IntersectionMaskCircle_t
struct IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F 
{
public:
	// System.Single Valve.VR.IntersectionMaskCircle_t::m_flCenterX
	float ___m_flCenterX_0;
	// System.Single Valve.VR.IntersectionMaskCircle_t::m_flCenterY
	float ___m_flCenterY_1;
	// System.Single Valve.VR.IntersectionMaskCircle_t::m_flRadius
	float ___m_flRadius_2;

public:
	inline static int32_t get_offset_of_m_flCenterX_0() { return static_cast<int32_t>(offsetof(IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F, ___m_flCenterX_0)); }
	inline float get_m_flCenterX_0() const { return ___m_flCenterX_0; }
	inline float* get_address_of_m_flCenterX_0() { return &___m_flCenterX_0; }
	inline void set_m_flCenterX_0(float value)
	{
		___m_flCenterX_0 = value;
	}

	inline static int32_t get_offset_of_m_flCenterY_1() { return static_cast<int32_t>(offsetof(IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F, ___m_flCenterY_1)); }
	inline float get_m_flCenterY_1() const { return ___m_flCenterY_1; }
	inline float* get_address_of_m_flCenterY_1() { return &___m_flCenterY_1; }
	inline void set_m_flCenterY_1(float value)
	{
		___m_flCenterY_1 = value;
	}

	inline static int32_t get_offset_of_m_flRadius_2() { return static_cast<int32_t>(offsetof(IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F, ___m_flRadius_2)); }
	inline float get_m_flRadius_2() const { return ___m_flRadius_2; }
	inline float* get_address_of_m_flRadius_2() { return &___m_flRadius_2; }
	inline void set_m_flRadius_2(float value)
	{
		___m_flRadius_2 = value;
	}
};


// Valve.VR.IntersectionMaskRectangle_t
struct IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3 
{
public:
	// System.Single Valve.VR.IntersectionMaskRectangle_t::m_flTopLeftX
	float ___m_flTopLeftX_0;
	// System.Single Valve.VR.IntersectionMaskRectangle_t::m_flTopLeftY
	float ___m_flTopLeftY_1;
	// System.Single Valve.VR.IntersectionMaskRectangle_t::m_flWidth
	float ___m_flWidth_2;
	// System.Single Valve.VR.IntersectionMaskRectangle_t::m_flHeight
	float ___m_flHeight_3;

public:
	inline static int32_t get_offset_of_m_flTopLeftX_0() { return static_cast<int32_t>(offsetof(IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3, ___m_flTopLeftX_0)); }
	inline float get_m_flTopLeftX_0() const { return ___m_flTopLeftX_0; }
	inline float* get_address_of_m_flTopLeftX_0() { return &___m_flTopLeftX_0; }
	inline void set_m_flTopLeftX_0(float value)
	{
		___m_flTopLeftX_0 = value;
	}

	inline static int32_t get_offset_of_m_flTopLeftY_1() { return static_cast<int32_t>(offsetof(IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3, ___m_flTopLeftY_1)); }
	inline float get_m_flTopLeftY_1() const { return ___m_flTopLeftY_1; }
	inline float* get_address_of_m_flTopLeftY_1() { return &___m_flTopLeftY_1; }
	inline void set_m_flTopLeftY_1(float value)
	{
		___m_flTopLeftY_1 = value;
	}

	inline static int32_t get_offset_of_m_flWidth_2() { return static_cast<int32_t>(offsetof(IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3, ___m_flWidth_2)); }
	inline float get_m_flWidth_2() const { return ___m_flWidth_2; }
	inline float* get_address_of_m_flWidth_2() { return &___m_flWidth_2; }
	inline void set_m_flWidth_2(float value)
	{
		___m_flWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_flHeight_3() { return static_cast<int32_t>(offsetof(IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3, ___m_flHeight_3)); }
	inline float get_m_flHeight_3() const { return ___m_flHeight_3; }
	inline float* get_address_of_m_flHeight_3() { return &___m_flHeight_3; }
	inline void set_m_flHeight_3(float value)
	{
		___m_flHeight_3 = value;
	}
};


// Valve.VR.RenderModel_ControllerMode_State_t
struct RenderModel_ControllerMode_State_t_t8890F646EEBC2DFEF1261C68A200E17F87A65EF0 
{
public:
	// System.Boolean Valve.VR.RenderModel_ControllerMode_State_t::bScrollWheelVisible
	bool ___bScrollWheelVisible_0;

public:
	inline static int32_t get_offset_of_bScrollWheelVisible_0() { return static_cast<int32_t>(offsetof(RenderModel_ControllerMode_State_t_t8890F646EEBC2DFEF1261C68A200E17F87A65EF0, ___bScrollWheelVisible_0)); }
	inline bool get_bScrollWheelVisible_0() const { return ___bScrollWheelVisible_0; }
	inline bool* get_address_of_bScrollWheelVisible_0() { return &___bScrollWheelVisible_0; }
	inline void set_bScrollWheelVisible_0(bool value)
	{
		___bScrollWheelVisible_0 = value;
	}
};


// Valve.VR.VRActiveActionSet_t
struct VRActiveActionSet_t_t97F044BE1961A9FA4F9F11A6A48B9065919BEC23 
{
public:
	// System.UInt64 Valve.VR.VRActiveActionSet_t::ulActionSet
	uint64_t ___ulActionSet_0;
	// System.UInt64 Valve.VR.VRActiveActionSet_t::ulRestrictedToDevice
	uint64_t ___ulRestrictedToDevice_1;
	// System.UInt64 Valve.VR.VRActiveActionSet_t::ulSecondaryActionSet
	uint64_t ___ulSecondaryActionSet_2;
	// System.UInt32 Valve.VR.VRActiveActionSet_t::unPadding
	uint32_t ___unPadding_3;
	// System.Int32 Valve.VR.VRActiveActionSet_t::nPriority
	int32_t ___nPriority_4;

public:
	inline static int32_t get_offset_of_ulActionSet_0() { return static_cast<int32_t>(offsetof(VRActiveActionSet_t_t97F044BE1961A9FA4F9F11A6A48B9065919BEC23, ___ulActionSet_0)); }
	inline uint64_t get_ulActionSet_0() const { return ___ulActionSet_0; }
	inline uint64_t* get_address_of_ulActionSet_0() { return &___ulActionSet_0; }
	inline void set_ulActionSet_0(uint64_t value)
	{
		___ulActionSet_0 = value;
	}

	inline static int32_t get_offset_of_ulRestrictedToDevice_1() { return static_cast<int32_t>(offsetof(VRActiveActionSet_t_t97F044BE1961A9FA4F9F11A6A48B9065919BEC23, ___ulRestrictedToDevice_1)); }
	inline uint64_t get_ulRestrictedToDevice_1() const { return ___ulRestrictedToDevice_1; }
	inline uint64_t* get_address_of_ulRestrictedToDevice_1() { return &___ulRestrictedToDevice_1; }
	inline void set_ulRestrictedToDevice_1(uint64_t value)
	{
		___ulRestrictedToDevice_1 = value;
	}

	inline static int32_t get_offset_of_ulSecondaryActionSet_2() { return static_cast<int32_t>(offsetof(VRActiveActionSet_t_t97F044BE1961A9FA4F9F11A6A48B9065919BEC23, ___ulSecondaryActionSet_2)); }
	inline uint64_t get_ulSecondaryActionSet_2() const { return ___ulSecondaryActionSet_2; }
	inline uint64_t* get_address_of_ulSecondaryActionSet_2() { return &___ulSecondaryActionSet_2; }
	inline void set_ulSecondaryActionSet_2(uint64_t value)
	{
		___ulSecondaryActionSet_2 = value;
	}

	inline static int32_t get_offset_of_unPadding_3() { return static_cast<int32_t>(offsetof(VRActiveActionSet_t_t97F044BE1961A9FA4F9F11A6A48B9065919BEC23, ___unPadding_3)); }
	inline uint32_t get_unPadding_3() const { return ___unPadding_3; }
	inline uint32_t* get_address_of_unPadding_3() { return &___unPadding_3; }
	inline void set_unPadding_3(uint32_t value)
	{
		___unPadding_3 = value;
	}

	inline static int32_t get_offset_of_nPriority_4() { return static_cast<int32_t>(offsetof(VRActiveActionSet_t_t97F044BE1961A9FA4F9F11A6A48B9065919BEC23, ___nPriority_4)); }
	inline int32_t get_nPriority_4() const { return ___nPriority_4; }
	inline int32_t* get_address_of_nPriority_4() { return &___nPriority_4; }
	inline void set_nPriority_4(int32_t value)
	{
		___nPriority_4 = value;
	}
};


// Valve.VR.VRControllerAxis_t
struct VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB 
{
public:
	// System.Single Valve.VR.VRControllerAxis_t::x
	float ___x_0;
	// System.Single Valve.VR.VRControllerAxis_t::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// Valve.VR.VREvent_ApplicationLaunch_t
struct VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576 
{
public:
	// System.UInt32 Valve.VR.VREvent_ApplicationLaunch_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_ApplicationLaunch_t::unArgsHandle
	uint32_t ___unArgsHandle_1;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_unArgsHandle_1() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576, ___unArgsHandle_1)); }
	inline uint32_t get_unArgsHandle_1() const { return ___unArgsHandle_1; }
	inline uint32_t* get_address_of_unArgsHandle_1() { return &___unArgsHandle_1; }
	inline void set_unArgsHandle_1(uint32_t value)
	{
		___unArgsHandle_1 = value;
	}
};


// Valve.VR.VREvent_Chaperone_t
struct VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46 
{
public:
	// System.UInt64 Valve.VR.VREvent_Chaperone_t::m_nPreviousUniverse
	uint64_t ___m_nPreviousUniverse_0;
	// System.UInt64 Valve.VR.VREvent_Chaperone_t::m_nCurrentUniverse
	uint64_t ___m_nCurrentUniverse_1;

public:
	inline static int32_t get_offset_of_m_nPreviousUniverse_0() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46, ___m_nPreviousUniverse_0)); }
	inline uint64_t get_m_nPreviousUniverse_0() const { return ___m_nPreviousUniverse_0; }
	inline uint64_t* get_address_of_m_nPreviousUniverse_0() { return &___m_nPreviousUniverse_0; }
	inline void set_m_nPreviousUniverse_0(uint64_t value)
	{
		___m_nPreviousUniverse_0 = value;
	}

	inline static int32_t get_offset_of_m_nCurrentUniverse_1() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46, ___m_nCurrentUniverse_1)); }
	inline uint64_t get_m_nCurrentUniverse_1() const { return ___m_nCurrentUniverse_1; }
	inline uint64_t* get_address_of_m_nCurrentUniverse_1() { return &___m_nCurrentUniverse_1; }
	inline void set_m_nCurrentUniverse_1(uint64_t value)
	{
		___m_nCurrentUniverse_1 = value;
	}
};


// Valve.VR.VREvent_Controller_t
struct VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B 
{
public:
	// System.UInt32 Valve.VR.VREvent_Controller_t::button
	uint32_t ___button_0;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B, ___button_0)); }
	inline uint32_t get_button_0() const { return ___button_0; }
	inline uint32_t* get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(uint32_t value)
	{
		___button_0 = value;
	}
};


// Valve.VR.VREvent_EditingCameraSurface_t
struct VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3 
{
public:
	// System.UInt64 Valve.VR.VREvent_EditingCameraSurface_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt32 Valve.VR.VREvent_EditingCameraSurface_t::nVisualMode
	uint32_t ___nVisualMode_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_nVisualMode_1() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3, ___nVisualMode_1)); }
	inline uint32_t get_nVisualMode_1() const { return ___nVisualMode_1; }
	inline uint32_t* get_address_of_nVisualMode_1() { return &___nVisualMode_1; }
	inline void set_nVisualMode_1(uint32_t value)
	{
		___nVisualMode_1 = value;
	}
};


// Valve.VR.VREvent_HapticVibration_t
struct VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60 
{
public:
	// System.UInt64 Valve.VR.VREvent_HapticVibration_t::containerHandle
	uint64_t ___containerHandle_0;
	// System.UInt64 Valve.VR.VREvent_HapticVibration_t::componentHandle
	uint64_t ___componentHandle_1;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fDurationSeconds
	float ___fDurationSeconds_2;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fFrequency
	float ___fFrequency_3;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fAmplitude
	float ___fAmplitude_4;

public:
	inline static int32_t get_offset_of_containerHandle_0() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60, ___containerHandle_0)); }
	inline uint64_t get_containerHandle_0() const { return ___containerHandle_0; }
	inline uint64_t* get_address_of_containerHandle_0() { return &___containerHandle_0; }
	inline void set_containerHandle_0(uint64_t value)
	{
		___containerHandle_0 = value;
	}

	inline static int32_t get_offset_of_componentHandle_1() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60, ___componentHandle_1)); }
	inline uint64_t get_componentHandle_1() const { return ___componentHandle_1; }
	inline uint64_t* get_address_of_componentHandle_1() { return &___componentHandle_1; }
	inline void set_componentHandle_1(uint64_t value)
	{
		___componentHandle_1 = value;
	}

	inline static int32_t get_offset_of_fDurationSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60, ___fDurationSeconds_2)); }
	inline float get_fDurationSeconds_2() const { return ___fDurationSeconds_2; }
	inline float* get_address_of_fDurationSeconds_2() { return &___fDurationSeconds_2; }
	inline void set_fDurationSeconds_2(float value)
	{
		___fDurationSeconds_2 = value;
	}

	inline static int32_t get_offset_of_fFrequency_3() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60, ___fFrequency_3)); }
	inline float get_fFrequency_3() const { return ___fFrequency_3; }
	inline float* get_address_of_fFrequency_3() { return &___fFrequency_3; }
	inline void set_fFrequency_3(float value)
	{
		___fFrequency_3 = value;
	}

	inline static int32_t get_offset_of_fAmplitude_4() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60, ___fAmplitude_4)); }
	inline float get_fAmplitude_4() const { return ___fAmplitude_4; }
	inline float* get_address_of_fAmplitude_4() { return &___fAmplitude_4; }
	inline void set_fAmplitude_4(float value)
	{
		___fAmplitude_4 = value;
	}
};


// Valve.VR.VREvent_InputActionManifestLoad_t
struct VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF 
{
public:
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathAppKey
	uint64_t ___pathAppKey_0;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathMessage
	uint64_t ___pathMessage_1;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathMessageParam
	uint64_t ___pathMessageParam_2;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathManifestPath
	uint64_t ___pathManifestPath_3;

public:
	inline static int32_t get_offset_of_pathAppKey_0() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF, ___pathAppKey_0)); }
	inline uint64_t get_pathAppKey_0() const { return ___pathAppKey_0; }
	inline uint64_t* get_address_of_pathAppKey_0() { return &___pathAppKey_0; }
	inline void set_pathAppKey_0(uint64_t value)
	{
		___pathAppKey_0 = value;
	}

	inline static int32_t get_offset_of_pathMessage_1() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF, ___pathMessage_1)); }
	inline uint64_t get_pathMessage_1() const { return ___pathMessage_1; }
	inline uint64_t* get_address_of_pathMessage_1() { return &___pathMessage_1; }
	inline void set_pathMessage_1(uint64_t value)
	{
		___pathMessage_1 = value;
	}

	inline static int32_t get_offset_of_pathMessageParam_2() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF, ___pathMessageParam_2)); }
	inline uint64_t get_pathMessageParam_2() const { return ___pathMessageParam_2; }
	inline uint64_t* get_address_of_pathMessageParam_2() { return &___pathMessageParam_2; }
	inline void set_pathMessageParam_2(uint64_t value)
	{
		___pathMessageParam_2 = value;
	}

	inline static int32_t get_offset_of_pathManifestPath_3() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF, ___pathManifestPath_3)); }
	inline uint64_t get_pathManifestPath_3() const { return ___pathManifestPath_3; }
	inline uint64_t* get_address_of_pathManifestPath_3() { return &___pathManifestPath_3; }
	inline void set_pathManifestPath_3(uint64_t value)
	{
		___pathManifestPath_3 = value;
	}
};


// Valve.VR.VREvent_InputBindingLoad_t
struct VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B 
{
public:
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::ulAppContainer
	uint64_t ___ulAppContainer_0;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathMessage
	uint64_t ___pathMessage_1;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathUrl
	uint64_t ___pathUrl_2;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathControllerType
	uint64_t ___pathControllerType_3;

public:
	inline static int32_t get_offset_of_ulAppContainer_0() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B, ___ulAppContainer_0)); }
	inline uint64_t get_ulAppContainer_0() const { return ___ulAppContainer_0; }
	inline uint64_t* get_address_of_ulAppContainer_0() { return &___ulAppContainer_0; }
	inline void set_ulAppContainer_0(uint64_t value)
	{
		___ulAppContainer_0 = value;
	}

	inline static int32_t get_offset_of_pathMessage_1() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B, ___pathMessage_1)); }
	inline uint64_t get_pathMessage_1() const { return ___pathMessage_1; }
	inline uint64_t* get_address_of_pathMessage_1() { return &___pathMessage_1; }
	inline void set_pathMessage_1(uint64_t value)
	{
		___pathMessage_1 = value;
	}

	inline static int32_t get_offset_of_pathUrl_2() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B, ___pathUrl_2)); }
	inline uint64_t get_pathUrl_2() const { return ___pathUrl_2; }
	inline uint64_t* get_address_of_pathUrl_2() { return &___pathUrl_2; }
	inline void set_pathUrl_2(uint64_t value)
	{
		___pathUrl_2 = value;
	}

	inline static int32_t get_offset_of_pathControllerType_3() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B, ___pathControllerType_3)); }
	inline uint64_t get_pathControllerType_3() const { return ___pathControllerType_3; }
	inline uint64_t* get_address_of_pathControllerType_3() { return &___pathControllerType_3; }
	inline void set_pathControllerType_3(uint64_t value)
	{
		___pathControllerType_3 = value;
	}
};


// Valve.VR.VREvent_Ipd_t
struct VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F 
{
public:
	// System.Single Valve.VR.VREvent_Ipd_t::ipdMeters
	float ___ipdMeters_0;

public:
	inline static int32_t get_offset_of_ipdMeters_0() { return static_cast<int32_t>(offsetof(VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F, ___ipdMeters_0)); }
	inline float get_ipdMeters_0() const { return ___ipdMeters_0; }
	inline float* get_address_of_ipdMeters_0() { return &___ipdMeters_0; }
	inline void set_ipdMeters_0(float value)
	{
		___ipdMeters_0 = value;
	}
};


// Valve.VR.VREvent_Keyboard_t
struct VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711 
{
public:
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput0
	uint8_t ___cNewInput0_0;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput1
	uint8_t ___cNewInput1_1;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput2
	uint8_t ___cNewInput2_2;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput3
	uint8_t ___cNewInput3_3;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput4
	uint8_t ___cNewInput4_4;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput5
	uint8_t ___cNewInput5_5;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput6
	uint8_t ___cNewInput6_6;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput7
	uint8_t ___cNewInput7_7;
	// System.UInt64 Valve.VR.VREvent_Keyboard_t::uUserValue
	uint64_t ___uUserValue_8;

public:
	inline static int32_t get_offset_of_cNewInput0_0() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput0_0)); }
	inline uint8_t get_cNewInput0_0() const { return ___cNewInput0_0; }
	inline uint8_t* get_address_of_cNewInput0_0() { return &___cNewInput0_0; }
	inline void set_cNewInput0_0(uint8_t value)
	{
		___cNewInput0_0 = value;
	}

	inline static int32_t get_offset_of_cNewInput1_1() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput1_1)); }
	inline uint8_t get_cNewInput1_1() const { return ___cNewInput1_1; }
	inline uint8_t* get_address_of_cNewInput1_1() { return &___cNewInput1_1; }
	inline void set_cNewInput1_1(uint8_t value)
	{
		___cNewInput1_1 = value;
	}

	inline static int32_t get_offset_of_cNewInput2_2() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput2_2)); }
	inline uint8_t get_cNewInput2_2() const { return ___cNewInput2_2; }
	inline uint8_t* get_address_of_cNewInput2_2() { return &___cNewInput2_2; }
	inline void set_cNewInput2_2(uint8_t value)
	{
		___cNewInput2_2 = value;
	}

	inline static int32_t get_offset_of_cNewInput3_3() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput3_3)); }
	inline uint8_t get_cNewInput3_3() const { return ___cNewInput3_3; }
	inline uint8_t* get_address_of_cNewInput3_3() { return &___cNewInput3_3; }
	inline void set_cNewInput3_3(uint8_t value)
	{
		___cNewInput3_3 = value;
	}

	inline static int32_t get_offset_of_cNewInput4_4() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput4_4)); }
	inline uint8_t get_cNewInput4_4() const { return ___cNewInput4_4; }
	inline uint8_t* get_address_of_cNewInput4_4() { return &___cNewInput4_4; }
	inline void set_cNewInput4_4(uint8_t value)
	{
		___cNewInput4_4 = value;
	}

	inline static int32_t get_offset_of_cNewInput5_5() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput5_5)); }
	inline uint8_t get_cNewInput5_5() const { return ___cNewInput5_5; }
	inline uint8_t* get_address_of_cNewInput5_5() { return &___cNewInput5_5; }
	inline void set_cNewInput5_5(uint8_t value)
	{
		___cNewInput5_5 = value;
	}

	inline static int32_t get_offset_of_cNewInput6_6() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput6_6)); }
	inline uint8_t get_cNewInput6_6() const { return ___cNewInput6_6; }
	inline uint8_t* get_address_of_cNewInput6_6() { return &___cNewInput6_6; }
	inline void set_cNewInput6_6(uint8_t value)
	{
		___cNewInput6_6 = value;
	}

	inline static int32_t get_offset_of_cNewInput7_7() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___cNewInput7_7)); }
	inline uint8_t get_cNewInput7_7() const { return ___cNewInput7_7; }
	inline uint8_t* get_address_of_cNewInput7_7() { return &___cNewInput7_7; }
	inline void set_cNewInput7_7(uint8_t value)
	{
		___cNewInput7_7 = value;
	}

	inline static int32_t get_offset_of_uUserValue_8() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711, ___uUserValue_8)); }
	inline uint64_t get_uUserValue_8() const { return ___uUserValue_8; }
	inline uint64_t* get_address_of_uUserValue_8() { return &___uUserValue_8; }
	inline void set_uUserValue_8(uint64_t value)
	{
		___uUserValue_8 = value;
	}
};


// Valve.VR.VREvent_MessageOverlay_t
struct VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA 
{
public:
	// System.UInt32 Valve.VR.VREvent_MessageOverlay_t::unVRMessageOverlayResponse
	uint32_t ___unVRMessageOverlayResponse_0;

public:
	inline static int32_t get_offset_of_unVRMessageOverlayResponse_0() { return static_cast<int32_t>(offsetof(VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA, ___unVRMessageOverlayResponse_0)); }
	inline uint32_t get_unVRMessageOverlayResponse_0() const { return ___unVRMessageOverlayResponse_0; }
	inline uint32_t* get_address_of_unVRMessageOverlayResponse_0() { return &___unVRMessageOverlayResponse_0; }
	inline void set_unVRMessageOverlayResponse_0(uint32_t value)
	{
		___unVRMessageOverlayResponse_0 = value;
	}
};


// Valve.VR.VREvent_Mouse_t
struct VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA 
{
public:
	// System.Single Valve.VR.VREvent_Mouse_t::x
	float ___x_0;
	// System.Single Valve.VR.VREvent_Mouse_t::y
	float ___y_1;
	// System.UInt32 Valve.VR.VREvent_Mouse_t::button
	uint32_t ___button_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA, ___button_2)); }
	inline uint32_t get_button_2() const { return ___button_2; }
	inline uint32_t* get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(uint32_t value)
	{
		___button_2 = value;
	}
};


// Valve.VR.VREvent_Notification_t
struct VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF 
{
public:
	// System.UInt64 Valve.VR.VREvent_Notification_t::ulUserValue
	uint64_t ___ulUserValue_0;
	// System.UInt32 Valve.VR.VREvent_Notification_t::notificationId
	uint32_t ___notificationId_1;

public:
	inline static int32_t get_offset_of_ulUserValue_0() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF, ___ulUserValue_0)); }
	inline uint64_t get_ulUserValue_0() const { return ___ulUserValue_0; }
	inline uint64_t* get_address_of_ulUserValue_0() { return &___ulUserValue_0; }
	inline void set_ulUserValue_0(uint64_t value)
	{
		___ulUserValue_0 = value;
	}

	inline static int32_t get_offset_of_notificationId_1() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF, ___notificationId_1)); }
	inline uint32_t get_notificationId_1() const { return ___notificationId_1; }
	inline uint32_t* get_address_of_notificationId_1() { return &___notificationId_1; }
	inline void set_notificationId_1(uint32_t value)
	{
		___notificationId_1 = value;
	}
};


// Valve.VR.VREvent_Overlay_t
struct VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5 
{
public:
	// System.UInt64 Valve.VR.VREvent_Overlay_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt64 Valve.VR.VREvent_Overlay_t::devicePath
	uint64_t ___devicePath_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_devicePath_1() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5, ___devicePath_1)); }
	inline uint64_t get_devicePath_1() const { return ___devicePath_1; }
	inline uint64_t* get_address_of_devicePath_1() { return &___devicePath_1; }
	inline void set_devicePath_1(uint64_t value)
	{
		___devicePath_1 = value;
	}
};


// Valve.VR.VREvent_PerformanceTest_t
struct VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B 
{
public:
	// System.UInt32 Valve.VR.VREvent_PerformanceTest_t::m_nFidelityLevel
	uint32_t ___m_nFidelityLevel_0;

public:
	inline static int32_t get_offset_of_m_nFidelityLevel_0() { return static_cast<int32_t>(offsetof(VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B, ___m_nFidelityLevel_0)); }
	inline uint32_t get_m_nFidelityLevel_0() const { return ___m_nFidelityLevel_0; }
	inline uint32_t* get_address_of_m_nFidelityLevel_0() { return &___m_nFidelityLevel_0; }
	inline void set_m_nFidelityLevel_0(uint32_t value)
	{
		___m_nFidelityLevel_0 = value;
	}
};


// Valve.VR.VREvent_Process_t
struct VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC 
{
public:
	// System.UInt32 Valve.VR.VREvent_Process_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_Process_t::oldPid
	uint32_t ___oldPid_1;
	// System.Boolean Valve.VR.VREvent_Process_t::bForced
	bool ___bForced_2;
	// System.Boolean Valve.VR.VREvent_Process_t::bConnectionLost
	bool ___bConnectionLost_3;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_oldPid_1() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC, ___oldPid_1)); }
	inline uint32_t get_oldPid_1() const { return ___oldPid_1; }
	inline uint32_t* get_address_of_oldPid_1() { return &___oldPid_1; }
	inline void set_oldPid_1(uint32_t value)
	{
		___oldPid_1 = value;
	}

	inline static int32_t get_offset_of_bForced_2() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC, ___bForced_2)); }
	inline bool get_bForced_2() const { return ___bForced_2; }
	inline bool* get_address_of_bForced_2() { return &___bForced_2; }
	inline void set_bForced_2(bool value)
	{
		___bForced_2 = value;
	}

	inline static int32_t get_offset_of_bConnectionLost_3() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC, ___bConnectionLost_3)); }
	inline bool get_bConnectionLost_3() const { return ___bConnectionLost_3; }
	inline bool* get_address_of_bConnectionLost_3() { return &___bConnectionLost_3; }
	inline void set_bConnectionLost_3(bool value)
	{
		___bConnectionLost_3 = value;
	}
};


// Valve.VR.VREvent_ProgressUpdate_t
struct VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC 
{
public:
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::ulApplicationPropertyContainer
	uint64_t ___ulApplicationPropertyContainer_0;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathDevice
	uint64_t ___pathDevice_1;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathInputSource
	uint64_t ___pathInputSource_2;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathProgressAction
	uint64_t ___pathProgressAction_3;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathIcon
	uint64_t ___pathIcon_4;
	// System.Single Valve.VR.VREvent_ProgressUpdate_t::fProgress
	float ___fProgress_5;

public:
	inline static int32_t get_offset_of_ulApplicationPropertyContainer_0() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC, ___ulApplicationPropertyContainer_0)); }
	inline uint64_t get_ulApplicationPropertyContainer_0() const { return ___ulApplicationPropertyContainer_0; }
	inline uint64_t* get_address_of_ulApplicationPropertyContainer_0() { return &___ulApplicationPropertyContainer_0; }
	inline void set_ulApplicationPropertyContainer_0(uint64_t value)
	{
		___ulApplicationPropertyContainer_0 = value;
	}

	inline static int32_t get_offset_of_pathDevice_1() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC, ___pathDevice_1)); }
	inline uint64_t get_pathDevice_1() const { return ___pathDevice_1; }
	inline uint64_t* get_address_of_pathDevice_1() { return &___pathDevice_1; }
	inline void set_pathDevice_1(uint64_t value)
	{
		___pathDevice_1 = value;
	}

	inline static int32_t get_offset_of_pathInputSource_2() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC, ___pathInputSource_2)); }
	inline uint64_t get_pathInputSource_2() const { return ___pathInputSource_2; }
	inline uint64_t* get_address_of_pathInputSource_2() { return &___pathInputSource_2; }
	inline void set_pathInputSource_2(uint64_t value)
	{
		___pathInputSource_2 = value;
	}

	inline static int32_t get_offset_of_pathProgressAction_3() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC, ___pathProgressAction_3)); }
	inline uint64_t get_pathProgressAction_3() const { return ___pathProgressAction_3; }
	inline uint64_t* get_address_of_pathProgressAction_3() { return &___pathProgressAction_3; }
	inline void set_pathProgressAction_3(uint64_t value)
	{
		___pathProgressAction_3 = value;
	}

	inline static int32_t get_offset_of_pathIcon_4() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC, ___pathIcon_4)); }
	inline uint64_t get_pathIcon_4() const { return ___pathIcon_4; }
	inline uint64_t* get_address_of_pathIcon_4() { return &___pathIcon_4; }
	inline void set_pathIcon_4(uint64_t value)
	{
		___pathIcon_4 = value;
	}

	inline static int32_t get_offset_of_fProgress_5() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC, ___fProgress_5)); }
	inline float get_fProgress_5() const { return ___fProgress_5; }
	inline float* get_address_of_fProgress_5() { return &___fProgress_5; }
	inline void set_fProgress_5(float value)
	{
		___fProgress_5 = value;
	}
};


// Valve.VR.VREvent_Reserved_t
struct VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A 
{
public:
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved0
	uint64_t ___reserved0_0;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved1
	uint64_t ___reserved1_1;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved2
	uint64_t ___reserved2_2;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved3
	uint64_t ___reserved3_3;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved4
	uint64_t ___reserved4_4;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved5
	uint64_t ___reserved5_5;

public:
	inline static int32_t get_offset_of_reserved0_0() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A, ___reserved0_0)); }
	inline uint64_t get_reserved0_0() const { return ___reserved0_0; }
	inline uint64_t* get_address_of_reserved0_0() { return &___reserved0_0; }
	inline void set_reserved0_0(uint64_t value)
	{
		___reserved0_0 = value;
	}

	inline static int32_t get_offset_of_reserved1_1() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A, ___reserved1_1)); }
	inline uint64_t get_reserved1_1() const { return ___reserved1_1; }
	inline uint64_t* get_address_of_reserved1_1() { return &___reserved1_1; }
	inline void set_reserved1_1(uint64_t value)
	{
		___reserved1_1 = value;
	}

	inline static int32_t get_offset_of_reserved2_2() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A, ___reserved2_2)); }
	inline uint64_t get_reserved2_2() const { return ___reserved2_2; }
	inline uint64_t* get_address_of_reserved2_2() { return &___reserved2_2; }
	inline void set_reserved2_2(uint64_t value)
	{
		___reserved2_2 = value;
	}

	inline static int32_t get_offset_of_reserved3_3() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A, ___reserved3_3)); }
	inline uint64_t get_reserved3_3() const { return ___reserved3_3; }
	inline uint64_t* get_address_of_reserved3_3() { return &___reserved3_3; }
	inline void set_reserved3_3(uint64_t value)
	{
		___reserved3_3 = value;
	}

	inline static int32_t get_offset_of_reserved4_4() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A, ___reserved4_4)); }
	inline uint64_t get_reserved4_4() const { return ___reserved4_4; }
	inline uint64_t* get_address_of_reserved4_4() { return &___reserved4_4; }
	inline void set_reserved4_4(uint64_t value)
	{
		___reserved4_4 = value;
	}

	inline static int32_t get_offset_of_reserved5_5() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A, ___reserved5_5)); }
	inline uint64_t get_reserved5_5() const { return ___reserved5_5; }
	inline uint64_t* get_address_of_reserved5_5() { return &___reserved5_5; }
	inline void set_reserved5_5(uint64_t value)
	{
		___reserved5_5 = value;
	}
};


// Valve.VR.VREvent_ScreenshotProgress_t
struct VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1 
{
public:
	// System.Single Valve.VR.VREvent_ScreenshotProgress_t::progress
	float ___progress_0;

public:
	inline static int32_t get_offset_of_progress_0() { return static_cast<int32_t>(offsetof(VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1, ___progress_0)); }
	inline float get_progress_0() const { return ___progress_0; }
	inline float* get_address_of_progress_0() { return &___progress_0; }
	inline void set_progress_0(float value)
	{
		___progress_0 = value;
	}
};


// Valve.VR.VREvent_Screenshot_t
struct VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8 
{
public:
	// System.UInt32 Valve.VR.VREvent_Screenshot_t::handle
	uint32_t ___handle_0;
	// System.UInt32 Valve.VR.VREvent_Screenshot_t::type
	uint32_t ___type_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8, ___handle_0)); }
	inline uint32_t get_handle_0() const { return ___handle_0; }
	inline uint32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8, ___type_1)); }
	inline uint32_t get_type_1() const { return ___type_1; }
	inline uint32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(uint32_t value)
	{
		___type_1 = value;
	}
};


// Valve.VR.VREvent_Scroll_t
struct VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB 
{
public:
	// System.Single Valve.VR.VREvent_Scroll_t::xdelta
	float ___xdelta_0;
	// System.Single Valve.VR.VREvent_Scroll_t::ydelta
	float ___ydelta_1;
	// System.UInt32 Valve.VR.VREvent_Scroll_t::unused
	uint32_t ___unused_2;
	// System.Single Valve.VR.VREvent_Scroll_t::viewportscale
	float ___viewportscale_3;

public:
	inline static int32_t get_offset_of_xdelta_0() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB, ___xdelta_0)); }
	inline float get_xdelta_0() const { return ___xdelta_0; }
	inline float* get_address_of_xdelta_0() { return &___xdelta_0; }
	inline void set_xdelta_0(float value)
	{
		___xdelta_0 = value;
	}

	inline static int32_t get_offset_of_ydelta_1() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB, ___ydelta_1)); }
	inline float get_ydelta_1() const { return ___ydelta_1; }
	inline float* get_address_of_ydelta_1() { return &___ydelta_1; }
	inline void set_ydelta_1(float value)
	{
		___ydelta_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB, ___unused_2)); }
	inline uint32_t get_unused_2() const { return ___unused_2; }
	inline uint32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(uint32_t value)
	{
		___unused_2 = value;
	}

	inline static int32_t get_offset_of_viewportscale_3() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB, ___viewportscale_3)); }
	inline float get_viewportscale_3() const { return ___viewportscale_3; }
	inline float* get_address_of_viewportscale_3() { return &___viewportscale_3; }
	inline void set_viewportscale_3(float value)
	{
		___viewportscale_3 = value;
	}
};


// Valve.VR.VREvent_SeatedZeroPoseReset_t
struct VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0 
{
public:
	// System.Boolean Valve.VR.VREvent_SeatedZeroPoseReset_t::bResetBySystemMenu
	bool ___bResetBySystemMenu_0;

public:
	inline static int32_t get_offset_of_bResetBySystemMenu_0() { return static_cast<int32_t>(offsetof(VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0, ___bResetBySystemMenu_0)); }
	inline bool get_bResetBySystemMenu_0() const { return ___bResetBySystemMenu_0; }
	inline bool* get_address_of_bResetBySystemMenu_0() { return &___bResetBySystemMenu_0; }
	inline void set_bResetBySystemMenu_0(bool value)
	{
		___bResetBySystemMenu_0 = value;
	}
};


// Valve.VR.VREvent_ShowDevTools_t
struct VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2 
{
public:
	// System.Int32 Valve.VR.VREvent_ShowDevTools_t::nBrowserIdentifier
	int32_t ___nBrowserIdentifier_0;

public:
	inline static int32_t get_offset_of_nBrowserIdentifier_0() { return static_cast<int32_t>(offsetof(VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2, ___nBrowserIdentifier_0)); }
	inline int32_t get_nBrowserIdentifier_0() const { return ___nBrowserIdentifier_0; }
	inline int32_t* get_address_of_nBrowserIdentifier_0() { return &___nBrowserIdentifier_0; }
	inline void set_nBrowserIdentifier_0(int32_t value)
	{
		___nBrowserIdentifier_0 = value;
	}
};


// Valve.VR.VREvent_SpatialAnchor_t
struct VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB 
{
public:
	// System.UInt32 Valve.VR.VREvent_SpatialAnchor_t::unHandle
	uint32_t ___unHandle_0;

public:
	inline static int32_t get_offset_of_unHandle_0() { return static_cast<int32_t>(offsetof(VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB, ___unHandle_0)); }
	inline uint32_t get_unHandle_0() const { return ___unHandle_0; }
	inline uint32_t* get_address_of_unHandle_0() { return &___unHandle_0; }
	inline void set_unHandle_0(uint32_t value)
	{
		___unHandle_0 = value;
	}
};


// Valve.VR.VREvent_Status_t
struct VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702 
{
public:
	// System.UInt32 Valve.VR.VREvent_Status_t::statusState
	uint32_t ___statusState_0;

public:
	inline static int32_t get_offset_of_statusState_0() { return static_cast<int32_t>(offsetof(VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702, ___statusState_0)); }
	inline uint32_t get_statusState_0() const { return ___statusState_0; }
	inline uint32_t* get_address_of_statusState_0() { return &___statusState_0; }
	inline void set_statusState_0(uint32_t value)
	{
		___statusState_0 = value;
	}
};


// Valve.VR.VREvent_TouchPadMove_t
struct VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81 
{
public:
	// System.Boolean Valve.VR.VREvent_TouchPadMove_t::bFingerDown
	bool ___bFingerDown_0;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::flSecondsFingerDown
	float ___flSecondsFingerDown_1;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueXFirst
	float ___fValueXFirst_2;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueYFirst
	float ___fValueYFirst_3;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueXRaw
	float ___fValueXRaw_4;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueYRaw
	float ___fValueYRaw_5;

public:
	inline static int32_t get_offset_of_bFingerDown_0() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81, ___bFingerDown_0)); }
	inline bool get_bFingerDown_0() const { return ___bFingerDown_0; }
	inline bool* get_address_of_bFingerDown_0() { return &___bFingerDown_0; }
	inline void set_bFingerDown_0(bool value)
	{
		___bFingerDown_0 = value;
	}

	inline static int32_t get_offset_of_flSecondsFingerDown_1() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81, ___flSecondsFingerDown_1)); }
	inline float get_flSecondsFingerDown_1() const { return ___flSecondsFingerDown_1; }
	inline float* get_address_of_flSecondsFingerDown_1() { return &___flSecondsFingerDown_1; }
	inline void set_flSecondsFingerDown_1(float value)
	{
		___flSecondsFingerDown_1 = value;
	}

	inline static int32_t get_offset_of_fValueXFirst_2() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81, ___fValueXFirst_2)); }
	inline float get_fValueXFirst_2() const { return ___fValueXFirst_2; }
	inline float* get_address_of_fValueXFirst_2() { return &___fValueXFirst_2; }
	inline void set_fValueXFirst_2(float value)
	{
		___fValueXFirst_2 = value;
	}

	inline static int32_t get_offset_of_fValueYFirst_3() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81, ___fValueYFirst_3)); }
	inline float get_fValueYFirst_3() const { return ___fValueYFirst_3; }
	inline float* get_address_of_fValueYFirst_3() { return &___fValueYFirst_3; }
	inline void set_fValueYFirst_3(float value)
	{
		___fValueYFirst_3 = value;
	}

	inline static int32_t get_offset_of_fValueXRaw_4() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81, ___fValueXRaw_4)); }
	inline float get_fValueXRaw_4() const { return ___fValueXRaw_4; }
	inline float* get_address_of_fValueXRaw_4() { return &___fValueXRaw_4; }
	inline void set_fValueXRaw_4(float value)
	{
		___fValueXRaw_4 = value;
	}

	inline static int32_t get_offset_of_fValueYRaw_5() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81, ___fValueYRaw_5)); }
	inline float get_fValueYRaw_5() const { return ___fValueYRaw_5; }
	inline float* get_address_of_fValueYRaw_5() { return &___fValueYRaw_5; }
	inline void set_fValueYRaw_5(float value)
	{
		___fValueYRaw_5 = value;
	}
};


// Valve.VR.VREvent_WebConsole_t
struct VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141 
{
public:
	// System.UInt64 Valve.VR.VREvent_WebConsole_t::webConsoleHandle
	uint64_t ___webConsoleHandle_0;

public:
	inline static int32_t get_offset_of_webConsoleHandle_0() { return static_cast<int32_t>(offsetof(VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141, ___webConsoleHandle_0)); }
	inline uint64_t get_webConsoleHandle_0() const { return ___webConsoleHandle_0; }
	inline uint64_t* get_address_of_webConsoleHandle_0() { return &___webConsoleHandle_0; }
	inline void set_webConsoleHandle_0(uint64_t value)
	{
		___webConsoleHandle_0 = value;
	}
};


// Valve.VR.VRSkeletalSummaryData_t
struct VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66 
{
public:
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerCurl0
	float ___flFingerCurl0_0;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerCurl1
	float ___flFingerCurl1_1;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerCurl2
	float ___flFingerCurl2_2;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerCurl3
	float ___flFingerCurl3_3;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerCurl4
	float ___flFingerCurl4_4;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerSplay0
	float ___flFingerSplay0_5;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerSplay1
	float ___flFingerSplay1_6;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerSplay2
	float ___flFingerSplay2_7;
	// System.Single Valve.VR.VRSkeletalSummaryData_t::flFingerSplay3
	float ___flFingerSplay3_8;

public:
	inline static int32_t get_offset_of_flFingerCurl0_0() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerCurl0_0)); }
	inline float get_flFingerCurl0_0() const { return ___flFingerCurl0_0; }
	inline float* get_address_of_flFingerCurl0_0() { return &___flFingerCurl0_0; }
	inline void set_flFingerCurl0_0(float value)
	{
		___flFingerCurl0_0 = value;
	}

	inline static int32_t get_offset_of_flFingerCurl1_1() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerCurl1_1)); }
	inline float get_flFingerCurl1_1() const { return ___flFingerCurl1_1; }
	inline float* get_address_of_flFingerCurl1_1() { return &___flFingerCurl1_1; }
	inline void set_flFingerCurl1_1(float value)
	{
		___flFingerCurl1_1 = value;
	}

	inline static int32_t get_offset_of_flFingerCurl2_2() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerCurl2_2)); }
	inline float get_flFingerCurl2_2() const { return ___flFingerCurl2_2; }
	inline float* get_address_of_flFingerCurl2_2() { return &___flFingerCurl2_2; }
	inline void set_flFingerCurl2_2(float value)
	{
		___flFingerCurl2_2 = value;
	}

	inline static int32_t get_offset_of_flFingerCurl3_3() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerCurl3_3)); }
	inline float get_flFingerCurl3_3() const { return ___flFingerCurl3_3; }
	inline float* get_address_of_flFingerCurl3_3() { return &___flFingerCurl3_3; }
	inline void set_flFingerCurl3_3(float value)
	{
		___flFingerCurl3_3 = value;
	}

	inline static int32_t get_offset_of_flFingerCurl4_4() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerCurl4_4)); }
	inline float get_flFingerCurl4_4() const { return ___flFingerCurl4_4; }
	inline float* get_address_of_flFingerCurl4_4() { return &___flFingerCurl4_4; }
	inline void set_flFingerCurl4_4(float value)
	{
		___flFingerCurl4_4 = value;
	}

	inline static int32_t get_offset_of_flFingerSplay0_5() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerSplay0_5)); }
	inline float get_flFingerSplay0_5() const { return ___flFingerSplay0_5; }
	inline float* get_address_of_flFingerSplay0_5() { return &___flFingerSplay0_5; }
	inline void set_flFingerSplay0_5(float value)
	{
		___flFingerSplay0_5 = value;
	}

	inline static int32_t get_offset_of_flFingerSplay1_6() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerSplay1_6)); }
	inline float get_flFingerSplay1_6() const { return ___flFingerSplay1_6; }
	inline float* get_address_of_flFingerSplay1_6() { return &___flFingerSplay1_6; }
	inline void set_flFingerSplay1_6(float value)
	{
		___flFingerSplay1_6 = value;
	}

	inline static int32_t get_offset_of_flFingerSplay2_7() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerSplay2_7)); }
	inline float get_flFingerSplay2_7() const { return ___flFingerSplay2_7; }
	inline float* get_address_of_flFingerSplay2_7() { return &___flFingerSplay2_7; }
	inline void set_flFingerSplay2_7(float value)
	{
		___flFingerSplay2_7 = value;
	}

	inline static int32_t get_offset_of_flFingerSplay3_8() { return static_cast<int32_t>(offsetof(VRSkeletalSummaryData_t_t644580EA9039A02976937652FFFEE20F90671B66, ___flFingerSplay3_8)); }
	inline float get_flFingerSplay3_8() const { return ___flFingerSplay3_8; }
	inline float* get_address_of_flFingerSplay3_8() { return &___flFingerSplay3_8; }
	inline void set_flFingerSplay3_8(float value)
	{
		___flFingerSplay3_8 = value;
	}
};


// Valve.VR.VRTextureBounds_t
struct VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745 
{
public:
	// System.Single Valve.VR.VRTextureBounds_t::uMin
	float ___uMin_0;
	// System.Single Valve.VR.VRTextureBounds_t::vMin
	float ___vMin_1;
	// System.Single Valve.VR.VRTextureBounds_t::uMax
	float ___uMax_2;
	// System.Single Valve.VR.VRTextureBounds_t::vMax
	float ___vMax_3;

public:
	inline static int32_t get_offset_of_uMin_0() { return static_cast<int32_t>(offsetof(VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745, ___uMin_0)); }
	inline float get_uMin_0() const { return ___uMin_0; }
	inline float* get_address_of_uMin_0() { return &___uMin_0; }
	inline void set_uMin_0(float value)
	{
		___uMin_0 = value;
	}

	inline static int32_t get_offset_of_vMin_1() { return static_cast<int32_t>(offsetof(VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745, ___vMin_1)); }
	inline float get_vMin_1() const { return ___vMin_1; }
	inline float* get_address_of_vMin_1() { return &___vMin_1; }
	inline void set_vMin_1(float value)
	{
		___vMin_1 = value;
	}

	inline static int32_t get_offset_of_uMax_2() { return static_cast<int32_t>(offsetof(VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745, ___uMax_2)); }
	inline float get_uMax_2() const { return ___uMax_2; }
	inline float* get_address_of_uMax_2() { return &___uMax_2; }
	inline void set_uMax_2(float value)
	{
		___uMax_2 = value;
	}

	inline static int32_t get_offset_of_vMax_3() { return static_cast<int32_t>(offsetof(VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745, ___vMax_3)); }
	inline float get_vMax_3() const { return ___vMax_3; }
	inline float* get_address_of_vMax_3() { return &___vMax_3; }
	inline void set_vMax_3(float value)
	{
		___vMax_3 = value;
	}
};


// Valve.VR.VRVulkanTextureArrayData_t
struct VRVulkanTextureArrayData_t_t097B9C7740CCBB8E6B2FA41D08851E1C41BE439B 
{
public:
	// System.UInt32 Valve.VR.VRVulkanTextureArrayData_t::m_unArrayIndex
	uint32_t ___m_unArrayIndex_0;
	// System.UInt32 Valve.VR.VRVulkanTextureArrayData_t::m_unArraySize
	uint32_t ___m_unArraySize_1;

public:
	inline static int32_t get_offset_of_m_unArrayIndex_0() { return static_cast<int32_t>(offsetof(VRVulkanTextureArrayData_t_t097B9C7740CCBB8E6B2FA41D08851E1C41BE439B, ___m_unArrayIndex_0)); }
	inline uint32_t get_m_unArrayIndex_0() const { return ___m_unArrayIndex_0; }
	inline uint32_t* get_address_of_m_unArrayIndex_0() { return &___m_unArrayIndex_0; }
	inline void set_m_unArrayIndex_0(uint32_t value)
	{
		___m_unArrayIndex_0 = value;
	}

	inline static int32_t get_offset_of_m_unArraySize_1() { return static_cast<int32_t>(offsetof(VRVulkanTextureArrayData_t_t097B9C7740CCBB8E6B2FA41D08851E1C41BE439B, ___m_unArraySize_1)); }
	inline uint32_t get_m_unArraySize_1() const { return ___m_unArraySize_1; }
	inline uint32_t* get_address_of_m_unArraySize_1() { return &___m_unArraySize_1; }
	inline void set_m_unArraySize_1(uint32_t value)
	{
		___m_unArraySize_1 = value;
	}
};


// Valve.VR.EColorSpace
struct EColorSpace_t45920BB853D326051DE67CA7D076C5C3D67E6BE3 
{
public:
	// System.Int32 Valve.VR.EColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EColorSpace_t45920BB853D326051DE67CA7D076C5C3D67E6BE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EDeviceType
struct EDeviceType_t33AA421D6AAF1DF0A3E502446C92A48F1C561AEA 
{
public:
	// System.Int32 Valve.VR.EDeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EDeviceType_t33AA421D6AAF1DF0A3E502446C92A48F1C561AEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EHDCPError
struct EHDCPError_tF12541569394D88A92293E7AFB94934AC2E905CD 
{
public:
	// System.Int32 Valve.VR.EHDCPError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EHDCPError_tF12541569394D88A92293E7AFB94934AC2E905CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EPropertyWriteType
struct EPropertyWriteType_tB3347BE8947BECD75F62B09B700623BE55D2E420 
{
public:
	// System.Int32 Valve.VR.EPropertyWriteType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EPropertyWriteType_tB3347BE8947BECD75F62B09B700623BE55D2E420, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EShowUIType
struct EShowUIType_tE4BC070C714C7EFFE682FB2CE1F65767571D5AD4 
{
public:
	// System.Int32 Valve.VR.EShowUIType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EShowUIType_tE4BC070C714C7EFFE682FB2CE1F65767571D5AD4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETextureType
struct ETextureType_tFB3FFB53CC6687B5BC457855326160A44DA3B925 
{
public:
	// System.Int32 Valve.VR.ETextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETextureType_tFB3FFB53CC6687B5BC457855326160A44DA3B925, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackedDeviceProperty
struct ETrackedDeviceProperty_tA2CE75877B9E89BF56BB7460FB2526B4D1C64DED 
{
public:
	// System.Int32 Valve.VR.ETrackedDeviceProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedDeviceProperty_tA2CE75877B9E89BF56BB7460FB2526B4D1C64DED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackedPropertyError
struct ETrackedPropertyError_tE34773E18EFF9D75CE91889A1042EB78D65F35DB 
{
public:
	// System.Int32 Valve.VR.ETrackedPropertyError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedPropertyError_tE34773E18EFF9D75CE91889A1042EB78D65F35DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackingResult
struct ETrackingResult_tEF8D233780E244B87AFAECDB107A82C77C666E9D 
{
public:
	// System.Int32 Valve.VR.ETrackingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackingResult_tEF8D233780E244B87AFAECDB107A82C77C666E9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackingUniverseOrigin
struct ETrackingUniverseOrigin_t643FEB471D1118F0DEFB499BBC70E0B8682C4469 
{
public:
	// System.Int32 Valve.VR.ETrackingUniverseOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackingUniverseOrigin_t643FEB471D1118F0DEFB499BBC70E0B8682C4469, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EVROverlayIntersectionMaskPrimitiveType
struct EVROverlayIntersectionMaskPrimitiveType_tA4DA7A1734FFA48D335A096AEEA02E385FD07656 
{
public:
	// System.Int32 Valve.VR.EVROverlayIntersectionMaskPrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EVROverlayIntersectionMaskPrimitiveType_tA4DA7A1734FFA48D335A096AEEA02E385FD07656, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EVRRenderModelTextureFormat
struct EVRRenderModelTextureFormat_tBCE9FB1BF5A9EC49D2A49FED850CC2C2B62C5BD2 
{
public:
	// System.Int32 Valve.VR.EVRRenderModelTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EVRRenderModelTextureFormat_tBCE9FB1BF5A9EC49D2A49FED850CC2C2B62C5BD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.RenderModel_ComponentState_t
struct RenderModel_ComponentState_t_t18E276222CDEDC486D2E3F87B069F02218110A9F 
{
public:
	// Valve.VR.HmdMatrix34_t Valve.VR.RenderModel_ComponentState_t::mTrackingToComponentRenderModel
	HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  ___mTrackingToComponentRenderModel_0;
	// Valve.VR.HmdMatrix34_t Valve.VR.RenderModel_ComponentState_t::mTrackingToComponentLocal
	HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  ___mTrackingToComponentLocal_1;
	// System.UInt32 Valve.VR.RenderModel_ComponentState_t::uProperties
	uint32_t ___uProperties_2;

public:
	inline static int32_t get_offset_of_mTrackingToComponentRenderModel_0() { return static_cast<int32_t>(offsetof(RenderModel_ComponentState_t_t18E276222CDEDC486D2E3F87B069F02218110A9F, ___mTrackingToComponentRenderModel_0)); }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  get_mTrackingToComponentRenderModel_0() const { return ___mTrackingToComponentRenderModel_0; }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 * get_address_of_mTrackingToComponentRenderModel_0() { return &___mTrackingToComponentRenderModel_0; }
	inline void set_mTrackingToComponentRenderModel_0(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  value)
	{
		___mTrackingToComponentRenderModel_0 = value;
	}

	inline static int32_t get_offset_of_mTrackingToComponentLocal_1() { return static_cast<int32_t>(offsetof(RenderModel_ComponentState_t_t18E276222CDEDC486D2E3F87B069F02218110A9F, ___mTrackingToComponentLocal_1)); }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  get_mTrackingToComponentLocal_1() const { return ___mTrackingToComponentLocal_1; }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 * get_address_of_mTrackingToComponentLocal_1() { return &___mTrackingToComponentLocal_1; }
	inline void set_mTrackingToComponentLocal_1(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  value)
	{
		___mTrackingToComponentLocal_1 = value;
	}

	inline static int32_t get_offset_of_uProperties_2() { return static_cast<int32_t>(offsetof(RenderModel_ComponentState_t_t18E276222CDEDC486D2E3F87B069F02218110A9F, ___uProperties_2)); }
	inline uint32_t get_uProperties_2() const { return ___uProperties_2; }
	inline uint32_t* get_address_of_uProperties_2() { return &___uProperties_2; }
	inline void set_uProperties_2(uint32_t value)
	{
		___uProperties_2 = value;
	}
};


// Valve.VR.RenderModel_Vertex_t
struct RenderModel_Vertex_t_t8BB8E4A187A48E495D137A4F7F7E10FE1E381583 
{
public:
	// Valve.VR.HmdVector3_t Valve.VR.RenderModel_Vertex_t::vPosition
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vPosition_0;
	// Valve.VR.HmdVector3_t Valve.VR.RenderModel_Vertex_t::vNormal
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vNormal_1;
	// System.Single Valve.VR.RenderModel_Vertex_t::rfTextureCoord0
	float ___rfTextureCoord0_2;
	// System.Single Valve.VR.RenderModel_Vertex_t::rfTextureCoord1
	float ___rfTextureCoord1_3;

public:
	inline static int32_t get_offset_of_vPosition_0() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t8BB8E4A187A48E495D137A4F7F7E10FE1E381583, ___vPosition_0)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vPosition_0() const { return ___vPosition_0; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vPosition_0() { return &___vPosition_0; }
	inline void set_vPosition_0(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vPosition_0 = value;
	}

	inline static int32_t get_offset_of_vNormal_1() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t8BB8E4A187A48E495D137A4F7F7E10FE1E381583, ___vNormal_1)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vNormal_1() const { return ___vNormal_1; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vNormal_1() { return &___vNormal_1; }
	inline void set_vNormal_1(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vNormal_1 = value;
	}

	inline static int32_t get_offset_of_rfTextureCoord0_2() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t8BB8E4A187A48E495D137A4F7F7E10FE1E381583, ___rfTextureCoord0_2)); }
	inline float get_rfTextureCoord0_2() const { return ___rfTextureCoord0_2; }
	inline float* get_address_of_rfTextureCoord0_2() { return &___rfTextureCoord0_2; }
	inline void set_rfTextureCoord0_2(float value)
	{
		___rfTextureCoord0_2 = value;
	}

	inline static int32_t get_offset_of_rfTextureCoord1_3() { return static_cast<int32_t>(offsetof(RenderModel_Vertex_t_t8BB8E4A187A48E495D137A4F7F7E10FE1E381583, ___rfTextureCoord1_3)); }
	inline float get_rfTextureCoord1_3() const { return ___rfTextureCoord1_3; }
	inline float* get_address_of_rfTextureCoord1_3() { return &___rfTextureCoord1_3; }
	inline void set_rfTextureCoord1_3(float value)
	{
		___rfTextureCoord1_3 = value;
	}
};


// Valve.VR.RenderModel_t
struct RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 
{
public:
	// System.IntPtr Valve.VR.RenderModel_t::rVertexData
	intptr_t ___rVertexData_0;
	// System.UInt32 Valve.VR.RenderModel_t::unVertexCount
	uint32_t ___unVertexCount_1;
	// System.IntPtr Valve.VR.RenderModel_t::rIndexData
	intptr_t ___rIndexData_2;
	// System.UInt32 Valve.VR.RenderModel_t::unTriangleCount
	uint32_t ___unTriangleCount_3;
	// System.Int32 Valve.VR.RenderModel_t::diffuseTextureId
	int32_t ___diffuseTextureId_4;

public:
	inline static int32_t get_offset_of_rVertexData_0() { return static_cast<int32_t>(offsetof(RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050, ___rVertexData_0)); }
	inline intptr_t get_rVertexData_0() const { return ___rVertexData_0; }
	inline intptr_t* get_address_of_rVertexData_0() { return &___rVertexData_0; }
	inline void set_rVertexData_0(intptr_t value)
	{
		___rVertexData_0 = value;
	}

	inline static int32_t get_offset_of_unVertexCount_1() { return static_cast<int32_t>(offsetof(RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050, ___unVertexCount_1)); }
	inline uint32_t get_unVertexCount_1() const { return ___unVertexCount_1; }
	inline uint32_t* get_address_of_unVertexCount_1() { return &___unVertexCount_1; }
	inline void set_unVertexCount_1(uint32_t value)
	{
		___unVertexCount_1 = value;
	}

	inline static int32_t get_offset_of_rIndexData_2() { return static_cast<int32_t>(offsetof(RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050, ___rIndexData_2)); }
	inline intptr_t get_rIndexData_2() const { return ___rIndexData_2; }
	inline intptr_t* get_address_of_rIndexData_2() { return &___rIndexData_2; }
	inline void set_rIndexData_2(intptr_t value)
	{
		___rIndexData_2 = value;
	}

	inline static int32_t get_offset_of_unTriangleCount_3() { return static_cast<int32_t>(offsetof(RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050, ___unTriangleCount_3)); }
	inline uint32_t get_unTriangleCount_3() const { return ___unTriangleCount_3; }
	inline uint32_t* get_address_of_unTriangleCount_3() { return &___unTriangleCount_3; }
	inline void set_unTriangleCount_3(uint32_t value)
	{
		___unTriangleCount_3 = value;
	}

	inline static int32_t get_offset_of_diffuseTextureId_4() { return static_cast<int32_t>(offsetof(RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050, ___diffuseTextureId_4)); }
	inline int32_t get_diffuseTextureId_4() const { return ___diffuseTextureId_4; }
	inline int32_t* get_address_of_diffuseTextureId_4() { return &___diffuseTextureId_4; }
	inline void set_diffuseTextureId_4(int32_t value)
	{
		___diffuseTextureId_4 = value;
	}
};


// Valve.VR.RenderModel_t_Packed
#pragma pack(push, tp, 4)
struct RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 
{
public:
	// System.IntPtr Valve.VR.RenderModel_t_Packed::rVertexData
	intptr_t ___rVertexData_0;
	// System.UInt32 Valve.VR.RenderModel_t_Packed::unVertexCount
	uint32_t ___unVertexCount_1;
	// System.IntPtr Valve.VR.RenderModel_t_Packed::rIndexData
	intptr_t ___rIndexData_2;
	// System.UInt32 Valve.VR.RenderModel_t_Packed::unTriangleCount
	uint32_t ___unTriangleCount_3;
	// System.Int32 Valve.VR.RenderModel_t_Packed::diffuseTextureId
	int32_t ___diffuseTextureId_4;

public:
	inline static int32_t get_offset_of_rVertexData_0() { return static_cast<int32_t>(offsetof(RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2, ___rVertexData_0)); }
	inline intptr_t get_rVertexData_0() const { return ___rVertexData_0; }
	inline intptr_t* get_address_of_rVertexData_0() { return &___rVertexData_0; }
	inline void set_rVertexData_0(intptr_t value)
	{
		___rVertexData_0 = value;
	}

	inline static int32_t get_offset_of_unVertexCount_1() { return static_cast<int32_t>(offsetof(RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2, ___unVertexCount_1)); }
	inline uint32_t get_unVertexCount_1() const { return ___unVertexCount_1; }
	inline uint32_t* get_address_of_unVertexCount_1() { return &___unVertexCount_1; }
	inline void set_unVertexCount_1(uint32_t value)
	{
		___unVertexCount_1 = value;
	}

	inline static int32_t get_offset_of_rIndexData_2() { return static_cast<int32_t>(offsetof(RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2, ___rIndexData_2)); }
	inline intptr_t get_rIndexData_2() const { return ___rIndexData_2; }
	inline intptr_t* get_address_of_rIndexData_2() { return &___rIndexData_2; }
	inline void set_rIndexData_2(intptr_t value)
	{
		___rIndexData_2 = value;
	}

	inline static int32_t get_offset_of_unTriangleCount_3() { return static_cast<int32_t>(offsetof(RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2, ___unTriangleCount_3)); }
	inline uint32_t get_unTriangleCount_3() const { return ___unTriangleCount_3; }
	inline uint32_t* get_address_of_unTriangleCount_3() { return &___unTriangleCount_3; }
	inline void set_unTriangleCount_3(uint32_t value)
	{
		___unTriangleCount_3 = value;
	}

	inline static int32_t get_offset_of_diffuseTextureId_4() { return static_cast<int32_t>(offsetof(RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2, ___diffuseTextureId_4)); }
	inline int32_t get_diffuseTextureId_4() const { return ___diffuseTextureId_4; }
	inline int32_t* get_address_of_diffuseTextureId_4() { return &___diffuseTextureId_4; }
	inline void set_diffuseTextureId_4(int32_t value)
	{
		___diffuseTextureId_4 = value;
	}
};
#pragma pack(pop, tp)


// Valve.VR.SpatialAnchorPose_t
struct SpatialAnchorPose_t_tBA96430DA36C8C7433B479A7985805B29F002A71 
{
public:
	// Valve.VR.HmdMatrix34_t Valve.VR.SpatialAnchorPose_t::mAnchorToAbsoluteTracking
	HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  ___mAnchorToAbsoluteTracking_0;

public:
	inline static int32_t get_offset_of_mAnchorToAbsoluteTracking_0() { return static_cast<int32_t>(offsetof(SpatialAnchorPose_t_tBA96430DA36C8C7433B479A7985805B29F002A71, ___mAnchorToAbsoluteTracking_0)); }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  get_mAnchorToAbsoluteTracking_0() const { return ___mAnchorToAbsoluteTracking_0; }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 * get_address_of_mAnchorToAbsoluteTracking_0() { return &___mAnchorToAbsoluteTracking_0; }
	inline void set_mAnchorToAbsoluteTracking_0(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  value)
	{
		___mAnchorToAbsoluteTracking_0 = value;
	}
};


// Valve.VR.VRBoneTransform_t
struct VRBoneTransform_t_tB0AFC02B2EB00C94AA2AB8D517379266A80385AC 
{
public:
	// Valve.VR.HmdVector4_t Valve.VR.VRBoneTransform_t::position
	HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3  ___position_0;
	// Valve.VR.HmdQuaternionf_t Valve.VR.VRBoneTransform_t::orientation
	HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70  ___orientation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VRBoneTransform_t_tB0AFC02B2EB00C94AA2AB8D517379266A80385AC, ___position_0)); }
	inline HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3  get_position_0() const { return ___position_0; }
	inline HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(HmdVector4_t_tBA2A305DD2E705FAAC9CC5D2FD13B64202A381F3  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(VRBoneTransform_t_tB0AFC02B2EB00C94AA2AB8D517379266A80385AC, ___orientation_1)); }
	inline HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70  get_orientation_1() const { return ___orientation_1; }
	inline HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(HmdQuaternionf_t_tCE0ACBA93E70AA544844617F487F6A634A9E4A70  value)
	{
		___orientation_1 = value;
	}
};


// Valve.VR.VRControllerState_t
struct VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 
{
public:
	// System.UInt32 Valve.VR.VRControllerState_t::unPacketNum
	uint32_t ___unPacketNum_0;
	// System.UInt64 Valve.VR.VRControllerState_t::ulButtonPressed
	uint64_t ___ulButtonPressed_1;
	// System.UInt64 Valve.VR.VRControllerState_t::ulButtonTouched
	uint64_t ___ulButtonTouched_2;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t::rAxis0
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis0_3;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t::rAxis1
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis1_4;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t::rAxis2
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis2_5;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t::rAxis3
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis3_6;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t::rAxis4
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis4_7;

public:
	inline static int32_t get_offset_of_unPacketNum_0() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___unPacketNum_0)); }
	inline uint32_t get_unPacketNum_0() const { return ___unPacketNum_0; }
	inline uint32_t* get_address_of_unPacketNum_0() { return &___unPacketNum_0; }
	inline void set_unPacketNum_0(uint32_t value)
	{
		___unPacketNum_0 = value;
	}

	inline static int32_t get_offset_of_ulButtonPressed_1() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___ulButtonPressed_1)); }
	inline uint64_t get_ulButtonPressed_1() const { return ___ulButtonPressed_1; }
	inline uint64_t* get_address_of_ulButtonPressed_1() { return &___ulButtonPressed_1; }
	inline void set_ulButtonPressed_1(uint64_t value)
	{
		___ulButtonPressed_1 = value;
	}

	inline static int32_t get_offset_of_ulButtonTouched_2() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___ulButtonTouched_2)); }
	inline uint64_t get_ulButtonTouched_2() const { return ___ulButtonTouched_2; }
	inline uint64_t* get_address_of_ulButtonTouched_2() { return &___ulButtonTouched_2; }
	inline void set_ulButtonTouched_2(uint64_t value)
	{
		___ulButtonTouched_2 = value;
	}

	inline static int32_t get_offset_of_rAxis0_3() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___rAxis0_3)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis0_3() const { return ___rAxis0_3; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis0_3() { return &___rAxis0_3; }
	inline void set_rAxis0_3(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis0_3 = value;
	}

	inline static int32_t get_offset_of_rAxis1_4() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___rAxis1_4)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis1_4() const { return ___rAxis1_4; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis1_4() { return &___rAxis1_4; }
	inline void set_rAxis1_4(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis1_4 = value;
	}

	inline static int32_t get_offset_of_rAxis2_5() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___rAxis2_5)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis2_5() const { return ___rAxis2_5; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis2_5() { return &___rAxis2_5; }
	inline void set_rAxis2_5(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis2_5 = value;
	}

	inline static int32_t get_offset_of_rAxis3_6() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___rAxis3_6)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis3_6() const { return ___rAxis3_6; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis3_6() { return &___rAxis3_6; }
	inline void set_rAxis3_6(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis3_6 = value;
	}

	inline static int32_t get_offset_of_rAxis4_7() { return static_cast<int32_t>(offsetof(VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801, ___rAxis4_7)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis4_7() const { return ___rAxis4_7; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis4_7() { return &___rAxis4_7; }
	inline void set_rAxis4_7(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis4_7 = value;
	}
};


// Valve.VR.VRControllerState_t_Packed
#pragma pack(push, tp, 4)
struct VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 
{
public:
	// System.UInt32 Valve.VR.VRControllerState_t_Packed::unPacketNum
	uint32_t ___unPacketNum_0;
	// System.UInt64 Valve.VR.VRControllerState_t_Packed::ulButtonPressed
	uint64_t ___ulButtonPressed_1;
	// System.UInt64 Valve.VR.VRControllerState_t_Packed::ulButtonTouched
	uint64_t ___ulButtonTouched_2;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t_Packed::rAxis0
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis0_3;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t_Packed::rAxis1
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis1_4;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t_Packed::rAxis2
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis2_5;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t_Packed::rAxis3
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis3_6;
	// Valve.VR.VRControllerAxis_t Valve.VR.VRControllerState_t_Packed::rAxis4
	VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  ___rAxis4_7;

public:
	inline static int32_t get_offset_of_unPacketNum_0() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___unPacketNum_0)); }
	inline uint32_t get_unPacketNum_0() const { return ___unPacketNum_0; }
	inline uint32_t* get_address_of_unPacketNum_0() { return &___unPacketNum_0; }
	inline void set_unPacketNum_0(uint32_t value)
	{
		___unPacketNum_0 = value;
	}

	inline static int32_t get_offset_of_ulButtonPressed_1() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___ulButtonPressed_1)); }
	inline uint64_t get_ulButtonPressed_1() const { return ___ulButtonPressed_1; }
	inline uint64_t* get_address_of_ulButtonPressed_1() { return &___ulButtonPressed_1; }
	inline void set_ulButtonPressed_1(uint64_t value)
	{
		___ulButtonPressed_1 = value;
	}

	inline static int32_t get_offset_of_ulButtonTouched_2() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___ulButtonTouched_2)); }
	inline uint64_t get_ulButtonTouched_2() const { return ___ulButtonTouched_2; }
	inline uint64_t* get_address_of_ulButtonTouched_2() { return &___ulButtonTouched_2; }
	inline void set_ulButtonTouched_2(uint64_t value)
	{
		___ulButtonTouched_2 = value;
	}

	inline static int32_t get_offset_of_rAxis0_3() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___rAxis0_3)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis0_3() const { return ___rAxis0_3; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis0_3() { return &___rAxis0_3; }
	inline void set_rAxis0_3(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis0_3 = value;
	}

	inline static int32_t get_offset_of_rAxis1_4() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___rAxis1_4)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis1_4() const { return ___rAxis1_4; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis1_4() { return &___rAxis1_4; }
	inline void set_rAxis1_4(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis1_4 = value;
	}

	inline static int32_t get_offset_of_rAxis2_5() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___rAxis2_5)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis2_5() const { return ___rAxis2_5; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis2_5() { return &___rAxis2_5; }
	inline void set_rAxis2_5(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis2_5 = value;
	}

	inline static int32_t get_offset_of_rAxis3_6() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___rAxis3_6)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis3_6() const { return ___rAxis3_6; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis3_6() { return &___rAxis3_6; }
	inline void set_rAxis3_6(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis3_6 = value;
	}

	inline static int32_t get_offset_of_rAxis4_7() { return static_cast<int32_t>(offsetof(VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209, ___rAxis4_7)); }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  get_rAxis4_7() const { return ___rAxis4_7; }
	inline VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB * get_address_of_rAxis4_7() { return &___rAxis4_7; }
	inline void set_rAxis4_7(VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  value)
	{
		___rAxis4_7 = value;
	}
};
#pragma pack(pop, tp)


// Valve.VR.VRMessageOverlayResponse
struct VRMessageOverlayResponse_t3D950B403018A4CFF5541C0CD05D3C10E14ECE06 
{
public:
	// System.Int32 Valve.VR.VRMessageOverlayResponse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRMessageOverlayResponse_t3D950B403018A4CFF5541C0CD05D3C10E14ECE06, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.VROverlayFlags
struct VROverlayFlags_t02EA209060B31F49287BB70643A62D6762C5F068 
{
public:
	// System.Int32 Valve.VR.VROverlayFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VROverlayFlags_t02EA209060B31F49287BB70643A62D6762C5F068, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.VROverlayInputMethod
struct VROverlayInputMethod_tB5231A58108A722C02A949EA945D9A22EAB6E6B2 
{
public:
	// System.Int32 Valve.VR.VROverlayInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VROverlayInputMethod_tB5231A58108A722C02A949EA945D9A22EAB6E6B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t
struct VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.IntersectionMaskRectangle_t Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t::m_Rectangle
			IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3  ___m_Rectangle_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3  ___m_Rectangle_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.IntersectionMaskCircle_t Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t::m_Circle
			IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F  ___m_Circle_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F  ___m_Circle_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Rectangle_0() { return static_cast<int32_t>(offsetof(VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1, ___m_Rectangle_0)); }
	inline IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3  get_m_Rectangle_0() const { return ___m_Rectangle_0; }
	inline IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3 * get_address_of_m_Rectangle_0() { return &___m_Rectangle_0; }
	inline void set_m_Rectangle_0(IntersectionMaskRectangle_t_tC929D8A3ABF11A79FB225D85D4C46CB744CA8DD3  value)
	{
		___m_Rectangle_0 = value;
	}

	inline static int32_t get_offset_of_m_Circle_1() { return static_cast<int32_t>(offsetof(VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1, ___m_Circle_1)); }
	inline IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F  get_m_Circle_1() const { return ___m_Circle_1; }
	inline IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F * get_address_of_m_Circle_1() { return &___m_Circle_1; }
	inline void set_m_Circle_1(IntersectionMaskCircle_t_t0552656149F11ECBAE9AF68E7F0D4EC729B3137F  value)
	{
		___m_Circle_1 = value;
	}
};


// Valve.VR.VROverlayIntersectionResults_t
struct VROverlayIntersectionResults_t_tC1979A8BBD8C7E81BC199FBEE1A549E470C29357 
{
public:
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionResults_t::vPoint
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vPoint_0;
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionResults_t::vNormal
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vNormal_1;
	// Valve.VR.HmdVector2_t Valve.VR.VROverlayIntersectionResults_t::vUVs
	HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A  ___vUVs_2;
	// System.Single Valve.VR.VROverlayIntersectionResults_t::fDistance
	float ___fDistance_3;

public:
	inline static int32_t get_offset_of_vPoint_0() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_tC1979A8BBD8C7E81BC199FBEE1A549E470C29357, ___vPoint_0)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vPoint_0() const { return ___vPoint_0; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vPoint_0() { return &___vPoint_0; }
	inline void set_vPoint_0(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vPoint_0 = value;
	}

	inline static int32_t get_offset_of_vNormal_1() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_tC1979A8BBD8C7E81BC199FBEE1A549E470C29357, ___vNormal_1)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vNormal_1() const { return ___vNormal_1; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vNormal_1() { return &___vNormal_1; }
	inline void set_vNormal_1(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vNormal_1 = value;
	}

	inline static int32_t get_offset_of_vUVs_2() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_tC1979A8BBD8C7E81BC199FBEE1A549E470C29357, ___vUVs_2)); }
	inline HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A  get_vUVs_2() const { return ___vUVs_2; }
	inline HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A * get_address_of_vUVs_2() { return &___vUVs_2; }
	inline void set_vUVs_2(HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A  value)
	{
		___vUVs_2 = value;
	}

	inline static int32_t get_offset_of_fDistance_3() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_tC1979A8BBD8C7E81BC199FBEE1A549E470C29357, ___fDistance_3)); }
	inline float get_fDistance_3() const { return ___fDistance_3; }
	inline float* get_address_of_fDistance_3() { return &___fDistance_3; }
	inline void set_fDistance_3(float value)
	{
		___fDistance_3 = value;
	}
};


// Valve.VR.VROverlayTransformType
struct VROverlayTransformType_tC5CBD82FF4CD3C962C96AC2687E4A3DD9CFC4DE5 
{
public:
	// System.Int32 Valve.VR.VROverlayTransformType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VROverlayTransformType_tC5CBD82FF4CD3C962C96AC2687E4A3DD9CFC4DE5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.VRTextureDepthInfo_t
struct VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0 
{
public:
	// System.IntPtr Valve.VR.VRTextureDepthInfo_t::handle
	intptr_t ___handle_0;
	// Valve.VR.HmdMatrix44_t Valve.VR.VRTextureDepthInfo_t::mProjection
	HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB  ___mProjection_1;
	// Valve.VR.HmdVector2_t Valve.VR.VRTextureDepthInfo_t::vRange
	HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A  ___vRange_2;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_mProjection_1() { return static_cast<int32_t>(offsetof(VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0, ___mProjection_1)); }
	inline HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB  get_mProjection_1() const { return ___mProjection_1; }
	inline HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB * get_address_of_mProjection_1() { return &___mProjection_1; }
	inline void set_mProjection_1(HmdMatrix44_t_t33F15A25B9C600224A95080F4663684B5ED6F8EB  value)
	{
		___mProjection_1 = value;
	}

	inline static int32_t get_offset_of_vRange_2() { return static_cast<int32_t>(offsetof(VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0, ___vRange_2)); }
	inline HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A  get_vRange_2() const { return ___vRange_2; }
	inline HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A * get_address_of_vRange_2() { return &___vRange_2; }
	inline void set_vRange_2(HmdVector2_t_tE35214CD24332F170A116B6A5474C8F9711A4E9A  value)
	{
		___vRange_2 = value;
	}
};


// Valve.VR.VRVulkanDevice_t
struct VRVulkanDevice_t_t358362738E4B1E73E64A97419A734A7CC1EBDF20 
{
public:
	// System.IntPtr Valve.VR.VRVulkanDevice_t::m_pInstance
	intptr_t ___m_pInstance_0;
	// System.IntPtr Valve.VR.VRVulkanDevice_t::m_pDevice
	intptr_t ___m_pDevice_1;
	// System.IntPtr Valve.VR.VRVulkanDevice_t::m_pPhysicalDevice
	intptr_t ___m_pPhysicalDevice_2;
	// System.IntPtr Valve.VR.VRVulkanDevice_t::m_pQueue
	intptr_t ___m_pQueue_3;
	// System.UInt32 Valve.VR.VRVulkanDevice_t::m_uQueueFamilyIndex
	uint32_t ___m_uQueueFamilyIndex_4;

public:
	inline static int32_t get_offset_of_m_pInstance_0() { return static_cast<int32_t>(offsetof(VRVulkanDevice_t_t358362738E4B1E73E64A97419A734A7CC1EBDF20, ___m_pInstance_0)); }
	inline intptr_t get_m_pInstance_0() const { return ___m_pInstance_0; }
	inline intptr_t* get_address_of_m_pInstance_0() { return &___m_pInstance_0; }
	inline void set_m_pInstance_0(intptr_t value)
	{
		___m_pInstance_0 = value;
	}

	inline static int32_t get_offset_of_m_pDevice_1() { return static_cast<int32_t>(offsetof(VRVulkanDevice_t_t358362738E4B1E73E64A97419A734A7CC1EBDF20, ___m_pDevice_1)); }
	inline intptr_t get_m_pDevice_1() const { return ___m_pDevice_1; }
	inline intptr_t* get_address_of_m_pDevice_1() { return &___m_pDevice_1; }
	inline void set_m_pDevice_1(intptr_t value)
	{
		___m_pDevice_1 = value;
	}

	inline static int32_t get_offset_of_m_pPhysicalDevice_2() { return static_cast<int32_t>(offsetof(VRVulkanDevice_t_t358362738E4B1E73E64A97419A734A7CC1EBDF20, ___m_pPhysicalDevice_2)); }
	inline intptr_t get_m_pPhysicalDevice_2() const { return ___m_pPhysicalDevice_2; }
	inline intptr_t* get_address_of_m_pPhysicalDevice_2() { return &___m_pPhysicalDevice_2; }
	inline void set_m_pPhysicalDevice_2(intptr_t value)
	{
		___m_pPhysicalDevice_2 = value;
	}

	inline static int32_t get_offset_of_m_pQueue_3() { return static_cast<int32_t>(offsetof(VRVulkanDevice_t_t358362738E4B1E73E64A97419A734A7CC1EBDF20, ___m_pQueue_3)); }
	inline intptr_t get_m_pQueue_3() const { return ___m_pQueue_3; }
	inline intptr_t* get_address_of_m_pQueue_3() { return &___m_pQueue_3; }
	inline void set_m_pQueue_3(intptr_t value)
	{
		___m_pQueue_3 = value;
	}

	inline static int32_t get_offset_of_m_uQueueFamilyIndex_4() { return static_cast<int32_t>(offsetof(VRVulkanDevice_t_t358362738E4B1E73E64A97419A734A7CC1EBDF20, ___m_uQueueFamilyIndex_4)); }
	inline uint32_t get_m_uQueueFamilyIndex_4() const { return ___m_uQueueFamilyIndex_4; }
	inline uint32_t* get_address_of_m_uQueueFamilyIndex_4() { return &___m_uQueueFamilyIndex_4; }
	inline void set_m_uQueueFamilyIndex_4(uint32_t value)
	{
		___m_uQueueFamilyIndex_4 = value;
	}
};


// Valve.VR.VRVulkanTextureData_t
struct VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343 
{
public:
	// System.UInt64 Valve.VR.VRVulkanTextureData_t::m_nImage
	uint64_t ___m_nImage_0;
	// System.IntPtr Valve.VR.VRVulkanTextureData_t::m_pDevice
	intptr_t ___m_pDevice_1;
	// System.IntPtr Valve.VR.VRVulkanTextureData_t::m_pPhysicalDevice
	intptr_t ___m_pPhysicalDevice_2;
	// System.IntPtr Valve.VR.VRVulkanTextureData_t::m_pInstance
	intptr_t ___m_pInstance_3;
	// System.IntPtr Valve.VR.VRVulkanTextureData_t::m_pQueue
	intptr_t ___m_pQueue_4;
	// System.UInt32 Valve.VR.VRVulkanTextureData_t::m_nQueueFamilyIndex
	uint32_t ___m_nQueueFamilyIndex_5;
	// System.UInt32 Valve.VR.VRVulkanTextureData_t::m_nWidth
	uint32_t ___m_nWidth_6;
	// System.UInt32 Valve.VR.VRVulkanTextureData_t::m_nHeight
	uint32_t ___m_nHeight_7;
	// System.UInt32 Valve.VR.VRVulkanTextureData_t::m_nFormat
	uint32_t ___m_nFormat_8;
	// System.UInt32 Valve.VR.VRVulkanTextureData_t::m_nSampleCount
	uint32_t ___m_nSampleCount_9;

public:
	inline static int32_t get_offset_of_m_nImage_0() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_nImage_0)); }
	inline uint64_t get_m_nImage_0() const { return ___m_nImage_0; }
	inline uint64_t* get_address_of_m_nImage_0() { return &___m_nImage_0; }
	inline void set_m_nImage_0(uint64_t value)
	{
		___m_nImage_0 = value;
	}

	inline static int32_t get_offset_of_m_pDevice_1() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_pDevice_1)); }
	inline intptr_t get_m_pDevice_1() const { return ___m_pDevice_1; }
	inline intptr_t* get_address_of_m_pDevice_1() { return &___m_pDevice_1; }
	inline void set_m_pDevice_1(intptr_t value)
	{
		___m_pDevice_1 = value;
	}

	inline static int32_t get_offset_of_m_pPhysicalDevice_2() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_pPhysicalDevice_2)); }
	inline intptr_t get_m_pPhysicalDevice_2() const { return ___m_pPhysicalDevice_2; }
	inline intptr_t* get_address_of_m_pPhysicalDevice_2() { return &___m_pPhysicalDevice_2; }
	inline void set_m_pPhysicalDevice_2(intptr_t value)
	{
		___m_pPhysicalDevice_2 = value;
	}

	inline static int32_t get_offset_of_m_pInstance_3() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_pInstance_3)); }
	inline intptr_t get_m_pInstance_3() const { return ___m_pInstance_3; }
	inline intptr_t* get_address_of_m_pInstance_3() { return &___m_pInstance_3; }
	inline void set_m_pInstance_3(intptr_t value)
	{
		___m_pInstance_3 = value;
	}

	inline static int32_t get_offset_of_m_pQueue_4() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_pQueue_4)); }
	inline intptr_t get_m_pQueue_4() const { return ___m_pQueue_4; }
	inline intptr_t* get_address_of_m_pQueue_4() { return &___m_pQueue_4; }
	inline void set_m_pQueue_4(intptr_t value)
	{
		___m_pQueue_4 = value;
	}

	inline static int32_t get_offset_of_m_nQueueFamilyIndex_5() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_nQueueFamilyIndex_5)); }
	inline uint32_t get_m_nQueueFamilyIndex_5() const { return ___m_nQueueFamilyIndex_5; }
	inline uint32_t* get_address_of_m_nQueueFamilyIndex_5() { return &___m_nQueueFamilyIndex_5; }
	inline void set_m_nQueueFamilyIndex_5(uint32_t value)
	{
		___m_nQueueFamilyIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_nWidth_6() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_nWidth_6)); }
	inline uint32_t get_m_nWidth_6() const { return ___m_nWidth_6; }
	inline uint32_t* get_address_of_m_nWidth_6() { return &___m_nWidth_6; }
	inline void set_m_nWidth_6(uint32_t value)
	{
		___m_nWidth_6 = value;
	}

	inline static int32_t get_offset_of_m_nHeight_7() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_nHeight_7)); }
	inline uint32_t get_m_nHeight_7() const { return ___m_nHeight_7; }
	inline uint32_t* get_address_of_m_nHeight_7() { return &___m_nHeight_7; }
	inline void set_m_nHeight_7(uint32_t value)
	{
		___m_nHeight_7 = value;
	}

	inline static int32_t get_offset_of_m_nFormat_8() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_nFormat_8)); }
	inline uint32_t get_m_nFormat_8() const { return ___m_nFormat_8; }
	inline uint32_t* get_address_of_m_nFormat_8() { return &___m_nFormat_8; }
	inline void set_m_nFormat_8(uint32_t value)
	{
		___m_nFormat_8 = value;
	}

	inline static int32_t get_offset_of_m_nSampleCount_9() { return static_cast<int32_t>(offsetof(VRVulkanTextureData_t_tB72863C1634FDC96EA360756F3B892CAAE354343, ___m_nSampleCount_9)); }
	inline uint32_t get_m_nSampleCount_9() const { return ___m_nSampleCount_9; }
	inline uint32_t* get_address_of_m_nSampleCount_9() { return &___m_nSampleCount_9; }
	inline void set_m_nSampleCount_9(uint32_t value)
	{
		___m_nSampleCount_9 = value;
	}
};


// Valve.VR.PathRead_t
struct PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C 
{
public:
	// System.UInt64 Valve.VR.PathRead_t::ulPath
	uint64_t ___ulPath_0;
	// System.IntPtr Valve.VR.PathRead_t::pvBuffer
	intptr_t ___pvBuffer_1;
	// System.UInt32 Valve.VR.PathRead_t::unBufferSize
	uint32_t ___unBufferSize_2;
	// System.UInt32 Valve.VR.PathRead_t::unTag
	uint32_t ___unTag_3;
	// System.UInt32 Valve.VR.PathRead_t::unRequiredBufferSize
	uint32_t ___unRequiredBufferSize_4;
	// Valve.VR.ETrackedPropertyError Valve.VR.PathRead_t::eError
	int32_t ___eError_5;
	// System.IntPtr Valve.VR.PathRead_t::pszPath
	intptr_t ___pszPath_6;

public:
	inline static int32_t get_offset_of_ulPath_0() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___ulPath_0)); }
	inline uint64_t get_ulPath_0() const { return ___ulPath_0; }
	inline uint64_t* get_address_of_ulPath_0() { return &___ulPath_0; }
	inline void set_ulPath_0(uint64_t value)
	{
		___ulPath_0 = value;
	}

	inline static int32_t get_offset_of_pvBuffer_1() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___pvBuffer_1)); }
	inline intptr_t get_pvBuffer_1() const { return ___pvBuffer_1; }
	inline intptr_t* get_address_of_pvBuffer_1() { return &___pvBuffer_1; }
	inline void set_pvBuffer_1(intptr_t value)
	{
		___pvBuffer_1 = value;
	}

	inline static int32_t get_offset_of_unBufferSize_2() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___unBufferSize_2)); }
	inline uint32_t get_unBufferSize_2() const { return ___unBufferSize_2; }
	inline uint32_t* get_address_of_unBufferSize_2() { return &___unBufferSize_2; }
	inline void set_unBufferSize_2(uint32_t value)
	{
		___unBufferSize_2 = value;
	}

	inline static int32_t get_offset_of_unTag_3() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___unTag_3)); }
	inline uint32_t get_unTag_3() const { return ___unTag_3; }
	inline uint32_t* get_address_of_unTag_3() { return &___unTag_3; }
	inline void set_unTag_3(uint32_t value)
	{
		___unTag_3 = value;
	}

	inline static int32_t get_offset_of_unRequiredBufferSize_4() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___unRequiredBufferSize_4)); }
	inline uint32_t get_unRequiredBufferSize_4() const { return ___unRequiredBufferSize_4; }
	inline uint32_t* get_address_of_unRequiredBufferSize_4() { return &___unRequiredBufferSize_4; }
	inline void set_unRequiredBufferSize_4(uint32_t value)
	{
		___unRequiredBufferSize_4 = value;
	}

	inline static int32_t get_offset_of_eError_5() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___eError_5)); }
	inline int32_t get_eError_5() const { return ___eError_5; }
	inline int32_t* get_address_of_eError_5() { return &___eError_5; }
	inline void set_eError_5(int32_t value)
	{
		___eError_5 = value;
	}

	inline static int32_t get_offset_of_pszPath_6() { return static_cast<int32_t>(offsetof(PathRead_t_tAD51C26E2A81D3EC3831358838FC011EA955130C, ___pszPath_6)); }
	inline intptr_t get_pszPath_6() const { return ___pszPath_6; }
	inline intptr_t* get_address_of_pszPath_6() { return &___pszPath_6; }
	inline void set_pszPath_6(intptr_t value)
	{
		___pszPath_6 = value;
	}
};


// Valve.VR.PathWrite_t
struct PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3 
{
public:
	// System.UInt64 Valve.VR.PathWrite_t::ulPath
	uint64_t ___ulPath_0;
	// Valve.VR.EPropertyWriteType Valve.VR.PathWrite_t::writeType
	int32_t ___writeType_1;
	// Valve.VR.ETrackedPropertyError Valve.VR.PathWrite_t::eSetError
	int32_t ___eSetError_2;
	// System.IntPtr Valve.VR.PathWrite_t::pvBuffer
	intptr_t ___pvBuffer_3;
	// System.UInt32 Valve.VR.PathWrite_t::unBufferSize
	uint32_t ___unBufferSize_4;
	// System.UInt32 Valve.VR.PathWrite_t::unTag
	uint32_t ___unTag_5;
	// Valve.VR.ETrackedPropertyError Valve.VR.PathWrite_t::eError
	int32_t ___eError_6;
	// System.IntPtr Valve.VR.PathWrite_t::pszPath
	intptr_t ___pszPath_7;

public:
	inline static int32_t get_offset_of_ulPath_0() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___ulPath_0)); }
	inline uint64_t get_ulPath_0() const { return ___ulPath_0; }
	inline uint64_t* get_address_of_ulPath_0() { return &___ulPath_0; }
	inline void set_ulPath_0(uint64_t value)
	{
		___ulPath_0 = value;
	}

	inline static int32_t get_offset_of_writeType_1() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___writeType_1)); }
	inline int32_t get_writeType_1() const { return ___writeType_1; }
	inline int32_t* get_address_of_writeType_1() { return &___writeType_1; }
	inline void set_writeType_1(int32_t value)
	{
		___writeType_1 = value;
	}

	inline static int32_t get_offset_of_eSetError_2() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___eSetError_2)); }
	inline int32_t get_eSetError_2() const { return ___eSetError_2; }
	inline int32_t* get_address_of_eSetError_2() { return &___eSetError_2; }
	inline void set_eSetError_2(int32_t value)
	{
		___eSetError_2 = value;
	}

	inline static int32_t get_offset_of_pvBuffer_3() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___pvBuffer_3)); }
	inline intptr_t get_pvBuffer_3() const { return ___pvBuffer_3; }
	inline intptr_t* get_address_of_pvBuffer_3() { return &___pvBuffer_3; }
	inline void set_pvBuffer_3(intptr_t value)
	{
		___pvBuffer_3 = value;
	}

	inline static int32_t get_offset_of_unBufferSize_4() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___unBufferSize_4)); }
	inline uint32_t get_unBufferSize_4() const { return ___unBufferSize_4; }
	inline uint32_t* get_address_of_unBufferSize_4() { return &___unBufferSize_4; }
	inline void set_unBufferSize_4(uint32_t value)
	{
		___unBufferSize_4 = value;
	}

	inline static int32_t get_offset_of_unTag_5() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___unTag_5)); }
	inline uint32_t get_unTag_5() const { return ___unTag_5; }
	inline uint32_t* get_address_of_unTag_5() { return &___unTag_5; }
	inline void set_unTag_5(uint32_t value)
	{
		___unTag_5 = value;
	}

	inline static int32_t get_offset_of_eError_6() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___eError_6)); }
	inline int32_t get_eError_6() const { return ___eError_6; }
	inline int32_t* get_address_of_eError_6() { return &___eError_6; }
	inline void set_eError_6(int32_t value)
	{
		___eError_6 = value;
	}

	inline static int32_t get_offset_of_pszPath_7() { return static_cast<int32_t>(offsetof(PathWrite_t_tB43E04828741F772CE3CB42B33F4492134073BA3, ___pszPath_7)); }
	inline intptr_t get_pszPath_7() const { return ___pszPath_7; }
	inline intptr_t* get_address_of_pszPath_7() { return &___pszPath_7; }
	inline void set_pszPath_7(intptr_t value)
	{
		___pszPath_7 = value;
	}
};


// Valve.VR.PropertyRead_t
struct PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66 
{
public:
	// Valve.VR.ETrackedDeviceProperty Valve.VR.PropertyRead_t::prop
	int32_t ___prop_0;
	// System.IntPtr Valve.VR.PropertyRead_t::pvBuffer
	intptr_t ___pvBuffer_1;
	// System.UInt32 Valve.VR.PropertyRead_t::unBufferSize
	uint32_t ___unBufferSize_2;
	// System.UInt32 Valve.VR.PropertyRead_t::unTag
	uint32_t ___unTag_3;
	// System.UInt32 Valve.VR.PropertyRead_t::unRequiredBufferSize
	uint32_t ___unRequiredBufferSize_4;
	// Valve.VR.ETrackedPropertyError Valve.VR.PropertyRead_t::eError
	int32_t ___eError_5;

public:
	inline static int32_t get_offset_of_prop_0() { return static_cast<int32_t>(offsetof(PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66, ___prop_0)); }
	inline int32_t get_prop_0() const { return ___prop_0; }
	inline int32_t* get_address_of_prop_0() { return &___prop_0; }
	inline void set_prop_0(int32_t value)
	{
		___prop_0 = value;
	}

	inline static int32_t get_offset_of_pvBuffer_1() { return static_cast<int32_t>(offsetof(PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66, ___pvBuffer_1)); }
	inline intptr_t get_pvBuffer_1() const { return ___pvBuffer_1; }
	inline intptr_t* get_address_of_pvBuffer_1() { return &___pvBuffer_1; }
	inline void set_pvBuffer_1(intptr_t value)
	{
		___pvBuffer_1 = value;
	}

	inline static int32_t get_offset_of_unBufferSize_2() { return static_cast<int32_t>(offsetof(PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66, ___unBufferSize_2)); }
	inline uint32_t get_unBufferSize_2() const { return ___unBufferSize_2; }
	inline uint32_t* get_address_of_unBufferSize_2() { return &___unBufferSize_2; }
	inline void set_unBufferSize_2(uint32_t value)
	{
		___unBufferSize_2 = value;
	}

	inline static int32_t get_offset_of_unTag_3() { return static_cast<int32_t>(offsetof(PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66, ___unTag_3)); }
	inline uint32_t get_unTag_3() const { return ___unTag_3; }
	inline uint32_t* get_address_of_unTag_3() { return &___unTag_3; }
	inline void set_unTag_3(uint32_t value)
	{
		___unTag_3 = value;
	}

	inline static int32_t get_offset_of_unRequiredBufferSize_4() { return static_cast<int32_t>(offsetof(PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66, ___unRequiredBufferSize_4)); }
	inline uint32_t get_unRequiredBufferSize_4() const { return ___unRequiredBufferSize_4; }
	inline uint32_t* get_address_of_unRequiredBufferSize_4() { return &___unRequiredBufferSize_4; }
	inline void set_unRequiredBufferSize_4(uint32_t value)
	{
		___unRequiredBufferSize_4 = value;
	}

	inline static int32_t get_offset_of_eError_5() { return static_cast<int32_t>(offsetof(PropertyRead_t_t6256BFC1F0170A4A47E9C58CDFFB0DA91F194D66, ___eError_5)); }
	inline int32_t get_eError_5() const { return ___eError_5; }
	inline int32_t* get_address_of_eError_5() { return &___eError_5; }
	inline void set_eError_5(int32_t value)
	{
		___eError_5 = value;
	}
};


// Valve.VR.PropertyWrite_t
struct PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051 
{
public:
	// Valve.VR.ETrackedDeviceProperty Valve.VR.PropertyWrite_t::prop
	int32_t ___prop_0;
	// Valve.VR.EPropertyWriteType Valve.VR.PropertyWrite_t::writeType
	int32_t ___writeType_1;
	// Valve.VR.ETrackedPropertyError Valve.VR.PropertyWrite_t::eSetError
	int32_t ___eSetError_2;
	// System.IntPtr Valve.VR.PropertyWrite_t::pvBuffer
	intptr_t ___pvBuffer_3;
	// System.UInt32 Valve.VR.PropertyWrite_t::unBufferSize
	uint32_t ___unBufferSize_4;
	// System.UInt32 Valve.VR.PropertyWrite_t::unTag
	uint32_t ___unTag_5;
	// Valve.VR.ETrackedPropertyError Valve.VR.PropertyWrite_t::eError
	int32_t ___eError_6;

public:
	inline static int32_t get_offset_of_prop_0() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___prop_0)); }
	inline int32_t get_prop_0() const { return ___prop_0; }
	inline int32_t* get_address_of_prop_0() { return &___prop_0; }
	inline void set_prop_0(int32_t value)
	{
		___prop_0 = value;
	}

	inline static int32_t get_offset_of_writeType_1() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___writeType_1)); }
	inline int32_t get_writeType_1() const { return ___writeType_1; }
	inline int32_t* get_address_of_writeType_1() { return &___writeType_1; }
	inline void set_writeType_1(int32_t value)
	{
		___writeType_1 = value;
	}

	inline static int32_t get_offset_of_eSetError_2() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___eSetError_2)); }
	inline int32_t get_eSetError_2() const { return ___eSetError_2; }
	inline int32_t* get_address_of_eSetError_2() { return &___eSetError_2; }
	inline void set_eSetError_2(int32_t value)
	{
		___eSetError_2 = value;
	}

	inline static int32_t get_offset_of_pvBuffer_3() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___pvBuffer_3)); }
	inline intptr_t get_pvBuffer_3() const { return ___pvBuffer_3; }
	inline intptr_t* get_address_of_pvBuffer_3() { return &___pvBuffer_3; }
	inline void set_pvBuffer_3(intptr_t value)
	{
		___pvBuffer_3 = value;
	}

	inline static int32_t get_offset_of_unBufferSize_4() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___unBufferSize_4)); }
	inline uint32_t get_unBufferSize_4() const { return ___unBufferSize_4; }
	inline uint32_t* get_address_of_unBufferSize_4() { return &___unBufferSize_4; }
	inline void set_unBufferSize_4(uint32_t value)
	{
		___unBufferSize_4 = value;
	}

	inline static int32_t get_offset_of_unTag_5() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___unTag_5)); }
	inline uint32_t get_unTag_5() const { return ___unTag_5; }
	inline uint32_t* get_address_of_unTag_5() { return &___unTag_5; }
	inline void set_unTag_5(uint32_t value)
	{
		___unTag_5 = value;
	}

	inline static int32_t get_offset_of_eError_6() { return static_cast<int32_t>(offsetof(PropertyWrite_t_t315CF2039B635A23EC83F93C868DE3C472090051, ___eError_6)); }
	inline int32_t get_eError_6() const { return ___eError_6; }
	inline int32_t* get_address_of_eError_6() { return &___eError_6; }
	inline void set_eError_6(int32_t value)
	{
		___eError_6 = value;
	}
};


// Valve.VR.RenderModel_TextureMap_t
struct RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF 
{
public:
	// System.UInt16 Valve.VR.RenderModel_TextureMap_t::unWidth
	uint16_t ___unWidth_0;
	// System.UInt16 Valve.VR.RenderModel_TextureMap_t::unHeight
	uint16_t ___unHeight_1;
	// System.IntPtr Valve.VR.RenderModel_TextureMap_t::rubTextureMapData
	intptr_t ___rubTextureMapData_2;
	// Valve.VR.EVRRenderModelTextureFormat Valve.VR.RenderModel_TextureMap_t::format
	int32_t ___format_3;

public:
	inline static int32_t get_offset_of_unWidth_0() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF, ___unWidth_0)); }
	inline uint16_t get_unWidth_0() const { return ___unWidth_0; }
	inline uint16_t* get_address_of_unWidth_0() { return &___unWidth_0; }
	inline void set_unWidth_0(uint16_t value)
	{
		___unWidth_0 = value;
	}

	inline static int32_t get_offset_of_unHeight_1() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF, ___unHeight_1)); }
	inline uint16_t get_unHeight_1() const { return ___unHeight_1; }
	inline uint16_t* get_address_of_unHeight_1() { return &___unHeight_1; }
	inline void set_unHeight_1(uint16_t value)
	{
		___unHeight_1 = value;
	}

	inline static int32_t get_offset_of_rubTextureMapData_2() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF, ___rubTextureMapData_2)); }
	inline intptr_t get_rubTextureMapData_2() const { return ___rubTextureMapData_2; }
	inline intptr_t* get_address_of_rubTextureMapData_2() { return &___rubTextureMapData_2; }
	inline void set_rubTextureMapData_2(intptr_t value)
	{
		___rubTextureMapData_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}
};


// Valve.VR.RenderModel_TextureMap_t_Packed
#pragma pack(push, tp, 4)
struct RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 
{
public:
	// System.UInt16 Valve.VR.RenderModel_TextureMap_t_Packed::unWidth
	uint16_t ___unWidth_0;
	// System.UInt16 Valve.VR.RenderModel_TextureMap_t_Packed::unHeight
	uint16_t ___unHeight_1;
	// System.IntPtr Valve.VR.RenderModel_TextureMap_t_Packed::rubTextureMapData
	intptr_t ___rubTextureMapData_2;
	// Valve.VR.EVRRenderModelTextureFormat Valve.VR.RenderModel_TextureMap_t_Packed::format
	int32_t ___format_3;

public:
	inline static int32_t get_offset_of_unWidth_0() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5, ___unWidth_0)); }
	inline uint16_t get_unWidth_0() const { return ___unWidth_0; }
	inline uint16_t* get_address_of_unWidth_0() { return &___unWidth_0; }
	inline void set_unWidth_0(uint16_t value)
	{
		___unWidth_0 = value;
	}

	inline static int32_t get_offset_of_unHeight_1() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5, ___unHeight_1)); }
	inline uint16_t get_unHeight_1() const { return ___unHeight_1; }
	inline uint16_t* get_address_of_unHeight_1() { return &___unHeight_1; }
	inline void set_unHeight_1(uint16_t value)
	{
		___unHeight_1 = value;
	}

	inline static int32_t get_offset_of_rubTextureMapData_2() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5, ___rubTextureMapData_2)); }
	inline intptr_t get_rubTextureMapData_2() const { return ___rubTextureMapData_2; }
	inline intptr_t* get_address_of_rubTextureMapData_2() { return &___rubTextureMapData_2; }
	inline void set_rubTextureMapData_2(intptr_t value)
	{
		___rubTextureMapData_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}
};
#pragma pack(pop, tp)


// Valve.VR.Texture_t
struct Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5 
{
public:
	// System.IntPtr Valve.VR.Texture_t::handle
	intptr_t ___handle_0;
	// Valve.VR.ETextureType Valve.VR.Texture_t::eType
	int32_t ___eType_1;
	// Valve.VR.EColorSpace Valve.VR.Texture_t::eColorSpace
	int32_t ___eColorSpace_2;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_eType_1() { return static_cast<int32_t>(offsetof(Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5, ___eType_1)); }
	inline int32_t get_eType_1() const { return ___eType_1; }
	inline int32_t* get_address_of_eType_1() { return &___eType_1; }
	inline void set_eType_1(int32_t value)
	{
		___eType_1 = value;
	}

	inline static int32_t get_offset_of_eColorSpace_2() { return static_cast<int32_t>(offsetof(Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5, ___eColorSpace_2)); }
	inline int32_t get_eColorSpace_2() const { return ___eColorSpace_2; }
	inline int32_t* get_address_of_eColorSpace_2() { return &___eColorSpace_2; }
	inline void set_eColorSpace_2(int32_t value)
	{
		___eColorSpace_2 = value;
	}
};


// Valve.VR.TrackedDevicePose_t
struct TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383 
{
public:
	// Valve.VR.HmdMatrix34_t Valve.VR.TrackedDevicePose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  ___mDeviceToAbsoluteTracking_0;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vVelocity
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vVelocity_1;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vAngularVelocity
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vAngularVelocity_2;
	// Valve.VR.ETrackingResult Valve.VR.TrackedDevicePose_t::eTrackingResult
	int32_t ___eTrackingResult_3;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bPoseIsValid
	bool ___bPoseIsValid_4;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bDeviceIsConnected
	bool ___bDeviceIsConnected_5;

public:
	inline static int32_t get_offset_of_mDeviceToAbsoluteTracking_0() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383, ___mDeviceToAbsoluteTracking_0)); }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  get_mDeviceToAbsoluteTracking_0() const { return ___mDeviceToAbsoluteTracking_0; }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 * get_address_of_mDeviceToAbsoluteTracking_0() { return &___mDeviceToAbsoluteTracking_0; }
	inline void set_mDeviceToAbsoluteTracking_0(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  value)
	{
		___mDeviceToAbsoluteTracking_0 = value;
	}

	inline static int32_t get_offset_of_vVelocity_1() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383, ___vVelocity_1)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vVelocity_1() const { return ___vVelocity_1; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vVelocity_1() { return &___vVelocity_1; }
	inline void set_vVelocity_1(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vVelocity_1 = value;
	}

	inline static int32_t get_offset_of_vAngularVelocity_2() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383, ___vAngularVelocity_2)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vAngularVelocity_2() const { return ___vAngularVelocity_2; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vAngularVelocity_2() { return &___vAngularVelocity_2; }
	inline void set_vAngularVelocity_2(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vAngularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_eTrackingResult_3() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383, ___eTrackingResult_3)); }
	inline int32_t get_eTrackingResult_3() const { return ___eTrackingResult_3; }
	inline int32_t* get_address_of_eTrackingResult_3() { return &___eTrackingResult_3; }
	inline void set_eTrackingResult_3(int32_t value)
	{
		___eTrackingResult_3 = value;
	}

	inline static int32_t get_offset_of_bPoseIsValid_4() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383, ___bPoseIsValid_4)); }
	inline bool get_bPoseIsValid_4() const { return ___bPoseIsValid_4; }
	inline bool* get_address_of_bPoseIsValid_4() { return &___bPoseIsValid_4; }
	inline void set_bPoseIsValid_4(bool value)
	{
		___bPoseIsValid_4 = value;
	}

	inline static int32_t get_offset_of_bDeviceIsConnected_5() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t42B7DC644F0F2CC1B416722EE2D63CB077F24383, ___bDeviceIsConnected_5)); }
	inline bool get_bDeviceIsConnected_5() const { return ___bDeviceIsConnected_5; }
	inline bool* get_address_of_bDeviceIsConnected_5() { return &___bDeviceIsConnected_5; }
	inline void set_bDeviceIsConnected_5(bool value)
	{
		___bDeviceIsConnected_5 = value;
	}
};


// Valve.VR.VREvent_HDCPError_t
struct VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA 
{
public:
	// Valve.VR.EHDCPError Valve.VR.VREvent_HDCPError_t::eCode
	int32_t ___eCode_0;

public:
	inline static int32_t get_offset_of_eCode_0() { return static_cast<int32_t>(offsetof(VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA, ___eCode_0)); }
	inline int32_t get_eCode_0() const { return ___eCode_0; }
	inline int32_t* get_address_of_eCode_0() { return &___eCode_0; }
	inline void set_eCode_0(int32_t value)
	{
		___eCode_0 = value;
	}
};


// Valve.VR.VREvent_Property_t
struct VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C 
{
public:
	// System.UInt64 Valve.VR.VREvent_Property_t::container
	uint64_t ___container_0;
	// Valve.VR.ETrackedDeviceProperty Valve.VR.VREvent_Property_t::prop
	int32_t ___prop_1;

public:
	inline static int32_t get_offset_of_container_0() { return static_cast<int32_t>(offsetof(VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C, ___container_0)); }
	inline uint64_t get_container_0() const { return ___container_0; }
	inline uint64_t* get_address_of_container_0() { return &___container_0; }
	inline void set_container_0(uint64_t value)
	{
		___container_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C, ___prop_1)); }
	inline int32_t get_prop_1() const { return ___prop_1; }
	inline int32_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(int32_t value)
	{
		___prop_1 = value;
	}
};


// Valve.VR.VREvent_ShowUI_t
struct VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D 
{
public:
	// Valve.VR.EShowUIType Valve.VR.VREvent_ShowUI_t::eType
	int32_t ___eType_0;

public:
	inline static int32_t get_offset_of_eType_0() { return static_cast<int32_t>(offsetof(VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D, ___eType_0)); }
	inline int32_t get_eType_0() const { return ___eType_0; }
	inline int32_t* get_address_of_eType_0() { return &___eType_0; }
	inline void set_eType_0(int32_t value)
	{
		___eType_0 = value;
	}
};


// Valve.VR.VRNativeDevice_t
struct VRNativeDevice_t_t3B3B072BE55BE28FF84B5D9B4E33928FB4FD023F 
{
public:
	// System.IntPtr Valve.VR.VRNativeDevice_t::handle
	intptr_t ___handle_0;
	// Valve.VR.EDeviceType Valve.VR.VRNativeDevice_t::eType
	int32_t ___eType_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VRNativeDevice_t_t3B3B072BE55BE28FF84B5D9B4E33928FB4FD023F, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_eType_1() { return static_cast<int32_t>(offsetof(VRNativeDevice_t_t3B3B072BE55BE28FF84B5D9B4E33928FB4FD023F, ___eType_1)); }
	inline int32_t get_eType_1() const { return ___eType_1; }
	inline int32_t* get_address_of_eType_1() { return &___eType_1; }
	inline void set_eType_1(int32_t value)
	{
		___eType_1 = value;
	}
};


// Valve.VR.VROverlayIntersectionMaskPrimitive_t
struct VROverlayIntersectionMaskPrimitive_t_t1396D9BC520730D0906D66E8B413701392EB8054 
{
public:
	// Valve.VR.EVROverlayIntersectionMaskPrimitiveType Valve.VR.VROverlayIntersectionMaskPrimitive_t::m_nPrimitiveType
	int32_t ___m_nPrimitiveType_0;
	// Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t Valve.VR.VROverlayIntersectionMaskPrimitive_t::m_Primitive
	VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1  ___m_Primitive_1;

public:
	inline static int32_t get_offset_of_m_nPrimitiveType_0() { return static_cast<int32_t>(offsetof(VROverlayIntersectionMaskPrimitive_t_t1396D9BC520730D0906D66E8B413701392EB8054, ___m_nPrimitiveType_0)); }
	inline int32_t get_m_nPrimitiveType_0() const { return ___m_nPrimitiveType_0; }
	inline int32_t* get_address_of_m_nPrimitiveType_0() { return &___m_nPrimitiveType_0; }
	inline void set_m_nPrimitiveType_0(int32_t value)
	{
		___m_nPrimitiveType_0 = value;
	}

	inline static int32_t get_offset_of_m_Primitive_1() { return static_cast<int32_t>(offsetof(VROverlayIntersectionMaskPrimitive_t_t1396D9BC520730D0906D66E8B413701392EB8054, ___m_Primitive_1)); }
	inline VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1  get_m_Primitive_1() const { return ___m_Primitive_1; }
	inline VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1 * get_address_of_m_Primitive_1() { return &___m_Primitive_1; }
	inline void set_m_Primitive_1(VROverlayIntersectionMaskPrimitive_Data_t_tBE132AEDE7F7ED196F017260535C69A5D9D4F5D1  value)
	{
		___m_Primitive_1 = value;
	}
};


// Valve.VR.VROverlayIntersectionParams_t
struct VROverlayIntersectionParams_t_t35E4B67C9DB84A0BBF98BD8C7637CCEB527E8B1D 
{
public:
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionParams_t::vSource
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vSource_0;
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionParams_t::vDirection
	HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  ___vDirection_1;
	// Valve.VR.ETrackingUniverseOrigin Valve.VR.VROverlayIntersectionParams_t::eOrigin
	int32_t ___eOrigin_2;

public:
	inline static int32_t get_offset_of_vSource_0() { return static_cast<int32_t>(offsetof(VROverlayIntersectionParams_t_t35E4B67C9DB84A0BBF98BD8C7637CCEB527E8B1D, ___vSource_0)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vSource_0() const { return ___vSource_0; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vSource_0() { return &___vSource_0; }
	inline void set_vSource_0(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vSource_0 = value;
	}

	inline static int32_t get_offset_of_vDirection_1() { return static_cast<int32_t>(offsetof(VROverlayIntersectionParams_t_t35E4B67C9DB84A0BBF98BD8C7637CCEB527E8B1D, ___vDirection_1)); }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  get_vDirection_1() const { return ___vDirection_1; }
	inline HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3 * get_address_of_vDirection_1() { return &___vDirection_1; }
	inline void set_vDirection_1(HmdVector3_t_tEFA290D649DE2E28E5863ED6F09C667A0492FCF3  value)
	{
		___vDirection_1 = value;
	}

	inline static int32_t get_offset_of_eOrigin_2() { return static_cast<int32_t>(offsetof(VROverlayIntersectionParams_t_t35E4B67C9DB84A0BBF98BD8C7637CCEB527E8B1D, ___eOrigin_2)); }
	inline int32_t get_eOrigin_2() const { return ___eOrigin_2; }
	inline int32_t* get_address_of_eOrigin_2() { return &___eOrigin_2; }
	inline void set_eOrigin_2(int32_t value)
	{
		___eOrigin_2 = value;
	}
};


// Valve.VR.VRTextureWithDepth_t
struct VRTextureWithDepth_t_tB65AA61D10E0351E65F5B71312F588E09AB38B08 
{
public:
	// System.IntPtr Valve.VR.VRTextureWithDepth_t::handle
	intptr_t ___handle_0;
	// Valve.VR.ETextureType Valve.VR.VRTextureWithDepth_t::eType
	int32_t ___eType_1;
	// Valve.VR.EColorSpace Valve.VR.VRTextureWithDepth_t::eColorSpace
	int32_t ___eColorSpace_2;
	// Valve.VR.VRTextureDepthInfo_t Valve.VR.VRTextureWithDepth_t::depth
	VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0  ___depth_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VRTextureWithDepth_t_tB65AA61D10E0351E65F5B71312F588E09AB38B08, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_eType_1() { return static_cast<int32_t>(offsetof(VRTextureWithDepth_t_tB65AA61D10E0351E65F5B71312F588E09AB38B08, ___eType_1)); }
	inline int32_t get_eType_1() const { return ___eType_1; }
	inline int32_t* get_address_of_eType_1() { return &___eType_1; }
	inline void set_eType_1(int32_t value)
	{
		___eType_1 = value;
	}

	inline static int32_t get_offset_of_eColorSpace_2() { return static_cast<int32_t>(offsetof(VRTextureWithDepth_t_tB65AA61D10E0351E65F5B71312F588E09AB38B08, ___eColorSpace_2)); }
	inline int32_t get_eColorSpace_2() const { return ___eColorSpace_2; }
	inline int32_t* get_address_of_eColorSpace_2() { return &___eColorSpace_2; }
	inline void set_eColorSpace_2(int32_t value)
	{
		___eColorSpace_2 = value;
	}

	inline static int32_t get_offset_of_depth_3() { return static_cast<int32_t>(offsetof(VRTextureWithDepth_t_tB65AA61D10E0351E65F5B71312F588E09AB38B08, ___depth_3)); }
	inline VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0  get_depth_3() const { return ___depth_3; }
	inline VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0 * get_address_of_depth_3() { return &___depth_3; }
	inline void set_depth_3(VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0  value)
	{
		___depth_3 = value;
	}
};


// Valve.VR.VRTextureWithPoseAndDepth_t
struct VRTextureWithPoseAndDepth_t_t1C0667762D3ED318847CB724ED66287E4ED6D890 
{
public:
	// System.IntPtr Valve.VR.VRTextureWithPoseAndDepth_t::handle
	intptr_t ___handle_0;
	// Valve.VR.ETextureType Valve.VR.VRTextureWithPoseAndDepth_t::eType
	int32_t ___eType_1;
	// Valve.VR.EColorSpace Valve.VR.VRTextureWithPoseAndDepth_t::eColorSpace
	int32_t ___eColorSpace_2;
	// Valve.VR.HmdMatrix34_t Valve.VR.VRTextureWithPoseAndDepth_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  ___mDeviceToAbsoluteTracking_3;
	// Valve.VR.VRTextureDepthInfo_t Valve.VR.VRTextureWithPoseAndDepth_t::depth
	VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0  ___depth_4;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VRTextureWithPoseAndDepth_t_t1C0667762D3ED318847CB724ED66287E4ED6D890, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_eType_1() { return static_cast<int32_t>(offsetof(VRTextureWithPoseAndDepth_t_t1C0667762D3ED318847CB724ED66287E4ED6D890, ___eType_1)); }
	inline int32_t get_eType_1() const { return ___eType_1; }
	inline int32_t* get_address_of_eType_1() { return &___eType_1; }
	inline void set_eType_1(int32_t value)
	{
		___eType_1 = value;
	}

	inline static int32_t get_offset_of_eColorSpace_2() { return static_cast<int32_t>(offsetof(VRTextureWithPoseAndDepth_t_t1C0667762D3ED318847CB724ED66287E4ED6D890, ___eColorSpace_2)); }
	inline int32_t get_eColorSpace_2() const { return ___eColorSpace_2; }
	inline int32_t* get_address_of_eColorSpace_2() { return &___eColorSpace_2; }
	inline void set_eColorSpace_2(int32_t value)
	{
		___eColorSpace_2 = value;
	}

	inline static int32_t get_offset_of_mDeviceToAbsoluteTracking_3() { return static_cast<int32_t>(offsetof(VRTextureWithPoseAndDepth_t_t1C0667762D3ED318847CB724ED66287E4ED6D890, ___mDeviceToAbsoluteTracking_3)); }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  get_mDeviceToAbsoluteTracking_3() const { return ___mDeviceToAbsoluteTracking_3; }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 * get_address_of_mDeviceToAbsoluteTracking_3() { return &___mDeviceToAbsoluteTracking_3; }
	inline void set_mDeviceToAbsoluteTracking_3(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  value)
	{
		___mDeviceToAbsoluteTracking_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(VRTextureWithPoseAndDepth_t_t1C0667762D3ED318847CB724ED66287E4ED6D890, ___depth_4)); }
	inline VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0  get_depth_4() const { return ___depth_4; }
	inline VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0 * get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(VRTextureDepthInfo_t_tB8D5FBAD99D47B1714E7BCD3A8C9CD262B334EB0  value)
	{
		___depth_4 = value;
	}
};


// Valve.VR.VRTextureWithPose_t
struct VRTextureWithPose_t_t1FB6561191D97828B0DB62307A1FD14EE84A5CD2 
{
public:
	// System.IntPtr Valve.VR.VRTextureWithPose_t::handle
	intptr_t ___handle_0;
	// Valve.VR.ETextureType Valve.VR.VRTextureWithPose_t::eType
	int32_t ___eType_1;
	// Valve.VR.EColorSpace Valve.VR.VRTextureWithPose_t::eColorSpace
	int32_t ___eColorSpace_2;
	// Valve.VR.HmdMatrix34_t Valve.VR.VRTextureWithPose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  ___mDeviceToAbsoluteTracking_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VRTextureWithPose_t_t1FB6561191D97828B0DB62307A1FD14EE84A5CD2, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_eType_1() { return static_cast<int32_t>(offsetof(VRTextureWithPose_t_t1FB6561191D97828B0DB62307A1FD14EE84A5CD2, ___eType_1)); }
	inline int32_t get_eType_1() const { return ___eType_1; }
	inline int32_t* get_address_of_eType_1() { return &___eType_1; }
	inline void set_eType_1(int32_t value)
	{
		___eType_1 = value;
	}

	inline static int32_t get_offset_of_eColorSpace_2() { return static_cast<int32_t>(offsetof(VRTextureWithPose_t_t1FB6561191D97828B0DB62307A1FD14EE84A5CD2, ___eColorSpace_2)); }
	inline int32_t get_eColorSpace_2() const { return ___eColorSpace_2; }
	inline int32_t* get_address_of_eColorSpace_2() { return &___eColorSpace_2; }
	inline void set_eColorSpace_2(int32_t value)
	{
		___eColorSpace_2 = value;
	}

	inline static int32_t get_offset_of_mDeviceToAbsoluteTracking_3() { return static_cast<int32_t>(offsetof(VRTextureWithPose_t_t1FB6561191D97828B0DB62307A1FD14EE84A5CD2, ___mDeviceToAbsoluteTracking_3)); }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  get_mDeviceToAbsoluteTracking_3() const { return ___mDeviceToAbsoluteTracking_3; }
	inline HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305 * get_address_of_mDeviceToAbsoluteTracking_3() { return &___mDeviceToAbsoluteTracking_3; }
	inline void set_mDeviceToAbsoluteTracking_3(HmdMatrix34_t_tAD83D388E6173A848E1FE39121EE1BB9FE7F6305  value)
	{
		___mDeviceToAbsoluteTracking_3 = value;
	}
};


// Valve.VR.VREvent_Data_t
struct VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Reserved_t Valve.VR.VREvent_Data_t::reserved
			VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A  ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A  ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Controller_t Valve.VR.VREvent_Data_t::controller
			VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B  ___controller_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B  ___controller_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Mouse_t Valve.VR.VREvent_Data_t::mouse
			VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA  ___mouse_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA  ___mouse_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Scroll_t Valve.VR.VREvent_Data_t::scroll
			VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB  ___scroll_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB  ___scroll_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Process_t Valve.VR.VREvent_Data_t::process
			VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC  ___process_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC  ___process_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Notification_t Valve.VR.VREvent_Data_t::notification
			VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF  ___notification_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF  ___notification_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Overlay_t Valve.VR.VREvent_Data_t::overlay
			VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5  ___overlay_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5  ___overlay_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Status_t Valve.VR.VREvent_Data_t::status
			VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702  ___status_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702  ___status_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Ipd_t Valve.VR.VREvent_Data_t::ipd
			VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F  ___ipd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F  ___ipd_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Chaperone_t Valve.VR.VREvent_Data_t::chaperone
			VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46  ___chaperone_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46  ___chaperone_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_PerformanceTest_t Valve.VR.VREvent_Data_t::performanceTest
			VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B  ___performanceTest_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B  ___performanceTest_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_TouchPadMove_t Valve.VR.VREvent_Data_t::touchPadMove
			VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81  ___touchPadMove_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81  ___touchPadMove_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SeatedZeroPoseReset_t Valve.VR.VREvent_Data_t::seatedZeroPoseReset
			VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0  ___seatedZeroPoseReset_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0  ___seatedZeroPoseReset_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Screenshot_t Valve.VR.VREvent_Data_t::screenshot
			VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8  ___screenshot_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8  ___screenshot_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ScreenshotProgress_t Valve.VR.VREvent_Data_t::screenshotProgress
			VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1  ___screenshotProgress_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1  ___screenshotProgress_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ApplicationLaunch_t Valve.VR.VREvent_Data_t::applicationLaunch
			VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576  ___applicationLaunch_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576  ___applicationLaunch_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_EditingCameraSurface_t Valve.VR.VREvent_Data_t::cameraSurface
			VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3  ___cameraSurface_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3  ___cameraSurface_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_MessageOverlay_t Valve.VR.VREvent_Data_t::messageOverlay
			VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA  ___messageOverlay_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA  ___messageOverlay_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Property_t Valve.VR.VREvent_Data_t::property
			VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C  ___property_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C  ___property_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_HapticVibration_t Valve.VR.VREvent_Data_t::hapticVibration
			VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60  ___hapticVibration_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60  ___hapticVibration_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_WebConsole_t Valve.VR.VREvent_Data_t::webConsole
			VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141  ___webConsole_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141  ___webConsole_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_InputBindingLoad_t Valve.VR.VREvent_Data_t::inputBinding
			VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B  ___inputBinding_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B  ___inputBinding_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SpatialAnchor_t Valve.VR.VREvent_Data_t::spatialAnchor
			VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB  ___spatialAnchor_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB  ___spatialAnchor_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_InputActionManifestLoad_t Valve.VR.VREvent_Data_t::actionManifest
			VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF  ___actionManifest_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF  ___actionManifest_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ProgressUpdate_t Valve.VR.VREvent_Data_t::progressUpdate
			VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC  ___progressUpdate_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC  ___progressUpdate_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ShowUI_t Valve.VR.VREvent_Data_t::showUi
			VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D  ___showUi_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D  ___showUi_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ShowDevTools_t Valve.VR.VREvent_Data_t::showDevTools
			VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2  ___showDevTools_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2  ___showDevTools_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_HDCPError_t Valve.VR.VREvent_Data_t::hdcpError
			VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA  ___hdcpError_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA  ___hdcpError_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Keyboard_t Valve.VR.VREvent_Data_t::keyboard
			VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711  ___keyboard_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711  ___keyboard_28_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___reserved_0)); }
	inline VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A  get_reserved_0() const { return ___reserved_0; }
	inline VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A * get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(VREvent_Reserved_t_tE81CB9212BB73CFF26C3E421DA16E6ACD8185E1A  value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_controller_1() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___controller_1)); }
	inline VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B  get_controller_1() const { return ___controller_1; }
	inline VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B * get_address_of_controller_1() { return &___controller_1; }
	inline void set_controller_1(VREvent_Controller_t_t0D0BDA42BC3477732260363FA0CBF1359DB5245B  value)
	{
		___controller_1 = value;
	}

	inline static int32_t get_offset_of_mouse_2() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___mouse_2)); }
	inline VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA  get_mouse_2() const { return ___mouse_2; }
	inline VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA * get_address_of_mouse_2() { return &___mouse_2; }
	inline void set_mouse_2(VREvent_Mouse_t_tBF8D1164850CB96359F7B65B99FBE720858907EA  value)
	{
		___mouse_2 = value;
	}

	inline static int32_t get_offset_of_scroll_3() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___scroll_3)); }
	inline VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB  get_scroll_3() const { return ___scroll_3; }
	inline VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB * get_address_of_scroll_3() { return &___scroll_3; }
	inline void set_scroll_3(VREvent_Scroll_t_tD19063699E5AFFF2438D6ED1961EFD9AC1BE02CB  value)
	{
		___scroll_3 = value;
	}

	inline static int32_t get_offset_of_process_4() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___process_4)); }
	inline VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC  get_process_4() const { return ___process_4; }
	inline VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC * get_address_of_process_4() { return &___process_4; }
	inline void set_process_4(VREvent_Process_t_t9E64123F9DDA8C60E494F8F87C8B1B10B67D84CC  value)
	{
		___process_4 = value;
	}

	inline static int32_t get_offset_of_notification_5() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___notification_5)); }
	inline VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF  get_notification_5() const { return ___notification_5; }
	inline VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF * get_address_of_notification_5() { return &___notification_5; }
	inline void set_notification_5(VREvent_Notification_t_tE11C8233D27135455D100F2209E03610BC2F5EAF  value)
	{
		___notification_5 = value;
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___overlay_6)); }
	inline VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5  get_overlay_6() const { return ___overlay_6; }
	inline VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5 * get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(VREvent_Overlay_t_t229F3DA05EE6B48D6ED783BBDD21F9FD4CE23AE5  value)
	{
		___overlay_6 = value;
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___status_7)); }
	inline VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702  get_status_7() const { return ___status_7; }
	inline VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702 * get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(VREvent_Status_t_tF2F620D83A715B9EFF08D14A043595BA9FAFD702  value)
	{
		___status_7 = value;
	}

	inline static int32_t get_offset_of_ipd_8() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___ipd_8)); }
	inline VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F  get_ipd_8() const { return ___ipd_8; }
	inline VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F * get_address_of_ipd_8() { return &___ipd_8; }
	inline void set_ipd_8(VREvent_Ipd_t_t194FED1A410AD7C8CC5AC2739E3612D7A988E08F  value)
	{
		___ipd_8 = value;
	}

	inline static int32_t get_offset_of_chaperone_9() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___chaperone_9)); }
	inline VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46  get_chaperone_9() const { return ___chaperone_9; }
	inline VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46 * get_address_of_chaperone_9() { return &___chaperone_9; }
	inline void set_chaperone_9(VREvent_Chaperone_t_tBAF9094CEC66D4CD638EA0B04F73E0522798FE46  value)
	{
		___chaperone_9 = value;
	}

	inline static int32_t get_offset_of_performanceTest_10() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___performanceTest_10)); }
	inline VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B  get_performanceTest_10() const { return ___performanceTest_10; }
	inline VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B * get_address_of_performanceTest_10() { return &___performanceTest_10; }
	inline void set_performanceTest_10(VREvent_PerformanceTest_t_t52F984DB0F086053FDA8A03611DC660A32D5403B  value)
	{
		___performanceTest_10 = value;
	}

	inline static int32_t get_offset_of_touchPadMove_11() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___touchPadMove_11)); }
	inline VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81  get_touchPadMove_11() const { return ___touchPadMove_11; }
	inline VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81 * get_address_of_touchPadMove_11() { return &___touchPadMove_11; }
	inline void set_touchPadMove_11(VREvent_TouchPadMove_t_tC47A9F4666D081433CC814660C7C2AD0B7A4BF81  value)
	{
		___touchPadMove_11 = value;
	}

	inline static int32_t get_offset_of_seatedZeroPoseReset_12() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___seatedZeroPoseReset_12)); }
	inline VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0  get_seatedZeroPoseReset_12() const { return ___seatedZeroPoseReset_12; }
	inline VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0 * get_address_of_seatedZeroPoseReset_12() { return &___seatedZeroPoseReset_12; }
	inline void set_seatedZeroPoseReset_12(VREvent_SeatedZeroPoseReset_t_tB5BA3946EC2195B7A8DA3EC253ACF93F593CFDA0  value)
	{
		___seatedZeroPoseReset_12 = value;
	}

	inline static int32_t get_offset_of_screenshot_13() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___screenshot_13)); }
	inline VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8  get_screenshot_13() const { return ___screenshot_13; }
	inline VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8 * get_address_of_screenshot_13() { return &___screenshot_13; }
	inline void set_screenshot_13(VREvent_Screenshot_t_tAA06A9550828D58577D331EEF5693D814105EDC8  value)
	{
		___screenshot_13 = value;
	}

	inline static int32_t get_offset_of_screenshotProgress_14() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___screenshotProgress_14)); }
	inline VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1  get_screenshotProgress_14() const { return ___screenshotProgress_14; }
	inline VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1 * get_address_of_screenshotProgress_14() { return &___screenshotProgress_14; }
	inline void set_screenshotProgress_14(VREvent_ScreenshotProgress_t_tBA265A96F0B071073DC29E3D48DD39EC477FCAF1  value)
	{
		___screenshotProgress_14 = value;
	}

	inline static int32_t get_offset_of_applicationLaunch_15() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___applicationLaunch_15)); }
	inline VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576  get_applicationLaunch_15() const { return ___applicationLaunch_15; }
	inline VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576 * get_address_of_applicationLaunch_15() { return &___applicationLaunch_15; }
	inline void set_applicationLaunch_15(VREvent_ApplicationLaunch_t_tBAE00189624244CF83023C3B0C32BDF53DDD2576  value)
	{
		___applicationLaunch_15 = value;
	}

	inline static int32_t get_offset_of_cameraSurface_16() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___cameraSurface_16)); }
	inline VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3  get_cameraSurface_16() const { return ___cameraSurface_16; }
	inline VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3 * get_address_of_cameraSurface_16() { return &___cameraSurface_16; }
	inline void set_cameraSurface_16(VREvent_EditingCameraSurface_t_t97C05C99CBE63F6D4F84838DBA7DF07985B9FAA3  value)
	{
		___cameraSurface_16 = value;
	}

	inline static int32_t get_offset_of_messageOverlay_17() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___messageOverlay_17)); }
	inline VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA  get_messageOverlay_17() const { return ___messageOverlay_17; }
	inline VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA * get_address_of_messageOverlay_17() { return &___messageOverlay_17; }
	inline void set_messageOverlay_17(VREvent_MessageOverlay_t_t72EF348B1F7B8E58BE8FAC5F72CA3B67E5A9B1FA  value)
	{
		___messageOverlay_17 = value;
	}

	inline static int32_t get_offset_of_property_18() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___property_18)); }
	inline VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C  get_property_18() const { return ___property_18; }
	inline VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C * get_address_of_property_18() { return &___property_18; }
	inline void set_property_18(VREvent_Property_t_t5AE1A5AB84E6D8A5A1423D57475BB357D299290C  value)
	{
		___property_18 = value;
	}

	inline static int32_t get_offset_of_hapticVibration_19() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___hapticVibration_19)); }
	inline VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60  get_hapticVibration_19() const { return ___hapticVibration_19; }
	inline VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60 * get_address_of_hapticVibration_19() { return &___hapticVibration_19; }
	inline void set_hapticVibration_19(VREvent_HapticVibration_t_tB3DC312FC633E7709F78D764025D9E716A8E7E60  value)
	{
		___hapticVibration_19 = value;
	}

	inline static int32_t get_offset_of_webConsole_20() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___webConsole_20)); }
	inline VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141  get_webConsole_20() const { return ___webConsole_20; }
	inline VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141 * get_address_of_webConsole_20() { return &___webConsole_20; }
	inline void set_webConsole_20(VREvent_WebConsole_t_tEFD55771E862953C17AC5AA5DAAEACA91090D141  value)
	{
		___webConsole_20 = value;
	}

	inline static int32_t get_offset_of_inputBinding_21() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___inputBinding_21)); }
	inline VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B  get_inputBinding_21() const { return ___inputBinding_21; }
	inline VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B * get_address_of_inputBinding_21() { return &___inputBinding_21; }
	inline void set_inputBinding_21(VREvent_InputBindingLoad_t_t5861864AA057EF70837B93AE0507E64363B7BA4B  value)
	{
		___inputBinding_21 = value;
	}

	inline static int32_t get_offset_of_spatialAnchor_22() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___spatialAnchor_22)); }
	inline VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB  get_spatialAnchor_22() const { return ___spatialAnchor_22; }
	inline VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB * get_address_of_spatialAnchor_22() { return &___spatialAnchor_22; }
	inline void set_spatialAnchor_22(VREvent_SpatialAnchor_t_t79AF5D2EFAB190C055F3531A927C091D619638DB  value)
	{
		___spatialAnchor_22 = value;
	}

	inline static int32_t get_offset_of_actionManifest_23() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___actionManifest_23)); }
	inline VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF  get_actionManifest_23() const { return ___actionManifest_23; }
	inline VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF * get_address_of_actionManifest_23() { return &___actionManifest_23; }
	inline void set_actionManifest_23(VREvent_InputActionManifestLoad_t_t652A5A9083E3B5073591824ADADCA105E5E868EF  value)
	{
		___actionManifest_23 = value;
	}

	inline static int32_t get_offset_of_progressUpdate_24() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___progressUpdate_24)); }
	inline VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC  get_progressUpdate_24() const { return ___progressUpdate_24; }
	inline VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC * get_address_of_progressUpdate_24() { return &___progressUpdate_24; }
	inline void set_progressUpdate_24(VREvent_ProgressUpdate_t_t81A3984553B24A5E435B7592C9F2EDBCB15F50CC  value)
	{
		___progressUpdate_24 = value;
	}

	inline static int32_t get_offset_of_showUi_25() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___showUi_25)); }
	inline VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D  get_showUi_25() const { return ___showUi_25; }
	inline VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D * get_address_of_showUi_25() { return &___showUi_25; }
	inline void set_showUi_25(VREvent_ShowUI_t_tACA063E45F4451EB8325722D96375B14AF9C947D  value)
	{
		___showUi_25 = value;
	}

	inline static int32_t get_offset_of_showDevTools_26() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___showDevTools_26)); }
	inline VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2  get_showDevTools_26() const { return ___showDevTools_26; }
	inline VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2 * get_address_of_showDevTools_26() { return &___showDevTools_26; }
	inline void set_showDevTools_26(VREvent_ShowDevTools_t_tE508BF08C017C7D44A818D88A817817559439DA2  value)
	{
		___showDevTools_26 = value;
	}

	inline static int32_t get_offset_of_hdcpError_27() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___hdcpError_27)); }
	inline VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA  get_hdcpError_27() const { return ___hdcpError_27; }
	inline VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA * get_address_of_hdcpError_27() { return &___hdcpError_27; }
	inline void set_hdcpError_27(VREvent_HDCPError_t_t9FFC816A909E44EA3DCDDD94D8FDA13B528EE5EA  value)
	{
		___hdcpError_27 = value;
	}

	inline static int32_t get_offset_of_keyboard_28() { return static_cast<int32_t>(offsetof(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5, ___keyboard_28)); }
	inline VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711  get_keyboard_28() const { return ___keyboard_28; }
	inline VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711 * get_address_of_keyboard_28() { return &___keyboard_28; }
	inline void set_keyboard_28(VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711  value)
	{
		___keyboard_28 = value;
	}
};


// Valve.VR.VROverlayView_t
struct VROverlayView_t_t1BD14381C87E554247522018618B32379F19D977 
{
public:
	// System.UInt64 Valve.VR.VROverlayView_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// Valve.VR.Texture_t Valve.VR.VROverlayView_t::texture
	Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5  ___texture_1;
	// Valve.VR.VRTextureBounds_t Valve.VR.VROverlayView_t::textureBounds
	VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745  ___textureBounds_2;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VROverlayView_t_t1BD14381C87E554247522018618B32379F19D977, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_texture_1() { return static_cast<int32_t>(offsetof(VROverlayView_t_t1BD14381C87E554247522018618B32379F19D977, ___texture_1)); }
	inline Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5  get_texture_1() const { return ___texture_1; }
	inline Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5 * get_address_of_texture_1() { return &___texture_1; }
	inline void set_texture_1(Texture_t_t8AA6A3A1B2BA9BC4D366991AAC8BD0C2788D37E5  value)
	{
		___texture_1 = value;
	}

	inline static int32_t get_offset_of_textureBounds_2() { return static_cast<int32_t>(offsetof(VROverlayView_t_t1BD14381C87E554247522018618B32379F19D977, ___textureBounds_2)); }
	inline VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745  get_textureBounds_2() const { return ___textureBounds_2; }
	inline VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745 * get_address_of_textureBounds_2() { return &___textureBounds_2; }
	inline void set_textureBounds_2(VRTextureBounds_t_t32D7B2506F3F1904926B3D447366878B50921745  value)
	{
		___textureBounds_2 = value;
	}
};


// Valve.VR.VREvent_t
struct VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 
{
public:
	// System.UInt32 Valve.VR.VREvent_t::eventType
	uint32_t ___eventType_0;
	// System.UInt32 Valve.VR.VREvent_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single Valve.VR.VREvent_t::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// Valve.VR.VREvent_Data_t Valve.VR.VREvent_t::data
	VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  ___data_3;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0, ___eventType_0)); }
	inline uint32_t get_eventType_0() const { return ___eventType_0; }
	inline uint32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(uint32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_eventAgeSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0, ___eventAgeSeconds_2)); }
	inline float get_eventAgeSeconds_2() const { return ___eventAgeSeconds_2; }
	inline float* get_address_of_eventAgeSeconds_2() { return &___eventAgeSeconds_2; }
	inline void set_eventAgeSeconds_2(float value)
	{
		___eventAgeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0, ___data_3)); }
	inline VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  get_data_3() const { return ___data_3; }
	inline VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  value)
	{
		___data_3 = value;
	}
};


// Valve.VR.VREvent_t_Packed
#pragma pack(push, tp, 4)
struct VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F 
{
public:
	// System.UInt32 Valve.VR.VREvent_t_Packed::eventType
	uint32_t ___eventType_0;
	// System.UInt32 Valve.VR.VREvent_t_Packed::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single Valve.VR.VREvent_t_Packed::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// Valve.VR.VREvent_Data_t Valve.VR.VREvent_t_Packed::data
	VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  ___data_3;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F, ___eventType_0)); }
	inline uint32_t get_eventType_0() const { return ___eventType_0; }
	inline uint32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(uint32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_eventAgeSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F, ___eventAgeSeconds_2)); }
	inline float get_eventAgeSeconds_2() const { return ___eventAgeSeconds_2; }
	inline float* get_address_of_eventAgeSeconds_2() { return &___eventAgeSeconds_2; }
	inline void set_eventAgeSeconds_2(float value)
	{
		___eventAgeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F, ___data_3)); }
	inline VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  get_data_3() const { return ___data_3; }
	inline VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  value)
	{
		___data_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};



// System.Void Valve.VR.RenderModel_TextureMap_t_Packed::.ctor(Valve.VR.RenderModel_TextureMap_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA (RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 * __this, RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  ___unpacked0, const RuntimeMethod* method);
// System.Void Valve.VR.RenderModel_TextureMap_t_Packed::Unpack(Valve.VR.RenderModel_TextureMap_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E (RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 * __this, RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * ___unpacked0, const RuntimeMethod* method);
// System.Void Valve.VR.RenderModel_t_Packed::.ctor(Valve.VR.RenderModel_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8 (RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 * __this, RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  ___unpacked0, const RuntimeMethod* method);
// System.Void Valve.VR.RenderModel_t_Packed::Unpack(Valve.VR.RenderModel_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036 (RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 * __this, RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * ___unpacked0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58 (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Valve.VR.VRControllerState_t_Packed::.ctor(Valve.VR.VRControllerState_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C (VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 * __this, VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  ___unpacked0, const RuntimeMethod* method);
// System.Void Valve.VR.VRControllerState_t_Packed::Unpack(Valve.VR.VRControllerState_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B (VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 * __this, VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * ___unpacked0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___trimChars0, const RuntimeMethod* method);
// System.String Valve.VR.VREvent_Keyboard_t::get_cNewInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB (VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.VREvent_t_Packed::.ctor(Valve.VR.VREvent_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA (VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F * __this, VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  ___unpacked0, const RuntimeMethod* method);
// System.Void Valve.VR.VREvent_t_Packed::Unpack(Valve.VR.VREvent_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57 (VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F * __this, VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * ___unpacked0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Valve.VR.RenderModel_TextureMap_t_Packed::.ctor(Valve.VR.RenderModel_TextureMap_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA (RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 * __this, RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  ___unpacked0, const RuntimeMethod* method)
{
	{
		// this.unWidth = unpacked.unWidth;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  L_0 = ___unpacked0;
		uint16_t L_1 = L_0.get_unWidth_0();
		__this->set_unWidth_0(L_1);
		// this.unHeight = unpacked.unHeight;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  L_2 = ___unpacked0;
		uint16_t L_3 = L_2.get_unHeight_1();
		__this->set_unHeight_1(L_3);
		// this.rubTextureMapData = unpacked.rubTextureMapData;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  L_4 = ___unpacked0;
		intptr_t L_5 = L_4.get_rubTextureMapData_2();
		__this->set_rubTextureMapData_2((intptr_t)L_5);
		// this.format = unpacked.format;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  L_6 = ___unpacked0;
		int32_t L_7 = L_6.get_format_3();
		__this->set_format_3(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA_AdjustorThunk (RuntimeObject * __this, RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF  ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 * _thisAdjusted = reinterpret_cast<RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 *>(__this + _offset);
	RenderModel_TextureMap_t_Packed__ctor_m1CE3C6A96A2702748472246CDD8921FDF236E7DA(_thisAdjusted, ___unpacked0, method);
}
// System.Void Valve.VR.RenderModel_TextureMap_t_Packed::Unpack(Valve.VR.RenderModel_TextureMap_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E (RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 * __this, RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * ___unpacked0, const RuntimeMethod* method)
{
	{
		// unpacked.unWidth = this.unWidth;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * L_0 = ___unpacked0;
		uint16_t L_1 = __this->get_unWidth_0();
		L_0->set_unWidth_0(L_1);
		// unpacked.unHeight = this.unHeight;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * L_2 = ___unpacked0;
		uint16_t L_3 = __this->get_unHeight_1();
		L_2->set_unHeight_1(L_3);
		// unpacked.rubTextureMapData = this.rubTextureMapData;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * L_4 = ___unpacked0;
		intptr_t L_5 = __this->get_rubTextureMapData_2();
		L_4->set_rubTextureMapData_2((intptr_t)L_5);
		// unpacked.format = this.format;
		RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * L_6 = ___unpacked0;
		int32_t L_7 = __this->get_format_3();
		L_6->set_format_3(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E_AdjustorThunk (RuntimeObject * __this, RenderModel_TextureMap_t_t4FEC7747451582B967FEDD93827902212BBC6EEF * ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 * _thisAdjusted = reinterpret_cast<RenderModel_TextureMap_t_Packed_t0F036FFCE9E71C4B9E74330A6FA9FB040DD2C6B5 *>(__this + _offset);
	RenderModel_TextureMap_t_Packed_Unpack_m4B5F873F19AEA7F3A603507A88223D52A87DD17E(_thisAdjusted, ___unpacked0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.RenderModel_t_Packed::.ctor(Valve.VR.RenderModel_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8 (RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 * __this, RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  ___unpacked0, const RuntimeMethod* method)
{
	{
		// this.rVertexData = unpacked.rVertexData;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  L_0 = ___unpacked0;
		intptr_t L_1 = L_0.get_rVertexData_0();
		__this->set_rVertexData_0((intptr_t)L_1);
		// this.unVertexCount = unpacked.unVertexCount;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  L_2 = ___unpacked0;
		uint32_t L_3 = L_2.get_unVertexCount_1();
		__this->set_unVertexCount_1(L_3);
		// this.rIndexData = unpacked.rIndexData;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  L_4 = ___unpacked0;
		intptr_t L_5 = L_4.get_rIndexData_2();
		__this->set_rIndexData_2((intptr_t)L_5);
		// this.unTriangleCount = unpacked.unTriangleCount;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  L_6 = ___unpacked0;
		uint32_t L_7 = L_6.get_unTriangleCount_3();
		__this->set_unTriangleCount_3(L_7);
		// this.diffuseTextureId = unpacked.diffuseTextureId;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  L_8 = ___unpacked0;
		int32_t L_9 = L_8.get_diffuseTextureId_4();
		__this->set_diffuseTextureId_4(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8_AdjustorThunk (RuntimeObject * __this, RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050  ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 * _thisAdjusted = reinterpret_cast<RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 *>(__this + _offset);
	RenderModel_t_Packed__ctor_m227BA66F8F13149023F594A2C96888C7F4F45FF8(_thisAdjusted, ___unpacked0, method);
}
// System.Void Valve.VR.RenderModel_t_Packed::Unpack(Valve.VR.RenderModel_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036 (RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 * __this, RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * ___unpacked0, const RuntimeMethod* method)
{
	{
		// unpacked.rVertexData = this.rVertexData;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * L_0 = ___unpacked0;
		intptr_t L_1 = __this->get_rVertexData_0();
		L_0->set_rVertexData_0((intptr_t)L_1);
		// unpacked.unVertexCount = this.unVertexCount;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * L_2 = ___unpacked0;
		uint32_t L_3 = __this->get_unVertexCount_1();
		L_2->set_unVertexCount_1(L_3);
		// unpacked.rIndexData = this.rIndexData;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * L_4 = ___unpacked0;
		intptr_t L_5 = __this->get_rIndexData_2();
		L_4->set_rIndexData_2((intptr_t)L_5);
		// unpacked.unTriangleCount = this.unTriangleCount;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * L_6 = ___unpacked0;
		uint32_t L_7 = __this->get_unTriangleCount_3();
		L_6->set_unTriangleCount_3(L_7);
		// unpacked.diffuseTextureId = this.diffuseTextureId;
		RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * L_8 = ___unpacked0;
		int32_t L_9 = __this->get_diffuseTextureId_4();
		L_8->set_diffuseTextureId_4(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036_AdjustorThunk (RuntimeObject * __this, RenderModel_t_t92EF5ACD98B24B51ED1EFFC279FB6A6F22F92050 * ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 * _thisAdjusted = reinterpret_cast<RenderModel_t_Packed_t2C8343D971DAB243DCFEE46BCBE4EE8BE79F31E2 *>(__this + _offset);
	RenderModel_t_Packed_Unpack_m7149BCD962D0271ED12FA6DF72906114153D5036(_thisAdjusted, ___unpacked0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.IntPtr Valve.VR.Utils::ToUtf8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_ToUtf8_mB7A3E057C4ED92BDDD22F53891CBCECF6EB4E9CA (String_t* ___managedString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_ToUtf8_mB7A3E057C4ED92BDDD22F53891CBCECF6EB4E9CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// if (managedString == null)
		String_t* L_0 = ___managedString0;
		V_3 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return IntPtr.Zero;
		V_4 = (intptr_t)(0);
		goto IL_007b;
	}

IL_0013:
	{
		// int size = System.Text.Encoding.UTF8.GetByteCount(managedString) + 1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_3 = ___managedString0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(9 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_2, L_3);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// if (buffer.Length < size) buffer = new byte[size];
		IL2CPP_RUNTIME_CLASS_INIT(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ((Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var))->get_buffer_0();
		NullCheck(L_5);
		int32_t L_6 = V_0;
		V_5 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// if (buffer.Length < size) buffer = new byte[size];
		int32_t L_8 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var);
		((Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var))->set_buffer_0(L_9);
	}

IL_003c:
	{
		// int written = System.Text.Encoding.UTF8.GetBytes(managedString, 0, managedString.Length, buffer, 0);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_11 = ___managedString0;
		String_t* L_12 = ___managedString0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ((Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var))->get_buffer_0();
		NullCheck(L_10);
		int32_t L_15 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(16 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, L_13, L_14, 0);
		V_1 = L_15;
		// buffer[written] = 0x00; // null terminate
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ((Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var))->get_buffer_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)0);
		// IntPtr nativeUtf8 = Marshal.AllocHGlobal(written+1);
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_19 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_19;
		// Marshal.Copy(buffer, 0, nativeUtf8, written+1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = ((Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var))->get_buffer_0();
		intptr_t L_21 = V_2;
		int32_t L_22 = V_1;
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_20, 0, (intptr_t)L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
		// return nativeUtf8;
		intptr_t L_23 = V_2;
		V_4 = (intptr_t)L_23;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		intptr_t L_24 = V_4;
		return (intptr_t)L_24;
	}
}
// System.Void Valve.VR.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m718053CFF69A0DBDC59BBA39543E48A586099C8F (Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Valve.VR.Utils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__cctor_m041ED7361FE730538999B026C01F8A3DB43C0459 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils__cctor_m041ED7361FE730538999B026C01F8A3DB43C0459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static byte[] buffer = new byte[1024];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		((Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD5883129F9D7B6AB51414D1490F63FD9A8787F01_il2cpp_TypeInfo_var))->set_buffer_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Valve.VR.VRControllerState_t_Packed::.ctor(Valve.VR.VRControllerState_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C (VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 * __this, VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  ___unpacked0, const RuntimeMethod* method)
{
	{
		// this.unPacketNum = unpacked.unPacketNum;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_0 = ___unpacked0;
		uint32_t L_1 = L_0.get_unPacketNum_0();
		__this->set_unPacketNum_0(L_1);
		// this.ulButtonPressed = unpacked.ulButtonPressed;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_2 = ___unpacked0;
		uint64_t L_3 = L_2.get_ulButtonPressed_1();
		__this->set_ulButtonPressed_1(L_3);
		// this.ulButtonTouched = unpacked.ulButtonTouched;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_4 = ___unpacked0;
		uint64_t L_5 = L_4.get_ulButtonTouched_2();
		__this->set_ulButtonTouched_2(L_5);
		// this.rAxis0 = unpacked.rAxis0;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_6 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_7 = L_6.get_rAxis0_3();
		__this->set_rAxis0_3(L_7);
		// this.rAxis1 = unpacked.rAxis1;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_8 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_9 = L_8.get_rAxis1_4();
		__this->set_rAxis1_4(L_9);
		// this.rAxis2 = unpacked.rAxis2;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_10 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_11 = L_10.get_rAxis2_5();
		__this->set_rAxis2_5(L_11);
		// this.rAxis3 = unpacked.rAxis3;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_12 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_13 = L_12.get_rAxis3_6();
		__this->set_rAxis3_6(L_13);
		// this.rAxis4 = unpacked.rAxis4;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  L_14 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_15 = L_14.get_rAxis4_7();
		__this->set_rAxis4_7(L_15);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C_AdjustorThunk (RuntimeObject * __this, VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801  ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 * _thisAdjusted = reinterpret_cast<VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 *>(__this + _offset);
	VRControllerState_t_Packed__ctor_m4C7E537EEFF2A693CFE45726EB51833373E5B22C(_thisAdjusted, ___unpacked0, method);
}
// System.Void Valve.VR.VRControllerState_t_Packed::Unpack(Valve.VR.VRControllerState_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B (VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 * __this, VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * ___unpacked0, const RuntimeMethod* method)
{
	{
		// unpacked.unPacketNum = this.unPacketNum;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_0 = ___unpacked0;
		uint32_t L_1 = __this->get_unPacketNum_0();
		L_0->set_unPacketNum_0(L_1);
		// unpacked.ulButtonPressed = this.ulButtonPressed;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_2 = ___unpacked0;
		uint64_t L_3 = __this->get_ulButtonPressed_1();
		L_2->set_ulButtonPressed_1(L_3);
		// unpacked.ulButtonTouched = this.ulButtonTouched;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_4 = ___unpacked0;
		uint64_t L_5 = __this->get_ulButtonTouched_2();
		L_4->set_ulButtonTouched_2(L_5);
		// unpacked.rAxis0 = this.rAxis0;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_6 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_7 = __this->get_rAxis0_3();
		L_6->set_rAxis0_3(L_7);
		// unpacked.rAxis1 = this.rAxis1;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_8 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_9 = __this->get_rAxis1_4();
		L_8->set_rAxis1_4(L_9);
		// unpacked.rAxis2 = this.rAxis2;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_10 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_11 = __this->get_rAxis2_5();
		L_10->set_rAxis2_5(L_11);
		// unpacked.rAxis3 = this.rAxis3;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_12 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_13 = __this->get_rAxis3_6();
		L_12->set_rAxis3_6(L_13);
		// unpacked.rAxis4 = this.rAxis4;
		VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * L_14 = ___unpacked0;
		VRControllerAxis_t_t7CB0AE285604611B6EB20D30E0B593B2E38F6DCB  L_15 = __this->get_rAxis4_7();
		L_14->set_rAxis4_7(L_15);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B_AdjustorThunk (RuntimeObject * __this, VRControllerState_t_t9E27875ADC2580AA931006B6BD0993E169A68801 * ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 * _thisAdjusted = reinterpret_cast<VRControllerState_t_Packed_tB1FCAEA2DA8BC1299291EF6996A014B958601209 *>(__this + _offset);
	VRControllerState_t_Packed_Unpack_m5E26211997CC7A8C836E3A014B728B3D8F4E050B(_thisAdjusted, ___unpacked0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Valve.VR.VREvent_Keyboard_t::get_cNewInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB (VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return new string(new char[] {
		//     (char)cNewInput0,
		//     (char)cNewInput1,
		//     (char)cNewInput2,
		//     (char)cNewInput3,
		//     (char)cNewInput4,
		//     (char)cNewInput5,
		//     (char)cNewInput6,
		//     (char)cNewInput7
		// }).TrimEnd('\0');
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)8);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = L_0;
		uint8_t L_2 = __this->get_cNewInput0_0();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_2);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = L_1;
		uint8_t L_4 = __this->get_cNewInput1_1();
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_4);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = L_3;
		uint8_t L_6 = __this->get_cNewInput2_2();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_6);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = L_5;
		uint8_t L_8 = __this->get_cNewInput3_3();
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)L_8);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = L_7;
		uint8_t L_10 = __this->get_cNewInput4_4();
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)L_10);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = L_9;
		uint8_t L_12 = __this->get_cNewInput5_5();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppChar)L_12);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = L_11;
		uint8_t L_14 = __this->get_cNewInput6_6();
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppChar)L_14);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_15 = L_13;
		uint8_t L_16 = __this->get_cNewInput7_7();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppChar)L_16);
		String_t* L_17 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_15, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_18 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_17);
		String_t* L_19 = String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		String_t* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C  String_t* VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711 * _thisAdjusted = reinterpret_cast<VREvent_Keyboard_t_tDF8C16DF241E87D4C7580318889779B29F7EC711 *>(__this + _offset);
	return VREvent_Keyboard_t_get_cNewInput_mF863D498E5911AE34B0950918606E3B02D8BE3FB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.VREvent_t_Packed::.ctor(Valve.VR.VREvent_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA (VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F * __this, VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  ___unpacked0, const RuntimeMethod* method)
{
	{
		// this.eventType = unpacked.eventType;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  L_0 = ___unpacked0;
		uint32_t L_1 = L_0.get_eventType_0();
		__this->set_eventType_0(L_1);
		// this.trackedDeviceIndex = unpacked.trackedDeviceIndex;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  L_2 = ___unpacked0;
		uint32_t L_3 = L_2.get_trackedDeviceIndex_1();
		__this->set_trackedDeviceIndex_1(L_3);
		// this.eventAgeSeconds = unpacked.eventAgeSeconds;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  L_4 = ___unpacked0;
		float L_5 = L_4.get_eventAgeSeconds_2();
		__this->set_eventAgeSeconds_2(L_5);
		// this.data = unpacked.data;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  L_6 = ___unpacked0;
		VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  L_7 = L_6.get_data_3();
		__this->set_data_3(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA_AdjustorThunk (RuntimeObject * __this, VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0  ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F * _thisAdjusted = reinterpret_cast<VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F *>(__this + _offset);
	VREvent_t_Packed__ctor_m576D1D8156D9FC63B6906D5C301DC8843ADBA8EA(_thisAdjusted, ___unpacked0, method);
}
// System.Void Valve.VR.VREvent_t_Packed::Unpack(Valve.VR.VREvent_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57 (VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F * __this, VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * ___unpacked0, const RuntimeMethod* method)
{
	{
		// unpacked.eventType = this.eventType;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * L_0 = ___unpacked0;
		uint32_t L_1 = __this->get_eventType_0();
		L_0->set_eventType_0(L_1);
		// unpacked.trackedDeviceIndex = this.trackedDeviceIndex;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * L_2 = ___unpacked0;
		uint32_t L_3 = __this->get_trackedDeviceIndex_1();
		L_2->set_trackedDeviceIndex_1(L_3);
		// unpacked.eventAgeSeconds = this.eventAgeSeconds;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * L_4 = ___unpacked0;
		float L_5 = __this->get_eventAgeSeconds_2();
		L_4->set_eventAgeSeconds_2(L_5);
		// unpacked.data = this.data;
		VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * L_6 = ___unpacked0;
		VREvent_Data_t_tEC6503AE88F0B909695C59B304D6B9B78AA08EE5  L_7 = __this->get_data_3();
		L_6->set_data_3(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57_AdjustorThunk (RuntimeObject * __this, VREvent_t_t4ADC418C98437E42A65BD0D4BF82E864A10D6AE0 * ___unpacked0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F * _thisAdjusted = reinterpret_cast<VREvent_t_Packed_t764509D9A4750CBB9F02DD0D592578165254C52F *>(__this + _offset);
	VREvent_t_Packed_Unpack_m8B24D002A51C983643B1E6862A6452D4ECF42C57(_thisAdjusted, ___unpacked0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
