# 40 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"










# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/mach.h"







# 34 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h"
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 40 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdarg.h"
typedef __gnuc_va_list va_list;
# 63 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"

# 45 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/inc/hw_types.h"






typedef void (* FPTR_VOID_VOID_T) (void);
typedef void (* FPTR_VOID_UINT8_T) (uint8_t);
















typedef unsigned int __UINT32;
# 69 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"

# 57 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/debug.h"
extern void __error__(char *pcFilename, uint32_t ui32Line);
# 106 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/cpu.h"
extern uint32_t NOROM_CPUcpsid(void);













extern uint32_t NOROM_CPUprimask(void);











extern uint32_t NOROM_CPUcpsie(void);
# 173 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/cpu.h"
static inline void __attribute__((always_inline))
CPUwfi(void)
{



    __asm("    wfi\n");
}
# 222 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/cpu.h"
static inline void __attribute__((always_inline))
CPUwfe(void)
{



    __asm("    wfe\n");
}
# 271 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/cpu.h"
static inline void __attribute__((always_inline))
CPUsev(void)
{



    __asm("    sev\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattributes"
# 325 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/cpu.h"
static inline void __attribute__ ((naked))
CPUbasepriSet(uint32_t ui32NewBasepri)
{



   __asm("    msr     BASEPRI, r0\n"
         "    bx      lr\n");
}
#pragma GCC diagnostic pop












extern uint32_t NOROM_CPUbasepriGet(void);
















extern void NOROM_CPUdelay(uint32_t ui32Count);
# 382 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/cpu.h"
static inline void
CPU_WriteBufferDisable( void )
{
    (*((volatile unsigned long *)(((unsigned long)(0xE000E000 + 0x00000008) & 0xF0000000) | 0x02000000 | (((unsigned long)(0xE000E000 + 0x00000008) & 0x000FFFFF) << 5) | ((1) << 2)))) = 1;
}













static inline void
CPU_WriteBufferEnable( void )
{
    (*((volatile unsigned long *)(((unsigned long)(0xE000E000 + 0x00000008) & 0xF0000000) | 0x02000000 | (((unsigned long)(0xE000E000 + 0x00000008) & 0x000FFFFF) << 5) | ((1) << 2)))) = 0;
}
# 66 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/rom.h"
typedef uint32_t (* FPTR_CRC32_T) ( uint8_t* ,
                                                     uint32_t ,
                                                     uint32_t );

typedef uint32_t (* FPTR_GETFLSIZE_T) ( void );

typedef uint32_t (* FPTR_GETCHIPID_T) ( void );

typedef uint32_t (* FPTR_RESERVED1_T) ( uint32_t );

typedef uint32_t (* FPTR_RESERVED2_T) ( void );

typedef uint32_t (* FPTR_RESERVED3_T) ( uint8_t* ,
                                                     uint32_t ,
                                                     uint32_t );
typedef void (* FPTR_RESETDEV_T) ( void );

typedef uint32_t (* FPTR_FLETCHER32_T) ( uint16_t* ,
                                                     uint16_t ,
                                                     uint16_t );

typedef uint32_t (* FPTR_MINVAL_T) ( uint32_t* ,
                                                     uint32_t );

typedef uint32_t (* FPTR_MAXVAL_T) ( uint32_t* ,
                                                     uint32_t );

typedef uint32_t (* FPTR_MEANVAL_T) ( uint32_t* ,
                                                     uint32_t );

typedef uint32_t (* FPTR_STDDVAL_T) ( uint32_t* ,
                                                     uint32_t );

typedef void (* FPTR_HFSOURCESAFESWITCH_T) ( void );

typedef void (* FPTR_RESERVED4_T) ( uint32_t );

typedef void (* FPTR_RESERVED5_T) ( uint32_t );

typedef void (* FPTR_COMPAIN_T) ( uint8_t );

typedef void (* FPTR_COMPAREF_T) ( uint8_t );

typedef void (* FPTR_ADCCOMPBIN_T) ( uint8_t );

typedef void (* FPTR_COMPBREF_T) ( uint8_t );

extern uint32_t MemBusWrkAroundHapiProgramFlash(uint8_t *pui8DataBuffer,
                                                uint32_t ui32Address,
                                                uint32_t ui32Count);

extern uint32_t MemBusWrkAroundHapiEraseSector(uint32_t ui32Address);




typedef struct
{
    FPTR_CRC32_T Crc32;
    FPTR_GETFLSIZE_T FlashGetSize;
    FPTR_GETCHIPID_T GetChipId;
    FPTR_RESERVED1_T ReservedLocation1;
    FPTR_RESERVED2_T ReservedLocation2;
    FPTR_RESERVED3_T ReservedLocation3;
    FPTR_RESETDEV_T ResetDevice;
    FPTR_FLETCHER32_T Fletcher32;
    FPTR_MINVAL_T MinValue;
    FPTR_MAXVAL_T MaxValue;
    FPTR_MEANVAL_T MeanValue;
    FPTR_STDDVAL_T StandDeviationValue;
    FPTR_RESERVED4_T ReservedLocation4;
    FPTR_RESERVED5_T ReservedLocation5;
    FPTR_HFSOURCESAFESWITCH_T HFSourceSafeSwitch;
    FPTR_COMPAIN_T SelectCompAInput;
    FPTR_COMPAREF_T SelectCompARef;
    FPTR_ADCCOMPBIN_T SelectADCCompBInput;
    FPTR_COMPBREF_T SelectCompBRef;
} HARD_API_T;









extern void SafeHapiVoid( FPTR_VOID_VOID_T fPtr );
extern void SafeHapiAuxAdiSelect( FPTR_VOID_UINT8_T fPtr, uint8_t ut8Signal );
# 136 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
static inline 
# 136 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
               _Bool
IntMasterEnable(void)
{



    return(NOROM_CPUcpsie());
}














static inline 
# 158 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
               _Bool
IntMasterDisable(void)
{



    return(NOROM_CPUcpsid());
}
# 192 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern void NOROM_IntRegister(uint32_t ui32Interrupt, void (*pfnHandler)(void));
# 210 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern void NOROM_IntUnregister(uint32_t ui32Interrupt);
# 228 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern void NOROM_IntPriorityGroupingSet(uint32_t ui32Bits);











extern uint32_t NOROM_IntPriorityGroupingGet(void);
# 274 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern void NOROM_IntPrioritySet(uint32_t ui32Interrupt, uint8_t ui8Priority);
# 296 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern int32_t NOROM_IntPriorityGet(uint32_t ui32Interrupt);














extern void NOROM_IntEnable(uint32_t ui32Interrupt);














extern void NOROM_IntDisable(uint32_t ui32Interrupt);
# 345 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern void NOROM_IntPendSet(uint32_t ui32Interrupt);
# 366 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
extern 
# 366 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
      _Bool 
# 366 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
           NOROM_IntPendGet(uint32_t ui32Interrupt);















extern void NOROM_IntPendClear(uint32_t ui32Interrupt);
# 407 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
static inline void
IntPriorityMaskSet(uint32_t ui32PriorityMask)
{
    CPUbasepriSet(ui32PriorityMask);
}
# 433 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/interrupt.h"
static inline uint32_t
IntPriorityMaskGet(void)
{
    return(NOROM_CPUbasepriGet());
}
# 267 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMInfClockConfigureSet(uint32_t ui32ClkDiv,
                                     uint32_t ui32PowerMode);
# 291 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern uint32_t NOROM_PRCMInfClockConfigureGet(uint32_t ui32PowerMode);













static inline void
PRCMMcuPowerOff(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40082000 + 0x0000000C) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40082000 + 0x0000000C) & 0x000FFFFF) << 5) | ((2) << 2)))) = 1;
}














static inline void
PRCMMcuPowerOffCancel(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40082000 + 0x0000000C) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40082000 + 0x0000000C) & 0x000FFFFF) << 5) | ((2) << 2)))) = 0;
}
# 359 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
static inline void
PRCMMcuUldoConfigure(uint32_t ui32Enable)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40082000 + 0x0000000C) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40082000 + 0x0000000C) & 0x000FFFFF) << 5) | ((0) << 2)))) = ui32Enable;
}
# 397 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
static inline void
PRCMGPTimerClockDivisionSet( uint32_t clkDiv )
{
    ;

    (*((volatile unsigned long *)(0x40082000 + 0x000000CC))) = clkDiv;
}
# 425 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
static inline uint32_t
PRCMGPTimerClockDivisionGet( void )
{
    return ( (*((volatile unsigned long *)(0x40082000 + 0x000000CC))));
}











static inline void
PRCMAudioClockEnable(void)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40082000 + 0x000000D0) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40082000 + 0x000000D0) & 0x000FFFFF) << 5) | ((0) << 2)))) = 1;
}










static inline void
PRCMAudioClockDisable(void)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40082000 + 0x000000D0) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40082000 + 0x000000D0) & 0x000FFFFF) << 5) | ((0) << 2)))) = 0;
}
# 495 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMAudioClockConfigSet(uint32_t ui32ClkConfig,
                                    uint32_t ui32SampleRate);
# 523 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMAudioClockConfigSetOverride(uint32_t ui32ClkConfig, uint32_t ui32MstDiv,
                        uint32_t ui32BitDiv, uint32_t ui32WordDiv);
# 553 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
static inline void
PRCMLoadSet(void)
{



    (*((volatile unsigned long *)(0x60082000 + 0x00000028))) = 0x00000001;
}












static inline 
# 573 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
               _Bool
PRCMLoadGet(void)
{



    return (((*((volatile unsigned long *)(0x40082000 + 0x00000028))) & 0x00000002) ?
           1 
# 580 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                : 
# 580 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                  0
# 580 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                       );
}
# 603 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
static inline void
PRCMDomainEnable(uint32_t ui32Domains)
{



   
                                            ;




    if(ui32Domains & 0x00000001)
    {
        (*((volatile unsigned long *)(0x40082000 + 0x0000002C))) = 0x00000001;
    }
    if(ui32Domains & 0x00000010)
    {
        (*((volatile unsigned long *)(0x40082000 + 0x00000030))) = 0x00000003;
    }
}
# 646 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
static inline void
PRCMDomainDisable(uint32_t ui32Domains)
{



   
                                            ;




    if(ui32Domains & 0x00000001)
    {
        (*((volatile unsigned long *)(0x40082000 + 0x0000002C))) = 0x0;
    }
    if(ui32Domains & 0x00000010)
    {
        (*((volatile unsigned long *)(0x40082000 + 0x00000030))) = 0x0;
    }
}
# 718 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPowerDomainOn(uint32_t ui32Domains);
# 743 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPowerDomainOff(uint32_t ui32Domains);












static inline void
PRCMRfPowerDownWhenIdle(void)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40082000 + 0x00000130) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40082000 + 0x00000130) & 0x000FFFFF) << 5) | ((0) << 2)))) = 0;
}
# 806 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPeripheralRunEnable(uint32_t ui32Peripheral);
# 848 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPeripheralRunDisable(uint32_t ui32Peripheral);
# 888 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPeripheralSleepEnable(uint32_t ui32Peripheral);
# 929 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPeripheralSleepDisable(uint32_t ui32Peripheral);
# 969 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPeripheralDeepSleepEnable(uint32_t ui32Peripheral);
# 1012 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern void NOROM_PRCMPeripheralDeepSleepDisable(uint32_t ui32Peripheral);
# 1033 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
extern uint32_t NOROM_PRCMPowerDomainStatus(uint32_t ui32Domains);














