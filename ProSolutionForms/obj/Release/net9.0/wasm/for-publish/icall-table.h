#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
216,
229,
230,
231,
232,
233,
234,
235,
236,
237,
240,
241,
242,
410,
411,
412,
435,
436,
437,
454,
455,
456,
556,
557,
558,
561,
598,
599,
601,
603,
605,
607,
612,
620,
621,
622,
623,
624,
625,
626,
627,
708,
717,
718,
787,
793,
796,
798,
803,
804,
806,
807,
811,
812,
814,
815,
818,
819,
820,
823,
825,
828,
830,
832,
841,
906,
908,
910,
920,
921,
922,
924,
930,
931,
932,
933,
934,
942,
943,
944,
948,
949,
951,
955,
956,
957,
1249,
1412,
1413,
7730,
7731,
7733,
7734,
7735,
7736,
7737,
7739,
7740,
7741,
7742,
7759,
7761,
7766,
7768,
7770,
7772,
7823,
7824,
7826,
7827,
7828,
7829,
7830,
7832,
7834,
8834,
8838,
8840,
8841,
8842,
8843,
9259,
9260,
9261,
9262,
9280,
9281,
9282,
9327,
9393,
9396,
9404,
9405,
9406,
9407,
9408,
9730,
9731,
9735,
9736,
9765,
9799,
9806,
9813,
9824,
9828,
9851,
9929,
9931,
9941,
9943,
9944,
9945,
9952,
9967,
9987,
9988,
9996,
9998,
10005,
10006,
10009,
10011,
10016,
10022,
10023,
10030,
10032,
10044,
10047,
10048,
10049,
10060,
10070,
10076,
10077,
10078,
10080,
10081,
10098,
10100,
10115,
10135,
10136,
10163,
10193,
10194,
10681,
10765,
10766,
10951,
10952,
10957,
10958,
10959,
10964,
11016,
11477,
11478,
11816,
11821,
11831,
12681,
12702,
12704,
12706,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 216,
ves_icall_System_Array_InternalCreate,
// token 229,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 230,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 231,
ves_icall_System_Array_CanChangePrimitive,
// token 232,
ves_icall_System_Array_FastCopy,
// token 233,
ves_icall_System_Array_GetLengthInternal_raw,
// token 234,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 235,
ves_icall_System_Array_GetGenericValue_icall,
// token 236,
ves_icall_System_Array_GetValueImpl_raw,
// token 237,
ves_icall_System_Array_SetGenericValue_icall,
// token 240,
ves_icall_System_Array_SetValueImpl_raw,
// token 241,
ves_icall_System_Array_InitializeInternal_raw,
// token 242,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 410,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 411,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 412,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 435,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 436,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 437,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 454,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 455,
ves_icall_System_Enum_InternalGetCorElementType,
// token 456,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 556,
ves_icall_System_Environment_get_ProcessorCount,
// token 557,
ves_icall_System_Environment_get_TickCount,
// token 558,
ves_icall_System_Environment_get_TickCount64,
// token 561,
ves_icall_System_Environment_FailFast_raw,
// token 598,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 599,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 601,
ves_icall_System_GC_SuppressFinalize_raw,
// token 603,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 605,
ves_icall_System_GC_GetGCMemoryInfo,
// token 607,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 612,
ves_icall_System_Object_MemberwiseClone_raw,
// token 620,
ves_icall_System_Math_Ceiling,
// token 621,
ves_icall_System_Math_Cos,
// token 622,
ves_icall_System_Math_Floor,
// token 623,
ves_icall_System_Math_Pow,
// token 624,
ves_icall_System_Math_Sin,
// token 625,
ves_icall_System_Math_Sqrt,
// token 626,
ves_icall_System_Math_Tan,
// token 627,
ves_icall_System_Math_ModF,
// token 708,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 717,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 718,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 787,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 793,
ves_icall_RuntimeType_make_array_type_raw,
// token 796,
ves_icall_RuntimeType_make_byref_type_raw,
// token 798,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 803,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 804,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 806,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 807,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 811,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 812,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 814,
ves_icall_System_RuntimeType_getFullName_raw,
// token 815,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 818,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 819,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 820,
ves_icall_RuntimeType_GetFields_native_raw,
// token 823,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 825,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 828,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 830,
ves_icall_RuntimeType_GetName_raw,
// token 832,
ves_icall_RuntimeType_GetNamespace_raw,
// token 841,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 906,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 908,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 910,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 920,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 921,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 922,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 924,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 930,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 932,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 933,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 934,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 942,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 943,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 944,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 948,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 949,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 951,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 955,
ves_icall_System_String_FastAllocateString_raw,
// token 956,
ves_icall_System_String_InternalIsInterned_raw,
// token 957,
ves_icall_System_String_InternalIntern_raw,
// token 1249,
ves_icall_System_Type_internal_from_handle_raw,
// token 1412,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1413,
ves_icall_System_ValueType_Equals_raw,
// token 7730,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7731,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7733,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7734,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7735,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7736,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7737,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7739,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7740,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7741,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7742,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7759,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7761,
mono_monitor_exit_icall_raw,
// token 7766,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7768,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7770,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7772,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7823,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7824,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7826,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7827,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7828,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7829,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7830,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7832,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7834,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8834,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8838,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8840,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8841,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8842,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8843,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9259,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9260,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9261,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9262,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9280,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9281,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9282,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9327,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9393,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9396,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9404,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9405,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9406,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9407,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9408,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9730,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9731,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9735,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9736,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9765,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9799,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9806,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9813,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9824,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9828,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9851,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9929,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9931,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9941,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9943,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9944,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9945,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9952,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9967,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9987,
ves_icall_reflection_get_token_raw,
// token 9988,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9996,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9998,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10005,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10006,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10009,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10011,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10016,
ves_icall_reflection_get_token_raw,
// token 10022,
ves_icall_get_method_info_raw,
// token 10023,
ves_icall_get_method_attributes,
// token 10030,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10032,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10044,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10047,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10048,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10049,
ves_icall_reflection_get_token_raw,
// token 10060,
ves_icall_InternalInvoke_raw,
// token 10070,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10076,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10077,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10078,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10080,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10081,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10098,
ves_icall_InvokeClassConstructor_raw,
// token 10100,
ves_icall_InternalInvoke_raw,
// token 10115,
ves_icall_reflection_get_token_raw,
// token 10135,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10136,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10163,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10193,
ves_icall_reflection_get_token_raw,
// token 10194,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10681,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10765,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10766,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10951,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10952,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10957,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10958,
ves_icall_ModuleBuilder_getToken_raw,
// token 10959,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10964,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11016,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11477,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11478,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11816,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11821,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11831,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12681,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12702,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12704,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12706,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
