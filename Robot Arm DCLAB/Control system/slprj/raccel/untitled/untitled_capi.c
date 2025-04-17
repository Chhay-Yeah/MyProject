        /*
        * untitled_capi.c
        *
                * Academic License - for use in teaching, academic research, and meeting
* course requirements at degree granting institutions only.  Not for
* government, commercial, or other organizational use.
        *
    * Code generation for model "untitled".
    *
    * Model version              : 1.0
    * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
        * C source code generated on : Tue Dec 17 15:46:21 2024
 * 
 * Target selection: raccel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
        */

            
    #include "rtw_capi.h"

    #ifdef HOST_CAPI_BUILD
    #include "untitled_capi_host.h"

    #define sizeof(...) ((size_t)(0xFFFF))
    #undef rt_offsetof
    #define rt_offsetof(s,el) ((uint16_T)(0xFFFF))

    #define TARGET_CONST
    #define TARGET_STRING(s) (s)

    
    #ifndef SS_UINT64
    #define SS_UINT64 19
    #endif
    #ifndef SS_INT64
    #define SS_INT64 20
    #endif


    #else /* HOST_CAPI_BUILD */

    #include "builtin_typeid_types.h"
    #include "untitled.h"
    #include "untitled_capi.h"

                #include "untitled_private.h"



    #ifdef LIGHT_WEIGHT_CAPI
    #define TARGET_CONST
    #define TARGET_STRING(s)               ((NULL))
    #else
    #define TARGET_CONST                   const
    #define TARGET_STRING(s)               (s)
    #endif

    #endif /* HOST_CAPI_BUILD */


        
















                    /* Block output signal information */
                    static const rtwCAPI_Signals rtBlockSignals[] = {

                        /* addrMapIndex, sysNum, blockPath,
                        * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
                        */






                                                        




                                                            



                                                                
                                                        
                                                        {0, 1, TARGET_STRING("untitled/MATLAB Function"),
                                                        TARGET_STRING(""), 0, 0,                                                         0, 0, 0},
                                                        






                        {
                            0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
                        }
                    };






                    static const rtwCAPI_BlockParameters rtBlockParameters[] = {

                        /* addrMapIndex, blockPath,
                        * paramName, dataTypeIndex, dimIndex, fixPtIdx
                        */

                                                        
                                                    
                                                    {1, TARGET_STRING("untitled/Constant"),
                                                    TARGET_STRING("Value"), 1, 0, 0},
                                                    
                        {
                            0, (NULL), (NULL), 0, 0, 0
                        }
                    };



                    static int_T rt_LoggedStateIdxList[] =                    {
                            -1
                    };

                    /* Root Inputs information */
                    static const rtwCAPI_Signals rtRootInputs[] = {

                        /* addrMapIndex, sysNum, blockPath,
                        * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
                        */




                        {
                            0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
                        }
                    };

                    /* Root Outputs information */
                    static const rtwCAPI_Signals rtRootOutputs[] = {

                        /* addrMapIndex, sysNum, blockPath,
                        * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
                        */


                        {
                            0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
                        }
                    };




                /* Tunable variable parameters */
                static const rtwCAPI_ModelParameters rtModelParameters[] = {

                    /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */

                    {0, (NULL), 0, 0, 0 }
                };





        








                    #ifndef HOST_CAPI_BUILD
                    /* Declare Data Addresses statically */
                    static void*  rtDataAddrMap[] = {
                            
                            &rtB.ph2smbamtf,                             /* 0: Signal */
                            
                            
                            &rtP.Constant_Value,                             /* 1: Block Parameter */
                            
                    };

                    /* Declare Data Run-Time Dimension Buffer Addresses statically */
                    static int32_T*  rtVarDimsAddrMap[] = {
                        (NULL)
                    };
                    #endif



        /* Data Type Map - use dataTypeMapIndex to access this structure */
        static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {

            /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
            * isComplex, isPointer, enumStorageType */

                    {"char", "char_T", 0, 0, sizeof(char_T), (uint8_T)SS_UINT8, 0, 0, 0},
                {"double", "real_T", 0, 0, sizeof(real_T), (uint8_T)SS_DOUBLE, 0, 0, 0}
        };

        #ifdef HOST_CAPI_BUILD
        #undef sizeof
        #endif

        /* Structure Element Map - use elemMapIndex to access this structure */
        static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {

            /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */

            {(NULL), 0, 0, 0, 0},
        };

        /* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
        static const rtwCAPI_DimensionMap rtDimensionMap[] = {

            /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */

                {rtwCAPI_SCALAR, 0, 2, 0}
        };

        /* Dimension Array- use dimArrayIndex to access elements of this array */
            static const uint_T rtDimensionArray[] = {
                    1,                    /* 0 */
                1                 /* 1 */
            };

            /* C-API stores floating point values in an array. The elements of this  *
            * are unique. This ensures that values which are shared across the model*
            * are stored in the most efficient way. These values are referenced by  *
            *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
            *           - rtwCAPI_FixPtMap.biasPtr,                                 *
            *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
            *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */


            static const real_T rtcapiStoredFloats[] = {
                    0.0,                1.0
            };
        /* Fixed Point Map */
        static const rtwCAPI_FixPtMap rtFixPtMap[] = {

            /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */

            {(NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, (boolean_T)0 },
        };

        /* Sample Time Map - use sTimeIndex to access elements of ths structure */
        static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {

            /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */

                {(const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1], (int8_T)0, (uint8_T)0}
        };












        static rtwCAPI_ModelMappingStaticInfo mmiStatic = {

            /* Signals:{signals, numSignals,
            *           rootInputs, numRootInputs,
            *           rootOutputs, numRootOutputs},
            * Params: {blockParameters, numBlockParameters,
            *          modelParameters, numModelParameters},
            * States: {states, numStates},
            * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
            *          elementMap, sampleTimeMap, dimensionArray},
            * TargetType: targetType
            */

                {rtBlockSignals, 1,
                rtRootInputs, 0,
                rtRootOutputs, 0},
                {rtBlockParameters, 1,
                rtModelParameters, 0},
                {(NULL), 0},
            {rtDataTypeMap, rtDimensionMap, rtFixPtMap,
            rtElementMap, rtSampleTimeMap, rtDimensionArray},
            "float",
            {3450500862U,
            1520343900U,
            2896703778U,
            2926649604U},
            (NULL), 0,
            (boolean_T)0
                ,rt_LoggedStateIdxList
        };

        /* Function to get C API Model Mapping Static Info */
        const rtwCAPI_ModelMappingStaticInfo*
        untitled_GetCAPIStaticMap(void) {
            return &mmiStatic;
        }



    






        
    #ifndef HOST_CAPI_BUILD
    void untitled_InitializeDataMapInfo(void) {





        /* Set C-API version */
        rtwCAPI_SetVersion((*rt_dataMapInfoPtr).mmi, 1);

        /* Cache static C-API data into the Real-time Model Data structure */
        rtwCAPI_SetStaticMap((*rt_dataMapInfoPtr).mmi, &mmiStatic);

        /* Cache static C-API logging data into the Real-time Model Data structure */
        rtwCAPI_SetLoggingStaticMap((*rt_dataMapInfoPtr).mmi, (NULL));

            /* Cache C-API Data Addresses into the Real-Time Model Data structure */
            rtwCAPI_SetDataAddressMap((*rt_dataMapInfoPtr).mmi, rtDataAddrMap);

            /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
            rtwCAPI_SetVarDimsAddressMap((*rt_dataMapInfoPtr).mmi, rtVarDimsAddrMap);


        /* Cache the instance C-API logging pointer */
            rtwCAPI_SetInstanceLoggingInfo((*rt_dataMapInfoPtr).mmi, (NULL));

        /* Set reference to submodels */
            rtwCAPI_SetChildMMIArray((*rt_dataMapInfoPtr).mmi, (NULL));
            rtwCAPI_SetChildMMIArrayLen((*rt_dataMapInfoPtr).mmi, 0);



    }
    #else /* HOST_CAPI_BUILD */

    #ifdef __cplusplus
    extern "C" {
        #endif

        void untitled_host_InitializeDataMapInfo(untitled_host_DataMapInfo_T *dataMap, const char *path) {

            /* Set C-API version */
            rtwCAPI_SetVersion(dataMap->mmi, 1);

            /* Cache static C-API data into the Real-time Model Data structure */
            rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

            /* host data address map is NULL */
            rtwCAPI_SetDataAddressMap(dataMap->mmi, (NULL));

            /* host vardims address map is NULL */
            rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, (NULL));

            /* Set Instance specific path */
            rtwCAPI_SetPath(dataMap->mmi, path);

            rtwCAPI_SetFullPath(dataMap->mmi, (NULL));

            /* Set reference to submodels */

                rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
                rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);

        }

        #ifdef __cplusplus
    }
    #endif

    #endif /* HOST_CAPI_BUILD */

        


        /* EOF: untitled_capi.c */
