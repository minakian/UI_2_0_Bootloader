;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.1
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; Blue_LED
Blue_LED__0__DR EQU CYREG_GPIO_PRT1_DR
Blue_LED__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Blue_LED__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Blue_LED__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Blue_LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Blue_LED__0__HSIOM_MASK EQU 0x00000F00
Blue_LED__0__HSIOM_SHIFT EQU 8
Blue_LED__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Blue_LED__0__INTR EQU CYREG_GPIO_PRT1_INTR
Blue_LED__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Blue_LED__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Blue_LED__0__MASK EQU 0x04
Blue_LED__0__PC EQU CYREG_GPIO_PRT1_PC
Blue_LED__0__PC2 EQU CYREG_GPIO_PRT1_PC2
Blue_LED__0__PORT EQU 1
Blue_LED__0__PS EQU CYREG_GPIO_PRT1_PS
Blue_LED__0__SHIFT EQU 2
Blue_LED__DR EQU CYREG_GPIO_PRT1_DR
Blue_LED__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Blue_LED__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Blue_LED__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Blue_LED__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Blue_LED__INTR EQU CYREG_GPIO_PRT1_INTR
Blue_LED__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Blue_LED__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Blue_LED__MASK EQU 0x04
Blue_LED__PC EQU CYREG_GPIO_PRT1_PC
Blue_LED__PC2 EQU CYREG_GPIO_PRT1_PC2
Blue_LED__PORT EQU 1
Blue_LED__PS EQU CYREG_GPIO_PRT1_PS
Blue_LED__SHIFT EQU 2

; Bootload_EN
Bootload_EN__0__DR EQU CYREG_GPIO_PRT0_DR
Bootload_EN__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
Bootload_EN__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
Bootload_EN__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
Bootload_EN__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
Bootload_EN__0__HSIOM_MASK EQU 0x0F000000
Bootload_EN__0__HSIOM_SHIFT EQU 24
Bootload_EN__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
Bootload_EN__0__INTR EQU CYREG_GPIO_PRT0_INTR
Bootload_EN__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
Bootload_EN__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
Bootload_EN__0__MASK EQU 0x40
Bootload_EN__0__PC EQU CYREG_GPIO_PRT0_PC
Bootload_EN__0__PC2 EQU CYREG_GPIO_PRT0_PC2
Bootload_EN__0__PORT EQU 0
Bootload_EN__0__PS EQU CYREG_GPIO_PRT0_PS
Bootload_EN__0__SHIFT EQU 6
Bootload_EN__DR EQU CYREG_GPIO_PRT0_DR
Bootload_EN__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
Bootload_EN__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
Bootload_EN__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
Bootload_EN__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
Bootload_EN__INTR EQU CYREG_GPIO_PRT0_INTR
Bootload_EN__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
Bootload_EN__INTSTAT EQU CYREG_GPIO_PRT0_INTR
Bootload_EN__MASK EQU 0x40
Bootload_EN__PC EQU CYREG_GPIO_PRT0_PC
Bootload_EN__PC2 EQU CYREG_GPIO_PRT0_PC2
Bootload_EN__PORT EQU 0
Bootload_EN__PS EQU CYREG_GPIO_PRT0_PS
Bootload_EN__SHIFT EQU 6

