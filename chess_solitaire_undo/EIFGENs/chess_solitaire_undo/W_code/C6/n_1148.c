/*
 * Code for class N
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1148_10155(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1148_10156(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1148_10157(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1148(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {N}.make */
void F1148_10155 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1147, Current, 0, 0, 16556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1147, Current, 16556);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7765, 0xF80000E8, 0); /* id */
	tr1 = RTMS_EX_H("N",1,78);
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

/* {N}.moves */
EIF_TYPED_VALUE F1148_10156 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 1147, Current, 1, 2, 16557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1147, Current, 16557);
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
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
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
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
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
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 2L));
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
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 2L));
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
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L));
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
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
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
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L));
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
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(10);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
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

/* {N}.blocked_out */
EIF_TYPED_VALUE F1148_10157 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "blocked_out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
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
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1147, Current, 7, 4, 16558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1147, Current, 16558);
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
	if ((EIF_BOOLEAN) (arg3 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = eif_abs_int32 (arg3);
		ui4_1 = ti4_1;
		tr1 = RTLN(eif_new_type(221, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4487, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc4))(loc4)).it_b);
			if (tb1) break;
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc4))(loc4)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - ti4_1);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
			ur1 = RTCCL(tr1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc4))(loc4)).it_i4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ti4_1);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc4))(loc4);
		}
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			ti4_1 = eif_abs_int32 (arg3);
			ui4_1 = ti4_1;
			tr1 = RTLN(eif_new_type(221, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4487, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc5))(loc5)).it_b);
				if (tb2) break;
				RTHOOK(10);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc5))(loc5)).it_i4);
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 + ti4_1);
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
				ur1 = RTCCL(tr1);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
				RTHOOK(11);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc5))(loc5)).it_i4);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc5))(loc5);
			}
		}
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN) (arg4 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		ti4_1 = eif_abs_int32 (arg4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tr1 = RTLN(eif_new_type(221, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4487, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc6))(loc6)).it_b);
			if (tb3) break;
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc6))(loc6)).it_i4);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - ti4_1);
			ur1 = RTCCL(tr1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc6))(loc6);
		}
	} else {
		RTHOOK(17);
		if ((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(18);
			ti4_1 = eif_abs_int32 (arg4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tr1 = RTLN(eif_new_type(221, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4487, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc7))(loc7)).it_b);
				if (tb4) break;
				RTHOOK(19);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc7))(loc7)).it_i4);
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 + ti4_1);
				ur1 = RTCCL(tr1);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2755, "force", loc1))(loc1, ur1x, ui4_1x);
				RTHOOK(20);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc7))(loc7);
			}
		}
	}
	RTHOOK(21);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1148 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
