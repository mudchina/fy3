// Room: /u/xxy/room/qifodian
inherit ROOM;

void create()
{
  set ("short", "七佛殿");
  set ("long", @LONG
殿中摆着一尊卢舍那磁佛,据说是江西景德镇古窖烧制的,该佛通
高2.47米.佛座千叶莲花,身着千佛莲衣,所谓'一花一世界,千叶千如
来'是也.两壁存有宋黄庭坚书写的木刻'七佛偈'四条屏,佛龛上摆着
两条匾额(bian).
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"ningcui",
  "south" : __DIR__"huizong",
  "northup" : __DIR__"cangjinge",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "bian" : "一书'一合相',一书'两足尊',不知是什么意思.
",
]));
  setup();
  replace_program(ROOM);

}
