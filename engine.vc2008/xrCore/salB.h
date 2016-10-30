#ifndef _In_
#define _In_
#endif

#ifndef _In_reads_
#define _In_reads_(x)
#endif

#ifndef _In_reads_bytes_
#define _In_reads_bytes_(x)
#endif

#ifndef _In_reads_opt_
#define _In_reads_opt_(x)
#endif

#ifndef _In_reads_bytes_opt_
#define _In_reads_bytes_opt_(x)
#endif

#ifndef _Out_
#define _Out_
#endif

#ifndef _Outptr_
#define _Outptr_ 
#endif

#ifndef _Out_writes_
#define _Out_writes_(x)
#endif

#ifndef _Out_writes_bytes_
#define _Out_writes_bytes_(x)
#endif

#ifndef _Out_writes_opt_
#define _Out_writes_opt_(x)
#endif

#ifndef _Out_writes_bytes_opt_
#define _Out_writes_bytes_opt_(x)
#endif

#ifndef _Field_size_opt_
#define _Field_size_opt_(x)
#endif

#ifndef _Field_size_
#define _Field_size_(x)
#endif

#ifndef _Outptr_result_bytebuffer_
#define _Outptr_result_bytebuffer_(x)
#endif

#ifndef _Inout_updates_bytes_
#define _Inout_updates_bytes_(x) 
#endif

#ifndef _Inout_opt_bytecount_
#define _Inout_opt_bytecount_(x)
#endif


#ifdef __GNUC__
typedef unsigned char UINT8;
#endif
#ifndef _MSC_VER
#define __out
#define __in
#define __inout
#define __in_opt
#define __inout_opt
#define __out_opt
#define __out_bcount_opt(x)
#define __in_bcount_opt(x)
#define __in_ecount(x)
#define __in_ecount_opt(x)
#define __out_ecount(x)
#define __out_ecount_opt(x)
#define __uuidof(type) IID_##type
#endif
#if _MSC_VER < 1400
#define __out
#define __in
#define __inout
#define __in_opt
#define __inout_opt
#define __out_opt
#define __out_bcount_opt(x)
#define __in_bcount_opt(x)
#define __in_ecount(x)
#define __in_ecount_opt(x)
#define __out_ecount(x)
#define __out_ecount_opt(x)
#ifdef _MSC_VER
#define WINAPI_INLINE __forceinline
#else
#define WINAPI_INLINE inline
#endif
#endif