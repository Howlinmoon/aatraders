<?php
$l_log_months 		 = array('Enero','Febrero','Marzo','Abril','Mayo','Junio','Julio','Agosto','Septiembre','Octubre','Noviembre','Diciembre');
$l_log_months_short 	 = array('Ene','Feb','Mar','Abr','May','Jun','Jul','Ago','Sep','Oct','Nov','Dic');
$l_log_pod 		 = "�Afortunadamente tienes una c�psula de escape!";
$l_log_nopod 		 = "<font color=yellow><b>No tienes c�psula de escape, has muerto.</b></font>";
$l_log_log 		 = "Registro de [player]";
$l_log_start 		 = "Registro de";
$l_log_end 		 = "Final del registro de";
$l_log_click 		 = "Haz clic <A HREF=main.php><font color=#00ff00>aqu�</font></A> para volver al men� principal.";
$l_log_select = "Seleccione un registro de:";
$l_log_general = "Registro general de";
$l_log_dig = "Dignatario Registrarse";
$l_log_spy = "Spy Registrarse";
$l_log_disaster = "Planet Desastres Registrarse";
$l_log_nova = "Nova dispositivo de registro";
$l_log_attack = "Ataque Registrarse";
$l_log_scan = "Scan Log";
$l_log_starv = "Planet hambre Registrarse";
$l_log_probe = "Sonda de Registro";
$l_log_autotrade = "Auto Registro de Comercio";
$l_log_combined = "Combinada Registrarse";

