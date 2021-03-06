// Room: /u/xxy/room/zhuling
inherit ROOM;

void create()
{
  set ("short", "竹林");
  set ("long", @LONG
钻过裂缝,眼前是一片苍翠欲滴的箭竹林,清晨的朝露还在叶尖上
盈盈闪亮,百灵的叫声已在林中回绕,一片雾带在脚下环绕,你可以在
这用竹子作(make)把竹剑,或竹刀,也可以摘(zhai)下竹叶.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yixiant",
]));
set("outdoors","/d/emei");
  setup();
}
void init()
{
	add_action("do_make", "make");
	add_action("do_zhai", "zhai");
}

int do_make(string arg)
{
    if(!arg) return 0;
    if(arg=="竹剑")  
    {message_vision("$N用力折下一段竹子,用牙咬成一把剑的模样！\n", this_player());
clone_object("/d/emei/obj/zhujian")->move(this_player()); 
    return 1;}
    if(arg=="竹刀")
    { message_vision("$N用力折下一段竹子,用牙咬成一把刀的模样！\n", this_player());
clone_object("/d/emei/obj/zhudao")->move(this_player());
return 1;}
return 0;
}
int do_zhai(string arg)
{    if(arg!="竹叶") return 0;
    message_vision("$N下蹲,猛地蹿起,随着'啪'的一声,$N摔倒在地,手中还抓着一片竹叶！\n", this_player());
clone_object("/d/emei/obj/zhuye")->move(this_player()); 
   return 1;
}