static inline 
# 1048 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
               _Bool
PRCMRfReady(void)
{



    return (((*((volatile unsigned long *)(0x40082000 + 0x0000019C))) &
             0x00000001) ? 
# 1055 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                                  1 
# 1055 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                                       : 
# 1055 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                                         0
# 1055 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/prcm.h"
                                              );
}
















static inline void
PRCMSleep(void)
{



    CPUwfi();
}















extern void NOROM_PRCMDeepSleep(void);










static inline void
PRCMCacheRetentionEnable( void )
{
   (*((volatile unsigned long *)(0x40082000 + 0x00000224))) |= 0x00000003;
}










static inline void
PRCMCacheRetentionDisable( void )
{
   (*((volatile unsigned long *)(0x40082000 + 0x00000224))) &= ~0x00000003;
}
# 163 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline uint32_t
GPIO_readDio( uint32_t dioNumber )
{



    ;




    return (( (*((volatile unsigned long *)(0x40022000 + 0x000000C0))) >> dioNumber ) & 1 );
}
# 197 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline uint32_t
GPIO_readMultiDio( uint32_t dioMask )
{



    ;




    return ( (*((volatile unsigned long *)(0x40022000 + 0x000000C0))) & dioMask );
}















static inline void
GPIO_writeDio( uint32_t dioNumber, uint32_t value )
{



    ;
    ;




    (*((volatile unsigned char *)(0x40022000 + dioNumber))) = value;
}
# 261 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline void
GPIO_writeMultiDio( uint32_t dioMask, uint32_t bitVectoredValue )
{



    ;

    (*((volatile unsigned long *)(0x40022000 + 0x00000080))) =
        ( (*((volatile unsigned long *)(0x40022000 + 0x00000080))) & ~dioMask ) |
        ( bitVectoredValue & dioMask );
}












static inline void
GPIO_setDio( uint32_t dioNumber )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x00000090))) = ( 1 << dioNumber );
}
















static inline void
GPIO_setMultiDio( uint32_t dioMask )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x00000090))) = dioMask;
}












static inline void
GPIO_clearDio( uint32_t dioNumber )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x000000A0))) = ( 1 << dioNumber );
}
















static inline void
GPIO_clearMultiDio( uint32_t dioMask )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x000000A0))) = dioMask;
}












static inline void
GPIO_toggleDio( uint32_t dioNumber )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x000000B0))) = ( 1 << dioNumber );
}
















static inline void
GPIO_toggleMultiDio( uint32_t dioMask )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x000000B0))) = dioMask;
}
# 452 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline uint32_t
GPIO_getOutputEnableDio( uint32_t dioNumber )
{



    ;




    return (( (*((volatile unsigned long *)(0x40022000 + 0x000000D0))) >> dioNumber ) & 1 );
}
# 486 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline uint32_t
GPIO_getOutputEnableMultiDio( uint32_t dioMask )
{



    ;




    return ( (*((volatile unsigned long *)(0x40022000 + 0x000000D0))) & dioMask );
}
# 517 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline void
GPIO_setOutputEnableDio( uint32_t dioNumber, uint32_t outputEnableValue )
{



    ;
   
                                                            ;




    (*((volatile unsigned long *)(((unsigned long)(0x40022000 + 0x000000D0) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40022000 + 0x000000D0) & 0x000FFFFF) << 5) | ((dioNumber) << 2)))) = outputEnableValue;
}
# 557 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline void
GPIO_setOutputEnableMultiDio( uint32_t dioMask, uint32_t bitVectoredOutputEnable )
{



    ;

    (*((volatile unsigned long *)(0x40022000 + 0x000000D0))) =
        ( (*((volatile unsigned long *)(0x40022000 + 0x000000D0))) & ~dioMask ) |
        ( bitVectoredOutputEnable & dioMask );
}














static inline uint32_t
GPIO_getEventDio( uint32_t dioNumber )
{



    ;




    return (( (*((volatile unsigned long *)(0x40022000 + 0x000000E0))) >> dioNumber ) & 1 );
}
# 618 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline uint32_t
GPIO_getEventMultiDio( uint32_t dioMask )
{



    ;




    return ( (*((volatile unsigned long *)(0x40022000 + 0x000000E0))) & dioMask );
}












static inline void
GPIO_clearEventDio( uint32_t dioNumber )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x000000E0))) = ( 1 << dioNumber );
}
# 673 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/gpio.h"
static inline void
GPIO_clearEventMultiDio( uint32_t dioMask )
{



    ;




    (*((volatile unsigned long *)(0x40022000 + 0x000000E0))) = dioMask;
}
# 235 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTParityModeSet(uint32_t ui32Base, uint32_t ui32Parity)
{



    ;
   



                                                ;




    (*((volatile unsigned long *)(ui32Base + 0x0000002C))) = (((*((volatile unsigned long *)(ui32Base + 0x0000002C))) &
                                      ~(0x00000080 | 0x00000004 |
                                        0x00000002)) | ui32Parity);
}
# 273 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline uint32_t
UARTParityModeGet(uint32_t ui32Base)
{



    ;




    return((*((volatile unsigned long *)(ui32Base + 0x0000002C))) &
           (0x00000080 | 0x00000004 | 0x00000002));
}
# 312 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTFIFOLevelSet(uint32_t ui32Base, uint32_t ui32TxLevel,
                 uint32_t ui32RxLevel)
{



    ;
   



                                            ;
   



                                            ;




    (*((volatile unsigned long *)(ui32Base + 0x00000034))) = ui32TxLevel | ui32RxLevel;
}
# 363 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern void NOROM_UARTFIFOLevelGet(uint32_t ui32Base, uint32_t *pui32TxLevel,
                             uint32_t *pui32RxLevel);
# 401 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern void NOROM_UARTConfigSetExpClk(uint32_t ui32Base, uint32_t ui32UARTClk,
                                uint32_t ui32Baud, uint32_t ui32Config);
# 426 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern void NOROM_UARTConfigGetExpClk(uint32_t ui32Base, uint32_t ui32UARTClk,
                                uint32_t *pui32Baud, uint32_t *pui32Config);













static inline void
UARTEnable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x0000002C))) |= 0x00000010;




    (*((volatile unsigned long *)(ui32Base + 0x00000030))) |= (0x00000001 | 0x00000100 |
                                     0x00000200);
}













extern void NOROM_UARTDisable(uint32_t ui32Base);












static inline void
UARTFIFOEnable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x0000002C))) |= 0x00000010;
}












static inline void
UARTFIFODisable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x0000002C))) &= ~(0x00000010);
}















static inline 
# 539 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
               _Bool
UARTCharsAvail(uint32_t ui32Base)
{



    ;




    return(((*((volatile unsigned long *)(ui32Base + 0x00000018))) & 0x00000010) ? 
# 550 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                         0 
# 550 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                               : 
# 550 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                                 1
# 550 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                                     );
}















static inline 
# 567 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
               _Bool
UARTSpaceAvail(uint32_t ui32Base)
{



    ;




    return(((*((volatile unsigned long *)(ui32Base + 0x00000018))) & 0x00000020) ? 
# 578 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                         0 
# 578 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                               : 
# 578 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                                 1
# 578 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                                                     );
}
# 600 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern int32_t NOROM_UARTCharGetNonBlocking(uint32_t ui32Base);















extern int32_t NOROM_UARTCharGet(uint32_t ui32Base);
# 635 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern 
# 635 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
      _Bool 
# 635 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
           NOROM_UARTCharPutNonBlocking(uint32_t ui32Base, uint8_t ui8Data);















extern void NOROM_UARTCharPut(uint32_t ui32Base, uint8_t ui8Data);
# 669 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline 
# 669 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
               _Bool
UARTBusy(uint32_t ui32Base)
{



    ;




    return(((*((volatile unsigned long *)(ui32Base + 0x00000018))) & 0x00000008) ?
           0x00000001 : 0x00000000);
}
















static inline void
UARTBreakCtl(uint32_t ui32Base, 
# 700 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                               _Bool 
# 700 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                    bBreakState)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x0000002C))) =
         (bBreakState ?
         ((*((volatile unsigned long *)(ui32Base + 0x0000002C))) | 0x00000001) :
         ((*((volatile unsigned long *)(ui32Base + 0x0000002C))) & ~(0x00000001)));
}
# 735 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern void NOROM_UARTIntRegister(uint32_t ui32Base, void (*pfnHandler)(void));
# 754 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
extern void NOROM_UARTIntUnregister(uint32_t ui32Base);
# 779 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000038))) |= ui32IntFlags;
}
# 815 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000038))) &= ~(ui32IntFlags);
}
# 853 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline uint32_t
UARTIntStatus(uint32_t ui32Base, 
# 854 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                _Bool 
# 854 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
                                     bMasked)
{



    ;





    if(bMasked)
    {
        return((*((volatile unsigned long *)(ui32Base + 0x00000040))));
    }
    else
    {
        return((*((volatile unsigned long *)(ui32Base + 0x0000003C))));
    }
}
# 912 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTIntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000044))) = ui32IntFlags;
}
# 947 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTDMAEnable(uint32_t ui32Base, uint32_t ui32DMAFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000048))) |= ui32DMAFlags;
}
# 978 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline void
UARTDMADisable(uint32_t ui32Base, uint32_t ui32DMAFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000048))) &= ~ui32DMAFlags;
}
# 1011 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/uart.h"
static inline uint32_t
UARTRxErrorGet(uint32_t ui32Base)
{



    ;




    return((*((volatile unsigned long *)(ui32Base + 0x00000004))) & 0x0000000F);
}















static inline void
UARTRxErrorClear(uint32_t ui32Base)
{



    ;





    (*((volatile unsigned long *)(ui32Base + 0x00000004))) = 0;
}












static inline void
UARTHwFlowControlEnable( uint32_t ui32Base )
{



    ;

    (*((volatile unsigned long *)(ui32Base + 0x00000030))) |= ( 0x00008000 | 0x00004000 );
}












static inline void
UARTHwFlowControlDisable( uint32_t ui32Base )
{



    ;

    (*((volatile unsigned long *)(ui32Base + 0x00000030))) &= ~( 0x00008000 | 0x00004000 );
}
# 196 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
extern void NOROM_I2CMasterInitExpClk(uint32_t ui32Base, uint32_t ui32I2CClk,
                               _Bool 
# 197 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                    bFast);
# 223 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CMasterControl(uint32_t ui32Base, uint32_t ui32Cmd)
{



    ;
   








                                                                ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000804))) = ui32Cmd;





    NOROM_CPUdelay(2);
}
# 272 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CMasterSlaveAddrSet(uint32_t ui32Base, uint8_t ui8SlaveAddr,
                     _Bool 
# 274 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                          bReceive)
{



    ;
    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000800))) = (ui8SlaveAddr << 1) | bReceive;
}












