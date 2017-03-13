-- file: SNMPv2-MIB.inc

-- Modules referenced by module SNMPv2-MIB
#condInclude "SNMPv2-SMI.inc"
#condInclude "SNMPv2-TC.inc"
#condInclude "SNMPv2-CONF.inc"
#condInclude "RFC1213-MIB.inc"

-- MIB module
#pushOpt
-- Remove strict checking
-- Options:
--   C - check size/range present
--   W - don't allow size/range for items in a sequence
--   7 - restrict INTEGER values below 2G-1
--   R - check (in V1) that INDEX objs are read-only
--   S - require (in V2) that IMPORTS be specified for items in compliances
--   B - strong checking for size/range of items in index clause
#removeOpt "C W 7 R S B"

-- Loosen checking
-- Options:
--   4 - allow non-standard access for objects
--   K - allow (in v1) zero valued enums
--   O - allow (in v2) hyphens in labels for enumerated values
--   P - allow (in v2) hyphens in descriptors(identifiers)
--   T - no check (in v2) of proper access for items in groups
--   M - no check (in v2) that all NTs and accessible OTs are in a group
--   F - allow integer/integer32 index items without a range
--   G - allow unused IMPORTS and textual conventions
--   N - no check (in v2) of access of objects in notifications
--   I - use (in v1) the v2 rules for checking ACCESS of index items
--#addOpt "4 K O P T M F G N I"
#addOpt "M" -- no error if not all object/notificaiton-types are in a group

-- the following, defined in RFC1213-MIB, are redefined in SNMPv2-MIB
#unregister RFC1213-MIB sysDescr
#unregister RFC1213-MIB sysObjectID
#unregister RFC1213-MIB sysUpTime
#unregister RFC1213-MIB sysContact
#unregister RFC1213-MIB sysName
#unregister RFC1213-MIB sysLocation
#unregister RFC1213-MIB sysServices
#unregister RFC1213-MIB snmpInPkts
#unregister RFC1213-MIB snmpInBadVersions
#unregister RFC1213-MIB snmpInBadCommunityNames
#unregister RFC1213-MIB snmpInBadCommunityUses
#unregister RFC1213-MIB snmpInASNParseErrs
#unregister RFC1213-MIB snmpEnableAuthenTraps
#unregister RFC1213-MIB snmpOutPkts
#unregister RFC1213-MIB snmpInTooBigs
#unregister RFC1213-MIB snmpInNoSuchNames
#unregister RFC1213-MIB snmpInBadValues
#unregister RFC1213-MIB snmpInReadOnlys
#unregister RFC1213-MIB snmpInGenErrs
#unregister RFC1213-MIB snmpInTotalReqVars
#unregister RFC1213-MIB snmpInTotalSetVars
#unregister RFC1213-MIB snmpInGetRequests
#unregister RFC1213-MIB snmpInGetNexts
#unregister RFC1213-MIB snmpInSetRequests
#unregister RFC1213-MIB snmpInGetResponses
#unregister RFC1213-MIB snmpInTraps
#unregister RFC1213-MIB snmpOutTooBigs
#unregister RFC1213-MIB snmpOutNoSuchNames
#unregister RFC1213-MIB snmpOutBadValues
#unregister RFC1213-MIB snmpOutGenErrs
#unregister RFC1213-MIB snmpOutGetRequests
#unregister RFC1213-MIB snmpOutGetNexts
#unregister RFC1213-MIB snmpOutSetRequests
#unregister RFC1213-MIB snmpOutGetResponses
#unregister RFC1213-MIB snmpOutTraps

#condInclude "SNMPv2-MIB.my"
#condExcludeModule SNMPv2-MIB 0
#popOpt