$l_log_text["LOG_LOGIN"] 	 = "Te has conectado desde [ip].";
$l_log_title["LOG_LOGIN"]  = "Conectado";
$l_log_text["LOG_LOGOUT"]  = "Te has desconectado desde [ip].";
$l_log_title["LOG_LOGOUT"] = "Desconectado";
$l_log_text["LOG5_ATTACK_OUTMAN"] 		= "[player] fue descubierto a punto de atacarte, pero tus increible habilidad como piloto y unos buenos motores te permitieron esquivar al enemigo.";
$l_log_title["LOG5_ATTACK_OUTMAN"] 	= "�Acci�n evasiva!";
$l_log_text["LOG5_ATTACK_OUTSCAN"] 	= "Detectaste las armas de [player] apunt�ndote, pero tus generadores de camuflaje consiguieron enga�ar a los poco avanzados sensores del enemigo.";
$l_log_title["LOG5_ATTACK_OUTSCAN"] 	= "�Funcion� el camuflaje!";
$l_log_text["LOG5_ATTACK_EWD"] 		= "Has sido sorprendido por el traicionero ataque de [player]. Puedes ver las puntas de combate de los torpedos, mientras llegas fen�ticamente al bot�n de de salto de emergencia. Todo a tu alrededor se vuelve borroso, por un milisegundo, crees estar muerto. Cuando finalmente abres los ojos, ves que fuiste transportado de forma segura a alg�n sitio. Pero d�nde, no lo sabes...";
$l_log_title["LOG5_ATTACK_EWD"] 		= "�Salto de Emergencia!";
$l_log_text["LOG5_ATTACK_EWDFAIL"] 	= "Tus sensores detectaron a la nave de [player] intentando atacarte. \"M�s vale salvar el pellejo que lamentarlo\", piensas, apretando el bot�n de salto de emergencia. Entonces escuchas un extra�o sonido viniendo de la sala de motores y hueles a circuito quemado. \"Menuda cafetera!\", gritas, golpeando la computadora. La computadora lanza unos beeps de protesta mientras te preparas para la batalla que se avecina...";
$l_log_title["LOG5_ATTACK_EWDFAIL"] 	= "Salto de Emergencia ... <font color=red>�fallido!</font>";
$l_log_text["LOG5_ATTACK_LOSE"] 		= "Tu nave est� siendo atacada por [player]. Lo intentas con todas tus fuerzas, pero no puedes defenderte del superior armamento de [player]. Tu nave es destruida. ";
$l_log_title["LOG5_ATTACK_LOSE"] 		= "<font color=red>�Combate perdido!</font>";
$l_log_text["LOG5_ATTACKED_WIN"] 		= "Tu nave fue atacada por [player]. Luchas durante un rato, y entonces la lucha cesa. Perdiste [armor] puntos de blindaje y [fighters] cazas en la escaramuza.";
$l_log_title["LOG5_ATTACKED_WIN"] 		= "<font color=yellow>�Escaramuza!</font>";
$l_log_text["LOG5_HIT_MINES"] 		= "Golpeaste [mines] minas al dirigirte al sector [sector].";
$l_log_title["LOG5_HIT_MINES"] 		= "<font color=yellow>�Alerta, minas!</font>";
$l_log_text["LOG5_SHIP_DESTROYED_MINES"] 	= "Tu nave fue destruida por un campo de minas en el sector [sector]. ";
$l_log_title["LOG5_SHIP_DESTROYED_MINES"] 	= "<font color=red>�Alerta, minas!</font>";
$l_log_text["LOG5_PLANET_DEFEATED_D"] 	= "Tu planeta [planet_name] en el sector [sector] fue vencido en batalla por [name]. Afortunadamente, la fuerte lealtad de tus ciudadanos jug� a tu favor. Han elegido valientemente destruir el planeta antes de verlo en manos enemigas. Organizas unos majestusos funerales en memoria de tan leal gente.";
$l_log_title["LOG5_PLANET_DEFEATED_D"] 	= "<font color=yellow>Planeta destruido</font>";
$l_log_text["LOG5_PLANET_DEFEATED"] 	= "Tu planeta [planet_name] en el sector [sector] fue vencido en batalla por el canalla [name]. Los colonos del planeta dan la bienvenida al nuevo gobernante. Escuchas un testimonio en FNN : \"�Estamos contentos de librarnos de ese tonto! �No queremos a un apestoso perdedor que no sepa protegernos!\". Juras hacerles pagar por su arrogancia.";
$l_log_title["LOG5_PLANET_DEFEATED"] 	= "<font color=red>�Planeta vencido!</font>";
$l_log_text["LOG5_PLANET_NOT_DEFEATED"] 	= "Tu planeta [planet_name] en el sector [sector] fue atacado por [name]. Sin embargo los ciudadanos organizaron una valerosa defensa, y consiguieron destruir al oponente. Salvaron unos cuantos recursos de entre los restos espaciales: [goods] en bienes, [ore] de minerales, [organics] de alimentos y el [salvage]% de la nave valorado en [credits] cr�ditos.";
$l_log_title["LOG5_PLANET_NOT_DEFEATED"] 	= "�Victoria!";
$l_log_title["LOG5_AFTER_ACTION"] = "Despu�s de Combat Action Report";
$l_log_title["LOG0_RAW"] 			= "Noticia";
$l_log_text["LOG5_DEFS_DESTROYED"] 	= "[quantity] [type] fueron destruidos en el sector [sector].";
$l_log_title["LOG5_DEFS_DESTROYED"] 	= "Defensas de sector destruidas";
$l_log_text["LOG0_PLANET_EJECT"] 		= "Has sido expulsado del planeta en el sector [sector] porque [name] dej� el equipo.";
$l_log_title["LOG0_PLANET_EJECT"] 		= "�Expulsado!";
$l_log_text["LOG0_BADLOGIN"] 		= "Ha habido un intento fallido de conexi�n desde [ip].";
$l_log_title["LOG0_BADLOGIN"] 		= "Conexi�n fallida";
$l_log_text["LOG6_PLANET_SCAN"] 		= "[name] ha escaneado tu planeta [planet_name] en el sector [sector].";
$l_log_title["LOG6_PLANET_SCAN"] 		= "Esc�ner de planeta";
$l_log_text["LOG6_PLANET_SCAN_FAIL"] 	= "[name] ha intentado escanear tu planeta [planet_name] en el sector [sector], pero fall�.";
$l_log_title["LOG6_PLANET_SCAN_FAIL"] 	= "Esc�ner de planeta fallido";
$l_log_text["LOG6_SHIP_SCAN"] 		= "[player] ha escaneado tu nave.";
$l_log_title["LOG6_SHIP_SCAN"] 		= "Esc�ner de nave";
$l_log_text["LOG6_SHIP_SCAN_FAIL"] 	= "[player] intent� escanear tu nave, pero fall�.";
$l_log_title["LOG6_SHIP_SCAN_FAIL"] 	= "Esc�ner de nave fallido";
$l_log_text["LOG5_KABAL_ATTACK"] 		= "Atacando a [player]...";
$l_log_title["LOG5_KABAL_ATTACK"] 		= "Ataque";
$l_log_text["LOG7_STARVATION"] 		= "�Planetas [name] en el sector [sector] no puede mantener su populaci�n! Se necesitan m�s alimentos. [starvation] colonos murieron de hambre. Colonists started starving on [date].";
$l_log_title["LOG7_STARVATION"] 		= "<font color=yellow>�Hambruna!</font>";
$l_log_title["LOG0_TOW"] 			= "�Remolcado!";
$l_log_text["LOG0_TOW"] = "Su barco ha sido remolcado desde el sector [sector] al sector [newsector], porque su nivel de tecnolog�a media supera el valor l�mite de [hull], o usted tiene un barco en el almacenamiento.";
$l_log_text["LOG5_DEFS_DESTROYED_F"] 	= "Has destruido una patrulla de [fighters] cazas en el sector [sector].";
$l_log_title["LOG5_DEFS_DESTROYED_F"] 	= "Cazas destruidos";
$l_log_text["LOG5_DEFS_KABOOM"] 		= "Fuiste destruido por un destacamento de cazas en el sector [sector]. ";
$l_log_title["LOG5_DEFS_KABOOM"] 		= "<font color=red>�Nave destruida!</font>";
$l_log_text["LOG0_HARAKIRI"] 		= "Estabas cansado de capitanear esta 'lancha' espacial, as� que decidiste que el universo estar�a mejor sin ella. Autorizado por [ip].";
$l_log_title["LOG0_HARAKIRI"] 		= "<font color=red>�Auto-destruido!</font>";
$l_log_text["LOG0_TEAM_REJECT"] 		= "[player] ha rechazado la invitaci�n de sumarse a tu equipo, [teamname].";
$l_log_title["LOG0_TEAM_REJECT"] 		= "Invitaci�n rechazada";
$l_log_text["LOG0_TEAM_RENAME"] 		= "Has renombrado tu equipo como [team].";
$l_log_title["LOG0_TEAM_RENAME"] 		= "Equipo renombrado";
$l_log_text["LOG0_TEAM_M_RENAME"] 		= "Tu coordinador de equipo renombr� el equipo como [team].";
$l_log_title["LOG0_TEAM_M_RENAME"] 	= "Equipo renombrado";
$l_log_text["LOG0_TEAM_KICK"] 		= "Has sido expulsado del equipo [team].";
$l_log_title["LOG0_TEAM_KICK"] 		= "�Expulsado del equipo!";
$l_log_text["LOG0_TEAM_CREATE"] 		= "Has creado un nuevo equipo, [team].";
$l_log_title["LOG0_TEAM_CREATE"] 		= "Creado nuevo equipo";
$l_log_text["LOG0_TEAM_LEAVE"] 		= "Has dejado el equipo [team].";
$l_log_title["LOG0_TEAM_LEAVE"] 		= "Equipo abandonado";
$l_log_text["LOG0_TEAM_NEWLEAD"] 		= "Has dejado el equipo [team]. Renunciaste al liderato del equipo en favor de [name].";
$l_log_title["LOG0_TEAM_NEWLEAD"] 		= "Equipo abandonado";
$l_log_text["LOG0_TEAM_LEAD"] 		= "Tu coordinador de equipo ha decidido dejar [team]. Has sido elegido para ocupar su lugar.";
$l_log_title["LOG0_TEAM_LEAD"] 		= "�Promoci�n!";
$l_log_text["LOG0_TEAM_JOIN"] 		= "Te has unido al equipo [team].";
$l_log_title["LOG0_TEAM_JOIN"] 		= "Uni�n a equipo";
$l_log_text["LOG0_TEAM_NEWMEMBER"] 	= "[name] ha aceptado unirse a [team]. Esto supone para ti un paso m�s en la dominaci�n gal�ctica.";
$l_log_title["LOG0_TEAM_NEWMEMBER"] 	= "Nuevo miembro de equipo";
$l_log_text["LOG0_TEAM_INVITE"] 		= "Has sido invitado a formar parte de [team].";
$l_log_title["LOG0_TEAM_INVITE"] 		= "Invitaci�n";
$l_log_text["LOG0_TEAM_NOT_LEAVE"] 	= "[player] ha dejado tu equipo.";
$l_log_title["LOG0_TEAM_NOT_LEAVE"] 	= "Renuncia en el equipo";
$l_log_text["LOG0_ADMIN_HARAKIRI"] 	= "[player] se ha auto-destruido desde el IP [ip].";
$l_log_title["LOG0_ADMIN_HARAKIRI"] 	= "Auto-destrucci�n";
$l_log_text["LOG0_ADMIN_ILLEGVALUE"] 	= "[player] tuvo [quantity] [type], para un m�ximo de [holds]";
$l_log_title["LOG0_ADMIN_ILLEGVALUE"] 	= "Ilegal valor en nave";
$l_log_text["LOG0_ADMIN_PLANETDEL"] 	= "[attacker] ha intentado capturar el planeta de [defender] en el sector [sector]. Sin embargo el planeta fue destruido.";
$l_log_title["LOG0_ADMIN_PLANETDEL"] 	= "Planeta destruido";
$l_log_text["LOG0_defense_DEGRADE"] 	= "Cazas de la Defensa de Sector en [sector] rebajados en [degrade] por ciento debido a la falta de energ�a.";
$l_log_title["LOG0_defense_DEGRADE"] 	= "Defensas de Sector rebajadas.";
$l_log_text["LOG5_PLANET_CAPTURED"] 	= "Capturaste un planeta perteneciente a [owner]. hab�a [cols] colonos y [credits] cr�ditos en �l.";
$l_log_title["LOG5_PLANET_CAPTURED"] 	= "�Planeta capturado!";
$l_log_text["LOG0_CHEAT_TEAM"] 		= "El jugador [player] desde la direcci�n IP [ip] intent� sacar beneficio del truco de expulsar a cualquiera. Su nave fue destruida.";
$l_log_text["LOG0_BOUNTY_CLAIMED"] = "Reclamaste una recompensa de [amount] cr�ditos por la destrucci�n de la nave perteneciente a [bounty_on]. La recompensa fue fijada por [placed_by].";
$l_log_title["LOG0_BOUNTY_CLAIMED"] = "Recompensa reclamada";
$l_log_text["LOG0_BOUNTY_PAID"] = "Tu recompensa sobre [bounty_on] ha sido pagada por la cantidad de [amount] cr�ditos.";
$l_log_text["LOG0_BOUNTY_TAX_PAID"] = "La generosidad Fedration en [bounty_on] ha sido gravada por la cantidad de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_PAID"] = "Recompensa pagada.";
$l_log_text["LOG0_BOUNTY_CANCELLED"] = "Tu recompensa sobre [bounty_on] por la cantidad de [amount] cr�ditos ha sido devuelta.";
$l_log_title["LOG0_BOUNTY_CANCELLED"] = "Recompensa reembolsada.";
$l_log_text["LOG0_BOUNTY_FEDBOUNTY"] = "La Federaci�n ha fijado una recompensa sobre ti por la cantidad de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_FEDBOUNTY"] = "�Recompensa de la Federaci�n!";
$l_log_text["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "La Alianza ha puesto una recompensa por el monto de [amount] cr�ditos.";
$l_log_title["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "Alianza Recompensa!";
$l_log_text["LOG0_IGB_TRANSFER1"] = "El jugador [name] hizo una transferencia de [sum] cr�ditos a tu cuenta de IGB.";
$l_log_title["LOG0_IGB_TRANSFER1"] = "Cr�ditos transferidos";
$l_log_text["LOG0_IGB_TRANSFER2"] = "Transferiste [sum] cr�ditos a la cuenta IGB del jugador [name].";
$l_log_title["LOG0_IGB_TRANSFER2"] = "Cr�ditos transferidos";

$l_log_text["LOG4_PLANET_novaED_D"] = "Tu planeta [planet_name] en el sector [sector] fue destruida con una bomba Nova por [name]. Absolutamente no queda nada para marcar los planetas existencia anterior.";
$l_log_title["LOG4_PLANET_novaED_D"] 	= "<font color=yellow>Planet destroyed with a Nova Bomb</font>";
$l_log_text["LOG4_SHIP_novaED_D"] = "Su nave fue destruida con una bombardeada Nova por [name].";
$l_log_title["LOG4_SHIP_novaED_D"] 	= "<font color=yellow>Ship destroyed with a Nova Bomb</font>";
$l_log_text["LOG2_SPY_FOUND_EMBEZZLER"] = "Su n�mero de dignatario [DIG] en el planeta [PLANET], ha sido capturado malversaci�n. Es posible que desee para despedirlos.";
$l_log_title["LOG2_SPY_FOUND_EMBEZZLER"] 	= "<font color=yellow>Embezzler found!</font>";
$l_log_text["LOG9_PROBE_DETECTED_SHIP"]="<font color=yellow>Your probe id [id] detected [ship_name] entering sector [sector]</font>";
$l_log_title["LOG9_PROBE_DETECTED_SHIP"] = "Sonda detect� entrante Ship";
$l_log_text["LOG9_PROBE_SCAN_SHIP"]="<font color=yellow>Your probe id [id] scanned [ship_name] entering sector [sector]<br>
Hull: [hull] Engines: [engines] Power: [power] Fighter Bay: [fighter] Sensors: [sensors] Beams: [beams] Torp Launchers: [torps] Armor: [armor] Shields: [shields] Cloak: [cloak]<br>
Armor Points: [armor_pts] Fighters: [fighters] Torpedoes: [avail_torps] Ship Energy: [energy] Credits: [credits] <br>
Mine Deflectors: [deflectors] Emergency Warp: [ewd] Escape Pod: [pod] ECM: [ecm]</font>";
$l_log_title["LOG9_PROBE_SCAN_SHIP"] = "Sonda Scanned entrante Ship";
$l_log_text["LOG0_ADMIN_PLANETIND"] = "[sector] [planetname] ([planetid]), propiedad de [owner] se convirti� en independiente. Media Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_PLANETIND"] = "Planet fue independiente.";
$l_log_text["LOG0_ADMIN_INDYPURGE"] = "Planeta Independiente [planetname] ([planetid]), propiedad de [owner] en el [sector] fue expulsado. Media Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_INDYPURGE"] = "Independiente Planet purgado.";
$l_log_text["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Nunca planeta propiedad [planetname] ([planetid]), creado en el [date] en el [sector] fue expulsado. Media Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Nunca posey� Planet purgado.";
$l_log_text["LOG0_TEAM_CANCEL"] = "Est�s invitaci�n a ser parte de [team], ha sido cancelada.";
$l_log_title["LOG0_TEAM_CANCEL"] = "Invitaci�n Cancelada";
$l_log_text["LOG10_AUTOTRADE"]="<font color=yellow>Auto Trade for [planetname] in sector [sector] for [totalcost] credits.<br>Goods: [goodsamount] @ [goodsprice] credits - Ore: [oreamount] @ [oreprice] credits - Organics: [organicsamount] @ [organicsprice] credits - Energy: [energyamount] @ [energyprice] credits - Colonists: [colonistamount] @ [colonistprice] credits<br></font>";
$l_log_title["LOG10_AUTOTRADE"] = "Auto Informe sobre el Comercio";
$l_log_text["LOG10_AUTOTRADE_ABORTED"]="<font color='#00ff00'>Auto Trade for [planetname] in sector [sector] was aborted due to enemy sector defense in sector [destsector].<br></font>";
$l_log_title["LOG10_AUTOTRADE_ABORTED"] = "Auto Informe sobre el Comercio";
$l_log_text["LOG9_PROBE_DESTROYED"]="<font color='#00ff00'>SECTOR defenseS in [sector] destroy your probe.</font>";
$l_log_title["LOG9_PROBE_DESTROYED"] = "Sonda Destruir";
$l_log_text["LOG9_PROBE_NOTURNS"]="<font color='#00ff00'>You do not have enough turns for probe [probe_id] to move to [sector]</font>";
$l_log_title["LOG9_PROBE_NOTURNS"] = "Informe de la sonda";
$l_log_text["LOG9_PROBE_INVALIDSECTOR"]="<font color='#00ff00'>Moving to sector [target_sector] is not allowed</font>";
$l_log_title["LOG9_PROBE_INVALIDSECTOR"] = "Informe de la sonda";
$l_log_text["LOG9_PROBE_DETECTPROBE"]="<font color='#00ff00'>Probe [probe_id] in sector [sector] detected [probe_detect]</font>";
$l_log_title["LOG9_PROBE_DETECTPROBE"] 		= "[probe_type] Probe Report";

// added

$l_log_text["LOG2_SPY_NEWSHIP"] = "Perdiste al esp�a [id] en la nave [shipname] de [name], ya que se compr� una nueva nave.";
$l_log_title["LOG2_SPY_NEWSHIP"] = "<font color=yellow>�Esp�a perdido!</font>";

$l_log_text["LOG2_SPY_SEND_FAIL"] = "[name] intent� introducir un esp�a en tu planeta [planet_name] en el sector [sector], pero tus Sensores detectaron al esp�a y fue eliminado.";
$l_log_title["LOG2_SPY_SEND_FAIL"] = "<font color=yellow>�Esp�a enemigo eliminado!</font>";

$l_log_text["LOG2_SPY_SABOTAGE"] = "Tu esp�a [id] en el planeta [planet_name] en el sector [sector] comienza el sabotaje. La producci�n es reducida en [data] en el planeta.";
$l_log_title["LOG2_SPY_SABOTAGE"] = "<font color=#00FF00>�Sabotaje comenzado!</font>";

$l_log_text["LOG2_SPY_BIRTH"] = "Tu esp�a [id] en el planeta [planet_name] en el sector [sector] redujo la natalidad en [data] en el planeta.";
$l_log_title["LOG2_SPY_BIRTH"] = "<font color=#00FF00>�Natalidad reducida!</font>";

$l_log_text["LOG2_SPY_INTEREST"] = "Tu esp�a [id] en el planeta [planet_name] en el sector [sector] comienza a recoger [data] en intereses del planeta para ti.";
$l_log_title["LOG2_SPY_INTEREST"] = "<font color=#00FF00>�Recogiendo intereses!</font>";

$l_log_text["LOG2_SPY_MONEY"] = "�Tu esp�a [id] en el planeta [planet_name] en el sector [sector] rob� [data] cr�ditos para ti!";
$l_log_title["LOG2_SPY_MONEY"] = "<font color=#00FF00>�Cr�ditos robados!</font>";

$l_log_text["LOG2_SPY_TORPS"] = "�Tu esp�a [id] en el planeta [planet_name] en el sector [sector] destruy� [data] torpedos planetarios!";
$l_log_title["LOG2_SPY_TORPS"] = "<font color=#00FF00>�Torpedos destruidos!</font>";

$l_log_text["LOG2_SPY_FITS"] = "�Tu esp�a [id] en el planeta [planet_name] en el sector [sector]  destruy� [data] cazas planetarios!";
$l_log_title["LOG2_SPY_FITS"] = "<font color=#00FF00>�Cazas destruidos!</font>";

$l_log_text["LOG2_SPY_CPTURE"] = "��Tu esp�a [id] en el planeta [planet_name] en el sector [sector] captur� el planeta!! Tienes mucha suerte...";
$l_log_title["LOG2_SPY_CPTURE"] = "<font color=#00FF00>�PLANETA CAPTURADO!</font>";

$l_log_text["LOG2_SPY_CPTURE_OWNER"] = "�Un esp�a de [name] captur� tu planeta [planet_name] en el sector [sector]! Ser� mejor que limpies de esp�as tus planetas m�s habitualmente...";
$l_log_title["LOG2_SPY_CPTURE_OWNER"] = "<font color=red>�Planeta Perdido!</font>";

$l_log_text["LOG2_SPY_KILLED_SPYOWNER"] = "No hay mensajes de tu esp�a [id] en el planeta [planet_name] en el sector [sector] desde hace tiempo - parece que tu dispositivo de Camuflaje no pudo cubrirle lo suficiente y ha sido eliminado.";
$l_log_title["LOG2_SPY_KILLED_SPYOWNER"] = "<font color=yellow>�Esp�a Perdido!</font>";

$l_log_text["LOG2_SPY_KILLED"] = "Tus Sensores detectaron un esp�a de [name] en tu planeta [planet_name] en el sector [sector]. El esp�a ha sido eliminado.";
$l_log_title["LOG2_SPY_KILLED"] = "<font color=yellow>�Esp�a enemigo eliminado!</font>";

$l_log_text["LOG2_SHIPSPY_KILLED"] = "No hay mensajes de tu esp�a [id] en la nave [shipname], de [name], desde hace tiempo - parece que tu dispositivo de Camuflaje no pudo cubrirle lo suficiente y ha sido eliminado.";
$l_log_title["LOG2_SHIPSPY_KILLED"] = "<font color=yellow>�Esp�a Perdido!</font>";

$l_log_text["LOG2_SPY_CATACLYSM"] = "�Tu esp�a [id] en el planeta [planet_name] en el sector [sector] pereci� junto con el planeta entero en un terrible cataclismo.";
$l_log_title["LOG2_SPY_CATACLYSM"] = "<font color=yellow>�Esp�a Perdido!</font>";

$l_log_text["LOG2_SHIPSPY_CATACLYSM"] = "�Tu esp�a [id] en la nave [shipname], de [name], pereci� junto con la nave en un terrible cataclismo.";
$l_log_title["LOG2_SHIPSPY_CATACLYSM"] = "<font color=yellow>�Esp�a Perdido!</font>";

$l_log_text["LOG2_SPY_TOSHIP"] = "Tu esp�a [id] en el planeta [planet_name] en el sector [sector] se infiltr� en la nave [shipname] de [playername] y ahora act�a desde all�.";
$l_log_title["LOG2_SPY_TOSHIP"] = "<font color=#00FF00>�Esp�a se infiltra en Nave Enemiga!</font>";

$l_log_text["LOG2_SPY_TOPLANET"] = "Tu esp�a [id] en la nave [shipname], de [playername], se infiltr� en el planeta [planet_name] en el sector [sector] y ahora act�a all�.";
$l_log_title["LOG2_SPY_TOPLANET"] = "<font color=#00FF00>�Esp�a se infiltra en Planeta Enemigo!</font>";

$l_log_text["LOG5_PLANET_YOUR_CAPTURED"]   = "Tu planeta [planet_name] en el sector [sector] fue derrotado y capturado por [name].";
$l_log_title["LOG5_PLANET_YOUR_CAPTURED"]  = "<font color=red>�Planeta capturado!</font>";
$l_log_text["LOG5_STORAGE_EWD"] = "Su planeta est� sorprendido por [player] &#39;s ataque. Uno de sus barcos almacenados hizo una urdimbre de emergencia al [sector] y aterriz� en el planeta [planet]";
$l_log_title["LOG5_STORAGE_EWD"] = "Almacenados Ship urdimbre de emergencia!";
$l_log_text["LOG5_STORAGE_EWDFAIL"] = "Un dispositivo para almacenar los buques Warp FAILED! El buque fue capturado por almacenados [player] despu�s de que derrot� a su planeta!";
$l_log_title["LOG5_STORAGE_EWDFAIL"] 	= "Stored Ship Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_STORAGE_CAPTURED"] = "Un barco fue capturado por almacenados [player] despu�s de que derrot� a uno de sus planetas!";
$l_log_title["LOG5_STORAGE_CAPTURED"] 	= "Stored Ship <font color=red>CAPTURED!</font>";

