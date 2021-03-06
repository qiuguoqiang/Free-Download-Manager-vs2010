/* This file is auto-generated, see gen-histogram-enum.py.  */

enum ID {
  A11Y_INSTANTIATED_FLAG,
  A11Y_CONSUMERS,
  A11Y_ISIMPLEDOM_USAGE_FLAG,
  A11Y_IATABLE_USAGE_FLAG,
  A11Y_UPDATE_TIME,
  APPLICATION_REPUTATION_SHOULD_BLOCK,
  APPLICATION_REPUTATION_LOCAL,
  APPLICATION_REPUTATION_SERVER,
  APPLICATION_REPUTATION_COUNT,
  BACKGROUNDFILESAVER_THREAD_COUNT,
  COMPARTMENT_DONATED_NODE,
  COMPARTMENT_ADOPTED_NODE,
  COMPARTMENT_LIVING_ADOPTERS,
  CYCLE_COLLECTOR,
  CYCLE_COLLECTOR_WORKER,
  CYCLE_COLLECTOR_FULL,
  CYCLE_COLLECTOR_MAX_PAUSE,
  CYCLE_COLLECTOR_FINISH_IGC,
  CYCLE_COLLECTOR_SYNC_SKIPPABLE,
  CYCLE_COLLECTOR_VISITED_REF_COUNTED,
  CYCLE_COLLECTOR_WORKER_VISITED_REF_COUNTED,
  CYCLE_COLLECTOR_VISITED_GCED,
  CYCLE_COLLECTOR_WORKER_VISITED_GCED,
  CYCLE_COLLECTOR_COLLECTED,
  CYCLE_COLLECTOR_WORKER_COLLECTED,
  CYCLE_COLLECTOR_NEED_GC,
  CYCLE_COLLECTOR_WORKER_NEED_GC,
  CYCLE_COLLECTOR_TIME_BETWEEN,
  CYCLE_COLLECTOR_CONTENT_UNBIND,
  CYCLE_COLLECTOR_OOM,
  CYCLE_COLLECTOR_WORKER_OOM,
  CYCLE_COLLECTOR_ASYNC_SNOW_WHITE_FREEING,
  FORGET_SKIPPABLE_MAX,
  GC_REASON_2,
  GC_IS_COMPARTMENTAL,
  GC_MS,
  GC_MAX_PAUSE_MS,
  GC_MARK_MS,
  GC_SWEEP_MS,
  GC_MARK_ROOTS_MS,
  GC_MARK_GRAY_MS,
  GC_SLICE_MS,
  GC_MMU_50,
  GC_RESET,
  GC_INCREMENTAL_DISABLED,
  GC_NON_INCREMENTAL,
  GC_SCC_SWEEP_TOTAL_MS,
  GC_SCC_SWEEP_MAX_PAUSE_MS,
  TELEMETRY_PING,
  TELEMETRY_SUCCESS,
  XUL_CACHE_DISABLED,
  MEMORY_RESIDENT,
  MEMORY_VSIZE,
  MEMORY_VSIZE_MAX_CONTIGUOUS,
  MEMORY_JS_COMPARTMENTS_SYSTEM,
  MEMORY_JS_COMPARTMENTS_USER,
  MEMORY_JS_MAIN_RUNTIME_TEMPORARY_PEAK,
  MEMORY_JS_GC_HEAP,
  MEMORY_STORAGE_SQLITE,
  MEMORY_IMAGES_CONTENT_USED_UNCOMPRESSED,
  MEMORY_HEAP_ALLOCATED,
  MEMORY_HEAP_COMMITTED_UNUSED,
  MEMORY_HEAP_COMMITTED_UNUSED_RATIO,
  GHOST_WINDOWS,
#if defined(XP_MACOSX)
  MEMORY_FREE_PURGED_PAGES_MS,
#endif
#if defined(XP_WIN)
  LOW_MEMORY_EVENTS_VIRTUAL,
#endif
#if defined(XP_WIN)
  LOW_MEMORY_EVENTS_PHYSICAL,
#endif
#if defined(XP_WIN)
  LOW_MEMORY_EVENTS_COMMIT_SPACE,
#endif
#if defined(XP_WIN)
  EARLY_GLUESTARTUP_READ_OPS,
#endif
#if defined(XP_WIN)
  EARLY_GLUESTARTUP_READ_TRANSFER,
#endif
#if defined(XP_WIN)
  GLUESTARTUP_READ_OPS,
#endif
#if defined(XP_WIN)
  GLUESTARTUP_READ_TRANSFER,
#endif
#if defined(XP_UNIX)
  EARLY_GLUESTARTUP_HARD_FAULTS,
#endif
#if defined(XP_UNIX)
  GLUESTARTUP_HARD_FAULTS,
#endif
#if defined(XP_UNIX)
  PAGE_FAULTS_HARD,
#endif
  FONTLIST_INITOTHERFAMILYNAMES,
  FONTLIST_INITFACENAMELISTS,
#if defined(XP_WIN)
  DWRITEFONT_INITFONTLIST_TOTAL,
#endif
#if defined(XP_WIN)
  DWRITEFONT_INITFONTLIST_INIT,
#endif
#if defined(XP_WIN)
  DWRITEFONT_INITFONTLIST_GDI,
#endif
#if defined(XP_WIN)
  DWRITEFONT_DELAYEDINITFONTLIST_TOTAL,
#endif
#if defined(XP_WIN)
  DWRITEFONT_DELAYEDINITFONTLIST_COUNT,
#endif
#if defined(XP_WIN)
  DWRITEFONT_DELAYEDINITFONTLIST_GDI_TABLE,
#endif
#if defined(XP_WIN)
  DWRITEFONT_DELAYEDINITFONTLIST_COLLECT,
#endif
#if defined(XP_WIN)
  DWRITEFONT_DELAYEDINITFONTLIST_ITERATE,
#endif
#if defined(XP_WIN)
  GDI_INITFONTLIST_TOTAL,
#endif
#if defined(XP_MACOSX)
  MAC_INITFONTLIST_TOTAL,
#endif
  SYSTEM_FONT_FALLBACK,
  SYSTEM_FONT_FALLBACK_FIRST,
  SYSTEM_FONT_FALLBACK_SCRIPT,
  GRADIENT_DURATION,
  GRADIENT_RETENTION_TIME,
  STARTUP_CACHE_AGE_HOURS,
  STARTUP_CACHE_INVALID,
  WORD_CACHE_HITS_CONTENT,
  WORD_CACHE_HITS_CHROME,
  WORD_CACHE_MISSES_CONTENT,
  WORD_CACHE_MISSES_CHROME,
  FONT_CACHE_HIT,
  BAD_FALLBACK_FONT,
  SHUTDOWN_OK,
  IMAGE_DECODE_LATENCY_US,
  IMAGE_DECODE_TIME,
  IMAGE_DECODE_ON_DRAW_LATENCY,
  IMAGE_DECODE_CHUNKS,
  IMAGE_DECODE_COUNT,
  IMAGE_MAX_DECODE_COUNT,
  IMAGE_DECODE_SPEED_JPEG,
  IMAGE_DECODE_SPEED_GIF,
  IMAGE_DECODE_SPEED_PNG,
  CANVAS_2D_USED,
  CANVAS_WEBGL_USED,
  TOTAL_CONTENT_PAGE_LOAD_TIME,
  HTTP_SUBITEM_OPEN_LATENCY_TIME,
  HTTP_SUBITEM_FIRST_BYTE_LATENCY_TIME,
  HTTP_REQUEST_PER_PAGE,
  HTTP_REQUEST_PER_PAGE_FROM_CACHE,
  HTTP_REQUEST_PER_CONN,
  HTTP_KBREAD_PER_CONN,
  HTTP_PAGE_DNS_ISSUE_TIME,
  HTTP_PAGE_DNS_LOOKUP_TIME,
  HTTP_PAGE_TCP_CONNECTION,
  HTTP_PAGE_OPEN_TO_FIRST_SENT,
  HTTP_PAGE_FIRST_SENT_TO_LAST_RECEIVED,
  HTTP_PAGE_OPEN_TO_FIRST_RECEIVED,
  HTTP_PAGE_OPEN_TO_FIRST_FROM_CACHE,
  HTTP_PAGE_OPEN_TO_FIRST_FROM_CACHE_V2,
  HTTP_PAGE_CACHE_READ_TIME,
  HTTP_PAGE_CACHE_READ_TIME_V2,
  HTTP_PAGE_REVALIDATION,
  HTTP_PAGE_COMPLETE_LOAD,
  HTTP_PAGE_COMPLETE_LOAD_V2,
  HTTP_PAGE_COMPLETE_LOAD_CACHED,
  HTTP_PAGE_COMPLETE_LOAD_CACHED_V2,
  HTTP_PAGE_COMPLETE_LOAD_NET,
  HTTP_PAGE_COMPLETE_LOAD_NET_V2,
  HTTP_SUB_DNS_ISSUE_TIME,
  HTTP_SUB_DNS_LOOKUP_TIME,
  HTTP_SUB_TCP_CONNECTION,
  HTTP_SUB_OPEN_TO_FIRST_SENT,
  HTTP_SUB_FIRST_SENT_TO_LAST_RECEIVED,
  HTTP_SUB_OPEN_TO_FIRST_RECEIVED,
  HTTP_SUB_OPEN_TO_FIRST_FROM_CACHE,
  HTTP_SUB_OPEN_TO_FIRST_FROM_CACHE_V2,
  HTTP_SUB_CACHE_READ_TIME,
  HTTP_SUB_CACHE_READ_TIME_V2,
  HTTP_SUB_REVALIDATION,
  HTTP_SUB_COMPLETE_LOAD,
  HTTP_SUB_COMPLETE_LOAD_V2,
  HTTP_SUB_COMPLETE_LOAD_CACHED,
  HTTP_SUB_COMPLETE_LOAD_CACHED_V2,
  HTTP_SUB_COMPLETE_LOAD_NET,
  HTTP_SUB_COMPLETE_LOAD_NET_V2,
  HTTP_PROXY_TYPE,
  HTTP_TRANSACTION_IS_SSL,
  HTTP_PAGELOAD_IS_SSL,
  SSL_HANDSHAKE_VERSION,
  SSL_TIME_UNTIL_READY,
  SSL_TIME_UNTIL_HANDSHAKE_FINISHED,
  SSL_BYTES_BEFORE_CERT_CALLBACK,
  SSL_NPN_TYPE,
  SSL_RESUMED_SESSION,
  CERT_VALIDATION_HTTP_REQUEST_RESULT,
  CERT_VALIDATION_HTTP_REQUEST_CANCELED_TIME,
  CERT_VALIDATION_HTTP_REQUEST_SUCCEEDED_TIME,
  CERT_VALIDATION_HTTP_REQUEST_FAILED_TIME,
  SSL_KEY_EXCHANGE_ALGORITHM_FULL,
  SSL_KEY_EXCHANGE_ALGORITHM_RESUMED,
  WEBSOCKETS_HANDSHAKE_TYPE,
  SPDY_VERSION2,
  SPDY_PARALLEL_STREAMS,
  SPDY_REQUEST_PER_CONN,
  SPDY_SERVER_INITIATED_STREAMS,
  SPDY_CHUNK_RECVD,
  SPDY_SYN_SIZE,
  SPDY_SYN_RATIO,
  SPDY_SYN_REPLY_SIZE,
  SPDY_SYN_REPLY_RATIO,
  SPDY_NPN_CONNECT,
  SPDY_NPN_JOIN,
  SPDY_KBREAD_PER_CONN,
  SPDY_SETTINGS_UL_BW,
  SPDY_SETTINGS_DL_BW,
  SPDY_SETTINGS_RTT,
  SPDY_SETTINGS_MAX_STREAMS,
  SPDY_SETTINGS_CWND,
  SPDY_SETTINGS_RETRANS,
  SPDY_SETTINGS_IW,
  DISK_CACHE_CORRUPT_DETAILS,
  DISK_CACHE_REDUCTION_TRIAL,
  DISK_CACHE_REVALIDATION_SAFE,
  DISK_CACHE_INVALIDATION_SUCCESS,
  DISK_CACHE_REVALIDATION_SUCCESS,
  HTTP_CACHE_DISPOSITION_2,
  HTTP_CACHE_DISPOSITION_2_V2,
  HTTP_DISK_CACHE_DISPOSITION_2,
  HTTP_CACHE_MISS_HALFLIFE_EXPERIMENT,
  HTTP_MEMORY_CACHE_DISPOSITION_2,
  HTTP_OFFLINE_CACHE_DISPOSITION_2,
  HTTP_OFFLINE_CACHE_DOCUMENT_LOAD,
  CACHE_DEVICE_SEARCH_2,
  CACHE_MEMORY_SEARCH_2,
  CACHE_DISK_SEARCH_2,
  CACHE_OFFLINE_SEARCH_2,
  TRANSACTION_WAIT_TIME_HTTP,
  TRANSACTION_WAIT_TIME_HTTP_PIPELINES,
  TRANSACTION_WAIT_TIME_SPDY,
  HTTP_DISK_CACHE_OVERHEAD,
  CACHE_LM_INCONSISTENT,
  CACHE_SERVICE_LOCK_WAIT_2,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_2,
  DISK_CACHE_SMART_SIZE_USING_OLD_MAX,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSSETDISKSMARTSIZECALLBACK_NOTIFY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSPROCESSREQUESTEVENT_RUN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSOUTPUTSTREAMWRAPPER_LAZYINIT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSOUTPUTSTREAMWRAPPER_CLOSEINTERNAL,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSOUTPUTSTREAMWRAPPER_RELEASE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCOMPRESSOUTPUTSTREAMWRAPPER_RELEASE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSINPUTSTREAMWRAPPER_LAZYINIT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSINPUTSTREAMWRAPPER_CLOSEINTERNAL,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSINPUTSTREAMWRAPPER_RELEASE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDECOMPRESSINPUTSTREAMWRAPPER_RELEASE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSEVICTDISKCACHEENTRIESEVENT_RUN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDOOMEVENT_RUN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDISKCACHESTREAMIO_WRITE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDISKCACHESTREAMIO_CLOSEOUTPUTSTREAM,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDISKCACHEDEVICEDEACTIVATEENTRYEVENT_RUN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDISKCACHEBINDING_DESTRUCTOR,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SHUTDOWN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETOFFLINECACHEENABLED,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETOFFLINECACHECAPACITY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETMEMORYCACHE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETDISKSMARTSIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETDISKCACHEMAXENTRYSIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETMEMORYCACHEMAXENTRYSIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETDISKCACHEENABLED,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_SETDISKCACHECAPACITY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_OPENCACHEENTRY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_ONPROFILESHUTDOWN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_ONPROFILECHANGED,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_LEAVEPRIVATEBROWSING,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_ISSTORAGEENABLEDFORPOLICY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_GETCACHEIOTARGET,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_EVICTENTRIESFORCLIENT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_DISKDEVICEHEAPSIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_CLOSEALLSTREAMS,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_DOOM,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETPREDICTEDDATASIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETDATASIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETSTORAGEDATASIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_REQUESTDATASIZECHANGE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETDATASIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_OPENINPUTSTREAM,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_OPENOUTPUTSTREAM,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETCACHEELEMENT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETCACHEELEMENT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETSTORAGEPOLICY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETSTORAGEPOLICY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETFILE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETSECURITYINFO,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETSECURITYINFO,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_DOOMANDFAILPENDINGREQUESTS,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_MARKVALID,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_CLOSE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETMETADATAELEMENT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETMETADATAELEMENT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_VISITMETADATA,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_SETEXPIRATIONTIME,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_ISSTREAMBASED,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETLASTMODIFIED,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETEXPIRATIONTIME,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETKEY,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETFETCHCOUNT,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETDEVICEID,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_PROCESSREQUEST,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHESERVICE_VISITENTRIES,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETPREDICTEDDATASIZE,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETLASTFETCHED,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSCACHEENTRYDESCRIPTOR_GETCLIENTID,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSBLOCKONCACHETHREADEVENT_RUN,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSDISKCACHEMAP_REVALIDATION,
  CACHE_SERVICE_LOCK_WAIT_MAINTHREAD_NSASYNCDOOMEVENT_RUN,
  DNT_USAGE,
  DNS_LOOKUP_METHOD2,
  DNS_CLEANUP_AGE,
  DNS_LOOKUP_TIME,
  DNS_RENEWAL_TIME,
  DNS_FAILED_LOOKUP_TIME,
  SEER_PREDICT_ATTEMPTS,
  SEER_LEARN_ATTEMPTS,
  SEER_PREDICT_FULL_QUEUE,
  SEER_LEARN_FULL_QUEUE,
  SEER_PREDICT_WAIT_TIME,
  SEER_PREDICT_WORK_TIME,
  SEER_LEARN_WAIT_TIME,
  SEER_LEARN_WORK_TIME,
  SEER_TOTAL_PREDICTIONS,
  SEER_TOTAL_PRECONNECTS,
  SEER_TOTAL_PRERESOLVES,
  SEER_PREDICTIONS_CALCULATED,
  SEER_GLOBAL_DEGRADATION,
  SEER_SUBRESOURCE_DEGRADATION,
  SEER_BASE_CONFIDENCE,
  SEER_CONFIDENCE,
  SEER_PREDICT_TIME_TO_ACTION,
  SEER_PREDICT_TIME_TO_INACTION,
  SEER_CLEANUP_DELTA,
  SEER_CLEANUP_SUCCEEDED,
  SEER_CLEANUP_TIME,
  SEER_CLEANUP_SCHEDULED,
  SEER_LOAD_COUNT_IS_ZERO,
  SEER_LOAD_COUNT_OVERFLOWS,
  SEER_STARTUP_COUNT_IS_ZERO,
  SEER_STARTUP_COUNT_OVERFLOWS,
  FIND_PLUGINS,
  CHECK_JAVA_ENABLED,
  PLUGIN_HANG_UI_USER_RESPONSE,
  PLUGIN_HANG_UI_DONT_ASK,
  PLUGIN_HANG_UI_RESPONSE_TIME,
  PLUGIN_HANG_TIME,
  PLUGIN_LOAD_METADATA,
  PLUGIN_SHUTDOWN_MS,
  PLUGIN_CALLED_DIRECTLY,
  MOZ_SQLITE_OPEN_MS,
  MOZ_SQLITE_OPEN_MAIN_THREAD_MS,
  MOZ_SQLITE_TRUNCATE_MS,
  MOZ_SQLITE_TRUNCATE_MAIN_THREAD_MS,
  MOZ_SQLITE_OTHER_READ_MS,
  MOZ_SQLITE_OTHER_READ_MAIN_THREAD_MS,
  MOZ_SQLITE_PLACES_READ_MS,
  MOZ_SQLITE_PLACES_READ_MAIN_THREAD_MS,
  MOZ_SQLITE_COOKIES_OPEN_READAHEAD_MS,
  MOZ_SQLITE_COOKIES_READ_MS,
  MOZ_SQLITE_COOKIES_READ_MAIN_THREAD_MS,
  MOZ_SQLITE_WEBAPPS_READ_MS,
  MOZ_SQLITE_WEBAPPS_READ_MAIN_THREAD_MS,
  MOZ_SQLITE_OTHER_WRITE_MS,
  MOZ_SQLITE_OTHER_WRITE_MAIN_THREAD_MS,
  MOZ_SQLITE_PLACES_WRITE_MS,
  MOZ_SQLITE_PLACES_WRITE_MAIN_THREAD_MS,
  MOZ_SQLITE_COOKIES_WRITE_MS,
  MOZ_SQLITE_COOKIES_WRITE_MAIN_THREAD_MS,
  MOZ_SQLITE_WEBAPPS_WRITE_MS,
  MOZ_SQLITE_WEBAPPS_WRITE_MAIN_THREAD_MS,
  MOZ_SQLITE_OTHER_SYNC_MS,
  MOZ_SQLITE_OTHER_SYNC_MAIN_THREAD_MS,
  MOZ_SQLITE_PLACES_SYNC_MS,
  MOZ_SQLITE_PLACES_SYNC_MAIN_THREAD_MS,
  MOZ_SQLITE_COOKIES_SYNC_MS,
  MOZ_SQLITE_COOKIES_SYNC_MAIN_THREAD_MS,
  MOZ_SQLITE_WEBAPPS_SYNC_MS,
  MOZ_SQLITE_WEBAPPS_SYNC_MAIN_THREAD_MS,
  MOZ_SQLITE_OTHER_READ_B,
  MOZ_SQLITE_PLACES_READ_B,
  MOZ_SQLITE_COOKIES_READ_B,
  MOZ_SQLITE_WEBAPPS_READ_B,
  MOZ_SQLITE_PLACES_WRITE_B,
  MOZ_SQLITE_COOKIES_WRITE_B,
  MOZ_SQLITE_WEBAPPS_WRITE_B,
  MOZ_SQLITE_OTHER_WRITE_B,
  MOZ_STORAGE_ASYNC_REQUESTS_MS,
  MOZ_STORAGE_ASYNC_REQUESTS_SUCCESS,
  STARTUP_MEASUREMENT_ERRORS,
  NETWORK_DISK_CACHE_OPEN,
  NETWORK_DISK_CACHE_TRASHRENAME,
  NETWORK_DISK_CACHE_DELETEDIR,
  NETWORK_DISK_CACHE_DELETEDIR_SHUTDOWN,
  NETWORK_DISK_CACHE_SHUTDOWN,
  NETWORK_DISK_CACHE_SHUTDOWN_V2,
  NETWORK_DISK_CACHE_SHUTDOWN_CLEAR_PRIVATE,
  NETWORK_DISK_CACHE_REVALIDATION,
  NETWORK_DISK_CACHE_STREAMIO_CLOSE,
  NETWORK_DISK_CACHE_STREAMIO_CLOSE_MAIN_THREAD,
  IDLE_NOTIFY_BACK_MS,
  IDLE_NOTIFY_BACK_LISTENERS,
  IDLE_NOTIFY_IDLE_MS,
  IDLE_NOTIFY_IDLE_LISTENERS,
  URLCLASSIFIER_LOOKUP_TIME,
  URLCLASSIFIER_CL_CHECK_TIME,
  URLCLASSIFIER_CL_UPDATE_TIME,
  URLCLASSIFIER_PS_FILELOAD_TIME,
  URLCLASSIFIER_PS_FALLOCATE_TIME,
  URLCLASSIFIER_PS_CONSTRUCT_TIME,
  URLCLASSIFIER_LC_PREFIXES,
  URLCLASSIFIER_LC_COMPLETIONS,
  URLCLASSIFIER_PS_FAILURE,
  PLACES_PAGES_COUNT,
  PLACES_BOOKMARKS_COUNT,
  PLACES_TAGS_COUNT,
  PLACES_FOLDERS_COUNT,
  PLACES_KEYWORDS_COUNT,
  PLACES_BACKUPS_DAYSFROMLAST,
  PLACES_BACKUPS_BOOKMARKSTREE_MS,
  PLACES_BACKUPS_TOJSON_MS,
  PLACES_EXPORT_TOHTML_MS,
#if defined(ANDROID)
  FENNEC_FAVICONS_COUNT,
#endif
#if defined(ANDROID)
  FENNEC_THUMBNAILS_COUNT,
#endif
  PLACES_SORTED_BOOKMARKS_PERC,
  PLACES_TAGGED_BOOKMARKS_PERC,
  PLACES_DATABASE_FILESIZE_MB,
  PLACES_DATABASE_JOURNALSIZE_MB,
  PLACES_DATABASE_PAGESIZE_B,
  PLACES_DATABASE_SIZE_PER_PAGE_B,
  PLACES_EXPIRATION_STEPS_TO_CLEAN2,
  PLACES_AUTOCOMPLETE_1ST_RESULT_TIME_MS,
  PLACES_AUTOCOMPLETE_URLINLINE_DOMAIN_QUERY_TIME_MS,
  PLACES_IDLE_FRECENCY_DECAY_TIME_MS,
  PLACES_IDLE_MAINTENANCE_TIME_MS,
  PLACES_ANNOS_BOOKMARKS_COUNT,
  PLACES_ANNOS_BOOKMARKS_SIZE_KB,
  PLACES_ANNOS_PAGES_COUNT,
  PLACES_ANNOS_PAGES_SIZE_KB,
  PLACES_FRECENCY_CALC_TIME_MS,
  UPDATER_BACKGROUND_CHECK_CODE_EXTERNAL,
  UPDATER_BACKGROUND_CHECK_CODE_NOTIFY,
  UPDATER_INVALID_LASTUPDATETIME_EXTERNAL,
  UPDATER_INVALID_LASTUPDATETIME_NOTIFY,
  UPDATER_LAST_NOTIFY_INTERVAL_DAYS_EXTERNAL,
  UPDATER_LAST_NOTIFY_INTERVAL_DAYS_NOTIFY,
  UPDATER_STATUS_CODES,
  UPDATER_UPDATES_ENABLED,
  UPDATER_UPDATES_METRO_ENABLED,
  UPDATER_UPDATES_AUTOMATIC,
  UPDATER_SERVICE_ENABLED,
  UPDATER_SERVICE_ERROR_CODE,
  UPDATER_SERVICE_ERRORS,
  UPDATER_SERVICE_INSTALLED,
  UPDATER_SERVICE_MANUALLY_UNINSTALLED,
  UPDATER_STAGE_ENABLED,
  UPDATER_HAS_PERMISSIONS,
  UPDATER_WIZ_LAST_PAGE_CODE,
  THUNDERBIRD_GLODA_SIZE_MB,
  THUNDERBIRD_CONVERSATIONS_TIME_TO_2ND_GLODA_QUERY_MS,
  THUNDERBIRD_INDEXING_RATE_MSG_PER_S,
  FX_GESTURE_TAKE_SNAPSHOT_OF_PAGE,
  FX_GESTURE_INSTALL_SNAPSHOT_OF_PAGE,
  FX_GESTURE_COMPRESS_SNAPSHOT_OF_PAGE,
  FX_TAB_ANIM_OPEN_MS,
  FX_TAB_ANIM_CLOSE_MS,
  FX_TAB_ANIM_OPEN_PREVIEW_FRAME_INTERVAL_MS,
  FX_TAB_ANIM_OPEN_FRAME_INTERVAL_MS,
  FX_TAB_ANIM_ANY_FRAME_INTERVAL_MS,
  FX_TAB_ANIM_ANY_FRAME_PAINT_MS,
  FX_TAB_SWITCH_UPDATE_MS,
  FX_TAB_SWITCH_TOTAL_MS,
  FX_TAB_CLICK_MS,
  FX_IDENTITY_POPUP_OPEN_MS,
  FX_BOOKMARKS_TOOLBAR_INIT_MS,
  FX_NEW_WINDOW_MS,
  FX_PAGE_LOAD_MS,
  FX_THUMBNAILS_CAPTURE_TIME_MS,
  FX_THUMBNAILS_STORE_TIME_MS,
  FX_THUMBNAILS_HIT_OR_MISS,
  EVENTLOOP_UI_LAG_EXP_MS,
  FX_SESSION_RESTORE_COLLECT_ALL_WINDOWS_DATA_MS,
  FX_SESSION_RESTORE_COLLECT_SINGLE_WINDOW_DATA_MS,
  FX_SESSION_RESTORE_COLLECT_COOKIES_MS,
  FX_SESSION_RESTORE_COLLECT_DATA_MS,
  FX_SESSION_RESTORE_COLLECT_DATA_LONGEST_OP_MS,
  FX_SESSION_RESTORE_CONTENT_COLLECT_DATA_LONGEST_OP_MS,
  FX_SESSION_RESTORE_SERIALIZE_DATA_MS,
  FX_SESSION_RESTORE_SERIALIZE_DATA_LONGEST_OP_MS,
  FX_SESSION_RESTORE_READ_FILE_MS,
  FX_SESSION_RESTORE_SEND_SERIALIZED_STATE_LONGEST_OP_MS,
  FX_SESSION_RESTORE_WRITE_STATE_LONGEST_OP_MS,
  FX_SESSION_RESTORE_WRITE_FILE_MS,
  FX_SESSION_RESTORE_WRITE_FILE_LONGEST_OP_MS,
  FX_SESSION_RESTORE_FILE_SIZE_BYTES,
  FX_SESSION_RESTORE_CORRUPT_FILE,
  FX_SESSION_RESTORE_BACKUP_FILE_MS,
  FX_SESSION_RESTORE_RESTORE_WINDOW_MS,
  FX_SESSION_RESTORE_SESSION_LENGTH,
  FX_SESSION_RESTORE_EXTRACTING_STATISTICS_DURATION_MS,
  FX_SESSION_RESTORE_TOTAL_OPEN_WINDOWS_SIZE_BYTES,
  FX_SESSION_RESTORE_TOTAL_CLOSED_WINDOWS_SIZE_BYTES,
  FX_SESSION_RESTORE_TOTAL_CLOSED_TABS_IN_OPEN_WINDOWS_SIZE_BYTES,
  FX_SESSION_RESTORE_TOTAL_COOKIES_SIZE_BYTES,
  FX_SESSION_RESTORE_TOTAL_DOM_STORAGE_SIZE_BYTES,
  FX_SESSION_RESTORE_TOTAL_FORMDATA_SIZE_BYTES,
  FX_SESSION_RESTORE_TOTAL_HISTORY_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_OPEN_WINDOWS_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_CLOSED_WINDOWS_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_CLOSED_TABS_IN_OPEN_WINDOWS_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_COOKIES_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_DOM_STORAGE_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_FORMDATA_SIZE_BYTES,
  FX_SESSION_RESTORE_INDIVIDUAL_HISTORY_SIZE_BYTES,
  INNERWINDOWS_WITH_MUTATION_LISTENERS,
  CHARSET_OVERRIDE_SITUATION,
  CHARSET_OVERRIDE_USED,
  DECODER_INSTANTIATED_HZ,
  DECODER_INSTANTIATED_ISO2022CN,
  DECODER_INSTANTIATED_ISO2022KR,
  DECODER_INSTANTIATED_ISO2022JP,
  DECODER_INSTANTIATED_JOHAB,
  DECODER_INSTANTIATED_T61,
  DECODER_INSTANTIATED_IBM850,
  DECODER_INSTANTIATED_IBM852,
  DECODER_INSTANTIATED_IBM855,
  DECODER_INSTANTIATED_IBM857,
  DECODER_INSTANTIATED_IBM862,
  DECODER_INSTANTIATED_IBM866,
  DECODER_INSTANTIATED_MACGREEK,
  DECODER_INSTANTIATED_MACICELANDIC,
  DECODER_INSTANTIATED_MACCE,
  DECODER_INSTANTIATED_MACHEBREW,
  DECODER_INSTANTIATED_MACARABIC,
  DECODER_INSTANTIATED_MACFARSI,
  DECODER_INSTANTIATED_MACCROATIAN,
  DECODER_INSTANTIATED_MACCYRILLIC,
  DECODER_INSTANTIATED_MACROMANIAN,
  DECODER_INSTANTIATED_MACTURKISH,
  DECODER_INSTANTIATED_MACDEVANAGARI,
  DECODER_INSTANTIATED_MACGUJARATI,
  DECODER_INSTANTIATED_MACGURMUKHI,
  DECODER_INSTANTIATED_ISOIR111,
  DECODER_INSTANTIATED_ARMSCII8,
  DECODER_INSTANTIATED_VISCII,
  DECODER_INSTANTIATED_VIETTCVN5712,
  DECODER_INSTANTIATED_VIETVPS,
  DECODER_INSTANTIATED_KOI8R,
  DECODER_INSTANTIATED_KOI8U,
  DECODER_INSTANTIATED_ISO_8859_5,
  XUL_FOREGROUND_REFLOW_MS,
  XUL_BACKGROUND_REFLOW_MS,
  HTML_FOREGROUND_REFLOW_MS_2,
  HTML_BACKGROUND_REFLOW_MS_2,
  LONG_REFLOW_INTERRUPTIBLE,
  XUL_INITIAL_FRAME_CONSTRUCTION,
  XMLHTTPREQUEST_ASYNC_OR_SYNC,
  DOM_TIMERS_FIRED_PER_NATIVE_TIMEOUT,
  DOM_TIMERS_RECENTLY_SET,
  DOM_RANGE_DETACHED,
  LOCALDOMSTORAGE_INIT_DATABASE_MS,
  LOCALDOMSTORAGE_SHUTDOWN_DATABASE_MS,
  LOCALDOMSTORAGE_PRELOAD_PENDING_ON_FIRST_ACCESS,
  LOCALDOMSTORAGE_GETALLKEYS_MS,
  LOCALDOMSTORAGE_GETALLKEYS_BLOCKING_MS,
  LOCALDOMSTORAGE_GETKEY_MS,
  LOCALDOMSTORAGE_GETKEY_BLOCKING_MS,
  LOCALDOMSTORAGE_GETLENGTH_MS,
  LOCALDOMSTORAGE_GETLENGTH_BLOCKING_MS,
  LOCALDOMSTORAGE_GETVALUE_MS,
  LOCALDOMSTORAGE_GETVALUE_BLOCKING_MS,
  LOCALDOMSTORAGE_SETVALUE_MS,
  LOCALDOMSTORAGE_SETVALUE_BLOCKING_MS,
  LOCALDOMSTORAGE_REMOVEKEY_MS,
  LOCALDOMSTORAGE_REMOVEKEY_BLOCKING_MS,
  LOCALDOMSTORAGE_CLEAR_MS,
  LOCALDOMSTORAGE_CLEAR_BLOCKING_MS,
  LOCALDOMSTORAGE_UNLOAD_BLOCKING_MS,
  LOCALDOMSTORAGE_SESSIONONLY_PRELOAD_BLOCKING_MS,
  LOCALDOMSTORAGE_KEY_SIZE_BYTES,
  LOCALDOMSTORAGE_VALUE_SIZE_BYTES,
  SESSIONDOMSTORAGE_KEY_SIZE_BYTES,
  SESSIONDOMSTORAGE_VALUE_SIZE_BYTES,
  RANGE_CHECKSUM_ERRORS,
  BUCKET_ORDER_ERRORS,
  TOTAL_COUNT_HIGH_ERRORS,
  TOTAL_COUNT_LOW_ERRORS,
  TELEMETRY_TEST_FLAG,
  STARTUP_CRASH_DETECTED,
  SAFE_MODE_USAGE,
  NEWTAB_PAGE_ENABLED,
  NEWTAB_PAGE_PINNED_SITES_COUNT,
  NEWTAB_PAGE_BLOCKED_SITES_COUNT,
  NEWTAB_PAGE_SHOWN,
  NEWTAB_PAGE_SITE_CLICKED,
  PANORAMA_INITIALIZATION_TIME_MS,
  PANORAMA_GROUPS_COUNT,
  PANORAMA_STACKED_GROUPS_COUNT,
  PANORAMA_MEDIAN_TABS_IN_GROUPS_COUNT,
#if defined(ANDROID)
  BROWSERPROVIDER_XUL_IMPORT_TIME,
#endif
#if defined(ANDROID)
  BROWSERPROVIDER_XUL_IMPORT_BOOKMARKS,
#endif
#if defined(ANDROID)
  BROWSERPROVIDER_XUL_IMPORT_HISTORY,
#endif
#if defined(ANDROID)
  FENNEC_AWESOMEBAR_ALLPAGES_EMPTY_TIME,
#endif
#if defined(ANDROID)
  FENNEC_LOWMEM_TAB_COUNT,
#endif
#if defined(ANDROID)
  FENNEC_RESTORING_ACTIVITY,
#endif
#if defined(ANDROID)
  FENNEC_STARTUP_TIME_JAVAUI,
#endif
#if defined(ANDROID)
  FENNEC_STARTUP_TIME_ABOUTHOME,
#endif
#if defined(ANDROID)
  FENNEC_STARTUP_TIME_GECKOREADY,
#endif
#if defined(ANDROID)
  FENNEC_STARTUP_GECKOAPP_ACTION,
#endif
#if defined(ANDROID)
  FENNEC_TAB_EXPIRED,
#endif
#if defined(ANDROID)
  FENNEC_TAB_ZOMBIFIED,
#endif
#if defined(ANDROID)
  FENNEC_WAS_KILLED,
#endif
  SECURITY_UI,
  SEARCH_SERVICE_INIT_MS,
  SEARCH_SERVICE_BUILD_CACHE_MS,
  SOCIAL_ENABLED_ON_SESSION,
  SOCIAL_TOGGLED,
  ENABLE_PRIVILEGE_EVER_CALLED,
  READ_SAVED_PING_SUCCESS,
#if defined(XP_WIN)
  TOUCH_ENABLED_DEVICE,
#endif
  COMPONENTS_SHIM_ACCESSED_BY_CONTENT,
  CHECK_ADDONS_MODIFIED_MS,
  TELEMETRY_MEMORY_REPORTER_MS,
  SSL_SUCCESFUL_CERT_VALIDATION_TIME_LIBPKIX,
  SSL_SUCCESFUL_CERT_VALIDATION_TIME_CLASSIC,
  SSL_SUCCESFUL_CERT_VALIDATION_TIME_INSANITY,
  SSL_INITIAL_FAILED_CERT_VALIDATION_TIME_LIBPKIX,
  SSL_INITIAL_FAILED_CERT_VALIDATION_TIME_CLASSIC,
  SSL_INITIAL_FAILED_CERT_VALIDATION_TIME_INSANITY,
  HEALTHREPORT_DB_OPEN_FIRSTRUN_MS,
  HEALTHREPORT_DB_OPEN_MS,
  HEALTHREPORT_INIT_FIRSTRUN_MS,
  HEALTHREPORT_INIT_MS,
  HEALTHREPORT_SHUTDOWN_DELAY_MS,
  HEALTHREPORT_GENERATE_JSON_PAYLOAD_MS,
  HEALTHREPORT_JSON_PAYLOAD_SERIALIZE_MS,
  HEALTHREPORT_PAYLOAD_UNCOMPRESSED_BYTES,
  HEALTHREPORT_PAYLOAD_COMPRESSED_BYTES,
  HEALTHREPORT_UPLOAD_MS,
  HEALTHREPORT_COLLECT_CONSTANT_DATA_MS,
  HEALTHREPORT_COLLECT_DAILY_MS,
  HEALTHREPORT_SHUTDOWN_MS,
  HEALTHREPORT_POST_COLLECT_CHECKPOINT_MS,
  CRASH_STORE_COMPRESSED_BYTES,
  PDF_VIEWER_USED,
  PDF_VIEWER_FALLBACK_SHOWN,
  PDF_VIEWER_PRINT,
  PDF_VIEWER_DOCUMENT_VERSION,
  PDF_VIEWER_DOCUMENT_GENERATOR,
  PDF_VIEWER_DOCUMENT_SIZE_KB,
  PDF_VIEWER_FORM,
  PDF_VIEWER_STREAM_TYPES,
  PDF_VIEWER_TIME_TO_VIEW_MS,
  SHUMWAY_TIME_TO_VIEW_MS,
  SHUMWAY_PARSING_MS,
  SHUMWAY_SWF_INDEX_ON_PAGE,
  SHUMWAY_SWF_SIZE_KB,
  SHUMWAY_SWF_VERSION,
  SHUMWAY_SWF_FRAME_RATE,
  SHUMWAY_SWF_AREA,
  SHUMWAY_SWF_AVM2,
  SHUMWAY_SWF_BANNER,
  SHUMWAY_ERROR,
  SHUMWAY_FEATURE_USED,
  SHUMWAY_FALLBACK,
  PLUGINS_NOTIFICATION_SHOWN,
  PLUGINS_NOTIFICATION_PLUGIN_COUNT,
  PLUGINS_NOTIFICATION_USER_ACTION,
  PLUGINS_INFOBAR_SHOWN,
  PLUGINS_INFOBAR_BLOCK,
  PLUGINS_INFOBAR_ALLOW,
  POPUP_NOTIFICATION_MAINACTION_TRIGGERED_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_RELOAD_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_RELOAD_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_NAVIGATETO_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_NAVIGATETO_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_EVENTLISTENERS_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_EVENTLISTENERS_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_DETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_DETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_RESUME_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_RESUME_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_INTERRUPT_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_INTERRUPT_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_CLIENTEVALUATE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_CLIENTEVALUATE_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_RELEASEMANY_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_RELEASEMANY_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_THREADGRIPS_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_THREADGRIPS_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_SOURCES_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_SOURCES_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_FRAMES_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_FRAMES_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_PARAMETERNAMES_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_PARAMETERNAMES_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_OWNPROPERTYNAMES_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_OWNPROPERTYNAMES_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_PROTOTYPEANDPROPERTIES_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_PROTOTYPEANDPROPERTIES_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_PROTOTYPESANDPROPERTIES_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_PROTOTYPESANDPROPERTIES_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_PROPERTY_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_PROPERTY_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_PROTOTYPE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_PROTOTYPE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_DISPLAYSTRING_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_DISPLAYSTRING_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_SUBSTRING_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_SUBSTRING_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_RELEASE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_RELEASE_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_LISTTABS_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_LISTTABS_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_LISTADDONS_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_LISTADDONS_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_DELETE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_DELETE_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_THREADDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_THREADDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_ADDONDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_ADDONDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_TABDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_TABDETACH_MS,
  DEVTOOLS_DEBUGGER_DISPLAY_SOURCE_LOCAL_MS,
  DEVTOOLS_DEBUGGER_DISPLAY_SOURCE_REMOTE_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_RECONFIGURETAB_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_RECONFIGURETAB_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_RECONFIGURETHREAD_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_RECONFIGURETHREAD_MS,
  WEBRTC_ICE_SUCCESS_RATE,
  WEBRTC_AVSYNC_WHEN_AUDIO_LAGS_VIDEO_MS,
  WEBRTC_AVSYNC_WHEN_VIDEO_LAGS_AUDIO_MS,
  WEBRTC_CALL_DURATION,
  WEBRTC_CALL_COUNT,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_TRACERDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_TRACERDETACH_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_STARTTRACE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_STARTTRACE_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_STOPTRACE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_STOPTRACE_MS,
  COOKIES_3RDPARTY_NUM_SITES_ACCEPTED,
  COOKIES_3RDPARTY_NUM_SITES_BLOCKED,
  COOKIES_3RDPARTY_NUM_ATTEMPTS_ACCEPTED,
  COOKIES_3RDPARTY_NUM_ATTEMPTS_BLOCKED,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_BLACKBOX_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_BLACKBOX_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_UNBLACKBOX_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_UNBLACKBOX_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_SCOPE_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_SCOPE_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_BINDINGS_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_BINDINGS_MS,
  DEVTOOLS_DEBUGGER_RDP_LOCAL_ASSIGN_MS,
  DEVTOOLS_DEBUGGER_RDP_REMOTE_ASSIGN_MS,
  DEVTOOLS_OPTIONS_OPENED_BOOLEAN,
  DEVTOOLS_WEBCONSOLE_OPENED_BOOLEAN,
  DEVTOOLS_BROWSERCONSOLE_OPENED_BOOLEAN,
  DEVTOOLS_INSPECTOR_OPENED_BOOLEAN,
  DEVTOOLS_RULEVIEW_OPENED_BOOLEAN,
  DEVTOOLS_COMPUTEDVIEW_OPENED_BOOLEAN,
  DEVTOOLS_LAYOUTVIEW_OPENED_BOOLEAN,
  DEVTOOLS_FONTINSPECTOR_OPENED_BOOLEAN,
  DEVTOOLS_JSDEBUGGER_OPENED_BOOLEAN,
  DEVTOOLS_JSBROWSERDEBUGGER_OPENED_BOOLEAN,
  DEVTOOLS_STYLEEDITOR_OPENED_BOOLEAN,
  DEVTOOLS_SHADEREDITOR_OPENED_BOOLEAN,
  DEVTOOLS_JSPROFILER_OPENED_BOOLEAN,
  DEVTOOLS_NETMONITOR_OPENED_BOOLEAN,
  DEVTOOLS_PAINTFLASHING_OPENED_BOOLEAN,
  DEVTOOLS_TILT_OPENED_BOOLEAN,
  DEVTOOLS_SCRATCHPAD_OPENED_BOOLEAN,
  DEVTOOLS_RESPONSIVE_OPENED_BOOLEAN,
  DEVTOOLS_DEVELOPERTOOLBAR_OPENED_BOOLEAN,
  DEVTOOLS_CUSTOM_OPENED_BOOLEAN,
  DEVTOOLS_OPTIONS_OPENED_PER_USER_FLAG,
  DEVTOOLS_WEBCONSOLE_OPENED_PER_USER_FLAG,
  DEVTOOLS_BROWSERCONSOLE_OPENED_PER_USER_FLAG,
  DEVTOOLS_INSPECTOR_OPENED_PER_USER_FLAG,
  DEVTOOLS_RULEVIEW_OPENED_PER_USER_FLAG,
  DEVTOOLS_COMPUTEDVIEW_OPENED_PER_USER_FLAG,
  DEVTOOLS_LAYOUTVIEW_OPENED_PER_USER_FLAG,
  DEVTOOLS_FONTINSPECTOR_OPENED_PER_USER_FLAG,
  DEVTOOLS_JSDEBUGGER_OPENED_PER_USER_FLAG,
  DEVTOOLS_JSBROWSERDEBUGGER_OPENED_PER_USER_FLAG,
  DEVTOOLS_STYLEEDITOR_OPENED_PER_USER_FLAG,
  DEVTOOLS_SHADEREDITOR_OPENED_PER_USER_FLAG,
  DEVTOOLS_JSPROFILER_OPENED_PER_USER_FLAG,
  DEVTOOLS_NETMONITOR_OPENED_PER_USER_FLAG,
  DEVTOOLS_PAINTFLASHING_OPENED_PER_USER_FLAG,
  DEVTOOLS_TILT_OPENED_PER_USER_FLAG,
  DEVTOOLS_SCRATCHPAD_OPENED_PER_USER_FLAG,
  DEVTOOLS_RESPONSIVE_OPENED_PER_USER_FLAG,
  DEVTOOLS_DEVELOPERTOOLBAR_OPENED_PER_USER_FLAG,
  DEVTOOLS_CUSTOM_OPENED_PER_USER_FLAG,
  DEVTOOLS_TOOLBOX_TIME_ACTIVE_SECONDS,
  DEVTOOLS_OPTIONS_TIME_ACTIVE_SECONDS,
  DEVTOOLS_WEBCONSOLE_TIME_ACTIVE_SECONDS,
  DEVTOOLS_BROWSERCONSOLE_TIME_ACTIVE_SECONDS,
  DEVTOOLS_INSPECTOR_TIME_ACTIVE_SECONDS,
  DEVTOOLS_RULEVIEW_TIME_ACTIVE_SECONDS,
  DEVTOOLS_COMPUTEDVIEW_TIME_ACTIVE_SECONDS,
  DEVTOOLS_LAYOUTVIEW_TIME_ACTIVE_SECONDS,
  DEVTOOLS_FONTINSPECTOR_TIME_ACTIVE_SECONDS,
  DEVTOOLS_JSDEBUGGER_TIME_ACTIVE_SECONDS,
  DEVTOOLS_JSBROWSERDEBUGGER_TIME_ACTIVE_SECONDS,
  DEVTOOLS_STYLEEDITOR_TIME_ACTIVE_SECONDS,
  DEVTOOLS_SHADEREDITOR_TIME_ACTIVE_SECONDS,
  DEVTOOLS_JSPROFILER_TIME_ACTIVE_SECONDS,
  DEVTOOLS_NETMONITOR_TIME_ACTIVE_SECONDS,
  DEVTOOLS_PAINTFLASHING_TIME_ACTIVE_SECONDS,
  DEVTOOLS_TILT_TIME_ACTIVE_SECONDS,
  DEVTOOLS_SCRATCHPAD_TIME_ACTIVE_SECONDS,
  DEVTOOLS_RESPONSIVE_TIME_ACTIVE_SECONDS,
  DEVTOOLS_DEVELOPERTOOLBAR_TIME_ACTIVE_SECONDS,
  DEVTOOLS_CUSTOM_TIME_ACTIVE_SECONDS,
  BROWSER_IS_USER_DEFAULT,
  MIXED_CONTENT_PAGE_LOAD,
  MIXED_CONTENT_UNBLOCK_COUNTER,
  NTLM_MODULE_USED_2,
  FX_THUMBNAILS_BG_QUEUE_SIZE_ON_CAPTURE,
  FX_THUMBNAILS_BG_CAPTURE_QUEUE_TIME_MS,
  FX_THUMBNAILS_BG_CAPTURE_SERVICE_TIME_MS,
  FX_THUMBNAILS_BG_CAPTURE_DONE_REASON_2,
  FX_THUMBNAILS_BG_CAPTURE_PAGE_LOAD_TIME_MS,
  FX_THUMBNAILS_BG_CAPTURE_CANVAS_DRAW_TIME_MS,
  NETWORK_CACHE_V2_MISS_TIME_MS,
  NETWORK_CACHE_V2_HIT_TIME_MS,
  NETWORK_CACHE_V1_TRUNCATE_TIME_MS,
  NETWORK_CACHE_V1_MISS_TIME_MS,
  NETWORK_CACHE_V1_HIT_TIME_MS,
  SSL_TLS12_INTOLERANCE_REASON_PRE,
  SSL_TLS12_INTOLERANCE_REASON_POST,
  SSL_TLS11_INTOLERANCE_REASON_PRE,
  SSL_TLS11_INTOLERANCE_REASON_POST,
  SSL_TLS10_INTOLERANCE_REASON_PRE,
  SSL_TLS10_INTOLERANCE_REASON_POST,
  SSL_SSL30_INTOLERANCE_REASON_PRE,
  SSL_SSL30_INTOLERANCE_REASON_POST,
  SSL_CIPHER_SUITE_FULL,
  SSL_CIPHER_SUITE_RESUMED,
  SSL_KEA_RSA_KEY_SIZE_FULL,
  SSL_KEA_DHE_KEY_SIZE_FULL,
  SSL_KEA_ECDHE_CURVE_FULL,
  SSL_AUTH_ALGORITHM_FULL,
  SSL_AUTH_RSA_KEY_SIZE_FULL,
  SSL_AUTH_DSA_KEY_SIZE_FULL,
  SSL_AUTH_ECDSA_CURVE_FULL,
  SSL_SYMMETRIC_CIPHER_FULL,
  SSL_SYMMETRIC_CIPHER_RESUMED,
  SSL_REASONS_FOR_NOT_FALSE_STARTING,
  SSL_HANDSHAKE_TYPE,
  SSL_OCSP_STAPLING,
  SSL_OCSP_MAY_FETCH,
  SSL_CERT_ERROR_OVERRIDES,
  TELEMETRY_TEST_EXPIRED,
  CERT_OCSP_ENABLED,
  CERT_OCSP_REQUIRED,
  OSFILE_WORKER_LAUNCH_MS,
  OSFILE_WORKER_READY_MS,
  OSFILE_WRITEATOMIC_JANK_MS,
  HistogramCount
};