static inline void
I2CMasterEnable(uint32_t ui32Base)
{

    ;


    (*((volatile unsigned long *)(((unsigned long)(0x40002000 + 0x00000820) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40002000 + 0x00000820) & 0x000FFFFF) << 5) | ((4) << 2)))) = 1;


    (*((volatile unsigned long *)(0x40002000 + 0x00000804))) = 0x00000001;
}












static inline void
I2CMasterDisable(uint32_t ui32Base)
{

    ;


    (*((volatile unsigned long *)(0x40002000 + 0x00000804))) = 0;


    (*((volatile unsigned long *)(((unsigned long)(0x40002000 + 0x00000820) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40002000 + 0x00000820) & 0x000FFFFF) << 5) | ((4) << 2)))) = 0;
}















static inline 
# 350 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
               _Bool
I2CMasterBusy(uint32_t ui32Base)
{



    ;




    if((*((volatile unsigned long *)(0x40002000 + 0x00000804))) & 0x00000001)
    {
        return(
# 363 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
              1
# 363 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                  );
    }
    else
    {
        return(
# 367 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
              0
# 367 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                   );
    }
}
















static inline 
# 386 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
               _Bool
I2CMasterBusBusy(uint32_t ui32Base)
{



    ;




    if((*((volatile unsigned long *)(0x40002000 + 0x00000804))) & 0x00000040)
    {
        return(
# 399 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
              1
# 399 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                  );
    }
    else
    {
        return(
# 403 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
              0
# 403 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                   );
    }
}













static inline uint32_t
I2CMasterDataGet(uint32_t ui32Base)
{



    ;




    return((*((volatile unsigned long *)(0x40002000 + 0x00000808))));
}













static inline void
I2CMasterDataPut(uint32_t ui32Base, uint8_t ui8Data)
{



    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000808))) = ui8Data;
}
# 475 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
extern uint32_t NOROM_I2CMasterErr(uint32_t ui32Base);












static inline void
I2CMasterIntEnable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000810))) = 0x00000001;
}












static inline void
I2CMasterIntDisable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000810))) = 0;
}
# 555 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CMasterIntClear(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(0x40002000 + 0x0000081C))) = 0x00000001;
}
# 587 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline 
# 587 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
               _Bool
I2CMasterIntStatus(uint32_t ui32Base, 
# 588 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                     _Bool 
# 588 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                          bMasked)
{



    ;





    if(bMasked)
    {
        return(((*((volatile unsigned long *)(0x40002000 + 0x00000818)))) ? 
# 601 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                1 
# 601 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                     : 
# 601 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                       0
# 601 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                            );
    }
    else
    {
        return(((*((volatile unsigned long *)(0x40002000 + 0x00000814)))) ? 
# 605 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                1 
# 605 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                     : 
# 605 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                       0
# 605 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                                            );
    }
}












static inline void
I2CSlaveEnable(uint32_t ui32Base)
{

    ;


    (*((volatile unsigned long *)(((unsigned long)(0x40002000 + 0x00000820) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40002000 + 0x00000820) & 0x000FFFFF) << 5) | ((5) << 2)))) = 1;


    (*((volatile unsigned long *)(0x40002000 + 0x00000004))) = 0x00000001;
}
# 650 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CSlaveInit(uint32_t ui32Base, uint8_t ui8SlaveAddr)
{



    ;
    ;




    I2CSlaveEnable(0x40002000);




    (*((volatile unsigned long *)(0x40002000 + 0x00000000))) = ui8SlaveAddr;
}













static inline void
I2CSlaveAddressSet(uint32_t ui32Base, uint8_t ui8SlaveAddr)
{



    ;
    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000000))) = ui8SlaveAddr;
}












static inline void
I2CSlaveDisable(uint32_t ui32Base)
{

    ;


    (*((volatile unsigned long *)(0x40002000 + 0x00000004))) = 0x0;


    (*((volatile unsigned long *)(((unsigned long)(0x40002000 + 0x00000820) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40002000 + 0x00000820) & 0x000FFFFF) << 5) | ((5) << 2)))) = 0;
}
# 737 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline uint32_t
I2CSlaveStatus(uint32_t ui32Base)
{



    ;




    return((*((volatile unsigned long *)(0x40002000 + 0x00000004))));
}













static inline uint32_t
I2CSlaveDataGet(uint32_t ui32Base)
{



    ;




    return((*((volatile unsigned long *)(0x40002000 + 0x00000008))));
}













static inline void
I2CSlaveDataPut(uint32_t ui32Base, uint8_t ui8Data)
{



    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000008))) = ui8Data;
}
# 821 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CSlaveIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    uint32_t ui32Val;




    ;
   
                                               ;




    ui32Val = (*((volatile unsigned long *)(0x40002000 + 0x0000000C)));
    ui32Val |= ui32IntFlags;
    (*((volatile unsigned long *)(0x40002000 + 0x0000000C))) = ui32Val;
}
# 859 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CSlaveIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    uint32_t ui32Val;




    ;
   
                                               ;




    ui32Val = (*((volatile unsigned long *)(0x40002000 + 0x0000000C)));
    ui32Val &= ~ui32IntFlags;
    (*((volatile unsigned long *)(0x40002000 + 0x0000000C))) = ui32Val;
}
# 912 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline void
I2CSlaveIntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(0x40002000 + 0x00000018))) = ui32IntFlags;
}
# 946 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
static inline uint32_t
I2CSlaveIntStatus(uint32_t ui32Base, 
# 947 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                    _Bool 
# 947 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
                                         bMasked)
{



    ;





    if(bMasked)
    {
        return((*((volatile unsigned long *)(0x40002000 + 0x00000014))));
    }
    else
    {
        return((*((volatile unsigned long *)(0x40002000 + 0x00000010))));
    }
}
# 989 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
extern void NOROM_I2CIntRegister(uint32_t ui32Base, void (*pfnHandler)(void));
# 1007 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/i2c.h"
extern void NOROM_I2CIntUnregister(uint32_t ui32Base);
# 225 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern void NOROM_SSIConfigSetExpClk(uint32_t ui32Base, uint32_t ui32SSIClk,
                               uint32_t ui32Protocol, uint32_t ui32Mode,
                               uint32_t ui32BitRate, uint32_t ui32DataWidth);













static inline void
SSIEnable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000004))) |= 0x00000002;
}












static inline void
SSIDisable(uint32_t ui32Base)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000004))) &= ~(0x00000002);
}
# 298 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern void NOROM_SSIDataPut(uint32_t ui32Base, uint32_t ui32Data);
# 319 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern int32_t NOROM_SSIDataPutNonBlocking(uint32_t ui32Base, uint32_t ui32Data);
# 342 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern void NOROM_SSIDataGet(uint32_t ui32Base, uint32_t *pui32Data);
# 366 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern int32_t NOROM_SSIDataGetNonBlocking(uint32_t ui32Base, uint32_t *pui32Data);
# 384 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline 
# 384 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
               _Bool
SSIBusy(uint32_t ui32Base)
{



    ;




    return(((*((volatile unsigned long *)(ui32Base + 0x0000000C))) & 0x00000010) ? 
# 395 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
                                                      1 
# 395 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
                                                           : 
# 395 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
                                                             0
# 395 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
                                                                  );
}
# 415 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline uint32_t
SSIStatus(uint32_t ui32Base)
{



    ;




    return ((*((volatile unsigned long *)(ui32Base + 0x0000000C))) & 0x0000000F);
}
# 449 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern void NOROM_SSIIntRegister(uint32_t ui32Base, void (*pfnHandler)(void));
# 467 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
extern void NOROM_SSIIntUnregister(uint32_t ui32Base);
# 487 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline void
SSIIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000014))) |= ui32IntFlags;
}
# 517 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline void
SSIIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000014))) &= ~(ui32IntFlags);
}
# 563 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline void
SSIIntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000020))) = ui32IntFlags;
}
# 597 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline uint32_t
SSIIntStatus(uint32_t ui32Base, 
# 598 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
                               _Bool 
# 598 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
                                    bMasked)
{



    ;





    if(bMasked)
    {
        return((*((volatile unsigned long *)(ui32Base + 0x0000001C))));
    }
    else
    {
        return((*((volatile unsigned long *)(ui32Base + 0x00000018))));
    }
}
# 638 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline void
SSIDMAEnable(uint32_t ui32Base, uint32_t ui32DMAFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000024))) |= ui32DMAFlags;
}
# 668 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ssi.h"
static inline void
SSIDMADisable(uint32_t ui32Base, uint32_t ui32DMAFlags)
{



    ;




    (*((volatile unsigned long *)(ui32Base + 0x00000024))) &= ~ui32DMAFlags;
}
# 419 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPortConfigureSet(uint32_t ui32IOId, uint32_t ui32PortId,
                                uint32_t ui32IOConfig);
# 440 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern uint32_t NOROM_IOCPortConfigureGet(uint32_t ui32IOId);
# 460 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOShutdownSet(uint32_t ui32IOId, uint32_t ui32IOShutdown);
# 484 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOModeSet(uint32_t ui32IOId, uint32_t ui32IOMode);
# 508 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOIntSet(uint32_t ui32IOId, uint32_t ui32Int,
                        uint32_t ui32EdgeDet);
# 529 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOPortPullSet(uint32_t ui32IOId, uint32_t ui32Pull);
# 548 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOHystSet(uint32_t ui32IOId, uint32_t ui32Hysteresis);
# 567 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOInputSet(uint32_t ui32IOId, uint32_t ui32Input);
# 586 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOSlewCtrlSet(uint32_t ui32IOId, uint32_t ui32SlewEnable);
# 624 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIODrvStrengthSet(uint32_t ui32IOId, uint32_t ui32IOCurrent,
                                uint32_t ui32DrvStrength);
# 681 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIOPortIdSet(uint32_t ui32IOId, uint32_t ui32PortId);
# 701 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
static inline void
IOCIntRegister(void (*pfnHandler)(void))
{



    NOROM_IntRegister(16, pfnHandler);




    ((void (*)(uint32_t ui32Interrupt)) ((uint32_t*) (((uint32_t *) 0x10000180)[12]))[4])(16);
}














static inline void
IOCIntUnregister(void)
{



    ((void (*)(uint32_t ui32Interrupt)) ((uint32_t*) (((uint32_t *) 0x10000180)[12]))[5])(16);




    NOROM_IntUnregister(16);
}














extern void NOROM_IOCIntEnable(uint32_t ui32IOId);
# 773 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCIntDisable(uint32_t ui32IOId);
# 806 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
static inline void
IOCIntClear(uint32_t ui32IOId)
{



    ;




    GPIO_clearEventDio(ui32IOId);
}













static inline uint32_t
IOCIntStatus(uint32_t ui32IOId)
{



    ;




    return (GPIO_getEventDio(ui32IOId));
}
# 874 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeGpioInput(uint32_t ui32IOId);
# 903 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeGpioOutput(uint32_t ui32IOId);
# 942 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeUart(uint32_t ui32Base, uint32_t ui32Rx,
                           uint32_t ui32Tx, uint32_t ui32Cts,
                           uint32_t ui32Rts);
