/*
 * Code for class KL_IMPORTED_SPECIAL_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1071_9377(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1071_9378(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1071_9379(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1071_9380(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1071_9381(EIF_REFERENCE);
extern void EIF_Minit1071(void);

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

/* {KL_IMPORTED_SPECIAL_ROUTINES}.special_any_ */
RTOID (F1071_9377)
EIF_TYPED_VALUE F1071_9377 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "special_any_";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1071_9377);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1070, Current, 0, 0, 15634);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1070, Current, 15634);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000637, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1591,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("special_any_routines_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {KL_IMPORTED_SPECIAL_ROUTINES}.special_boolean_ */
RTOID (F1071_9378)
EIF_TYPED_VALUE F1071_9378 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "special_boolean_";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1071_9378);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1070, Current, 0, 0, 15635);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1070, Current, 15635);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800065D, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1629,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("special_boolean_routines_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {KL_IMPORTED_SPECIAL_ROUTINES}.special_character_ */
RTOID (F1071_9379)
EIF_TYPED_VALUE F1071_9379 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "special_character_";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1071_9379);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1070, Current, 0, 0, 15636);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1070, Current, 15636);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800065E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1630,194,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("special_character_routines_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {KL_IMPORTED_SPECIAL_ROUTINES}.special_integer_ */
RTOID (F1071_9380)
EIF_TYPED_VALUE F1071_9380 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "special_integer_";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1071_9380);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1070, Current, 0, 0, 15637);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1070, Current, 15637);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000662, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1634,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("special_integer_routines_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {KL_IMPORTED_SPECIAL_ROUTINES}.special_string_ */
RTOID (F1071_9381)
EIF_TYPED_VALUE F1071_9381 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "special_string_";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1071_9381);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1070, Current, 0, 0, 15638);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1070, Current, 15638);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000637, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1591,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("special_string_routines_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit1071 (void)
{
	GTCX
	RTOTS (9377,F1071_9377)
	RTOTS (9378,F1071_9378)
	RTOTS (9379,F1071_9379)
	RTOTS (9380,F1071_9380)
	RTOTS (9381,F1071_9381)
}


#ifdef __cplusplus
}
#endif
