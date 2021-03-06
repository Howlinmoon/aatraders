<?php
$l_log_months = "array ( &#39;gener&#39;, &#39;Febrer&#39;, &#39;Mar�&#39;, &#39;Abril&#39;, &#39;maig&#39;, &#39;Juny&#39;, &#39;Juliol&#39;, &#39;August&#39;, &#39;Setembre&#39;, &#39;octubre&#39;, &#39;Novembre&#39;, &#39;Desembre&#39;)";
$l_log_months_short = "array ( &#39;Jan&#39;, &#39;febrer&#39;, &#39;Mar&#39;, &#39;abril&#39;, &#39;maig&#39;, &#39;juny&#39;, &#39;juliol&#39;, &#39;agost&#39;, &#39;setembre&#39;, &#39;octubre&#39;, &#39;novembre&#39;, &#39;desembre&#39;)";
$l_log_pod = "Afortunadament, hi havia una c�psula d&#39;escapament!";
$l_log_nopod 		 = "<font color=yellow><b>You did not have an escape pod, you died.</b></font>";
$l_log_log = "[player] &#39;s Log";
$l_log_start = "Registre d&#39;entrada per";
$l_log_end = "Fi de l&#39;entrada del registre per";
$l_log_click 		 = "Click <A HREF=main.php><font color=#00ff00>here</font></A> to return to the main menu.";
$l_log_select = "Seleccioneu un registre de:";
$l_log_general = "Registre general de";
$l_log_dig = "Dignatari Registrar";
$l_log_spy = "Spy Registrar";
$l_log_disaster = "Planet Desastres Registrar";
$l_log_nova = "Nova dispositiu de registre";
$l_log_attack = "Atac Registrar";
$l_log_scan = "Scan Log";
$l_log_starv = "Planet fam Registrar";
$l_log_probe = "Sonda de Registre";
$l_log_autotrade = "Auto Registre de Comer�";
$l_log_combined = "Combinada Registrar";


// Log entry data

$l_log_text["LOG_LOGIN"] = "Ha iniciat la sessi�, a partir d&#39;[ip].";
$l_log_title["LOG_LOGIN"] = "Identificats";
$l_log_text["LOG_LOGOUT"] = "Ha tancat la sessi�, a partir de [ip].";
$l_log_title["LOG_LOGOUT"] = "Desconnectat";

// General Log Entries

