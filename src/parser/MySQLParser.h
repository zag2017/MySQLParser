
// Generated from MySQLParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace parser {


class  MySQLParser : public antlr4::Parser {
public:
  enum {
    SPACE = 1, SPEC_MYSQL_COMMENT = 2, COMMENT_INPUT = 3, LINE_COMMENT = 4, 
    ADD = 5, ALL = 6, ALTER = 7, ANALYZE = 8, AND = 9, AS = 10, ASC = 11, 
    BEFORE = 12, BETWEEN = 13, BOTH = 14, BY = 15, CALL = 16, CASCADE = 17, 
    CASE = 18, CAST = 19, CHANGE = 20, CHARACTER = 21, CHECK = 22, COLLATE = 23, 
    COLUMN = 24, CONDITION = 25, CONSTRAINT = 26, CONTINUE = 27, CONVERT = 28, 
    CREATE = 29, CROSS = 30, CURRENT_USER = 31, CURSOR = 32, DATABASE = 33, 
    DATABASES = 34, DECLARE = 35, DEFAULT = 36, DELAYED = 37, DELETE = 38, 
    DESC = 39, DESCRIBE = 40, DETERMINISTIC = 41, DISTINCT = 42, DISTINCTROW = 43, 
    DROP = 44, EACH = 45, ELSE = 46, ELSEIF = 47, ENCLOSED = 48, ESCAPED = 49, 
    EXISTS = 50, EXIT = 51, EXPLAIN = 52, FALSE = 53, FETCH = 54, FOR = 55, 
    FORCE = 56, FOREIGN = 57, FROM = 58, FULLTEXT = 59, GRANT = 60, GROUP = 61, 
    HAVING = 62, HIGH_PRIORITY = 63, IF = 64, IGNORE = 65, IN = 66, INDEX = 67, 
    INFILE = 68, INNER = 69, INOUT = 70, INSERT = 71, INTERVAL = 72, INTO = 73, 
    IS = 74, ITERATE = 75, JOIN = 76, KEY = 77, KEYS = 78, KILL = 79, LEADING = 80, 
    LEAVE = 81, LEFT = 82, LIKE = 83, LIMIT = 84, LINEAR = 85, LINES = 86, 
    LOAD = 87, LOCK = 88, LOOP = 89, LOW_PRIORITY = 90, MASTER_BIND = 91, 
    MASTER_SSL_VERIFY_SERVER_CERT = 92, MATCH = 93, MAXVALUE = 94, MODIFIES = 95, 
    NATURAL = 96, NOTNULL = 97, NOT = 98, NO_WRITE_TO_BINLOG = 99, NULL_LITERAL = 100, 
    ON = 101, OPTIMIZE = 102, OPTION = 103, OPTIONALLY = 104, OR = 105, 
    ORDER = 106, OUT = 107, OUTER = 108, OUTFILE = 109, PARTITION = 110, 
    PRIMARY = 111, PROCEDURE = 112, PURGE = 113, RANGE = 114, READ = 115, 
    READS = 116, REFERENCES = 117, REGEXP = 118, RELEASE = 119, RENAME = 120, 
    REPEAT = 121, REPLACE = 122, REQUIRE = 123, RESTRICT = 124, RETURN = 125, 
    REVOKE = 126, RIGHT = 127, RLIKE = 128, SCHEMA = 129, SCHEMAS = 130, 
    SELECT = 131, SET = 132, SEPARATOR = 133, SHOW = 134, SPATIAL = 135, 
    SQL = 136, SQLEXCEPTION = 137, SQLSTATE = 138, SQLWARNING = 139, SQL_BIG_RESULT = 140, 
    SQL_CALC_FOUND_ROWS = 141, SQL_SMALL_RESULT = 142, SSL = 143, STARTING = 144, 
    STRAIGHT_JOIN = 145, TABLE = 146, TERMINATED = 147, THEN = 148, TO = 149, 
    TRAILING = 150, TRIGGER = 151, TRUE = 152, UNDO = 153, UNION = 154, 
    UNIQUE = 155, UNLOCK = 156, UNSIGNED = 157, UPDATE = 158, USAGE = 159, 
    USE = 160, USING = 161, VALUES = 162, WHEN = 163, WHERE = 164, WHILE = 165, 
    WITH = 166, WRITE = 167, XOR = 168, ZEROFILL = 169, TINYINT = 170, SMALLINT = 171, 
    MEDIUMINT = 172, INT = 173, INTEGER = 174, BIGINT = 175, REAL = 176, 
    DOUBLE = 177, FLOAT = 178, DECIMAL = 179, NUMERIC = 180, DATE = 181, 
    TIME = 182, TIMESTAMP = 183, DATETIME = 184, YEAR = 185, CHAR = 186, 
    VARCHAR = 187, BINARY = 188, VARBINARY = 189, TINYBLOB = 190, BLOB = 191, 
    MEDIUMBLOB = 192, LONGBLOB = 193, TINYTEXT = 194, TEXT = 195, MEDIUMTEXT = 196, 
    LONGTEXT = 197, ENUM = 198, YEAR_MONTH = 199, DAY_HOUR = 200, DAY_MINUTE = 201, 
    DAY_SECOND = 202, HOUR_MINUTE = 203, HOUR_SECOND = 204, MINUTE_SECOND = 205, 
    SECOND_MICROSECOND = 206, MINUTE_MICROSECOND = 207, HOUR_MICROSECOND = 208, 
    DAY_MICROSECOND = 209, AVG = 210, BIT_AND = 211, BIT_OR = 212, BIT_XOR = 213, 
    COUNT = 214, GROUP_CONCAT = 215, MAX = 216, MIN = 217, STD = 218, STDDEV = 219, 
    STDDEV_POP = 220, STDDEV_SAMP = 221, SUM = 222, VAR_POP = 223, VAR_SAMP = 224, 
    VARIANCE = 225, CURRENT_DATE = 226, CURRENT_TIME = 227, CURRENT_TIMESTAMP = 228, 
    LOCALTIME = 229, CURDATE = 230, CURTIME = 231, DATE_ADD = 232, DATE_SUB = 233, 
    EXTRACT = 234, LOCALTIMESTAMP = 235, NOW = 236, POSITION = 237, SUBSTR = 238, 
    SUBSTRING = 239, SYSDATE = 240, TRIM = 241, UTC_DATE = 242, UTC_TIME = 243, 
    UTC_TIMESTAMP = 244, ACCOUNT = 245, ACTION = 246, AFTER = 247, AGGREGATE = 248, 
    ALGORITHM = 249, ANY = 250, AT = 251, AUTHORS = 252, AUTOCOMMIT = 253, 
    AUTOEXTEND_SIZE = 254, AUTO_INCREMENT = 255, AVG_ROW_LENGTH = 256, BEGIN = 257, 
    BINLOG = 258, BIT = 259, BLOCK = 260, BTREE = 261, CACHE = 262, CASCADED = 263, 
    CHAIN = 264, CHANGED = 265, CHANNEL = 266, CHECKSUM = 267, CIPHER = 268, 
    CLIENT = 269, CLOSE = 270, COALESCE = 271, CODE = 272, COLUMNS = 273, 
    COLUMN_FORMAT = 274, COMMENT = 275, COMMIT = 276, COMPACT = 277, COMPLETION = 278, 
    COMPRESSED = 279, COMPRESSION = 280, CONCURRENT = 281, CONNECTION = 282, 
    CONSISTENT = 283, CONTAINS = 284, CONTEXT = 285, CONTRIBUTORS = 286, 
    COPY = 287, CPU = 288, DATA = 289, DATAFILE = 290, DEALLOCATE = 291, 
    DEFAULT_AUTH = 292, DEFINER = 293, DELAY_KEY_WRITE = 294, DES_KEY_FILE = 295, 
    DIRECTORY = 296, DISABLE = 297, DISCARD = 298, DISK = 299, DO = 300, 
    DUMPFILE = 301, DUPLICATE = 302, DYNAMIC = 303, ENABLE = 304, ENCRYPTION = 305, 
    END = 306, ENDS = 307, ENGINE = 308, ENGINES = 309, ERROR = 310, ERRORS = 311, 
    ESCAPE = 312, EVEN = 313, EVENT = 314, EVENTS = 315, EVERY = 316, EXCHANGE = 317, 
    EXCLUSIVE = 318, EXPIRE = 319, EXPORT = 320, EXTENDED = 321, EXTENT_SIZE = 322, 
    FAST = 323, FAULTS = 324, FIELDS = 325, FILE_BLOCK_SIZE = 326, FILTER = 327, 
    FIRST = 328, FIXED = 329, FLUSH = 330, FOLLOWS = 331, FOUND = 332, FULL = 333, 
    FUNCTION = 334, GENERAL = 335, GLOBAL = 336, GRANTS = 337, GROUP_REPLICATION = 338, 
    HANDLER = 339, HASH = 340, HELP = 341, HOST = 342, HOSTS = 343, IDENTIFIED = 344, 
    IGNORE_SERVER_IDS = 345, IMPORT = 346, INDEXES = 347, INITIAL_SIZE = 348, 
    INPLACE = 349, INSERT_METHOD = 350, INSTALL = 351, INSTANCE = 352, INVOKER = 353, 
    IO = 354, IO_THREAD = 355, IPC = 356, ISOLATION = 357, ISSUER = 358, 
    JSON = 359, KEY_BLOCK_SIZE = 360, LANGUAGE = 361, LAST = 362, LEAVES = 363, 
    LESS = 364, LEVEL = 365, LIST = 366, LOCAL = 367, LOGFILE = 368, LOGS = 369, 
    MASTER = 370, MASTER_AUTO_POSITION = 371, MASTER_CONNECT_RETRY = 372, 
    MASTER_DELAY = 373, MASTER_HEARTBEAT_PERIOD = 374, MASTER_HOST = 375, 
    MASTER_LOG_FILE = 376, MASTER_LOG_POS = 377, MASTER_PASSWORD = 378, 
    MASTER_PORT = 379, MASTER_RETRY_COUNT = 380, MASTER_SSL = 381, MASTER_SSL_CA = 382, 
    MASTER_SSL_CAPATH = 383, MASTER_SSL_CERT = 384, MASTER_SSL_CIPHER = 385, 
    MASTER_SSL_CRL = 386, MASTER_SSL_CRLPATH = 387, MASTER_SSL_KEY = 388, 
    MASTER_TLS_VERSION = 389, MASTER_USER = 390, MAX_CONNECTIONS_PER_HOUR = 391, 
    MAX_QUERIES_PER_HOUR = 392, MAX_ROWS = 393, MAX_SIZE = 394, MAX_UPDATES_PER_HOUR = 395, 
    MAX_USER_CONNECTIONS = 396, MEDIUM = 397, MERGE = 398, MID = 399, MIGRATE = 400, 
    MIN_ROWS = 401, MODE = 402, MODIFY = 403, MUTEX = 404, MYSQL = 405, 
    NAME = 406, NAMES = 407, NCHAR = 408, NEVER = 409, NEXT = 410, NO = 411, 
    NODEGROUP = 412, NONE = 413, OFFLINE = 414, OFFSET = 415, OJ = 416, 
    OLD_PASSWORD = 417, ONE = 418, ONLINE = 419, ONLY = 420, OPEN = 421, 
    OPTIMIZER_COSTS = 422, OPTIONS = 423, OWNER = 424, PACK_KEYS = 425, 
    PAGE = 426, PARSER = 427, PARTIAL = 428, PARTITIONING = 429, PARTITIONS = 430, 
    PASSWORD = 431, PHASE = 432, PLUGIN = 433, PLUGIN_DIR = 434, PLUGINS = 435, 
    PORT = 436, PRECEDES = 437, PREPARE = 438, PRESERVE = 439, PREV = 440, 
    PROCESSLIST = 441, PROFILE = 442, PROFILES = 443, PROXY = 444, QUERY = 445, 
    QUICK = 446, REBUILD = 447, RECOVER = 448, REDO_BUFFER_SIZE = 449, REDUNDANT = 450, 
    RELAY = 451, RELAY_LOG_FILE = 452, RELAY_LOG_POS = 453, RELAYLOG = 454, 
    REMOVE = 455, REORGANIZE = 456, REPAIR = 457, REPLICATE_DO_DB = 458, 
    REPLICATE_DO_TABLE = 459, REPLICATE_IGNORE_DB = 460, REPLICATE_IGNORE_TABLE = 461, 
    REPLICATE_REWRITE_DB = 462, REPLICATE_WILD_DO_TABLE = 463, REPLICATE_WILD_IGNORE_TABLE = 464, 
    REPLICATION = 465, RESET = 466, RESUME = 467, RETURNS = 468, ROLLBACK = 469, 
    ROLLUP = 470, ROTATE = 471, ROW = 472, ROWS = 473, ROW_FORMAT = 474, 
    SAVEPOINT = 475, SCHEDULE = 476, SECURITY = 477, SERVER = 478, SESSION = 479, 
    SHARE = 480, SHARED = 481, SIGNED = 482, SIMPLE = 483, SLAVE = 484, 
    SLOW = 485, SNAPSHOT = 486, SOCKET = 487, SOME = 488, SONAME = 489, 
    SOUNDS = 490, SOURCE = 491, SQL_AFTER_GTIDS = 492, SQL_AFTER_MTS_GAPS = 493, 
    SQL_BEFORE_GTIDS = 494, SQL_BUFFER_RESULT = 495, SQL_CACHE = 496, SQL_NO_CACHE = 497, 
    SQL_THREAD = 498, START = 499, STARTS = 500, STATS_AUTO_RECALC = 501, 
    STATS_PERSISTENT = 502, STATS_SAMPLE_PAGES = 503, STATUS = 504, STOP = 505, 
    STORAGE = 506, STRING = 507, SUBJECT = 508, SUBPARTITION = 509, SUBPARTITIONS = 510, 
    SUSPEND = 511, SWAPS = 512, SWITCHES = 513, TABLESPACE = 514, TEMPORARY = 515, 
    TEMPTABLE = 516, THAN = 517, TRADITIONAL = 518, TRANSACTION = 519, TRIGGERS = 520, 
    TRUNCATE = 521, UNDEFINED = 522, UNDOFILE = 523, UNDO_BUFFER_SIZE = 524, 
    UNINSTALL = 525, UNKNOWN = 526, UNTIL = 527, UPGRADE = 528, USER = 529, 
    USE_FRM = 530, USER_RESOURCES = 531, VALIDATION = 532, VALUE = 533, 
    VARIABLES = 534, VIEW = 535, WAIT = 536, WARNINGS = 537, WITHOUT = 538, 
    WORK = 539, WRAPPER = 540, X509 = 541, XA = 542, XML = 543, EUR = 544, 
    USA = 545, JIS = 546, ISO = 547, INTERNAL = 548, QUARTER = 549, MONTH = 550, 
    DAY = 551, HOUR = 552, MINUTE = 553, WEEK = 554, SECOND = 555, MICROSECOND = 556, 
    TABLES = 557, ROUTINE = 558, EXECUTE = 559, FILE = 560, PROCESS = 561, 
    RELOAD = 562, SHUTDOWN = 563, SUPER = 564, PRIVILEGES = 565, ARMSCII8 = 566, 
    ASCII = 567, BIG5 = 568, CP1250 = 569, CP1251 = 570, CP1256 = 571, CP1257 = 572, 
    CP850 = 573, CP852 = 574, CP866 = 575, CP932 = 576, DEC8 = 577, EUCJPMS = 578, 
    EUCKR = 579, GB2312 = 580, GBK = 581, GEOSTD8 = 582, GREEK = 583, HEBREW = 584, 
    HP8 = 585, KEYBCS2 = 586, KOI8R = 587, KOI8U = 588, LATIN1 = 589, LATIN2 = 590, 
    LATIN5 = 591, LATIN7 = 592, MACCE = 593, MACROMAN = 594, SJIS = 595, 
    SWE7 = 596, TIS620 = 597, UCS2 = 598, UJIS = 599, UTF16 = 600, UTF16LE = 601, 
    UTF32 = 602, UTF8 = 603, UTF8MB3 = 604, UTF8MB4 = 605, ARCHIVE = 606, 
    BLACKHOLE = 607, CSV = 608, FEDERATED = 609, INNODB = 610, MEMORY = 611, 
    MRG_MYISAM = 612, MYISAM = 613, NDB = 614, NDBCLUSTER = 615, PERFOMANCE_SCHEMA = 616, 
    REPEATABLE = 617, COMMITTED = 618, UNCOMMITTED = 619, SERIALIZABLE = 620, 
    GEOMETRYCOLLECTION = 621, LINESTRING = 622, MULTILINESTRING = 623, MULTIPOINT = 624, 
    MULTIPOLYGON = 625, POINT = 626, POLYGON = 627, ABS = 628, ACOS = 629, 
    ADDDATE = 630, ADDTIME = 631, AES_DECRYPT = 632, AES_ENCRYPT = 633, 
    AREA = 634, ASBINARY = 635, ASIN = 636, ASTEXT = 637, ASWKB = 638, ASWKT = 639, 
    ASYMMETRIC_DECRYPT = 640, ASYMMETRIC_DERIVE = 641, ASYMMETRIC_ENCRYPT = 642, 
    ASYMMETRIC_SIGN = 643, ASYMMETRIC_VERIFY = 644, ATAN = 645, ATAN2 = 646, 
    BENCHMARK = 647, BIN = 648, BIT_COUNT = 649, BIT_LENGTH = 650, BUFFER = 651, 
    CEIL = 652, CEILING = 653, CENTROID = 654, CHARACTER_LENGTH = 655, CHARSET = 656, 
    CHAR_LENGTH = 657, COERCIBILITY = 658, COLLATION = 659, COMPRESS = 660, 
    CONCAT = 661, CONCAT_WS = 662, CONNECTION_ID = 663, CONV = 664, CONVERT_TZ = 665, 
    COS = 666, COT = 667, CRC32 = 668, CREATE_ASYMMETRIC_PRIV_KEY = 669, 
    CREATE_ASYMMETRIC_PUB_KEY = 670, CREATE_DH_PARAMETERS = 671, CREATE_DIGEST = 672, 
    CROSSES = 673, DATEDIFF = 674, DATE_FORMAT = 675, DAYNAME = 676, DAYOFMONTH = 677, 
    DAYOFWEEK = 678, DAYOFYEAR = 679, DECODE = 680, DEGREES = 681, DES_DECRYPT = 682, 
    DES_ENCRYPT = 683, DIMENSION = 684, DISJOINT = 685, ELT = 686, ENCODE = 687, 
    ENCRYPT = 688, ENDPOINT = 689, ENVELOPE = 690, EQUALS = 691, EXP = 692, 
    EXPORT_SET = 693, EXTERIORRING = 694, EXTRACTVALUE = 695, FIELD = 696, 
    FIND_IN_SET = 697, FLOOR = 698, FORMAT = 699, FOUND_ROWS = 700, FROM_BASE64 = 701, 
    FROM_DAYS = 702, FROM_UNIXTIME = 703, GEOMCOLLFROMTEXT = 704, GEOMCOLLFROMWKB = 705, 
    GEOMETRYCOLLECTIONFROMTEXT = 706, GEOMETRYCOLLECTIONFROMWKB = 707, GEOMETRYFROMTEXT = 708, 
    GEOMETRYFROMWKB = 709, GEOMETRYN = 710, GEOMETRYTYPE = 711, GEOMFROMTEXT = 712, 
    GEOMFROMWKB = 713, GET_FORMAT = 714, GET_LOCK = 715, GLENGTH = 716, 
    GREATEST = 717, GTID_SUBSET = 718, GTID_SUBTRACT = 719, HEX = 720, IFNULL = 721, 
    INET6_ATON = 722, INET6_NTOA = 723, INET_ATON = 724, INET_NTOA = 725, 
    INSTR = 726, INTERIORRINGN = 727, INTERSECTS = 728, ISCLOSED = 729, 
    ISEMPTY = 730, ISNULL = 731, ISSIMPLE = 732, IS_FREE_LOCK = 733, IS_IPV4 = 734, 
    IS_IPV4_COMPAT = 735, IS_IPV4_MAPPED = 736, IS_IPV6 = 737, IS_USED_LOCK = 738, 
    LAST_INSERT_ID = 739, LCASE = 740, LEAST = 741, LENGTH = 742, LINEFROMTEXT = 743, 
    LINEFROMWKB = 744, LINESTRINGFROMTEXT = 745, LINESTRINGFROMWKB = 746, 
    LN = 747, LOAD_FILE = 748, LOCATE = 749, LOG = 750, LOG10 = 751, LOG2 = 752, 
    LOWER = 753, LPAD = 754, LTRIM = 755, MAKEDATE = 756, MAKETIME = 757, 
    MAKE_SET = 758, MASTER_POS_WAIT = 759, MBRCONTAINS = 760, MBRDISJOINT = 761, 
    MBREQUAL = 762, MBRINTERSECTS = 763, MBROVERLAPS = 764, MBRTOUCHES = 765, 
    MBRWITHIN = 766, MD5 = 767, MLINEFROMTEXT = 768, MLINEFROMWKB = 769, 
    MONTHNAME = 770, MPOINTFROMTEXT = 771, MPOINTFROMWKB = 772, MPOLYFROMTEXT = 773, 
    MPOLYFROMWKB = 774, MULTILINESTRINGFROMTEXT = 775, MULTILINESTRINGFROMWKB = 776, 
    MULTIPOINTFROMTEXT = 777, MULTIPOINTFROMWKB = 778, MULTIPOLYGONFROMTEXT = 779, 
    MULTIPOLYGONFROMWKB = 780, NAME_CONST = 781, NULLIF = 782, NUMGEOMETRIES = 783, 
    NUMINTERIORRINGS = 784, NUMPOINTS = 785, OCT = 786, OCTET_LENGTH = 787, 
    ORD = 788, OVERLAPS = 789, PERIOD_ADD = 790, PERIOD_DIFF = 791, PI = 792, 
    POINTFROMTEXT = 793, POINTFROMWKB = 794, POINTN = 795, POLYFROMTEXT = 796, 
    POLYFROMWKB = 797, POLYGONFROMTEXT = 798, POLYGONFROMWKB = 799, POW = 800, 
    POWER = 801, QUOTE = 802, RADIANS = 803, RAND = 804, RANDOM_BYTES = 805, 
    RELEASE_LOCK = 806, REVERSE = 807, ROUND = 808, ROW_COUNT = 809, RPAD = 810, 
    RTRIM = 811, SEC_TO_TIME = 812, SESSION_USER = 813, SHA = 814, SHA1 = 815, 
    SHA2 = 816, SIGN = 817, SIN = 818, SLEEP = 819, SOUNDEX = 820, SQL_THREAD_WAIT_AFTER_GTIDS = 821, 
    SQRT = 822, SRID = 823, STARTPOINT = 824, STRCMP = 825, STR_TO_DATE = 826, 
    ST_AREA = 827, ST_ASBINARY = 828, ST_ASTEXT = 829, ST_ASWKB = 830, ST_ASWKT = 831, 
    ST_BUFFER = 832, ST_CENTROID = 833, ST_CONTAINS = 834, ST_CROSSES = 835, 
    ST_DIFFERENCE = 836, ST_DIMENSION = 837, ST_DISJOINT = 838, ST_DISTANCE = 839, 
    ST_ENDPOINT = 840, ST_ENVELOPE = 841, ST_EQUALS = 842, ST_EXTERIORRING = 843, 
    ST_GEOMCOLLFROMTEXT = 844, ST_GEOMCOLLFROMTXT = 845, ST_GEOMCOLLFROMWKB = 846, 
    ST_GEOMETRYCOLLECTIONFROMTEXT = 847, ST_GEOMETRYCOLLECTIONFROMWKB = 848, 
    ST_GEOMETRYFROMTEXT = 849, ST_GEOMETRYFROMWKB = 850, ST_GEOMETRYN = 851, 
    ST_GEOMETRYTYPE = 852, ST_GEOMFROMTEXT = 853, ST_GEOMFROMWKB = 854, 
    ST_INTERIORRINGN = 855, ST_INTERSECTION = 856, ST_INTERSECTS = 857, 
    ST_ISCLOSED = 858, ST_ISEMPTY = 859, ST_ISSIMPLE = 860, ST_LINEFROMTEXT = 861, 
    ST_LINEFROMWKB = 862, ST_LINESTRINGFROMTEXT = 863, ST_LINESTRINGFROMWKB = 864, 
    ST_NUMGEOMETRIES = 865, ST_NUMINTERIORRING = 866, ST_NUMINTERIORRINGS = 867, 
    ST_NUMPOINTS = 868, ST_OVERLAPS = 869, ST_POINTFROMTEXT = 870, ST_POINTFROMWKB = 871, 
    ST_POINTN = 872, ST_POLYFROMTEXT = 873, ST_POLYFROMWKB = 874, ST_POLYGONFROMTEXT = 875, 
    ST_POLYGONFROMWKB = 876, ST_SRID = 877, ST_STARTPOINT = 878, ST_SYMDIFFERENCE = 879, 
    ST_TOUCHES = 880, ST_UNION = 881, ST_WITHIN = 882, ST_X = 883, ST_Y = 884, 
    SUBDATE = 885, SUBSTRING_INDEX = 886, SUBTIME = 887, SYSTEM_USER = 888, 
    TAN = 889, TIMEDIFF = 890, TIMESTAMPADD = 891, TIMESTAMPDIFF = 892, 
    TIME_FORMAT = 893, TIME_TO_SEC = 894, TOUCHES = 895, TO_BASE64 = 896, 
    TO_DAYS = 897, TO_SECONDS = 898, UCASE = 899, UNCOMPRESS = 900, UNCOMPRESSED_LENGTH = 901, 
    UNHEX = 902, UNIX_TIMESTAMP = 903, UPDATEXML = 904, UPPER = 905, UUID = 906, 
    UUID_SHORT = 907, VALIDATE_PASSWORD_STRENGTH = 908, VERSION = 909, WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS = 910, 
    WEEKDAY = 911, WEEKOFYEAR = 912, WEIGHT_STRING = 913, WITHIN = 914, 
    YEARWEEK = 915, Y_FUNCTION = 916, X_FUNCTION = 917, VAR_ASSIGN = 918, 
    PLUS_ASSIGN = 919, MINUS_ASSIGN = 920, MULT_ASSIGN = 921, DIV_ASSIGN = 922, 
    MOD_ASSIGN = 923, AND_ASSIGN = 924, XOR_ASSIGN = 925, OR_ASSIGN = 926, 
    STAR = 927, DIVIDE = 928, MODULE = 929, PLUS = 930, MINUS = 931, DIV = 932, 
    MOD = 933, EQUAL_SYMBOL = 934, GREATER_SYMBOL = 935, LESS_SYMBOL = 936, 
    EXCLAMATION_SYMBOL = 937, BIT_NOT_OP = 938, BIT_OR_OP = 939, BIT_AND_OP = 940, 
    BIT_XOR_OP = 941, DOT = 942, LR_BRACKET = 943, RR_BRACKET = 944, COMMA = 945, 
    SEMI = 946, AT_SIGN = 947, ZERO_DECIMAL = 948, ONE_DECIMAL = 949, TWO_DECIMAL = 950, 
    SINGLE_QUOTE_SYMB = 951, DOUBLE_QUOTE_SYMB = 952, REVERSE_QUOTE_SYMB = 953, 
    COLON_SYMB = 954, CHARSET_REVERSE_QOUTE_STRING = 955, FILESIZE_LITERAL = 956, 
    START_NATIONAL_STRING_LITERAL = 957, STRING_LITERAL = 958, DECIMAL_LITERAL = 959, 
    HEXADECIMAL_LITERAL = 960, REAL_LITERAL = 961, NULL_SPEC_LITERAL = 962, 
    BIT_STRING = 963, STRING_CHARSET_NAME = 964, DOT_ID = 965, ID = 966, 
    REVERSE_QUOTE_ID = 967, STRING_USER_NAME = 968, LOCAL_ID = 969, GLOBAL_ID = 970, 
    ERROR_RECONGNIGION = 971
  };

