inherit BULLETIN_BOARD;

void create()
{
	set_name("公告栏",({ "board"}));
	set("location","/d/zhongzhou/gonggao");
	set("read_only",1);
	set("board_id", "gonggao");
        set("long",
		"「铁血江湖」最新通告栏，江湖上发生的所有变动，都会在此找到。\n");
        setup();
	set("capacity",100);
        replace_program(BULLETIN_BOARD);
}
