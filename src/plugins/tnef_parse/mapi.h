#define MV_FLAG         0x1000          /* Multi-value flag */

#define PT_UNSPECIFIED  ((ULONG)  0)    /* (Reserved for interface use) type doesn't matter to caller */
#define PT_NULL         ((ULONG)  1)    /* NULL property value */
#define PT_I2           ((ULONG)  2)    /* Signed 16-bit value */
#define PT_LONG         ((ULONG)  3)    /* Signed 32-bit value */
#define PT_R4           ((ULONG)  4)    /* 4-byte floating point */
#define PT_DOUBLE       ((ULONG)  5)    /* Floating point double */
#define PT_CURRENCY     ((ULONG)  6)    /* Signed 64-bit int (decimal w/    4 digits right of decimal pt) */
#define PT_APPTIME      ((ULONG)  7)    /* Application time */
#define PT_ERROR        ((ULONG) 10)    /* 32-bit error value */
#define PT_BOOLEAN      ((ULONG) 11)    /* 16-bit boolean (non-zero true) */
#define PT_OBJECT       ((ULONG) 13)    /* Embedded object in a property */
#define PT_I8           ((ULONG) 20)    /* 8-byte signed integer */
#define PT_STRING8      ((ULONG) 30)    /* Null terminated 8-bit character string */
#define PT_UNICODE      ((ULONG) 31)    /* Null terminated Unicode string */
#define PT_SYSTIME      ((ULONG) 64)    /* FILETIME 64-bit int w/ number of 100ns periods since Jan 1,1601 */
#define PT_CLSID        ((ULONG) 72)    /* OLE GUID */
#define PT_BINARY       ((ULONG) 258)   /* Uninterpreted (counted byte array) */

#define PROP_TYPE_MASK          ((ULONG)0x0000FFFF) /* Mask for Property type */
#define PROP_TYPE(ulPropTag)    (((ULONG)(ulPropTag))&PROP_TYPE_MASK)
#define PROP_ID(ulPropTag)      (((ULONG)(ulPropTag))>>16)
#define PROP_TAG(ulPropType,ulPropID)   ((((ULONG)(ulPropID))<<16)|((ULONG)(ulPropType)))
#define PROP_ID_NULL            0
#define PROP_ID_INVALID         0xFFFF
#define PR_NULL                 PROP_TAG( PT_NULL, PROP_ID_NULL)

#define MAPI_UNDEFINED ((variableLength*)-1)
