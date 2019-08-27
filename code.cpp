#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int tot = 0, cnt[30];
double p;
string sample[1005];
string word;
string text = "";

void code(string &ciper, int k)
{
		int len = ciper.length();
		for (int i = 0; i < len; i++)
		{
			if (ciper[i] >= 'A' && ciper[i] <= 'Z')
				ciper[i] = 'A' + (ciper[i] - 'A' + k)%26;
			else if (ciper[i] >= 'a' && ciper[i] <= 'z')
				ciper[i] = 'a' + (ciper[i] - 'a' + k)%26;
			else 
				ciper[i] = ciper[i];
		}
}

bool find(string str)
{
	for (int i = 0; i < 1000; i++)
		if (str == sample[i])
			return true;
	return false;
}

int main()
{	
	freopen("CipherText.txt", "r", stdin);
	freopen("PlainText.txt", "w", stdout);

	
	sample[0]="the",sample[1]="of",sample[2]="to",sample[3]="and",sample[4]="a",sample[5]="in",sample[6]="that",sample[7]="was",sample[8]="his",sample[9]="for",sample[10]="with",sample[11]="he",sample[12]="had",sample[13]="on",sample[14]="as",sample[15]="by",sample[16]="The",sample[17]="it",sample[18]="said",sample[19]="is",sample[20]="an",sample[21]="have",sample[22]="be",sample[23]="its",sample[24]="Johnson",sample[25]="at",sample[26]="from",sample[27]="would",sample[28]="him",sample[29]="not",sample[30]="they",sample[31]="but",sample[32]="this",sample[33]="their",sample[34]="who",sample[35]="up",sample[36]="which",sample[37]="been",sample[38]="grow",sample[39]="has",sample[40]="were",sample[41]="more",sample[42]="one",sample[43]="In",sample[44]="time",sample[45]="could",sample[46]="first",sample[47]="He",sample[48]="Jos",sample[49]="years",sample[50]="Buendía",sample[51]="into",sample[52]="book",sample[53]="them",sample[54]="where",sample[55]="state",sample[56]="city",sample[57]="will",sample[58]="year",sample[59]="Pittsburgh",sample[60]="some",sample[61]="all",sample[62]="last",sample[63]="I",sample[64]="other",sample[65]="than",sample[66]="two",sample[67]="are",sample[68]="out",sample[69]="only",sample[70]="just",sample[71]="so",sample[72]="back",sample[73]="like",sample[74]="most",sample[75]="people",sample[76]="become",sample[77]="season",sample[78]="when",sample[79]="about",sample[80]="also",sample[81]="say",sample[82]="over",sample[83]="get",sample[84]="village",sample[85]="new",sample[86]="But",sample[87]="did",sample[88]="It",sample[89]="Oklahoma",sample[90]="Brazil",sample[91]="trade",sample[92]="put",sample[93]="no",sample[94]="public",sample[95]="Melquíades",sample[96]="case",sample[97]="her",sample[98]="million",sample[99]="climate",sample[100]="set",sample[101]="lost",sample[102]="what",sample[103]="without",sample[104]="went",sample[105]="if",sample[106]="carbon",sample[107]="during",sample[108]="Judge",sample[109]="world",sample[110]="there",sample[111]="found",sample[112]="same",sample[113]="Point",sample[114]="built",sample[115]="she",sample[116]="made",sample[117]="down",sample[118]="while",sample[119]="A",sample[120]="own",sample[121]="himself",sample[122]="after",sample[123]="majority",sample[124]="work",sample[125]="we",sample[126]="change",sample[127]="won",sample[128]="our",sample[129]="countries",sample[130]="U.S",sample[131]="through",sample[132]="opioids",sample[133]="you",sample[134]="days",sample[135]="because",sample[136]="until",sample[137]="between",sample[138]="Cade",sample[139]="federal",sample[140]="began",sample[141]="lot",sample[142]="house",sample[143]="Monday",sample[144]="long",sample[145]="room",sample[146]="way",sample[147]="President",sample[148]="rain",sample[149]="several",sample[150]="storm",sample[151]="man",sample[152]="billion",sample[153]="Center",sample[154]="As",sample[155]="Renaissance",sample[156]="or",sample[157]="make",sample[158]="against",sample[159]="Sanders",sample[160]="going",sample[161]="four",sample[162]="men",sample[163]="Macron",sample[164]="such",sample[165]="final",sample[166]="take",sample[167]="plans",sample[168]="Balkman",sample[169]="health",sample[170]="even",sample[171]="region",sample[172]="week",sample[173]="great",sample[174]="place",sample[175]="small",sample[176]="along",sample[177]="game",sample[178]="gypsy",sample[179]="many",sample[180]="life",sample[181]="can",sample[182]="system",sample[183]="past",sample[184]="always",sample[185]="enough",sample[186]="next",sample[187]="water",sample[188]="Macondo",sample[189]="part",sample[190]="got",sample[191]="center",sample[192]="company",sample[193]="Canaveral",sample[194]="Allegheny",sample[195]="This",sample[196]="treat",sample[197]="still",sample[198]="Pittsburgh’s",sample[199]="brought",sample[200]="coming",sample[201]="took",sample[202]="glass",sample[203]="fight",sample[204]="old",sample[205]="entire",sample[206]="One",sample[207]="epidemic",sample[208]="office",sample[209]="off",sample[210]="completed",sample[211]="building",sample[212]="plan",sample[213]="those",sample[214]="little",sample[215]="trial",sample[216]="point",sample[217]="State",sample[218]="matter",sample[219]="statement",sample[220]="others",sample[221]="helped",sample[222]="earlier",sample[223]="children",sample[224]="crisis",sample[225]="patients",sample[226]="resource",sample[227]="representing",sample[228]="Park",sample[229]="seemed",sample[230]="three",sample[231]="former",sample[232]="state’s",sample[233]="court",sample[234]="During",sample[235]="Brazilian",sample[236]="much",sample[237]="By",sample[238]="gypsies",sample[239]="position",sample[240]="Epstein",sample[241]="thing",sample[242]="nearly",sample[243]="right",sample[244]="On",sample[245]="months",sample[246]="ago",sample[247]="do",sample[248]="late",sample[249]="use",sample[250]="Florida",sample[251]="already",sample[252]="With",sample[253]="Dorian",sample[254]="became",sample[255]="win",sample[256]="St",sample[257]="hurricane",sample[258]="almost",sample[259]="able",sample[260]="here",sample[261]="market",sample[262]="measures",sample[263]="leaders",sample[264]="turned",sample[265]="deal",sample[266]="spent",sample[267]="union",sample[268]="His",sample[269]="European",sample[270]="thousands",sample[271]="followed",sample[272]="workers",sample[273]="Amazon",sample[274]="weapon",sample[275]="whose",sample[276]="told",sample[277]="finding",sample[278]="EU",sample[279]="Ohio",sample[280]="period",sample[281]="lead",sample[282]="might",sample[283]="something",sample[284]="laws",sample[285]="together",sample[286]="may",sample[287]="beef",sample[288]="argued",sample[289]="warnings",sample[290]="very",sample[291]="responsible",sample[292]="known",sample[293]="WPIAL",sample[294]="sun",sample[295]="nuisance",sample[296]="local",sample[297]="tariffs",sample[298]="lay",sample[299]="steel",sample[300]="Auburn",sample[301]="addiction",sample[302]="kept",sample[303]="gave",sample[304]="working",sample[305]="attention",sample[306]="urine",sample[307]="saw",sample[308]="rest",sample[309]="trying",sample[310]="sea",sample[311]="drug",sample[312]="considered",sample[313]="completely",sample[314]="around",sample[315]="dreams",sample[316]="pay",sample[317]="quarterback",sample[318]="park",sample[319]="used",sample[320]="lose",sample[321]="Democratic",sample[322]="animals",sample[323]="When",sample[324]="Lawrence",sample[325]="died",sample[326]="war",sample[327]="things",sample[328]="downtown",sample[329]="sense",sample[330]="left",sample[331]="mayor",sample[332]="return",sample[333]="once",sample[334]="Repatriation",sample[335]="need",sample[336]="For",sample[337]="five",sample[338]="second",sample[339]="possibility",sample[340]="future",sample[341]="manufacturers",sample[342]="imagination",sample[343]="ingots",sample[344]="American",sample[345]="attorney",sample[346]="tropical",sample[347]="faced",sample[348]="Mellon",sample[349]="Aureliano",sample[350]="theory",sample[351]="New",sample[352]="wife",sample[353]="magnifying",sample[354]="any",sample[355]="p.m",sample[356]="birds",sample[357]="pigs",sample[358]="destruction",sample[359]="bring",sample[360]="industry",sample[361]="economy",sample[362]="armor",sample[363]="soft",sample[364]="never",sample[365]="morning",sample[366]="idea",sample[367]="near",sample[368]="News",sample[369]="construction",sample[370]="expected",sample[371]="times",sample[372]="general",sample[373]="West",sample[374]="victims",sample[375]="government",sample[376]="close",sample[377]="Trump",sample[378]="expedition",sample[379]="nothing",sample[380]="river",sample[381]="II",sample[382]="U.S.",sample[383]="So",sample[384]="day",sample[385]="every",sample[386]="galleon",sample[387]="whether",sample[388]="let",sample[389]="lithium",sample[390]="March",sample[391]="clean",sample[392]="including",sample[393]="neither",sample[394]="team",sample[395]="short",sample[396]="city’s",sample[397]="discovery",sample[398]="well",sample[399]="now",sample[400]="lawyers",sample[401]="Union",sample[402]="whole",sample[403]="judgment",sample[404]="J",sample[405]="ban",sample[406]="end",sample[407]="go",sample[408]="laboratory",sample[409]="although",sample[410]="history",sample[411]="smell",sample[412]="redevelopment",sample[413]="treatment",sample[414]="father",sample[415]="being",sample[416]="sought",sample[417]="decision",sample[418]="different",sample[419]="these",sample[420]="Scully’s",sample[421]="penalize",sample[422]="Oklahoma’s",sample[423]="School",sample[424]="grew",sample[425]="modern",sample[426]="County",sample[427]="District",sample[428]="mountains",sample[429]="companies",sample[430]="biggest",sample[431]="woman",sample[432]="hours",sample[433]="conditions",sample[434]="ruling",sample[435]="games",sample[436]="summary",sample[437]="THE",sample[438]="experiments",sample[439]="replace",sample[440]="invention",sample[441]="care",sample[442]="section",sample[443]="push",sample[444]="centered",sample[445]="ground",sample[446]="Lucia",sample[447]="country",sample[448]="serving",sample[449]="World",sample[450]="law",sample[451]="success",sample[452]="acres",sample[453]="Blackhawk",sample[454]="large",sample[455]="original",sample[456]="weekend",sample[457]="Fort",sample[458]="century",sample[459]="everyone",sample[460]="anticipated",sample[461]="To",sample[462]="suffered",sample[463]="deep",sample[464]="They",sample[465]="Since",sample[466]="perhaps",sample[467]="plaintiffs",sample[468]="International",sample[469]="Mr",sample[470]="age",sample[471]="harsh",sample[472]="legal",sample[473]="pending",sample[474]="urban",sample[475]="cities",sample[476]="Court",sample[477]="another",sample[478]="Cleveland",sample[479]="convinced",sample[480]="services",sample[481]="fell",sample[482]="reputation",sample[483]="memory",sample[484]="benefits",sample[485]="played",sample[486]="judge",sample[487]="reality",sample[488]="swamp",sample[489]="think",sample[490]="among",sample[491]="campaign",sample[492]="Place",sample[493]="news",sample[494]="away",sample[495]="fire",sample[496]="crossed",sample[497]="yet",sample[498]="crisis,",sample[499]="cause",sample[500]="wild",sample[501]="blame",sample[502]="consequence",sample[503]="mail",sample[504]="Teva",sample[505]="Also",sample[506]="Hunter",sample[507]="needed",sample[508]="percent",sample[509]="contracted",sample[510]="less",sample[511]="strong",sample[512]="instruments",sample[513]="born",sample[514]="campaigns",sample[515]="leave",sample[516]="mills",sample[517]="reached",sample[518]="nation",sample[519]="front",sample[520]="run",sample[521]="defensive",sample[522]="beyond",sample[523]="ET)",sample[524]="main",sample[525]="Moses",sample[526]="jobs",sample[527]="midst",sample[528]="Pennsylvania",sample[529]="Railroad",sample[530]="Oregon",sample[531]="Manchester",sample[532]="know",sample[533]="candidate",sample[534]="Beaver",sample[535]="hold",sample[536]="trip",sample[537]="play",sample[538]="ever",sample[539]="ahead",sample[540]="us",sample[541]="amazing",sample[542]="night",sample[543]="coach",sample[544]="UE",sample[545]="gap",sample[546]="six",sample[547]="Steel",sample[548]="area",sample[549]="labor",sample[550]="Justin",sample[551]="plenty",sample[552]="Gateway",sample[553]="returned",sample[554]="Miami",sample[555]="partnership",sample[556]="doing",sample[557]="razed",sample[558]="look",sample[559]="move",sample[560]="businesses",sample[561]="Hawaii",sample[562]="build",sample[563]="space",sample[564]="Side",sample[565]="historic",sample[566]="thanks",sample[567]="Only",sample[568]="dedicated",sample[569]="streetcar",sample[570]="thirty",sample[571]="parkways",sample[572]="Liberty",sample[573]="bridge",sample[574]="Byrd",sample[575]="receiving",sample[576]="land",sample[577]="single",sample[578]="Pitt",sample[579]="playoff",sample[580]="top",sample[581]="poll",sample[582]="finally",sample[583]="Arizona",sample[584]="high",sample[585]="family",sample[586]="chairman",sample[587]="Party",sample[588]="hearing",sample[589]="Now",sample[590]="heard",sample[591]="numerous",sample[592]="proof",sample[593]="required",sample[594]="women",sample[595]="enormous",sample[596]="pain",sample[597]="counties",sample[598]="Tuesday",sample[599]="ABC",sample[600]="Richard",sample[601]="officially",sample[602]="month",sample[603]="multiple",sample[604]="Jeffrey",sample[605]="clear",sample[606]="toward",sample[607]="effects",sample[608]="seen",sample[609]="soon",sample[610]="domestic",sample[611]="earth",sample[612]="sales",sample[613]="critical",sample[614]="eye",sample[615]="under",sample[616]="Balkman’s",sample[617]="gold",sample[618]="appeals",sample[619]="placed",sample[620]="drugs",sample[621]="how",sample[622]="involving",sample[623]="air",sample[624]="inside",sample[625]="missed",sample[626]="title",sample[627]="Blackhawk’s",sample[628]="AccuWeather",sample[629]="Atlantic",sample[630]="senior",sample[631]="Prime",sample[632]="remain",sample[633]="eastern",sample[634]="kind",sample[635]="residents",sample[636]="ready",sample[637]="round",sample[638]="sailing",sample[639]="later",sample[640]="record",sample[641]="blue",sample[642]="distant",sample[643]="However",sample[644]="While",sample[645]="complete",sample[646]="contact",sample[647]="young",sample[648]="held",sample[649]="Hill",sample[650]="At",sample[651]="cost",sample[652]="strengthening",sample[653]="Tropical",sample[654]="remember",sample[655]="Windward",sample[656]="Colonel",sample[657]="Rico",sample[658]="managed",sample[659]="France",sample[660]="light",sample[661]="effective",sample[662]="trees",sample[663]="norms",sample[664]="since",sample[665]="common",sample[666]="changed",sample[667]="discover",sample[668]="War",sample[669]="action",sample[670]="current",sample[671]="There",sample[672]="fellow",sample[673]="G-",sample[674]="And",sample[675]="does",sample[676]="figure",sample[677]="dose",sample[678]="act",sample[679]="currently",sample[680]="fires",sample[681]="Bundoora",sample[682]="gained",sample[683]="path",sample[684]="includes",sample[685]="proposed",sample[686]="establish",sample[687]="similar",sample[688]="story",sample[689]="lives",sample[690]="requires",sample[691]="families",sample[692]="exchange",sample[693]="decades",sample[694]="impossible",sample[695]="mania",sample[696]="combat",sample[697]="facilities",sample[698]="support",sample[699]="show",sample[700]="international",sample[701]="homes",sample[702]="want",sample[703]="lack",sample[704]="says",sample[705]="Trump’s",sample[706]="imports",sample[707]="efforts",sample[708]="After",sample[709]="Bolsonaro",sample[710]="effort",sample[711]="proved",sample[712]="wonder",sample[713]="caused",sample[714]="areas",sample[715]="seniors",sample[716]="roads",sample[717]="beginning",sample[718]="draw",sample[719]="unfairly",sample[720]="courtyard",sample[721]="illness",sample[722]="guiding",sample[723]="Railways",sample[724]="burden",sample[725]="especially",sample[726]="substantially",sample[727]="class",sample[728]="names",sample[729]="associated",sample[730]="seven",sample[731]="learned",sample[732]="founding",sample[733]="junior",sample[734]="cases",sample[735]="South",sample[736]="statements",sample[737]="realize",sample[738]="skyline",sample[739]="Ireland",sample[740]="begin",sample[741]="struggled",sample[742]="leading",sample[743]="roots",sample[744]="goats",sample[745]="moment",sample[746]="finish",sample[747]="demonstration",sample[748]="settlement",sample[749]="having",sample[750]="raising",sample[751]="defendants",sample[752]="groups",sample[753]="claims",sample[754]="both",sample[755]="magnetized",sample[756]="No",sample[757]="suggested",sample[758]="causing",sample[759]="my",sample[760]="Cueto",sample[761]="torn",sample[762]="pellagra",sample[763]="beriberi",sample[764]="seem",sample[765]="pollution",sample[766]="visit",sample[767]="unknown",sample[768]="handful",sample[769]="experience",sample[770]="leader",sample[771]="Argentina",sample[772]="From",sample[773]="Johnson’s",sample[774]="tools",sample[775]="crazy",sample[776]="PPG",sample[777]="further",sample[778]="knew",sample[779]="addition",sample[780]="nation’s",sample[781]="lethal",sample[782]="floors",sample[783]="variety",sample[784]="Bollinger",sample[785]="represented",sample[786]="rabbit",sample[787]="impact",sample[788]="opening",sample[789]="hunting",sample[790]="Meanwhile",sample[791]="watching",sample[792]="June",sample[793]="block",sample[794]="landmark",sample[795]="outsize",sample[796]="D",sample[797]="though",sample[798]="announced",sample[799]="pretty",sample[800]="engaged",sample[801]="husband",sample[802]="psychiatry",sample[803]="Adler",sample[804]="psychiatrist",sample[805]="anyone",sample[806]="intellectual",sample[807]="approved",sample[808]="threat",sample[809]="regular",sample[810]="believe",sample[811]="called",sample[812]="problems",sample[813]="medication",sample[814]="honesty",sample[815]="linked",sample[816]="disposal",sample[817]="network",sample[818]="internet",sample[819]="winds",sample[820]="reap",sample[821]="process",sample[822]="potential",sample[823]="Trade",sample[824]="astrolabe",sample[825]="extraordinary",sample[826]="Corradi",sample[827]="study",sample[828]="instead",sample[829]="calculations",sample[830]="chosen",sample[831]="routes",sample[832]="size",sample[833]="Gonzalez",sample[834]="dissuade",sample[835]="field",sample[836]="view",sample[837]="didn’t",sample[838]="mph",sample[839]="Within",sample[840]="twenty",sample[841]="continues",sample[842]="forecast",sample[843]="national",sample[844]="provide",sample[845]="Over",sample[846]="East",sample[847]="candidates",sample[848]="however",sample[849]="Bridge",sample[850]="marking",sample[851]="shut",sample[852]="houses",sample[853]="bank",sample[854]="carbonate",sample[855]="according",sample[856]="Fortunately",sample[857]="population",sample[858]="bed",sample[859]="Other",sample[860]="reduce",sample[861]="positions",sample[862]="tenfold",sample[863]="certainty",sample[864]="redrafted",sample[865]="jail",sample[866]="places",sample[867]="suffocating",sample[868]="Act",sample[869]="preservation",sample[870]="According",sample[871]="opportunity",sample[872]="process,",sample[873]="North",sample[874]="proud",sample[875]="difficulties",sample[876]="metal",sample[877]="ended",sample[878]="afternoon",sample[879]="Port",sample[880]="rates",sample[881]="uproar",sample[882]="everywhere",sample[883]="respected",sample[884]="Franklin",sample[885]="scurvy",sample[886]="inventions",sample[887]="started",sample[888]="mankind",sample[889]="neighborhood",sample[890]="destroyed",sample[891]="issued",sample[892]="Storm",sample[893]="give",sample[894]="Caribbean",sample[895]="phantom",sample[896]="Arena",sample[897]="beard",sample[898]="consistently",sample[899]="Australia",sample[900]="heat",sample[901]="York",sample[902]="stones",sample[903]="white",sample[904]="sad",sample[905]="enveloped",sample[906]="everything",sample[907]="dioxide",sample[908]="crime",sample[909]="dead",sample[910]="revealed",sample[911]="collect",sample[912]="Hotel",sample[913]="absorbs",sample[914]="warning",sample[915]="opened",sample[916]="hanging",sample[917]="keeping",sample[918]="broke",sample[919]="criminal",sample[920]="garden",sample[921]="attend",sample[922]="rebuild",sample[923]="form",sample[924]="college",sample[925]="Day",sample[926]="moves",sample[927]="demonstrate",sample[928]="science",sample[929]="search",sample[930]="twin",sample[931]="affects",sample[932]="Always",sample[933]="risk",sample[934]="potentially",sample[935]="troops",sample[936]="ears",sample[937]="tower",sample[938]="significant",sample[939]="May",sample[940]="singular",sample[941]="tallest",sample[942]="elected",sample[943]="flowers",sample[944]="legislator",sample[945]="Valley",sample[946]="properties",sample[947]="Tex.",sample[948]="money",sample[949]="pursued",sample[950]="coast",sample[951]="level",sample[952]="Dom",sample[953]="industrial",sample[954]="Reiter",sample[955]="scientists",sample[956]="broken",sample[957]="fascination",sample[958]="OLSH",sample[959]="service",sample[960]="Lawrence’s",sample[961]="closed",sample[962]="following",sample[963]="represents",sample[964]="death",sample[965]="lined",sample[966]="collar",sample[967]="important",sample[968]="BCCS",sample[969]="wasn’t",sample[970]="Islands",sample[971]="counterparts",sample[972]="development",sample[973]="abandoned",sample[974]="disorder",sample[975]="created",sample[976]="served",sample[977]="early",sample[978]="too",sample[979]="investigations",sample[980]="open",sample[981]="convicted",sample[982]="sex",sample[983]="contenders",sample[984]="likely",sample[985]="Bolsanaro",sample[986]="feverish",sample[987]="guinea",sample[988]="ability",sample[989]="generators",sample[990]="impacted",sample[991]="regain",sample[992]="Hurricane",sample[993]="wrote",sample[994]="becoming",sample[995]="upon",sample[996]="best",sample[997]="offices",sample[998]="Bank",sample[999]="price";
	
	while(cin >> word)
	{
		text = text + word + " ";
		int len = word.length();
		if (word[0] < 'A' || (word[0] > 'Z' && word[0] < 'a') || word[0] > 'z')
			continue;
		tot++;
		if (word[len - 1] < 'A' || (word[len - 1] > 'Z' && word[len - 1] < 'a') || word[len - 1] > 'z')
		{
			len--;
			word.pop_back();
		}
		
		for (int i = 1; i <= 25; i++)
		{
			string plain = word;
			code(plain, i);
			if (find(plain))
				cnt[i]++;
		}
	}
	
	int Max = 0, key = 0;
	for (int i = 1; i<= 25; i++)
		if (cnt[i] > Max)
		{
			Max = cnt[i];
			key = i;
		}
	
	int len = text.length();
	for (int i = 0; i < len; i++)
		if (text[i] >= 'A' && text[i] <= 'Z')
				putchar('A' + (text[i] - 'A' + key)%26);
			else if (text[i] >= 'a' && text[i] <= 'z')
				putchar('a' + (text[i] - 'a' + key)%26);
			else 
				putchar(text[i]);
		
	fclose(stdin);
	fclose(stdout);
}