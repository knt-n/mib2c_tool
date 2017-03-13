-- file: rfc.inc - MIBs that are in standards-track RFCs
--  (As of May 7, 1998)

-- Base SMIv1 mibs
--#condInclude "rfc1065.inc"   RFC1065-SMI (SMIv1 - obsoleted by RFC 1155)
--#condInclude "rfc1066.inc"   RFC1066-MIB (MIB-I - obsoleted by RFC 1213)
--#condInclude "rfc1156.inc"   RFC1156-MIB (MIB-I - obsoleted by RFC 1213)
--#condInclude "rfc1158.inc"   RFC1158-MIB (MIB-II - obsoleted by RFC 1213)

#condInclude "rfc1155.inc"  -- RFC1155-SMI (SMIv1)
#condInclude "rfc1212.inc"  -- RFC-1212 (OBJECT-TYPE macro)
#condInclude "rfc1215.inc"  -- RFC-1215 (TRAP-TYPE macro)
#condInclude "rfc1213.inc"  -- RFC1213-MIB (MIB-II)
#condInclude "rfc1215t.inc" -- RFC1215-TRAP (SNMP generic traps)

-- Other SMIv1 mibs
--#condInclude "rfc1227.inc"   SMUX-MIB (historical)
--#condInclude "rfc1229.inc"   RFC1229-MIB (IF extensions - obsoleted by RFC 1573)
--#condInclude "rfc1230.inc"   RFC1230-MIB (Token Bus - historical)
--#condInclude "rfc1231.inc"   RFC1231-MIB (Token Ring - obsoleted by RFC 1748)
--#condInclude "rfc1232.inc"   RFC1232-MIB (DS1 - obsoleted by RFC 1406)
--#condInclude "rfc1233.inc"   RFC1233-MIB (DS3 - obsoleted by RFC 1407)
--#condInclude "rfc1238.inc"   CLNS-MIB (experimental)
--#condInclude "rfc1243.inc"   RFC1243-MIB (AppleTalk - obsoleted by RFC 1742)
--#condInclude "rfc1248.inc"   RFC1248-MIB (OSPF - obsoleted by RFC 1253)
--#condInclude "rfc1252.inc"   RFC1252-MIB (OSPF - obsoleted by RFC 1253)
--#condInclude "rfc1253.inc"   RFC1253-MIB (OSPF - obsoleted by RFC 1850)
--#condInclude "rfc1269.inc"   RFC1269-MIB (BGP - obsoleted by RFC 1657)
--#condInclude "rfc1271.inc"   RFC1271-MIB (RMON - obsoleted by RFC 1757)
--#condInclude "rmontrap.inc"  DRAFT-RMON-TRAP-MIB (obsoleted by RFC 1757)
--#condInclude "rfc1284.inc"   RFC1284-MIB (Ether-like - obsoleted by RFC 1398)
#condInclude "rfc1285.inc"  -- RFC1285-MIB (FDDI SMT 6.2)
--#condInclude "rfc1286.inc"   RFC1286-MIB (Bridge - obsoleted by RFC 1493 & RFC 1525)
--#condInclude "rfc1289.inc"   RFC1289-phivMIB (DECnet Phase IV - obsoleted by RFC 1559)
--#condInclude "rfc1304.inc"   RFC1304-MIB (SIP - obsoleted by RFC 1694)
--#condInclude "rfc1315.inc"   RFC1315-MIB (Frame Relay DTE - obsolete by RFC 2115)
--#condInclude "rfc1316.inc"   RFC1316-MIB (Character Device - obsoleted by RFC 1658)
--#condInclude "rfc1317.inc"   RFC1317-MIB (RS-232 - obsoleted by RFC 1317)
--#condInclude "rfc1318.inc"   RFC1318-MIB (Parallel Printer - obsoleted by RFC 1660)
--#condInclude "rfc1353.inc"   RFC1353-MIB (Party - obsolete)
--#condInclude "rfc1354.inc"   RFC1354-MIB (IP forwarding table - obsoleted by RFC 2096)
--#condInclude "rfc1368.inc"   SNMP-REPEATER-MIB (802.3 Repeater - obsoleted by RFC 1516)
#condInclude "rfc1381.inc"  -- RFC1381-MIB (X.25 LAPB)
#condInclude "rfc1382.inc"  -- RFC1382-MIB (X.25 Packet Layer)
--#condInclude "rfc1389.inc"   RFC1389-MIB (RIPv2 - obsoleted by RFC 1724)
--#condInclude "rfc1398.inc"   RFC1398-MIB (Ether-like - obsoleted by RFC 1623)
#condInclude "rfc1406.inc"  -- RFC1406-MIB (DS1/E1)
#condInclude "rfc1407.inc"  -- RFC1407-MIB (DS3/E3)
#condInclude "rfc1414.inc"  -- RFC1414-MIB (Identification)
#condInclude "rfc1461.inc"  -- MIOX25-MIB (Multiprotocol Interconnect over X.25)
#condInclude "rfc1471.inc"  -- PPP-LCP-MIB
#condInclude "rfc1472.inc"  -- PPP-SEC-MIB (PPP Security)
#condInclude "rfc1473.inc"  -- PPP-IP-NCP-MIB
#condInclude "rfc1474.inc"  -- PPP-BRIDGE-NCP-MIB
#condInclude "rfc1493.inc"  -- BRIDGE-MIB
#condInclude "rfc1512.inc"  -- FDDI-SMT73-MIB
#condInclude "rfc1513.inc"  -- TOKEN-RING-RMON-MIB
#condInclude "rfc1514.inc"  -- HOST-RESOURCES-MIB
--#condInclude "rfc1515.inc"   MAU-MIB (obsoleted by RFC 2239)
--#condInclude "rfc1516.inc"   SNMP-REPEATER-MIB (obsoleted by RFC 2108)
#condInclude "rfc1525.inc"  -- SOURCE-ROUTING-MIB
#condInclude "rfc1559.inc"  -- DECNET-PHIV-MIB
--#condInclude "rfc1623.inc"   EtherLike-MIB (obsoleted by RFC 1643)
#condInclude "rfc1643.inc"  -- EtherLike-MIB (SMIv2 version is RFC 1650)
#condInclude "rfc1742.inc"  -- APPLETALK-MIB
#condInclude "rfc1757.inc"  -- RMON-MIB
--#condInclude "rfc1792.inc"   TCPIPX-MIB (experimental)