  enum {
    RuleRoot = 0, RuleSql_statements = 1, RuleSql_statement = 2, RuleEmpty_statement = 3, 
    RuleDdl_statement = 4, RuleDml_statement = 5, RuleTransaction_statement = 6, 
    RuleReplication_statement = 7, RulePrepared_statement = 8, RuleCompound_statement = 9, 
    RuleAdministration_statement = 10, RuleUtility_statement = 11, RuleCreate_database = 12, 
    RuleCreate_event = 13, RuleCreate_index = 14, RuleCreate_logfile_group = 15, 
    RuleCreate_procedure = 16, RuleCreate_function = 17, RuleCreate_server = 18, 
    RuleCreate_table = 19, RuleCreate_tablespace_innodb = 20, RuleCreate_tablespace_ndb = 21, 
    RuleCreate_trigger = 22, RuleCreate_view = 23, RuleCreate_database_option = 24, 
    RuleOwner_statement = 25, RuleSchedule_expression = 26, RuleTimestamp_value = 27, 
    RuleInterval_expr = 28, RuleInterval_type = 29, RuleIndex_type = 30, 
    RuleIndex_option = 31, RuleProc_param = 32, RuleFunc_param = 33, RuleRoutine_characteristic = 34, 
    RuleServer_option = 35, RuleColumn_def_table_constraints = 36, RuleColumn_def_table_constraint = 37, 
    RuleColumn_definition = 38, RuleSeparate_column_constraint = 39, RuleTable_constraint = 40, 
    RuleReference_definition = 41, RuleOn_delete_action = 42, RuleOn_update_action = 43, 
    RuleReference_action_control_type = 44, RuleIndex_column_definition = 45, 
    RuleTable_option = 46, RulePartition_options = 47, RulePartition_function_definition = 48, 
    RuleLinear_partition_func_def = 49, RulePartition_def = 50, RuleSubpartition_def = 51, 
    RuleAlter_database = 52, RuleAlter_event = 53, RuleAlter_function = 54, 
    RuleAlter_instance = 55, RuleAlter_logfile_group = 56, RuleAlter_procedure = 57, 
    RuleAlter_server = 58, RuleAlter_table = 59, RuleAlter_tablespace = 60, 
    RuleAlter_view = 61, RuleAlter_table_spec = 62, RuleDrop_database = 63, 
    RuleDrop_event = 64, RuleDrop_index = 65, RuleDrop_logfile_group = 66, 
    RuleDrop_procedure = 67, RuleDrop_function = 68, RuleDrop_server = 69, 
    RuleDrop_table = 70, RuleDrop_tablespace = 71, RuleDrop_trigger = 72, 
    RuleDrop_view = 73, RuleRename_table = 74, RuleTruncate_table = 75, 
    RuleCall_statement = 76, RuleDelete_statement = 77, RuleDo_statement = 78, 
    RuleHandler_statement = 79, RuleInsert_statement = 80, RuleLoad_data_statement = 81, 
    RuleLoad_xml_statement = 82, RuleReplace_statement = 83, RuleSelect_statement = 84, 
    RuleUpdate_statement = 85, RuleInsert_statement_value = 86, RuleUpdate_elem = 87, 
    RuleCol_or_uservar = 88, RuleSingle_delete_statement = 89, RuleMultiple_delete_statement = 90, 
    RuleHandler_open_statement = 91, RuleHandler_read_index_statement = 92, 
    RuleHandler_read_statement = 93, RuleHandler_close_statement = 94, RuleSingle_update_statement = 95, 
    RuleMultiple_update_statement = 96, RuleOrder_by_clause = 97, RuleOrder_by_expression = 98, 
    RuleTable_sources = 99, RuleTable_source = 100, RuleTable_source_item = 101, 
    RuleIndex_hint = 102, RuleJoin_part = 103, RuleSubquery = 104, RuleQuery_expression = 105, 
    RuleQuery_expression_nointo = 106, RuleQuery_specification = 107, RuleQuery_specification_nointo = 108, 
    RuleUnion_parenth = 109, RuleUnion_statement = 110, RuleSelect_spec = 111, 
    RuleSelect_list = 112, RuleSelect_list_elem = 113, RuleSelect_into_expression = 114, 
    RuleFrom_clause = 115, RuleGroup_by_item = 116, RuleLimit_clause = 117, 
    RuleStart_transaction = 118, RuleBegin_work = 119, RuleCommit_work = 120, 
    RuleRollback_work = 121, RuleSavepoint_statement = 122, RuleRollback_statement = 123, 
    RuleRelease_statement = 124, RuleLock_tables = 125, RuleUnlock_tables = 126, 
    RuleSet_autocommit_statement = 127, RuleSet_transaction_statement = 128, 
    RuleTransact_option = 129, RuleLock_table_element = 130, RuleTrans_characteristic = 131, 
    RuleTransaction_level = 132, RuleChange_master = 133, RuleChange_repl_filter = 134, 
    RulePurge_binary_logs = 135, RuleReset_master = 136, RuleReset_slave = 137, 
    RuleStart_slave = 138, RuleStop_slave = 139, RuleStart_group_repl = 140, 
    RuleStop_group_repl = 141, RuleMaster_option = 142, RuleString_master_option = 143, 
    RuleDecimal_master_option = 144, RuleBool_master_option = 145, RuleChannel_option = 146, 
    RuleRepl_filter = 147, RuleThread_type = 148, RuleUntil_option = 149, 
    RuleStart_slave_connection_option = 150, RuleGtid_set = 151, RuleXa_start_transaction = 152, 
    RuleXa_end_transaction = 153, RuleXa_prepare = 154, RuleXa_commit_work = 155, 
    RuleXa_rollback_work = 156, RuleXa_recover_work = 157, RulePrepare_statement = 158, 
    RuleExecute_statement = 159, RuleDeallocate_prepare = 160, RuleRoutine_body = 161, 
    RuleBlock_statement = 162, RuleCase_statement = 163, RuleIf_statement = 164, 
    RuleIterate_statement = 165, RuleLeave_statement = 166, RuleLoop_statement = 167, 
    RuleRepeat_statement = 168, RuleReturn_statement = 169, RuleWhile_statement = 170, 
    RuleCursor_statement = 171, RuleDeclare_variable = 172, RuleDeclare_condition = 173, 
    RuleDeclare_cursor = 174, RuleDeclare_handler = 175, RuleHandler_condition_value = 176, 
    RuleProcedure_sql_statement = 177, RuleAlter_user = 178, RuleCreate_user = 179, 
    RuleDrop_user = 180, RuleGrant_statement = 181, RuleGrant_proxy = 182, 
    RuleRename_user = 183, RuleRevoke_statement = 184, RuleRevoke_proxy = 185, 
    RuleSet_password_statement = 186, RuleUser_password_option = 187, RuleUser_auth_option = 188, 
    RuleTls_option = 189, RuleUser_resource_option = 190, RuleUser_lock_option = 191, 
    RulePrivelege_clause = 192, RulePrivilege = 193, RulePrivilege_level = 194, 
    RuleSet_password_option = 195, RuleAnalyze_table = 196, RuleCheck_table = 197, 
    RuleChecksum_table = 198, RuleOptimize_table = 199, RuleRepair_table = 200, 
    RuleCheck_table_option = 201, RuleCreate_udfunction = 202, RuleInstall_plugin = 203, 
    RuleUninstall_plugin = 204, RuleSet_statement = 205, RuleShow_statement = 206, 
    RuleVariable_clause = 207, RuleShow_filter = 208, RuleShow_profile_type = 209, 
    RuleBinlog_statement = 210, RuleCache_index_statement = 211, RuleFlush_statement = 212, 
    RuleKill_statement = 213, RuleLoad_index_into_cache = 214, RuleReset_statement = 215, 
    RuleShutdown_statement = 216, RuleTbl_index_list = 217, RuleFlush_option = 218, 
    RuleLoad_tbl_index_list = 219, RuleSimple_describe_statement = 220, 
    RuleFull_describe_statement = 221, RuleHelp_statement = 222, RuleUse_statement = 223, 
    RuleDescribe_object_clause = 224, RuleTable_name = 225, RuleFull_id = 226, 
    RuleFull_column_name = 227, RuleIndex_col_name = 228, RuleUser_name = 229, 
    RuleMysql_variable = 230, RuleCharset_name = 231, RuleCollation_name = 232, 
    RuleEngine_name = 233, RuleUuid_set = 234, RuleXid = 235, RuleXid_string_id = 236, 
    RuleAuth_plugin = 237, RuleId_ = 238, RuleSimple_id = 239, RuleDot_ext_id = 240, 
    RuleDecimal_literal = 241, RuleFilesize_literal = 242, RuleString_literal = 243, 
    RuleBoolean_literal = 244, RuleHexadecimal_literal = 245, RuleNull_notnull = 246, 
    RuleConstant = 247, RuleData_type = 248, RuleData_type_to_convert = 249, 
    RuleSpatial_data_type = 250, RuleLength_one_dimension = 251, RuleLength_two_dimension = 252, 
    RuleLength_two_optional_dimension = 253, RuleId_list = 254, RuleTable_list = 255, 
    RuleTable_pair_list = 256, RuleIndex_colname_list = 257, RuleExpression_list = 258, 
    RuleConstant_list = 259, RuleSimple_string_list = 260, RuleUser_var_list = 261, 
    RuleDefault_value = 262, RuleIf_exists = 263, RuleIf_not_exists = 264, 
    RuleFunction_call = 265, RuleSpecific_function_call = 266, RuleLevels_in_weight_string = 267, 
    RuleAggregate_windowed_function = 268, RuleScalar_function_name = 269, 
    RuleFunction_args = 270, RuleFunction_arg = 271, RuleExpression = 272, 
    RulePredicate = 273, RuleExpression_atom = 274, RuleUnary_operator = 275, 
    RuleComparison_operator = 276, RuleLogical_operator = 277, RuleBit_operator = 278, 
    RuleMath_operator = 279, RuleCharset_name_base = 280, RuleTransaction_level_base = 281, 
    RulePrivileges_base = 282, RuleInterval_type_base = 283, RuleData_type_base = 284, 
    RuleKeywords_can_be_id = 285, RuleFunction_name_base = 286
  };

