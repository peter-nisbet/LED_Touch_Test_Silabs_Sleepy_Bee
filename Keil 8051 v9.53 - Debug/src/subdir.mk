################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
A51_UPPER_SRCS += \
../src/SILABS_STARTUP.A51 

C_SRCS += \
../src/InitDevice.c \
../src/LED_Test_7Seg_main.c 

OBJS += \
./src/InitDevice.OBJ \
./src/LED_Test_7Seg_main.OBJ \
./src/SILABS_STARTUP.OBJ 


# Each subdirectory must supply rules for building sources it contributes
src/%.OBJ: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

src/InitDevice.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/EFM8SB1/inc/SI_EFM8SB1_Register_Enums.h C:/Users/pnisbet/Documents/Silabs_Workspace/LED_Test_7Seg/inc/InitDevice.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Lib/efm8_capsense/cslib.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/EFM8SB1/inc/SI_EFM8SB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Lib/efm8_capsense/si_toolchain_select.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/shared/si8051Base/stdbool.h

src/LED_Test_7Seg_main.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/EFM8SB1/inc/SI_EFM8SB1_Register_Enums.h C:/Users/pnisbet/Documents/Silabs_Workspace/LED_Test_7Seg/inc/InitDevice.h C:/Users/pnisbet/Documents/Silabs_Workspace/LED_Test_7Seg/inc/config/cslib_config.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Lib/efm8_capsense/cslib.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/EFM8SB1/inc/SI_EFM8SB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Lib/efm8_capsense/si_toolchain_select.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.9/Device/shared/si8051Base/stdbool.h

src/%.OBJ: ../src/%.A51
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Assembler'
	AX51 "@$(patsubst %.OBJ,%.__ia,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '


