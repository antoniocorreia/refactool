int var43c05baf5e1f4294add9c69e413b99bc = (options.verbosity > 3 && !(options.flags & FLG_SHOW_CHK));
	if (var43c05baf5e1f4294add9c69e413b99bc){
		fprintf(stderr,
		        "Local worksize (LWS) "Zu", global worksize (GWS) "Zu"\n",
		        local_work_size, global_work_size);
	}
	#ifdef DEBUG
		if(!(var43c05baf5e1f4294add9c69e413b99bc) &&  (!(options.flags & FLG_SHOW_CHK))){
			fprintf(stderr, "{"Zu"/"Zu"} ", global_work_size, local_work_size);
		}
	#endif