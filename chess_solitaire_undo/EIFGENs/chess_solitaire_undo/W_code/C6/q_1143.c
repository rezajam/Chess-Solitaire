/*
 * Code for class Q
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1143_10140(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1143_10141(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1143_10142(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1143(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {Q}.make */
void F1143_10140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1142, Current, 0, 0, 16541);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1142, Current, 16541);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7765, 0xF80000E8, 0); /* id */
	tr1 = RTMS_EX_H("Q",1,81);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7765, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {Q}.moves */
EIF_TYPED_VALUE F1143_10141 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "moves";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1142, Current, 1, 2, 16542);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1142, Current, 16542);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000154, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(7);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(10);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(11);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(12);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 2L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(14);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(15);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 2L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(16);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 2L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(17);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(18);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(19);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(20);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(21);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 3L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(22);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(23);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 3L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(24);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 3L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(25);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(26);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {Q}.blocked_out */
EIF_TYPED_VALUE F1143_10142 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "blocked_out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1142, Current, 3, 4, 16543);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1142, Current, 16543);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000154, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) arg4;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2--;
		} else {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L)))) {
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) {
					RTHOOK(11);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
				} else {
					RTHOOK(12);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L)))) {
						RTHOOK(13);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3--;
					} else {
						RTHOOK(14);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L)))) {
							RTHOOK(15);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2--;
							RTHOOK(16);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3--;
						} else {
							RTHOOK(17);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) {
								RTHOOK(18);
								RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
								loc2++;
								RTHOOK(19);
								RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
								loc3++;
							} else {
								RTHOOK(20);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) {
									RTHOOK(21);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									loc2--;
									RTHOOK(22);
									RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
									loc3++;
								} else {
									RTHOOK(23);
									if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L)))) {
										RTHOOK(24);
										RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
										loc2++;
										RTHOOK(25);
										RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
										loc3--;
									}
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(26);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(27);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + loc2);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + loc3);
			ur1 = RTCCL(tr1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
		}
	}
	RTHOOK(28);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1143 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