# 975 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeSsiMaster(uint32_t ui32Base, uint32_t ui32Rx,
                                uint32_t ui32Tx, uint32_t ui32Fss,
                                uint32_t ui32Clk);
# 1004 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeSsiSlave(uint32_t ui32Base, uint32_t ui32Rx,
                               uint32_t ui32Tx, uint32_t ui32Fss,
                               uint32_t ui32Clk);
# 1027 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeI2c(uint32_t ui32Base, uint32_t ui32Data,
                          uint32_t ui32Clk);
# 1051 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ioc.h"
extern void NOROM_IOCPinTypeAux(uint32_t ui32IOId);
# 75 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"







# 71 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/pwr_ctrl.h"


# 68 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"


# 136 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
static inline void
AuxAdiDdiSafeWrite(uint32_t nAddr, uint32_t nData, uint32_t nSize)
{

   _Bool 
# 140 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
        bIrqEnabled = !NOROM_CPUcpsid();

    while (!(*((volatile unsigned long *)(0x400C8000 + 0x00000000))));
    switch (nSize) {
    case 1: (*((volatile unsigned char *)(nAddr))) = (uint8_t)nData; break;
    case 2: (*((volatile unsigned short *)(nAddr))) = (uint16_t)nData; break;
    case 4: default: (*((volatile unsigned long *)(nAddr))) = nData; break;
    }
    (*((volatile unsigned long *)(0x400C8000 + 0x00000000))) = 1;

    if (bIrqEnabled) {
        NOROM_CPUcpsie();
    }
}














static inline uint32_t
AuxAdiDdiSafeRead(uint32_t nAddr, uint32_t nSize)
{
    uint32_t nRet;

   _Bool 
# 173 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
        bIrqEnabled = !NOROM_CPUcpsid();

    while (!(*((volatile unsigned long *)(0x400C8000 + 0x00000000))));
    switch (nSize) {
    case 1: nRet = (*((volatile unsigned char *)(nAddr))); break;
    case 2: nRet = (*((volatile unsigned short *)(nAddr))); break;
    case 4: default: nRet = (*((volatile unsigned long *)(nAddr))); break;
    }
    (*((volatile unsigned long *)(0x400C8000 + 0x00000000))) = 1;

    if (bIrqEnabled) {
        NOROM_CPUcpsie();
    }
    return nRet;
}
# 230 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
static inline uint32_t
DDI32RegRead(uint32_t ui32Base, uint32_t ui32Reg)
{



    ;
    ;




    return AuxAdiDdiSafeRead(ui32Base + ui32Reg, 4);
}
# 267 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
static inline void
DDI32BitsSet(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000040;




    AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + ui32Reg, ui32Val, 4);
}
# 307 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
static inline void
DDI32BitsClear(uint32_t ui32Base, uint32_t ui32Reg,
               uint32_t ui32Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000080;




    AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + ui32Reg, ui32Val, 4);
}
# 358 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
static inline void
DDI8SetValBit(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Byte,
              uint16_t ui16Mask, uint16_t ui16Val)
{
    uint32_t ui32RegOffset;




    ;
    ;
    ;
    ;





    ui32RegOffset = 0x00000180 + (ui32Reg << 1) + (ui32Byte << 1);




    AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset, (ui16Mask << 8) | ui16Val, 2);
}
# 411 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
static inline void
DDI16SetValBit(uint32_t ui32Base, uint32_t ui32Reg, 
# 412 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
                                                   _Bool 
# 412 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
                                                        bWriteHigh,
               uint32_t ui32Mask, uint32_t ui32Val)
{
    uint32_t ui32RegOffset;




    ;
    ;
    ;
    ;





    ui32RegOffset = 0x00000200 + (ui32Reg << 1) + (bWriteHigh ? 4 : 0);




    AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset, (ui32Mask << 16) | ui32Val, 4);
}
# 458 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
extern void NOROM_DDI32RegWrite(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Val);
# 479 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
extern void NOROM_DDI16BitWrite(uint32_t ui32Base, uint32_t ui32Reg,
                          uint32_t ui32Mask, uint32_t ui32WrData);
# 502 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
extern void NOROM_DDI16BitfieldWrite(uint32_t ui32Base, uint32_t ui32Reg,
                               uint32_t ui32Mask, uint32_t ui32Shift,
                               uint16_t ui32Data);















extern uint16_t NOROM_DDI16BitRead(uint32_t ui32Base, uint32_t ui32Reg,
                             uint32_t ui32Mask);
# 541 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/ddi.h"
extern uint16_t NOROM_DDI16BitfieldRead(uint32_t ui32Base, uint32_t ui32Reg,
                                  uint32_t ui32Mask, uint32_t ui32Shift);
# 149 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
static inline void
OSCXHfPowerModeSet(uint32_t ui32Mode)
{



   
                                         ;




    ((void (*)(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Mask, uint32_t ui32WrData)) ((uint32_t*) (((uint32_t *) 0x10000180)[9]))[0])(0x400CA000, 0x00000000, 0x00000800,
                  ui32Mode);
}
















static inline void
OSCClockLossEventEnable( void )
{
    ((void (*)(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Mask, uint32_t ui32Shift, uint16_t ui32Data)) ((uint32_t*) (((uint32_t *) 0x10000180)[9]))[1])( 0x400CA000, 0x00000000,
        0x00000200,
        9, 1 );
}
















static inline void
OSCClockLossEventDisable( void )
{
    ((void (*)(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Mask, uint32_t ui32Shift, uint16_t ui32Data)) ((uint32_t*) (((uint32_t *) 0x10000180)[9]))[1])( 0x400CA000, 0x00000000,
        0x00000200,
        9, 0 );
}
# 249 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
extern void NOROM_OSCClockSourceSet(uint32_t ui32SrcClk, uint32_t ui32Osc);
# 272 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
extern uint32_t NOROM_OSCClockSourceGet(uint32_t ui32SrcClk);
















static inline 
# 289 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
               _Bool
OSCHfSourceReady(void)
{



    return (((uint16_t (*)(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Mask, uint32_t ui32Shift)) ((uint32_t*) (((uint32_t *) 0x10000180)[9]))[3])(0x400CA000, 0x00000034,
                              0x00000001,
                              0)) ?
       1 
# 298 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
            : 
# 298 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
              0
# 298 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
                   ;
}
# 319 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
static inline void
OSCHfSourceSwitch(void)
{



    SafeHapiVoid( ((HARD_API_T*) 0x10000048)->HFSourceSafeSwitch );
}
# 347 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
static inline void
OSCInterfaceEnable(void)
{
}
# 370 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
static inline void
OSCInterfaceDisable(void)
{
}














extern uint32_t NOROM_OSCHF_GetStartupTime( uint32_t timeUntilWakeupInMs );












extern void NOROM_OSCHF_TurnOnXosc( void );















extern 
# 417 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
      _Bool 
# 417 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
           NOROM_OSCHF_AttemptToSwitchToXosc( void );












extern void NOROM_OSCHF_SwitchToRcOscTurnOffXosc( void );
# 450 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
extern uint32_t NOROM_OSCHF_DebugGetCrystalAmplitude( void );
















extern uint32_t NOROM_OSCHF_DebugGetExpectedAverageCrystalAmplitude( void );
# 498 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
extern int32_t NOROM_OSC_HPOSCRelativeFrequencyOffsetGet( int32_t tempDegC );
# 526 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/osc.h"
extern int16_t NOROM_OSC_HPOSCRelativeFrequencyOffsetToRFCoreFormatConvert( int32_t HPOSC_RelFreqOffset );
# 74 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/pwr_ctrl.h"


# 133 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_ioc.h"
static inline void
AONIOCDriveStrengthSet(uint32_t ui32DriveLevel, uint32_t ui32DriveStrength)
{
   

                                                  ;
   






                                                   ;




    (*((volatile unsigned long *)(0x40094000 + ui32DriveLevel))) = ui32DriveStrength;
}
# 182 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_ioc.h"
static inline uint32_t
AONIOCDriveStrengthGet(uint32_t ui32DriveLevel)
{



   

                                                  ;




    return( (*((volatile unsigned long *)(0x40094000 + ui32DriveLevel))) );
}
















static inline void
AONIOCFreezeEnable(void)
{



    (*((volatile unsigned long *)(0x40094000 + 0x0000000C))) = 0x0;
}















static inline void
AONIOCFreezeDisable(void)
{



    (*((volatile unsigned long *)(0x40094000 + 0x0000000C))) = 0x00000001;
}














static inline void
AONIOC32kHzOutputDisable(void)
{



    (*((volatile unsigned long *)(0x40094000 + 0x00000010))) = 0x00000001;
}














static inline void
AONIOC32kHzOutputEnable(void)
{



    (*((volatile unsigned long *)(0x40094000 + 0x00000010))) = 0x0;
}
# 148 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI8RegWrite(uint32_t ui32Base, uint32_t ui32Reg, uint8_t ui8Val)
{



    ;
    ;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32Reg, ui8Val, 1);
    } else {
        (*((volatile unsigned char *)(ui32Base + ui32Reg))) = ui8Val;
    }
}
# 197 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI16RegWrite(uint32_t ui32Base, uint32_t ui32Reg,
              uint16_t ui16Val)
{



    ;
    ;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + (ui32Reg & 0xFE), ui16Val, 2);
    } else {
        (*((volatile unsigned short *)(ui32Base + (ui32Reg & 0xFE)))) = ui16Val;
    }
}
# 247 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI32RegWrite(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Val)
{



    ;
    ;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + (ui32Reg & 0xFC), ui32Val, 4);
    } else {
        (*((volatile unsigned long *)(ui32Base + (ui32Reg & 0xFC)))) = ui32Val;
    }
}
# 287 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline uint32_t
ADI8RegRead(uint32_t ui32Base, uint32_t ui32Reg)
{



    ;
    ;




    if (ui32Base==0x400CB000) {
        return AuxAdiDdiSafeRead(ui32Base + ui32Reg, 1);
    } else {
        return((*((volatile unsigned char *)(ui32Base + ui32Reg))));
    }
}
# 330 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline uint32_t
ADI16RegRead(uint32_t ui32Base, uint32_t ui32Reg)
{



    ;
    ;




    if (ui32Base==0x400CB000) {
        return AuxAdiDdiSafeRead(ui32Base + (ui32Reg & 0xFE), 2);
    } else {
        return((*((volatile unsigned short *)(ui32Base + (ui32Reg & 0xFE)))));
    }
}
# 371 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline uint32_t
ADI32RegRead(uint32_t ui32Base, uint32_t ui32Reg)
{



    ;
    ;




    if (ui32Base==0x400CB000) {
        return AuxAdiDdiSafeRead(ui32Base + (ui32Reg & 0xFC), 4);
    } else {
        return((*((volatile unsigned long *)(ui32Base + (ui32Reg & 0xFC)))));
    }
}
# 420 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI8BitsSet(uint32_t ui32Base, uint32_t ui32Reg, uint8_t ui8Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000010;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + ui32Reg, ui8Val, 1);
    } else {
        (*((volatile unsigned char *)(ui32Base + ui32RegOffset + ui32Reg))) = ui8Val;
    }
}
# 477 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI16BitsSet(uint32_t ui32Base, uint32_t ui32Reg, uint16_t ui16Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000010;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + (ui32Reg & 0xFE), ui16Val, 2);
    } else {
        (*((volatile unsigned short *)(ui32Base + ui32RegOffset + (ui32Reg & 0xFE)))) = ui16Val;
    }
}
# 534 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI32BitsSet(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000010;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + (ui32Reg & 0xFC), ui32Val, 4);
    } else {
        (*((volatile unsigned long *)(ui32Base + ui32RegOffset + (ui32Reg & 0xFC)))) = ui32Val;
    }
}
# 591 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI8BitsClear(uint32_t ui32Base, uint32_t ui32Reg, uint8_t ui8Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000020;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + ui32Reg, ui8Val, 1);
    } else {
        (*((volatile unsigned char *)(ui32Base + ui32RegOffset + ui32Reg))) = ui8Val;
    }
}
# 648 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI16BitsClear(uint32_t ui32Base, uint32_t ui32Reg, uint16_t ui16Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000020;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + (ui32Reg & 0xFE), ui16Val, 2);
    } else {
        (*((volatile unsigned short *)(ui32Base + ui32RegOffset + (ui32Reg & 0xFE)))) = ui16Val;
    }
}
# 705 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI32BitsClear(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Val)
{
    uint32_t ui32RegOffset;




    ;
    ;





    ui32RegOffset = 0x00000020;




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset + (ui32Reg & 0xFC), ui32Val, 4);
    } else {
        (*((volatile unsigned long *)(ui32Base + ui32RegOffset + (ui32Reg & 0xFC)))) = ui32Val;
    }
}
# 765 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI4SetValBit(uint32_t ui32Base, uint32_t ui32Reg, 
# 766 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
                                                  _Bool 