-- Base SMIv2 MIBs
--#condInclude "rfc1442.inc"   SNMPv2-SMI (obsoleted by RFC 1902)
--#condInclude "rfc1443.inc"   SNMPv2-TC (obsoleted by RFC 1903)
--#condInclude "rfc1444.inc"   SNMPv2-CONF (obsoleted by RFC 1904)
#condInclude "rfc1902.inc"  -- SNMPv2-SMI (SMIv2)
#condInclude "rfc1903.inc"  -- SNMPv2-TC (SMIv2 TC macro and base TCs)
#condInclude "rfc1904.inc"  -- SNMPv2-CONF (SMIv2 Conformance macros)

--#condInclude "rfc1447.inc"   SNMPv2-PARTY-MIB (historical)
--#condInclude "rfc1449.inc"   SNMPv2-TM (obsoleted by RFC 1906)
--#condInclude "rfc1450.inc"   SNMPv2-MIB (obsoleted by RFC 1907)
--#condInclude "rfc1451.inc"   SNMPv2-M2M-MIB (historical)

#condInclude "rfc1906.inc" -- SNMPv2-TM (transport mappings)
#condInclude "rfc1907.inc" -- SNMPv2-MIB

-- Other SMIv2 MIBs
--#condInclude "rfc1565.inc"   APPLICATION-MIB (obsoleted by RFC 2248)
--#condInclude "rfc1566.inc"   MTA-MIB (obsoleted by RFC 2249)
#condInclude "rfc1567.inc"  -- DSA-MIB

#condInclude "rfc1573a.inc" -- IANAifType-MIB
--#condInclude "rfc1573b.inc"  IF-MIB (obsoleted by RFC 2233)

#condInclude "rfc1595.inc"  -- SONET-MIB
--#condInclude "rfc1596.inc"   FRNETSERV-MIB (obsoleted by RFC 1604)
#condInclude "rfc1604.inc"  -- FRNETSERV-MIB (frame relay server)
#condInclude "rfc1611.inc"  -- DNS-SERVER-MIB
#condInclude "rfc1612.inc"  -- DNS-RESOLVER-MIB
#condInclude "rfc1628.inc"  -- UPS-MIB
--#condInclude "rfc1650.inc"   EtherLike-MIB (SMIv1 version is RFC 1643)
#condInclude "rfc1657.inc"  -- BGP4-MIB
#condInclude "rfc1658.inc"  -- CHARACTER-MIB
#condInclude "rfc1659.inc"  -- RS-232-MIB
#condInclude "rfc1660.inc"  -- PARALLEL-MIB
--#condInclude "rfc1665.inc"   SNA-NAU-MIB (obsoleted by RFC 1666)
#condInclude "rfc1666.inc"  -- SNA-NAU-MIB 
#condInclude "rfc1694.inc"  -- SIP-MIB 
#condInclude "rfc1695.inc"  -- ATM-MIB
#condInclude "rfc1696.inc"  -- Modem-MIB
#condInclude "rfc1697.inc"  -- RDBMS-MIB
#condInclude "rfc1724.inc"  -- RIPv2-MIB
--#condInclude "rfc1743.inc"   TOKENRING-MIB (obsoleted by RFC 1748)
#condInclude "rfc1747.inc"  -- SNA-SDLC-MIB
#condInclude "rfc1748.inc"  -- TOKENRING-MIB
#condInclude "rfc1749.inc"  -- TOKENRING-STATION-SR-MIB
#condInclude "rfc1759.inc"  -- Printer-MIB
#condInclude "rfc1850a.inc" -- OSPF-MIB
#condInclude "rfc1850b.inc" -- OSPF-TRAP-MIB

