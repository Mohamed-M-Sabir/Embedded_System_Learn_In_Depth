################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
TEST.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
TEST.list \

OBJCOPY_BIN += \
TEST.bin \


# All Target
all: TEST.elf secondary-outputs

# Tool invocations
TEST.elf: $(OBJS) $(USER_OBJS) C:\Users\Mohamed\ Saber\OneDrive\Desktop\Learn_In_Depth\labs\embedded_diploma\Embedded_System_Learn_In_Depth\Embedded_C\Unit_3_Lesson_1_stm_wrkspace\TEST\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "TEST.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Mohamed Saber\OneDrive\Desktop\Learn_In_Depth\labs\embedded_diploma\Embedded_System_Learn_In_Depth\Embedded_C\Unit_3_Lesson_1_stm_wrkspace\TEST\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="TEST.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

TEST.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "TEST.list"
	@echo 'Finished building: $@'
	@echo ' '

TEST.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "TEST.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