# 766 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
                                                       bWriteHigh,
              uint8_t ui8Mask, uint8_t ui8Val)
{
    uint32_t ui32RegOffset;




    ;
    ;
    ;
    ;





    ui32RegOffset = 0x00000040 + (ui32Reg << 1) + (bWriteHigh ? 1 : 0);




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset, (ui8Mask << 4) | ui8Val, 1);
    } else {
        (*((volatile unsigned char *)(ui32Base + ui32RegOffset))) = (ui8Mask << 4) | ui8Val;
    }
}
# 823 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI8SetValBit(uint32_t ui32Base, uint32_t ui32Reg, uint16_t ui16Mask,
              uint16_t ui16Val)
{
    uint32_t ui32RegOffset;




    ;
    ;
    ;
    ;





    ui32RegOffset = 0x00000060 + (ui32Reg << 1);




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset, (ui16Mask << 8) | ui16Val, 2);
    } else {
        (*((volatile unsigned short *)(ui32Base + ui32RegOffset))) = (ui16Mask << 8) | ui16Val;
    }
}
# 882 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/adi.h"
static inline void
ADI16SetValBit(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Mask,
               uint32_t ui32Val)
{
    uint32_t ui32RegOffset;




    ;
    ;
    ;
    ;





    ui32RegOffset = 0x00000080 + ((ui32Reg << 1) & 0xFC);




    if (ui32Base==0x400CB000) {
        AuxAdiDdiSafeWrite(ui32Base + ui32RegOffset, (ui32Mask << 16) | ui32Val, 4);
    } else {
        (*((volatile unsigned long *)(ui32Base + ui32RegOffset))) = (ui32Mask << 16) | ui32Val;
    }
}
# 161 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/pwr_ctrl.h"
extern void NOROM_PowerCtrlSourceSet(uint32_t ui32PowerConfig);
# 179 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/pwr_ctrl.h"
static inline uint32_t
PowerCtrlSourceGet(void)
{
    uint32_t ui32PowerConfig;




    ui32PowerConfig = (*((volatile unsigned long *)(0x40090000 + 0x00000000)));
    if(ui32PowerConfig & 0x00000004)
    {
        return (0x00000001);
    }
    else
    {
        return (0x00000000);
    }
}
# 221 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/pwr_ctrl.h"
static inline uint32_t
PowerCtrlResetSourceGet(void)
{



    return (( (*((volatile unsigned long *)(0x40090000 + 0x00000004))) &
        0x0000000E ) >>
        1 ) ;
}














static inline void
PowerCtrlIOFreezeEnable(void)
{



    AONIOCFreezeEnable();
    (*((volatile unsigned long *)(0x40090000 + 0x00000008))) = 0;
    (*((volatile unsigned long *)(0x40092000 + 0x0000002C)));
}















static inline void
PowerCtrlIOFreezeDisable(void)
{



    AONIOCFreezeDisable();
    (*((volatile unsigned long *)(0x40090000 + 0x00000008))) = 1;
    (*((volatile unsigned long *)(0x40092000 + 0x0000002C)));
}
# 83 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"


# 155 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_wuc.h"
extern void NOROM_AUXWUCClockEnable(uint32_t ui32Clocks);
# 182 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_wuc.h"
extern void NOROM_AUXWUCClockDisable(uint32_t ui32Clocks);
# 209 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_wuc.h"
extern uint32_t NOROM_AUXWUCClockStatus(uint32_t ui32Clocks);
# 231 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_wuc.h"
static inline void
AUXWUCClockFreqReq(uint32_t ui32ClockFreq)
{



   
                                                   ;




    (*((volatile unsigned long *)(0x400C6000 + 0x00000010))) = ui32ClockFreq;
}
















extern void NOROM_AUXWUCPowerCtrl(uint32_t ui32PowerMode);
















static inline void
AUXWUCFreezeEnable(void)
{



    (*((volatile unsigned long *)(0x400C6000 + 0x00000054))) = 0x0;
}
# 303 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_wuc.h"
static inline void
AUXWUCFreezeDisable(void)
{



    (*((volatile unsigned long *)(0x400C6000 + 0x00000054))) = 0x00000001;
}
# 225 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCMcuPowerDownConfig(uint32_t ui32ClkSrc)
{
    uint32_t ui32Reg;




   
                                               ;




    ui32Reg = (*((volatile unsigned long *)(0x40091000 + 0x00000000)));
    ui32Reg &= ~0x00000003;
    (*((volatile unsigned long *)(0x40091000 + 0x00000000))) = ui32Reg |
                                             (ui32ClkSrc <<
                                              0);
}
# 264 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCMcuPowerOffConfig(uint32_t ui32Mode)
{

   
                                                ;


    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000008) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000008) & 0x000FFFFF) << 5) | ((17) << 2)))) = (ui32Mode != 0);
}
# 293 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCMcuWakeUpConfig(uint32_t ui32WakeUp)
{

   
                                             ;


    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000008) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000008) & 0x000FFFFF) << 5) | ((16) << 2)))) = (ui32WakeUp != 0);
}
# 330 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCMcuSRamConfig(uint32_t ui32Retention)
{
    uint32_t ui32Reg;




    ;
    ;




    ui32Reg = (*((volatile unsigned long *)(0x40091000 + 0x00000008))) & ~0x0000000F;
    ui32Reg |= ui32Retention;
    (*((volatile unsigned long *)(0x40091000 + 0x00000008))) = ui32Reg;
}
# 370 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline uint32_t
AONWUCAuxClockConfigGet(void)
{



    return (((*((volatile unsigned long *)(0x40091000 + 0x00000004))) &
             0x00000700) >>
             8);
}
# 399 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCAuxPowerDownConfig(uint32_t ui32ClkSrc)
{
    uint32_t ui32Reg;




   
                                               ;




    ui32Reg = (*((volatile unsigned long *)(0x40091000 + 0x00000004)));
    ui32Reg &= ~0x00001800;
    (*((volatile unsigned long *)(0x40091000 + 0x00000004))) = ui32Reg |
                                             (ui32ClkSrc <<
                                              11);
}
# 440 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCAuxSRamConfig(uint32_t ui32Retention)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x0000000C) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x0000000C) & 0x000FFFFF) << 5) | ((0) << 2)))) = ui32Retention;
}
# 475 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCAuxWakeupEvent(uint32_t ui32Mode)
{

   
                                                ;


    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000010) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000010) & 0x000FFFFF) << 5) | ((0) << 2)))) = ui32Mode;
}
















extern void NOROM_AONWUCAuxReset(void);











static inline void
AONWUCAuxImageValid(void)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000010) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000010) & 0x000FFFFF) << 5) | ((2) << 2)))) = 1;
}











static inline void
AONWUCAuxImageInvalid(void)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000010) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000010) & 0x000FFFFF) << 5) | ((2) << 2)))) = 0;
}
# 555 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline uint32_t
AONWUCPowerStatusGet(void)
{



    return ((*((volatile unsigned long *)(0x40091000 + 0x00000014))));
}
# 580 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCShutDownEnable(void)
{


    (*((volatile unsigned long *)(0x40091000 + 0x00000040))) = 0;


    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000020) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000020) & 0x000FFFFF) << 5) | ((8) << 2)))) = 0;
    (*((volatile unsigned long *)(0x40091000 + 0x00000018))) = 0x00000001;
}













static inline void
AONWUCDomainPowerDownEnable(void)
{


    (*((volatile unsigned long *)(0x40091000 + 0x00000040))) = 0;


    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000020) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000020) & 0x000FFFFF) << 5) | ((8) << 2)))) = 0;
}












static inline void
AONWUCDomainPowerDownDisable(void)
{

    (*((volatile unsigned long *)(((unsigned long)(0x40091000 + 0x00000020) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40091000 + 0x00000020) & 0x000FFFFF) << 5) | ((8) << 2)))) = 1;
}
# 655 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
static inline void
AONWUCMcuResetClear(uint32_t ui32Status)
{



   
                                                ;




    (*((volatile unsigned long *)(0x40091000 + 0x00000024))) = ui32Status;
}










static inline uint32_t
AONWUCMcuResetStatusGet(void)
{



    return ((*((volatile unsigned long *)(0x40091000 + 0x00000024))));
}
# 741 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
extern void NOROM_AONWUCRechargeCtrlConfigSet(
# 741 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
                                       _Bool 
# 741 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
                                            bAdaptEnable,
                                        uint32_t ui32AdaptRate,
                                        uint32_t ui32Period,
                                        uint32_t ui32MaxPeriod);










static inline uint32_t
AONWUCRechargeCtrlConfigGet(void)
{



    return((*((volatile unsigned long *)(0x40091000 + 0x00000030))));
}
# 798 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_wuc.h"
extern void NOROM_AONWUCOscConfig(uint32_t ui32Period);
















static inline void
AONWUCJtagPowerOff(void)
{



    (*((volatile unsigned long *)(0x40091000 + 0x00000040))) = 0;
}
# 87 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"



# 150 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
extern void NOROM_VIMSConfigure(uint32_t ui32Base, 
# 150 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
                                            _Bool 
# 150 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
                                                 bRoundRobin,
                         _Bool 
# 151 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
                              bPrefetch);
# 207 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
extern void NOROM_VIMSModeSet(uint32_t ui32Base, uint32_t ui32Mode);
# 226 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
extern uint32_t NOROM_VIMSModeGet(uint32_t ui32Base);
# 280 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
extern void NOROM_VIMSModeSafeSet( uint32_t ui32Base ,
                             uint32_t ui32NewMode ,
                            _Bool 
# 282 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/vims.h"
                                     blocking );















static inline void
VIMSLineBufDisable(uint32_t ui32Base)
{



    (*((volatile unsigned long *)(ui32Base + 0x00000004))) |= 0x00000020 |
                                        0x00000010;
}















static inline void
VIMSLineBufEnable(uint32_t ui32Base)
{



    (*((volatile unsigned long *)(ui32Base + 0x00000004))) &= ~(0x00000020 |
                                          0x00000010);
}
# 158 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
extern void NOROM_SysCtrlPowerEverything(void);













static inline uint32_t
SysCtrlClockGet( void )
{



    return( 48000000 );
}















static inline void
SysCtrlAonSync(void)
{



    (*((volatile unsigned long *)(0x40092000 + 0x0000002C)));
}
# 222 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
static inline void
SysCtrlAonUpdate(void)
{




    (*((volatile unsigned long *)(0x40092000 + 0x0000002C))) = 1;
    (*((volatile unsigned long *)(0x40092000 + 0x0000002C)));
}
# 257 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
extern void NOROM_SysCtrlSetRechargeBeforePowerDown( uint32_t xoscPowerMode );
# 279 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
extern void NOROM_SysCtrlAdjustRechargeAfterPowerDown( void );
# 297 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
extern void NOROM_SysCtrl_DCDC_VoltageConditionalControl( void );
# 322 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
extern uint32_t NOROM_SysCtrlResetSourceGet( void );








static inline void
SysCtrlSystemReset( void )
{

   NOROM_CPUcpsid();

   (*((volatile unsigned long *)(((unsigned long)(0x40090000 + 0x00000004) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40090000 + 0x00000004) & 0x000FFFFF) << 5) | ((31) << 2)))) = 1;

   while ( 1 ) {

   }
}
# 361 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/sys_ctrl.h"
static inline void
SysCtrlClockLossResetEnable(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40090000 + 0x00000004) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40090000 + 0x00000004) & 0x000FFFFF) << 5) | ((4) << 2)))) = 1;
}














static inline void
SysCtrlClockLossResetDisable(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40090000 + 0x00000004) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40090000 + 0x00000004) & 0x000FFFFF) << 5) | ((4) << 2)))) = 0;
}
# 173 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCEnable(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000000) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000000) & 0x000FFFFF) << 5) | ((0) << 2)))) = 1;
}















static inline void
AONRTCDisable(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000000) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000000) & 0x000FFFFF) << 5) | ((0) << 2)))) = 0;
}










static inline void
AONRTCReset(void)
{



    (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000000) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000000) & 0x000FFFFF) << 5) | ((7) << 2)))) = 1;
}










static inline 
# 232 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
               _Bool
AONRTCActive(void)
{

    return((*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000000) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000000) & 0x000FFFFF) << 5) | ((0) << 2)))));
}
















static inline 
# 254 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
               _Bool
AONRTCChannelActive(uint32_t ui32Channel)
{
    uint32_t uint32Status = 0;

    if(ui32Channel & 0x1)
    {
        uint32Status = (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((0) << 2))));
    }

    if(ui32Channel & 0x2)
    {
        uint32Status = (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((8) << 2))));
    }

    if(ui32Channel & 0x4)
    {
        uint32Status = (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((16) << 2))));
    }

    return(uint32Status);
}
# 307 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCDelayConfig(uint32_t ui32Delay)
{
    uint32_t ui32Cfg;




    ;


    ui32Cfg = (*((volatile unsigned long *)(0x40092000 + 0x00000000)));
    ui32Cfg &= ~(0x00000F00);
    ui32Cfg |= (ui32Delay << 8);

    (*((volatile unsigned long *)(0x40092000 + 0x00000000))) = ui32Cfg;
}
# 344 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCCombinedEventConfig(uint32_t ui32Channels)
{
    uint32_t ui32Cfg;




   
                                               ;

    ui32Cfg = (*((volatile unsigned long *)(0x40092000 + 0x00000000)));
    ui32Cfg &= ~(0x00070000);
    ui32Cfg |= (ui32Channels << 16);

    (*((volatile unsigned long *)(0x40092000 + 0x00000000))) = ui32Cfg;
}
















static inline void
AONRTCEventClear(uint32_t ui32Channel)
{

   

                                        ;

    if(ui32Channel & 0x1)
    {
        (*((volatile unsigned long *)(0x40092000 + 0x00000004))) = 0x00000001;
    }

    if(ui32Channel & 0x2)
    {
        (*((volatile unsigned long *)(0x40092000 + 0x00000004))) = 0x00000100;
    }

    if(ui32Channel & 0x4)
    {
        (*((volatile unsigned long *)(0x40092000 + 0x00000004))) = 0x00010000;
    }
}
# 418 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline 
# 418 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
               _Bool
AONRTCEventGet(uint32_t ui32Channel)
{
    uint32_t uint32Event = 0;


   

                                        ;

    if(ui32Channel & 0x1)
    {
        uint32Event = (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000004) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000004) & 0x000FFFFF) << 5) | ((0) << 2))));
    }

    if(ui32Channel & 0x2)
    {
        uint32Event = (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000004) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000004) & 0x000FFFFF) << 5) | ((8) << 2))));
    }

    if(ui32Channel & 0x4)
    {
        uint32Event = (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000004) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000004) & 0x000FFFFF) << 5) | ((16) << 2))));
    }

    return(uint32Event);
}
# 466 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline uint32_t
AONRTCSecGet(void)
{




    return((*((volatile unsigned long *)(0x40092000 + 0x00000008))));
}
# 496 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline uint32_t
AONRTCFractionGet(void)
{








    return((*((volatile unsigned long *)(0x40092000 + 0x0000000C))));
}
# 528 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline uint32_t
AONRTCSubSecIncrGet(void)
{
    return((*((volatile unsigned long *)(0x40092000 + 0x00000010))));
}
# 554 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCModeCh1Set(uint32_t ui32Mode)
{

   
                                                  ;

    (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((9) << 2)))) = ui32Mode;
}
















static inline uint32_t
AONRTCModeCh1Get(void)
{
    return((*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((9) << 2)))));
}
# 608 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCModeCh2Set(uint32_t ui32Mode)
{

   
                                                        ;

    (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((18) << 2)))) = ui32Mode;
}
# 636 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline uint32_t
AONRTCModeCh2Get(void)
{
    return((*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((18) << 2)))));
}
# 661 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCChannelEnable(uint32_t ui32Channel)
{

   

                                        ;

    if(ui32Channel & 0x1)
    {
        (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((0) << 2)))) = 1;
    }

    if(ui32Channel & 0x2)
    {
        (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((8) << 2)))) = 1;
    }

    if(ui32Channel & 0x4)
    {
        (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((16) << 2)))) = 1;
    }
}
# 704 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCChannelDisable(uint32_t ui32Channel)
{

   

                                        ;

    if(ui32Channel & 0x1)
    {
        (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((0) << 2)))) = 0;
    }

    if(ui32Channel & 0x2)
    {
        (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((8) << 2)))) = 0;
    }

    if(ui32Channel & 0x4)
    {
        (*((volatile unsigned long *)(((unsigned long)(0x40092000 + 0x00000014) & 0xF0000000) | 0x02000000 | (((unsigned long)(0x40092000 + 0x00000014) & 0x000FFFFF) << 5) | ((16) << 2)))) = 0;
    }
}
# 751 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCCompareValueSet(uint32_t ui32Channel, uint32_t ui32CompValue)
{

   

                                        ;

    if(ui32Channel & 0x1)
    {
        (*((volatile unsigned long *)(0x40092000 + 0x00000018))) = ui32CompValue;
    }

    if(ui32Channel & 0x2)
    {
        (*((volatile unsigned long *)(0x40092000 + 0x0000001C))) = ui32CompValue;
    }

    if(ui32Channel & 0x4)
    {
        (*((volatile unsigned long *)(0x40092000 + 0x00000020))) = ui32CompValue;
    }
}
















static inline uint32_t
AONRTCCompareValueGet(uint32_t ui32Channel)
{
    uint32_t ui32Value = 0;


   

                                        ;

    if(ui32Channel & 0x1)
    {
        ui32Value = (*((volatile unsigned long *)(0x40092000 + 0x00000018)));
    }

    if(ui32Channel & 0x2)
    {
        ui32Value = (*((volatile unsigned long *)(0x40092000 + 0x0000001C)));
    }

    if(ui32Channel & 0x4)
    {
        ui32Value = (*((volatile unsigned long *)(0x40092000 + 0x00000020)));
    }

    return(ui32Value);
}
# 837 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
extern uint32_t NOROM_AONRTCCurrentCompareValueGet(void);













extern uint64_t NOROM_AONRTCCurrent64BitValueGet(void);
# 869 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline void
AONRTCIncValueCh2Set(uint32_t ui32IncValue)
{
    (*((volatile unsigned long *)(0x40092000 + 0x00000024))) = ui32IncValue;
}
# 891 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_rtc.h"
static inline uint32_t
AONRTCIncValueCh2Get(void)
{
    return((*((volatile unsigned long *)(0x40092000 + 0x00000024))));
}













static inline uint32_t
AONRTCCaptureValueCh1Get(void)
{
    return((*((volatile unsigned long *)(0x40092000 + 0x00000028))));
}
# 218 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
extern void NOROM_AONEventMcuWakeUpSet(uint32_t ui32MCUWUEvent,
                                 uint32_t ui32EventSrc);
# 267 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
extern uint32_t NOROM_AONEventMcuWakeUpGet(uint32_t ui32MCUWUEvent);
# 318 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
extern void NOROM_AONEventAuxWakeUpSet(uint32_t ui32AUXWUEvent,
                                 uint32_t ui32EventSrc);
# 366 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
extern uint32_t NOROM_AONEventAuxWakeUpGet(uint32_t ui32AUXWUEvent);
# 421 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
extern void NOROM_AONEventMcuSet(uint32_t ui32MCUEvent, uint32_t ui32EventSrc);
# 469 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
extern uint32_t NOROM_AONEventMcuGet(uint32_t ui32MCUEvent);
# 512 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
static inline void
AONEventRtcSet(uint32_t ui32EventSrc)
{
    uint32_t ui32Ctrl;




    ;

    ui32Ctrl = (*((volatile unsigned long *)(0x40093000 + 0x0000000C)));
    ui32Ctrl &= ~(0x0000003F);
    ui32Ctrl |= (ui32EventSrc & 0x3f) << 0;

    (*((volatile unsigned long *)(0x40093000 + 0x0000000C))) = ui32Ctrl;
}
# 568 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_event.h"
static inline uint32_t
AONEventRtcGet(void)
{
    uint32_t ui32EventSrc;




    ui32EventSrc = (*((volatile unsigned long *)(0x40093000 + 0x0000000C)));

    return ((ui32EventSrc & 0x0000003F) >>
            0);
}
# 122 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
static inline void
AONBatMonEnable(void)
{



    (*((volatile unsigned long *)(0x40095000 + 0x00000000))) =
        0x00000002 |
        0x00000001;
}











