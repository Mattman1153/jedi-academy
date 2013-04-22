#!/usr/bin/perl
#Jedi Knight Log Backup
#Made for the JAE Mod(TM)
#(c) 2003 - neotericE

#set the path to the game logs
$gamelogs="/home/academy/.jka/academy";

#set the path to the backup folder
$backups="/home/academy/.jka/academy/backups";

#set to 1 if you want output!
$verbose=0;


####################################################
#Don't change anything below this line
####################################################
$date=`date +%y%m%d`;
chomp($date);

@logs=(split("\n",`ls -1 $gamelogs/*.log`));
foreach $log (@logs) {
        $log=~s/$gamelogs\///;
        
	#if you want to make this more secure use exec() instead - neo
        
	$output=`/usr/bin/gzip -c -9 "$gamelogs/$log" > "$backups/$date-$log.gz"`;

        if($verbose) { print $output; }

        #if using exec() change to test for value of $output

        if(-e "$backups/$date-$log.gz"){

                
		#Uncomment this to copy the file
		#instead of deleting it
		#$output=`cp /dev/null "$gamelogs/$log"`;
                
		$output=`rm -f "$gamelogs/$log"`;

                if($verbose) { print $output; }
        }
}