$l_log_title["LOG0_ADMIN_DBERROR"] = "S&#39;ha produ�t un error de base de dades";
$l_log_title["LOG0_ADMIN_COMBAT"] = "Resultats de l&#39;Acci� de Lluita contra la";
$l_log_title["LOG0_RAW"] = "Av�s";
$l_log_text["LOG0_PLANET_EJECT"] = "Vost� ha estat expulsat del planeta en el sector [sector] perqu� [name] a l&#39;esquerra de l&#39;equip.";
$l_log_title["LOG0_PLANET_EJECT"] = "Expulsat!";
$l_log_text["LOG0_BADLOGIN"] = "Hi ha hagut un intent d&#39;acc�s mal d&#39;[ip].";
$l_log_title["LOG0_BADLOGIN"] = "Bad login";
$l_log_title["LOG0_TOW"] = "D&#39;arrossegament!";
$l_log_text["LOG0_TOW"] = "El seu vaixell ha estat remolcat des del sector [sector] al sector [newsector], perqu� el seu nivell de tecnologia mitjana supera el valor l�mit d&#39;[hull], o vost� t� un vaixell en l&#39;emmagatzematge.";
$l_log_text["LOG0_HARAKIRI"] = "Vost� es cansa de capitanejar aquest espai de vaixells, de manera que va decidir l&#39;univers seria millor sense ell. Autoritzat per [ip].";
$l_log_title["LOG0_HARAKIRI"] 		= "<font color=red>Self-destructed!</font>";
$l_log_text["LOG0_TEAM_REJECT"] = "[player] ha rebutjat una invitaci� per unir-se al seu equip, [teamname].";
$l_log_title["LOG0_TEAM_REJECT"] = "Invitaci� rebutjada";
$l_log_text["LOG0_TEAM_RENAME"] = "Ha canviat el nom al seu equip a [team].";
$l_log_title["LOG0_TEAM_RENAME"] = "Equip de nom";
$l_log_text["LOG0_TEAM_M_RENAME"] = "El seu coordinador d&#39;equip nom de l&#39;equip de [team].";
$l_log_title["LOG0_TEAM_M_RENAME"] = "Equip de nom";
$l_log_text["LOG0_TEAM_KICK"] = "Vost� ha estat expulsat de l&#39;equip de [team].";
$l_log_title["LOG0_TEAM_KICK"] = "Expulsat de l&#39;equip!";
$l_log_text["LOG0_TEAM_CREATE"] = "S&#39;ha creat un nou equip, el [team].";
$l_log_title["LOG0_TEAM_CREATE"] = "Creat nou equip";
$l_log_text["LOG0_TEAM_LEAVE"] = "Has deixat l&#39;equip [team].";
$l_log_title["LOG0_TEAM_LEAVE"] = "L&#39;equip restant";
$l_log_text["LOG0_TEAM_NEWLEAD"] = "Ha deixat l&#39;equip de [team]. Vost� va renunciar a la direcci� de l&#39;equip a [name].";
$l_log_title["LOG0_TEAM_NEWLEAD"] = "L&#39;equip restant";
$l_log_text["LOG0_TEAM_LEAD"] = "El seu coordinador d&#39;equip ha decidit deixar [team]. Vost� ha estat nomenat per ocupar el seu lloc.";
$l_log_title["LOG0_TEAM_LEAD"] = "Promoci�!";
$l_log_text["LOG0_TEAM_JOIN"] = "Vost�s s&#39;han unit a l&#39;equip de [team].";
$l_log_title["LOG0_TEAM_JOIN"] = "Membre de l&#39;equip";
$l_log_text["LOG0_TEAM_NEWMEMBER"] = "[name], ha acceptat unir-se a [team]. Aix� li porta un pas m�s a la dominaci� gal�ctica.";
$l_log_title["LOG0_TEAM_NEWMEMBER"] = "Nou membre de l&#39;equip";
$l_log_text["LOG0_TEAM_INVITE"] = "Ha estat convidat a formar part de [team].";
$l_log_title["LOG0_TEAM_INVITE"] = "Invitaci�";
$l_log_text["LOG0_TEAM_NOT_LEAVE"] = "[player] ha deixat al seu equip.";
$l_log_title["LOG0_TEAM_NOT_LEAVE"] = "Equip perd un membre";
$l_log_text["LOG0_ADMIN_HARAKIRI"] = "[player] s&#39;ha autodestru�t d&#39;IP [ip].";
$l_log_title["LOG0_ADMIN_HARAKIRI"] = "Autodestrucci�";
$l_log_text["LOG0_ADMIN_ILLEGVALUE"] = "[player] havia [quantity] quantitat [type], amb Max bodegues de [holds]";
$l_log_title["LOG0_ADMIN_ILLEGVALUE"] = "Valor de la nau il legal";
$l_log_text["LOG0_ADMIN_PLANETDEL"] = "[attacker] ha intentat capturar [defender] &#39;s planeta en el sector [sector]. Planeta va ser destru�t en el seu lloc.";
$l_log_title["LOG0_ADMIN_PLANETDEL"] = "Planeta destru�t";
$l_log_text["LOG0_defense_DEGRADE"] = "Defenses del sector Fighters al sector [sector] degradades per [degrade] per cent a causa de la insufici�ncia d&#39;energia.";
$l_log_title["LOG0_defense_DEGRADE"] = "Les defenses del sector degradades.";
$l_log_text["LOG0_CHEAT_TEAM"] = "Player [player] a l&#39;adre�a IP [ip] van intentar aprofitar-se de la manca d&#39;equip a ning� enganyen. Seva nau va ser destru�da.";
$l_log_title["LOG0_CHEAT_TEAM"] = "Exploit Equip Usat";
$l_log_text["LOG0_BOUNTY_CLAIMED"] = "Que va reclamar una recompensa de [amount] de cr�dits per a la destrucci� de la nau que pertany a [bounty_on]. La recompensa va ser col locat per [placed_by].";
$l_log_title["LOG0_BOUNTY_CLAIMED"] = "Bounty reivindicada.";
$l_log_text["LOG0_BOUNTY_PAID"] = "La seva recompensa per [bounty_on], ha estat pagat per la quantitat de [amount] cr�dits.";
$l_log_title["LOG0_BOUNTY_PAID"] = "Recompensa de pagament.";
$l_log_text["LOG0_BOUNTY_TAX_PAID"] = "La generositat Fedration a [bounty_on] ha estat gravada per la quantitat de [amount] cr�dits.";
$l_log_title["LOG0_BOUNTY_TAX_PAID"] = "Bounty pagament d&#39;impostos.";
$l_log_text["LOG0_BOUNTY_CANCELLED"] = "Seva recompensa per [bounty_on] per la quantitat de [amount] de cr�dits ha estat reemborsat.";
$l_log_title["LOG0_BOUNTY_CANCELLED"] = "Bounty reemborsat.";
$l_log_text["LOG0_BOUNTY_FEDBOUNTY"] = "La Federaci� ha posat una recompensa per la suma de [amount] cr�dits.";
$l_log_title["LOG0_BOUNTY_FEDBOUNTY"] = "Federaci� de Recompensa!";
$l_log_text["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "L&#39;Alian�a ha posat una recompensa per la suma de [amount] cr�dits.";
$l_log_title["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "Alian�a Recompensa!";
$l_log_text["LOG0_IGB_TRANSFER1"] = "Cr�dits Player [name] transfereix [sum] al vostre compte d&#39;IGB.";
$l_log_title["LOG0_IGB_TRANSFER1"] = "Els cr�dits transferits";
$l_log_text["LOG0_IGB_TRANSFER2"] = "Vost� transfereix [sum] els cr�dits per al jugador [name] &#39;s compte IGB.";
$l_log_title["LOG0_IGB_TRANSFER2"] = "Els cr�dits transferits";
$l_log_text["LOG0_ADMIN_PLANETIND"] = "[sector] [planetname] ([planetid]), propietat de [owner] es va convertir en independent. Mitjana Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_PLANETIND"] = "Planet va ser independent.";
$l_log_text["LOG0_ADMIN_INDYPURGE"] = "Planeta Independent [planetname] ([planetid]), propietat de [owner] al [sector] va ser expulsat. Mitjana Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_INDYPURGE"] = "Independent Planet purgat.";
$l_log_text["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Mai planeta propietat [planetname] ([planetid]), creat en el [date] al [sector] va ser expulsat. Mitjana Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Mai va posseir Planet purgat.";
$l_log_text["LOG0_TEAM_CANCEL"] = "Ets invitaci� a ser part de [team], ha estat cancel.lada.";
$l_log_title["LOG0_TEAM_CANCEL"] = "Invitaci� Cancelada";

// Dignitary Log Entries

$l_log_text["LOG1_DIG_PRODUCTION"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] comen�a la construcci� de la producci�.";
$l_log_title["LOG1_DIG_PRODUCTION"] = "<font color=#00FF00>Production Building  Started!</font>";
$l_log_text["LOG1_DIG_BIRTHDEC"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] decreixent taxa de natalitat.";
$l_log_title["LOG1_DIG_BIRTHDEC"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG1_DIG_BIRTHINC"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] taxa de natalitat cada vegada m�s gran.";
$l_log_title["LOG1_DIG_BIRTHINC"] = "<font color=#00FF00>Birthrate Increased!</font>";
$l_log_text["LOG1_DIG_SPYHUNT"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] va comen�ar a buscar spys en aquest planeta.";
$l_log_title["LOG1_DIG_SPYHUNT"] = "<font color=#00FF00>Spy Hunter!</font>";
$l_log_text["LOG1_DIG_INTEREST"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] comen�a augment de la producci� de cr�dit.";
$l_log_title["LOG1_DIG_INTEREST"] = "<font color=#00FF00>Interest Building Started!</font>";
$l_log_text["LOG1_DIG_MONEY"] = "Dignatari [id] al planeta [planet_name] malversats [data] cr�dits i donacions per a vost�!";
$l_log_title["LOG1_DIG_MONEY"] = "<font color=#00FF00>You Recieved Embezzled  Credits!</font>";
$l_log_text["LOG1_DIG_KILLED_SPY"] = "El seu reproductor �s detectat dignatari [name] &#39;s espiar seu planeta [planet_name] en el sector [sector]. L&#39;espia �s mort ara.";
$l_log_title["LOG1_DIG_KILLED_SPY"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG1_DIG_CATACLYSM"] = "La seva excavaci� [id] al planeta [planet_name] en el sector [sector] van morir en un cataclisme terrible amb aquest planeta.";
$l_log_title["LOG1_DIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_SHIPDIG_CATACLYSM"] = "La seva excavaci� [id] en el reproductor [name] &#39;s dels vaixells [shipname] van morir en un cataclisme terrible amb aquest vaixell.";
$l_log_title["LOG1_SHIPDIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_DIG_TORPS"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] construir [data] planet�ria torpedes!";
$l_log_title["LOG1_DIG_TORPS"] = "<font color=#00FF00>Torpedoes Built!</font>";
$l_log_text["LOG1_DIG_FITS"] = "La seva dignatari [id] al planeta [planet_name] en el sector [sector] construir [data] combatents del planeta!";
$l_log_title["LOG1_DIG_FITS"] = "<font color=#00FF00>Fighters Built!</font>";

// Spy Log Entries

$l_log_text["LOG2_SPY_NEWSHIP"] = "Heu oblidat la espia [id] a [name] &#39;s dels vaixells [shipname], pel fet que el jugador va comprar un nou vaixell.";
$l_log_title["LOG2_SPY_NEWSHIP"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_SEND_FAIL"] = "[name], va tractar d&#39;enviar un espia al seu planeta [planet_name] en el sector [sector], per� els seus sensors detecten el espia i el maten ara.";
$l_log_title["LOG2_SPY_SEND_FAIL"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG2_SPY_SABOTAGE"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] comen�a el sabotatge. La producci� es va reduir per [data] En aquest planeta.";
$l_log_title["LOG2_SPY_SABOTAGE"] = "<font color=#00FF00>Sabotage Started!</font>";
$l_log_text["LOG2_SPY_BIRTH"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] taxa de natalitat va disminuir de [data] al planeta.";
$l_log_title["LOG2_SPY_BIRTH"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG2_SPY_INTEREST"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] comen�a cobrar interessos pel planeta [data] a vost�.";
$l_log_title["LOG2_SPY_INTEREST"] = "<font color=#00FF00>Interest Stealing Started!</font>";
$l_log_text["LOG2_SPY_MONEY"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] van robar [data] cr�dits per a vost�!";
$l_log_title["LOG2_SPY_MONEY"] = "<font color=#00FF00>Credits Have Stolen!</font>";
$l_log_text["LOG2_SPY_TORPS"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] destru�ts [data] planet�ria torpedes!";
$l_log_title["LOG2_SPY_TORPS"] = "<font color=#00FF00>Torpedoes Destroyed!</font>";
$l_log_text["LOG2_SPY_FITS"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] destru�ts [data] combatents del planeta!";
$l_log_title["LOG2_SPY_FITS"] = "<font color=#00FF00>Fighters Destroyed!</font>";
$l_log_text["LOG2_SPY_CPTURE"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] capturats aquest planeta! Vost� �s un tipus amb sort ...";
$l_log_title["LOG2_SPY_CPTURE"] = "<font color=#00FF00>PLANET CAPTURED!</font>";
$l_log_text["LOG2_SPY_CPTURE_OWNER"] = "[name] &#39;s espia capturat seu planeta [planet_name] en el sector [sector]! Sembla que �s s�via idea de neteja amb m�s freq��ncia els seus planetes ...";
$l_log_title["LOG2_SPY_CPTURE_OWNER"] = "<font color=red>Planet Lost!</font>";
$l_log_text["LOG2_SPY_KILLED_SPYOWNER"] = "No hi ha missatges de la espia [id] al planeta [planet_name] en el sector [sector] durant molt de temps -, sembla que l&#39;aparell de Capa no podia cobrir prou i el mata.";
$l_log_title["LOG2_SPY_KILLED_SPYOWNER"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_KILLED"] = "Els seus sensors detecten un [name] &#39;s espiar seu planeta [planet_name] en el sector [sector]. L&#39;espia �s mort ara.";
$l_log_title["LOG2_SPY_KILLED"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG2_SHIPSPY_KILLED"] = "No hi ha missatges de la espia [id] al reproductor de [name] &#39;s dels vaixells [shipname] durant molt de temps -, sembla que l&#39;aparell de Capa no podia cobrir prou i el mata.";
$l_log_title["LOG2_SHIPSPY_KILLED"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_CATACLYSM"] = "El seu espia [id] al planeta [planet_name] en el sector [sector] van morir en un cataclisme terrible amb aquest planeta.";
$l_log_title["LOG2_SPY_CATACLYSM"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SHIPSPY_CATACLYSM"] = "El seu espia [id] en el reproductor [name] &#39;s dels vaixells [shipname] van morir en un cataclisme terrible amb aquest vaixell.";
$l_log_title["LOG2_SHIPSPY_CATACLYSM"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_TOSHIP"] = "El seu espia [id] del planeta [planet_name] en el sector [sector] s&#39;infiltra en un jugador [playername] &#39;s dels vaixells [shipname] i actua ara.";
$l_log_title["LOG2_SPY_TOSHIP"] = "<font color=#00FF00>Spy Infiltrates Enemy Ship!</font>";
$l_log_text["LOG2_SPY_TOPLANET"] = "El seu espia [id] del jugador [playername] &#39;s dels vaixells [shipname] s&#39;infiltra en un planeta [planet_name] en el sector [sector] i actua ara.";
$l_log_title["LOG2_SPY_TOPLANET"] = "<font color=#00FF00>Spy Infiltrates Enemy Planet!</font>";
$l_log_text["LOG2_SPY_FOUND_EMBEZZLER"] = "El seu n�mero de dignatari [DIG] al planeta [PLANET], ha estat capturat malversaci�. �s possible que vulgueu per acomiadar.";
$l_log_title["LOG2_SPY_FOUND_EMBEZZLER"] 	= "<font color=yellow>Embezzler found!</font>";

// Nova Bomb Logs

$l_log_text["LOG4_PLANET_novaED_D"] = "El teu planeta [planet_name] en el sector [sector] va ser destru�da amb una bomba Nova per [name]. Absolutament no queda res per marcar els planetes exist�ncia anterior.";
$l_log_title["LOG4_PLANET_novaED_D"] 	= "<font color=yellow>Planet destroyed with a Nova Bomb</font>";
$l_log_text["LOG4_SHIP_novaED_D"] = "La seva nau va ser destru�da amb una bombardejada Nova per [name].";
$l_log_title["LOG4_SHIP_novaED_D"] 	= "<font color=yellow>Ship destroyed with a Nova Bomb</font>";

// Attack Logs

$l_log_text["LOG5_PLANET_BOMBED"] = "El teu planeta [planet_name] en el sector [sector] va ser bombardejada per [name]. Va utilitzar [beams] de l&#39;energia i [torps] torpedes en la seva defensa. Heu perdut [figs] combatents.";
$l_log_title["LOG5_PLANET_BOMBED"] = "<font color=red>Planet bombed!</font>";
$l_log_text["LOG5_PLANET_YOUR_CAPTURED"] = "El teu planeta [planet_name] en el sector [sector] va ser derrotat i capturat pels miserables [name].";
$l_log_title["LOG5_PLANET_YOUR_CAPTURED"]  = "<font color=red>Planet captured!</font>";
$l_log_text["LOG5_ATTACK_OUTMAN"] = "[player] va ser descobert en un vector d&#39;atac, per� les seves habilitats de gran pilot i els motors de bona li ha perm�s superar l&#39;enemic.";
$l_log_title["LOG5_ATTACK_OUTMAN"] = "Acci� evasiva!";
$l_log_text["LOG5_ATTACK_OUTSCAN"] = "Vost� detectat [player] &#39;s armes tractant d&#39;arreglar en el seu vaixell, per� els generadors de la seva capa aconseguit enganyar els circuits del sensor primitiva de l&#39;enemic.";
$l_log_title["LOG5_ATTACK_OUTSCAN"] = "Capa d&#39;�xit!";
$l_log_text["LOG5_ATTACK_EWD"] = "Vost� est� sorpr�s per [player] &#39;s atac tra�dor. Vost� pot veure el ogives com arribar fren�ticament el bot� de l&#39;ordit d&#39;emerg�ncia. El desdibuixa m�n que t&#39;envolta i, d&#39;una milisegons, si creu que estan morts. Quan finalment obre els ulls, que vegi que s&#39;hagi transportat de manera segura en altres llocs. Per� on exactament, no ho s� ...";
$l_log_title["LOG5_ATTACK_EWD"] = "De l&#39;ordit d&#39;emerg�ncia!";
$l_log_text["LOG5_ATTACK_EWDFAIL"] = "Els seus sensors detecten [player] &#39;s vaixell en un vector d&#39;atac. &quot;�s millor prevenir que curar�, penses, pressionar el bot� de l&#39;ordit d&#39;emerg�ncia. Se sent un so d&#39;asf�xia estrany provinent de la sala de motors i olor a cremat dels circuits. &quot;Stupid tros de merda!&quot;, Crida, puntades de peu a l&#39;ordinador. L&#39;ordinador emet xiulets de protesta mentre es prepara per a la batalla d&#39;entrada ...";
$l_log_title["LOG5_ATTACK_EWDFAIL"] 	= "Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_ATTACK_LOSE"] = "El seu vaixell est� sent atacada per [player]. Per molt que vost� pot ser, no pot defensar-se contra [player] &#39;s armament superior. La seva nau va ser destru�da.";
$l_log_title["LOG5_ATTACK_LOSE"] 		= "<font color=red>Combat lost!</font>";
$l_log_text["LOG5_ATTACKED_WIN"] = "El seu vaixell va ser atacat per [player]. Vost� lluita per una estona, llavors, la lluita s&#39;ensorra. Heu perdut [armor] punts d&#39;armadura i [fighters] combatents en l&#39;escaramussa.";
$l_log_title["LOG5_ATTACKED_WIN"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_HIT_MINES"] = "Vost� colpeja [mines] de mines que es desplacen al sector [sector].";
$l_log_title["LOG5_HIT_MINES"] 		= "<font color=yellow>Mines alert!</font>";
$l_log_text["LOG5_SHIP_DESTROYED_MINES"] = "La seva nau va ser destru�da per un camp minat en el sector [sector].";
$l_log_title["LOG5_SHIP_DESTROYED_MINES"] 	= "<font color=red>Mines alert!</font>";
$l_log_text["LOG5_PLANET_DEFEATED_D"] = "El teu planeta [planet_name] en el sector [sector] va ser derrotat a la batalla per [name]. Afortunadament, la forta lleialtat dels seus ciutadans que es reprodueix a favor seu. Ells han triat valentia per destruir el planeta en lloc d&#39;haver de caigui en mans enemigues. A organitzar els funerals excelente en la mem�ria del seu poble fidel.";
$l_log_title["LOG5_PLANET_DEFEATED_D"] 	= "<font color=yellow>Planet destroyed</font>";
$l_log_text["LOG5_PLANET_DEFEATED"] = "El teu planeta [planet_name] en el sector [sector] va ser derrotat a la batalla pels miserables [name]. La gent del planeta la benvinguda al seu nou governant. Se sent un testimoni sobre FNN: &quot;Estem contents de lliurar-se d&#39;aquest pet vell! No volem ni perdedor pudent que no ens pot protegir!&quot;. Ho jures per fer-los pagar per la seva arrog�ncia.";
$l_log_title["LOG5_PLANET_DEFEATED"] 	= "<font color=red>Planet defeated!</font>";
$l_log_text["LOG5_PLANET_NOT_DEFEATED"] = "El teu planeta [planet_name] en el sector [sector] va ser atacat per [name]. Els ciutadans van organitzar una defensa Valliant per�, i van aconseguir destruir l&#39;oponent. De rescatar alguns recursos de les deixalles espacials: [goods] mercaderies [ore] de mineral, [organics] org�nics i [salvage]% del valor de la nau de [credits] cr�dits.";
$l_log_title["LOG5_PLANET_NOT_DEFEATED"] = "Vict�ria!";
$l_log_text["LOG5_DEFS_DESTROYED"] = "[quantity] [type] van ser destru�ts en el sector [sector].";
$l_log_title["LOG5_DEFS_DESTROYED"] = "Sector de les defenses destru�des";
$l_log_text["LOG5_KABAL_ATTACK"] = "Atacar [player] ...";
$l_log_title["LOG5_KABAL_ATTACK"] = "Atac";
$l_log_text["LOG5_DEFS_DESTROYED_F"] = "Vost�s han destru�t [fighters] combatents de patrullatge en el sector [sector].";
$l_log_title["LOG5_DEFS_DESTROYED_F"] = "Fighters destru�ts";
$l_log_text["LOG5_DEFS_KABOOM"] = "Vost� va ser destru�da per un grup de combatents en el sector [sector].";
$l_log_title["LOG5_DEFS_KABOOM"] 		= "<font color=red>Ship destroyed!</font>";
$l_log_text["LOG5_PLANET_CAPTURED"] = "Que ha capturat un planeta que pertanyen a [owner]. Hi havia [cols] els colons i els [credits] cr�dits en ell.";
$l_log_title["LOG5_PLANET_CAPTURED"] = "Planet capturats!";
$l_log_text["LOG5_STORAGE_EWD"] = "El seu planeta est� sorpr�s per [player] &#39;s atac. Un dels seus vaixells emmagatzemats va fer una ordit d&#39;emerg�ncia al [sector] i va aterrar al planeta [planet]";
$l_log_title["LOG5_STORAGE_EWD"] = "Emmagatzemats Ship ordit d&#39;emerg�ncia!";
$l_log_text["LOG5_STORAGE_EWDFAIL"] = "Un dispositiu per emmagatzemar els vaixells Warp FAILED! El vaixell va ser capturat per emmagatzemats [player] despr�s que va derrotar al seu planeta!";
$l_log_title["LOG5_STORAGE_EWDFAIL"] 	= "Stored Ship Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_STORAGE_CAPTURED"] = "Un vaixell va ser capturat per emmagatzemats [player] despr�s que va derrotar a un dels seus planetes!";
$l_log_title["LOG5_STORAGE_CAPTURED"] 	= "Stored Ship <font color=red>CAPTURED!</font>";
$l_log_text["LOG5_CONFISCATION"] = "El seu vaixell va ser confiscat per [player]. No als atacs excessiva recompensa als jugadors de la [player] ha confiscat un dels seus vaixells ([ship]).";
$l_log_title["LOG5_CONFISCATION"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_PLANET_CONFISCATION"] = "El seu planeta va ser confiscat per [player]. No als atacs excessiva recompensa als jugadors de la [player] ha confiscat un dels seus planetes ([name]) al sector [sector] valor [score] cr�dits.";
$l_log_title["LOG5_PLANET_CONFISCATION"] 		= "<font color=yellow>Planetary Skirmish!</font>";
$l_log_text["LOG5_STORAGE_SUICIDE"] = "Un vaixell emmagatzemats su�cidat quan [player] derrotar a un dels seus planetes i va tractar de capturar!";
$l_log_title["LOG5_STORAGE_SUICIDE"] 	= "Stored Ship <font color=red>SUICIDE!</font>";

$l_log_text["LOG5_SM_ATTACK"] = "Sensors va detectar un vaixell de m�ssils Sector de ser acomiadat de [sector] de [player]!";
$l_log_title["LOG5_SM_ATTACK"] 	= "<font color=red>INCOMING SECTOR MISSILE DETECTED</font>";
$l_log_text["LOG5_SM_OUTMAN"] = "Un m�ssil disparat per Sector [player] va ser detectat deformacions en el sector i es va evadir l&#39;atac.";
$l_log_title["LOG5_SM_OUTMAN"] = "Sector de m�ssils Acci� evasiva!";
$l_log_text["LOG5_SM_OUTSCAN"] = "Vost� detectat [player] &#39;s un m�ssil Sector de tractar d&#39;arreglar en el seu vaixell, per� els generadors de la seva capa aconseguit enganyar els circuits dels sensors Sector de M�ssils.";
$l_log_title["LOG5_SM_OUTSCAN"] = "Sector de m�ssils Capa d&#39;�xit!";
$l_log_text["LOG5_SM_EWD"] = "Vost� est� sorpr�s per [player] &#39;s Sector d&#39;atac de m�ssils i la participaci� del dispositiu d&#39;emerg�ncia, Warp saltar a un sector desconegut.";
$l_log_title["LOG5_SM_EWD"] = "Sector de m�ssils de l&#39;ordit d&#39;emerg�ncia!";
$l_log_text["LOG5_SM_EWDFAIL"] = "Els seus sensors detecten [player] &#39;s Sector d&#39;atac de m�ssils i la participaci� del dispositiu d&#39;emerg�ncia, Warp. Se sent un so d&#39;asf�xia estrany provinent de la sala de motors i olor a cremat dels circuits. &quot;Stupid tros de merda!&quot;, Crida, puntades de peu a l&#39;ordinador. Vost� preparar-se per l&#39;impacte!";
$l_log_title["LOG5_SM_EWDFAIL"] 	= "Sector Missile Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_SM_WIN"] = "El seu vaixell va ser atacat per [player] utilitzant un m�ssil Sector. Heu perdut [armor] punts d&#39;armadura i [energy] unitats d&#39;energia de l&#39;energia en l&#39;atac.";
$l_log_title["LOG5_SM_WIN"] 		= "<font color=yellow>Sector Missile IMPACT!</font>";
$l_log_text["LOG5_SM_LOSE"] = "La seva nau va ser destru�da per un m�ssil del sector a partir de [player].";
$l_log_title["LOG5_SM_LOSE"] 		= "<font color=red>Sector Missile Combat Lost!</font>";

$l_log_text["LOG5_SURVIVE_PROBE_ATTACK"] = "El seu vaixell va ser atacat per una sonda de propietat de [player] en el sector [sector]. Heu perdut [armor] punts d&#39;armadura i [energy] unitats d&#39;energia de l&#39;energia en l&#39;atac.";
$l_log_title["LOG5_SURVIVE_PROBE_ATTACK"] 		= "<font color=yellow>Probe ATTACK!</font>";
$l_log_text["LOG5_PROBE_ATTACK_FAILED"] = "[player] va sobreviure a un atac de la sonda en el sector [sector].";
$l_log_title["LOG5_PROBE_ATTACK_FAILED"] 		= "<font color=red>Probe Attack FAILED!</font>";
$l_log_text["LOG5_PROBE_ATTACK_SUCCEEDED"] = "La seva sonda va destruir la nau de propietat de [player] en el sector [sector].";
$l_log_title["LOG5_PROBE_ATTACK_SUCCEEDED"] 		= "<font color=red>Probe Attack Succeeded!</font>";
$l_log_text["LOG5_DESTROYED_PROBE_ATTACK"] = "La seva nau va ser destru�da per una sonda de [player] en el sector [sector].";
$l_log_title["LOG5_DESTROYED_PROBE_ATTACK"] 		= "<font color=red>Probe Attack Lost!</font>";
$l_log_title["LOG5_AFTER_ACTION"] = "Despr�s de Combat Action Report";

// Scan Logs

$l_log_text["LOG6_PLANET_SCAN"] = "[name], ha escanejat el planeta [planet_name] en el sector [sector].";
$l_log_title["LOG6_PLANET_SCAN"] = "Planet exploraci�";
$l_log_text["LOG6_PLANET_SCAN_FAIL"] = "[name], ha intentat explorar el seu planeta [planet_name] en el sector [sector], per� va fracassar.";
$l_log_title["LOG6_PLANET_SCAN_FAIL"] = "Planet exploraci� no";
$l_log_text["LOG6_SHIP_SCAN"] = "[player] ha escanejat el seu vaixell.";
$l_log_title["LOG6_SHIP_SCAN"] = "Vaixell d&#39;exploraci�";
$l_log_text["LOG6_SHIP_SCAN_FAIL"] = "[player] ha intentat explorar el vaixell, per� va fallar.";
$l_log_title["LOG6_SHIP_SCAN_FAIL"] = "Vaixell d&#39;exploraci� no";

// Starvation Logs

$l_log_text["LOG7_STARVATION"] = "Planet [name] al [sector] no pot sostenir la seva poblaci�! M�s org�nics s�n necessaris. [starvation] colons van morir de fam. Els colons van comen�ar morint de fam a [date].";
$l_log_title["LOG7_STARVATION"] 		= "<font color=yellow>Starvation!</font>";

// Probe Logs

$l_log_text["LOG9_PROBE_DETECTED_SHIP"]="<font color=yellow>Your probe id [id] detected [ship_name] entering sector [sector]</font>";
$l_log_title["LOG9_PROBE_DETECTED_SHIP"] = "Sonda va detectar entrant Ship";
$l_log_text["LOG9_PROBE_SCAN_SHIP"]="<font color=yellow>Your probe id [id] scanned [ship_name] entering sector [sector]<br>Hull: [hull] Engines: [engines] Power: [power] Fighter Bay: [fighter] Sensors: [sensors] Beams: [beams] Torp Launchers: [torps] Armor: [armor] Shields: [shields] Cloak: [cloak]<br>Armor Points: [armor_pts] Fighters: [fighters] Torpedoes: [avail_torps] Ship Energy: [energy] Credits: [credits] <br>Mine Deflectors: [deflectors] Emergency Warp: [ewd] Escape Pod: [pod] ECM: [ecm]</font>";
$l_log_title["LOG9_PROBE_SCAN_SHIP"] = "Sonda Scanned entrant Ship";
$l_log_text["LOG9_PROBE_DESTROYED"]="<font color='#00ff00'>SECTOR defenses in [sector] destroy your probe.</font>";
$l_log_title["LOG9_PROBE_DESTROYED"] = "Sonda Destruir";
$l_log_text["LOG9_PROBE_NOTURNS"]="<font color='#00ff00'>You do not have enough turns for probe [probe_id] to move to [sector]</font>";
$l_log_title["LOG9_PROBE_NOTURNS"] = "Informe de la sonda";
$l_log_text["LOG9_PROBE_INVALIDSECTOR"] = "<font color='#00ff00'>Moving to sector [target_sector] is not allowed</font>";
$l_log_title["LOG9_PROBE_INVALIDSECTOR"] = "Informe de la sonda";
$l_log_text["LOG9_PROBE_DETECTPROBE"]="<font color='#00ff00'>Probe [probe_id] in sector [sector] detected [probe_detect]</font>";
$l_log_title["LOG9_PROBE_DETECTPROBE"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_DETECTED_GATEWAY"]="<font color='#00ff00'>Seeker Probe [probe_id] in sector [sector] detected a Gateway Sector</font>";
$l_log_title["LOG9_PROBE_DETECTED_GATEWAY"] 		= "[probe_type] <font color='yellow'>Seeker Probe Report</font>";

$l_log_text["LOG9_PROBE_SCAN_FAIL"] = "[name] intentat explorar un dels seus sondejos en el sector [sector], per� va fracassar.";
$l_log_title["LOG9_PROBE_SCAN_FAIL"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_SCAN"] = "Un dels seus sondejos en el sector [sector] va ser escanejada per [name].";
$l_log_title["LOG9_PROBE_SCAN"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_ATTACKED"] = "Un dels seus sondejos en el sector [sector] va ser atacada i destru�da per [name].";
$l_log_title["LOG9_PROBE_ATTACKED"] 		= "[probe_type] <font color='yellow'>Probe Destroyed</font>";

$l_log_text["LOG9_PROBEHUNTER_SUCCEED"] = "Un dels Ca�adors de la sonda ha destru�t una [probe_type] propietat de [name] al [sector].";
$l_log_title["LOG9_PROBEHUNTER_SUCCEED"] = "Sonda Hunter destru�ts [probe_type]";
$l_log_text["LOG9_PROBEHUNTER_DESTROYED"] = "El seu [probe_type] en el sector [sector] va ser atacada i destru�da per un ca�ador de la sonda de propietat de [name].";
$l_log_title["LOG9_PROBEHUNTER_DESTROYED"] 		= "[probe_type] <font color='yellow'>Probe Attacked and Destroyed</font>";
$l_log_text["LOG9_PROBEHUNTER_EXPLODED"] = "La sonda Hunter en el sector [sector] es va perdre quan l&#39;explosi� resultant del seu atac a la probe_type [probe_type] propietat de [name] envoltava.";
$l_log_title["LOG9_PROBEHUNTER_EXPLODED"] 		= "Probe Hunter Probe <font color='yellow'>Destroyed</font>";

// Auto Trade Logs

$l_log_text["LOG10_AUTOTRADE"]="<font color=yellow>Auto Trade for [planetname] in sector [sector] for [totalcost] credits.<br>Goods: [goodsamount] @ [goodsprice] credits - Ore: [oreamount] @ [oreprice] credits - Organics: [organicsamount] @ [organicsprice] credits - Energy: [energyamount] @ [energyprice] credits - Colonists: [colonistamount] @ [colonistprice] credits<br></font>";
$l_log_title["LOG10_AUTOTRADE"] = "Auto Informe sobre el Comer�";
$l_log_text["LOG10_AUTOTRADE_ABORTED"]="<font color='#00ff00'>Auto Trade for [planetname] in sector [sector] was aborted due to enemy sector defense in sector [destsector].<br></font>";
$l_log_title["LOG10_AUTOTRADE_ABORTED"] = "Auto Informe sobre el Comer�";

?>
