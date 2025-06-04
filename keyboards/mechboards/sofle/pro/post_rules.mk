# include keyboards/mechboards/common/post_rules.mk
ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += display_oled.c
endif