; I2C
I2C_SCB__CTRL EQU CYREG_SCB1_CTRL
I2C_SCB__EZ_DATA0 EQU CYREG_SCB1_EZ_DATA0
I2C_SCB__EZ_DATA1 EQU CYREG_SCB1_EZ_DATA1
I2C_SCB__EZ_DATA10 EQU CYREG_SCB1_EZ_DATA10
I2C_SCB__EZ_DATA11 EQU CYREG_SCB1_EZ_DATA11
I2C_SCB__EZ_DATA12 EQU CYREG_SCB1_EZ_DATA12
I2C_SCB__EZ_DATA13 EQU CYREG_SCB1_EZ_DATA13
I2C_SCB__EZ_DATA14 EQU CYREG_SCB1_EZ_DATA14
I2C_SCB__EZ_DATA15 EQU CYREG_SCB1_EZ_DATA15
I2C_SCB__EZ_DATA16 EQU CYREG_SCB1_EZ_DATA16
I2C_SCB__EZ_DATA17 EQU CYREG_SCB1_EZ_DATA17
I2C_SCB__EZ_DATA18 EQU CYREG_SCB1_EZ_DATA18
I2C_SCB__EZ_DATA19 EQU CYREG_SCB1_EZ_DATA19
I2C_SCB__EZ_DATA2 EQU CYREG_SCB1_EZ_DATA2
I2C_SCB__EZ_DATA20 EQU CYREG_SCB1_EZ_DATA20
I2C_SCB__EZ_DATA21 EQU CYREG_SCB1_EZ_DATA21
I2C_SCB__EZ_DATA22 EQU CYREG_SCB1_EZ_DATA22
I2C_SCB__EZ_DATA23 EQU CYREG_SCB1_EZ_DATA23
I2C_SCB__EZ_DATA24 EQU CYREG_SCB1_EZ_DATA24
I2C_SCB__EZ_DATA25 EQU CYREG_SCB1_EZ_DATA25
I2C_SCB__EZ_DATA26 EQU CYREG_SCB1_EZ_DATA26
I2C_SCB__EZ_DATA27 EQU CYREG_SCB1_EZ_DATA27
I2C_SCB__EZ_DATA28 EQU CYREG_SCB1_EZ_DATA28
I2C_SCB__EZ_DATA29 EQU CYREG_SCB1_EZ_DATA29
I2C_SCB__EZ_DATA3 EQU CYREG_SCB1_EZ_DATA3
I2C_SCB__EZ_DATA30 EQU CYREG_SCB1_EZ_DATA30
I2C_SCB__EZ_DATA31 EQU CYREG_SCB1_EZ_DATA31
I2C_SCB__EZ_DATA4 EQU CYREG_SCB1_EZ_DATA4
I2C_SCB__EZ_DATA5 EQU CYREG_SCB1_EZ_DATA5
I2C_SCB__EZ_DATA6 EQU CYREG_SCB1_EZ_DATA6
I2C_SCB__EZ_DATA7 EQU CYREG_SCB1_EZ_DATA7
I2C_SCB__EZ_DATA8 EQU CYREG_SCB1_EZ_DATA8
I2C_SCB__EZ_DATA9 EQU CYREG_SCB1_EZ_DATA9
I2C_SCB__I2C_CFG EQU CYREG_SCB1_I2C_CFG
I2C_SCB__I2C_CTRL EQU CYREG_SCB1_I2C_CTRL
I2C_SCB__I2C_M_CMD EQU CYREG_SCB1_I2C_M_CMD
I2C_SCB__I2C_S_CMD EQU CYREG_SCB1_I2C_S_CMD
I2C_SCB__I2C_STATUS EQU CYREG_SCB1_I2C_STATUS
I2C_SCB__INTR_CAUSE EQU CYREG_SCB1_INTR_CAUSE
I2C_SCB__INTR_I2C_EC EQU CYREG_SCB1_INTR_I2C_EC
I2C_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB1_INTR_I2C_EC_MASK
I2C_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB1_INTR_I2C_EC_MASKED
I2C_SCB__INTR_M EQU CYREG_SCB1_INTR_M
I2C_SCB__INTR_M_MASK EQU CYREG_SCB1_INTR_M_MASK
I2C_SCB__INTR_M_MASKED EQU CYREG_SCB1_INTR_M_MASKED
I2C_SCB__INTR_M_SET EQU CYREG_SCB1_INTR_M_SET
I2C_SCB__INTR_RX EQU CYREG_SCB1_INTR_RX
I2C_SCB__INTR_RX_MASK EQU CYREG_SCB1_INTR_RX_MASK
I2C_SCB__INTR_RX_MASKED EQU CYREG_SCB1_INTR_RX_MASKED
I2C_SCB__INTR_RX_SET EQU CYREG_SCB1_INTR_RX_SET
I2C_SCB__INTR_S EQU CYREG_SCB1_INTR_S
I2C_SCB__INTR_S_MASK EQU CYREG_SCB1_INTR_S_MASK
I2C_SCB__INTR_S_MASKED EQU CYREG_SCB1_INTR_S_MASKED
I2C_SCB__INTR_S_SET EQU CYREG_SCB1_INTR_S_SET
I2C_SCB__INTR_SPI_EC EQU CYREG_SCB1_INTR_SPI_EC
I2C_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB1_INTR_SPI_EC_MASK
I2C_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB1_INTR_SPI_EC_MASKED
I2C_SCB__INTR_TX EQU CYREG_SCB1_INTR_TX
I2C_SCB__INTR_TX_MASK EQU CYREG_SCB1_INTR_TX_MASK
I2C_SCB__INTR_TX_MASKED EQU CYREG_SCB1_INTR_TX_MASKED
I2C_SCB__INTR_TX_SET EQU CYREG_SCB1_INTR_TX_SET
I2C_SCB__RX_CTRL EQU CYREG_SCB1_RX_CTRL
I2C_SCB__RX_FIFO_CTRL EQU CYREG_SCB1_RX_FIFO_CTRL
I2C_SCB__RX_FIFO_RD EQU CYREG_SCB1_RX_FIFO_RD
I2C_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB1_RX_FIFO_RD_SILENT
I2C_SCB__RX_FIFO_STATUS EQU CYREG_SCB1_RX_FIFO_STATUS
I2C_SCB__RX_MATCH EQU CYREG_SCB1_RX_MATCH
I2C_SCB__SPI_CTRL EQU CYREG_SCB1_SPI_CTRL
I2C_SCB__SPI_STATUS EQU CYREG_SCB1_SPI_STATUS
I2C_SCB__SS0_POSISTION EQU 0
I2C_SCB__SS1_POSISTION EQU 1
I2C_SCB__SS2_POSISTION EQU 2
I2C_SCB__SS3_POSISTION EQU 3
I2C_SCB__STATUS EQU CYREG_SCB1_STATUS
I2C_SCB__TX_CTRL EQU CYREG_SCB1_TX_CTRL
I2C_SCB__TX_FIFO_CTRL EQU CYREG_SCB1_TX_FIFO_CTRL
I2C_SCB__TX_FIFO_STATUS EQU CYREG_SCB1_TX_FIFO_STATUS
I2C_SCB__TX_FIFO_WR EQU CYREG_SCB1_TX_FIFO_WR
I2C_SCB__UART_CTRL EQU CYREG_SCB1_UART_CTRL
I2C_SCB__UART_FLOW_CTRL EQU CYREG_SCB1_UART_FLOW_CTRL
I2C_SCB__UART_RX_CTRL EQU CYREG_SCB1_UART_RX_CTRL
I2C_SCB__UART_RX_STATUS EQU CYREG_SCB1_UART_RX_STATUS
I2C_SCB__UART_TX_CTRL EQU CYREG_SCB1_UART_TX_CTRL
I2C_SCB_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0P_ICER
I2C_SCB_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0P_ICPR
I2C_SCB_IRQ__INTC_MASK EQU 0x100
I2C_SCB_IRQ__INTC_NUMBER EQU 8
I2C_SCB_IRQ__INTC_PRIOR_MASK EQU 0xC0
I2C_SCB_IRQ__INTC_PRIOR_NUM EQU 3
I2C_SCB_IRQ__INTC_PRIOR_REG EQU CYREG_CM0P_IPR2
I2C_SCB_IRQ__INTC_SET_EN_REG EQU CYREG_CM0P_ISER
I2C_SCB_IRQ__INTC_SET_PD_REG EQU CYREG_CM0P_ISPR
I2C_SCBCLK__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL1
I2C_SCBCLK__DIV_ID EQU 0x00000040
I2C_SCBCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
I2C_SCBCLK__PA_DIV_ID EQU 0x000000FF
I2C_scl__0__DR EQU CYREG_GPIO_PRT3_DR
I2C_scl__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
I2C_scl__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
I2C_scl__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
I2C_scl__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
I2C_scl__0__HSIOM_GPIO EQU 0
I2C_scl__0__HSIOM_I2C EQU 14
I2C_scl__0__HSIOM_I2C_SCL EQU 14
I2C_scl__0__HSIOM_MASK EQU 0x0000000F
I2C_scl__0__HSIOM_SHIFT EQU 0
I2C_scl__0__HSIOM_SPI EQU 15
I2C_scl__0__HSIOM_SPI_MOSI EQU 15
I2C_scl__0__HSIOM_UART EQU 9
I2C_scl__0__HSIOM_UART_RX EQU 9
I2C_scl__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_scl__0__INTR EQU CYREG_GPIO_PRT3_INTR
I2C_scl__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_scl__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
I2C_scl__0__MASK EQU 0x01
I2C_scl__0__PC EQU CYREG_GPIO_PRT3_PC
I2C_scl__0__PC2 EQU CYREG_GPIO_PRT3_PC2
I2C_scl__0__PORT EQU 3
I2C_scl__0__PS EQU CYREG_GPIO_PRT3_PS
I2C_scl__0__SHIFT EQU 0
I2C_scl__DR EQU CYREG_GPIO_PRT3_DR
I2C_scl__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
I2C_scl__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
I2C_scl__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
I2C_scl__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_scl__INTR EQU CYREG_GPIO_PRT3_INTR
I2C_scl__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_scl__INTSTAT EQU CYREG_GPIO_PRT3_INTR
I2C_scl__MASK EQU 0x01
I2C_scl__PC EQU CYREG_GPIO_PRT3_PC
I2C_scl__PC2 EQU CYREG_GPIO_PRT3_PC2
I2C_scl__PORT EQU 3
I2C_scl__PS EQU CYREG_GPIO_PRT3_PS
I2C_scl__SHIFT EQU 0
I2C_sda__0__DR EQU CYREG_GPIO_PRT3_DR
I2C_sda__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
I2C_sda__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
I2C_sda__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
I2C_sda__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
I2C_sda__0__HSIOM_GPIO EQU 0
I2C_sda__0__HSIOM_I2C EQU 14
I2C_sda__0__HSIOM_I2C_SDA EQU 14
I2C_sda__0__HSIOM_MASK EQU 0x000000F0
I2C_sda__0__HSIOM_SHIFT EQU 4
I2C_sda__0__HSIOM_SPI EQU 15
I2C_sda__0__HSIOM_SPI_MISO EQU 15
I2C_sda__0__HSIOM_UART EQU 9
I2C_sda__0__HSIOM_UART_TX EQU 9
I2C_sda__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_sda__0__INTR EQU CYREG_GPIO_PRT3_INTR
I2C_sda__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_sda__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
I2C_sda__0__MASK EQU 0x02
I2C_sda__0__PC EQU CYREG_GPIO_PRT3_PC
I2C_sda__0__PC2 EQU CYREG_GPIO_PRT3_PC2
I2C_sda__0__PORT EQU 3
I2C_sda__0__PS EQU CYREG_GPIO_PRT3_PS
I2C_sda__0__SHIFT EQU 1
I2C_sda__DR EQU CYREG_GPIO_PRT3_DR
I2C_sda__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
I2C_sda__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
I2C_sda__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
I2C_sda__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_sda__INTR EQU CYREG_GPIO_PRT3_INTR
I2C_sda__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
I2C_sda__INTSTAT EQU CYREG_GPIO_PRT3_INTR
I2C_sda__MASK EQU 0x02
I2C_sda__PC EQU CYREG_GPIO_PRT3_PC
I2C_sda__PC2 EQU CYREG_GPIO_PRT3_PC2
I2C_sda__PORT EQU 3
I2C_sda__PS EQU CYREG_GPIO_PRT3_PS
I2C_sda__SHIFT EQU 1

