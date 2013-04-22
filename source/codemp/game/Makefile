#
# Linux Makefile for the Jedi Academy Empire Mod
# Author: Michael J. Nohai
# Version: 1.41
# Created: November 4, 2005
# Updated: December 29, 2006
# Compiler: Intel C++ Compiler for Linux 9.0
#

SHELL = /bin/sh
CC = icc
CFLAGS = -D_M_IX86 -DFINAL_BUILD -DMISSIONPACK -DQAGAME -DNDEBUG -unroll -D_JK2 -O2 -w
LDFLAGS = -static -shared -static-libcxa -Bstatic -limf
BINARY = jampgamei386.so
INSTALLDIR = /usr/local/games/ja/jae

#
# Add source file objects here
#
OFILES = ai_main.o ai_util.o ai_wpnav.o AnimalNPC.o bg_g2_utils.o bg_lib.o bg_misc.o bg_panimate.o \
	   bg_pmove.o bg_saber.o bg_saberLoad.o bg_saga.o bg_slidemove.o bg_vehicleLoad.o bg_weapons.o \
	   FighterNPC.o g_active.o g_admin.o g_adminshared.o g_arenas.o g_bot.o g_client.o g_cmds.o \
	   g_combat.o g_emote.o g_exphysics.o g_ICARUScb.o g_items.o g_log.o g_main.o g_mem.o g_misc.o \
         g_missile.o g_mover.o g_nav.o g_navnew.o g_object.o g_saga.o g_session.o g_spawn.o g_strap.o \
         g_svcmds.o g_syscalls.o g_target.o g_team.o g_timer.o g_trigger.o g_turret.o g_turret_G2.o \
         g_utils.o g_vehicles.o g_vehicleTurret.o g_weapon.o NPC.o NPC_AI_Atst.o NPC_AI_Default.o \
         NPC_AI_Droid.o NPC_AI_GalakMech.o NPC_AI_Grenadier.o NPC_AI_Howler.o NPC_AI_ImperialProbe.o \
         NPC_AI_Interrogator.o NPC_AI_Jedi.o NPC_AI_Mark1.o NPC_AI_Mark2.o NPC_AI_MineMonster.o \
         NPC_AI_Rancor.o NPC_AI_Remote.o NPC_AI_Seeker.o NPC_AI_Sentry.o NPC_AI_Sniper.o NPC_AI_Stormtrooper.o \
         NPC_AI_Utils.o NPC_AI_Wampa.o NPC_behavior.o NPC_combat.o NPC_goal.o NPC_misc.o NPC_move.o \
         NPC_reactions.o NPC_senses.o NPC_sounds.o NPC_spawn.o NPC_stats.o NPC_utils.o q_math.o q_shared.o \
         SpeederNPC.o tri_coll_test.o WalkerNPC.o w_force.o w_saber.o

$(BINARY): $(OFILES)
	$(CC) $(LDFLAGS) -o $(BINARY) $(OFILES)

.c.o:
	$(CC) $(CFLAGS) -use_msasm -o $@ -c $<

info:
	@echo ---Run 'make' to compile the code and create the release binary called jampgamei386.so 
	@echo    located in the 'game' directory of your source folder.
	@echo ---Execute 'make install' to copy the jampgamei386.so binary to your mod folder.
	@echo Note:
	@echo ---You may set your own optimizations on the CFLAGS line, although it's not recommended.
	@echo ---You may also add any additional source file objects to the OFILES line.
	@echo ---Set your mod directory path to the INSTALLDIR line.

clean:
	rm -f $(OFILES)
	rm -f $(BINARY)
	rm -f $(BINARY).tar.gz

install:
	cp -f $(BINARY) $(INSTALLDIR)

uninstall:
	rm -f $(INSTALLDIR)/$(BINARY)

package:
	tar cfv $(BINARY).tar $(BINARY)
	gzip $(BINARY).tar