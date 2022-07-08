/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef SOC_MEDIATEK_RTC_REG_COMMON_H
#define SOC_MEDIATEK_RTC_REG_COMMON_H

/* RTC registers */
enum {
	RTC_BBPU = 0x0588,
	RTC_IRQ_STA = 0x058A,
	RTC_IRQ_EN = 0x058C,
	RTC_CII_EN = 0x058E,
};

enum {
	RTC_TC_SEC = 0x0592,
	RTC_TC_MIN = 0x0594,
	RTC_TC_HOU = 0x0596,
	RTC_TC_DOM = 0x0598,
	RTC_TC_DOW = 0x059A,
	RTC_TC_MTH = 0x059C,
	RTC_TC_YEA = 0x059E,
};

enum {
	RTC_AL_SEC = 0x05A0,
	RTC_AL_MIN = 0x05A2,
	RTC_AL_HOU = 0x05A4,
	RTC_AL_DOM = 0x05A6,
	RTC_AL_DOW = 0x05A8,
	RTC_AL_MTH = 0x05AA,
	RTC_AL_YEA = 0x05AC,
	RTC_AL_MASK = 0x0590,
};

enum {
	RTC_OSC32CON = 0x05AE,
	RTC_CON = 0x05C4,
	RTC_WRTGR = 0x05C2,
};

enum {
	RTC_POWERKEY1 = 0x05B0,
	RTC_POWERKEY2 = 0x05B2,
};

enum {
	RTC_PDN1 = 0x05B4,
	RTC_PDN2 = 0x05B6,
	RTC_SPAR0 = 0x05B8,
	RTC_SPAR1 = 0x05BA,
	RTC_PROT = 0x05BC,
	RTC_DIFF = 0x05BE,
	RTC_CALI = 0x05C0,
};

enum {
	RTC_CON_VBAT_LPSTA_RAW	= 1U << 0,
	RTC_CON_EOSC32_LPEN	= 1U << 1,
	RTC_CON_XOSC32_LPEN	= 1U << 2,
	RTC_CON_LPRST		= 1U << 3,
	RTC_CON_CDBO		= 1U << 4,
	RTC_CON_F32KOB		= 1U << 5,
	RTC_CON_GPO		= 1U << 6,
	RTC_CON_GOE		= 1U << 7,
	RTC_CON_GSR		= 1U << 8,
	RTC_CON_GSMT		= 1U << 9,
	RTC_CON_GPEN		= 1U << 10,
	RTC_CON_GPU		= 1U << 11,
	RTC_CON_GE4		= 1U << 12,
	RTC_CON_GE8		= 1U << 13,
	RTC_CON_GPI		= 1U << 14,
	RTC_CON_LPSTA_RAW	= 1U << 15,
};

enum {
	RTC_LPD_OPT_XOSC_AND_EOSC_LPD	= 0U << 13,
	RTC_LPD_OPT_EOSC_LPD		= 1U << 13,
	RTC_LPD_OPT_XOSC_LPD		= 2U << 13,
	RTC_LPD_OPT_F32K_CK_ALIVE	= 3U << 13,
	RTC_LPD_OPT_MASK		= 3U << 13,
};

/* PMIC TOP Register Definition */
enum {
	PMIC_RG_SCK_TOP_CON0 = 0x050C,
};

/* PMIC TOP Register Definition */
enum {
	PMIC_RG_TOP_CKPDN_CON0 = 0x010C,
	PMIC_RG_TOP_CKPDN_CON0_SET = 0x010E,
	PMIC_RG_TOP_CKPDN_CON0_CLR = 0x0110,
	PMIC_RG_TOP_CKPDN_CON1 = 0x0112,
	PMIC_RG_TOP_CKPDN_CON1_SET = 0x0114,
	PMIC_RG_TOP_CKPDN_CON1_CLR = 0x0116,
	PMIC_RG_TOP_CKSEL_CON0 = 0x0118,
	PMIC_RG_TOP_CKSEL_CON0_SET = 0x011A,
	PMIC_RG_TOP_CKSEL_CON0_CLR = 0x011C,
};

enum {
	PMIC_RG_FQMTR_32K_CK_PDN_SHIFT = 10,
	PMIC_RG_FQMTR_CK_PDN_SHIFT = 11,
};

enum {
	PMIC_FQMTR_RST_SHIFT = 8,
};

enum {
	PMIC_FQMTR_CON0_XOSC32_CK	= 0U << 0,
	PMIC_FQMTR_CON0_DCXO_F32K_CK	= 1U << 0,
	PMIC_FQMTR_CON0_EOSC32_CK	= 2U << 0,
	PMIC_FQMTR_CON0_XOSC32_CK_DETECTON = 3U << 0,
	PMIC_FQMTR_CON0_FQM26M_CK	= 4U << 0,
	PMIC_FQMTR_CON0_FQM32k_CK	= 5U << 0,
	PMIC_FQMTR_CON0_TEST_CK		= 6U << 0,
	PMIC_FQMTR_CON0_TCKSEL_MASK	= 7U << 0,
	PMIC_FQMTR_CON0_BUSY		= 1U << 3,
	PMIC_FQMTR_CON0_DCXO26M_EN	= 1U << 4,
	PMIC_FQMTR_CON0_FQMTR_EN	= 1U << 15,
};

enum {
	RTC_FQMTR_LOW_BASE = 794 - 2,
	RTC_FQMTR_HIGH_BASE = 794 + 2,
};

enum {
	RTC_XOSCCALI_START = 0x00,
	RTC_XOSCCALI_END = 0x1f,
};

#endif /* SOC_MEDIATEK_RTC_REG_COMMON_H */