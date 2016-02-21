//—„µ¥≈…¡Ù—‘∞Â by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("—„µ¥∑Á‘∆∞Ò",({"board"}));
set("location","/d/yandang/luoyan6");
set("board_id","yandang_board");
        set("long",
"—„µ¥“ª≈…º«¬ºŒ‰¡÷∑Á‘∆µƒ”¢–€∞Ò.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
