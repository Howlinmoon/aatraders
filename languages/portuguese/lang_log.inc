<?php
$l_log_months = "array ( &#39;Janeiro&#39;, &#39;Fevereiro&#39;, &#39;Mar�o&#39;, &#39;Abril&#39;, &#39;Maio&#39;, &#39;Junho&#39;, &#39;Julho&#39; Agosto &#39;,&#39; Setembro &#39;,&#39; Outubro &#39;,&#39; Novembro &#39;,&#39; Dezembro &#39;)";
$l_log_months_short = "array ( &#39;Jan&#39;, &#39;Fev&#39;, &#39;Mar&#39;, &#39;Abr&#39;, &#39;Maio&#39;, &#39;Jun&#39;, &#39;Jul&#39;, &#39;Ago&#39;, &#39;Set&#39;, &#39;Out&#39;, &#39;Nov&#39;, &#39;Dez&#39;)";
$l_log_pod = "Felizmente, voc� tinha uma c�psula de escape!";
$l_log_nopod 		 = "<font color=yellow><b>You did not have an escape pod, you died.</b></font>";
$l_log_log = "[player] &#39;s Log";
$l_log_start = "Entrar entrada para";
$l_log_end = "Fim da entrada de log para";
$l_log_click 		 = "Click <A HREF=main.php><font color=#00ff00>here</font></A> to return to the main menu.";
$l_log_select = "Selecione um Log:";
$l_log_general = "Registro Geral";
$l_log_dig = "Dignit�rio Entrar";
$l_log_spy = "Spy Entrar";
$l_log_disaster = "Desastres Planet Entrar";
$l_log_nova = "Dispositivo Nova Entrar";
$l_log_attack = "Ataque Entrar";
$l_log_scan = "Registo de Verifica��o";
$l_log_starv = "Planeta Fome Entrar";
$l_log_probe = "Sonda Entrar";
$l_log_autotrade = "Auto Com�rcio Entrar";
$l_log_combined = "Combinada Entrar";


// Log entry data

$l_log_text["LOG_LOGIN"] = "Voc� se identificou, a partir de [ip].";
$l_log_title["LOG_LOGIN"] = "Identificados";
$l_log_text["LOG_LOGOUT"] = "Voc� saiu, a partir de [ip].";
$l_log_title["LOG_LOGOUT"] = "Logged out";

// General Log Entries