  MySQLParser(antlr4::TokenStream *input);
  ~MySQLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RootContext;
  class Sql_statementsContext;
  class Sql_statementContext;
  class Empty_statementContext;
  class Ddl_statementContext;
  class Dml_statementContext;
  class Transaction_statementContext;
  class Replication_statementContext;
  class Prepared_statementContext;
  class Compound_statementContext;
  class Administration_statementContext;
  class Utility_statementContext;
  class Create_databaseContext;
  class Create_eventContext;
  class Create_indexContext;
  class Create_logfile_groupContext;
  class Create_procedureContext;
  class Create_functionContext;
  class Create_serverContext;
  class Create_tableContext;
  class Create_tablespace_innodbContext;
  class Create_tablespace_ndbContext;
  class Create_triggerContext;
  class Create_viewContext;
  class Create_database_optionContext;
  class Owner_statementContext;
  class Schedule_expressionContext;
  class Timestamp_valueContext;
  class Interval_exprContext;
  class Interval_typeContext;
  class Index_typeContext;
  class Index_optionContext;
  class Proc_paramContext;
  class Func_paramContext;
  class Routine_characteristicContext;
  class Server_optionContext;
  class Column_def_table_constraintsContext;
  class Column_def_table_constraintContext;
  class Column_definitionContext;
  class Separate_column_constraintContext;
  class Table_constraintContext;
  class Reference_definitionContext;
  class On_delete_actionContext;
  class On_update_actionContext;
  class Reference_action_control_typeContext;
  class Index_column_definitionContext;
  class Table_optionContext;
  class Partition_optionsContext;
  class Partition_function_definitionContext;
  class Linear_partition_func_defContext;
  class Partition_defContext;
  class Subpartition_defContext;
  class Alter_databaseContext;
  class Alter_eventContext;
  class Alter_functionContext;
  class Alter_instanceContext;
  class Alter_logfile_groupContext;
  class Alter_procedureContext;
  class Alter_serverContext;
  class Alter_tableContext;
  class Alter_tablespaceContext;
  class Alter_viewContext;
  class Alter_table_specContext;
  class Drop_databaseContext;
  class Drop_eventContext;
  class Drop_indexContext;
  class Drop_logfile_groupContext;
  class Drop_procedureContext;
  class Drop_functionContext;
  class Drop_serverContext;
  class Drop_tableContext;
  class Drop_tablespaceContext;
  class Drop_triggerContext;
  class Drop_viewContext;
  class Rename_tableContext;
  class Truncate_tableContext;
  class Call_statementContext;
  class Delete_statementContext;
  class Do_statementContext;
  class Handler_statementContext;
  class Insert_statementContext;
  class Load_data_statementContext;
  class Load_xml_statementContext;
  class Replace_statementContext;
  class Select_statementContext;
  class Update_statementContext;
  class Insert_statement_valueContext;
  class Update_elemContext;
  class Col_or_uservarContext;
  class Single_delete_statementContext;
  class Multiple_delete_statementContext;
  class Handler_open_statementContext;
  class Handler_read_index_statementContext;
  class Handler_read_statementContext;
  class Handler_close_statementContext;
  class Single_update_statementContext;
  class Multiple_update_statementContext;
  class Order_by_clauseContext;
  class Order_by_expressionContext;
  class Table_sourcesContext;
  class Table_sourceContext;
  class Table_source_itemContext;
  class Index_hintContext;
  class Join_partContext;
  class SubqueryContext;
  class Query_expressionContext;
  class Query_expression_nointoContext;
  class Query_specificationContext;
  class Query_specification_nointoContext;
  class Union_parenthContext;
  class Union_statementContext;
  class Select_specContext;
  class Select_listContext;
  class Select_list_elemContext;
  class Select_into_expressionContext;
  class From_clauseContext;
  class Group_by_itemContext;
  class Limit_clauseContext;
  class Start_transactionContext;
  class Begin_workContext;
  class Commit_workContext;
  class Rollback_workContext;
  class Savepoint_statementContext;
  class Rollback_statementContext;
  class Release_statementContext;
  class Lock_tablesContext;
  class Unlock_tablesContext;
  class Set_autocommit_statementContext;
  class Set_transaction_statementContext;
  class Transact_optionContext;
  class Lock_table_elementContext;
  class Trans_characteristicContext;
  class Transaction_levelContext;
  class Change_masterContext;
  class Change_repl_filterContext;
  class Purge_binary_logsContext;
  class Reset_masterContext;
  class Reset_slaveContext;
  class Start_slaveContext;
  class Stop_slaveContext;
  class Start_group_replContext;
  class Stop_group_replContext;
  class Master_optionContext;
  class String_master_optionContext;
  class Decimal_master_optionContext;
  class Bool_master_optionContext;
  class Channel_optionContext;
  class Repl_filterContext;
  class Thread_typeContext;
  class Until_optionContext;
  class Start_slave_connection_optionContext;
  class Gtid_setContext;
  class Xa_start_transactionContext;
  class Xa_end_transactionContext;
  class Xa_prepareContext;
  class Xa_commit_workContext;
  class Xa_rollback_workContext;
  class Xa_recover_workContext;
  class Prepare_statementContext;
  class Execute_statementContext;
  class Deallocate_prepareContext;
  class Routine_bodyContext;
  class Block_statementContext;
  class Case_statementContext;
  class If_statementContext;
  class Iterate_statementContext;
  class Leave_statementContext;
  class Loop_statementContext;
  class Repeat_statementContext;
  class Return_statementContext;
  class While_statementContext;
  class Cursor_statementContext;
  class Declare_variableContext;
  class Declare_conditionContext;
  class Declare_cursorContext;
  class Declare_handlerContext;
  class Handler_condition_valueContext;
  class Procedure_sql_statementContext;
  class Alter_userContext;
  class Create_userContext;
  class Drop_userContext;
  class Grant_statementContext;
  class Grant_proxyContext;
  class Rename_userContext;
  class Revoke_statementContext;
  class Revoke_proxyContext;
  class Set_password_statementContext;
  class User_password_optionContext;
  class User_auth_optionContext;
  class Tls_optionContext;
  class User_resource_optionContext;
  class User_lock_optionContext;
  class Privelege_clauseContext;
  class PrivilegeContext;
  class Privilege_levelContext;
  class Set_password_optionContext;
  class Analyze_tableContext;
  class Check_tableContext;
  class Checksum_tableContext;
  class Optimize_tableContext;
  class Repair_tableContext;
  class Check_table_optionContext;
  class Create_udfunctionContext;
  class Install_pluginContext;
  class Uninstall_pluginContext;
  class Set_statementContext;
  class Show_statementContext;
  class Variable_clauseContext;
  class Show_filterContext;
  class Show_profile_typeContext;
  class Binlog_statementContext;
  class Cache_index_statementContext;
  class Flush_statementContext;
  class Kill_statementContext;
  class Load_index_into_cacheContext;
  class Reset_statementContext;
  class Shutdown_statementContext;
  class Tbl_index_listContext;
  class Flush_optionContext;
  class Load_tbl_index_listContext;
  class Simple_describe_statementContext;
  class Full_describe_statementContext;
  class Help_statementContext;
  class Use_statementContext;
  class Describe_object_clauseContext;
  class Table_nameContext;
  class Full_idContext;
  class Full_column_nameContext;
  class Index_col_nameContext;
  class User_nameContext;
  class Mysql_variableContext;
  class Charset_nameContext;
  class Collation_nameContext;
  class Engine_nameContext;
  class Uuid_setContext;
  class XidContext;
  class Xid_string_idContext;
  class Auth_pluginContext;
  class Id_Context;
  class Simple_idContext;
  class Dot_ext_idContext;
  class Decimal_literalContext;
  class Filesize_literalContext;
  class String_literalContext;
  class Boolean_literalContext;
  class Hexadecimal_literalContext;
  class Null_notnullContext;
  class ConstantContext;
  class Data_typeContext;
  class Data_type_to_convertContext;
  class Spatial_data_typeContext;
  class Length_one_dimensionContext;
  class Length_two_dimensionContext;
  class Length_two_optional_dimensionContext;
  class Id_listContext;
  class Table_listContext;
  class Table_pair_listContext;
  class Index_colname_listContext;
  class Expression_listContext;
  class Constant_listContext;
  class Simple_string_listContext;
  class User_var_listContext;
  class Default_valueContext;
  class If_existsContext;
  class If_not_existsContext;
  class Function_callContext;
  class Specific_function_callContext;
  class Levels_in_weight_stringContext;
  class Aggregate_windowed_functionContext;
  class Scalar_function_nameContext;
  class Function_argsContext;
  class Function_argContext;
  class ExpressionContext;
  class PredicateContext;
  class Expression_atomContext;
  class Unary_operatorContext;
  class Comparison_operatorContext;
  class Logical_operatorContext;
  class Bit_operatorContext;
  class Math_operatorContext;
  class Charset_name_baseContext;
  class Transaction_level_baseContext;
  class Privileges_baseContext;
  class Interval_type_baseContext;
  class Data_type_baseContext;
  class Keywords_can_be_idContext;
  class Function_name_baseContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Sql_statementsContext *sql_statements();
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class  Sql_statementsContext : public antlr4::ParserRuleContext {
  public:
    Sql_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_statementContext *> sql_statement();
    Sql_statementContext* sql_statement(size_t i);
    std::vector<Empty_statementContext *> empty_statement();
    Empty_statementContext* empty_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_statementsContext* sql_statements();

  class  Sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ddl_statementContext *ddl_statement();
    Dml_statementContext *dml_statement();
    Transaction_statementContext *transaction_statement();
    Replication_statementContext *replication_statement();
    Prepared_statementContext *prepared_statement();
    Administration_statementContext *administration_statement();
    Utility_statementContext *utility_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_statementContext* sql_statement();

  class  Empty_statementContext : public antlr4::ParserRuleContext {
  public:
    Empty_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_statementContext* empty_statement();

  class  Ddl_statementContext : public antlr4::ParserRuleContext {
  public:
    Ddl_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_databaseContext *create_database();
    Create_eventContext *create_event();
    Create_indexContext *create_index();
    Create_logfile_groupContext *create_logfile_group();
    Create_procedureContext *create_procedure();
    Create_functionContext *create_function();
    Create_serverContext *create_server();
    Create_tableContext *create_table();
    Create_tablespace_innodbContext *create_tablespace_innodb();
    Create_tablespace_ndbContext *create_tablespace_ndb();
    Create_triggerContext *create_trigger();
    Create_viewContext *create_view();
    Alter_databaseContext *alter_database();
    Alter_eventContext *alter_event();
    Alter_functionContext *alter_function();
    Alter_instanceContext *alter_instance();
    Alter_logfile_groupContext *alter_logfile_group();
    Alter_procedureContext *alter_procedure();
    Alter_serverContext *alter_server();
    Alter_tableContext *alter_table();
    Alter_tablespaceContext *alter_tablespace();
    Alter_viewContext *alter_view();
    Drop_databaseContext *drop_database();
    Drop_eventContext *drop_event();
    Drop_indexContext *drop_index();
    Drop_logfile_groupContext *drop_logfile_group();
    Drop_procedureContext *drop_procedure();
    Drop_functionContext *drop_function();
    Drop_serverContext *drop_server();
    Drop_tableContext *drop_table();
    Drop_tablespaceContext *drop_tablespace();
    Drop_triggerContext *drop_trigger();
    Drop_viewContext *drop_view();
    Rename_tableContext *rename_table();
    Truncate_tableContext *truncate_table();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ddl_statementContext* ddl_statement();

  class  Dml_statementContext : public antlr4::ParserRuleContext {
  public:
    Dml_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();
    Insert_statementContext *insert_statement();
    Update_statementContext *update_statement();
    Delete_statementContext *delete_statement();
    Replace_statementContext *replace_statement();
    Call_statementContext *call_statement();
    Load_data_statementContext *load_data_statement();
    Load_xml_statementContext *load_xml_statement();
    Do_statementContext *do_statement();
    Handler_statementContext *handler_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dml_statementContext* dml_statement();

  class  Transaction_statementContext : public antlr4::ParserRuleContext {
  public:
    Transaction_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Start_transactionContext *start_transaction();
    Begin_workContext *begin_work();
    Commit_workContext *commit_work();
    Rollback_workContext *rollback_work();
    Savepoint_statementContext *savepoint_statement();
    Rollback_statementContext *rollback_statement();
    Release_statementContext *release_statement();
    Lock_tablesContext *lock_tables();
    Unlock_tablesContext *unlock_tables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_statementContext* transaction_statement();

  class  Replication_statementContext : public antlr4::ParserRuleContext {
  public:
    Replication_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Change_masterContext *change_master();
    Change_repl_filterContext *change_repl_filter();
    Purge_binary_logsContext *purge_binary_logs();
    Reset_masterContext *reset_master();
    Reset_slaveContext *reset_slave();
    Start_slaveContext *start_slave();
    Stop_slaveContext *stop_slave();
    Start_group_replContext *start_group_repl();
    Stop_group_replContext *stop_group_repl();
    Xa_start_transactionContext *xa_start_transaction();
    Xa_end_transactionContext *xa_end_transaction();
    Xa_prepareContext *xa_prepare();
    Xa_commit_workContext *xa_commit_work();
    Xa_rollback_workContext *xa_rollback_work();
    Xa_recover_workContext *xa_recover_work();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Replication_statementContext* replication_statement();

  class  Prepared_statementContext : public antlr4::ParserRuleContext {
  public:
    Prepared_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prepare_statementContext *prepare_statement();
    Execute_statementContext *execute_statement();
    Deallocate_prepareContext *deallocate_prepare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prepared_statementContext* prepared_statement();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_statementContext *block_statement();
    Case_statementContext *case_statement();
    If_statementContext *if_statement();
    Leave_statementContext *leave_statement();
    Loop_statementContext *loop_statement();
    Repeat_statementContext *repeat_statement();
    While_statementContext *while_statement();
    Iterate_statementContext *iterate_statement();
    Return_statementContext *return_statement();
    Cursor_statementContext *cursor_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Administration_statementContext : public antlr4::ParserRuleContext {
  public:
    Administration_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_userContext *alter_user();
    Create_userContext *create_user();
    Drop_userContext *drop_user();
    Grant_statementContext *grant_statement();
    Grant_proxyContext *grant_proxy();
    Rename_userContext *rename_user();
    Revoke_statementContext *revoke_statement();
    Revoke_proxyContext *revoke_proxy();
    Analyze_tableContext *analyze_table();
    Check_tableContext *check_table();
    Checksum_tableContext *checksum_table();
    Optimize_tableContext *optimize_table();
    Repair_tableContext *repair_table();
    Create_udfunctionContext *create_udfunction();
    Install_pluginContext *install_plugin();
    Uninstall_pluginContext *uninstall_plugin();
    Set_statementContext *set_statement();
    Show_statementContext *show_statement();
    Binlog_statementContext *binlog_statement();
    Cache_index_statementContext *cache_index_statement();
    Flush_statementContext *flush_statement();
    Kill_statementContext *kill_statement();
    Load_index_into_cacheContext *load_index_into_cache();
    Reset_statementContext *reset_statement();
    Shutdown_statementContext *shutdown_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Administration_statementContext* administration_statement();

  class  Utility_statementContext : public antlr4::ParserRuleContext {
  public:
    Utility_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_describe_statementContext *simple_describe_statement();
    Full_describe_statementContext *full_describe_statement();
    Help_statementContext *help_statement();
    Use_statementContext *use_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Utility_statementContext* utility_statement();

  class  Create_databaseContext : public antlr4::ParserRuleContext {
  public:
    Create_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    If_not_existsContext *if_not_exists();
    std::vector<Create_database_optionContext *> create_database_option();
    Create_database_optionContext* create_database_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_databaseContext* create_database();

  class  Create_eventContext : public antlr4::ParserRuleContext {
  public:
    Create_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    Full_idContext *full_id();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    Schedule_expressionContext *schedule_expression();
    antlr4::tree::TerminalNode *DO();
    Routine_bodyContext *routine_body();
    Owner_statementContext *owner_statement();
    If_not_existsContext *if_not_exists();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_eventContext* create_event();

  class  Create_indexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *index_category = nullptr;;
    antlr4::Token *alg_type = nullptr;;
    antlr4::Token *lock_type = nullptr;;
    Create_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    Index_colname_listContext *index_colname_list();
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_indexContext* create_index();

  class  Create_logfile_groupContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *undo_file = nullptr;;
    MySQLParser::Filesize_literalContext *init_size = nullptr;;
    MySQLParser::Filesize_literalContext *undo_size = nullptr;;
    MySQLParser::Filesize_literalContext *redo_size = nullptr;;
    antlr4::Token *comment = nullptr;;
    Create_logfile_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<Filesize_literalContext *> filesize_literal();
    Filesize_literalContext* filesize_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_logfile_groupContext* create_logfile_group();

  class  Create_procedureContext : public antlr4::ParserRuleContext {
  public:
    Create_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    Full_idContext *full_id();
    Routine_bodyContext *routine_body();
    Owner_statementContext *owner_statement();
    std::vector<Proc_paramContext *> proc_param();
    Proc_paramContext* proc_param(size_t i);
    std::vector<Routine_characteristicContext *> routine_characteristic();
    Routine_characteristicContext* routine_characteristic(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedureContext* create_procedure();

  class  Create_functionContext : public antlr4::ParserRuleContext {
  public:
    Create_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Full_idContext *full_id();
    antlr4::tree::TerminalNode *RETURNS();
    Data_typeContext *data_type();
    Routine_bodyContext *routine_body();
    Owner_statementContext *owner_statement();
    std::vector<Func_paramContext *> func_param();
    Func_paramContext* func_param(size_t i);
    std::vector<Routine_characteristicContext *> routine_characteristic();
    Routine_characteristicContext* routine_characteristic(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_functionContext* create_function();

  class  Create_serverContext : public antlr4::ParserRuleContext {
  public:
    Create_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<Server_optionContext *> server_option();
    Server_optionContext* server_option(size_t i);
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_serverContext* create_server();

  class  Create_tableContext : public antlr4::ParserRuleContext {
  public:
    Create_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Create_tableContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Create_tableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColCreateTableContext : public Create_tableContext {
  public:
    ColCreateTableContext(Create_tableContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    Column_def_table_constraintsContext *column_def_table_constraints();
    antlr4::tree::TerminalNode *TEMPORARY();
    If_not_existsContext *if_not_exists();
    std::vector<Table_optionContext *> table_option();
    Table_optionContext* table_option(size_t i);
    Partition_optionsContext *partition_options();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CopyCreateTableContext : public Create_tableContext {
  public:
    CopyCreateTableContext(Create_tableContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *TEMPORARY();
    If_not_existsContext *if_not_exists();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QueryCreateTableContext : public Create_tableContext {
  public:
    QueryCreateTableContext(Create_tableContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *TEMPORARY();
    If_not_existsContext *if_not_exists();
    Column_def_table_constraintsContext *column_def_table_constraints();
    std::vector<Table_optionContext *> table_option();
    Table_optionContext* table_option(size_t i);
    Partition_optionsContext *partition_options();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *REPLACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Create_tableContext* create_table();

  class  Create_tablespace_innodbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;;
    MySQLParser::Filesize_literalContext *fb_size = nullptr;;
    Create_tablespace_innodbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    Filesize_literalContext *filesize_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tablespace_innodbContext* create_tablespace_innodb();

  class  Create_tablespace_ndbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;;
    MySQLParser::Filesize_literalContext *extent_size = nullptr;;
    MySQLParser::Filesize_literalContext *initial_size = nullptr;;
    MySQLParser::Filesize_literalContext *autoextend_size = nullptr;;
    MySQLParser::Filesize_literalContext *max_size = nullptr;;
    antlr4::Token *comment = nullptr;;
    Create_tablespace_ndbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<Filesize_literalContext *> filesize_literal();
    Filesize_literalContext* filesize_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tablespace_ndbContext* create_tablespace_ndb();

  class  Create_triggerContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Full_idContext *this_trigger = nullptr;;
    antlr4::Token *trigger_time = nullptr;;
    antlr4::Token *trigger_event = nullptr;;
    MySQLParser::Full_idContext *other_trigger = nullptr;;
    Create_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ROW();
    Routine_bodyContext *routine_body();
    std::vector<Full_idContext *> full_id();
    Full_idContext* full_id(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    Owner_statementContext *owner_statement();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *PRECEDES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_triggerContext* create_trigger();

  class  Create_viewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *alg_type = nullptr;;
    antlr4::Token *sec_context = nullptr;;
    antlr4::Token *check_option = nullptr;;
    Create_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    Full_idContext *full_id();
    antlr4::tree::TerminalNode *AS();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *ALGORITHM();
    Owner_statementContext *owner_statement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_viewContext* create_view();

  class  Create_database_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_database_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_optionContext* create_database_option();

  class  Owner_statementContext : public antlr4::ParserRuleContext {
  public:
    Owner_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *CURRENT_USER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Owner_statementContext* owner_statement();

  class  Schedule_expressionContext : public antlr4::ParserRuleContext {
  public:
    Schedule_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Schedule_expressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Schedule_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreciseScheduleContext : public Schedule_expressionContext {
  public:
    PreciseScheduleContext(Schedule_expressionContext *ctx);

    antlr4::tree::TerminalNode *AT();
    Timestamp_valueContext *timestamp_value();
    std::vector<Interval_exprContext *> interval_expr();
    Interval_exprContext* interval_expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalScheduleContext : public Schedule_expressionContext {
  public:
    IntervalScheduleContext(Schedule_expressionContext *ctx);

    MySQLParser::Timestamp_valueContext *startts = nullptr;
    MySQLParser::Interval_exprContext *interval_exprContext = nullptr;
    std::vector<Interval_exprContext *> start_intervals;
    MySQLParser::Timestamp_valueContext *endts = nullptr;
    std::vector<Interval_exprContext *> end_intervals;
    antlr4::tree::TerminalNode *EVERY();
    Interval_typeContext *interval_type();
    Decimal_literalContext *decimal_literal();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *ENDS();
    std::vector<Timestamp_valueContext *> timestamp_value();
    Timestamp_valueContext* timestamp_value(size_t i);
    std::vector<Interval_exprContext *> interval_expr();
    Interval_exprContext* interval_expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Schedule_expressionContext* schedule_expression();

  class  Timestamp_valueContext : public antlr4::ParserRuleContext {
  public:
    Timestamp_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    String_literalContext *string_literal();
    Decimal_literalContext *decimal_literal();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timestamp_valueContext* timestamp_value();

  class  Interval_exprContext : public antlr4::ParserRuleContext {
  public:
    Interval_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    Interval_typeContext *interval_type();
    Decimal_literalContext *decimal_literal();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_exprContext* interval_expr();

  class  Interval_typeContext : public antlr4::ParserRuleContext {
  public:
    Interval_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interval_type_baseContext *interval_type_base();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEAR_MONTH();
    antlr4::tree::TerminalNode *DAY_HOUR();
    antlr4::tree::TerminalNode *DAY_MINUTE();
    antlr4::tree::TerminalNode *DAY_SECOND();
    antlr4::tree::TerminalNode *HOUR_MINUTE();
    antlr4::tree::TerminalNode *HOUR_SECOND();
    antlr4::tree::TerminalNode *MINUTE_SECOND();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND();
    antlr4::tree::TerminalNode *DAY_MICROSECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_typeContext* interval_type();

  class  Index_typeContext : public antlr4::ParserRuleContext {
  public:
    Index_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *HASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_typeContext* index_type();

  class  Index_optionContext : public antlr4::ParserRuleContext {
  public:
    Index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    Filesize_literalContext *filesize_literal();
    Index_typeContext *index_type();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PARSER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_optionContext* index_option();

  class  Proc_paramContext : public antlr4::ParserRuleContext {
  public:
    Proc_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Proc_paramContext* proc_param();

  class  Func_paramContext : public antlr4::ParserRuleContext {
  public:
    Func_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Data_typeContext *data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_paramContext* func_param();

  class  Routine_characteristicContext : public antlr4::ParserRuleContext {
  public:
    Routine_characteristicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Routine_characteristicContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Routine_characteristicContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RcSqllangContext : public Routine_characteristicContext {
  public:
    RcSqllangContext(Routine_characteristicContext *ctx);

    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RcSqldataContext : public Routine_characteristicContext {
  public:
    RcSqldataContext(Routine_characteristicContext *ctx);

    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RcCommentContext : public Routine_characteristicContext {
  public:
    RcCommentContext(Routine_characteristicContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RcDetermContext : public Routine_characteristicContext {
  public:
    RcDetermContext(Routine_characteristicContext *ctx);

    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RcSecurestmtContext : public Routine_characteristicContext {
  public:
    RcSecurestmtContext(Routine_characteristicContext *ctx);

    antlr4::Token *sec_context = nullptr;
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Routine_characteristicContext* routine_characteristic();

  class  Server_optionContext : public antlr4::ParserRuleContext {
  public:
    Server_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PORT();
    Decimal_literalContext *decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_optionContext* server_option();

  class  Column_def_table_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Column_def_table_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_def_table_constraintContext *> column_def_table_constraint();
    Column_def_table_constraintContext* column_def_table_constraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_def_table_constraintsContext* column_def_table_constraints();

  class  Column_def_table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Column_def_table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Column_def_table_constraintContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Column_def_table_constraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstraintDefinitionContext : public Column_def_table_constraintContext {
  public:
    ConstraintDefinitionContext(Column_def_table_constraintContext *ctx);

    Table_constraintContext *table_constraint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnDefinitionContext : public Column_def_table_constraintContext {
  public:
    ColumnDefinitionContext(Column_def_table_constraintContext *ctx);

    Id_Context *id_();
    Column_definitionContext *column_definition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndexDefinitionContext : public Column_def_table_constraintContext {
  public:
    IndexDefinitionContext(Column_def_table_constraintContext *ctx);

    Index_column_definitionContext *index_column_definition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Column_def_table_constraintContext* column_def_table_constraint();

  class  Column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    std::vector<Separate_column_constraintContext *> separate_column_constraint();
    Separate_column_constraintContext* separate_column_constraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionContext* column_definition();

  class  Separate_column_constraintContext : public antlr4::ParserRuleContext {
  public:
    Separate_column_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Separate_column_constraintContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Separate_column_constraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColConstrDfltContext : public Separate_column_constraintContext {
  public:
    ColConstrDfltContext(Separate_column_constraintContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    Default_valueContext *default_value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrPKContext : public Separate_column_constraintContext {
  public:
    ColConstrPKContext(Separate_column_constraintContext *ctx);

    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrAuIncContext : public Separate_column_constraintContext {
  public:
    ColConstrAuIncContext(Separate_column_constraintContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrCommentContext : public Separate_column_constraintContext {
  public:
    ColConstrCommentContext(Separate_column_constraintContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrNullContext : public Separate_column_constraintContext {
  public:
    ColConstrNullContext(Separate_column_constraintContext *ctx);

    Null_notnullContext *null_notnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrFormContext : public Separate_column_constraintContext {
  public:
    ColConstrFormContext(Separate_column_constraintContext *ctx);

    antlr4::Token *colformat = nullptr;
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrRefdefContext : public Separate_column_constraintContext {
  public:
    ColConstrRefdefContext(Separate_column_constraintContext *ctx);

    Reference_definitionContext *reference_definition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrStorageContext : public Separate_column_constraintContext {
  public:
    ColConstrStorageContext(Separate_column_constraintContext *ctx);

    antlr4::Token *storageval = nullptr;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColConstrUKContext : public Separate_column_constraintContext {
  public:
    ColConstrUKContext(Separate_column_constraintContext *ctx);

    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Separate_column_constraintContext* separate_column_constraint();

  class  Table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Table_constraintContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Table_constraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TblConstCheckContext : public Table_constraintContext {
  public:
    TblConstCheckContext(Table_constraintContext *ctx);

    antlr4::tree::TerminalNode *CHECK();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblConstrPKContext : public Table_constraintContext {
  public:
    TblConstrPKContext(Table_constraintContext *ctx);

    MySQLParser::Id_Context *constr_name = nullptr;
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    Id_Context *id_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblConstrUKContext : public Table_constraintContext {
  public:
    TblConstrUKContext(Table_constraintContext *ctx);

    MySQLParser::Id_Context *constr_name = nullptr;
    MySQLParser::Id_Context *index_name = nullptr;
    antlr4::tree::TerminalNode *UNIQUE();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblConstrFKContext : public Table_constraintContext {
  public:
    TblConstrFKContext(Table_constraintContext *ctx);

    MySQLParser::Id_Context *constr_name = nullptr;
    MySQLParser::Id_Context *index_name = nullptr;
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    Index_colname_listContext *index_colname_list();
    Reference_definitionContext *reference_definition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_constraintContext* table_constraint();

  class  Reference_definitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ref_match_type = nullptr;;
    Reference_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    Table_nameContext *table_name();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *MATCH();
    On_delete_actionContext *on_delete_action();
    On_update_actionContext *on_update_action();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *SIMPLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_definitionContext* reference_definition();

  class  On_delete_actionContext : public antlr4::ParserRuleContext {
  public:
    On_delete_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *DELETE();
    std::vector<Reference_action_control_typeContext *> reference_action_control_type();
    Reference_action_control_typeContext* reference_action_control_type(size_t i);
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_delete_actionContext* on_delete_action();

  class  On_update_actionContext : public antlr4::ParserRuleContext {
  public:
    On_update_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *UPDATE();
    std::vector<Reference_action_control_typeContext *> reference_action_control_type();
    Reference_action_control_typeContext* reference_action_control_type(size_t i);
    antlr4::tree::TerminalNode *DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_update_actionContext* on_update_action();

  class  Reference_action_control_typeContext : public antlr4::ParserRuleContext {
  public:
    Reference_action_control_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_action_control_typeContext* reference_action_control_type();

  class  Index_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Index_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Index_column_definitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Index_column_definitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleIndexContext : public Index_column_definitionContext {
  public:
    SimpleIndexContext(Index_column_definitionContext *ctx);

    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    Id_Context *id_();
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SpecIndexContext : public Index_column_definitionContext {
  public:
    SpecIndexContext(Index_column_definitionContext *ctx);

    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    Id_Context *id_();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Index_column_definitionContext* index_column_definition();

  class  Table_optionContext : public antlr4::ParserRuleContext {
  public:
    Table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Table_optionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Table_optionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TblOptAvgRLenContext : public Table_optionContext {
  public:
    TblOptAvgRLenContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptChkSumContext : public Table_optionContext {
  public:
    TblOptChkSumContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *CHECKSUM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptTablespaceContext : public Table_optionContext {
  public:
    TblOptTablespaceContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *TABLESPACE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptComprContext : public Table_optionContext {
  public:
    TblOptComprContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptStatPersistContext : public Table_optionContext {
  public:
    TblOptStatPersistContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptRowFormatContext : public Table_optionContext {
  public:
    TblOptRowFormatContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *COMPACT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptConnContext : public Table_optionContext {
  public:
    TblOptConnContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptStatAutoRContext : public Table_optionContext {
  public:
    TblOptStatAutoRContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptMaxRowsContext : public Table_optionContext {
  public:
    TblOptMaxRowsContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *MAX_ROWS();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptEngineContext : public Table_optionContext {
  public:
    TblOptEngineContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptIndexDirContext : public Table_optionContext {
  public:
    TblOptIndexDirContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptStatSamplPgContext : public Table_optionContext {
  public:
    TblOptStatSamplPgContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptDelKWContext : public Table_optionContext {
  public:
    TblOptDelKWContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptDataDirContext : public Table_optionContext {
  public:
    TblOptDataDirContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptCommentContext : public Table_optionContext {
  public:
    TblOptCommentContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptInsMethContext : public Table_optionContext {
  public:
    TblOptInsMethContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptMinRowsContext : public Table_optionContext {
  public:
    TblOptMinRowsContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *MIN_ROWS();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptUnionContext : public Table_optionContext {
  public:
    TblOptUnionContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *UNION();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptPasswdContext : public Table_optionContext {
  public:
    TblOptPasswdContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptAuIncContext : public Table_optionContext {
  public:
    TblOptAuIncContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptPackKContext : public Table_optionContext {
  public:
    TblOptPackKContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptEncrContext : public Table_optionContext {
  public:
    TblOptEncrContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptDefCollateContext : public Table_optionContext {
  public:
    TblOptDefCollateContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptDefCharSetContext : public Table_optionContext {
  public:
    TblOptDefCharSetContext(Table_optionContext *ctx);

    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TblOptKeyBlockSzContext : public Table_optionContext {
  public:
    TblOptKeyBlockSzContext(Table_optionContext *ctx);

    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    Filesize_literalContext *filesize_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_optionContext* table_option();

  class  Partition_optionsContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Decimal_literalContext *part_num = nullptr;;
    MySQLParser::Decimal_literalContext *subpart_num = nullptr;;
    Partition_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    Partition_function_definitionContext *partition_function_definition();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *SUBPARTITION();
    Linear_partition_func_defContext *linear_partition_func_def();
    std::vector<Partition_defContext *> partition_def();
    Partition_defContext* partition_def(size_t i);
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    antlr4::tree::TerminalNode *SUBPARTITIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_optionsContext* partition_options();

  class  Partition_function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Partition_function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Linear_partition_func_defContext *linear_partition_func_def();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *LIST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLUMNS();
    Id_listContext *id_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_function_definitionContext* partition_function_definition();

  class  Linear_partition_func_defContext : public antlr4::ParserRuleContext {
  public:
    Linear_partition_func_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *KEY();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALGORITHM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Linear_partition_func_defContext* linear_partition_func_def();

  class  Partition_defContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *comment = nullptr;;
    antlr4::Token *data_dir = nullptr;;
    antlr4::Token *index_dir = nullptr;;
    MySQLParser::Decimal_literalContext *max_row_num = nullptr;;
    MySQLParser::Decimal_literalContext *min_row_num = nullptr;;
    MySQLParser::Id_Context *tblspace_id = nullptr;;
    MySQLParser::Id_Context *nodegroup_id = nullptr;;
    Partition_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *DATA();
    std::vector<antlr4::tree::TerminalNode *> DIRECTORY();
    antlr4::tree::TerminalNode* DIRECTORY(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *NODEGROUP();
    std::vector<Subpartition_defContext *> subpartition_def();
    Subpartition_defContext* subpartition_def(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *IN();
    Constant_listContext *constant_list();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *MAXVALUE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_defContext* partition_def();

  class  Subpartition_defContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *comment = nullptr;;
    antlr4::Token *data_dir = nullptr;;
    antlr4::Token *index_dir = nullptr;;
    MySQLParser::Decimal_literalContext *max_row_num = nullptr;;
    MySQLParser::Decimal_literalContext *min_row_num = nullptr;;
    MySQLParser::Id_Context *tblspace_id = nullptr;;
    MySQLParser::Id_Context *nodegroup_id = nullptr;;
    Subpartition_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *DATA();
    std::vector<antlr4::tree::TerminalNode *> DIRECTORY();
    antlr4::tree::TerminalNode* DIRECTORY(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *NODEGROUP();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    antlr4::tree::TerminalNode *STORAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subpartition_defContext* subpartition_def();

  class  Alter_databaseContext : public antlr4::ParserRuleContext {
  public:
    Alter_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Alter_databaseContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Alter_databaseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterDbUpgradeNameContext : public Alter_databaseContext {
  public:
    AlterDbUpgradeNameContext(Alter_databaseContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterDbContext : public Alter_databaseContext {
  public:
    AlterDbContext(Alter_databaseContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    Id_Context *id_();
    std::vector<Create_database_optionContext *> create_database_option();
    Create_database_optionContext* create_database_option(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Alter_databaseContext* alter_database();

  class  Alter_eventContext : public antlr4::ParserRuleContext {
  public:
    Alter_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    std::vector<Full_idContext *> full_id();
    Full_idContext* full_id(size_t i);
    Owner_statementContext *owner_statement();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    Schedule_expressionContext *schedule_expression();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DO();
    Routine_bodyContext *routine_body();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_eventContext* alter_event();

  class  Alter_functionContext : public antlr4::ParserRuleContext {
  public:
    Alter_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    Full_idContext *full_id();
    std::vector<Routine_characteristicContext *> routine_characteristic();
    Routine_characteristicContext* routine_characteristic(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_functionContext* alter_function();

  class  Alter_instanceContext : public antlr4::ParserRuleContext {
  public:
    Alter_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_instanceContext* alter_instance();

  class  Alter_logfile_groupContext : public antlr4::ParserRuleContext {
  public:
    Alter_logfile_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    Filesize_literalContext *filesize_literal();
    antlr4::tree::TerminalNode *WAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_logfile_groupContext* alter_logfile_group();

  class  Alter_procedureContext : public antlr4::ParserRuleContext {
  public:
    Alter_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROCEDURE();
    Full_idContext *full_id();
    std::vector<Routine_characteristicContext *> routine_characteristic();
    Routine_characteristicContext* routine_characteristic(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_procedureContext* alter_procedure();

  class  Alter_serverContext : public antlr4::ParserRuleContext {
  public:
    Alter_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<Server_optionContext *> server_option();
    Server_optionContext* server_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_serverContext* alter_server();

  class  Alter_tableContext : public antlr4::ParserRuleContext {
  public:
    Alter_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    std::vector<Alter_table_specContext *> alter_table_spec();
    Alter_table_specContext* alter_table_spec(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<Partition_optionsContext *> partition_options();
    Partition_optionsContext* partition_options(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tableContext* alter_table();

  class  Alter_tablespaceContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    Filesize_literalContext *filesize_literal();
    antlr4::tree::TerminalNode *WAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespaceContext* alter_tablespace();

  class  Alter_viewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *alg_type = nullptr;;
    antlr4::Token *sec_context = nullptr;;
    antlr4::Token *check_opt = nullptr;;
    Alter_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    Full_idContext *full_id();
    antlr4::tree::TerminalNode *AS();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *ALGORITHM();
    Owner_statementContext *owner_statement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_viewContext* alter_view();

  class  Alter_table_specContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Alter_table_specContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Alter_table_specContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AltblDropPKContext : public Alter_table_specContext {
  public:
    AltblDropPKContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDisKeyContext : public Alter_table_specContext {
  public:
    AltblDisKeyContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddPKContext : public Alter_table_specContext {
  public:
    AltblAddPKContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    Id_Context *id_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDropIndexContext : public Alter_table_specContext {
  public:
    AltblDropIndexContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    Id_Context *id_();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddPartContext : public Alter_table_specContext {
  public:
    AltblAddPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PARTITION();
    Partition_defContext *partition_def();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblImportPartContext : public Alter_table_specContext {
  public:
    AltblImportPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblResortContext : public Alter_table_specContext {
  public:
    AltblResortContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    Id_listContext *id_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblUpgrPartContext : public Alter_table_specContext {
  public:
    AltblUpgrPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *PARTITIONING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblForceContext : public Alter_table_specContext {
  public:
    AltblForceContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *FORCE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblRenameTblContext : public Alter_table_specContext {
  public:
    AltblRenameTblContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *RENAME();
    Id_Context *id_();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDropPartContext : public Alter_table_specContext {
  public:
    AltblDropPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblImpTblSpaceContext : public Alter_table_specContext {
  public:
    AltblImpTblSpaceContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *TABLESPACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAnalPartContext : public Alter_table_specContext {
  public:
    AltblAnalPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblTruncPartContext : public Alter_table_specContext {
  public:
    AltblTruncPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAlgContext : public Alter_table_specContext {
  public:
    AltblAlgContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDefCharsetContext : public Alter_table_specContext {
  public:
    AltblDefCharsetContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddSpecIndexContext : public Alter_table_specContext {
  public:
    AltblAddSpecIndexContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    Id_Context *id_();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblValidContext : public Alter_table_specContext {
  public:
    AltblValidContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblRebuildPartContext : public Alter_table_specContext {
  public:
    AltblRebuildPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblRepairPartContext : public Alter_table_specContext {
  public:
    AltblRepairPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblColDropContext : public Alter_table_specContext {
  public:
    AltblColDropContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    Id_Context *id_();
    antlr4::tree::TerminalNode *COLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblExchPartContext : public Alter_table_specContext {
  public:
    AltblExchPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *PARTITION();
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddFKContext : public Alter_table_specContext {
  public:
    AltblAddFKContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    Index_colname_listContext *index_colname_list();
    Reference_definitionContext *reference_definition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDiscartPartContext : public Alter_table_specContext {
  public:
    AltblDiscartPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblCheckPartContext : public Alter_table_specContext {
  public:
    AltblCheckPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblColChangeContext : public Alter_table_specContext {
  public:
    AltblColChangeContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *CHANGE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Column_definitionContext *column_definition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblColDefContext : public Alter_table_specContext {
  public:
    AltblColDefContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    Default_valueContext *default_value();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddColContext : public Alter_table_specContext {
  public:
    AltblAddColContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Column_definitionContext *column_definition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDisTblspaceContext : public Alter_table_specContext {
  public:
    AltblDisTblspaceContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *TABLESPACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddIndexContext : public Alter_table_specContext {
  public:
    AltblAddIndexContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    Id_Context *id_();
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddUKContext : public Alter_table_specContext {
  public:
    AltblAddUKContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNIQUE();
    Index_colname_listContext *index_colname_list();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Index_typeContext *index_type();
    std::vector<Index_optionContext *> index_option();
    Index_optionContext* index_option(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblColModContext : public Alter_table_specContext {
  public:
    AltblColModContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *MODIFY();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    Column_definitionContext *column_definition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblCoalPartContext : public Alter_table_specContext {
  public:
    AltblCoalPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *PARTITION();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblOptimPartContext : public Alter_table_specContext {
  public:
    AltblOptimPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblEnKeyContext : public Alter_table_specContext {
  public:
    AltblEnKeyContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblLockContext : public Alter_table_specContext {
  public:
    AltblLockContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblRemovePartContext : public Alter_table_specContext {
  public:
    AltblRemovePartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PARTITIONING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblConvertContext : public Alter_table_specContext {
  public:
    AltblConvertContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblTableOptContext : public Alter_table_specContext {
  public:
    AltblTableOptContext(Alter_table_specContext *ctx);

    Table_optionContext *table_option();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblReorgPartContext : public Alter_table_specContext {
  public:
    AltblReorgPartContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *INTO();
    std::vector<Partition_defContext *> partition_def();
    Partition_defContext* partition_def(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblDropFKContext : public Alter_table_specContext {
  public:
    AltblDropFKContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    Id_Context *id_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AltblAddColsContext : public Alter_table_specContext {
  public:
    AltblAddColsContext(Alter_table_specContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Alter_table_specContext* alter_table_spec();

  class  Drop_databaseContext : public antlr4::ParserRuleContext {
  public:
    Drop_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_databaseContext* drop_database();

  class  Drop_eventContext : public antlr4::ParserRuleContext {
  public:
    Drop_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    Full_idContext *full_id();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_eventContext* drop_event();

  class  Drop_indexContext : public antlr4::ParserRuleContext {
  public:
    Drop_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_indexContext* drop_index();

  class  Drop_logfile_groupContext : public antlr4::ParserRuleContext {
  public:
    Drop_logfile_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_logfile_groupContext* drop_logfile_group();

  class  Drop_procedureContext : public antlr4::ParserRuleContext {
  public:
    Drop_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PROCEDURE();
    Full_idContext *full_id();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_procedureContext* drop_procedure();

  class  Drop_functionContext : public antlr4::ParserRuleContext {
  public:
    Drop_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    Full_idContext *full_id();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_functionContext* drop_function();

  class  Drop_serverContext : public antlr4::ParserRuleContext {
  public:
    Drop_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    Id_Context *id_();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_serverContext* drop_server();

  class  Drop_tableContext : public antlr4::ParserRuleContext {
  public:
    Drop_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *TEMPORARY();
    If_existsContext *if_exists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tableContext* drop_table();

  class  Drop_tablespaceContext : public antlr4::ParserRuleContext {
  public:
    Drop_tablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLESPACE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tablespaceContext* drop_tablespace();

  class  Drop_triggerContext : public antlr4::ParserRuleContext {
  public:
    Drop_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    Full_idContext *full_id();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_triggerContext* drop_trigger();

  class  Drop_viewContext : public antlr4::ParserRuleContext {
  public:
    Drop_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    std::vector<Full_idContext *> full_id();
    Full_idContext* full_id(size_t i);
    If_existsContext *if_exists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_viewContext* drop_view();

  class  Rename_tableContext : public antlr4::ParserRuleContext {
  public:
    Rename_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_tableContext* rename_table();

  class  Truncate_tableContext : public antlr4::ParserRuleContext {
  public:
    Truncate_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *TABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_tableContext* truncate_table();

  class  Call_statementContext : public antlr4::ParserRuleContext {
  public:
    Call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    Full_idContext *full_id();
    Constant_listContext *constant_list();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_statementContext* call_statement();

  class  Delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_delete_statementContext *single_delete_statement();
    Multiple_delete_statementContext *multiple_delete_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statementContext* delete_statement();

  class  Do_statementContext : public antlr4::ParserRuleContext {
  public:
    Do_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_statementContext* do_statement();

  class  Handler_statementContext : public antlr4::ParserRuleContext {
  public:
    Handler_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Handler_open_statementContext *handler_open_statement();
    Handler_read_index_statementContext *handler_read_index_statement();
    Handler_read_statementContext *handler_read_statement();
    Handler_close_statementContext *handler_close_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_statementContext* handler_statement();

  class  Insert_statementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Update_elemContext *set_firstelem = nullptr;;
    MySQLParser::Update_elemContext *update_elemContext = nullptr;;
    std::vector<Update_elemContext *> set_elem;;
    MySQLParser::Update_elemContext *duplicate_firstelem = nullptr;;
    std::vector<Update_elemContext *> duplicate_elem;;
    Insert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    Table_nameContext *table_name();
    Insert_statement_valueContext *insert_statement_value();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<Id_listContext *> id_list();
    Id_listContext* id_list(size_t i);
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statementContext* insert_statement();

  class  Load_data_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    antlr4::Token *filename = nullptr;;
    antlr4::Token *replaceignore = nullptr;;
    MySQLParser::Charset_nameContext *charset = nullptr;;
    antlr4::Token *terminatefieldsymb = nullptr;;
    antlr4::Token *enclosedsymb = nullptr;;
    antlr4::Token *escapesymb = nullptr;;
    antlr4::Token *startingsymb = nullptr;;
    antlr4::Token *terminatelinesymb = nullptr;;
    Load_data_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINES();
    antlr4::tree::TerminalNode* LINES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    Decimal_literalContext *decimal_literal();
    std::vector<Col_or_uservarContext *> col_or_uservar();
    Col_or_uservarContext* col_or_uservar(size_t i);
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<antlr4::tree::TerminalNode *> TERMINATED();
    antlr4::tree::TerminalNode* TERMINATED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *ENCLOSED();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *OPTIONALLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Load_data_statementContext* load_data_statement();

  class  Load_xml_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    Load_xml_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *INFILE();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    Charset_nameContext *charset_name();
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    Decimal_literalContext *decimal_literal();
    std::vector<Col_or_uservarContext *> col_or_uservar();
    Col_or_uservarContext* col_or_uservar(size_t i);
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Load_xml_statementContext* load_xml_statement();

  class  Replace_statementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Update_elemContext *set_firstelem = nullptr;;
    MySQLParser::Update_elemContext *update_elemContext = nullptr;;
    std::vector<Update_elemContext *> set_elem;;
    Replace_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    Table_nameContext *table_name();
    Insert_statement_valueContext *insert_statement_value();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<Id_listContext *> id_list();
    Id_listContext* id_list(size_t i);
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Replace_statementContext* replace_statement();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Select_statementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Select_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnionSelectContext : public Select_statementContext {
  public:
    UnionSelectContext(Select_statementContext *ctx);

    Query_specification_nointoContext *query_specification_nointo();
    std::vector<Union_statementContext *> union_statement();
    Union_statementContext* union_statement(size_t i);
    antlr4::tree::TerminalNode *UNION();
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();
    Query_specificationContext *query_specification();
    Query_expressionContext *query_expression();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenSelectContext : public Select_statementContext {
  public:
    ParenSelectContext(Select_statementContext *ctx);

    Query_expressionContext *query_expression();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleSelectContext : public Select_statementContext {
  public:
    SimpleSelectContext(Select_statementContext *ctx);

    Query_specificationContext *query_specification();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnionParenSelectContext : public Select_statementContext {
  public:
    UnionParenSelectContext(Select_statementContext *ctx);

    Query_expression_nointoContext *query_expression_nointo();
    std::vector<Union_parenthContext *> union_parenth();
    Union_parenthContext* union_parenth(size_t i);
    antlr4::tree::TerminalNode *UNION();
    Query_expressionContext *query_expression();
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Select_statementContext* select_statement();

  class  Update_statementContext : public antlr4::ParserRuleContext {
  public:
    Update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_update_statementContext *single_update_statement();
    Multiple_update_statementContext *multiple_update_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statementContext* update_statement();

  class  Insert_statement_valueContext : public antlr4::ParserRuleContext {
  public:
    Insert_statement_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();
    std::vector<Expression_listContext *> expression_list();
    Expression_listContext* expression_list(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statement_valueContext* insert_statement_value();

  class  Update_elemContext : public antlr4::ParserRuleContext {
  public:
    Update_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Full_column_nameContext *full_column_name();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_elemContext* update_elem();

  class  Col_or_uservarContext : public antlr4::ParserRuleContext {
  public:
    Col_or_uservarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_or_uservarContext* col_or_uservar();

  class  Single_delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Single_delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    Order_by_clauseContext *order_by_clause();
    antlr4::tree::TerminalNode *LIMIT();
    Decimal_literalContext *decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_delete_statementContext* single_delete_statement();

  class  Multiple_delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Multiple_delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *FROM();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_delete_statementContext* multiple_delete_statement();

  class  Handler_open_statementContext : public antlr4::ParserRuleContext {
  public:
    Handler_open_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *OPEN();
    Id_Context *id_();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_open_statementContext* handler_open_statement();

  class  Handler_read_index_statementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Full_idContext *index = nullptr;;
    antlr4::Token *move_order = nullptr;;
    Handler_read_index_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *READ();
    Full_idContext *full_id();
    Comparison_operatorContext *comparison_operator();
    Constant_listContext *constant_list();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LIMIT();
    Decimal_literalContext *decimal_literal();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_read_index_statementContext* handler_read_index_statement();

  class  Handler_read_statementContext : public antlr4::ParserRuleContext {
  public:
    Handler_read_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LIMIT();
    Decimal_literalContext *decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_read_statementContext* handler_read_statement();

  class  Handler_close_statementContext : public antlr4::ParserRuleContext {
  public:
    Handler_close_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_close_statementContext* handler_close_statement();

  class  Single_update_statementContext : public antlr4::ParserRuleContext {
  public:
    Single_update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SET();
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *IGNORE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_update_statementContext* single_update_statement();

  class  Multiple_update_statementContext : public antlr4::ParserRuleContext {
  public:
    Multiple_update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *SET();
    std::vector<Update_elemContext *> update_elem();
    Update_elemContext* update_elem(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_update_statementContext* multiple_update_statement();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Order_by_expressionContext *> order_by_expression();
    Order_by_expressionContext* order_by_expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Order_by_expressionContext : public antlr4::ParserRuleContext {
  public:
    Order_by_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_expressionContext* order_by_expression();

  class  Table_sourcesContext : public antlr4::ParserRuleContext {
  public:
    Table_sourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_sourceContext *> table_source();
    Table_sourceContext* table_source(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sourcesContext* table_sources();

  class  Table_sourceContext : public antlr4::ParserRuleContext {
  public:
    Table_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_source_itemContext *table_source_item();
    std::vector<Join_partContext *> join_part();
    Join_partContext* join_part(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sourceContext* table_source();

  class  Table_source_itemContext : public antlr4::ParserRuleContext {
  public:
    Table_source_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Table_source_itemContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Table_source_itemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryTableItemContext : public Table_source_itemContext {
  public:
    SubqueryTableItemContext(Table_source_itemContext *ctx);

    MySQLParser::Id_Context *alias = nullptr;
    Id_Context *id_();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomTableItemContext : public Table_source_itemContext {
  public:
    AtomTableItemContext(Table_source_itemContext *ctx);

    MySQLParser::Id_Context *alias = nullptr;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    std::vector<Index_hintContext *> index_hint();
    Index_hintContext* index_hint(size_t i);
    Id_Context *id_();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableSourcesItemContext : public Table_source_itemContext {
  public:
    TableSourcesItemContext(Table_source_itemContext *ctx);

    Table_sourcesContext *table_sources();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_source_itemContext* table_source_item();

  class  Index_hintContext : public antlr4::ParserRuleContext {
  public:
    Index_hintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_hintContext* index_hint();

  class  Join_partContext : public antlr4::ParserRuleContext {
  public:
    Join_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Join_partContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Join_partContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InnerJoinContext : public Join_partContext {
  public:
    InnerJoinContext(Join_partContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    Table_source_itemContext *table_source_item();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USING();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NaturalJoinContext : public Join_partContext {
  public:
    NaturalJoinContext(Join_partContext *ctx);

    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *JOIN();
    Table_source_itemContext *table_source_item();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OuterJoinContext : public Join_partContext {
  public:
    OuterJoinContext(Join_partContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    Table_source_itemContext *table_source_item();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USING();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *OUTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StraightJoinContext : public Join_partContext {
  public:
    StraightJoinContext(Join_partContext *ctx);

    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    Table_source_itemContext *table_source_item();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Join_partContext* join_part();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  Query_expressionContext : public antlr4::ParserRuleContext {
  public:
    Query_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_specificationContext *query_specification();
    Query_expressionContext *query_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_expressionContext* query_expression();

  class  Query_expression_nointoContext : public antlr4::ParserRuleContext {
  public:
    Query_expression_nointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_specification_nointoContext *query_specification_nointo();
    Query_expression_nointoContext *query_expression_nointo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_expression_nointoContext* query_expression_nointo();

  class  Query_specificationContext : public antlr4::ParserRuleContext {
  public:
    Query_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    std::vector<Select_specContext *> select_spec();
    Select_specContext* select_spec(size_t i);
    Select_into_expressionContext *select_into_expression();
    From_clauseContext *from_clause();
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_specificationContext* query_specification();

  class  Query_specification_nointoContext : public antlr4::ParserRuleContext {
  public:
    Query_specification_nointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    std::vector<Select_specContext *> select_spec();
    Select_specContext* select_spec(size_t i);
    From_clauseContext *from_clause();
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_specification_nointoContext* query_specification_nointo();

  class  Union_parenthContext : public antlr4::ParserRuleContext {
  public:
    Union_parenthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    Query_expression_nointoContext *query_expression_nointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_parenthContext* union_parenth();

  class  Union_statementContext : public antlr4::ParserRuleContext {
  public:
    Union_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    Query_specification_nointoContext *query_specification_nointo();
    Query_expression_nointoContext *query_expression_nointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_statementContext* union_statement();

  class  Select_specContext : public antlr4::ParserRuleContext {
  public:
    Select_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTINCTROW();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    antlr4::tree::TerminalNode *SQL_SMALL_RESULT();
    antlr4::tree::TerminalNode *SQL_BIG_RESULT();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_CALC_FOUND_ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_specContext* select_spec();

  class  Select_listContext : public antlr4::ParserRuleContext {
  public:
    Select_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_list_elemContext *> select_list_elem();
    Select_list_elemContext* select_list_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_listContext* select_list();

  class  Select_list_elemContext : public antlr4::ParserRuleContext {
  public:
    Select_list_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Select_list_elemContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Select_list_elemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SellistelFuncContext : public Select_list_elemContext {
  public:
    SellistelFuncContext(Select_list_elemContext *ctx);

    Function_callContext *function_call();
    Id_Context *id_();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SellistelAllColContext : public Select_list_elemContext {
  public:
    SellistelAllColContext(Select_list_elemContext *ctx);

    Full_idContext *full_id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SellistelExprContext : public Select_list_elemContext {
  public:
    SellistelExprContext(Select_list_elemContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    Id_Context *id_();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SellistelColContext : public Select_list_elemContext {
  public:
    SellistelColContext(Select_list_elemContext *ctx);

    Full_column_nameContext *full_column_name();
    Id_Context *id_();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Select_list_elemContext* select_list_elem();

  class  Select_into_expressionContext : public antlr4::ParserRuleContext {
  public:
    Select_into_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Select_into_expressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Select_into_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectIntoOutfileContext : public Select_into_expressionContext {
  public:
    SelectIntoOutfileContext(Select_into_expressionContext *ctx);

    antlr4::Token *filename = nullptr;
    MySQLParser::Charset_nameContext *charset = nullptr;
    antlr4::Token *terminatefieldsymb = nullptr;
    antlr4::Token *enclosedsymb = nullptr;
    antlr4::Token *escapesymb = nullptr;
    antlr4::Token *startingsymb = nullptr;
    antlr4::Token *terminatelinesymb = nullptr;
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *OUTFILE();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LINES();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<antlr4::tree::TerminalNode *> TERMINATED();
    antlr4::tree::TerminalNode* TERMINATED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *ENCLOSED();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *OPTIONALLY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectIntoVarsContext : public Select_into_expressionContext {
  public:
    SelectIntoVarsContext(Select_into_expressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectIntoDumpContext : public Select_into_expressionContext {
  public:
    SelectIntoDumpContext(Select_into_expressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Select_into_expressionContext* select_into_expression();

  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    Table_sourcesContext *table_sources();
    antlr4::tree::TerminalNode *WHERE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<Group_by_itemContext *> group_by_item();
    Group_by_itemContext* group_by_item(size_t i);
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ROLLUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_clauseContext* from_clause();

  class  Group_by_itemContext : public antlr4::ParserRuleContext {
  public:
    Group_by_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_itemContext* group_by_item();

  class  Limit_clauseContext : public antlr4::ParserRuleContext {
  public:
    Limit_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    antlr4::tree::TerminalNode *OFFSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_clauseContext* limit_clause();

  class  Start_transactionContext : public antlr4::ParserRuleContext {
  public:
    Start_transactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<Transact_optionContext *> transact_option();
    Transact_optionContext* transact_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_transactionContext* start_transaction();

  class  Begin_workContext : public antlr4::ParserRuleContext {
  public:
    Begin_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_workContext* begin_work();

  class  Commit_workContext : public antlr4::ParserRuleContext {
  public:
    Commit_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commit_workContext* commit_work();

  class  Rollback_workContext : public antlr4::ParserRuleContext {
  public:
    Rollback_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rollback_workContext* rollback_work();

  class  Savepoint_statementContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_statementContext* savepoint_statement();

  class  Rollback_statementContext : public antlr4::ParserRuleContext {
  public:
    Rollback_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *TO();
    Id_Context *id_();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *SAVEPOINT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rollback_statementContext* rollback_statement();

  class  Release_statementContext : public antlr4::ParserRuleContext {
  public:
    Release_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Release_statementContext* release_statement();

  class  Lock_tablesContext : public antlr4::ParserRuleContext {
  public:
    Lock_tablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TABLES();
    std::vector<Lock_table_elementContext *> lock_table_element();
    Lock_table_elementContext* lock_table_element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_tablesContext* lock_tables();

  class  Unlock_tablesContext : public antlr4::ParserRuleContext {
  public:
    Unlock_tablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *TABLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unlock_tablesContext* unlock_tables();

  class  Set_autocommit_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_autocommit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AUTOCOMMIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_autocommit_statementContext* set_autocommit_statement();

  class  Set_transaction_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_transaction_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<Trans_characteristicContext *> trans_characteristic();
    Trans_characteristicContext* trans_characteristic(size_t i);
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_transaction_statementContext* set_transaction_statement();

  class  Transact_optionContext : public antlr4::ParserRuleContext {
  public:
    Transact_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transact_optionContext* transact_option();

  class  Lock_table_elementContext : public antlr4::ParserRuleContext {
  public:
    Lock_table_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_table_elementContext* lock_table_element();

  class  Trans_characteristicContext : public antlr4::ParserRuleContext {
  public:
    Trans_characteristicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    Transaction_levelContext *transaction_level();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_characteristicContext* trans_characteristic();

  class  Transaction_levelContext : public antlr4::ParserRuleContext {
  public:
    Transaction_levelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_levelContext* transaction_level();

  class  Change_masterContext : public antlr4::ParserRuleContext {
  public:
    Change_masterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    std::vector<Master_optionContext *> master_option();
    Master_optionContext* master_option(size_t i);
    Channel_optionContext *channel_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_masterContext* change_master();

  class  Change_repl_filterContext : public antlr4::ParserRuleContext {
  public:
    Change_repl_filterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FILTER();
    std::vector<Repl_filterContext *> repl_filter();
    Repl_filterContext* repl_filter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_repl_filterContext* change_repl_filter();

  class  Purge_binary_logsContext : public antlr4::ParserRuleContext {
  public:
    Purge_binary_logsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BEFORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Purge_binary_logsContext* purge_binary_logs();

  class  Reset_masterContext : public antlr4::ParserRuleContext {
  public:
    Reset_masterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *MASTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_masterContext* reset_master();

  class  Reset_slaveContext : public antlr4::ParserRuleContext {
  public:
    Reset_slaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *ALL();
    Channel_optionContext *channel_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_slaveContext* reset_slave();

  class  Start_slaveContext : public antlr4::ParserRuleContext {
  public:
    Start_slaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *UNTIL();
    std::vector<Thread_typeContext *> thread_type();
    Thread_typeContext* thread_type(size_t i);
    Until_optionContext *until_option();
    std::vector<Start_slave_connection_optionContext *> start_slave_connection_option();
    Start_slave_connection_optionContext* start_slave_connection_option(size_t i);
    Channel_optionContext *channel_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_slaveContext* start_slave();

  class  Stop_slaveContext : public antlr4::ParserRuleContext {
  public:
    Stop_slaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *SLAVE();
    std::vector<Thread_typeContext *> thread_type();
    Thread_typeContext* thread_type(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stop_slaveContext* stop_slave();

  class  Start_group_replContext : public antlr4::ParserRuleContext {
  public:
    Start_group_replContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_group_replContext* start_group_repl();

  class  Stop_group_replContext : public antlr4::ParserRuleContext {
  public:
    Stop_group_replContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stop_group_replContext* stop_group_repl();

  class  Master_optionContext : public antlr4::ParserRuleContext {
  public:
    Master_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Master_optionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Master_optionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MasterOptIdListContext : public Master_optionContext {
  public:
    MasterOptIdListContext(Master_optionContext *ctx);

    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterOptDecimalContext : public Master_optionContext {
  public:
    MasterOptDecimalContext(Master_optionContext *ctx);

    Decimal_master_optionContext *decimal_master_option();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterOptRealContext : public Master_optionContext {
  public:
    MasterOptRealContext(Master_optionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterOptBoolContext : public Master_optionContext {
  public:
    MasterOptBoolContext(Master_optionContext *ctx);

    Bool_master_optionContext *bool_master_option();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterOptStringContext : public Master_optionContext {
  public:
    MasterOptStringContext(Master_optionContext *ctx);

    String_master_optionContext *string_master_option();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Master_optionContext* master_option();

  class  String_master_optionContext : public antlr4::ParserRuleContext {
  public:
    String_master_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_master_optionContext* string_master_option();

  class  Decimal_master_optionContext : public antlr4::ParserRuleContext {
  public:
    Decimal_master_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_master_optionContext* decimal_master_option();

  class  Bool_master_optionContext : public antlr4::ParserRuleContext {
  public:
    Bool_master_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_master_optionContext* bool_master_option();

  class  Channel_optionContext : public antlr4::ParserRuleContext {
  public:
    Channel_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Channel_optionContext* channel_option();

  class  Repl_filterContext : public antlr4::ParserRuleContext {
  public:
    Repl_filterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Repl_filterContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Repl_filterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ReplfilterDbListContext : public Repl_filterContext {
  public:
    ReplfilterDbListContext(Repl_filterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReplfilterStableListContext : public Repl_filterContext {
  public:
    ReplfilterStableListContext(Repl_filterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    Simple_string_listContext *simple_string_list();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReplfilterTablepairListContext : public Repl_filterContext {
  public:
    ReplfilterTablepairListContext(Repl_filterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    Table_pair_listContext *table_pair_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReplfilterTableListContext : public Repl_filterContext {
  public:
    ReplfilterTableListContext(Repl_filterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Repl_filterContext* repl_filter();

  class  Thread_typeContext : public antlr4::ParserRuleContext {
  public:
    Thread_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *SQL_THREAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thread_typeContext* thread_type();

  class  Until_optionContext : public antlr4::ParserRuleContext {
  public:
    Until_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Until_optionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Until_optionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UntilSqlGapsContext : public Until_optionContext {
  public:
    UntilSqlGapsContext(Until_optionContext *ctx);

    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilGtidSsetContext : public Until_optionContext {
  public:
    UntilGtidSsetContext(Until_optionContext *ctx);

    Gtid_setContext *gtid_set();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilRelayLogContext : public Until_optionContext {
  public:
    UntilRelayLogContext(Until_optionContext *ctx);

    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilMasterLogContext : public Until_optionContext {
  public:
    UntilMasterLogContext(Until_optionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    Decimal_literalContext *decimal_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Until_optionContext* until_option();

  class  Start_slave_connection_optionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *con_opt_user = nullptr;;
    antlr4::Token *con_opt_password = nullptr;;
    antlr4::Token *con_opt_def_auth = nullptr;;
    antlr4::Token *con_opt_plugin_dir = nullptr;;
    Start_slave_connection_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *PLUGIN_DIR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_slave_connection_optionContext* start_slave_connection_option();

  class  Gtid_setContext : public antlr4::ParserRuleContext {
  public:
    Gtid_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Uuid_setContext *> uuid_set();
    Uuid_setContext* uuid_set(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gtid_setContext* gtid_set();

  class  Xa_start_transactionContext : public antlr4::ParserRuleContext {
  public:
    Xa_start_transactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    XidContext *xid();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *RESUME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xa_start_transactionContext* xa_start_transaction();

  class  Xa_end_transactionContext : public antlr4::ParserRuleContext {
  public:
    Xa_end_transactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *END();
    XidContext *xid();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *MIGRATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xa_end_transactionContext* xa_end_transaction();

  class  Xa_prepareContext : public antlr4::ParserRuleContext {
  public:
    Xa_prepareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *PREPARE();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xa_prepareContext* xa_prepare();

  class  Xa_commit_workContext : public antlr4::ParserRuleContext {
  public:
    Xa_commit_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *COMMIT();
    XidContext *xid();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *PHASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xa_commit_workContext* xa_commit_work();

  class  Xa_rollback_workContext : public antlr4::ParserRuleContext {
  public:
    Xa_rollback_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *ROLLBACK();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xa_rollback_workContext* xa_rollback_work();

  class  Xa_recover_workContext : public antlr4::ParserRuleContext {
  public:
    Xa_recover_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *CONVERT();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xa_recover_workContext* xa_recover_work();

  class  Prepare_statementContext : public antlr4::ParserRuleContext {
  public:
    Prepare_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prepare_statementContext* prepare_statement();

  class  Execute_statementContext : public antlr4::ParserRuleContext {
  public:
    Execute_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *USING();
    User_var_listContext *user_var_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statementContext* execute_statement();

  class  Deallocate_prepareContext : public antlr4::ParserRuleContext {
  public:
    Deallocate_prepareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deallocate_prepareContext* deallocate_prepare();

  class  Routine_bodyContext : public antlr4::ParserRuleContext {
  public:
    Routine_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_statementContext *block_statement();
    Sql_statementContext *sql_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Routine_bodyContext* routine_body();

  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<Declare_variableContext *> declare_variable();
    Declare_variableContext* declare_variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<Declare_conditionContext *> declare_condition();
    Declare_conditionContext* declare_condition(size_t i);
    std::vector<Declare_cursorContext *> declare_cursor();
    Declare_cursorContext* declare_cursor(size_t i);
    std::vector<Declare_handlerContext *> declare_handler();
    Declare_handlerContext* declare_handler(size_t i);
    std::vector<Procedure_sql_statementContext *> procedure_sql_statement();
    Procedure_sql_statementContext* procedure_sql_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_statementContext* block_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *END();
    Id_Context *id_();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<Procedure_sql_statementContext *> procedure_sql_statement();
    Procedure_sql_statementContext* procedure_sql_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<Procedure_sql_statementContext *> procedure_sql_statement();
    Procedure_sql_statementContext* procedure_sql_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Iterate_statementContext : public antlr4::ParserRuleContext {
  public:
    Iterate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Iterate_statementContext* iterate_statement();

  class  Leave_statementContext : public antlr4::ParserRuleContext {
  public:
    Leave_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Leave_statementContext* leave_statement();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<Procedure_sql_statementContext *> procedure_sql_statement();
    Procedure_sql_statementContext* procedure_sql_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  Repeat_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT();
    antlr4::tree::TerminalNode* REPEAT(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<Procedure_sql_statementContext *> procedure_sql_statement();
    Procedure_sql_statementContext* procedure_sql_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_statementContext* repeat_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<Procedure_sql_statementContext *> procedure_sql_statement();
    Procedure_sql_statementContext* procedure_sql_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  Cursor_statementContext : public antlr4::ParserRuleContext {
  public:
    Cursor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *INTO();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *OPEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_statementContext* cursor_statement();

  class  Declare_variableContext : public antlr4::ParserRuleContext {
  public:
    Declare_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Id_listContext *id_list();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DEFAULT();
    Default_valueContext *default_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_variableContext* declare_variable();

  class  Declare_conditionContext : public antlr4::ParserRuleContext {
  public:
    Declare_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *FOR();
    Decimal_literalContext *decimal_literal();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_conditionContext* declare_condition();

  class  Declare_cursorContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    Select_statementContext *select_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursorContext* declare_cursor();

  class  Declare_handlerContext : public antlr4::ParserRuleContext {
  public:
    Declare_handlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Handler_condition_valueContext *> handler_condition_value();
    Handler_condition_valueContext* handler_condition_value(size_t i);
    Routine_bodyContext *routine_body();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *UNDO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_handlerContext* declare_handler();

  class  Handler_condition_valueContext : public antlr4::ParserRuleContext {
  public:
    Handler_condition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decimal_literalContext *decimal_literal();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *SQLEXCEPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_condition_valueContext* handler_condition_value();

  class  Procedure_sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedure_sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    Compound_statementContext *compound_statement();
    Sql_statementContext *sql_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_sql_statementContext* procedure_sql_statement();

  class  Alter_userContext : public antlr4::ParserRuleContext {
  public:
    Alter_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Alter_userContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Alter_userContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUserMysql57Context : public Alter_userContext {
  public:
    AlterUserMysql57Context(Alter_userContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<User_auth_optionContext *> user_auth_option();
    User_auth_optionContext* user_auth_option(size_t i);
    If_existsContext *if_exists();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<User_password_optionContext *> user_password_option();
    User_password_optionContext* user_password_option(size_t i);
    std::vector<User_lock_optionContext *> user_lock_option();
    User_lock_optionContext* user_lock_option(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<Tls_optionContext *> tls_option();
    Tls_optionContext* tls_option(size_t i);
    std::vector<User_resource_optionContext *> user_resource_option();
    User_resource_optionContext* user_resource_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterUserMysql56Context : public Alter_userContext {
  public:
    AlterUserMysql56Context(Alter_userContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    std::vector<User_password_optionContext *> user_password_option();
    User_password_optionContext* user_password_option(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Alter_userContext* alter_user();

  class  Create_userContext : public antlr4::ParserRuleContext {
  public:
    Create_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Create_userContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Create_userContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateUserMysql57Context : public Create_userContext {
  public:
    CreateUserMysql57Context(Create_userContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<User_auth_optionContext *> user_auth_option();
    User_auth_optionContext* user_auth_option(size_t i);
    If_not_existsContext *if_not_exists();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<User_password_optionContext *> user_password_option();
    User_password_optionContext* user_password_option(size_t i);
    std::vector<User_lock_optionContext *> user_lock_option();
    User_lock_optionContext* user_lock_option(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<Tls_optionContext *> tls_option();
    Tls_optionContext* tls_option(size_t i);
    std::vector<User_resource_optionContext *> user_resource_option();
    User_resource_optionContext* user_resource_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateUserMysql56Context : public Create_userContext {
  public:
    CreateUserMysql56Context(Create_userContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<User_auth_optionContext *> user_auth_option();
    User_auth_optionContext* user_auth_option(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Create_userContext* create_user();

  class  Drop_userContext : public antlr4::ParserRuleContext {
  public:
    Drop_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_userContext* drop_user();

  class  Grant_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priv_obj_type = nullptr;;
    Grant_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<Privelege_clauseContext *> privelege_clause();
    Privelege_clauseContext* privelege_clause(size_t i);
    antlr4::tree::TerminalNode *ON();
    Privilege_levelContext *privilege_level();
    antlr4::tree::TerminalNode *TO();
    std::vector<User_auth_optionContext *> user_auth_option();
    User_auth_optionContext* user_auth_option(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *NONE();
    std::vector<Tls_optionContext *> tls_option();
    Tls_optionContext* tls_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPTION();
    antlr4::tree::TerminalNode* OPTION(size_t i);
    std::vector<User_resource_optionContext *> user_resource_option();
    User_resource_optionContext* user_resource_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_statementContext* grant_statement();

  class  Grant_proxyContext : public antlr4::ParserRuleContext {
  public:
    Grant_proxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_proxyContext* grant_proxy();

  class  Rename_userContext : public antlr4::ParserRuleContext {
  public:
    Rename_userContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *USER();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_userContext* rename_user();

  class  Revoke_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Revoke_statementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Revoke_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DetailRevokeContext : public Revoke_statementContext {
  public:
    DetailRevokeContext(Revoke_statementContext *ctx);

    antlr4::Token *priv_obj_type = nullptr;
    antlr4::tree::TerminalNode *REVOKE();
    std::vector<Privelege_clauseContext *> privelege_clause();
    Privelege_clauseContext* privelege_clause(size_t i);
    antlr4::tree::TerminalNode *ON();
    Privilege_levelContext *privilege_level();
    antlr4::tree::TerminalNode *FROM();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShortRevokeContext : public Revoke_statementContext {
  public:
    ShortRevokeContext(Revoke_statementContext *ctx);

    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FROM();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    antlr4::tree::TerminalNode *PRIVILEGES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Revoke_statementContext* revoke_statement();

  class  Revoke_proxyContext : public antlr4::ParserRuleContext {
  public:
    Revoke_proxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    antlr4::tree::TerminalNode *FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_proxyContext* revoke_proxy();

  class  Set_password_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_password_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *PASSWORD();
    Set_password_optionContext *set_password_option();
    antlr4::tree::TerminalNode *FOR();
    User_nameContext *user_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_password_statementContext* set_password_statement();

  class  User_password_optionContext : public antlr4::ParserRuleContext {
  public:
    User_password_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *INTERVAL();
    Decimal_literalContext *decimal_literal();
    antlr4::tree::TerminalNode *DAY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_password_optionContext* user_password_option();

  class  User_auth_optionContext : public antlr4::ParserRuleContext {
  public:
    User_auth_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    User_auth_optionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(User_auth_optionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AuthByStringContext : public User_auth_optionContext {
  public:
    AuthByStringContext(User_auth_optionContext *ctx);

    User_nameContext *user_name();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WITH();
    Auth_pluginContext *auth_plugin();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AuthByPasswordContext : public User_auth_optionContext {
  public:
    AuthByPasswordContext(User_auth_optionContext *ctx);

    antlr4::Token *hashedpwd = nullptr;
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AuthByHashContext : public User_auth_optionContext {
  public:
    AuthByHashContext(User_auth_optionContext *ctx);

    User_nameContext *user_name();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *WITH();
    Auth_pluginContext *auth_plugin();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  User_auth_optionContext* user_auth_option();

  class  Tls_optionContext : public antlr4::ParserRuleContext {
  public:
    Tls_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *SUBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tls_optionContext* tls_option();

  class  User_resource_optionContext : public antlr4::ParserRuleContext {
  public:
    User_resource_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    Decimal_literalContext *decimal_literal();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_resource_optionContext* user_resource_option();

  class  User_lock_optionContext : public antlr4::ParserRuleContext {
  public:
    User_lock_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *UNLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_lock_optionContext* user_lock_option();

  class  Privelege_clauseContext : public antlr4::ParserRuleContext {
  public:
    Privelege_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeContext *privilege();
    Id_listContext *id_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privelege_clauseContext* privelege_clause();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeContext* privilege();

  class  Privilege_levelContext : public antlr4::ParserRuleContext {
  public:
    Privilege_levelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_levelContext* privilege_level();

  class  Set_password_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_password_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *OLD_PASSWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_password_optionContext* set_password_option();

  class  Analyze_tableContext : public antlr4::ParserRuleContext {
  public:
    Analyze_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *TABLE();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_tableContext* analyze_table();

  class  Check_tableContext : public antlr4::ParserRuleContext {
  public:
    Check_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *TABLE();
    Table_listContext *table_list();
    std::vector<Check_table_optionContext *> check_table_option();
    Check_table_optionContext* check_table_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_tableContext* check_table();

  class  Checksum_tableContext : public antlr4::ParserRuleContext {
  public:
    Checksum_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *TABLE();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checksum_tableContext* checksum_table();

  class  Optimize_tableContext : public antlr4::ParserRuleContext {
  public:
    Optimize_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *TABLE();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optimize_tableContext* optimize_table();

  class  Repair_tableContext : public antlr4::ParserRuleContext {
  public:
    Repair_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *TABLE();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repair_tableContext* repair_table();

  class  Check_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Check_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *CHANGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_table_optionContext* check_table_option();

  class  Create_udfunctionContext : public antlr4::ParserRuleContext {
  public:
    Create_udfunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Id_Context *id_();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *AGGREGATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_udfunctionContext* create_udfunction();

  class  Install_pluginContext : public antlr4::ParserRuleContext {
  public:
    Install_pluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    Id_Context *id_();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Install_pluginContext* install_plugin();

  class  Uninstall_pluginContext : public antlr4::ParserRuleContext {
  public:
    Uninstall_pluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uninstall_pluginContext* uninstall_plugin();

  class  Set_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Set_statementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Set_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SetPasswordStatementContext : public Set_statementContext {
  public:
    SetPasswordStatementContext(Set_statementContext *ctx);

    Set_password_statementContext *set_password_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetTransactionContext : public Set_statementContext {
  public:
    SetTransactionContext(Set_statementContext *ctx);

    Set_transaction_statementContext *set_transaction_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetCharsetContext : public Set_statementContext {
  public:
    SetCharsetContext(Set_statementContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetNamesContext : public Set_statementContext {
  public:
    SetNamesContext(Set_statementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NAMES();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetAutocommitContext : public Set_statementContext {
  public:
    SetAutocommitContext(Set_statementContext *ctx);

    Set_autocommit_statementContext *set_autocommit_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetVariableAssignmentContext : public Set_statementContext {
  public:
    SetVariableAssignmentContext(Set_statementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    std::vector<Variable_clauseContext *> variable_clause();
    Variable_clauseContext* variable_clause(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Set_statementContext* set_statement();

  class  Show_statementContext : public antlr4::ParserRuleContext {
  public:
    Show_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Show_statementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Show_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ShowCreateUserContext : public Show_statementContext {
  public:
    ShowCreateUserContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    User_nameContext *user_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCreateFullidobjContext : public Show_statementContext {
  public:
    ShowCreateFullidobjContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    Full_idContext *full_id();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *VIEW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowSlavestatusContext : public Show_statementContext {
  public:
    ShowSlavestatusContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowOpentablesContext : public Show_statementContext {
  public:
    ShowOpentablesContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *TABLES();
    Id_Context *id_();
    Show_filterContext *show_filter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowObjWithFilterContext : public Show_statementContext {
  public:
    ShowObjWithFilterContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *VARIABLES();
    Show_filterContext *show_filter();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowFromschemaFilterContext : public Show_statementContext {
  public:
    ShowFromschemaFilterContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TRIGGERS();
    Id_Context *id_();
    Show_filterContext *show_filter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FULL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowRoutinecodeContext : public Show_statementContext {
  public:
    ShowRoutinecodeContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CODE();
    Full_idContext *full_id();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowMasterlogsContext : public Show_statementContext {
  public:
    ShowMasterlogsContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCreateDbContext : public Show_statementContext {
  public:
    ShowCreateDbContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    If_not_existsContext *if_not_exists();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowEngineContext : public Show_statementContext {
  public:
    ShowEngineContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINE();
    Engine_nameContext *engine_name();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *MUTEX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowLogeventsContext : public Show_statementContext {
  public:
    ShowLogeventsContext(Show_statementContext *ctx);

    MySQLParser::Decimal_literalContext *from_pos = nullptr;
    MySQLParser::Decimal_literalContext *offset = nullptr;
    MySQLParser::Decimal_literalContext *row_count = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowGlobalinfoContext : public Show_statementContext {
  public:
    ShowGlobalinfoContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *CONTRIBUTORS();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *FULL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCountErrWarnContext : public Show_statementContext {
  public:
    ShowCountErrWarnContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowIndexesContext : public Show_statementContext {
  public:
    ShowIndexesContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *KEYS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    Id_Context *id_();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowGrantsContext : public Show_statementContext {
  public:
    ShowGrantsContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *FOR();
    User_nameContext *user_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowProfileContext : public Show_statementContext {
  public:
    ShowProfileContext(Show_statementContext *ctx);

    MySQLParser::Decimal_literalContext *offset = nullptr;
    MySQLParser::Decimal_literalContext *row_count = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROFILE();
    std::vector<Show_profile_typeContext *> show_profile_type();
    Show_profile_typeContext* show_profile_type(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *QUERY();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowColumnsContext : public Show_statementContext {
  public:
    ShowColumnsContext(Show_statementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *FIELDS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    antlr4::tree::TerminalNode *FULL();
    Id_Context *id_();
    Show_filterContext *show_filter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowErrWarnContext : public Show_statementContext {
  public:
    ShowErrWarnContext(Show_statementContext *ctx);

    MySQLParser::Decimal_literalContext *offset = nullptr;
    MySQLParser::Decimal_literalContext *row_count = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Show_statementContext* show_statement();

  class  Variable_clauseContext : public antlr4::ParserRuleContext {
  public:
    Variable_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();
    Id_Context *id_();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_clauseContext* variable_clause();

  class  Show_filterContext : public antlr4::ParserRuleContext {
  public:
    Show_filterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_filterContext* show_filter();

  class  Show_profile_typeContext : public antlr4::ParserRuleContext {
  public:
    Show_profile_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SWAPS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_profile_typeContext* show_profile_type();

  class  Binlog_statementContext : public antlr4::ParserRuleContext {
  public:
    Binlog_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binlog_statementContext* binlog_statement();

  class  Cache_index_statementContext : public antlr4::ParserRuleContext {
  public:
    Cache_index_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Tbl_index_listContext *> tbl_index_list();
    Tbl_index_listContext* tbl_index_list(size_t i);
    antlr4::tree::TerminalNode *IN();
    Id_Context *id_();
    antlr4::tree::TerminalNode *PARTITION();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cache_index_statementContext* cache_index_statement();

  class  Flush_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    std::vector<Flush_optionContext *> flush_option();
    Flush_optionContext* flush_option(size_t i);
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_statementContext* flush_statement();

  class  Kill_statementContext : public antlr4::ParserRuleContext {
  public:
    Kill_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *QUERY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Kill_statementContext* kill_statement();

  class  Load_index_into_cacheContext : public antlr4::ParserRuleContext {
  public:
    Load_index_into_cacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *CACHE();
    std::vector<Load_tbl_index_listContext *> load_tbl_index_list();
    Load_tbl_index_listContext* load_tbl_index_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Load_index_into_cacheContext* load_index_into_cache();

  class  Reset_statementContext : public antlr4::ParserRuleContext {
  public:
    Reset_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_statementContext* reset_statement();

  class  Shutdown_statementContext : public antlr4::ParserRuleContext {
  public:
    Shutdown_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHUTDOWN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shutdown_statementContext* shutdown_statement();

  class  Tbl_index_listContext : public antlr4::ParserRuleContext {
  public:
    Tbl_index_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    Id_listContext *id_list();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tbl_index_listContext* tbl_index_list();

  class  Flush_optionContext : public antlr4::ParserRuleContext {
  public:
    Flush_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DES_KEY_FILE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *SLOW();
    Channel_optionContext *channel_option();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    Table_listContext *table_list();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_optionContext* flush_option();

  class  Load_tbl_index_listContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Id_listContext *partition_list = nullptr;;
    MySQLParser::Id_listContext *index_list = nullptr;;
    Load_tbl_index_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *LEAVES();
    std::vector<Id_listContext *> id_list();
    Id_listContext* id_list(size_t i);
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Load_tbl_index_listContext* load_tbl_index_list();

  class  Simple_describe_statementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Id_Context *colname = nullptr;;
    antlr4::Token *col_wildcard = nullptr;;
    Simple_describe_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_describe_statementContext* simple_describe_statement();

  class  Full_describe_statementContext : public antlr4::ParserRuleContext {
  public:
    Full_describe_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Describe_object_clauseContext *describe_object_clause();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *JSON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_describe_statementContext* full_describe_statement();

  class  Help_statementContext : public antlr4::ParserRuleContext {
  public:
    Help_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Help_statementContext* help_statement();

  class  Use_statementContext : public antlr4::ParserRuleContext {
  public:
    Use_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_statementContext* use_statement();

  class  Describe_object_clauseContext : public antlr4::ParserRuleContext {
  public:
    Describe_object_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Describe_object_clauseContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Describe_object_clauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConnectionDescObjContext : public Describe_object_clauseContext {
  public:
    ConnectionDescObjContext(Describe_object_clauseContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CONNECTION();
    Id_Context *id_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DescstmtDescObjContext : public Describe_object_clauseContext {
  public:
    DescstmtDescObjContext(Describe_object_clauseContext *ctx);

    Select_statementContext *select_statement();
    Delete_statementContext *delete_statement();
    Insert_statementContext *insert_statement();
    Replace_statementContext *replace_statement();
    Update_statementContext *update_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Describe_object_clauseContext* describe_object_clause();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Full_idContext : public antlr4::ParserRuleContext {
  public:
    Full_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_idContext* full_id();

  class  Full_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Full_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    std::vector<Dot_ext_idContext *> dot_ext_id();
    Dot_ext_idContext* dot_ext_id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_column_nameContext* full_column_name();

  class  Index_col_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_col_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Decimal_literalContext *decimal_literal();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_col_nameContext* index_col_name();

  class  User_nameContext : public antlr4::ParserRuleContext {
  public:
    User_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_USER_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_nameContext* user_name();

  class  Mysql_variableContext : public antlr4::ParserRuleContext {
  public:
    Mysql_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mysql_variableContext* mysql_variable();

  class  Charset_nameContext : public antlr4::ParserRuleContext {
  public:
    Charset_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    Charset_name_baseContext *charset_name_base();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Charset_nameContext* charset_name();

  class  Collation_nameContext : public antlr4::ParserRuleContext {
  public:
    Collation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collation_nameContext* collation_name();

  class  Engine_nameContext : public antlr4::ParserRuleContext {
  public:
    Engine_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *BLACKHOLE();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MRG_MYISAM();
    antlr4::tree::TerminalNode *MYISAM();
    antlr4::tree::TerminalNode *NDB();
    antlr4::tree::TerminalNode *NDBCLUSTER();
    antlr4::tree::TerminalNode *PERFOMANCE_SCHEMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Engine_nameContext* engine_name();

  class  Uuid_setContext : public antlr4::ParserRuleContext {
  public:
    Uuid_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uuid_setContext* uuid_set();

  class  XidContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::Xid_string_idContext *xid_gtrid = nullptr;;
    MySQLParser::Xid_string_idContext *xid_bqual = nullptr;;
    MySQLParser::Decimal_literalContext *xid_formatID = nullptr;;
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Xid_string_idContext *> xid_string_id();
    Xid_string_idContext* xid_string_id(size_t i);
    Decimal_literalContext *decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XidContext* xid();

  class  Xid_string_idContext : public antlr4::ParserRuleContext {
  public:
    Xid_string_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    std::vector<antlr4::tree::TerminalNode *> HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode* HEXADECIMAL_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xid_string_idContext* xid_string_id();

  class  Auth_pluginContext : public antlr4::ParserRuleContext {
  public:
    Auth_pluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Auth_pluginContext* auth_plugin();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_idContext *simple_id();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_Context* id_();

  class  Simple_idContext : public antlr4::ParserRuleContext {
  public:
    Simple_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Charset_name_baseContext *charset_name_base();
    Transaction_level_baseContext *transaction_level_base();
    Engine_nameContext *engine_name();
    Privileges_baseContext *privileges_base();
    Interval_type_baseContext *interval_type_base();
    Data_type_baseContext *data_type_base();
    Keywords_can_be_idContext *keywords_can_be_id();
    Function_name_baseContext *function_name_base();
    Spatial_data_typeContext *spatial_data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_idContext* simple_id();

  class  Dot_ext_idContext : public antlr4::ParserRuleContext {
  public:
    Dot_ext_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dot_ext_idContext* dot_ext_id();

  class  Decimal_literalContext : public antlr4::ParserRuleContext {
  public:
    Decimal_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_literalContext* decimal_literal();

  class  Filesize_literalContext : public antlr4::ParserRuleContext {
  public:
    Filesize_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESIZE_LITERAL();
    Decimal_literalContext *decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filesize_literalContext* filesize_literal();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *START_NATIONAL_STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_literalContext* string_literal();

  class  Boolean_literalContext : public antlr4::ParserRuleContext {
  public:
    Boolean_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_literalContext* boolean_literal();

  class  Hexadecimal_literalContext : public antlr4::ParserRuleContext {
  public:
    Hexadecimal_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hexadecimal_literalContext* hexadecimal_literal();

  class  Null_notnullContext : public antlr4::ParserRuleContext {
  public:
    Null_notnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTNULL();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_notnullContext* null_notnull();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_literalContext *string_literal();
    Decimal_literalContext *decimal_literal();
    Hexadecimal_literalContext *hexadecimal_literal();
    Boolean_literalContext *boolean_literal();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    antlr4::tree::TerminalNode *NOTNULL();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Data_typeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Data_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpatialDatatypeContext : public Data_typeContext {
  public:
    SpatialDatatypeContext(Data_typeContext *ctx);

    Spatial_data_typeContext *spatial_data_type();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DimensionDatatypeContext : public Data_typeContext {
  public:
    DimensionDatatypeContext(Data_typeContext *ctx);

    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *MEDIUMINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BIGINT();
    Length_one_dimensionContext *length_one_dimension();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *ZEROFILL();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *FLOAT();
    Length_two_dimensionContext *length_two_dimension();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *NUMERIC();
    Length_two_optional_dimensionContext *length_two_optional_dimension();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARBINARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CollectCharDatatypeContext : public Data_typeContext {
  public:
    CollectCharDatatypeContext(Data_typeContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *CHARACTER();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharDatatypeContext : public Data_typeContext {
  public:
    CharDatatypeContext(Data_typeContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *TINYTEXT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *MEDIUMTEXT();
    antlr4::tree::TerminalNode *LONGTEXT();
    Length_one_dimensionContext *length_one_dimension();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *COLLATE();
    Collation_nameContext *collation_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleDatatypeContext : public Data_typeContext {
  public:
    SimpleDatatypeContext(Data_typeContext *ctx);

    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *TINYBLOB();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *MEDIUMBLOB();
    antlr4::tree::TerminalNode *LONGBLOB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Data_typeContext* data_type();

  class  Data_type_to_convertContext : public antlr4::ParserRuleContext {
  public:
    Data_type_to_convertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
    Length_one_dimensionContext *length_one_dimension();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *DECIMAL();
    Length_two_dimensionContext *length_two_dimension();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_to_convertContext* data_type_to_convert();

  class  Spatial_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Spatial_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POLYGON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Spatial_data_typeContext* spatial_data_type();

  class  Length_one_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Length_one_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decimal_literalContext *decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Length_one_dimensionContext* length_one_dimension();

  class  Length_two_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Length_two_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Length_two_dimensionContext* length_two_dimension();

  class  Length_two_optional_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Length_two_optional_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Length_two_optional_dimensionContext* length_two_optional_dimension();

  class  Id_listContext : public antlr4::ParserRuleContext {
  public:
    Id_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_listContext* id_list();

  class  Table_listContext : public antlr4::ParserRuleContext {
  public:
    Table_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_listContext* table_list();

  class  Table_pair_listContext : public antlr4::ParserRuleContext {
  public:
    Table_pair_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_pair_listContext* table_pair_list();

  class  Index_colname_listContext : public antlr4::ParserRuleContext {
  public:
    Index_colname_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Index_col_nameContext *> index_col_name();
    Index_col_nameContext* index_col_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_colname_listContext* index_colname_list();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  Constant_listContext : public antlr4::ParserRuleContext {
  public:
    Constant_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_listContext* constant_list();

  class  Simple_string_listContext : public antlr4::ParserRuleContext {
  public:
    Simple_string_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_string_listContext* simple_string_list();

  class  User_var_listContext : public antlr4::ParserRuleContext {
  public:
    User_var_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_var_listContext* user_var_list();

  class  Default_valueContext : public antlr4::ParserRuleContext {
  public:
    Default_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_valueContext* default_value();

  class  If_existsContext : public antlr4::ParserRuleContext {
  public:
    If_existsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_existsContext* if_exists();

  class  If_not_existsContext : public antlr4::ParserRuleContext {
  public:
    If_not_existsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_not_existsContext* if_not_exists();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Function_callContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Function_callContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecificFunctionCallContext : public Function_callContext {
  public:
    SpecificFunctionCallContext(Function_callContext *ctx);

    Specific_function_callContext *specific_function_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UdfFunctionCallContext : public Function_callContext {
  public:
    UdfFunctionCallContext(Function_callContext *ctx);

    Id_Context *id_();
    Dot_ext_idContext *dot_ext_id();
    Function_argsContext *function_args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AggregateFunctionCallContext : public Function_callContext {
  public:
    AggregateFunctionCallContext(Function_callContext *ctx);

    Aggregate_windowed_functionContext *aggregate_windowed_function();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ScalarFunctionCallContext : public Function_callContext {
  public:
    ScalarFunctionCallContext(Function_callContext *ctx);

    Scalar_function_nameContext *scalar_function_name();
    Function_argsContext *function_args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Function_callContext* function_call();

  class  Specific_function_callContext : public antlr4::ParserRuleContext {
  public:
    Specific_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Specific_function_callContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Specific_function_callContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValuesFCallContext : public Specific_function_callContext {
  public:
    ValuesFCallContext(Specific_function_callContext *ctx);

    antlr4::tree::TerminalNode *VALUES();
    Full_column_nameContext *full_column_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExtractFCallContext : public Specific_function_callContext {
  public:
    ExtractFCallContext(Specific_function_callContext *ctx);

    MySQLParser::String_literalContext *fstr = nullptr;
    MySQLParser::ExpressionContext *fexpr = nullptr;
    antlr4::tree::TerminalNode *EXTRACT();
    Interval_typeContext *interval_type();
    antlr4::tree::TerminalNode *FROM();
    String_literalContext *string_literal();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TrimFCallContext : public Specific_function_callContext {
  public:
    TrimFCallContext(Specific_function_callContext *ctx);

    MySQLParser::String_literalContext *fstr = nullptr;
    MySQLParser::ExpressionContext *fexpr = nullptr;
    MySQLParser::String_literalContext *sstr = nullptr;
    MySQLParser::ExpressionContext *sexpr = nullptr;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();
    std::vector<String_literalContext *> string_literal();
    String_literalContext* string_literal(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GetFormatFCallContext : public Specific_function_callContext {
  public:
    GetFormatFCallContext(Specific_function_callContext *ctx);

    antlr4::tree::TerminalNode *GET_FORMAT();
    String_literalContext *string_literal();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *DATETIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConvertDataTypeFCallContext : public Specific_function_callContext {
  public:
    ConvertDataTypeFCallContext(Specific_function_callContext *ctx);

    antlr4::tree::TerminalNode *CONVERT();
    ExpressionContext *expression();
    Data_type_to_convertContext *data_type_to_convert();
    antlr4::tree::TerminalNode *USING();
    Charset_nameContext *charset_name();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WeightFCallContext : public Specific_function_callContext {
  public:
    WeightFCallContext(Specific_function_callContext *ctx);

    antlr4::tree::TerminalNode *WEIGHT_STRING();
    String_literalContext *string_literal();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    Decimal_literalContext *decimal_literal();
    Levels_in_weight_stringContext *levels_in_weight_string();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BINARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleSpecificFCallContext : public Specific_function_callContext {
  public:
    SimpleSpecificFCallContext(Specific_function_callContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LOCALTIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CaseFCallContext : public Specific_function_callContext {
  public:
    CaseFCallContext(Specific_function_callContext *ctx);

    MySQLParser::Function_argContext *function_argContext = nullptr;
    std::vector<Function_argContext *> condarg;
    std::vector<Function_argContext *> resarg;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<Function_argContext *> function_arg();
    Function_argContext* function_arg(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PositionFCallContext : public Specific_function_callContext {
  public:
    PositionFCallContext(Specific_function_callContext *ctx);

    MySQLParser::String_literalContext *fstr = nullptr;
    MySQLParser::ExpressionContext *fexpr = nullptr;
    MySQLParser::String_literalContext *sstr = nullptr;
    MySQLParser::ExpressionContext *sexpr = nullptr;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *IN();
    std::vector<String_literalContext *> string_literal();
    String_literalContext* string_literal(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharFCallContext : public Specific_function_callContext {
  public:
    CharFCallContext(Specific_function_callContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    Function_argsContext *function_args();
    antlr4::tree::TerminalNode *USING();
    Charset_nameContext *charset_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstrFCallContext : public Specific_function_callContext {
  public:
    SubstrFCallContext(Specific_function_callContext *ctx);

    MySQLParser::ExpressionContext *fexpr = nullptr;
    MySQLParser::Decimal_literalContext *fdecimal = nullptr;
    MySQLParser::ExpressionContext *sexpr = nullptr;
    MySQLParser::Decimal_literalContext *sdecimal = nullptr;
    MySQLParser::ExpressionContext *texpr = nullptr;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    String_literalContext *string_literal();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    antlr4::tree::TerminalNode *FOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Specific_function_callContext* specific_function_call();

  class  Levels_in_weight_stringContext : public antlr4::ParserRuleContext {
  public:
    Levels_in_weight_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Levels_in_weight_stringContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Levels_in_weight_stringContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LevelWeightFRangeContext : public Levels_in_weight_stringContext {
  public:
    LevelWeightFRangeContext(Levels_in_weight_stringContext *ctx);

    MySQLParser::Decimal_literalContext *firstlevel = nullptr;
    MySQLParser::Decimal_literalContext *lastlevel = nullptr;
    antlr4::tree::TerminalNode *LEVEL();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LevelWeightFListContext : public Levels_in_weight_stringContext {
  public:
    LevelWeightFListContext(Levels_in_weight_stringContext *ctx);

    MySQLParser::Decimal_literalContext *firstlevel = nullptr;
    antlr4::Token *firstord = nullptr;
    MySQLParser::Decimal_literalContext *decimal_literalContext = nullptr;
    std::vector<Decimal_literalContext *> nextlevel;
    antlr4::Token *ascToken = nullptr;
    std::vector<antlr4::Token *> nextord;
    antlr4::Token *descToken = nullptr;
    antlr4::Token *reverseToken = nullptr;
    antlr4::Token *_tset12182 = nullptr;
    antlr4::tree::TerminalNode *LEVEL();
    std::vector<Decimal_literalContext *> decimal_literal();
    Decimal_literalContext* decimal_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REVERSE();
    antlr4::tree::TerminalNode* REVERSE(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Levels_in_weight_stringContext* levels_in_weight_string();

  class  Aggregate_windowed_functionContext : public antlr4::ParserRuleContext {
  public:
    Aggregate_windowed_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_argContext *function_arg();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *COUNT();
    Function_argsContext *function_args();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Order_by_expressionContext *> order_by_expression();
    Order_by_expressionContext* order_by_expression(size_t i);
    antlr4::tree::TerminalNode *SEPARATOR();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregate_windowed_functionContext* aggregate_windowed_function();

  class  Scalar_function_nameContext : public antlr4::ParserRuleContext {
  public:
    Scalar_function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_name_baseContext *function_name_base();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *CURDATE();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURTIME();
    antlr4::tree::TerminalNode *DATE_ADD();
    antlr4::tree::TerminalNode *DATE_SUB();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SYSDATE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *UTC_DATE();
    antlr4::tree::TerminalNode *UTC_TIME();
    antlr4::tree::TerminalNode *UTC_TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_function_nameContext* scalar_function_name();

  class  Function_argsContext : public antlr4::ParserRuleContext {
  public:
    Function_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<Full_column_nameContext *> full_column_name();
    Full_column_nameContext* full_column_name(size_t i);
    std::vector<Function_callContext *> function_call();
    Function_callContext* function_call(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_argsContext* function_args();

  class  Function_argContext : public antlr4::ParserRuleContext {
  public:
    Function_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    Full_column_nameContext *full_column_name();
    Function_callContext *function_call();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_argContext* function_arg();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IsExpressionContext : public ExpressionContext {
  public:
    IsExpressionContext(ExpressionContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExpressionContext : public ExpressionContext {
  public:
    NotExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalExpressionContext : public ExpressionContext {
  public:
    LogicalExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Logical_operatorContext *logical_operator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicateExpressionContext : public ExpressionContext {
  public:
    PredicateExpressionContext(ExpressionContext *ctx);

    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SoundsLikePredicateContext : public PredicateContext {
  public:
    SoundsLikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *LIKE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpressionAtomPredicateContext : public PredicateContext {
  public:
    ExpressionAtomPredicateContext(PredicateContext *ctx);

    Expression_atomContext *expression_atom();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InPredicateContext : public PredicateContext {
  public:
    InPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IN();
    SubqueryContext *subquery();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubqueryComparasionPredicateContext : public PredicateContext {
  public:
    SubqueryComparasionPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    Comparison_operatorContext *comparison_operator();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BetweenPredicateContext : public PredicateContext {
  public:
    BetweenPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryComparasionPredicateContext : public PredicateContext {
  public:
    BinaryComparasionPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    Comparison_operatorContext *comparison_operator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IsNullPredicateContext : public PredicateContext {
  public:
    IsNullPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    Null_notnullContext *null_notnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LikePredicateContext : public PredicateContext {
  public:
    LikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ESCAPE();
    String_literalContext *string_literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RegexpPredicateContext : public PredicateContext {
  public:
    RegexpPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateContext* predicate();
  PredicateContext* predicate(int precedence);
  class  Expression_atomContext : public antlr4::ParserRuleContext {
  public:
    Expression_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Expression_atomContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Expression_atomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryExpressionAtomContext : public Expression_atomContext {
  public:
    UnaryExpressionAtomContext(Expression_atomContext *ctx);

    Unary_operatorContext *unary_operator();
    Expression_atomContext *expression_atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExistsExpessionAtomContext : public Expression_atomContext {
  public:
    ExistsExpessionAtomContext(Expression_atomContext *ctx);

    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *EXISTS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantExpressionAtomContext : public Expression_atomContext {
  public:
    ConstantExpressionAtomContext(Expression_atomContext *ctx);

    ConstantContext *constant();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExpressionAtomContext : public Expression_atomContext {
  public:
    FunctionCallExpressionAtomContext(Expression_atomContext *ctx);

    Function_callContext *function_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MysqlVariableExpressionAtomContext : public Expression_atomContext {
  public:
    MysqlVariableExpressionAtomContext(Expression_atomContext *ctx);

    Mysql_variableContext *mysql_variable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryExpressionAtomContext : public Expression_atomContext {
  public:
    BinaryExpressionAtomContext(Expression_atomContext *ctx);

    antlr4::tree::TerminalNode *BINARY();
    Expression_atomContext *expression_atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FullColumnNameExpressionAtomContext : public Expression_atomContext {
  public:
    FullColumnNameExpressionAtomContext(Expression_atomContext *ctx);

    Full_column_nameContext *full_column_name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultExpressionAtomContext : public Expression_atomContext {
  public:
    DefaultExpressionAtomContext(Expression_atomContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitExpressionAtomContext : public Expression_atomContext {
  public:
    BitExpressionAtomContext(Expression_atomContext *ctx);

    std::vector<Expression_atomContext *> expression_atom();
    Expression_atomContext* expression_atom(size_t i);
    Bit_operatorContext *bit_operator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NestedExpressionAtomContext : public Expression_atomContext {
  public:
    NestedExpressionAtomContext(Expression_atomContext *ctx);

    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MathExpressionAtomContext : public Expression_atomContext {
  public:
    MathExpressionAtomContext(Expression_atomContext *ctx);

    std::vector<Expression_atomContext *> expression_atom();
    Expression_atomContext* expression_atom(size_t i);
    Math_operatorContext *math_operator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalExpressionAtomContext : public Expression_atomContext {
  public:
    IntervalExpressionAtomContext(Expression_atomContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL();
    ExpressionContext *expression();
    Interval_typeContext *interval_type();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Expression_atomContext* expression_atom();
  Expression_atomContext* expression_atom(int precedence);
  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  Logical_operatorContext : public antlr4::ParserRuleContext {
  public:
    Logical_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_operatorContext* logical_operator();

  class  Bit_operatorContext : public antlr4::ParserRuleContext {
  public:
    Bit_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_operatorContext* bit_operator();

  class  Math_operatorContext : public antlr4::ParserRuleContext {
  public:
    Math_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Math_operatorContext* math_operator();

  class  Charset_name_baseContext : public antlr4::ParserRuleContext {
  public:
    Charset_name_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARMSCII8();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *BIG5();
    antlr4::tree::TerminalNode *CP1250();
    antlr4::tree::TerminalNode *CP1251();
    antlr4::tree::TerminalNode *CP1256();
    antlr4::tree::TerminalNode *CP1257();
    antlr4::tree::TerminalNode *CP850();
    antlr4::tree::TerminalNode *CP852();
    antlr4::tree::TerminalNode *CP866();
    antlr4::tree::TerminalNode *CP932();
    antlr4::tree::TerminalNode *DEC8();
    antlr4::tree::TerminalNode *EUCJPMS();
    antlr4::tree::TerminalNode *EUCKR();
    antlr4::tree::TerminalNode *GB2312();
    antlr4::tree::TerminalNode *GBK();
    antlr4::tree::TerminalNode *GEOSTD8();
    antlr4::tree::TerminalNode *GREEK();
    antlr4::tree::TerminalNode *HEBREW();
    antlr4::tree::TerminalNode *HP8();
    antlr4::tree::TerminalNode *KEYBCS2();
    antlr4::tree::TerminalNode *KOI8R();
    antlr4::tree::TerminalNode *KOI8U();
    antlr4::tree::TerminalNode *LATIN1();
    antlr4::tree::TerminalNode *LATIN2();
    antlr4::tree::TerminalNode *LATIN5();
    antlr4::tree::TerminalNode *LATIN7();
    antlr4::tree::TerminalNode *MACCE();
    antlr4::tree::TerminalNode *MACROMAN();
    antlr4::tree::TerminalNode *SJIS();
    antlr4::tree::TerminalNode *SWE7();
    antlr4::tree::TerminalNode *TIS620();
    antlr4::tree::TerminalNode *UCS2();
    antlr4::tree::TerminalNode *UJIS();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTF16LE();
    antlr4::tree::TerminalNode *UTF32();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF8MB3();
    antlr4::tree::TerminalNode *UTF8MB4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Charset_name_baseContext* charset_name_base();

  class  Transaction_level_baseContext : public antlr4::ParserRuleContext {
  public:
    Transaction_level_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_level_baseContext* transaction_level_base();

  class  Privileges_baseContext : public antlr4::ParserRuleContext {
  public:
    Privileges_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *PRIVILEGES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privileges_baseContext* privileges_base();

  class  Interval_type_baseContext : public antlr4::ParserRuleContext {
  public:
    Interval_type_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MICROSECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_type_baseContext* interval_type_base();

  class  Data_type_baseContext : public antlr4::ParserRuleContext {
  public:
    Data_type_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_baseContext* data_type_base();

  class  Keywords_can_be_idContext : public antlr4::ParserRuleContext {
  public:
    Keywords_can_be_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTRIBUTORS();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENDS();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVEN();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *MUTEX();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OJ();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONING();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEDULE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *SUBJECT();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *XML();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keywords_can_be_idContext* keywords_can_be_id();

  class  Function_name_baseContext : public antlr4::ParserRuleContext {
  public:
    Function_name_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ADDDATE();
    antlr4::tree::TerminalNode *ADDTIME();
    antlr4::tree::TerminalNode *AES_DECRYPT();
    antlr4::tree::TerminalNode *AES_ENCRYPT();
    antlr4::tree::TerminalNode *AREA();
    antlr4::tree::TerminalNode *ASBINARY();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASTEXT();
    antlr4::tree::TerminalNode *ASWKB();
    antlr4::tree::TerminalNode *ASWKT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DECRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DERIVE();
    antlr4::tree::TerminalNode *ASYMMETRIC_ENCRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_SIGN();
    antlr4::tree::TerminalNode *ASYMMETRIC_VERIFY();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *BENCHMARK();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BIT_COUNT();
    antlr4::tree::TerminalNode *BIT_LENGTH();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTROID();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *COERCIBILITY();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *CONNECTION_ID();
    antlr4::tree::TerminalNode *CONV();
    antlr4::tree::TerminalNode *CONVERT_TZ();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *CRC32();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PRIV_KEY();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PUB_KEY();
    antlr4::tree::TerminalNode *CREATE_DH_PARAMETERS();
    antlr4::tree::TerminalNode *CREATE_DIGEST();
    antlr4::tree::TerminalNode *CROSSES();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *DATE_FORMAT();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYNAME();
    antlr4::tree::TerminalNode *DAYOFMONTH();
    antlr4::tree::TerminalNode *DAYOFWEEK();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DES_DECRYPT();
    antlr4::tree::TerminalNode *DES_ENCRYPT();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *DISJOINT();
    antlr4::tree::TerminalNode *ELT();
    antlr4::tree::TerminalNode *ENCODE();
    antlr4::tree::TerminalNode *ENCRYPT();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *ENVELOPE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPORT_SET();
    antlr4::tree::TerminalNode *EXTERIORRING();
    antlr4::tree::TerminalNode *EXTRACTVALUE();
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *FIND_IN_SET();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND_ROWS();
    antlr4::tree::TerminalNode *FROM_BASE64();
    antlr4::tree::TerminalNode *FROM_DAYS();
    antlr4::tree::TerminalNode *FROM_UNIXTIME();
    antlr4::tree::TerminalNode *GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYN();
    antlr4::tree::TerminalNode *GEOMETRYTYPE();
    antlr4::tree::TerminalNode *GEOMFROMTEXT();
    antlr4::tree::TerminalNode *GEOMFROMWKB();
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *GET_LOCK();
    antlr4::tree::TerminalNode *GLENGTH();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GTID_SUBSET();
    antlr4::tree::TerminalNode *GTID_SUBTRACT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *IFNULL();
    antlr4::tree::TerminalNode *INET6_ATON();
    antlr4::tree::TerminalNode *INET6_NTOA();
    antlr4::tree::TerminalNode *INET_ATON();
    antlr4::tree::TerminalNode *INET_NTOA();
    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *INTERIORRINGN();
    antlr4::tree::TerminalNode *INTERSECTS();
    antlr4::tree::TerminalNode *ISCLOSED();
    antlr4::tree::TerminalNode *ISEMPTY();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *ISSIMPLE();
    antlr4::tree::TerminalNode *IS_FREE_LOCK();
    antlr4::tree::TerminalNode *IS_IPV4();
    antlr4::tree::TerminalNode *IS_IPV4_COMPAT();
    antlr4::tree::TerminalNode *IS_IPV4_MAPPED();
    antlr4::tree::TerminalNode *IS_IPV6();
    antlr4::tree::TerminalNode *IS_USED_LOCK();
    antlr4::tree::TerminalNode *LAST_INSERT_ID();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LINEFROMTEXT();
    antlr4::tree::TerminalNode *LINEFROMWKB();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD_FILE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG2();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LPAD();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAKEDATE();
    antlr4::tree::TerminalNode *MAKETIME();
    antlr4::tree::TerminalNode *MAKE_SET();
    antlr4::tree::TerminalNode *MASTER_POS_WAIT();
    antlr4::tree::TerminalNode *MBRCONTAINS();
    antlr4::tree::TerminalNode *MBRDISJOINT();
    antlr4::tree::TerminalNode *MBREQUAL();
    antlr4::tree::TerminalNode *MBRINTERSECTS();
    antlr4::tree::TerminalNode *MBROVERLAPS();
    antlr4::tree::TerminalNode *MBRTOUCHES();
    antlr4::tree::TerminalNode *MBRWITHIN();
    antlr4::tree::TerminalNode *MD5();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MLINEFROMTEXT();
    antlr4::tree::TerminalNode *MLINEFROMWKB();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHNAME();
    antlr4::tree::TerminalNode *MPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MPOINTFROMWKB();
    antlr4::tree::TerminalNode *MPOLYFROMTEXT();
    antlr4::tree::TerminalNode *MPOLYFROMWKB();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMWKB();
    antlr4::tree::TerminalNode *NAME_CONST();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NUMGEOMETRIES();
    antlr4::tree::TerminalNode *NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *NUMPOINTS();
    antlr4::tree::TerminalNode *OCT();
    antlr4::tree::TerminalNode *OCTET_LENGTH();
    antlr4::tree::TerminalNode *ORD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *PERIOD_ADD();
    antlr4::tree::TerminalNode *PERIOD_DIFF();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POINTFROMTEXT();
    antlr4::tree::TerminalNode *POINTFROMWKB();
    antlr4::tree::TerminalNode *POINTN();
    antlr4::tree::TerminalNode *POLYFROMTEXT();
    antlr4::tree::TerminalNode *POLYFROMWKB();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *POLYGONFROMWKB();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *RANDOM_BYTES();
    antlr4::tree::TerminalNode *RELEASE_LOCK();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RPAD();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SEC_TO_TIME();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SHA();
    antlr4::tree::TerminalNode *SHA1();
    antlr4::tree::TerminalNode *SHA2();
    antlr4::tree::TerminalNode *SIGN();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SLEEP();
    antlr4::tree::TerminalNode *SOUNDEX();
    antlr4::tree::TerminalNode *SQL_THREAD_WAIT_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *SRID();
    antlr4::tree::TerminalNode *STARTPOINT();
    antlr4::tree::TerminalNode *STRCMP();
    antlr4::tree::TerminalNode *STR_TO_DATE();
    antlr4::tree::TerminalNode *ST_AREA();
    antlr4::tree::TerminalNode *ST_ASBINARY();
    antlr4::tree::TerminalNode *ST_ASTEXT();
    antlr4::tree::TerminalNode *ST_ASWKB();
    antlr4::tree::TerminalNode *ST_ASWKT();
    antlr4::tree::TerminalNode *ST_BUFFER();
    antlr4::tree::TerminalNode *ST_CENTROID();
    antlr4::tree::TerminalNode *ST_CONTAINS();
    antlr4::tree::TerminalNode *ST_CROSSES();
    antlr4::tree::TerminalNode *ST_DIFFERENCE();
    antlr4::tree::TerminalNode *ST_DIMENSION();
    antlr4::tree::TerminalNode *ST_DISJOINT();
    antlr4::tree::TerminalNode *ST_DISTANCE();
    antlr4::tree::TerminalNode *ST_ENDPOINT();
    antlr4::tree::TerminalNode *ST_ENVELOPE();
    antlr4::tree::TerminalNode *ST_EQUALS();
    antlr4::tree::TerminalNode *ST_EXTERIORRING();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYN();
    antlr4::tree::TerminalNode *ST_GEOMETRYTYPE();
    antlr4::tree::TerminalNode *ST_GEOMFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMFROMWKB();
    antlr4::tree::TerminalNode *ST_INTERIORRINGN();
    antlr4::tree::TerminalNode *ST_INTERSECTION();
    antlr4::tree::TerminalNode *ST_INTERSECTS();
    antlr4::tree::TerminalNode *ST_ISCLOSED();
    antlr4::tree::TerminalNode *ST_ISEMPTY();
    antlr4::tree::TerminalNode *ST_ISSIMPLE();
    antlr4::tree::TerminalNode *ST_LINEFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINEFROMWKB();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *ST_NUMGEOMETRIES();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRING();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *ST_NUMPOINTS();
    antlr4::tree::TerminalNode *ST_OVERLAPS();
    antlr4::tree::TerminalNode *ST_POINTFROMTEXT();
    antlr4::tree::TerminalNode *ST_POINTFROMWKB();
    antlr4::tree::TerminalNode *ST_POINTN();
    antlr4::tree::TerminalNode *ST_POLYFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYFROMWKB();
    antlr4::tree::TerminalNode *ST_POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYGONFROMWKB();
    antlr4::tree::TerminalNode *ST_SRID();
    antlr4::tree::TerminalNode *ST_STARTPOINT();
    antlr4::tree::TerminalNode *ST_SYMDIFFERENCE();
    antlr4::tree::TerminalNode *ST_TOUCHES();
    antlr4::tree::TerminalNode *ST_UNION();
    antlr4::tree::TerminalNode *ST_WITHIN();
    antlr4::tree::TerminalNode *ST_X();
    antlr4::tree::TerminalNode *ST_Y();
    antlr4::tree::TerminalNode *SUBDATE();
    antlr4::tree::TerminalNode *SUBSTRING_INDEX();
    antlr4::tree::TerminalNode *SUBTIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEDIFF();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMESTAMPADD();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF();
    antlr4::tree::TerminalNode *TIME_FORMAT();
    antlr4::tree::TerminalNode *TIME_TO_SEC();
    antlr4::tree::TerminalNode *TOUCHES();
    antlr4::tree::TerminalNode *TO_BASE64();
    antlr4::tree::TerminalNode *TO_DAYS();
    antlr4::tree::TerminalNode *TO_SECONDS();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNCOMPRESS();
    antlr4::tree::TerminalNode *UNCOMPRESSED_LENGTH();
    antlr4::tree::TerminalNode *UNHEX();
    antlr4::tree::TerminalNode *UNIX_TIMESTAMP();
    antlr4::tree::TerminalNode *UPDATEXML();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UUID();
    antlr4::tree::TerminalNode *UUID_SHORT();
    antlr4::tree::TerminalNode *VALIDATE_PASSWORD_STRENGTH();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WEEKDAY();
    antlr4::tree::TerminalNode *WEEKOFYEAR();
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARWEEK();
    antlr4::tree::TerminalNode *Y_FUNCTION();
    antlr4::tree::TerminalNode *X_FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_name_baseContext* function_name_base();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool expression_atomSempred(Expression_atomContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace parser