$l_log_text["LOG1_DIG_PRODUCTION"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] comienza la construcci�n de la producci�n.";
$l_log_title["LOG1_DIG_PRODUCTION"] = "<font color=#00FF00>Production Building  Started!</font>";
$l_log_text["LOG1_DIG_BIRTHDEC"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] decreciente tasa de natalidad.";
$l_log_title["LOG1_DIG_BIRTHDEC"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG1_DIG_BIRTHINC"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] tasa de natalidad cada vez mayor.";
$l_log_title["LOG1_DIG_BIRTHINC"] = "<font color=#00FF00>Birthrate Increased!</font>";
$l_log_text["LOG1_DIG_SPYHUNT"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] comenz� a buscar spys en ese planeta.";
$l_log_title["LOG1_DIG_SPYHUNT"] = "<font color=#00FF00>Spy Hunter!</font>";
$l_log_text["LOG1_DIG_INTEREST"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] comienza aumento de la producci�n de cr�dito.";
$l_log_title["LOG1_DIG_INTEREST"] = "<font color=#00FF00>Interest Building Started!</font>";
$l_log_text["LOG1_DIG_MONEY"] = "Dignatario [id] en el planeta [planet_name] malversado [data] cr�ditos y donaciones para usted!";
$l_log_title["LOG1_DIG_MONEY"] = "<font color=#00FF00>You Recieved Embezzled  Credits!</font>";
$l_log_text["LOG1_DIG_KILLED_SPY"] = "Su reproductor es detectado dignatario [name] &#39;s espiar a su planeta [planet_name] en el sector [sector]. El esp�a es muerto ahora.";
$l_log_title["LOG1_DIG_KILLED_SPY"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG1_DIG_CATACLYSM"] = "Su excavaci�n [id] en el planeta [planet_name] en el sector [sector] perecieron en un cataclismo terrible con ese planeta.";
$l_log_title["LOG1_DIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_SHIPDIG_CATACLYSM"] = "Su excavaci�n [id] en el reproductor [name] &#39;s de los buques [shipname] perecieron en un cataclismo terrible con ese buque.";
$l_log_title["LOG1_SHIPDIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_DIG_TORPS"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] construy� [data] planetaria torpedos!";
$l_log_title["LOG1_DIG_TORPS"] = "<font color=#00FF00>Torpedoes Built!</font>";
$l_log_text["LOG1_DIG_FITS"] = "Su dignatario [id] en el planeta [planet_name] en el sector [sector] construy� [data] combatientes del planeta!";
$l_log_title["LOG1_DIG_FITS"] = "<font color=#00FF00>Fighters Built!</font>";

$l_log_text["LOG5_PLANET_BOMBED"] = "Tu planeta [planet_name] en el sector [sector] fue bombardeado por [name]. Usaste [beams] de energ�a y [torps] torpedos en la defensa.  Perdiste [figs] cazas.";
$l_log_title["LOG5_PLANET_BOMBED"] = "<font color=red>�Planeta bombardeado!</font>";
$l_log_text["LOG5_PLANET_CONFISCATION"] = "Su planeta fue confiscado por [player]. No a los ataques excesiva recompensa a los jugadores de la [player] se ha incautado de uno de sus planetas ([name]) en el sector [sector] valor [score] cr�ditos.";
$l_log_title["LOG5_PLANET_CONFISCATION"] 		= "<font color=yellow>Planetary Skirmish!</font>";


$l_log_text["LOG5_SM_ATTACK"] = "Sensores detect� un barco de misiles Sector de ser despedido de [sector] de [player]!";
$l_log_title["LOG5_SM_ATTACK"] 	= "<font color=red>INCOMING SECTOR MISSILE DETECTED</font>";
$l_log_text["LOG5_SM_OUTMAN"] = "Un misil disparado por Sector [player] fue detectado deformaciones en el sector y se evadi� el ataque.";
$l_log_title["LOG5_SM_OUTMAN"] = "Sector de misiles Acci�n evasiva!";
$l_log_text["LOG5_SM_OUTSCAN"] = "Usted detectado [player] &#39;s un misil Sector de tratar de arreglar en su barco, pero los generadores de su capa logrado enga�ar a los circuitos de los sensores Sector de Misiles.";
$l_log_title["LOG5_SM_OUTSCAN"] = "Sector de misiles Capa de �xito!";
$l_log_text["LOG5_SM_EWD"] = "Usted est� sorprendido por [player] &#39;s Sector de ataque de misiles y la participaci�n del dispositivo de emergencia, Warp saltar a un sector desconocido.";
$l_log_title["LOG5_SM_EWD"] = "Sector de misiles de la urdimbre de emergencia!";
$l_log_text["LOG5_SM_EWDFAIL"] = "Sus sensores detectan [player] &#39;s Sector de ataque de misiles y la participaci�n del dispositivo de emergencia, Warp. Se oye un sonido de asfixia extra�o proveniente de la sala de motores y olor a quemado de los circuitos. &quot;Stupid pedazo de mierda!&quot;, Grita, patadas en el equipo. Usted prepararse para el impacto!";
$l_log_title["LOG5_SM_EWDFAIL"] 	= "Sector Missile Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_SM_WIN"] = "Su barco fue atacado por [player] utilizando un misil Sector. Has perdido [armor] puntos de armadura y [energy] unidades de energ�a de la energ�a en el ataque.";
$l_log_title["LOG5_SM_WIN"] 		= "<font color=yellow>Sector Missile IMPACT!</font>";
$l_log_text["LOG5_SM_LOSE"] = "Su nave fue destruida por un misil del sector a partir de [player].";
$l_log_title["LOG5_SM_LOSE"] 		= "<font color=red>Sector Missile Combat lost!</font>";
$l_log_text["LOG5_CONFISCATION"] = "Su barco fue confiscado por [player]. No a los ataques excesiva recompensa a los jugadores de la [player] se ha incautado de uno de sus buques ([ship]).";
$l_log_title["LOG5_CONFISCATION"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_STORAGE_SUICIDE"] = "Un barco almacenados suicidado cuando [player] derrot� a uno de sus planetas y trat� de capturarlo!";
$l_log_title["LOG5_STORAGE_SUICIDE"] 	= "Stored Ship <font color=red>SUICIDE!</font>";
$l_log_text["LOG5_SURVIVE_PROBE_ATTACK"] = "Su barco fue atacado por una sonda de propiedad de [player] en el sector [sector]. Has perdido [armor] puntos de armadura y [energy] unidades de energ�a de la energ�a en el ataque.";
$l_log_title["LOG5_SURVIVE_PROBE_ATTACK"] 		= "<font color=yellow>Probe ATTACK!</font>";
$l_log_text["LOG5_PROBE_ATTACK_FAILED"] = "[player] sobrevivi� a un ataque de la sonda en el sector [sector].";
$l_log_title["LOG5_PROBE_ATTACK_FAILED"] 		= "<font color=red>Probe Attack FAILED!</font>";
$l_log_text["LOG5_PROBE_ATTACK_SUCCEEDED"] = "Su sonda destruy� el buque de propiedad de [player] en el sector [sector].";
$l_log_title["LOG5_PROBE_ATTACK_SUCCEEDED"] 		= "<font color=red>Probe Attack Succeeded!</font>";
$l_log_text["LOG5_DESTROYED_PROBE_ATTACK"] = "Su nave fue destruida por una sonda de [player] en el sector [sector].";
$l_log_title["LOG5_DESTROYED_PROBE_ATTACK"] 		= "<font color=red>Probe Attack Lost!</font>";


$l_log_title["LOG0_ADMIN_DBERROR"] = "Ha ocurrido un error de base de datos";
$l_log_title["LOG0_ADMIN_COMBAT"] = "Resultados de la Acci�n de Lucha contra la";

$l_log_text["LOG9_PROBE_SCAN_FAIL"] = "[name] intentado explorar uno de sus sondeos en el sector [sector], pero fracas�.";
$l_log_title["LOG9_PROBE_SCAN_FAIL"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_SCAN"] = "Uno de sus sondeos en el sector [sector] fue escaneada por [name].";
$l_log_title["LOG9_PROBE_SCAN"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_ATTACKED"] = "Uno de sus sondeos en el sector [sector] fue atacada y destruida por [name].";
$l_log_title["LOG9_PROBE_ATTACKED"] 		= "[probe_type] <font color='yellow'>Probe Destroyed</font>";
$l_log_text["LOG9_PROBE_DETECTED_GATEWAY"]="<font color='#00ff00'>Seeker Probe [probe_id] in sector [sector] detected a Gateway Sector</font>";
$l_log_title["LOG9_PROBE_DETECTED_GATEWAY"] 		= "[probe_type] <font color='yellow'>Seeker Probe Report</font>";

$l_log_text["LOG9_PROBEHUNTER_SUCCEED"] = "Uno de los Cazadores de la sonda ha destruido una [probe_type] propiedad de [name] en el [sector].";
$l_log_title["LOG9_PROBEHUNTER_SUCCEED"] = "Sonda Hunter destruidos [probe_type]";
$l_log_text["LOG9_PROBEHUNTER_DESTROYED"] = "Su [probe_type] en el sector [sector] fue atacada y destruida por un cazador de la sonda de propiedad de [name].";
$l_log_title["LOG9_PROBEHUNTER_DESTROYED"] 		= "[probe_type] <font color='yellow'>Probe Attacked and Destroyed</font>";
$l_log_text["LOG9_PROBEHUNTER_EXPLODED"] = "La sonda Hunter en el sector [sector] se perdi� cuando la explosi�n resultante de su ataque a la probe_type [probe_type] propiedad de [name] envolv�a.";
$l_log_title["LOG9_PROBEHUNTER_EXPLODED"] 		= "Probe Hunter Probe <font color='yellow'>Destroyed</font>";

?>