static inline void
AONBatMonDisable(void)
{



    (*((volatile unsigned long *)(0x40095000 + 0x00000000))) = 0;
}
# 170 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
extern int32_t NOROM_AONBatMonTemperatureGetDegC( void );
# 190 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
static inline uint32_t
AONBatMonBatteryVoltageGet(void)
{
    uint32_t ui32CurrentBattery;

    ui32CurrentBattery = (*((volatile unsigned long *)(0x40095000 + 0x00000028)));




    return (ui32CurrentBattery >> 0);
}
# 223 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
static inline 
# 223 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
               _Bool
AONBatMonNewBatteryMeasureReady(void)
{
   _Bool 
# 226 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
        bStatus;




    bStatus = (*((volatile unsigned long *)(0x40095000 + 0x0000002C))) &
              0x00000001 ? 
# 232 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                      1 
# 232 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                           : 
# 232 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                             0
# 232 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                                  ;




    if(bStatus)
    {
        (*((volatile unsigned long *)(0x40095000 + 0x0000002C))) = 1;
    }




    return (bStatus);
}
# 268 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
static inline 
# 268 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
               _Bool
AONBatMonNewTempMeasureReady(void)
{
   _Bool 
# 271 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
        bStatus;




    bStatus = (*((volatile unsigned long *)(0x40095000 + 0x00000034))) &
              0x00000001 ? 
# 277 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                       1 
# 277 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                            : 
# 277 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                              0
# 277 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aon_batmon.h"
                                                   ;




    if(bStatus)
    {
        (*((volatile unsigned long *)(0x40095000 + 0x00000034))) = 1;
    }




    return (bStatus);
}
# 68 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"

# 181 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern void NOROM_AUXADCDisable(void);
# 214 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern void NOROM_AUXADCEnableAsync(uint32_t refSource, uint32_t trigger);
# 263 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern void NOROM_AUXADCEnableSync(uint32_t refSource, uint32_t sampleTime, uint32_t trigger);
















extern void NOROM_AUXADCDisableInputScaling(void);










extern void NOROM_AUXADCFlushFifo(void);









static inline void
AUXADCGenManualTrigger(void)
{
    (*((volatile unsigned long *)(0x400C9000 + 0x0000001C))) = 0;
}
# 323 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
static inline uint32_t
AUXADCGetFifoStatus(void)
{
    return (*((volatile unsigned long *)(0x400C9000 + 0x00000014)));
}















extern uint32_t NOROM_AUXADCReadFifo(void);













extern uint32_t NOROM_AUXADCPopFifo(void);
# 380 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
static inline void
AUXADCSelectInput(uint32_t input)
{
    SafeHapiAuxAdiSelect( ((HARD_API_T*) 0x10000048)->SelectADCCompBInput, input );
}
# 404 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern int32_t NOROM_AUXADCGetAdjustmentGain(uint32_t refSource);
# 425 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern int32_t NOROM_AUXADCGetAdjustmentOffset(uint32_t refSource);
# 446 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern int32_t NOROM_AUXADCValueToMicrovolts(int32_t fixedRefVoltage, int32_t adcValue);
# 467 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern int32_t NOROM_AUXADCMicrovoltsToValue(int32_t fixedRefVoltage, int32_t microvolts);
# 487 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern int32_t NOROM_AUXADCAdjustValueForGainAndOffset(int32_t adcValue, int32_t gain, int32_t offset);
# 509 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/CC13XXWARE/driverlib/aux_adc.h"
extern int32_t NOROM_AUXADCUnadjustValueForGainAndOffset(int32_t adcValue, int32_t gain, int32_t offset);
# 28 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/arch.h"



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
# 57 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop
# 80 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 132 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 156 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 228 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : "sp");
}
# 252 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 282 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : "sp");
}
# 306 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}
# 336 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 363 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 415 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 440 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 481 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 735 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}








__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}








__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}








__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}









__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 845 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );












  return(result);
}
# 888 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}








__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}








__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}










__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}










__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}










__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1047 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}








__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}








__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}








__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}








__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}








__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}








__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
#pragma GCC diagnostic pop
# 32 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/arch.h"






typedef uint8_t Boolean;
typedef uint16_t word;
typedef int32_t sint;
typedef int16_t wint;
typedef int32_t lint;
typedef uint8_t byte;
typedef uint32_t lword;
typedef uint32_t aword;
typedef word *address;



typedef struct {

 byte pdmode:1,
  evntpn:1,
  fstblk:1,
  ledblk:1,
  ledsts:4;

 byte ledblc,

  reqpdm,
  effpdm;

 lword ondmns;

} systat_t;

extern volatile systat_t __pi_systat;

extern char *__bss_start__, *__bss_end__;
# 121 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/arch.h"
void __pi_release () __attribute__ ((noreturn));
# 116 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/mach.h"
void tci_run_delay_timer ();
void tci_run_auxiliary_timer ();
word tci_update_delay_ticks (Boolean);
# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/uart_def.h"







# 137 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/mach.h"






typedef struct {
 uint32_t base;
 word rate;
 volatile byte flags;
} uart_t;





extern uart_t __pi_uart [];







word __pi_uart_getrate (const uart_t*);

Boolean __pi_uart_setrate (word, uart_t*);
# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/IO/pins.h"







# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/pins_sys.h"












# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Sensors/analog_sensor.h"







# 11 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/sensors_sys.h"
typedef struct {

 lword W [3];

} i_sensdesc_t;

typedef struct {

 byte tp,
  dummy;
 word nsamples;
 word adcpars [4];

} a_sensdesc_t;

typedef struct {

 byte tp, num, dummy [2];
 void (*fun_val) (word, const byte*, address);
 void (*fun_ini) ();

} d_sensdesc_t;
# 74 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/sensors_sys.h"
void __pi_batmon (word, const byte*, address);
# 12 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Sensors/sensors.h"

void read_sensor (word, sint, address);



void wait_sensor (sint, word);
# 9 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Sensors/analog_sensor.h"



void analog_sensor_read (word, const a_sensdesc_t*, address);
# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Sensors/pin_sensor.h"














void pin_sensor_init ();
void pin_sensor_read (word, const byte*, address);
# 86 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/pins_sys.h"
Boolean __pi_pin_available (word);
Boolean __pi_pin_adc_available (word);
word __pi_pin_ivalue (word);
word __pi_pin_ovalue (word);
Boolean __pi_pin_adc (word);
Boolean __pi_pin_output (word);
void __pi_pin_set (word);
void __pi_pin_clear (word);
void __pi_pin_set_input (word);
void __pi_pin_set_output (word);
void __pi_pin_set_adc (word);
# 145 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/pins_sys.h"
typedef struct {

 byte pnum:7,
  edge:1;

} piniod_t;





extern const piniod_t __input_pins [];
void __pinlist_setirq (int);
# 9 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/IO/pins.h"


# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/IO/buttons.h"







# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/buttons_sys.h"





extern const word __button_list [];
# 29 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/buttons_sys.h"
void __buttons_setirq (int);
# 9 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/IO/buttons.h"



void buttons_action (void (*action)(word));
# 193 "/home/martin/Desktop/OLSONET/PICOS/PicOS/CC13XX/mach.h"
extern void __pi_ondomain (lword), __pi_offdomain (lword);

extern lword system_event_count;
# 364 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
void root (word state);

typedef void (*fsmcode)(word);

void __pi_wait (aword, word);
void __pi_trigger (aword), __pi_ptrigger (aword, aword);
aword __pi_fork (fsmcode func, aword data);
aword __pi_join (aword, word);
void reset (void) __attribute__ ((noreturn)) ;
void halt (void) __attribute__ ((noreturn)) ;

int __pi_strlen (const char*);
void __pi_strcpy (char*, const char*);
void __pi_strncpy (char*, const char*, int);
void __pi_strcat (char*, const char*);
void __pi_strncat (char*, const char*, int);
void __pi_memcpy (char *dest, const char *src, int);
void __pi_memset (char *dest, char c, int);

extern const char __pi_hex_enc_table [];


extern const lword host_id;



aword *__pi_malloc (word);
void __pi_free (aword*);
void __pi_waitmem (word);


word __pi_memfree (address);
word __pi_maxfree (address);
# 423 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
word __pi_stackfree (void);







void __pi_syserror (word, const char*) __attribute__ ((noreturn)) ;
# 547 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
void diag (const char *, ...);







lword lrnd (void);
# 575 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
sint io (word, word, word, char*, word);








void unwait (void);


void delay (word, word);
word dleft (aword);





void kill (aword);

void killall (fsmcode);






aword running (fsmcode);
word crunning (fsmcode);

fsmcode getcode (aword);

void proceed (word);

void setpowermode (word);



void utimer_add (address), utimer_delete (address);


void __pi_utimer_set (address, word);






void udelay (word);
void mdelay (word);
# 667 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
void __pi_badstate (void);
# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/VNetI/tcv_defs.h"







typedef struct {






 word head,
  tail;
} tcvadp_t;




typedef struct {
 int (*tcv_ope) (int, int, va_list);
 int (*tcv_clo) (int, int);
 int (*tcv_rcv) (int, address, int, int*, tcvadp_t*);
 int (*tcv_frm) (address, tcvadp_t*);
 int (*tcv_out) (address);
 int (*tcv_xmt) (address);
 int (*tcv_tmt) (address);
 int tcv_info;
} tcvplug_t;




struct __tcv_qitem_s {
 struct __tcv_qitem_s *next,
    *prev;
};

typedef struct __tcv_qitem_s __tcv_qitem_t;
typedef struct __tcv_qitem_s __tcv_qhead_t;




struct __tcv_titem_s {

 struct __tcv_titem_s *next,
    *prev;
 word value;
};

typedef struct __tcv_titem_s __tcv_titem_t;

typedef struct {
 __tcv_titem_t *next,
    *prev;
} __tcv_thead_t;

typedef union {
 word value;
 struct {
  word queued:1,
   outgoing:1,
   urgent:1,
   session:7,
   plugin:3,
   phys:3;
 } b;
} __tcv_battr_t;




struct __tcv_hblock_s {



    union {
 __tcv_qitem_t bqueue;
 tcvadp_t pointers;





    } u;










 word length;




 __tcv_battr_t attributes;












};



typedef struct __tcv_hblock_s __tcv_hblock_t;

typedef struct {



 __tcv_qhead_t rqueue;



 __tcv_battr_t attpattern;














} __tcv_sesdesc_t;
# 168 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/VNetI/tcv_defs.h"
int tcv_plug (int, const tcvplug_t*);
int tcv_open (word, int, int, ...);
int tcv_close (word, int);
address tcv_rnp (word, int);
address tcv_wnps (word, int, int, Boolean);
int tcv_qsize (int, int);
int tcv_erase (int, int);
int tcv_read (address, byte*, int);
int tcv_write (address, const byte*, int);
void tcv_endp (address);
void tcv_drop (address);
int tcv_control (int, int, address);
# 728 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
extern lword entropy;
# 771 "/home/martin/Desktop/OLSONET/PICOS/PicOS/sysio.h"
typedef struct {



 word State;
 aword Event;
} __pi_event_t;

