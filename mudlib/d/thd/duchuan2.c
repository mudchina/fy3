// thd:duchuan2.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
	set("short", "渡船");
	set("long", @LONG
这是一艘渡海用的木船。虽然他看起来很小，似乎一点也经不起风浪
，但实际上它十分坚固，再大的风浪也别想打散它。小船的舱中摆满了干
粮和清水，看来你是用不着担心安全了。船尾有一个中年哑仆在掌着舵，
看他的姿势也是老手。
LONG
	);

	set("exits", ([ /* sizeof() == 0 */
]));
	set("no_fight", 1);
	setup();
	replace_program(ROOM);
}

