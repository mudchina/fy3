// music   yangzhou's 李逵

inherit NPC;

void create()
{
	set_name("李逵", ({ "likui", "li", "li kui" }) );
	set("gender", "男性" );
	set("age", 40);
        set("title","赌场保镖");
	set("long",
		"李逵瞪了你一眼，冷笑了一声。\n");
	set("mingwang", -1);
	set("combat_exp", 80000);
        set("int", 31);
        set_skill("unarmed",100);
        set_skill("dodge",40);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}
void init()
{
add_action("do_ddd","ddd");
add_action("do_eee","eee");
}
string do_ddd()
{
string str;
int i;
str = ""; /* 在此, str 以字串的零值初始化 */
for(i=0; i<6; i++) {
switch(random(3)+1) {
case 1: str += "bing"; break;
case 2: str += "borg"; break;
case 3: str += "foo"; break;
}
if(i==5) str += ".\n";
else str += " ";
}
write(capitalize(str));
}

void do_eee()
{
string str;
int ver;
str=query("id");
ver=id(str);
write(ver);
}