struct __pi_pcb_s {








 word Status;
 word Timer;
 fsmcode code;
 aword data;
 __pi_event_t Events [4];
 struct __pi_pcb_s *Next;
};

typedef struct __pi_pcb_s __pi_pcb_t;

extern __pi_pcb_t *__pi_curr;
# 12 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Serial/ser.h"
int ser_out (word, const char*);
int ser_in (word, char*, int);
int ser_outb (word, const char*);
# 1 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Serial/serf.h"







# 11 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Serial/form.h"
word __pi_vfparse (char*, word, const char*, va_list);
char *vform (char*, const char*, va_list);
int vscan (const char*, const char*, va_list);
char *form (char*, const char*, ...);
word fsize (const char*, ...);
int scan (const char*, const char*, ...);
# 9 "/home/martin/Desktop/OLSONET/PICOS/PicOS/PLibs/Serial/serf.h"



int ser_outf (word, const char*, ...);
int ser_inf (word, const char*, ...);
# 21 "app.cc"
int greenLed = 1;
char greenCharacter = 'G';
word greenOn = 0;
word greenOff = 0;

int redLed = 0;
char redCharacter = 'R';
word redOn = 0;
word redOff = 0;


Boolean On = 0;
Boolean displayCycle = 0;
Boolean stopProcess = 0;










word adjustTime(word time) {
    return (time * 1024)/1000;
}



#define Check_PERIOD 0
#define OFF_PERIOD 1
#define Stop 2
# 50 "app.cc"
void blinker (word __pi_st) { switch (__pi_st) { 
# 50 "app.cc"

    static int led;
    static char ch;

    static word onTime;
    static word offTime;


    static int ledFlag=0 ;

    case Check_PERIOD : __stlab_Check_PERIOD: {

        if(ledFlag == 0) {
            led = redLed;
            ch = redCharacter;
            onTime = redOn;
            offTime = redOff;
        } else {
            led = greenLed;
            ch = greenCharacter;
            onTime = greenOn;
            offTime = greenOff;
        }


        ledFlag = 1 - ledFlag;


        onTime = adjustTime(onTime);
        offTime = adjustTime(offTime);


        if (displayCycle)
            ser_outf(Check_PERIOD, "%c ", ch);

        if(onTime > 0){

            do { if ((1) == 0) { if ((led) == 0) { do { GPIO_clearDio (6); __pi_systat.ledsts &= ~(0x1); } while (0); } else if ((led) == 1) { do { GPIO_clearDio (7); __pi_systat.ledsts &= ~(0x2); } while (0); } else if ((led) == 2) { do { } while (0); } else if ((led) == 3) { do { } while (0); } } else if ((1) == 1) { if ((led) == 0) { do { GPIO_setDio (6) ; __pi_systat.ledsts &= ~(0x1); } while (0); } else if ((led) == 1) { do { GPIO_setDio (7) ; __pi_systat.ledsts &= ~(0x2); } while (0); } else if ((led) == 2) { do { } while (0); } else if ((led) == 3) { do { } while (0); } } else { if ((led) == 0) { do { GPIO_setDio (6) ; __pi_systat.ledsts |= (0x1); } while (0); } else if ((led) == 1) { do { GPIO_setDio (7) ; __pi_systat.ledsts |= (0x2); } while (0); } else if ((led) == 2) { do { } while (0); } else if ((led) == 3) { do { } while (0); } tci_run_auxiliary_timer (); } } while (0);


            delay(onTime, OFF_PERIOD);
        } else {
            proceed (OFF_PERIOD);
        }

        __pi_wait ((aword)(&On),Check_PERIOD);
        __pi_wait ((aword)(&stopProcess),Stop);
        __pi_release ();
    } case OFF_PERIOD : __stlab_OFF_PERIOD: {

        do { if ((0) == 0) { if ((led) == 0) { do { GPIO_clearDio (6); __pi_systat.ledsts &= ~(0x1); } while (0); } else if ((led) == 1) { do { GPIO_clearDio (7); __pi_systat.ledsts &= ~(0x2); } while (0); } else if ((led) == 2) { do { } while (0); } else if ((led) == 3) { do { } while (0); } } else if ((0) == 1) { if ((led) == 0) { do { GPIO_setDio (6) ; __pi_systat.ledsts &= ~(0x1); } while (0); } else if ((led) == 1) { do { GPIO_setDio (7) ; __pi_systat.ledsts &= ~(0x2); } while (0); } else if ((led) == 2) { do { } while (0); } else if ((led) == 3) { do { } while (0); } } else { if ((led) == 0) { do { GPIO_setDio (6) ; __pi_systat.ledsts |= (0x1); } while (0); } else if ((led) == 1) { do { GPIO_setDio (7) ; __pi_systat.ledsts |= (0x2); } while (0); } else if ((led) == 2) { do { } while (0); } else if ((led) == 3) { do { } while (0); } tci_run_auxiliary_timer (); } } while (0);


        if (displayCycle)
            ser_outf(Check_PERIOD, "%c ", 'F');


        if(offTime > 0)
            delay(offTime, Check_PERIOD);
        else
            proceed (Check_PERIOD);

        __pi_wait ((aword)(&On),Check_PERIOD);
        __pi_wait ((aword)(&stopProcess),Stop);
        __pi_release ();
    } case Stop : __stlab_Stop: {
        kill (0);

break; } default: __pi_badstate (); } }
#undef Check_PERIOD
#undef OFF_PERIOD
#undef Stop
# 118 "app.cc"












int processSettingsInput(char * settingsInput){
    word numbers[] = {0, 0, 0, 0};
    int numbersIndex = 0;

    word number = 0;


    for (int i = 0; i < 50; i++) {
        if(settingsInput[i] == ' ') {

            numbers[numbersIndex] = number;
            number = 0;
            numbersIndex++;
        } else if (settingsInput[i] >= '0' && settingsInput[i] <= '9') {

            number = number * 10;
            number += settingsInput[i] - 48;
        } else if(settingsInput[i] == '-') {

            return 1;
        }

        if(number < 0) {

            return 1;
        }
    }

    redOn = numbers[0];
    redOff = numbers[1];

    greenOn = numbers[2];
    greenOff = numbers[3];

    return 0;
}



#define Initial 0
#define Get_Name 1
#define Show_Menu 2
#define Get_Choice 3
#define Adjust_Intervals 4
#define Set_Intervals 5
#define Start_Blinker 6
#define View_Settings 7
#define Monitor 8
#define Await_Stop 9
#define Stop 10
# 168 "app.cc"
void root (word __pi_st) { switch (__pi_st) { 
# 168 "app.cc"


    static char username[20];

    static fsmcode blinkerCode;

    static Boolean blinkerRunning=0 ;

    case Initial : __stlab_Initial: {
        ser_outf(Initial, "Enter your name: ");

    } case Get_Name : __stlab_Get_Name: {
        ser_in(Get_Name, username, 20);

    } case Show_Menu : __stlab_Show_Menu: {
        ser_outf(Show_Menu, "Welcome %s\n\r"
"Select one of the following operations:\n\r"
"(A)djust Intervals and start\n\r"
"(S)top operation\n\r"
"(V)iew current setting\n\r"
"(M)onitor\n\r"
"Choice: ", username);

    } case Get_Choice : __stlab_Get_Choice: {
        char choice;

        ser_inf(Get_Choice, "%c", &choice);

        if (choice == 'A' || choice == 'a'){
            proceed (Adjust_Intervals);
        } else if (choice == 'S' || choice == 's') {
            proceed (Stop);
        } else if (choice == 'V' || choice == 'v') {
            proceed (View_Settings);
        } else if (choice == 'M' || choice == 'm') {
            proceed (Monitor);
        }

        proceed (Show_Menu);

    } case Adjust_Intervals : __stlab_Adjust_Intervals: {
        ser_outf(Initial, "Enter the intervals (Red ON, OFF, Green ON, OFF): ");

    } case Set_Intervals : __stlab_Set_Intervals: {
        char settings[50];

        ser_in(Set_Intervals, settings, 50);

        if(processSettingsInput(settings) != 0)
            proceed (Adjust_Intervals);

    } case Start_Blinker : __stlab_Start_Blinker: {

        if(!blinkerRunning) {

            blinkerCode = __pi_fork (blinker, 0);
            blinkerRunning = 1;
        } else {
            do { if ((0) == 0) { do { GPIO_clearDio (6); GPIO_clearDio (7); do { } while (0); do { } while (0); __pi_systat.ledsts &= ~(0xF); } while (0); } else if ((0) == 1) { do { GPIO_setDio (6); GPIO_setDio (7); do { } while (0); do { } while (0); __pi_systat.ledsts &= ~(0xF); } while (0); } else { do { GPIO_setDio (6); GPIO_setDio (7); do { } while (0); do { } while (0); __pi_systat.ledsts |= (1 | 2 | 0 | 0); } while (0); tci_run_auxiliary_timer (); } } while (0);

            killall(blinkerCode);

            sint runningNumber = crunning(blinkerCode);

            diag("Number of %d: %d", blinkerCode, runningNumber);

            __pi_trigger ((aword)(&stopProcess));

            blinkerCode = __pi_fork (blinker, 0);
            blinkerRunning = 1;
        }

        On = 1;

        __pi_trigger ((aword)(&On));

        proceed (Show_Menu);

    } case View_Settings : __stlab_View_Settings: {
        ser_outf(View_Settings, "(Red ON, OFF, Green ON, OFF) intervals: (%d, %d, %d, %d)\n\r",
            redOn,
            redOff,
            greenOn,
            greenOff
        );

        proceed (Show_Menu);

    } case Monitor : __stlab_Monitor: {
        ser_outf(Monitor, "Monitor (press S to stop): ");
        displayCycle = 1;

    } case Await_Stop : __stlab_Await_Stop: {
        char ch;
        ser_inf(Await_Stop, "%c", &ch);


        if(ch == 'S' || ch == 's'){
            displayCycle = 0;
            proceed (Show_Menu);
        }

        proceed (Monitor);

    } case Stop : __stlab_Stop: {
        On = 0;


        if(blinkerCode != 0x0) {
            killall(blinkerCode);
        }

        __pi_trigger ((aword)(&stopProcess));


        do { if ((0) == 0) { do { GPIO_clearDio (6); GPIO_clearDio (7); do { } while (0); do { } while (0); __pi_systat.ledsts &= ~(0xF); } while (0); } else if ((0) == 1) { do { GPIO_setDio (6); GPIO_setDio (7); do { } while (0); do { } while (0); __pi_systat.ledsts &= ~(0xF); } while (0); } else { do { GPIO_setDio (6); GPIO_setDio (7); do { } while (0); do { } while (0); __pi_systat.ledsts |= (1 | 2 | 0 | 0); } while (0); tci_run_auxiliary_timer (); } } while (0);

        proceed (Show_Menu);
break; } default: __pi_badstate (); } }
#undef Initial
#undef Get_Name
#undef Show_Menu
#undef Get_Choice
#undef Adjust_Intervals
#undef Set_Intervals
#undef Start_Blinker
#undef View_Settings
#undef Monitor
#undef Await_Stop
#undef Stop
# 286 "app.cc"