--#condInclude "rfc1910.inc"   SNMPv2-USEC-MIB (experimental)
#condInclude "rfc2006.inc"  -- MIP-MIB
#condInclude "rfc2011.inc"  -- IP-MIB
#condInclude "rfc2012.inc"  -- TCP-MIB
#condInclude "rfc2013.inc"  -- UDP-MIB
#condInclude "rfc2020.inc"  -- DOT12-IF-MIB
#condInclude "rfc2021.inc"  -- RMON2-MIB
#condinclude "rfc2024.inc"  -- DLSW-MIB
#condInclude "rfc2037.inc"  -- ENTITY-MIB
#condInclude "rfc2051.inc"  -- APPC-MIB
--#condInclude "rfc2064.inc"   FLOW-METER-MIB (experimental)
#condInclude "rfc2096.inc"  -- IP-FORWARD-MIB
#condInclude "rfc2108.inc"  -- SNMP-REPEATER-MIB
#condInclude "rfc2115.inc"  -- FRAME-RELAY-DTE-MIB
#condInclude "rfc2127.inc"  -- ISDN-MIB
#condInclude "rfc2128.inc"  -- DIAL-CONTROL-MIB
#condInclude "rfc2155.inc"  -- APPN-MIB

#condinclude "rfc2206.inc"  -- RSVP-MIB
#condinclude "rfc2213.inc"  -- INTEGRATED-SERVICES-MIB
#condinclude "rfc2214.inc"  -- INTEGRATED-SERVICES-GUARANTEED-MIB
#condinclude "rfc2232.inc"  -- APPN-DLUR-MIB
#condinclude "rfc2233.inc"  -- IF-MIB
#condinclude "rfc2238.inc"  -- HPR-MIB
#condinclude "rfc2239.inc"  -- MAU-MIB
#condinclude "rfc2248.inc"  -- NETWORK-SERVICES-MIB
#condinclude "rfc2249.inc"  -- MTA-MIB

--#condinclude "rfc2261.inc"   SNMP-FRAMEWORK-MIB (Obsoleted by RFC 2271)
--#condinclude "rfc2262.inc"   SNMP-MPD-MIB (Obsoleted by RFC 2272)
--#condinclude "rfc2263a.inc"  SNMP-TARGET-MIB (Obsoleted by RFC 2273)
--#condinclude "rfc2263b.inc"  SNMP-NOTIFICATION-MIB (Obsoleted by RFC 2273)
--#condinclude "rfc2263c.inc"  SNMP-PROXY-MIB (Obsoleted by RFC 2273)
--#condinclude "rfc2264.inc"   SNMP-USER-BASED-SM-MIB (Obsoleted by RFC 2274)
--#condinclude "rfc2265.inc"   SNMP-VIEW-BASED-ACM-MIB (Obsoleted by RFC 2275)

#condinclude "rfc2266.inc"  -- DOT12-RPTR-MIB

#condinclude "rfc2271.inc"  -- SNMP-FRAMEWORK-MIB
#condinclude "rfc2272.inc"  -- SNMP-MPD-MIB
#condinclude "rfc2273a.inc" -- SNMP-TARGET-MIB
#condinclude "rfc2273b.inc" -- SNMP-NOTIFICATION-MIB
#condinclude "rfc2273c.inc" -- SNMP-PROXY-MIB
#condinclude "rfc2274.inc"  -- SNMP-USER-BASED-SM-MIB
#condinclude "rfc2275.inc"  -- SNMP-VIEW-BASED-ACM-MIB

#condinclude "rfc2287.inc"  -- SYSAPPL-MIB
#condinclude "rfc2320.inc"  -- IPOA-MIB

-- end