; Red_LED
Red_LED__0__DR EQU CYREG_GPIO_PRT1_DR
Red_LED__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Red_LED__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Red_LED__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Red_LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Red_LED__0__HSIOM_MASK EQU 0x0000000F
Red_LED__0__HSIOM_SHIFT EQU 0
Red_LED__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Red_LED__0__INTR EQU CYREG_GPIO_PRT1_INTR
Red_LED__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Red_LED__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Red_LED__0__MASK EQU 0x01
Red_LED__0__PC EQU CYREG_GPIO_PRT1_PC
Red_LED__0__PC2 EQU CYREG_GPIO_PRT1_PC2
Red_LED__0__PORT EQU 1
Red_LED__0__PS EQU CYREG_GPIO_PRT1_PS
Red_LED__0__SHIFT EQU 0
Red_LED__DR EQU CYREG_GPIO_PRT1_DR
Red_LED__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Red_LED__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Red_LED__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Red_LED__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Red_LED__INTR EQU CYREG_GPIO_PRT1_INTR
Red_LED__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Red_LED__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Red_LED__MASK EQU 0x01
Red_LED__PC EQU CYREG_GPIO_PRT1_PC
Red_LED__PC2 EQU CYREG_GPIO_PRT1_PC2
Red_LED__PORT EQU 1
Red_LED__PS EQU CYREG_GPIO_PRT1_PS
Red_LED__SHIFT EQU 0

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_BOOTLOADER_APPLICATIONS EQU 1
CYDEV_BOOTLOADER_CHECKSUM_BASIC EQU 0
CYDEV_BOOTLOADER_CHECKSUM_CRC EQU 1
CYDEV_BOOTLOADER_IO_COMP_CUSTOM_IO EQU 0
CyBtldr_Custom_Interface EQU CYDEV_BOOTLOADER_IO_COMP_CUSTOM_IO
CYDEV_BOOTLOADER_IO_COMP_I2C EQU 2
CyBtldr_I2C EQU CYDEV_BOOTLOADER_IO_COMP_I2C
CYDEV_BOOTLOADER_IO_COMP EQU CYDEV_BOOTLOADER_IO_COMP_I2C
CYDEV_BOOTLOADER_IO_COMP_LAUNCHER_ONLY EQU 1
CyBtldr_LAUNCHER_ONLY EQU CYDEV_BOOTLOADER_IO_COMP_LAUNCHER_ONLY
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 16
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x190B11A9
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 16
CYDEV_CHIP_MEMBER_4D EQU 12
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 17
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 15
CYDEV_CHIP_MEMBER_4I EQU 21
CYDEV_CHIP_MEMBER_4J EQU 13
CYDEV_CHIP_MEMBER_4K EQU 14
CYDEV_CHIP_MEMBER_4L EQU 20
CYDEV_CHIP_MEMBER_4M EQU 19
CYDEV_CHIP_MEMBER_4N EQU 9
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 18
CYDEV_CHIP_MEMBER_4Q EQU 11
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 22
CYDEV_CHIP_MEMBER_FM3 EQU 26
CYDEV_CHIP_MEMBER_FM4 EQU 27
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 23
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 24
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 25
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4J
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 0
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4J_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 8
CYDEV_DFT_SELECT_CLK1 EQU 9
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 1
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 0
CYIPBLOCK_m0s8cpussv3_VERSION EQU 1
CYIPBLOCK_m0s8csdv2_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8srsslt_VERSION EQU 1
CYDEV_BOOTLOADER_ENABLE EQU 1
    ENDIF
    END