// woodcutter.c
inherit NPC;

string* xing=({"ÕÔ","Ç®","Ëï","Àî","ÖÜ","Îâ","Ö£","Íõ"});
string* ming=({"Ë³","²ý","Õñ","·¢","²Æ","¿¡","Ñå","Á¼","Ö¾","ÖÒ",
	"Ð¢","ÐÛ","Òæ","Ìí","½ð","»Ô","³¤","Ê¢","Ê¤","½ø","°²","¸£","Í¬","Âú",
	"¸»","Íò","Áú","Â¡","Ïé","¶°","¹ú","ÒÚ","ÊÙ" });

void create()
{
	string name;
	int level,exp;
	name=xing[random(sizeof(xing))];
	name +=ming[random(sizeof(ming))];
	if(random(10)>5)	name +=ming[random(sizeof(ming))];
	level=60+random(6);
	exp=250000;
	set_name(name,({"nandizi","nan dizi","dizi"}));
	set("gender", "ÄÐÐÔ" );
	set("age",20+random(20));
	set("long","ÕýÔÚ¿àÁ·Îä¹¦µÄÃ·×¯ÄÐµÜ×Ó¡£\n");
	set("title","¹ÂÉ½Ã·×¯");
	set("combat_exp",exp);
	set("str", 30);
	set("mingwang",1);
	set_temp("apply/attack",10+random(5));
	set_skill("unarmed",level);
	set_skill("dodge",level);
	set_skill("parry",level);
	set_skill("xuantian-bu",level);
	set_skill("xuantian-quan",level);
	map_skill("dodge","xuantian-bu");
	map_skill("unarmed","xuantian-quan");
	map_skill("parry","jiangjun-zhang");
	set("max_force",1000);
	set("force",1000);
	set_skill("jiangjun-zhang",level);
	set_skill("staff",level);
	map_skill("staff","feijiangjunshi-zhang");
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object(__DIR__"obj/zhuzhang")->wield();
	add_money("silver",10);
}
