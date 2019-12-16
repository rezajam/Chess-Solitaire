/*
 * Code for class PLUS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1150_10161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_10162(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1150_10163(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1150(void);

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

/* {PLUS}.make */
void F1150_10161 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1149, Current, 0, 0, 16562);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 16562);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7765, 0xF80000E8, 0); /* id */
	tr1 = RTMS_EX_H("+",1,43);
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

/* {PLUS}.moves */
EIF_TYPED_VALUE F1150_10162 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "moves";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 2, 16563);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 16563);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg2
#undef arg1
}

/* {PLUS}.blocked_out */
EIF_TYPED_VALUE F1150_10163 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "blocked_out";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 4, 16564);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 16564);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000154, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,340,0xFF01,0xFFF9,2,186,221,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1150 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