$l_log_title["LOG0_ADMIN_DBERROR"] = "Database Error Occurred";
$l_log_title["LOG0_ADMIN_COMBAT"] = "Resultado de Ac��o de Combate";
$l_log_title["LOG0_RAW"] = "Aviso";
$l_log_text["LOG0_PLANET_EJECT"] = "Voc� foi expulso do planeta no setor [sector] porque [name] saiu do time.";
$l_log_title["LOG0_PLANET_EJECT"] = "Ejected!";
$l_log_text["LOG0_BADLOGIN"] = "Houve uma tentativa de login m� [ip].";
$l_log_title["LOG0_BADLOGIN"] = "Bad login";
$l_log_title["LOG0_TOW"] = "Rebocado!";
$l_log_text["LOG0_TOW"] = "Seu navio foi rebocado pelo setor [sector] para o setor [newsector], porque o seu n�vel m�dio de tecnologia excedeu o valor limite de [hull] ou voc� tem um navio de armazenamento.";
$l_log_text["LOG0_HARAKIRI"] = "Voc� estava cansada de capitanear esta barca do espa�o, assim que voc� decidiu que o Universo estaria melhor sem ele. Autorizado por [ip].";
$l_log_title["LOG0_HARAKIRI"] 		= "<font color=red>Self-destructed!</font>";
$l_log_text["LOG0_TEAM_REJECT"] = "[player] rejeitou o convite para integrar a sua equipa, [teamname].";
$l_log_title["LOG0_TEAM_REJECT"] = "Convite rejeitado";
$l_log_text["LOG0_TEAM_RENAME"] = "Voc� tem mudado a sua equipa a equipa [team].";
$l_log_title["LOG0_TEAM_RENAME"] = "Equipe renomeado";
$l_log_text["LOG0_TEAM_M_RENAME"] = "Seu coordenador de equipe renomeou a equipa para equipa [team].";
$l_log_title["LOG0_TEAM_M_RENAME"] = "Equipe renomeado";
$l_log_text["LOG0_TEAM_KICK"] = "Voc� foi expulso do time [team].";
$l_log_title["LOG0_TEAM_KICK"] = "Ejetado da equipe!";
$l_log_text["LOG0_TEAM_CREATE"] = "Voc� criou uma nova equipa, [team].";
$l_log_title["LOG0_TEAM_CREATE"] = "Criado novo time";
$l_log_text["LOG0_TEAM_LEAVE"] = "Voc� deixou a equipa [team].";
$l_log_title["LOG0_TEAM_LEAVE"] = "Equipe de Esquerda";
$l_log_text["LOG0_TEAM_NEWLEAD"] = "Voc� deixou o time [team]. Voc� abandonou a lideran�a da equipa para [name].";
$l_log_title["LOG0_TEAM_NEWLEAD"] = "Equipe de Esquerda";
$l_log_text["LOG0_TEAM_LEAD"] = "Seu coordenador de equipe decidiu sair [team]. Voc� foi designado para ocupar o seu lugar.";
$l_log_title["LOG0_TEAM_LEAD"] = "Promo��o!";
$l_log_text["LOG0_TEAM_JOIN"] = "Voc� se juntaram � equipe [team].";
$l_log_title["LOG0_TEAM_JOIN"] = "Registrado em equipe";
$l_log_text["LOG0_TEAM_NEWMEMBER"] = "[name], aceitou participar [team]. Isto traz-lhe mais um passo para a domina��o da gal�xia.";
$l_log_title["LOG0_TEAM_NEWMEMBER"] = "Novo membro da equipe";
$l_log_text["LOG0_TEAM_INVITE"] = "Voc� foi convidado para fazer parte [team].";
$l_log_title["LOG0_TEAM_INVITE"] = "Convite";
$l_log_text["LOG0_TEAM_NOT_LEAVE"] = "[player] deixou a sua equipa.";
$l_log_title["LOG0_TEAM_NOT_LEAVE"] = "Equipe perde um membro";
$l_log_text["LOG0_ADMIN_HARAKIRI"] = "[player] se autodestruiu de ip [ip].";
$l_log_title["LOG0_ADMIN_HARAKIRI"] = "Autodestrui��o";
$l_log_text["LOG0_ADMIN_ILLEGVALUE"] = "[player] tinha [quantity] [type], com no m�ximo tem de [holds]";
$l_log_title["LOG0_ADMIN_ILLEGVALUE"] = "Valor ilegal navio";
$l_log_text["LOG0_ADMIN_PLANETDEL"] = "[attacker] tentou capturar [defender] &#39;s planeta no sector [sector]. Planeta foi destru�do em vez disso.";
$l_log_title["LOG0_ADMIN_PLANETDEL"] = "Planet destru�dos";
$l_log_text["LOG0_defense_DEGRADE"] = "Fighters Setor defesas no sector [sector] degradadas por [degrade] por cento, devido � energia insuficiente.";
$l_log_title["LOG0_defense_DEGRADE"] = "Defesas Setor degradadas.";
$l_log_text["LOG0_CHEAT_TEAM"] = "Player [player] no endere�o IP [ip] tentou explorar a qualquer um chute da equipe batota. Seu navio foi destru�do.";
$l_log_title["LOG0_CHEAT_TEAM"] = "Equipe Exploit Usado";
$l_log_text["LOG0_BOUNTY_CLAIMED"] = "Voc� reivindicou uma recompensa de [amount] de cr�ditos para a destrui��o do navio pertencente bounty_on [bounty_on]. O pr�mio foi colocado por [placed_by].";
$l_log_title["LOG0_BOUNTY_CLAIMED"] = "Bounty anunciada.";
$l_log_text["LOG0_BOUNTY_PAID"] = "Sua recompensa em [bounty_on] tiver sido pago o montante de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_PAID"] = "Bounty pago.";
$l_log_text["LOG0_BOUNTY_TAX_PAID"] = "A generosidade Fedration em [bounty_on], foi taxado pelo valor de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_TAX_PAID"] = "Bounty Imposto Pago.";
$l_log_text["LOG0_BOUNTY_CANCELLED"] = "Sua recompensa em [bounty_on] para o montante de [amount] cr�ditos foi restitu�do.";
$l_log_title["LOG0_BOUNTY_CANCELLED"] = "Bounty Reembolsado.";
$l_log_text["LOG0_BOUNTY_FEDBOUNTY"] = "A Federa��o tem colocado uma recompensa por voc�, no valor de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_FEDBOUNTY"] = "Federa��o Bounty!";
$l_log_text["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "A Alian�a tem colocado uma recompensa por voc�, no valor de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "Alian�a Bounty!";
$l_log_text["LOG0_IGB_TRANSFER1"] = "Cr�ditos Player [name] transferido [sum] soma � sua conta do IGB.";
$l_log_title["LOG0_IGB_TRANSFER1"] = "Cr�ditos transferidos";
$l_log_text["LOG0_IGB_TRANSFER2"] = "Transferiu [sum] soma de cr�ditos para o jogador [name] &#39;s IGB conta.";
$l_log_title["LOG0_IGB_TRANSFER2"] = "Cr�ditos transferidos";
$l_log_text["LOG0_ADMIN_PLANETIND"] = "[sector] planeta planetname [planetname] (planetid [planetname]) owned by [owner] tornou-se independente. M�dia Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_PLANETIND"] = "Planet fui independente.";
$l_log_text["LOG0_ADMIN_INDYPURGE"] = "Independente do planeta [planetname] (planetid [planetid]) owned by [owner] no [sector] foi eliminada. M�dia Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_INDYPURGE"] = "Independente Planet purgado.";
$l_log_text["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Nunca planeta Owned [planetname] (planetid [planetid]), criado em [date] no [sector] foi eliminada. M�dia Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Nunca Owned Planet purgado.";
$l_log_text["LOG0_TEAM_CANCEL"] = "Voc� est� convite para fazer parte [team] foi cancelada.";
$l_log_title["LOG0_TEAM_CANCEL"] = "Convite Cancelado";

// Dignitary Log Entries

$l_log_text["LOG1_DIG_PRODUCTION"] = "A id [id] no planeta [planet_name] no sector [sector] Tem in�cio a constru��o de produ��o.";
$l_log_title["LOG1_DIG_PRODUCTION"] = "<font color=#00FF00>Production Building  Started!</font>";
$l_log_text["LOG1_DIG_BIRTHDEC"] = "A id [id] no planeta [planet_name] no sector [sector] decrescente taxa de natalidade.";
$l_log_title["LOG1_DIG_BIRTHDEC"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG1_DIG_BIRTHINC"] = "A id [id] no planeta [planet_name] no setor [sector] crescente taxa de natalidade.";
$l_log_title["LOG1_DIG_BIRTHINC"] = "<font color=#00FF00>Birthrate Increased!</font>";
$l_log_text["LOG1_DIG_SPYHUNT"] = "A id [id] no planeta [planet_name] no sector [sector] come�ou a procurar por spys naquele planeta.";
$l_log_title["LOG1_DIG_SPYHUNT"] = "<font color=#00FF00>Spy Hunter!</font>";
$l_log_text["LOG1_DIG_INTEREST"] = "A id [id] no planeta [planet_name] no sector [sector] come�a a aumentar a produ��o de cr�dito.";
$l_log_title["LOG1_DIG_INTEREST"] = "<font color=#00FF00>Interest Building Started!</font>";
$l_log_text["LOG1_DIG_MONEY"] = "Dignit�rio [id] no planeta planet_name [planet_name] desviou [data] cr�ditos e doados para voc�!";
$l_log_title["LOG1_DIG_MONEY"] = "<font color=#00FF00>You Recieved Embezzled  Credits!</font>";
$l_log_text["LOG1_DIG_KILLED_SPY"] = "Seu jogador dignit�rio detectado [name] &#39;s espi�o em seu planeta [planet_name] no sector [sector]. O espi�o � morto agora.";
$l_log_title["LOG1_DIG_KILLED_SPY"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG1_DIG_CATACLYSM"] = "Sua escava��o [id] no planeta [planet_name] no sector [sector] morreu v�tima de um terr�vel cataclismo com o planeta.";
$l_log_title["LOG1_DIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_SHIPDIG_CATACLYSM"] = "Sua escava��o [id] sobre o jogador [name] &#39;s navio [shipname] morreu v�tima de um terr�vel cataclismo com esse navio.";
$l_log_title["LOG1_SHIPDIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_DIG_TORPS"] = "A id [id] no planeta [planet_name] no sector [sector], constru�do [data] planet�ria torpedos!";
$l_log_title["LOG1_DIG_TORPS"] = "<font color=#00FF00>Torpedoes Built!</font>";
$l_log_text["LOG1_DIG_FITS"] = "A id [id] no planeta [planet_name] no sector [sector], constru�do [data] combatentes planet�ria!";
$l_log_title["LOG1_DIG_FITS"] = "<font color=#00FF00>Fighters Built!</font>";

// Spy Log Entries

$l_log_text["LOG2_SPY_NEWSHIP"] = "Voc� perdeu seu espi�o [id] [name] &#39;s navio [shipname], uma vez que o jogador comprou um novo navio.";
$l_log_title["LOG2_SPY_NEWSHIP"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_SEND_FAIL"] = "[name] tentou enviar um espi�o para o seu planeta [planet_name] no sector [sector], mas seus sensores detectaram a espionagem e ele est� morto agora.";
$l_log_title["LOG2_SPY_SEND_FAIL"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG2_SPY_SABOTAGE"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] come�a a sabotagem. A produ��o � reduzida por [data] sobre esse planeta.";
$l_log_title["LOG2_SPY_SABOTAGE"] = "<font color=#00FF00>Sabotage Started!</font>";
$l_log_text["LOG2_SPY_BIRTH"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] diminuiu o �ndice de natalidade por [data] sobre esse planeta.";
$l_log_title["LOG2_SPY_BIRTH"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG2_SPY_INTEREST"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] inicia a coleta de juros planeta [data] para voc�.";
$l_log_title["LOG2_SPY_INTEREST"] = "<font color=#00FF00>Interest Stealing Started!</font>";
$l_log_text["LOG2_SPY_MONEY"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] roubou [data] cr�ditos para voc�!";
$l_log_title["LOG2_SPY_MONEY"] = "<font color=#00FF00>Credits Have Stolen!</font>";
$l_log_text["LOG2_SPY_TORPS"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] destru�dos [data] planet�ria torpedos!";
$l_log_title["LOG2_SPY_TORPS"] = "<font color=#00FF00>Torpedoes Destroyed!</font>";
$l_log_text["LOG2_SPY_FITS"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] destru�dos [data] combatentes planet�ria!";
$l_log_title["LOG2_SPY_FITS"] = "<font color=#00FF00>Fighters Destroyed!</font>";
$l_log_text["LOG2_SPY_CPTURE"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] capturou esse planeta! Voc� � um cara de sorte ...";
$l_log_title["LOG2_SPY_CPTURE"] = "<font color=#00FF00>PLANET CAPTURED!</font>";
$l_log_text["LOG2_SPY_CPTURE_OWNER"] = "[name] &#39;s espi�o capturado o planeta [planet_name] no sector [sector]! Parece que a id�ia � s�bio limpeza de seus planetas mais freq��ncia ...";
$l_log_title["LOG2_SPY_CPTURE_OWNER"] = "<font color=red>Planet Lost!</font>";
$l_log_text["LOG2_SPY_KILLED_SPYOWNER"] = "N�o h� mensagens em seu espi�o [id] no planeta [planet_name] no sector [sector], por um longo tempo - parece que a capa de seu dispositivo n�o poderia cobrir o suficiente e ele � morto.";
$l_log_title["LOG2_SPY_KILLED_SPYOWNER"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_KILLED"] = "Seu Sensores detectaram um nome [name] &#39;s espi�o em seu planeta [planet_name] no sector [sector]. O espi�o � morto agora.";
$l_log_title["LOG2_SPY_KILLED"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG2_SHIPSPY_KILLED"] = "N�o h� mensagens em seu espi�o [id] sobre o jogador [name] &#39;s navio [shipname] h� muito tempo - parece que a capa de seu dispositivo n�o poderia cobrir o suficiente e ele � morto.";
$l_log_title["LOG2_SHIPSPY_KILLED"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_CATACLYSM"] = "Seu espi�o [id] no planeta [planet_name] no sector [sector] morreu v�tima de um terr�vel cataclismo com o planeta.";
$l_log_title["LOG2_SPY_CATACLYSM"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SHIPSPY_CATACLYSM"] = "Seu espi�o [id] sobre o jogador [name] &#39;s navio [shipname] morreu v�tima de um terr�vel cataclismo com esse navio.";
$l_log_title["LOG2_SHIPSPY_CATACLYSM"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_TOSHIP"] = "Seu espi�o [id] do planeta [planet_name] no sector [sector] infiltra um jogador [playername] &#39;s navio [shipname] e os actos agora l�.";
$l_log_title["LOG2_SPY_TOSHIP"] = "<font color=#00FF00>Spy Infiltrates Enemy Ship!</font>";
$l_log_text["LOG2_SPY_TOPLANET"] = "Seu espi�o [id] do jogador [playername] &#39;s navio [shipname] se infiltra em um planeta [planet_name] no sector [sector] e os actos agora l�.";
$l_log_title["LOG2_SPY_TOPLANET"] = "<font color=#00FF00>Spy Infiltrates Enemy Planet!</font>";
$l_log_text["LOG2_SPY_FOUND_EMBEZZLER"] = "Seu n�mero de dignit�rio [DIG] no planeta [PLANET], foi capturado estelionat�rio. Voc� pode querer anul�-las.";
$l_log_title["LOG2_SPY_FOUND_EMBEZZLER"] 	= "<font color=yellow>Embezzler found!</font>";

// Nova Bomb Logs

$l_log_text["LOG4_PLANET_novaED_D"] = "Seu planeta [planet_name] no sector [sector] foi destru�da com uma bomba de Nova por [name]. Absolutamente nada, continua a marcar os planetas exist�ncia anterior.";
$l_log_title["LOG4_PLANET_novaED_D"] 	= "<font color=yellow>Planet destroyed with a Nova Bomb</font>";
$l_log_text["LOG4_SHIP_novaED_D"] = "Seu navio foi destru�do com uma Nova Bombardeado por [name].";
$l_log_title["LOG4_SHIP_novaED_D"] 	= "<font color=yellow>Ship destroyed with a Nova Bomb</font>";

// Attack Logs

$l_log_text["LOG5_PLANET_BOMBED"] = "Seu planeta [planet_name] no sector [sector] foi bombardeada por [name]. Voc� usou [beams] ea energia [torps] torpedos em sua defesa. Voc� perdeu [figs] combatentes.";
$l_log_title["LOG5_PLANET_BOMBED"] = "<font color=red>Planet bombed!</font>";
$l_log_text["LOG5_PLANET_YOUR_CAPTURED"] = "Seu planeta [planet_name] no sector [sector], foi derrotado e capturado pelos miser�veis [name].";
$l_log_title["LOG5_PLANET_YOUR_CAPTURED"]  = "<font color=red>Planet captured!</font>";
$l_log_text["LOG5_ATTACK_OUTMAN"] = "[player] foi flagrado em um vetor de ataque, mas suas habilidades grande piloto e bons motores permitiu-lhe passar a perna ao inimigo.";
$l_log_title["LOG5_ATTACK_OUTMAN"] = "A��o evasiva!";
$l_log_text["LOG5_ATTACK_OUTSCAN"] = "Voc� detectou [player] &#39;s tentando consertar as armas em seu navio, mas os geradores seu manto conseguiu enganar os circuitos do inimigo sensor primitivo.";
$l_log_title["LOG5_ATTACK_OUTSCAN"] = "Manto de sucesso!";
$l_log_text["LOG5_ATTACK_EWD"] = "Voc� est� surpreso por [player] O ataque trai�oeiro. Voc� pode ver as ogivas de entrada como chegar freneticamente para o bot�o de urdidura de emerg�ncia. A borra mundo ao seu redor e, por um milisegundo, voc� pensa que voc� est� morto. Quando voc� finalmente abrir os olhos, voc� ver� que foram transportados com seguran�a em outros lugares. Mas onde exatamente, n�o sei ...";
$l_log_title["LOG5_ATTACK_EWD"] = "Urdidura de Emerg�ncia!";
$l_log_text["LOG5_ATTACK_EWDFAIL"] = "Seu sensores detectam [player] &#39;s do navio em um vetor de ataque. &quot;� melhor prevenir do que remediar&quot;, voc� pensa, bater no bot�o urdidura de emerg�ncia. Voc� ouve um barulho estranho vindo de asfixia na sala de motores e cheiro de queimado circuitos. &quot;Peda�o est�pido de merda!&quot;, Voc� gritar, chutar no computador. O computador emite sinais sonoros de protesto como se preparar para a batalha de entrada ...";
$l_log_title["LOG5_ATTACK_EWDFAIL"] 	= "Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_ATTACK_LOSE"] = "Seu navio est� sendo atacado por [player]. Tente como voc� pode, voc� n�o pode defender-se contra o [player] &#39;s armamento superior. Seu navio foi destru�do.";
$l_log_title["LOG5_ATTACK_LOSE"] 		= "<font color=red>Combat lost!</font>";
$l_log_text["LOG5_ATTACKED_WIN"] = "Seu barco foi atacado por [player]. Voc� batalha por um tempo, ent�o, a luta quebre. Voc� perdeu [armor] pontos de armadura e [fighters] combatentes no conflito.";
$l_log_title["LOG5_ATTACKED_WIN"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_HIT_MINES"] = "Voc� bateu [mines] minas quando viajam sector [sector].";
$l_log_title["LOG5_HIT_MINES"] 		= "<font color=yellow>Mines alert!</font>";
$l_log_text["LOG5_SHIP_DESTROYED_MINES"] = "Seu navio foi destru�do por um campo minado no sector [sector].";
$l_log_title["LOG5_SHIP_DESTROYED_MINES"] 	= "<font color=red>Mines alert!</font>";
$l_log_text["LOG5_PLANET_DEFEATED_D"] = "Seu planeta [planet_name] no sector [sector] foi derrotado na batalha por [name]. Felizmente, a forte lealdade de seus cidad�os jogado em seu favor. Eles t�m escolhido bravamente para destruir o planeta, em vez de t�-lo cair em m�os inimigas. Voc� organiza funerais soberba, a mem�ria de seu povo fiel.";
$l_log_title["LOG5_PLANET_DEFEATED_D"] 	= "<font color=yellow>Planet destroyed</font>";
$l_log_text["LOG5_PLANET_DEFEATED"] = "Seu planeta [planet_name] no sector [sector] foi derrotado na batalha pelos miser�veis [name]. Os povos do planeta, bem-vindo o novo governador. Voc� ouve um testemunho sobre FNN: &quot;N�s estamos contentes de ser livrado desse velhote! N�s n�o queremos nenhum perdedor fedorentos que n�o podem proteger-nos!&quot;. Voc� jura para faz�-los pagar por sua arrog�ncia.";
$l_log_title["LOG5_PLANET_DEFEATED"] 	= "<font color=red>Planet defeated!</font>";
$l_log_text["LOG5_PLANET_NOT_DEFEATED"] = "Seu planeta [planet_name] no sector [sector] foi atacado por [name]. Os cidad�os organizaram uma defesa Valliant no entanto, e conseguiram destruir o advers�rio. Eles salvar alguns recursos dos detritos espaciais: [goods] bens, [ore] min�rio, [organics] org�nicas e [salvage]% do valor do navio de [credits] cr�ditos.";
$l_log_title["LOG5_PLANET_NOT_DEFEATED"] = "Vit�ria!";
$l_log_text["LOG5_DEFS_DESTROYED"] = "[quantity] [type] foram destru�dos no sector [sector].";
$l_log_title["LOG5_DEFS_DESTROYED"] = "Setor defesas destru�das";
$l_log_text["LOG5_KABAL_ATTACK"] = "Atacando [player] ...";
$l_log_title["LOG5_KABAL_ATTACK"] = "Ataque";
$l_log_text["LOG5_DEFS_DESTROYED_F"] = "Voc� destruiu [fighters] combatentes patrulhamento no setor [sector].";
$l_log_title["LOG5_DEFS_DESTROYED_F"] = "Fighters destru�dos";
$l_log_text["LOG5_DEFS_KABOOM"] = "Voc� foi destru�da por uma for�a de combatentes no sector [sector].";
$l_log_title["LOG5_DEFS_KABOOM"] 		= "<font color=red>Ship destroyed!</font>";
$l_log_text["LOG5_PLANET_CAPTURED"] = "Voc� capturou um planeta pertencente ao propriet�rio [owner]. Tinha [cols] colonos e dos [credits] cr�ditos sobre ele.";
$l_log_title["LOG5_PLANET_CAPTURED"] = "Planet capturado!";
$l_log_text["LOG5_STORAGE_EWD"] = "Seu planeta � surpreendido por [player] &#39;s ataque. Um de seus navios armazenados fez uma urdidura de emerg�ncia para o setor [sector] e pousou no planeta [planet]";
$l_log_title["LOG5_STORAGE_EWD"] = "Armazenado Ship warp Emerg�ncia!";
$l_log_text["LOG5_STORAGE_EWDFAIL"] = "Um dispositivo de emerg�ncia navios armazenados Warp FAILED! O navio foi capturado por armazenados [player] depois de terem derrotado o seu planeta!";
$l_log_title["LOG5_STORAGE_EWDFAIL"] 	= "Stored Ship Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_STORAGE_CAPTURED"] = "Um navio foi capturado por armazenados [player] depois de terem derrotado um de seus planetas!";
$l_log_title["LOG5_STORAGE_CAPTURED"] 	= "Stored Ship <font color=red>CAPTURED!</font>";
$l_log_text["LOG5_CONFISCATION"] = "Seu navio foi confiscado por [player]. N�o aos ataques excessivos jogadores generosidade do jogador [player], foi confiscado um de seus navios (navio [player]).";
$l_log_title["LOG5_CONFISCATION"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_PLANET_CONFISCATION"] = "Seu planeta foi confiscado por [player]. N�o aos ataques excessivos jogadores generosidade do jogador [player], foi confiscado um de seus planetas (nome [player]) no sector [sector] vale [score] cr�ditos.";
$l_log_title["LOG5_PLANET_CONFISCATION"] 		= "<font color=yellow>Planetary Skirmish!</font>";
$l_log_text["LOG5_STORAGE_SUICIDE"] = "Um navio armazenados suicidado quando [player] derrotou um de seus planetas e tentou captur�-lo!";
$l_log_title["LOG5_STORAGE_SUICIDE"] 	= "Stored Ship <font color=red>SUICIDE!</font>";

$l_log_text["LOG5_SM_ATTACK"] = "";
$l_log_title["LOG5_SM_ATTACK"] 	= "<font color=red>INCOMING SECTOR MISSILE DETECTED</font>";
$l_log_text["LOG5_SM_OUTMAN"] = "Um m�ssil disparado por Sector [player] foi detectada distor��o no setor e que escapou do ataque.";
$l_log_title["LOG5_SM_OUTMAN"] = "Setor de M�sseis a��o evasiva!";
$l_log_text["LOG5_SM_OUTSCAN"] = "Voc� detectou [player] &#39;s uma entrada do Setor de M�sseis tentando consertar a sua nave, mas os geradores seu manto conseguiu enganar o Setor de circuitos sensores M�sseis.";
$l_log_title["LOG5_SM_OUTSCAN"] = "Setor de M�sseis Manto de sucesso!";
$l_log_text["LOG5_SM_EWD"] = "Voc� est� surpreso por [player] &#39;s Setor de ataque de m�sseis e envolver o dispositivo de emerg�ncia Warp saltar para um setor desconhecido.";
$l_log_title["LOG5_SM_EWD"] = "Setor de M�sseis warp Emerg�ncia!";
$l_log_text["LOG5_SM_EWDFAIL"] = "Seu sensores detectam [player] &#39;s Setor de ataque de m�sseis e envolver o dispositivo de emerg�ncia Warp. Voc� ouve um barulho estranho vindo de asfixia na sala de motores e cheiro de queimado circuitos. &quot;Peda�o est�pido de merda!&quot;, Voc� gritar, chutar no computador. Voc� preparar para impacto!";
$l_log_title["LOG5_SM_EWDFAIL"] 	= "Sector Missile Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_SM_WIN"] = "Seu barco foi atacado por [player], utilizando um m�ssil Setor. Voc� perdeu [armor] pontos de armadura e [energy] unidades de energia no ataque.";
$l_log_title["LOG5_SM_WIN"] 		= "<font color=yellow>Sector Missile IMPACT!</font>";
$l_log_text["LOG5_SM_LOSE"] = "Seu navio foi destru�do por um m�ssil do Setor de [player].";
$l_log_title["LOG5_SM_LOSE"] 		= "<font color=red>Sector Missile Combat Lost!</font>";

$l_log_text["LOG5_SURVIVE_PROBE_ATTACK"] = "Seu barco foi atacado por uma sonda de propriedade de [player] no sector [sector]. Voc� perdeu [armor] pontos de armadura e [energy] unidades de energia no ataque.";
$l_log_title["LOG5_SURVIVE_PROBE_ATTACK"] 		= "<font color=yellow>Probe ATTACK!</font>";
$l_log_text["LOG5_PROBE_ATTACK_FAILED"] = "[player] sobreviveu a um ataque por sua sonda no sector [sector].";
$l_log_title["LOG5_PROBE_ATTACK_FAILED"] 		= "<font color=red>Probe Attack FAILED!</font>";
$l_log_text["LOG5_PROBE_ATTACK_SUCCEEDED"] = "Seu destruiu o navio sonda de propriedade de [player] no sector [sector].";
$l_log_title["LOG5_PROBE_ATTACK_SUCCEEDED"] 		= "<font color=red>Probe Attack Succeeded!</font>";
$l_log_text["LOG5_DESTROYED_PROBE_ATTACK"] = "Seu navio foi destru�do por uma sonda de [player] no sector [sector].";
$l_log_title["LOG5_DESTROYED_PROBE_ATTACK"] 		= "<font color=red>Probe Attack Lost!</font>";
$l_log_title["LOG5_AFTER_ACTION"] = "Depois de Ac��o Relat�rio de Combate";

// Scan Logs

$l_log_text["LOG6_PLANET_SCAN"] = "[name], foi verificado o seu planeta [planet_name] no sector [sector].";
$l_log_title["LOG6_PLANET_SCAN"] = "Planet scan";
$l_log_text["LOG6_PLANET_SCAN_FAIL"] = "[name] tentou fazer a varredura de seu planeta [planet_name] no sector [sector], mas n�o conseguiu.";
$l_log_title["LOG6_PLANET_SCAN_FAIL"] = "Planet digitaliza��o falhou";
$l_log_text["LOG6_SHIP_SCAN"] = "[player], foi verificado o seu navio.";
$l_log_title["LOG6_SHIP_SCAN"] = "Envio de digitaliza��o";
$l_log_text["LOG6_SHIP_SCAN_FAIL"] = "[player] tentou analisar o seu navio, mas n�o conseguiu.";
$l_log_title["LOG6_SHIP_SCAN_FAIL"] = "Envio de digitaliza��o falhou";

// Starvation Logs

$l_log_text["LOG7_STARVATION"] = "Planet [name] no [sector], n�o pode sustentar a sua popula��o! Mais produtos org�nicos s�o necess�rios. [starvation] colonos morreu de fome. Os colonos come�aram a passar fome [date].";
$l_log_title["LOG7_STARVATION"] 		= "<font color=yellow>Starvation!</font>";

// Probe Logs

$l_log_text["LOG9_PROBE_DETECTED_SHIP"]="<font color=yellow>Your probe id [id] detected [ship_name] entering sector [sector]</font>";
$l_log_title["LOG9_PROBE_DETECTED_SHIP"] = "Sonda Detectado entrada de navios";
$l_log_text["LOG9_PROBE_SCAN_SHIP"]="<font color=yellow>Your probe id [id] scanned [ship_name] entering sector [sector]<br>Hull: [hull] Engines: [engines] Power: [power] Fighter Bay: [fighter] Sensors: [sensors] Beams: [beams] Torp Launchers: [torps] Armor: [armor] Shields: [shields] Cloak: [cloak]<br>Armor Points: [armor_pts] Fighters: [fighters] Torpedoes: [avail_torps] Ship Energy: [energy] Credits: [credits] <br>Mine Deflectors: [deflectors] Emergency Warp: [ewd] Escape Pod: [pod] ECM: [ecm]</font>";
$l_log_title["LOG9_PROBE_SCAN_SHIP"] = "Scanned Probe entrada de navios";
$l_log_text["LOG9_PROBE_DESTROYED"]="<font color='#00ff00'>SECTOR defenses in [sector] destroy your probe.</font>";
$l_log_title["LOG9_PROBE_DESTROYED"] = "Sonda Destroyed";
$l_log_text["LOG9_PROBE_NOTURNS"]="<font color='#00ff00'>You do not have enough turns for probe [probe_id] to move to [sector]</font>";
$l_log_title["LOG9_PROBE_NOTURNS"] = "Sonda Report";
$l_log_text["LOG9_PROBE_INVALIDSECTOR"] = "<font color='#00ff00'>Moving to sector [target_sector] is not allowed</font>";
$l_log_title["LOG9_PROBE_INVALIDSECTOR"] = "Sonda Report";
$l_log_text["LOG9_PROBE_DETECTPROBE"]="<font color='#00ff00'>Probe [probe_id] in sector [sector] detected [probe_detect]</font>";
$l_log_title["LOG9_PROBE_DETECTPROBE"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_DETECTED_GATEWAY"]="<font color='#00ff00'>Seeker Probe [probe_id] in sector [sector] detected a Gateway Sector</font>";
$l_log_title["LOG9_PROBE_DETECTED_GATEWAY"] 		= "[probe_type] <font color='yellow'>Seeker Probe Report</font>";

$l_log_text["LOG9_PROBE_SCAN_FAIL"] = "[name] tentou digitalizar uma de suas sondas no sector [sector], mas n�o conseguiu.";
$l_log_title["LOG9_PROBE_SCAN_FAIL"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_SCAN"] = "Uma de suas sondas no sector sector [sector] foi digitalizada por [name].";
$l_log_title["LOG9_PROBE_SCAN"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_ATTACKED"] = "Uma de suas sondas no sector sector [sector] foi atacado e destru�do por [name].";
$l_log_title["LOG9_PROBE_ATTACKED"] 		= "[probe_type] <font color='yellow'>Probe Destroyed</font>";

$l_log_text["LOG9_PROBEHUNTER_SUCCEED"] = "Um de seus Probe Hunters destruiu um probe_type [probe_type] propriedade de [name] no [sector].";
$l_log_title["LOG9_PROBEHUNTER_SUCCEED"] = "Sonda Hunter destru�dos [probe_type]";
$l_log_text["LOG9_PROBEHUNTER_DESTROYED"] = "Seu probe_type [probe_type] no sector [sector] foi atacado e destru�do por um ca�ador Probe propriedade de [name].";
$l_log_title["LOG9_PROBEHUNTER_DESTROYED"] 		= "[probe_type] <font color='yellow'>Probe Attacked and Destroyed</font>";
$l_log_text["LOG9_PROBEHUNTER_EXPLODED"] = "Seu Probe Hunter no sector [sector] foi perdida quando a explos�o resultante do seu ataque � probe_type [probe_type] propriedade de [name] envolveu-lo.";
$l_log_title["LOG9_PROBEHUNTER_EXPLODED"] 		= "Probe Hunter Probe <font color='yellow'>Destroyed</font>";

// Auto Trade Logs

$l_log_text["LOG10_AUTOTRADE"]="<font color=yellow>Auto Trade for [planetname] in sector [sector] for [totalcost] credits.<br>Goods: [goodsamount] @ [goodsprice] credits - Ore: [oreamount] @ [oreprice] credits - Organics: [organicsamount] @ [organicsprice] credits - Energy: [energyamount] @ [energyprice] credits - Colonists: [colonistamount] @ [colonistprice] credits<br></font>";
$l_log_title["LOG10_AUTOTRADE"] = "Auto Trade Report";
$l_log_text["LOG10_AUTOTRADE_ABORTED"]="<font color='#00ff00'>Auto Trade for [planetname] in sector [sector] was aborted due to enemy sector defense in sector [destsector].<br></font>";
$l_log_title["LOG10_AUTOTRADE_ABORTED"] = "Auto Trade Report";

?>
