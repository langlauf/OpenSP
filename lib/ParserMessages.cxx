// This file was automatically generated from ParserMessages.msg by msggen.pl.

#ifdef __GNUG__
#pragma implementation
#endif

#include "splib.h"
#include "ParserMessages.h"

#ifdef SP_NAMESPACE
namespace SP_NAMESPACE {
#endif

const MessageType1 ParserMessages::nameLength(
MessageType::quantityError,
MessageFragment::libModule,
0
#ifndef SP_NO_MESSAGE_TEXT
,"length of name must not exceed NAMELEN (%1)"
,"9.3.1"
#endif
);
const MessageType1 ParserMessages::parameterEntityNameLength(
MessageType::quantityError,
MessageFragment::libModule,
1
#ifndef SP_NO_MESSAGE_TEXT
,"length of parameter entity name must not exceed NAMELEN less the length of the PERO delimiter (%1)"
,"10.5.1.1"
#endif
);
const MessageType1 ParserMessages::numberLength(
MessageType::quantityError,
MessageFragment::libModule,
2
#ifndef SP_NO_MESSAGE_TEXT
,"length of number must not exceed NAMELEN (%1)"
,"9.3.1"
#endif
);
const MessageType1 ParserMessages::attributeValueLength(
MessageType::quantityError,
MessageFragment::libModule,
3
#ifndef SP_NO_MESSAGE_TEXT
,"length of attribute value must not exceed LITLEN less NORMSEP (%1)"
,"7.9.4.5"
#endif
);
const MessageType0 ParserMessages::peroGrpoProlog(
MessageType::error,
MessageFragment::libModule,
4
#ifndef SP_NO_MESSAGE_TEXT
,"a name group is not allowed in a parameter entity reference in the prolog"
,"9.4.4p3"
#endif
);
const MessageType0 ParserMessages::groupLevel(
MessageType::error,
MessageFragment::libModule,
5
#ifndef SP_NO_MESSAGE_TEXT
,"an entity end in a token separator must terminate an entity referenced in the same group"
,"10.1.3p8"
#endif
);
const MessageType2 ParserMessages::groupCharacter(
MessageType::error,
MessageFragment::libModule,
6
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 invalid: only %2 and token separators allowed"
#endif
);
const MessageType0 ParserMessages::psRequired(
MessageType::error,
MessageFragment::libModule,
7
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter separator is required after a number that is followed by a name start character"
,"10.1.1p4"
#endif
);
const MessageType2 ParserMessages::markupDeclarationCharacter(
MessageType::error,
MessageFragment::libModule,
8
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 invalid: only %2 and parameter separators allowed"
#endif
);
const MessageType0 ParserMessages::declarationLevel(
MessageType::error,
MessageFragment::libModule,
9
#ifndef SP_NO_MESSAGE_TEXT
,"an entity end in a parameter separator must terminate an entity referenced in the same declaration"
,"10.1.1p3"
#endif
);
const MessageType0 ParserMessages::groupEntityEnd(
MessageType::error,
MessageFragment::libModule,
10
#ifndef SP_NO_MESSAGE_TEXT
,"an entity end is not allowed in a token separator that does not follow a token"
,"10.1.3p8"
#endif
);
const MessageType1 ParserMessages::invalidToken(
MessageType::error,
MessageFragment::libModule,
11
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a valid token here"
#endif
);
const MessageType0 ParserMessages::groupEntityReference(
MessageType::error,
MessageFragment::libModule,
12
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter entity reference can only occur in a group where a token could occur"
,"10.1.3p7"
#endif
);
const MessageType1 ParserMessages::duplicateGroupToken(
MessageType::error,
MessageFragment::libModule,
13
#ifndef SP_NO_MESSAGE_TEXT
,"token %1 has already occurred in this group"
,"10.1.3p6"
#endif
);
const MessageType1 ParserMessages::groupCount(
MessageType::quantityError,
MessageFragment::libModule,
14
#ifndef SP_NO_MESSAGE_TEXT
,"the number of tokens in a group must not exceed GRPCNT (%1)"
,"10.1.3.1"
#endif
);
const MessageType0 ParserMessages::literalLevel(
MessageType::error,
MessageFragment::libModule,
15
#ifndef SP_NO_MESSAGE_TEXT
,"an entity end in a literal must terminate an entity referenced in the same literal"
,"10.1.2p6 9.1.1p3"
#endif
);
const MessageType1 ParserMessages::literalMinimumData(
MessageType::error,
MessageFragment::libModule,
16
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 invalid: only minimum data characters allowed"
,"10.1.7p3"
#endif
);
const MessageType0 ParserMessages::dataTagPatternNonSgml(
MessageType::error,
MessageFragment::libModule,
18
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter literal in a data tag pattern must not contain a numeric character reference to a non-SGML character"
,"11.2.4.4p9"
#endif
);
const MessageType0 ParserMessages::dataTagPatternFunction(
MessageType::error,
MessageFragment::libModule,
19
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter literal in a data tag pattern must not contain a numeric character reference to a function character"
,"11.2.4.4p9"
#endif
);
const MessageType0 ParserMessages::eroGrpoStartTag(
MessageType::error,
MessageFragment::libModule,
20
#ifndef SP_NO_MESSAGE_TEXT
,"a name group is not allowed in a general entity reference in a start tag"
,"9.4.4p3"
#endif
);
const MessageType0 ParserMessages::eroGrpoProlog(
MessageType::error,
MessageFragment::libModule,
21
#ifndef SP_NO_MESSAGE_TEXT
,"a name group is not allowed in a general entity reference in the prolog"
,"9.4.4p3"
#endif
);
const MessageType1 ParserMessages::functionName(
MessageType::error,
MessageFragment::libModule,
22
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a function name"
,"9.5p4"
#endif
);
const MessageType1 ParserMessages::characterNumber(
MessageType::error,
MessageFragment::libModule,
23
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a character number in the document character set"
,"4.36"
#endif
);
const MessageType1 ParserMessages::parameterEntityUndefined(
MessageType::error,
MessageFragment::libModule,
24
#ifndef SP_NO_MESSAGE_TEXT
,"parameter entity %1 not defined"
,"9.4.4.1p2"
#endif
);
const MessageType1 ParserMessages::entityUndefined(
MessageType::error,
MessageFragment::libModule,
25
#ifndef SP_NO_MESSAGE_TEXT
,"general entity %1 not defined and no default entity"
,"9.4.4.1p2"
#endif
);
const MessageType0 ParserMessages::rniNameStart(
MessageType::error,
MessageFragment::libModule,
26
#ifndef SP_NO_MESSAGE_TEXT
,"RNI delimiter must be followed by name start character"
#endif
);
const MessageType0L ParserMessages::commentEntityEnd(
MessageType::error,
MessageFragment::libModule,
28
#ifndef SP_NO_MESSAGE_TEXT
,"unterminated comment: found end of entity inside comment"
,"10.3p2"
,"comment started here"
#endif
);
const MessageType0 ParserMessages::mixedConnectors(
MessageType::warning,
MessageFragment::libModule,
30
#ifndef SP_NO_MESSAGE_TEXT
,"only one type of connector should be used in a single group"
,"10.1.3p4"
#endif
);
const MessageType1 ParserMessages::noSuchReservedName(
MessageType::error,
MessageFragment::libModule,
31
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a reserved name"
#endif
);
const MessageType1 ParserMessages::invalidReservedName(
MessageType::error,
MessageFragment::libModule,
32
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not allowed as a reserved name here"
#endif
);
const MessageType1 ParserMessages::minimumLiteralLength(
MessageType::quantityError,
MessageFragment::libModule,
33
#ifndef SP_NO_MESSAGE_TEXT
,"length of interpreted minimum literal must not exceed reference LITLEN (%1)"
,"10.1.7.1"
#endif
);
const MessageType1 ParserMessages::tokenizedAttributeValueLength(
MessageType::quantityError,
MessageFragment::libModule,
34
#ifndef SP_NO_MESSAGE_TEXT
,"length of tokenized attribute value must not exceed LITLEN less NORMSEP (%1)"
,"7.9.4.5 7.9.3p5"
#endif
);
const MessageType1 ParserMessages::systemIdentifierLength(
MessageType::quantityError,
MessageFragment::libModule,
35
#ifndef SP_NO_MESSAGE_TEXT
,"length of system identifier must not exceed LITLEN (%1)"
,"10.1.6.1"
#endif
);
const MessageType1 ParserMessages::parameterLiteralLength(
MessageType::quantityError,
MessageFragment::libModule,
36
#ifndef SP_NO_MESSAGE_TEXT
,"length of interpreted parameter literal must not exceed LITLEN (%1)"
,"10.1.2.1"
#endif
);
const MessageType1 ParserMessages::dataTagPatternLiteralLength(
MessageType::quantityError,
MessageFragment::libModule,
37
#ifndef SP_NO_MESSAGE_TEXT
,"length of interpreted parameter literal in data tag pattern must not exceed DTEMPLEN (%1)"
,"11.2.4.5p3"
#endif
);
const MessageType0 ParserMessages::literalClosingDelimiter(
MessageType::error,
MessageFragment::libModule,
38
#ifndef SP_NO_MESSAGE_TEXT
,"literal is missing closing delimiter"
#endif
);
const MessageType2 ParserMessages::paramInvalidToken(
MessageType::error,
MessageFragment::libModule,
39
#ifndef SP_NO_MESSAGE_TEXT
,"%1 invalid: only %2 and parameter separators are allowed"
#endif
);
const MessageType2 ParserMessages::groupTokenInvalidToken(
MessageType::error,
MessageFragment::libModule,
40
#ifndef SP_NO_MESSAGE_TEXT
,"%1 invalid: only %2 and token separators are allowed"
#endif
);
const MessageType2 ParserMessages::connectorInvalidToken(
MessageType::error,
MessageFragment::libModule,
41
#ifndef SP_NO_MESSAGE_TEXT
,"%1 invalid: only %2 and token separators are allowed"
#endif
);
const MessageType1 ParserMessages::noSuchDeclarationType(
MessageType::error,
MessageFragment::libModule,
42
#ifndef SP_NO_MESSAGE_TEXT
,"unknown declaration type %1"
#endif
);
const MessageType1 ParserMessages::dtdSubsetDeclaration(
MessageType::error,
MessageFragment::libModule,
43
#ifndef SP_NO_MESSAGE_TEXT
,"%1 declaration not allowed in DTD subset"
#endif
);
const MessageType1 ParserMessages::declSubsetCharacter(
MessageType::error,
MessageFragment::libModule,
44
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 not allowed in declaration subset"
#endif
);
const MessageType0 ParserMessages::documentEndDtdSubset(
MessageType::error,
MessageFragment::libModule,
45
#ifndef SP_NO_MESSAGE_TEXT
,"end of document in DTD subset"
#endif
);
const MessageType1 ParserMessages::prologCharacter(
MessageType::error,
MessageFragment::libModule,
46
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 not allowed in prolog"
#endif
);
const MessageType0 ParserMessages::documentEndProlog(
MessageType::error,
MessageFragment::libModule,
47
#ifndef SP_NO_MESSAGE_TEXT
,"end of document in prolog"
#endif
);
const MessageType1 ParserMessages::prologDeclaration(
MessageType::error,
MessageFragment::libModule,
48
#ifndef SP_NO_MESSAGE_TEXT
,"%1 declaration not allowed in prolog"
#endif
);
const MessageType1 ParserMessages::rankStemGenericIdentifier(
MessageType::error,
MessageFragment::libModule,
49
#ifndef SP_NO_MESSAGE_TEXT
,"%1 used both a rank stem and generic identifier"
,"11.2.1p2"
#endif
);
const MessageType0 ParserMessages::missingTagMinimization(
MessageType::error,
MessageFragment::libModule,
50
#ifndef SP_NO_MESSAGE_TEXT
,"omitted tag minimization parameter can be omitted only if OMITTAG NO is specified"
,"11.2p3"
#endif
);
const MessageType1 ParserMessages::duplicateElementDefinition(
MessageType::error,
MessageFragment::libModule,
51
#ifndef SP_NO_MESSAGE_TEXT
,"element type %1 already defined"
,"11.2p2"
#endif
);
const MessageType0 ParserMessages::entityApplicableDtd(
MessageType::error,
MessageFragment::libModule,
52
#ifndef SP_NO_MESSAGE_TEXT
,"entity reference with no applicable DTD"
#endif
);
const MessageType1L ParserMessages::commentDeclInvalidToken(
MessageType::error,
MessageFragment::libModule,
53
#ifndef SP_NO_MESSAGE_TEXT
,"invalid comment declaration: found %1 outside comment but inside comment declaration"
,"10.3p1"
,"comment declaration started here"
#endif
);
const MessageType1 ParserMessages::instanceDeclaration(
MessageType::error,
MessageFragment::libModule,
55
#ifndef SP_NO_MESSAGE_TEXT
,"%1 declaration not allowed in instance"
#endif
);
const MessageType0 ParserMessages::contentNonSgml(
MessageType::error,
MessageFragment::libModule,
56
#ifndef SP_NO_MESSAGE_TEXT
,"non-SGML character not allowed in content"
#endif
);
const MessageType1 ParserMessages::noCurrentRank(
MessageType::error,
MessageFragment::libModule,
57
#ifndef SP_NO_MESSAGE_TEXT
,"no current rank for rank stem %1"
#endif
);
const MessageType1 ParserMessages::duplicateAttlistNotation(
MessageType::error,
MessageFragment::libModule,
58
#ifndef SP_NO_MESSAGE_TEXT
,"duplicate attribute definition list for notation %1"
,"11.4.1.1p4"
#endif
);
const MessageType1 ParserMessages::duplicateAttlistElement(
MessageType::error,
MessageFragment::libModule,
59
#ifndef SP_NO_MESSAGE_TEXT
,"duplicate attribute definition list for element %1"
,"11.3p4"
#endif
);
const MessageType0 ParserMessages::endTagEntityEnd(
MessageType::error,
MessageFragment::libModule,
60
#ifndef SP_NO_MESSAGE_TEXT
,"entity end not allowed in end tag"
#endif
);
const MessageType1 ParserMessages::endTagCharacter(
MessageType::error,
MessageFragment::libModule,
61
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 not allowed in end tag"
#endif
);
const MessageType1 ParserMessages::endTagInvalidToken(
MessageType::error,
MessageFragment::libModule,
62
#ifndef SP_NO_MESSAGE_TEXT
,"%1 invalid: only S separators and TAGC allowed here"
#endif
);
const MessageType0 ParserMessages::pcdataNotAllowed(
MessageType::error,
MessageFragment::libModule,
63
#ifndef SP_NO_MESSAGE_TEXT
,"character data is not allowed here"
#endif
);
const MessageType1 ParserMessages::elementNotAllowed(
MessageType::error,
MessageFragment::libModule,
64
#ifndef SP_NO_MESSAGE_TEXT
,"document type does not allow element %1 here"
#endif
);
const MessageType2 ParserMessages::missingElementMultiple(
MessageType::error,
MessageFragment::libModule,
65
#ifndef SP_NO_MESSAGE_TEXT
,"document type does not allow element %1 here; missing one of %2 start-tag"
#endif
);
const MessageType2 ParserMessages::missingElementInferred(
MessageType::error,
MessageFragment::libModule,
66
#ifndef SP_NO_MESSAGE_TEXT
,"document type does not allow element %1 here; assuming missing %2 start-tag"
#endif
);
const MessageType1 ParserMessages::startTagEmptyElement(
MessageType::error,
MessageFragment::libModule,
67
#ifndef SP_NO_MESSAGE_TEXT
,"no start tag specified for implied empty element %1"
,"7.3.1.1p3"
#endif
);
const MessageType1L ParserMessages::omitEndTagDeclare(
MessageType::error,
MessageFragment::libModule,
68
#ifndef SP_NO_MESSAGE_TEXT
,"end tag for %1 omitted, but its declaration does not permit this"
,0
,"start tag was here"
#endif
);
const MessageType1L ParserMessages::omitEndTagOmittag(
MessageType::error,
MessageFragment::libModule,
70
#ifndef SP_NO_MESSAGE_TEXT
,"end tag for %1 omitted, but OMITTAG NO was specified"
,"7.3.1p1"
,"start tag was here"
#endif
);
const MessageType1 ParserMessages::omitStartTagDeclaredContent(
MessageType::error,
MessageFragment::libModule,
72
#ifndef SP_NO_MESSAGE_TEXT
,"start tag omitted for element %1 with declared content"
,"7.3.1.1p2"
#endif
);
const MessageType1 ParserMessages::elementEndTagNotFinished(
MessageType::error,
MessageFragment::libModule,
73
#ifndef SP_NO_MESSAGE_TEXT
,"end tag for %1 which is not finished"
#endif
);
const MessageType1 ParserMessages::omitStartTagDeclare(
MessageType::error,
MessageFragment::libModule,
74
#ifndef SP_NO_MESSAGE_TEXT
,"start tag for %1 omitted, but its declaration does not permit this"
#endif
);
const MessageType1 ParserMessages::taglvlOpenElements(
MessageType::quantityError,
MessageFragment::libModule,
75
#ifndef SP_NO_MESSAGE_TEXT
,"number of open elements exceeds TAGLVL (%1)"
#endif
);
const MessageType1 ParserMessages::undefinedElement(
MessageType::error,
MessageFragment::libModule,
76
#ifndef SP_NO_MESSAGE_TEXT
,"element %1 undefined"
#endif
);
const MessageType0 ParserMessages::emptyEndTagNoOpenElements(
MessageType::error,
MessageFragment::libModule,
77
#ifndef SP_NO_MESSAGE_TEXT
,"empty end tag but no open elements"
#endif
);
const MessageType1 ParserMessages::elementNotFinished(
MessageType::error,
MessageFragment::libModule,
78
#ifndef SP_NO_MESSAGE_TEXT
,"%1 not finished but containing element ended"
#endif
);
const MessageType1 ParserMessages::elementNotOpen(
MessageType::error,
MessageFragment::libModule,
79
#ifndef SP_NO_MESSAGE_TEXT
,"end tag for element %1 which is not open"
#endif
);
const MessageType1 ParserMessages::internalParameterDataEntity(
MessageType::error,
MessageFragment::libModule,
80
#ifndef SP_NO_MESSAGE_TEXT
,"internal parameter entity %1 cannot be CDATA or SDATA"
#endif
);
const MessageType1 ParserMessages::attributeSpecCharacter(
MessageType::error,
MessageFragment::libModule,
81
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 not allowed in attribute specification list"
#endif
);
const MessageType0 ParserMessages::unquotedAttributeValue(
MessageType::error,
MessageFragment::libModule,
82
#ifndef SP_NO_MESSAGE_TEXT
,"an attribute value must be a literal unless it contains only name characters"
#endif
);
const MessageType0 ParserMessages::attributeSpecEntityEnd(
MessageType::error,
MessageFragment::libModule,
83
#ifndef SP_NO_MESSAGE_TEXT
,"entity end not allowed in attribute specification list except in attribute value literal"
#endif
);
const MessageType1 ParserMessages::externalParameterDataSubdocEntity(
MessageType::error,
MessageFragment::libModule,
84
#ifndef SP_NO_MESSAGE_TEXT
,"external parameter entity %1 cannot be CDATA, SDATA, NDATA or SUBDOC"
#endif
);
const MessageType1 ParserMessages::duplicateEntityDeclaration(
MessageType::warning,
MessageFragment::libModule,
85
#ifndef SP_NO_MESSAGE_TEXT
,"duplicate declaration of entity %1"
#endif
);
const MessageType1 ParserMessages::duplicateParameterEntityDeclaration(
MessageType::warning,
MessageFragment::libModule,
86
#ifndef SP_NO_MESSAGE_TEXT
,"duplicate declaration of parameter entity %1"
#endif
);
const MessageType0 ParserMessages::piEntityReference(
MessageType::error,
MessageFragment::libModule,
87
#ifndef SP_NO_MESSAGE_TEXT
,"a reference to a PI entity is allowed only in a context where a processing instruction could occur"
,"10.5.3p9"
#endif
);
const MessageType0 ParserMessages::internalDataEntityReference(
MessageType::error,
MessageFragment::libModule,
88
#ifndef SP_NO_MESSAGE_TEXT
,"a reference to a CDATA or SDATA entity is allowed only in a context where a data character could occur"
,"10.5.3p9"
#endif
);
const MessageType0 ParserMessages::externalNonTextEntityReference(
MessageType::error,
MessageFragment::libModule,
89
#ifndef SP_NO_MESSAGE_TEXT
,"a reference to a subdocument entity or external data entity is allowed only in a context where a data character could occur"
,"9.4p0"
#endif
);
const MessageType0 ParserMessages::externalNonTextEntityRcdata(
MessageType::error,
MessageFragment::libModule,
90
#ifndef SP_NO_MESSAGE_TEXT
,"a reference to a subdocument entity or external data entity is not allowed in replaceable character data"
,"9.4p0"
#endif
);
const MessageType1 ParserMessages::entlvl(
MessageType::quantityError,
MessageFragment::libModule,
91
#ifndef SP_NO_MESSAGE_TEXT
,"the number of open entities cannot exceed ENTLVL (%1)"
,"9.4.1"
#endif
);
const MessageType0 ParserMessages::piEntityRcdata(
MessageType::error,
MessageFragment::libModule,
92
#ifndef SP_NO_MESSAGE_TEXT
,"a reference to a PI entity is not allowed in replaceable character data"
,"10.5.3p9"
#endif
);
const MessageType1 ParserMessages::recursiveEntityReference(
MessageType::error,
MessageFragment::libModule,
93
#ifndef SP_NO_MESSAGE_TEXT
,"entity %1 is already open"
,"9.4p4"
#endif
);
const MessageType1 ParserMessages::undefinedShortrefMapInstance(
MessageType::error,
MessageFragment::libModule,
94
#ifndef SP_NO_MESSAGE_TEXT
,"short reference map %1 not defined"
,"11.6.2p2"
#endif
);
const MessageType0 ParserMessages::usemapAssociatedElementTypeDtd(
MessageType::error,
MessageFragment::libModule,
95
#ifndef SP_NO_MESSAGE_TEXT
,"short reference map in DTD must specify associated element type"
,"11.6.1p1"
#endif
);
const MessageType0 ParserMessages::usemapAssociatedElementTypeInstance(
MessageType::error,
MessageFragment::libModule,
96
#ifndef SP_NO_MESSAGE_TEXT
,"short reference map in document instance cannot specify associated element type"
,"11.6.2p1"
#endif
);
const MessageType2 ParserMessages::undefinedShortrefMapDtd(
MessageType::error,
MessageFragment::libModule,
97
#ifndef SP_NO_MESSAGE_TEXT
,"short reference map %1 for element %2 not defined in DTD"
,"11.6.1p2"
#endif
);
const MessageType1 ParserMessages::unknownShortrefDelim(
MessageType::error,
MessageFragment::libModule,
98
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a short reference delimiter"
,"11.5p4"
#endif
);
const MessageType1 ParserMessages::delimDuplicateMap(
MessageType::error,
MessageFragment::libModule,
99
#ifndef SP_NO_MESSAGE_TEXT
,"short reference delimiter %1 already mapped in this declaration"
,"11.5p6"
#endif
);
const MessageType0 ParserMessages::noDocumentElement(
MessageType::error,
MessageFragment::libModule,
100
#ifndef SP_NO_MESSAGE_TEXT
,"no document element"
#endif
);
const MessageType0 ParserMessages::processingInstructionEntityEnd(
MessageType::error,
MessageFragment::libModule,
102
#ifndef SP_NO_MESSAGE_TEXT
,"entity end not allowed in processing instruction"
#endif
);
const MessageType1 ParserMessages::processingInstructionLength(
MessageType::quantityError,
MessageFragment::libModule,
103
#ifndef SP_NO_MESSAGE_TEXT
,"length of processing instruction must not exceed PILEN (%1)"
,"8.1p1"
#endif
);
const MessageType0 ParserMessages::processingInstructionClose(
MessageType::error,
MessageFragment::libModule,
104
#ifndef SP_NO_MESSAGE_TEXT
,"missing PIC delimiter"
#endif
);
const MessageType0 ParserMessages::attributeSpecNameTokenExpected(
MessageType::error,
MessageFragment::libModule,
105
#ifndef SP_NO_MESSAGE_TEXT
,"an attribute specification must start with a name or name token"
,"7.9p2 7.9.1.2p1"
#endif
);
const MessageType1 ParserMessages::noSuchAttributeToken(
MessageType::error,
MessageFragment::libModule,
106
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a member of a group specified for any attribute"
,"7.9.1.2p1"
#endif
);
const MessageType0 ParserMessages::attributeNameShorttag(
MessageType::error,
MessageFragment::libModule,
107
#ifndef SP_NO_MESSAGE_TEXT
,"the name and VI delimiter can be omitted from an attribute specification only if SHORTTAG YES is specified"
,"7.9.1.2"
#endif
);
const MessageType1 ParserMessages::noSuchAttribute(
MessageType::error,
MessageFragment::libModule,
108
#ifndef SP_NO_MESSAGE_TEXT
,"there is no attribute %1"
#endif
);
const MessageType0 ParserMessages::attributeValueExpected(
MessageType::error,
MessageFragment::libModule,
109
#ifndef SP_NO_MESSAGE_TEXT
,"an attribute value specification must start with a literal or a name character"
,"7.9.3p1"
#endif
);
const MessageType1 ParserMessages::nameTokenLength(
MessageType::quantityError,
MessageFragment::libModule,
110
#ifndef SP_NO_MESSAGE_TEXT
,"length of name token must not exceed NAMELEN (%1)"
,"9.3.1"
#endif
);
const MessageType0 ParserMessages::attributeSpecLiteral(
MessageType::error,
MessageFragment::libModule,
111
#ifndef SP_NO_MESSAGE_TEXT
,"an attribute value literal can occur in an attribute specification list only after a VI delimiter"
,"7.9.3p1 7.9.1.2p1"
#endif
);
const MessageType1 ParserMessages::duplicateAttributeSpec(
MessageType::error,
MessageFragment::libModule,
112
#ifndef SP_NO_MESSAGE_TEXT
,"duplicate specification of attribute %1"
,"7.9p5"
#endif
);
const MessageType1 ParserMessages::duplicateAttributeDef(
MessageType::error,
MessageFragment::libModule,
113
#ifndef SP_NO_MESSAGE_TEXT
,"duplicate definition of attribute %1"
,"11.3.2p2"
#endif
);
const MessageType0 ParserMessages::emptyDataAttributeSpec(
MessageType::error,
MessageFragment::libModule,
114
#ifndef SP_NO_MESSAGE_TEXT
,"data attribute specification must be omitted if attribute specification list is empty"
,"11.4.1.2p3"
#endif
);
const MessageType0 ParserMessages::markedSectionEnd(
MessageType::error,
MessageFragment::libModule,
115
#ifndef SP_NO_MESSAGE_TEXT
,"marked section end not in marked section declaration"
,"10.4p6"
#endif
);
const MessageType1 ParserMessages::markedSectionLevel(
MessageType::error,
MessageFragment::libModule,
116
#ifndef SP_NO_MESSAGE_TEXT
,"number of open marked sections must not exceed TAGLVL (%1)"
,"10.4.1p1"
#endif
);
const MessageType0L ParserMessages::unclosedMarkedSection(
MessageType::error,
MessageFragment::libModule,
117
#ifndef SP_NO_MESSAGE_TEXT
,"missing marked section end"
,"10.4p1"
,"marked section started here"
#endif
);
const MessageType0 ParserMessages::specialParseEntityEnd(
MessageType::error,
MessageFragment::libModule,
119
#ifndef SP_NO_MESSAGE_TEXT
,"entity end in character data, replaceable character data or ignored marked section"
#endif
);
const MessageType2 ParserMessages::normalizedAttributeValueLength(
MessageType::quantityError,
MessageFragment::libModule,
120
#ifndef SP_NO_MESSAGE_TEXT
,"normalized length of attribute value literal must not exceed LITLEN (%1); length was %2"
,"7.9.4.5"
#endif
);
const MessageType0 ParserMessages::attributeValueSyntax(
MessageType::error,
MessageFragment::libModule,
121
#ifndef SP_NO_MESSAGE_TEXT
,"syntax of attribute value does not conform to declared value"
,"7.9.4.1p1"
#endif
);
const MessageType2 ParserMessages::attributeValueChar(
MessageType::error,
MessageFragment::libModule,
122
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 is not allowed in the value of attribute %2"
,"7.9.4.1p1"
#endif
);
const MessageType1 ParserMessages::attributeValueMultiple(
MessageType::error,
MessageFragment::libModule,
123
#ifndef SP_NO_MESSAGE_TEXT
,"value of attribute %1 must be a single token"
,"7.9.4.1p1"
#endif
);
const MessageType2 ParserMessages::attributeValueNumberToken(
MessageType::error,
MessageFragment::libModule,
124
#ifndef SP_NO_MESSAGE_TEXT
,"value of attribute %2 invalid: %1 cannot start a number token"
,"7.9.4p1"
#endif
);
const MessageType2 ParserMessages::attributeValueName(
MessageType::error,
MessageFragment::libModule,
125
#ifndef SP_NO_MESSAGE_TEXT
,"value of attribute %2 invalid: %1 cannot start a name"
,"7.9.4p1"
#endif
);
const MessageType1 ParserMessages::attributeMissing(
MessageType::error,
MessageFragment::libModule,
126
#ifndef SP_NO_MESSAGE_TEXT
,"non-impliable attribute %1 not specified but OMITTAG NO and SHORTTAG NO"
,"7.9p4"
#endif
);
const MessageType1 ParserMessages::requiredAttributeMissing(
MessageType::error,
MessageFragment::libModule,
127
#ifndef SP_NO_MESSAGE_TEXT
,"required attribute %1 not specified"
,"7.9p4 7.9.1.1p2"
#endif
);
const MessageType1 ParserMessages::currentAttributeMissing(
MessageType::error,
MessageFragment::libModule,
128
#ifndef SP_NO_MESSAGE_TEXT
,"first occurrence of CURRENT attribute %1 not specified"
,"7.9.1.1p2"
#endif
);
const MessageType1 ParserMessages::invalidNotationAttribute(
MessageType::error,
MessageFragment::libModule,
129
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a notation name"
,"7.9.4.4p1"
#endif
);
const MessageType1 ParserMessages::invalidEntityAttribute(
MessageType::error,
MessageFragment::libModule,
130
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a general entity name"
,"7.9.4.3p1"
#endif
);
const MessageType3 ParserMessages::attributeValueNotInGroup(
MessageType::error,
MessageFragment::libModule,
131
#ifndef SP_NO_MESSAGE_TEXT
,"value of attribute %2 cannot be %1; must be one of %3"
,"7.9.4.1p2"
#endif
);
const MessageType1 ParserMessages::notDataOrSubdocEntity(
MessageType::error,
MessageFragment::libModule,
132
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a data or subdocument entity"
,"7.9.4.3p1"
#endif
);
const MessageType3 ParserMessages::ambiguousModelInitial(
MessageType::error,
MessageFragment::libModule,
133
#ifndef SP_NO_MESSAGE_TEXT
,"content model is ambiguous: when no tokens have been matched, both the %2 and %3 occurrences of %1 are possible"
#endif
);
const MessageType5 ParserMessages::ambiguousModel(
MessageType::error,
MessageFragment::libModule,
134
#ifndef SP_NO_MESSAGE_TEXT
,"content model is ambiguous: when the current token is the %2 occurrence of %1, both the %4 and %5 occurrences of %3 are possible"
#endif
);
const MessageType5 ParserMessages::ambiguousModelSingleAnd(
MessageType::error,
MessageFragment::libModule,
135
#ifndef SP_NO_MESSAGE_TEXT
,"content model is ambiguous: when the current token is the %2 occurrence of %1 and the innermost containing AND group has been matched, both the %4 and %5 occurrences of %3 are possible"
#endif
);
const MessageType6 ParserMessages::ambiguousModelMultipleAnd(
MessageType::error,
MessageFragment::libModule,
136
#ifndef SP_NO_MESSAGE_TEXT
,"content model is ambiguous: when the current token is the %2 occurrence of %1 and the innermost %3 containing AND groups have been matched, both the %5 and %6 occurrences of %4 are possible"
#endif
);
const MessageType1L ParserMessages::commentDeclarationCharacter(
MessageType::error,
MessageFragment::libModule,
137
#ifndef SP_NO_MESSAGE_TEXT
,"invalid comment declaration: found character %1 outside comment but inside comment declaration"
,0
,"comment declaration started here"
#endif
);
const MessageType1 ParserMessages::nonSgmlCharacter(
MessageType::error,
MessageFragment::libModule,
139
#ifndef SP_NO_MESSAGE_TEXT
,"non SGML character number %1"
#endif
);
const MessageType0 ParserMessages::dataMarkedSectionDeclSubset(
MessageType::error,
MessageFragment::libModule,
140
#ifndef SP_NO_MESSAGE_TEXT
,"data or replaceable character data in declaration subset"
#endif
);
const MessageType1L ParserMessages::duplicateId(
MessageType::error,
MessageFragment::libModule,
141
#ifndef SP_NO_MESSAGE_TEXT
,"ID %1 already defined"
,"4.153"
,"ID %1 first defined here"
#endif
);
const MessageType1 ParserMessages::notFixedValue(
MessageType::error,
MessageFragment::libModule,
143
#ifndef SP_NO_MESSAGE_TEXT
,"value of fixed attribute %1 not equal to default"
,"4.136"
#endif
);
const MessageType1 ParserMessages::sdCommentSignificant(
MessageType::error,
MessageFragment::libModule,
144
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 is not significant in the reference concrete syntax and so cannot occur in a comment in the SGML declaration"
#endif
);
const MessageType1 ParserMessages::standardVersion(
MessageType::error,
MessageFragment::libModule,
145
#ifndef SP_NO_MESSAGE_TEXT
,"minimum data of first minimum literal in SGML declaration must be \"ISO 8879:1986\" or \"ISO 8879:1986 (ENR)\" or \"ISO 8879:1986 (WWW)\" not %1"
,"13p2"
#endif
);
const MessageType1 ParserMessages::namingBeforeLcnmstrt(
MessageType::error,
MessageFragment::libModule,
146
#ifndef SP_NO_MESSAGE_TEXT
,"parameter before LCNMSTRT must be NAMING not %1"
,"13.4.5p1"
#endif
);
const MessageType1 ParserMessages::sdEntityEnd(
MessageType::error,
MessageFragment::libModule,
147
#ifndef SP_NO_MESSAGE_TEXT
,"unexpected entity end in SGML declaration: only %1, S separators and comments allowed"
,"13p1"
#endif
);
const MessageType2 ParserMessages::sdInvalidNameToken(
MessageType::error,
MessageFragment::libModule,
148
#ifndef SP_NO_MESSAGE_TEXT
,"%1 invalid: only %2 and parameter separators allowed"
#endif
);
const MessageType1 ParserMessages::numberTooBig(
MessageType::error,
MessageFragment::libModule,
149
#ifndef SP_NO_MESSAGE_TEXT
,"magnitude of %1 too big"
#endif
);
const MessageType1 ParserMessages::sdLiteralSignificant(
MessageType::error,
MessageFragment::libModule,
150
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 is not significant in the reference concrete syntax and so cannot occur in a literal in the SGML declaration except as the replacement of a character reference"
#endif
);
const MessageType1 ParserMessages::syntaxCharacterNumber(
MessageType::error,
MessageFragment::libModule,
151
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a valid syntax reference character number"
,"4.36"
#endif
);
const MessageType0 ParserMessages::sdParameterEntity(
MessageType::error,
MessageFragment::libModule,
152
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter entity reference cannot occur in an SGML declaration"
,"451p7"
#endif
);
const MessageType2 ParserMessages::sdParamInvalidToken(
MessageType::error,
MessageFragment::libModule,
153
#ifndef SP_NO_MESSAGE_TEXT
,"%1 invalid: only %2 and parameter separators are allowed"
#endif
);
const MessageType0 ParserMessages::giveUp(
MessageType::error,
MessageFragment::libModule,
154
#ifndef SP_NO_MESSAGE_TEXT
,"cannot continue because of previous errors"
#endif
);
const MessageType1 ParserMessages::sdMissingCharacters(
MessageType::error,
MessageFragment::libModule,
155
#ifndef SP_NO_MESSAGE_TEXT
,"SGML declaration cannot be parsed because the character set does not contain characters having the following numbers in ISO 646: %1"
#endif
);
const MessageType1 ParserMessages::missingMinimumChars(
MessageType::error,
MessageFragment::libModule,
156
#ifndef SP_NO_MESSAGE_TEXT
,"the specified character set is invalid because it does not contain the minimum data characters having the following numbers in ISO 646: %1"
#endif
);
const MessageType1 ParserMessages::duplicateCharNumbers(
MessageType::error,
MessageFragment::libModule,
157
#ifndef SP_NO_MESSAGE_TEXT
,"character numbers declared more than once: %1"
#endif
);
const MessageType1 ParserMessages::codeSetHoles(
MessageType::error,
MessageFragment::libModule,
158
#ifndef SP_NO_MESSAGE_TEXT
,"character numbers should have been declared UNUSED: %1"
#endif
);
const MessageType1 ParserMessages::basesetCharsMissing(
MessageType::warning,
MessageFragment::libModule,
159
#ifndef SP_NO_MESSAGE_TEXT
,"character numbers missing in base set: %1"
#endif
);
const MessageType1 ParserMessages::documentCharMax(
MessageType::warning,
MessageFragment::libModule,
160
#ifndef SP_NO_MESSAGE_TEXT
,"characters in the document character set with numbers exceeding %1 not supported"
#endif
);
const MessageType1 ParserMessages::fpiMissingField(
MessageType::error,
MessageFragment::libModule,
161
#ifndef SP_NO_MESSAGE_TEXT
,"invalid formal public identifier %1: missing //"
#endif
);
const MessageType1 ParserMessages::fpiMissingTextClassSpace(
MessageType::error,
MessageFragment::libModule,
162
#ifndef SP_NO_MESSAGE_TEXT
,"invalid formal public identifier %1: no SPACE after public text class"
#endif
);
const MessageType1 ParserMessages::fpiInvalidTextClass(
MessageType::error,
MessageFragment::libModule,
163
#ifndef SP_NO_MESSAGE_TEXT
,"invalid formal public identifier %1: invalid public text class"
#endif
);
const MessageType1 ParserMessages::fpiInvalidLanguage(
MessageType::error,
MessageFragment::libModule,
164
#ifndef SP_NO_MESSAGE_TEXT
,"invalid formal public identifier %1: public text language must be a name containing only upper case letters"
#endif
);
const MessageType1 ParserMessages::fpiIllegalDisplayVersion(
MessageType::error,
MessageFragment::libModule,
165
#ifndef SP_NO_MESSAGE_TEXT
,"invalid formal public identifer %1: public text display version not permitted with this text class"
#endif
);
const MessageType1 ParserMessages::fpiExtraField(
MessageType::error,
MessageFragment::libModule,
166
#ifndef SP_NO_MESSAGE_TEXT
,"invalid formal public identifier %1: extra field"
#endif
);
const MessageType0 ParserMessages::notationIdentifierTextClass(
MessageType::error,
MessageFragment::libModule,
167
#ifndef SP_NO_MESSAGE_TEXT
,"public text class of public identifier in notation identifier must be NOTATION"
#endif
);
const MessageType1 ParserMessages::unknownBaseset(
MessageType::warning,
MessageFragment::libModule,
168
#ifndef SP_NO_MESSAGE_TEXT
,"base character set %1 is unknown"
#endif
);
const MessageType2 ParserMessages::lexicalAmbiguity(
MessageType::error,
MessageFragment::libModule,
169
#ifndef SP_NO_MESSAGE_TEXT
,"delimiter set is ambiguous: %1 and %2 can be recognized in the same mode"
,"13.4.6p2"
#endif
);
const MessageType1 ParserMessages::missingSignificant(
MessageType::error,
MessageFragment::libModule,
170
#ifndef SP_NO_MESSAGE_TEXT
,"characters with the following numbers in the syntax reference character set are significant in the concrete syntax but are not in the document character set: %1"
#endif
);
const MessageType1 ParserMessages::translateSyntaxCharDoc(
MessageType::error,
MessageFragment::libModule,
171
#ifndef SP_NO_MESSAGE_TEXT
,"there is no unique character in the document character set corresponding to character number %1 in the syntax reference character set"
#endif
);
const MessageType1 ParserMessages::translateSyntaxCharInternal(
MessageType::error,
MessageFragment::libModule,
172
#ifndef SP_NO_MESSAGE_TEXT
,"there is no unique character in the internal character set corresponding to character number %1 in the syntax reference character set"
#endif
);
const MessageType1 ParserMessages::missingSyntaxChar(
MessageType::error,
MessageFragment::libModule,
173
#ifndef SP_NO_MESSAGE_TEXT
,"the character with number %1 in ISO 646 is significant but has no representation in the syntax reference character set"
,"13.4.3p2"
#endif
);
const MessageType1 ParserMessages::unknownCapacitySet(
MessageType::error,
MessageFragment::libModule,
174
#ifndef SP_NO_MESSAGE_TEXT
,"capacity set %1 is unknown"
#endif
);
const MessageType1 ParserMessages::duplicateCapacity(
MessageType::warning,
MessageFragment::libModule,
175
#ifndef SP_NO_MESSAGE_TEXT
,"capacity %1 already specified"
#endif
);
const MessageType1 ParserMessages::capacityExceedsTotalcap(
MessageType::error,
MessageFragment::libModule,
176
#ifndef SP_NO_MESSAGE_TEXT
,"value of capacity %1 exceeds value of TOTALCAP"
#endif
);
const MessageType1 ParserMessages::unknownPublicSyntax(
MessageType::error,
MessageFragment::libModule,
177
#ifndef SP_NO_MESSAGE_TEXT
,"syntax %1 is unknown"
#endif
);
const MessageType0 ParserMessages::nmstrtLength(
MessageType::error,
MessageFragment::libModule,
178
#ifndef SP_NO_MESSAGE_TEXT
,"UCNMSTRT must have the same number of characters as LCNMSTRT"
,"13.4.5p13"
#endif
);
const MessageType0 ParserMessages::nmcharLength(
MessageType::error,
MessageFragment::libModule,
179
#ifndef SP_NO_MESSAGE_TEXT
,"UCNMCHAR must have the same number of characters as LCNMCHAR"
,"13.4.5p13"
#endif
);
const MessageType1 ParserMessages::subdocLevel(
MessageType::error,
MessageFragment::libModule,
180
#ifndef SP_NO_MESSAGE_TEXT
,"number of open subdocuments exceeds quantity specified for SUBDOC parameter in SGML declaration (%1)"
,"9.4.2p1"
#endif
);
const MessageType1 ParserMessages::subdocEntity(
MessageType::error,
MessageFragment::libModule,
181
#ifndef SP_NO_MESSAGE_TEXT
,"entity %1 declared SUBDOC, but SUBDOC NO specified in SGML declaration"
,"10.5.5p12"
#endif
);
const MessageType0 ParserMessages::parameterEntityNotEnded(
MessageType::error,
MessageFragment::libModule,
182
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter entity referenced in a parameter separator must end in the same declaration"
,"10.1.1p2"
#endif
);
const MessageType1 ParserMessages::missingId(
MessageType::idrefError,
MessageFragment::libModule,
183
#ifndef SP_NO_MESSAGE_TEXT
,"reference to non-existent ID %1"
#endif
);
const MessageType1 ParserMessages::dtdUndefinedElement(
MessageType::warning,
MessageFragment::libModule,
184
#ifndef SP_NO_MESSAGE_TEXT
,"generic identifier %1 used in DTD but not defined"
#endif
);
const MessageType1 ParserMessages::elementNotFinishedDocumentEnd(
MessageType::error,
MessageFragment::libModule,
185
#ifndef SP_NO_MESSAGE_TEXT
,"%1 not finished but document ended"
#endif
);
const MessageType0 ParserMessages::subdocGiveUp(
MessageType::error,
MessageFragment::libModule,
186
#ifndef SP_NO_MESSAGE_TEXT
,"cannot continue with subdocument because of previous errors"
#endif
);
const MessageType0 ParserMessages::noDtd(
MessageType::error,
MessageFragment::libModule,
187
#ifndef SP_NO_MESSAGE_TEXT
,"no document type declaration; will parse without validation"
#endif
);
const MessageType0 ParserMessages::noDtdSubset(
MessageType::error,
MessageFragment::libModule,
188
#ifndef SP_NO_MESSAGE_TEXT
,"no internal or external document type declaration subset; will parse without validation"
#endif
);
const MessageType0 ParserMessages::notSgml(
MessageType::error,
MessageFragment::libModule,
189
#ifndef SP_NO_MESSAGE_TEXT
,"this is not an SGML document"
#endif
);
const MessageType1 ParserMessages::taglen(
MessageType::quantityError,
MessageFragment::libModule,
190
#ifndef SP_NO_MESSAGE_TEXT
,"length of start-tag before interpretation of literals must not exceed TAGLEN (%1)"
,"7.4.2p1"
#endif
);
const MessageType0 ParserMessages::groupParameterEntityNotEnded(
MessageType::error,
MessageFragment::libModule,
191
#ifndef SP_NO_MESSAGE_TEXT
,"a parameter entity referenced in a token separator must end in the same group"
,"10.1.3p7"
#endif
);
const MessageType1 ParserMessages::invalidSgmlChar(
MessageType::error,
MessageFragment::libModule,
192
#ifndef SP_NO_MESSAGE_TEXT
,"the following character numbers are shunned characters that are not significant and so should have been declared UNUSED: %1"
,"13.1.2p3"
#endif
);
const MessageType1 ParserMessages::translateDocChar(
MessageType::error,
MessageFragment::libModule,
193
#ifndef SP_NO_MESSAGE_TEXT
,"there is no unique character in the specified document character set corresponding to character number %1 in ISO 646"
#endif
);
const MessageType1 ParserMessages::attributeValueLengthNeg(
MessageType::quantityError,
MessageFragment::libModule,
194
#ifndef SP_NO_MESSAGE_TEXT
,"length of attribute value must not exceed LITLEN less NORMSEP (-%1)"
,"7.9.4.5"
#endif
);
const MessageType1 ParserMessages::tokenizedAttributeValueLengthNeg(
MessageType::quantityError,
MessageFragment::libModule,
195
#ifndef SP_NO_MESSAGE_TEXT
,"length of tokenized attribute value must not exceed LITLEN less NORMSEP (-%1)"
,"7.9.4.5 7.9.3p5"
#endif
);
const MessageType1 ParserMessages::scopeInstanceQuantity(
MessageType::error,
MessageFragment::libModule,
196
#ifndef SP_NO_MESSAGE_TEXT
,"concrete syntax scope is INSTANCE but value of %1 quantity is less than value in reference quantity set"
,"13.3p9"
#endif
);
const MessageType1 ParserMessages::basesetTextClass(
MessageType::error,
MessageFragment::libModule,
197
#ifndef SP_NO_MESSAGE_TEXT
,"public text class of formal public identifier of base character set must be CHARSET"
,"13.1.1.1p4"
#endif
);
const MessageType1 ParserMessages::capacityTextClass(
MessageType::error,
MessageFragment::libModule,
198
#ifndef SP_NO_MESSAGE_TEXT
,"public text class of formal public identifier of capacity set must be CAPACITY"
,"13.2p7"
#endif
);
const MessageType1 ParserMessages::syntaxTextClass(
MessageType::error,
MessageFragment::libModule,
199
#ifndef SP_NO_MESSAGE_TEXT
,"public text class of formal public identifier of concrete syntax must be SYNTAX"
,"13.4.1p6"
#endif
);
const MessageType0 ParserMessages::msocharRequiresMsichar(
MessageType::error,
MessageFragment::libModule,
200
#ifndef SP_NO_MESSAGE_TEXT
,"when there is an MSOCHAR there must also be an MSICHAR"
,"13.4.4p13"
#endif
);
const MessageType1 ParserMessages::switchNotMarkup(
MessageType::error,
MessageFragment::libModule,
201
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 in the syntax reference character set was specified as a character to be switched but is not a markup character"
,"13.4.1p4"
#endif
);
const MessageType1 ParserMessages::switchNotInCharset(
MessageType::error,
MessageFragment::libModule,
202
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 was specified as a character to be switched but is not in the syntax reference character set"
,"13.4.1p4"
#endif
);
const MessageType1 ParserMessages::ambiguousDocCharacter(
MessageType::warning,
MessageFragment::libModule,
203
#ifndef SP_NO_MESSAGE_TEXT
,"character numbers %1 in the document character set have been assigned the same meaning, but this is the meaning of a significant character"
#endif
);
const MessageType1 ParserMessages::oneFunction(
MessageType::error,
MessageFragment::libModule,
204
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 assigned to more than one function"
,"13.4.4p11"
#endif
);
const MessageType1 ParserMessages::duplicateFunctionName(
MessageType::error,
MessageFragment::libModule,
205
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is already a function name"
,"13.4.4p12"
#endif
);
const MessageType1 ParserMessages::missingSignificant646(
MessageType::error,
MessageFragment::libModule,
206
#ifndef SP_NO_MESSAGE_TEXT
,"characters with the following numbers in ISO 646 are significant in the concrete syntax but are not in the document character set: %1"
#endif
);
const MessageType1 ParserMessages::generalDelimAllFunction(
MessageType::error,
MessageFragment::libModule,
207
#ifndef SP_NO_MESSAGE_TEXT
,"general delimiter %1 consists solely of function characters"
,"13.4.6.1p5"
#endif
);
const MessageType1 ParserMessages::nmcharLetter(
MessageType::error,
MessageFragment::libModule,
208
#ifndef SP_NO_MESSAGE_TEXT
,"letters assigned to LCNMCHAR, UCNMCHAR, LCNMSTRT or UCNMSTRT: %1"
,"13.4.5p11"
#endif
);
const MessageType1 ParserMessages::nmcharDigit(
MessageType::error,
MessageFragment::libModule,
209
#ifndef SP_NO_MESSAGE_TEXT
,"digits assigned to LCNMCHAR, UCNMCHAR, LCNMSTRT or UCNMSTRT: %1"
,"13.4.5p11"
#endif
);
const MessageType1 ParserMessages::nmcharRe(
MessageType::error,
MessageFragment::libModule,
210
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 cannot be assigned to LCNMCHAR, UCNMCHAR, LCNMSTRT or UCNMSTRT because it is RE"
,"13.4.5p11"
#endif
);
const MessageType1 ParserMessages::nmcharRs(
MessageType::error,
MessageFragment::libModule,
211
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 cannot be assigned to LCNMCHAR, UCNMCHAR, LCNMSTRT or UCNMSTRT because it is RS"
,"13.4.5p11"
#endif
);
const MessageType1 ParserMessages::nmcharSpace(
MessageType::error,
MessageFragment::libModule,
212
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 cannot be assigned to LCNMCHAR, UCNMCHAR, LCNMSTRT or UCNMSTRT because it is SPACE"
,"13.4.5p11"
#endif
);
const MessageType1 ParserMessages::nmcharSepchar(
MessageType::error,
MessageFragment::libModule,
213
#ifndef SP_NO_MESSAGE_TEXT
,"separator characters assigned to LCNMCHAR, UCNMCHAR, LCNMSTRT or UCNMSTRT: %1"
,"13.4.5p11"
#endif
);
const MessageType1 ParserMessages::switchLetterDigit(
MessageType::error,
MessageFragment::libModule,
214
#ifndef SP_NO_MESSAGE_TEXT
,"character number %1 cannot be switched because it is a Digit, LC Letter or UC Letter"
,"13.4.1p4"
#endif
);
const MessageType0 ParserMessages::zeroNumberOfCharacters(
MessageType::warning,
MessageFragment::libModule,
215
#ifndef SP_NO_MESSAGE_TEXT
,"pointless for number of characters to be 0"
#endif
);
const MessageType1 ParserMessages::nameReferenceReservedName(
MessageType::error,
MessageFragment::libModule,
216
#ifndef SP_NO_MESSAGE_TEXT
,"%1 cannot be the replacement for a reference reserved name because it is another reference reserved name"
,"13.4.7p6"
#endif
);
const MessageType1 ParserMessages::ambiguousReservedName(
MessageType::error,
MessageFragment::libModule,
217
#ifndef SP_NO_MESSAGE_TEXT
,"%1 cannot be the replacement for a reference reserved name because it is the replacement of another reference reserved name"
,"13.4.7p6"
#endif
);
const MessageType1 ParserMessages::duplicateReservedName(
MessageType::error,
MessageFragment::libModule,
218
#ifndef SP_NO_MESSAGE_TEXT
,"replacement for reserved name %1 already specified"
,"13.4.7p2"
#endif
);
const MessageType1 ParserMessages::reservedNameSyntax(
MessageType::warning,
MessageFragment::libModule,
219
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a valid name in the declared concrete syntax"
#endif
);
const MessageType1 ParserMessages::multipleBSequence(
MessageType::error,
MessageFragment::libModule,
220
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a valid short reference delimiter because it has more than one B sequence"
,"13.4.6.2p6"
#endif
);
const MessageType1 ParserMessages::blankAdjacentBSequence(
MessageType::error,
MessageFragment::libModule,
221
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a valid short reference delimiter because it is adjacent to a character that can occur in a blank sequence"
,"13.4.6.2p6"
#endif
);
const MessageType2 ParserMessages::delimiterLength(
MessageType::error,
MessageFragment::libModule,
222
#ifndef SP_NO_MESSAGE_TEXT
,"length of delimiter %1 exceeds NAMELEN (%2)"
,"13.4.6p5"
#endif
);
const MessageType2 ParserMessages::reservedNameLength(
MessageType::warning,
MessageFragment::libModule,
223
#ifndef SP_NO_MESSAGE_TEXT
,"length of reserved name %1 exceeds NAMELEN (%2)"
#endif
);
const MessageType1 ParserMessages::nmcharNmstrt(
MessageType::error,
MessageFragment::libModule,
224
#ifndef SP_NO_MESSAGE_TEXT
,"character numbers assigned to both LCNMCHAR or UCNMCHAR and LCNMSTRT or UCNMSTRT: %1"
,"13.4.5p12"
#endif
);
const MessageType0 ParserMessages::scopeInstanceSyntaxCharset(
MessageType::error,
MessageFragment::libModule,
225
#ifndef SP_NO_MESSAGE_TEXT
,"when the concrete syntax scope is INSTANCE the syntax reference character set of the declared syntax must be the same as that of the reference concrete syntax"
,"13.3p7"
#endif
);
const MessageType0 ParserMessages::emptyOmitEndTag(
MessageType::warning,
MessageFragment::libModule,
226
#ifndef SP_NO_MESSAGE_TEXT
,"end-tag minimization should be O for element with declared content of EMPTY"
,"11.2.2p8"
#endif
);
const MessageType1 ParserMessages::conrefOmitEndTag(
MessageType::warning,
MessageFragment::libModule,
227
#ifndef SP_NO_MESSAGE_TEXT
,"end-tag minimization should be O for element %1 because it has CONREF attribute"
,"11.2.2p8"
#endif
);
const MessageType1 ParserMessages::conrefEmpty(
MessageType::error,
MessageFragment::libModule,
228
#ifndef SP_NO_MESSAGE_TEXT
,"element %1 has a declared content of EMPTY and a CONREF attribute"
,"11.3.4p12"
#endif
);
const MessageType1 ParserMessages::notationEmpty(
MessageType::error,
MessageFragment::libModule,
229
#ifndef SP_NO_MESSAGE_TEXT
,"element %1 has a declared content of EMPTY and a NOTATION attribute"
,"11.3.3p21"
#endif
);
const MessageType0 ParserMessages::dataAttributeDeclaredValue(
MessageType::error,
MessageFragment::libModule,
230
#ifndef SP_NO_MESSAGE_TEXT
,"declared value of data attribute cannot be ENTITY, ENTITIES, ID, IDREF, IDREFS or NOTATION"
,"11.4.1p2"
#endif
);
const MessageType0 ParserMessages::dataAttributeDefaultValue(
MessageType::error,
MessageFragment::libModule,
231
#ifndef SP_NO_MESSAGE_TEXT
,"default value of data attribute cannot be CONREF or CURRENT"
,"11.4.1p3"
#endif
);
const MessageType2 ParserMessages::attcnt(
MessageType::quantityError,
MessageFragment::libModule,
232
#ifndef SP_NO_MESSAGE_TEXT
,"number of attribute names and name tokens (%1) exceeds ATTCNT (%2)"
,"11.3.1"
#endif
);
const MessageType0 ParserMessages::idDeclaredValue(
MessageType::error,
MessageFragment::libModule,
233
#ifndef SP_NO_MESSAGE_TEXT
,"if the declared value is ID the default value must be IMPLIED or REQUIRED"
,"11.3.4p11"
#endif
);
const MessageType1 ParserMessages::multipleIdAttributes(
MessageType::error,
MessageFragment::libModule,
234
#ifndef SP_NO_MESSAGE_TEXT
,"the attribute definition list already declared attribute %1 as the ID attribute"
,"11.3.3p19"
#endif
);
const MessageType1 ParserMessages::multipleNotationAttributes(
MessageType::error,
MessageFragment::libModule,
235
#ifndef SP_NO_MESSAGE_TEXT
,"the attribute definition list already declared attribute %1 as the NOTATION attribute"
,"11.3.3p19"
#endif
);
const MessageType1 ParserMessages::duplicateAttributeToken(
MessageType::error,
MessageFragment::libModule,
236
#ifndef SP_NO_MESSAGE_TEXT
,"token %1 occurs more than once in attribute definition list"
,"11.3.3p20"
#endif
);
const MessageType1 ParserMessages::notationNoAttributes(
MessageType::error,
MessageFragment::libModule,
237
#ifndef SP_NO_MESSAGE_TEXT
,"no attributes defined for notation %1"
,"11.4.1.2p2"
#endif
);
const MessageType2 ParserMessages::entityNotationUndefined(
MessageType::error,
MessageFragment::libModule,
238
#ifndef SP_NO_MESSAGE_TEXT
,"notation %1 for entity %2 undefined"
,"10.5.5p10"
#endif
);
const MessageType2 ParserMessages::mapEntityUndefined(
MessageType::error,
MessageFragment::libModule,
239
#ifndef SP_NO_MESSAGE_TEXT
,"entity %1 undefined in short reference map %2"
#endif
);
const MessageType1 ParserMessages::attlistNotationUndefined(
MessageType::error,
MessageFragment::libModule,
240
#ifndef SP_NO_MESSAGE_TEXT
,"notation %1 is undefined but had attribute definition"
,"11.4.1.1p4"
#endif
);
const MessageType1 ParserMessages::bracketedLitlen(
MessageType::quantityError,
MessageFragment::libModule,
241
#ifndef SP_NO_MESSAGE_TEXT
,"length of interpreted parameter literal in bracketed text plus the length of the bracketing delimiters must not exceed LITLEN (%1)"
,"10.5.4.1"
#endif
);
const MessageType1 ParserMessages::genericIdentifierLength(
MessageType::quantityError,
MessageFragment::libModule,
242
#ifndef SP_NO_MESSAGE_TEXT
,"length of rank stem plus length of rank suffix must not exceed NAMELEN (%1)"
,"11.2.1.2"
#endif
);
const MessageType0 ParserMessages::instanceStartOmittag(
MessageType::error,
MessageFragment::libModule,
243
#ifndef SP_NO_MESSAGE_TEXT
,"document instance must start with document element"
,"7.2p1"
#endif
);
const MessageType1 ParserMessages::grplvl(
MessageType::quantityError,
MessageFragment::libModule,
244
#ifndef SP_NO_MESSAGE_TEXT
,"content model nesting level exceeds GRPLVL (%1)"
,"11.2.4.5p1"
#endif
);
const MessageType1 ParserMessages::grpgtcnt(
MessageType::quantityError,
MessageFragment::libModule,
245
#ifndef SP_NO_MESSAGE_TEXT
,"grand total of content tokens exceeds GRPGTCNT (%1)"
,"11.2.4.5p2"
#endif
);
const MessageType0 ParserMessages::unclosedStartTagShorttag(
MessageType::error,
MessageFragment::libModule,
246
#ifndef SP_NO_MESSAGE_TEXT
,"unclosed start-tag requires SHORTTAG YES"
,"7.4.1p2"
#endif
);
const MessageType0 ParserMessages::netEnablingStartTagShorttag(
MessageType::error,
MessageFragment::libModule,
247
#ifndef SP_NO_MESSAGE_TEXT
,"NET-enabling start-tag requires SHORTTAG YES"
,"7.4.1p2"
#endif
);
const MessageType0 ParserMessages::unclosedEndTagShorttag(
MessageType::error,
MessageFragment::libModule,
248
#ifndef SP_NO_MESSAGE_TEXT
,"unclosed end-tag requires SHORTTAG YES"
,"7.5.1p2"
#endif
);
const MessageType0 ParserMessages::multipleDtds(
MessageType::error,
MessageFragment::libModule,
249
#ifndef SP_NO_MESSAGE_TEXT
,"DTDs other than base allowed only if CONCUR YES or EXPLICIT YES"
,"7.1p6"
#endif
);
const MessageType0 ParserMessages::afterDocumentElementEntityEnd(
MessageType::error,
MessageFragment::libModule,
250
#ifndef SP_NO_MESSAGE_TEXT
,"end of entity other than document entity after document element"
,"7.2p1"
#endif
);
const MessageType1 ParserMessages::declarationAfterDocumentElement(
MessageType::error,
MessageFragment::libModule,
251
#ifndef SP_NO_MESSAGE_TEXT
,"%1 declaration illegal after document element"
,"7.2p1"
#endif
);
const MessageType0 ParserMessages::characterReferenceAfterDocumentElement(
MessageType::error,
MessageFragment::libModule,
252
#ifndef SP_NO_MESSAGE_TEXT
,"character reference illegal after document element"
,"7.2p1"
#endif
);
const MessageType0 ParserMessages::entityReferenceAfterDocumentElement(
MessageType::error,
MessageFragment::libModule,
253
#ifndef SP_NO_MESSAGE_TEXT
,"entity reference illegal after document element"
,"7.2p1"
#endif
);
const MessageType0 ParserMessages::markedSectionAfterDocumentElement(
MessageType::error,
MessageFragment::libModule,
254
#ifndef SP_NO_MESSAGE_TEXT
,"marked section illegal after document element"
,"7.2p1"
#endif
);
const MessageType3 ParserMessages::requiredElementExcluded(
MessageType::error,
MessageFragment::libModule,
255
#ifndef SP_NO_MESSAGE_TEXT
,"the %1 occurrence of %2 in the content model for %3 cannot be excluded at this point because it is contextually required"
,"11.2.5.2p5"
#endif
);
const MessageType3 ParserMessages::invalidExclusion(
MessageType::error,
MessageFragment::libModule,
256
#ifndef SP_NO_MESSAGE_TEXT
,"the %1 occurrence of %2 in the content model for %3 cannot be excluded because it is neither inherently optional nor a member of an OR group"
,"11.2.5.2p4"
#endif
);
const MessageType0 ParserMessages::attributeValueShorttag(
MessageType::error,
MessageFragment::libModule,
257
#ifndef SP_NO_MESSAGE_TEXT
,"an attribute value specification must be an attribute value literal unless SHORTTAG YES is specified"
,"7.9.3.1"
#endif
);
const MessageType0 ParserMessages::conrefNotation(
MessageType::error,
MessageFragment::libModule,
258
#ifndef SP_NO_MESSAGE_TEXT
,"value cannot be specified both for notation attribute and content reference attribute"
,"7.9.4.4p2"
#endif
);
const MessageType1 ParserMessages::duplicateNotationDeclaration(
MessageType::error,
MessageFragment::libModule,
259
#ifndef SP_NO_MESSAGE_TEXT
,"notation %1 already defined"
,"11.4p3"
#endif
);
const MessageType1L ParserMessages::duplicateShortrefDeclaration(
MessageType::error,
MessageFragment::libModule,
260
#ifndef SP_NO_MESSAGE_TEXT
,"short reference map %1 already defined"
,"11.5p3"
,"first defined here"
#endif
);
const MessageType1 ParserMessages::duplicateDelimGeneral(
MessageType::error,
MessageFragment::libModule,
262
#ifndef SP_NO_MESSAGE_TEXT
,"general delimiter role %1 already defined"
,"13.4.6.1"
#endif
);
const MessageType1 ParserMessages::idrefGrpcnt(
MessageType::quantityError,
MessageFragment::libModule,
263
#ifndef SP_NO_MESSAGE_TEXT
,"number of ID references in start-tag must not exceed GRPCNT (%1)"
,"7.9.4.5p5"
#endif
);
const MessageType1 ParserMessages::entityNameGrpcnt(
MessageType::quantityError,
MessageFragment::libModule,
264
#ifndef SP_NO_MESSAGE_TEXT
,"number of entity names in attribute specification list must not exceed GRPCNT (%1)"
,"7.9.4.5p6"
#endif
);
const MessageType2 ParserMessages::attsplen(
MessageType::quantityError,
MessageFragment::libModule,
265
#ifndef SP_NO_MESSAGE_TEXT
,"normalized length of attribute specification list must not exceed ATTSPLEN (%1); length was %2"
,"7.9.2"
#endif
);
const MessageType1 ParserMessages::duplicateDelimShortref(
MessageType::error,
MessageFragment::libModule,
266
#ifndef SP_NO_MESSAGE_TEXT
,"short reference delimiter %1 already specified"
,"13.4.6p2"
#endif
);
const MessageType1 ParserMessages::duplicateDelimShortrefSet(
MessageType::error,
MessageFragment::libModule,
267
#ifndef SP_NO_MESSAGE_TEXT
,"single character short references were already specified for character numbers: %1"
,"13.4.6.2"
#endif
);
const MessageType1 ParserMessages::defaultEntityInAttribute(
MessageType::warning,
MessageFragment::libModule,
268
#ifndef SP_NO_MESSAGE_TEXT
,"default entity used in entity attribute %1"
#endif
);
const MessageType1 ParserMessages::defaultEntityReference(
MessageType::warning,
MessageFragment::libModule,
269
#ifndef SP_NO_MESSAGE_TEXT
,"reference to entity %1 uses default entity"
#endif
);
const MessageType2 ParserMessages::mapDefaultEntity(
MessageType::warning,
MessageFragment::libModule,
270
#ifndef SP_NO_MESSAGE_TEXT
,"entity %1 in short reference map %2 uses default entity"
#endif
);
const MessageType1 ParserMessages::noSuchDtd(
MessageType::error,
MessageFragment::libModule,
271
#ifndef SP_NO_MESSAGE_TEXT
,"no DTD %1 declared"
,"12.1.3p6"
#endif
);
const MessageType1 ParserMessages::noLpdSubset(
MessageType::warning,
MessageFragment::libModule,
272
#ifndef SP_NO_MESSAGE_TEXT
,"LPD %1 has neither internal nor external subset"
#endif
);
const MessageType0 ParserMessages::assocElementDifferentAtts(
MessageType::error,
MessageFragment::libModule,
273
#ifndef SP_NO_MESSAGE_TEXT
,"element types have different link attribute definitions"
,"12.2.1p11"
#endif
);
const MessageType1 ParserMessages::duplicateLinkSet(
MessageType::error,
MessageFragment::libModule,
274
#ifndef SP_NO_MESSAGE_TEXT
,"link set %1 already defined"
,"12.2p6"
#endif
);
const MessageType0 ParserMessages::emptyResultAttributeSpec(
MessageType::error,
MessageFragment::libModule,
275
#ifndef SP_NO_MESSAGE_TEXT
,"empty result attribute specification"
,"12.2.2p8"
#endif
);
const MessageType1 ParserMessages::noSuchSourceElement(
MessageType::error,
MessageFragment::libModule,
276
#ifndef SP_NO_MESSAGE_TEXT
,"no source element type %1"
#endif
);
const MessageType1 ParserMessages::noSuchResultElement(
MessageType::error,
MessageFragment::libModule,
277
#ifndef SP_NO_MESSAGE_TEXT
,"no result element type %1"
#endif
);
const MessageType0 ParserMessages::documentEndLpdSubset(
MessageType::error,
MessageFragment::libModule,
278
#ifndef SP_NO_MESSAGE_TEXT
,"end of document in LPD subset"
#endif
);
const MessageType1 ParserMessages::lpdSubsetDeclaration(
MessageType::error,
MessageFragment::libModule,
279
#ifndef SP_NO_MESSAGE_TEXT
,"%1 declaration not allowed in LPD subset"
#endif
);
const MessageType0 ParserMessages::idlinkDeclSimple(
MessageType::error,
MessageFragment::libModule,
280
#ifndef SP_NO_MESSAGE_TEXT
,"ID link set declaration not allowed in simple link declaration subset"
,"12.1.4.3"
#endif
);
const MessageType0 ParserMessages::linkDeclSimple(
MessageType::error,
MessageFragment::libModule,
281
#ifndef SP_NO_MESSAGE_TEXT
,"link set declaration not allowed in simple link declaration subset"
,"12.1.4.3"
#endif
);
const MessageType1 ParserMessages::simpleLinkAttlistElement(
MessageType::error,
MessageFragment::libModule,
282
#ifndef SP_NO_MESSAGE_TEXT
,"attributes can only be defined for base document element (not %1) in simple link declaration subset"
,"12.1.4.3"
#endif
);
const MessageType0 ParserMessages::shortrefOnlyInBaseDtd(
MessageType::error,
MessageFragment::libModule,
283
#ifndef SP_NO_MESSAGE_TEXT
,"a short reference mapping declaration is allowed only in the base DTD"
,"11.1p11"
#endif
);
const MessageType0 ParserMessages::usemapOnlyInBaseDtd(
MessageType::error,
MessageFragment::libModule,
284
#ifndef SP_NO_MESSAGE_TEXT
,"a short reference use declaration is allowed only in the base DTD"
,"11.1p11"
#endif
);
const MessageType0 ParserMessages::linkAttributeDefaultValue(
MessageType::error,
MessageFragment::libModule,
285
#ifndef SP_NO_MESSAGE_TEXT
,"default value of link attribute cannot be CURRENT or CONREF"
,"12.1.4.2p3"
#endif
);
const MessageType0 ParserMessages::linkAttributeDeclaredValue(
MessageType::error,
MessageFragment::libModule,
286
#ifndef SP_NO_MESSAGE_TEXT
,"declared value of link attribute cannot be ID, IDREF, IDREFS or NOTATION"
,"12.1.4.2p2"
#endif
);
const MessageType0 ParserMessages::simpleLinkFixedAttribute(
MessageType::error,
MessageFragment::libModule,
287
#ifndef SP_NO_MESSAGE_TEXT
,"only fixed attributes can be defined in simple LPD"
,"12.1.4.3"
#endif
);
const MessageType0 ParserMessages::duplicateIdLinkSet(
MessageType::error,
MessageFragment::libModule,
288
#ifndef SP_NO_MESSAGE_TEXT
,"only one ID link set declaration allowed in an LPD subset"
,"12.1.4p1"
#endif
);
const MessageType1 ParserMessages::noInitialLinkSet(
MessageType::error,
MessageFragment::libModule,
289
#ifndef SP_NO_MESSAGE_TEXT
,"no initial link set defined for LPD %1"
,"12.2p7"
#endif
);
const MessageType1 ParserMessages::notationUndefinedSourceDtd(
MessageType::error,
MessageFragment::libModule,
290
#ifndef SP_NO_MESSAGE_TEXT
,"notation %1 not defined in source DTD"
#endif
);
const MessageType0 ParserMessages::simpleLinkResultNotImplied(
MessageType::error,
MessageFragment::libModule,
291
#ifndef SP_NO_MESSAGE_TEXT
,"result document type in simple link specification must be implied"
,"12.1.1p1"
#endif
);
const MessageType0 ParserMessages::simpleLinkFeature(
MessageType::error,
MessageFragment::libModule,
292
#ifndef SP_NO_MESSAGE_TEXT
,"simple link requires SIMPLE YES"
,"12.1.1p5"
#endif
);
const MessageType0 ParserMessages::implicitLinkFeature(
MessageType::error,
MessageFragment::libModule,
293
#ifndef SP_NO_MESSAGE_TEXT
,"implicit link requires IMPLICIT YES"
,"12.1.2p4"
#endif
);
const MessageType0 ParserMessages::explicitLinkFeature(
MessageType::error,
MessageFragment::libModule,
294
#ifndef SP_NO_MESSAGE_TEXT
,"explicit link requires EXPLICIT YES"
,"12.1.3p4"
#endif
);
const MessageType0 ParserMessages::lpdBeforeBaseDtd(
MessageType::error,
MessageFragment::libModule,
295
#ifndef SP_NO_MESSAGE_TEXT
,"LPD not allowed before first DTD"
,"7.1p1"
#endif
);
const MessageType0 ParserMessages::dtdAfterLpd(
MessageType::error,
MessageFragment::libModule,
296
#ifndef SP_NO_MESSAGE_TEXT
,"DTD not allowed after an LPD"
,"7.1p1"
#endif
);
const MessageType1 ParserMessages::unstableLpdGeneralEntity(
MessageType::error,
MessageFragment::libModule,
297
#ifndef SP_NO_MESSAGE_TEXT
,"definition of general entity %1 is unstable"
#endif
);
const MessageType1 ParserMessages::unstableLpdParameterEntity(
MessageType::error,
MessageFragment::libModule,
298
#ifndef SP_NO_MESSAGE_TEXT
,"definition of parameter entity %1 is unstable"
#endif
);
const MessageType1 ParserMessages::multipleIdLinkRuleAttribute(
MessageType::error,
MessageFragment::libModule,
299
#ifndef SP_NO_MESSAGE_TEXT
,"multiple link rules for ID %1 but not all have link attribute specifications"
,"12.2.3p3"
#endif
);
const MessageType1 ParserMessages::multipleLinkRuleAttribute(
MessageType::error,
MessageFragment::libModule,
300
#ifndef SP_NO_MESSAGE_TEXT
,"multiple link rules for element type %1 but not all have link attribute specifications"
,"12.2.1p9"
#endif
);
const MessageType2 ParserMessages::uselinkBadLinkSet(
MessageType::error,
MessageFragment::libModule,
301
#ifndef SP_NO_MESSAGE_TEXT
,"link type %1 does not have a link set %2"
,"12.3p10"
#endif
);
const MessageType1 ParserMessages::uselinkSimpleLpd(
MessageType::error,
MessageFragment::libModule,
302
#ifndef SP_NO_MESSAGE_TEXT
,"link set use declaration for simple link process"
#endif
);
const MessageType1 ParserMessages::uselinkBadLinkType(
MessageType::error,
MessageFragment::libModule,
303
#ifndef SP_NO_MESSAGE_TEXT
,"no link type %1"
,"12.3p10"
#endif
);
const MessageType1 ParserMessages::duplicateDtdLpd(
MessageType::error,
MessageFragment::libModule,
304
#ifndef SP_NO_MESSAGE_TEXT
,"both document type and link type %1"
,"12.1p3"
#endif
);
const MessageType1 ParserMessages::duplicateLpd(
MessageType::error,
MessageFragment::libModule,
305
#ifndef SP_NO_MESSAGE_TEXT
,"link type %1 already defined"
,"12.1p3"
#endif
);
const MessageType1 ParserMessages::duplicateDtd(
MessageType::error,
MessageFragment::libModule,
306
#ifndef SP_NO_MESSAGE_TEXT
,"document type %1 already defined"
,"11.1p7"
#endif
);
const MessageType1 ParserMessages::undefinedLinkSet(
MessageType::error,
MessageFragment::libModule,
307
#ifndef SP_NO_MESSAGE_TEXT
,"link set %1 used in LPD but not defined"
,"12.2.2p8"
#endif
);
const MessageType1 ParserMessages::duplicateImpliedResult(
MessageType::error,
MessageFragment::libModule,
308
#ifndef SP_NO_MESSAGE_TEXT
,"#IMPLIED already linked to result element type %1"
,"12.2.2p6"
#endif
);
const MessageType1 ParserMessages::simpleLinkCount(
MessageType::error,
MessageFragment::libModule,
309
#ifndef SP_NO_MESSAGE_TEXT
,"number of active simple link processes exceeds quantity specified for SIMPLE parameter in SGML declaration (%1)"
,"12.1.1.1p1"
#endif
);
const MessageType0 ParserMessages::duplicateExplicitChain(
MessageType::error,
MessageFragment::libModule,
310
#ifndef SP_NO_MESSAGE_TEXT
,"only one chain of explicit link processes can be active"
,"7.1p11"
#endif
);
const MessageType1 ParserMessages::explicit1RequiresSourceTypeBase(
MessageType::error,
MessageFragment::libModule,
311
#ifndef SP_NO_MESSAGE_TEXT
,"source document type name for link type %1 must be base document type since EXPLICIT YES 1"
,"12.1.2p5 12.1.3p5 12.1.3.1"
#endif
);
const MessageType0 ParserMessages::oneImplicitLink(
MessageType::error,
MessageFragment::libModule,
312
#ifndef SP_NO_MESSAGE_TEXT
,"only one implicit link process can be active"
,"7.1p10"
#endif
);
const MessageType1 ParserMessages::sorryLink(
MessageType::warning,
MessageFragment::libModule,
313
#ifndef SP_NO_MESSAGE_TEXT
,"sorry, link type %1 not activated: only one implicit or explicit link process can be active (with base document type as source document type)"
#endif
);
const MessageType0 ParserMessages::entityReferenceMissingName(
MessageType::error,
MessageFragment::libModule,
314
#ifndef SP_NO_MESSAGE_TEXT
,"name missing after name group in entity reference"
,"9.4.4p1 9.4.4p2"
#endif
);
const MessageType1 ParserMessages::explicitNoRequiresSourceTypeBase(
MessageType::error,
MessageFragment::libModule,
315
#ifndef SP_NO_MESSAGE_TEXT
,"source document type name for link type %1 must be base document type since EXPLICIT NO"
,"12.1.2p5 12.1.3p5 12.1.3.1"
#endif
);
const MessageType0 ParserMessages::linkActivateTooLate(
MessageType::warning,
MessageFragment::libModule,
316
#ifndef SP_NO_MESSAGE_TEXT
,"link process must be activated before base DTD"
#endif
);
const MessageType0 ParserMessages::pass2Ee(
MessageType::error,
MessageFragment::libModule,
317
#ifndef SP_NO_MESSAGE_TEXT
,"unexpected entity end while starting second pass"
#endif
);
const MessageType2 ParserMessages::idlinkElementType(
MessageType::error,
MessageFragment::libModule,
318
#ifndef SP_NO_MESSAGE_TEXT
,"type %1 of element with ID %2 not associated element type for applicable link rule in ID link set"
,"12.2.3p2"
#endif
);
const MessageType0 ParserMessages::datatagNotImplemented(
MessageType::error,
MessageFragment::libModule,
319
#ifndef SP_NO_MESSAGE_TEXT
,"DATATAG feature not implemented"
#endif
);
const MessageType0 ParserMessages::startTagMissingName(
MessageType::error,
MessageFragment::libModule,
320
#ifndef SP_NO_MESSAGE_TEXT
,"generic identifier specification missing after document type specification in start-tag"
,"7.4p1"
#endif
);
const MessageType0 ParserMessages::endTagMissingName(
MessageType::error,
MessageFragment::libModule,
321
#ifndef SP_NO_MESSAGE_TEXT
,"generic identifier specification missing after document type specification in end-tag"
,"7.5p1"
#endif
);
const MessageType0 ParserMessages::startTagGroupNet(
MessageType::error,
MessageFragment::libModule,
322
#ifndef SP_NO_MESSAGE_TEXT
,"a NET-enabling start-tag cannot include a document type specification"
,"7.4.1.3p1"
#endif
);
const MessageType0 ParserMessages::documentElementUndefined(
MessageType::error,
MessageFragment::libModule,
323
#ifndef SP_NO_MESSAGE_TEXT
,"DTD did not contain element declaration for document type name"
,"11.1p10"
#endif
);
const MessageType0 ParserMessages::badDefaultSgmlDecl(
MessageType::error,
MessageFragment::libModule,
324
#ifndef SP_NO_MESSAGE_TEXT
,"invalid default SGML declaration"
#endif
);
const MessageType1L ParserMessages::nonExistentEntityRef(
MessageType::error,
MessageFragment::libModule,
325
#ifndef SP_NO_MESSAGE_TEXT
,"reference to entity %1 for which no system identifier could be generated"
,0
,"entity was defined here"
#endif
);
const MessageType0 ParserMessages::pcdataUnreachable(
MessageType::warning,
MessageFragment::libModule,
327
#ifndef SP_NO_MESSAGE_TEXT
,"content model is mixed but does not allow #PCDATA everywhere"
,"11.2.4p11"
#endif
);
const MessageType0 ParserMessages::sdRangeNotSingleChar(
MessageType::error,
MessageFragment::libModule,
328
#ifndef SP_NO_MESSAGE_TEXT
,"start or end of range must specify a single character"
#endif
);
const MessageType0 ParserMessages::sdInvalidRange(
MessageType::error,
MessageFragment::libModule,
329
#ifndef SP_NO_MESSAGE_TEXT
,"number of first character in range must not exceed number of second character in range"
#endif
);
const MessageType0 ParserMessages::sdEmptyDelimiter(
MessageType::error,
MessageFragment::libModule,
330
#ifndef SP_NO_MESSAGE_TEXT
,"delimiter cannot be an empty string"
#endif
);
const MessageType0 ParserMessages::tooManyCharsMinimumLiteral(
MessageType::warning,
MessageFragment::libModule,
331
#ifndef SP_NO_MESSAGE_TEXT
,"too many characters assigned same meaning with minimum literal"
#endif
);
const MessageType1 ParserMessages::defaultedEntityDefined(
MessageType::warning,
MessageFragment::libModule,
332
#ifndef SP_NO_MESSAGE_TEXT
,"earlier reference to entity %1 used default entity"
#endif
);
const MessageType0 ParserMessages::emptyStartTag(
MessageType::warning,
MessageFragment::libModule,
333
#ifndef SP_NO_MESSAGE_TEXT
,"empty start-tag"
#endif
);
const MessageType0 ParserMessages::emptyEndTag(
MessageType::warning,
MessageFragment::libModule,
334
#ifndef SP_NO_MESSAGE_TEXT
,"empty end-tag"
#endif
);
const MessageType1 ParserMessages::unusedMap(
MessageType::warning,
MessageFragment::libModule,
335
#ifndef SP_NO_MESSAGE_TEXT
,"unused short reference map %1"
#endif
);
const MessageType1 ParserMessages::unusedParamEntity(
MessageType::warning,
MessageFragment::libModule,
336
#ifndef SP_NO_MESSAGE_TEXT
,"unused parameter entity %1"
#endif
);
const MessageType1 ParserMessages::cannotGenerateSystemIdPublic(
MessageType::warning,
MessageFragment::libModule,
337
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for public text %1"
#endif
);
const MessageType1 ParserMessages::cannotGenerateSystemIdGeneral(
MessageType::warning,
MessageFragment::libModule,
338
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for general entity %1"
#endif
);
const MessageType1 ParserMessages::cannotGenerateSystemIdParameter(
MessageType::warning,
MessageFragment::libModule,
339
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for parameter entity %1"
#endif
);
const MessageType1 ParserMessages::cannotGenerateSystemIdDoctype(
MessageType::warning,
MessageFragment::libModule,
340
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for document type %1"
#endif
);
const MessageType1 ParserMessages::cannotGenerateSystemIdLinktype(
MessageType::warning,
MessageFragment::libModule,
341
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for link type %1"
#endif
);
const MessageType1 ParserMessages::cannotGenerateSystemIdNotation(
MessageType::warning,
MessageFragment::libModule,
342
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for notation %1"
#endif
);
const MessageType1 ParserMessages::excludeIncludeSame(
MessageType::warning,
MessageFragment::libModule,
343
#ifndef SP_NO_MESSAGE_TEXT
,"element type %1 both included and excluded"
#endif
);
const MessageType1 ParserMessages::implyingDtd(
MessageType::error,
MessageFragment::libModule,
344
#ifndef SP_NO_MESSAGE_TEXT
,"no document type declaration; implying %1"
#endif
);
const MessageType1 ParserMessages::afdrVersion(
MessageType::error,
MessageFragment::libModule,
345
#ifndef SP_NO_MESSAGE_TEXT
,"minimum data of AFDR declaration must be \"ISO/IEC 10744:1997\" not %1"
#endif
);
const MessageType0 ParserMessages::missingAfdrDecl(
MessageType::error,
MessageFragment::libModule,
346
#ifndef SP_NO_MESSAGE_TEXT
,"AFDR declaration required before use of AFDR extensions"
#endif
);
const MessageType0 ParserMessages::enrRequired(
MessageType::error,
MessageFragment::libModule,
347
#ifndef SP_NO_MESSAGE_TEXT
,"ENR extensions were used but minimum literal was not \"ISO 8879:1986 (ENR)\" or \"ISO 8879:1986 (WWW)\""
#endif
);
const MessageType1 ParserMessages::numericCharRefLiteralNonSgml(
MessageType::error,
MessageFragment::libModule,
348
#ifndef SP_NO_MESSAGE_TEXT
,"illegal numeric character reference to non-SGML character %1 in literal"
#endif
);
const MessageType2 ParserMessages::numericCharRefUnknownDesc(
MessageType::error,
MessageFragment::libModule,
349
#ifndef SP_NO_MESSAGE_TEXT
,"cannot convert character reference to number %1 because description %2 unrecognized"
#endif
);
const MessageType3 ParserMessages::numericCharRefUnknownBase(
MessageType::error,
MessageFragment::libModule,
350
#ifndef SP_NO_MESSAGE_TEXT
,"cannot convert character reference to number %1 because character %2 from baseset %3 unknown"
#endif
);
const MessageType1 ParserMessages::numericCharRefBadInternal(
MessageType::error,
MessageFragment::libModule,
351
#ifndef SP_NO_MESSAGE_TEXT
,"character reference to number %1 cannot be converted because of problem with internal character set"
#endif
);
const MessageType1 ParserMessages::numericCharRefNoInternal(
MessageType::error,
MessageFragment::libModule,
352
#ifndef SP_NO_MESSAGE_TEXT
,"cannot convert character reference to number %1 because character not in internal character set"
#endif
);
const MessageType0 ParserMessages::wwwRequired(
MessageType::error,
MessageFragment::libModule,
353
#ifndef SP_NO_MESSAGE_TEXT
,"Web SGML adaptations were used but minimum literal was not \"ISO 8879:1986 (WWW)\""
#endif
);
const MessageType1 ParserMessages::attributeTokenNotUnique(
MessageType::error,
MessageFragment::libModule,
354
#ifndef SP_NO_MESSAGE_TEXT
,"token %1 can be value for multiple attributes so attribute name required"
#endif
);
const MessageType1 ParserMessages::hexNumberLength(
MessageType::quantityError,
MessageFragment::libModule,
355
#ifndef SP_NO_MESSAGE_TEXT
,"length of hex number must not exceed NAMELEN (%1)"
#endif
);
const MessageType1 ParserMessages::entityNameSyntax(
MessageType::warning,
MessageFragment::libModule,
356
#ifndef SP_NO_MESSAGE_TEXT
,"%1 is not a valid name in the declared concrete syntax"
#endif
);
const MessageType0 ParserMessages::cdataContent(
MessageType::warning,
MessageFragment::libModule,
357
#ifndef SP_NO_MESSAGE_TEXT
,"CDATA declared content"
#endif
);
const MessageType0 ParserMessages::rcdataContent(
MessageType::warning,
MessageFragment::libModule,
358
#ifndef SP_NO_MESSAGE_TEXT
,"RCDATA declared content"
#endif
);
const MessageType0 ParserMessages::inclusion(
MessageType::warning,
MessageFragment::libModule,
359
#ifndef SP_NO_MESSAGE_TEXT
,"inclusion"
#endif
);
const MessageType0 ParserMessages::exclusion(
MessageType::warning,
MessageFragment::libModule,
360
#ifndef SP_NO_MESSAGE_TEXT
,"exclusion"
#endif
);
const MessageType0 ParserMessages::numberDeclaredValue(
MessageType::warning,
MessageFragment::libModule,
361
#ifndef SP_NO_MESSAGE_TEXT
,"NUMBER or NUMBERS declared value"
#endif
);
const MessageType0 ParserMessages::nameDeclaredValue(
MessageType::warning,
MessageFragment::libModule,
362
#ifndef SP_NO_MESSAGE_TEXT
,"NAME or NAMES declared value"
#endif
);
const MessageType0 ParserMessages::nutokenDeclaredValue(
MessageType::warning,
MessageFragment::libModule,
363
#ifndef SP_NO_MESSAGE_TEXT
,"NUTOKEN or NUTOKENS declared value"
#endif
);
const MessageType0 ParserMessages::conrefAttribute(
MessageType::warning,
MessageFragment::libModule,
364
#ifndef SP_NO_MESSAGE_TEXT
,"CONREF attribute"
#endif
);
const MessageType0 ParserMessages::currentAttribute(
MessageType::warning,
MessageFragment::libModule,
365
#ifndef SP_NO_MESSAGE_TEXT
,"CURRENT attribute"
#endif
);
const MessageType0 ParserMessages::tempMarkedSection(
MessageType::warning,
MessageFragment::libModule,
366
#ifndef SP_NO_MESSAGE_TEXT
,"TEMP marked section"
#endif
);
const MessageType0 ParserMessages::instanceIncludeMarkedSection(
MessageType::warning,
MessageFragment::libModule,
367
#ifndef SP_NO_MESSAGE_TEXT
,"included marked section in the instance"
#endif
);
const MessageType0 ParserMessages::instanceIgnoreMarkedSection(
MessageType::warning,
MessageFragment::libModule,
368
#ifndef SP_NO_MESSAGE_TEXT
,"ignored marked section in the instance"
#endif
);
const MessageType0 ParserMessages::rcdataMarkedSection(
MessageType::warning,
MessageFragment::libModule,
369
#ifndef SP_NO_MESSAGE_TEXT
,"RCDATA marked section"
#endif
);
const MessageType0 ParserMessages::piEntity(
MessageType::warning,
MessageFragment::libModule,
370
#ifndef SP_NO_MESSAGE_TEXT
,"processing instruction entity"
#endif
);
const MessageType0 ParserMessages::bracketEntity(
MessageType::warning,
MessageFragment::libModule,
371
#ifndef SP_NO_MESSAGE_TEXT
,"bracketed text entity"
#endif
);
const MessageType0 ParserMessages::internalCdataEntity(
MessageType::warning,
MessageFragment::libModule,
372
#ifndef SP_NO_MESSAGE_TEXT
,"internal CDATA entity"
#endif
);
const MessageType0 ParserMessages::internalSdataEntity(
MessageType::warning,
MessageFragment::libModule,
373
#ifndef SP_NO_MESSAGE_TEXT
,"internal SDATA entity"
#endif
);
const MessageType0 ParserMessages::externalCdataEntity(
MessageType::warning,
MessageFragment::libModule,
374
#ifndef SP_NO_MESSAGE_TEXT
,"external CDATA entity"
#endif
);
const MessageType0 ParserMessages::externalSdataEntity(
MessageType::warning,
MessageFragment::libModule,
375
#ifndef SP_NO_MESSAGE_TEXT
,"external SDATA entity"
#endif
);
const MessageType0 ParserMessages::dataAttributes(
MessageType::warning,
MessageFragment::libModule,
376
#ifndef SP_NO_MESSAGE_TEXT
,"attribute definition list declaration for notation"
#endif
);
const MessageType0 ParserMessages::rank(
MessageType::warning,
MessageFragment::libModule,
377
#ifndef SP_NO_MESSAGE_TEXT
,"rank stem"
#endif
);
const MessageType0 ParserMessages::missingSystemId(
MessageType::warning,
MessageFragment::libModule,
378
#ifndef SP_NO_MESSAGE_TEXT
,"no system id specified"
#endif
);
const MessageType0 ParserMessages::psComment(
MessageType::warning,
MessageFragment::libModule,
379
#ifndef SP_NO_MESSAGE_TEXT
,"comment in parameter separator"
#endif
);
const MessageType0 ParserMessages::namedCharRef(
MessageType::warning,
MessageFragment::libModule,
380
#ifndef SP_NO_MESSAGE_TEXT
,"named character reference"
#endif
);
const MessageType0 ParserMessages::andGroup(
MessageType::warning,
MessageFragment::libModule,
381
#ifndef SP_NO_MESSAGE_TEXT
,"AND group"
#endif
);
const MessageType0 ParserMessages::attributeValueNotLiteral(
MessageType::warning,
MessageFragment::libModule,
382
#ifndef SP_NO_MESSAGE_TEXT
,"attribute value not a literal"
#endif
);
const MessageType0 ParserMessages::missingAttributeName(
MessageType::warning,
MessageFragment::libModule,
383
#ifndef SP_NO_MESSAGE_TEXT
,"attribute name missing"
#endif
);
const MessageType0 ParserMessages::elementGroupDecl(
MessageType::warning,
MessageFragment::libModule,
384
#ifndef SP_NO_MESSAGE_TEXT
,"element declaration for group of element types"
#endif
);
const MessageType0 ParserMessages::attlistGroupDecl(
MessageType::warning,
MessageFragment::libModule,
385
#ifndef SP_NO_MESSAGE_TEXT
,"attribute definition list declaration for group of element types"
#endif
);
const MessageType0 ParserMessages::emptyCommentDecl(
MessageType::warning,
MessageFragment::libModule,
386
#ifndef SP_NO_MESSAGE_TEXT
,"empty comment declaration"
#endif
);
const MessageType0 ParserMessages::commentDeclS(
MessageType::warning,
MessageFragment::libModule,
387
#ifndef SP_NO_MESSAGE_TEXT
,"S separator in comment declaration"
#endif
);
const MessageType0 ParserMessages::commentDeclMultiple(
MessageType::warning,
MessageFragment::libModule,
388
#ifndef SP_NO_MESSAGE_TEXT
,"multiple comments in comment declaration"
#endif
);
const MessageType0 ParserMessages::missingStatusKeyword(
MessageType::warning,
MessageFragment::libModule,
389
#ifndef SP_NO_MESSAGE_TEXT
,"no status keyword"
#endif
);
const MessageType0 ParserMessages::multipleStatusKeyword(
MessageType::warning,
MessageFragment::libModule,
390
#ifndef SP_NO_MESSAGE_TEXT
,"multiple status keywords"
#endif
);
const MessageType0 ParserMessages::instanceParamEntityRef(
MessageType::warning,
MessageFragment::libModule,
391
#ifndef SP_NO_MESSAGE_TEXT
,"parameter entity reference in document instance"
#endif
);
const MessageType0 ParserMessages::current(
MessageType::warning,
MessageFragment::libModule,
392
#ifndef SP_NO_MESSAGE_TEXT
,"CURRENT attribute"
#endif
);
const MessageType0 ParserMessages::minimizationParam(
MessageType::warning,
MessageFragment::libModule,
393
#ifndef SP_NO_MESSAGE_TEXT
,"element type minimization parameter"
#endif
);
const MessageType0 ParserMessages::refc(
MessageType::warning,
MessageFragment::libModule,
394
#ifndef SP_NO_MESSAGE_TEXT
,"reference not terminated by REFC delimiter"
#endif
);
const MessageType0 ParserMessages::pcdataNotFirstInGroup(
MessageType::warning,
MessageFragment::libModule,
395
#ifndef SP_NO_MESSAGE_TEXT
,"#PCDATA not first in model group"
#endif
);
const MessageType0 ParserMessages::pcdataInSeqGroup(
MessageType::warning,
MessageFragment::libModule,
396
#ifndef SP_NO_MESSAGE_TEXT
,"#PCDATA in SEQ group"
#endif
);
const MessageType0 ParserMessages::pcdataInNestedModelGroup(
MessageType::warning,
MessageFragment::libModule,
397
#ifndef SP_NO_MESSAGE_TEXT
,"#PCDATA in nested model group"
#endif
);
const MessageType0 ParserMessages::pcdataGroupNotRep(
MessageType::warning,
MessageFragment::libModule,
398
#ifndef SP_NO_MESSAGE_TEXT
,"#PCDATA in model group that does not have REP occurrence indicator"
#endif
);
const MessageType0 ParserMessages::nameGroupNotOr(
MessageType::warning,
MessageFragment::libModule,
399
#ifndef SP_NO_MESSAGE_TEXT
,"name group or name token group used connector other than OR"
#endif
);
const MessageType0 ParserMessages::piMissingName(
MessageType::warning,
MessageFragment::libModule,
400
#ifndef SP_NO_MESSAGE_TEXT
,"processing instruction does not start with name"
#endif
);
const MessageType0 ParserMessages::instanceStatusKeywordSpecS(
MessageType::warning,
MessageFragment::libModule,
401
#ifndef SP_NO_MESSAGE_TEXT
,"S separator in status keyword specification in document instance"
#endif
);
const MessageType0 ParserMessages::externalDataEntityRef(
MessageType::warning,
MessageFragment::libModule,
402
#ifndef SP_NO_MESSAGE_TEXT
,"reference to external data entity"
#endif
);
const MessageType0 ParserMessages::attributeValueExternalEntityRef(
MessageType::warning,
MessageFragment::libModule,
403
#ifndef SP_NO_MESSAGE_TEXT
,"reference to external entity in attribute value"
#endif
);
const MessageType1 ParserMessages::dataCharDelim(
MessageType::warning,
MessageFragment::libModule,
404
#ifndef SP_NO_MESSAGE_TEXT
,"character %1 is the first character of a delimiter but occurred as data"
#endif
);
const MessageType0 ParserMessages::explicitSgmlDecl(
MessageType::warning,
MessageFragment::libModule,
405
#ifndef SP_NO_MESSAGE_TEXT
,"SGML declaration was not implied"
#endif
);
const MessageType0 ParserMessages::internalSubsetMarkedSection(
MessageType::warning,
MessageFragment::libModule,
406
#ifndef SP_NO_MESSAGE_TEXT
,"marked section in internal DTD subset"
#endif
);
const MessageType0 ParserMessages::nestcWithoutNet(
MessageType::error,
MessageFragment::libModule,
407
#ifndef SP_NO_MESSAGE_TEXT
,"NET-enabling start-tag not immediately followed by null end-tag"
#endif
);
const MessageType0 ParserMessages::contentAsyncEntityRef(
MessageType::error,
MessageFragment::libModule,
408
#ifndef SP_NO_MESSAGE_TEXT
,"entity end in different element from entity reference"
#endif
);
const MessageType0 ParserMessages::immednetRequiresEmptynrm(
MessageType::error,
MessageFragment::libModule,
409
#ifndef SP_NO_MESSAGE_TEXT
,"NETENABL IMMEDNET requires EMPTYNRM YES"
#endif
);
const MessageType0 ParserMessages::nonSgmlCharRef(
MessageType::warning,
MessageFragment::libModule,
410
#ifndef SP_NO_MESSAGE_TEXT
,"reference to non-SGML character"
#endif
);
const MessageType0 ParserMessages::defaultEntityDecl(
MessageType::warning,
MessageFragment::libModule,
411
#ifndef SP_NO_MESSAGE_TEXT
,"declaration of default entity"
#endif
);
const MessageType0 ParserMessages::internalSubsetPsParamEntityRef(
MessageType::warning,
MessageFragment::libModule,
412
#ifndef SP_NO_MESSAGE_TEXT
,"reference to parameter entity in parameter separator in internal subset"
#endif
);
const MessageType0 ParserMessages::internalSubsetTsParamEntityRef(
MessageType::warning,
MessageFragment::libModule,
413
#ifndef SP_NO_MESSAGE_TEXT
,"reference to parameter entity in token separator in internal subset"
#endif
);
const MessageType0 ParserMessages::internalSubsetLiteralParamEntityRef(
MessageType::warning,
MessageFragment::libModule,
414
#ifndef SP_NO_MESSAGE_TEXT
,"reference to parameter entity in parameter literal in internal subset"
#endif
);
const MessageType0 ParserMessages::cannotGenerateSystemIdSgml(
MessageType::error,
MessageFragment::libModule,
415
#ifndef SP_NO_MESSAGE_TEXT
,"cannot generate system identifier for SGML declaration reference"
#endif
);
const MessageType1 ParserMessages::sdTextClass(
MessageType::error,
MessageFragment::libModule,
416
#ifndef SP_NO_MESSAGE_TEXT
,"public text class of formal public identifier of SGML declaration must be SD"
#endif
);
const MessageType0 ParserMessages::sgmlDeclRefRequiresWww(
MessageType::error,
MessageFragment::libModule,
417
#ifndef SP_NO_MESSAGE_TEXT
,"SGML declaration reference was used but minimum literal was not \"ISO 8879:1986 (WWW)\""
#endif
);
const MessageType0 ParserMessages::pcdataGroupMemberOccurrenceIndicator(
MessageType::warning,
MessageFragment::libModule,
418
#ifndef SP_NO_MESSAGE_TEXT
,"member of model group containing #PCDATA has occurrence indicator"
#endif
);
const MessageType0 ParserMessages::pcdataGroupMemberModelGroup(
MessageType::warning,
MessageFragment::libModule,
419
#ifndef SP_NO_MESSAGE_TEXT
,"member of model group containing #PCDATA is a model group"
#endif
);
const MessageType0 ParserMessages::entityRefNone(
MessageType::error,
MessageFragment::libModule,
420
#ifndef SP_NO_MESSAGE_TEXT
,"reference to non-predefined entity"
#endif
);
const MessageType0 ParserMessages::entityRefInternal(
MessageType::error,
MessageFragment::libModule,
421
#ifndef SP_NO_MESSAGE_TEXT
,"reference to external entity"
#endif
);
const MessageType0 ParserMessages::implydefEntityDefault(
MessageType::error,
MessageFragment::libModule,
422
#ifndef SP_NO_MESSAGE_TEXT
,"declaration of default entity conflicts with IMPLYDEF ENTITY YES"
#endif
);
const MessageType0 ParserMessages::sorryActiveDoctypes(
MessageType::error,
MessageFragment::libModule,
423
#ifndef SP_NO_MESSAGE_TEXT
,"parsing with respect to more than one active doctype not supported"
#endif
);
const MessageType0 ParserMessages::activeDocLink(
MessageType::error,
MessageFragment::libModule,
424
#ifndef SP_NO_MESSAGE_TEXT
,"cannot have active doctypes and link types at the same time"
,"7.1"
#endif
);
const MessageType1 ParserMessages::concurrentInstances(
MessageType::error,
MessageFragment::libModule,
425
#ifndef SP_NO_MESSAGE_TEXT
,"number of concurrent document instances exceeds quantity specified for CONCUR parameter in SGML declaration (%1)"
,"7.2.1"
#endif
);
const MessageType0 ParserMessages::datatagBaseDtd(
MessageType::error,
MessageFragment::libModule,
426
#ifndef SP_NO_MESSAGE_TEXT
,"datatag group can only be specified in base document type"
,"11.2.4.4"
#endif
);
const MessageType0 ParserMessages::emptyStartTagBaseDtd(
MessageType::error,
MessageFragment::libModule,
427
#ifndef SP_NO_MESSAGE_TEXT
,"element not in the base document type can't have an empty start-tag"
,"7.4.1.1"
#endif
);
const MessageType0 ParserMessages::emptyEndTagBaseDtd(
MessageType::error,
MessageFragment::libModule,
428
#ifndef SP_NO_MESSAGE_TEXT
,"element not in base document type can't have an empty end-tag"
,"7.5.1.1"
#endif
);
const MessageType0 ParserMessages::immediateRecursion(
MessageType::warning,
MessageFragment::libModule,
429
#ifndef SP_NO_MESSAGE_TEXT
,"immediately recursive element"
#endif
);
const MessageType1 ParserMessages::urnMissingField(
MessageType::error,
MessageFragment::libModule,
430
#ifndef SP_NO_MESSAGE_TEXT
,"invalid URN %1: missing \":\""
#endif
);
const MessageType1 ParserMessages::urnMissingPrefix(
MessageType::error,
MessageFragment::libModule,
431
#ifndef SP_NO_MESSAGE_TEXT
,"invalid URN %1: missing \"urn:\" prefix"
#endif
);
const MessageType1 ParserMessages::urnInvalidNid(
MessageType::error,
MessageFragment::libModule,
432
#ifndef SP_NO_MESSAGE_TEXT
,"invalid URN %1: invalid namespace identifier"
#endif
);
const MessageType1 ParserMessages::urnInvalidNss(
MessageType::error,
MessageFragment::libModule,
433
#ifndef SP_NO_MESSAGE_TEXT
,"invalid URN %1: invalid namespace specific string"
#endif
);
const MessageType1 ParserMessages::urnExtraField(
MessageType::error,
MessageFragment::libModule,
434
#ifndef SP_NO_MESSAGE_TEXT
,"invalid URN %1: extra field"
#endif
);
const MessageType0 ParserMessages::omittedProlog(
MessageType::error,
MessageFragment::libModule,
435
#ifndef SP_NO_MESSAGE_TEXT
,"prolog can't be omitted unless CONCUR NO and LINK EXPLICIT NO and either IMPLYDEF ELEMENT YES or IMPLYDEF DOCTYPE YES"
#endif
);
const MessageType0 ParserMessages::impliedDocumentElement(
MessageType::error,
MessageFragment::libModule,
436
#ifndef SP_NO_MESSAGE_TEXT
,"can't determine name of #IMPLIED document element"
#endif
);
const MessageType0 ParserMessages::impliedDoctypeConcurLink(
MessageType::error,
MessageFragment::libModule,
437
#ifndef SP_NO_MESSAGE_TEXT
,"can't use #IMPLICIT doctype unless CONCUR NO and LINK EXPLICIT NO"
#endif
);
const MessageType0 ParserMessages::sorryImpliedDoctype(
MessageType::error,
MessageFragment::libModule,
438
#ifndef SP_NO_MESSAGE_TEXT
,"Sorry, #IMPLICIT doctypes not implemented"
#endif
);
const MessageType0 ParserMessages::dtdDataEntityReference(
MessageType::warning,
MessageFragment::libModule,
439
#ifndef SP_NO_MESSAGE_TEXT
,"reference to DTD data entity ignored"
#endif
);
const MessageType2 ParserMessages::parameterEntityNotationUndefined(
MessageType::error,
MessageFragment::libModule,
440
#ifndef SP_NO_MESSAGE_TEXT
,"notation %1 for parameter entity %2 undefined"
#endif
);
const MessageType1 ParserMessages::dsEntityNotationUndefined(
MessageType::error,
MessageFragment::libModule,
441
#ifndef SP_NO_MESSAGE_TEXT
,"notation %1 for external subset undefined"
#endif
);
const MessageFragment ParserMessages::delimStart(
MessageFragment::libModule,
1000
#ifndef SP_NO_MESSAGE_TEXT
,"delimiter "
#endif
);
const MessageFragment ParserMessages::digit(
MessageFragment::libModule,
1002
#ifndef SP_NO_MESSAGE_TEXT
,"digit"
#endif
);
const MessageFragment ParserMessages::nameStartCharacter(
MessageFragment::libModule,
1003
#ifndef SP_NO_MESSAGE_TEXT
,"name start character"
#endif
);
const MessageFragment ParserMessages::sepchar(
MessageFragment::libModule,
1004
#ifndef SP_NO_MESSAGE_TEXT
,"sepchar"
#endif
);
const MessageFragment ParserMessages::separator(
MessageFragment::libModule,
1005
#ifndef SP_NO_MESSAGE_TEXT
,"separator"
#endif
);
const MessageFragment ParserMessages::nameCharacter(
MessageFragment::libModule,
1006
#ifndef SP_NO_MESSAGE_TEXT
,"name character"
#endif
);
const MessageFragment ParserMessages::dataCharacter(
MessageFragment::libModule,
1007
#ifndef SP_NO_MESSAGE_TEXT
,"data character"
#endif
);
const MessageFragment ParserMessages::minimumDataCharacter(
MessageFragment::libModule,
1008
#ifndef SP_NO_MESSAGE_TEXT
,"minimum data character"
#endif
);
const MessageFragment ParserMessages::significantCharacter(
MessageFragment::libModule,
1009
#ifndef SP_NO_MESSAGE_TEXT
,"significant character"
#endif
);
const MessageFragment ParserMessages::recordEnd(
MessageFragment::libModule,
1010
#ifndef SP_NO_MESSAGE_TEXT
,"record end character"
#endif
);
const MessageFragment ParserMessages::recordStart(
MessageFragment::libModule,
1011
#ifndef SP_NO_MESSAGE_TEXT
,"record start character"
#endif
);
const MessageFragment ParserMessages::space(
MessageFragment::libModule,
1012
#ifndef SP_NO_MESSAGE_TEXT
,"space character"
#endif
);
const MessageFragment ParserMessages::listSep(
MessageFragment::libModule,
1013
#ifndef SP_NO_MESSAGE_TEXT
,", "
#endif
);
const MessageFragment ParserMessages::rangeSep(
MessageFragment::libModule,
1014
#ifndef SP_NO_MESSAGE_TEXT
,"-"
#endif
);
const MessageFragment ParserMessages::parameterLiteral(
MessageFragment::libModule,
1015
#ifndef SP_NO_MESSAGE_TEXT
,"parameter literal"
#endif
);
const MessageFragment ParserMessages::dataTagGroup(
MessageFragment::libModule,
1016
#ifndef SP_NO_MESSAGE_TEXT
,"data tag group"
#endif
);
const MessageFragment ParserMessages::modelGroup(
MessageFragment::libModule,
1017
#ifndef SP_NO_MESSAGE_TEXT
,"model group"
#endif
);
const MessageFragment ParserMessages::dataTagTemplateGroup(
MessageFragment::libModule,
1018
#ifndef SP_NO_MESSAGE_TEXT
,"data tag template group"
#endif
);
const MessageFragment ParserMessages::name(
MessageFragment::libModule,
1019
#ifndef SP_NO_MESSAGE_TEXT
,"name"
#endif
);
const MessageFragment ParserMessages::nameToken(
MessageFragment::libModule,
1020
#ifndef SP_NO_MESSAGE_TEXT
,"name token"
#endif
);
const MessageFragment ParserMessages::elementToken(
MessageFragment::libModule,
1021
#ifndef SP_NO_MESSAGE_TEXT
,"element token"
#endif
);
const MessageFragment ParserMessages::inclusions(
MessageFragment::libModule,
1022
#ifndef SP_NO_MESSAGE_TEXT
,"inclusions"
#endif
);
const MessageFragment ParserMessages::exclusions(
MessageFragment::libModule,
1023
#ifndef SP_NO_MESSAGE_TEXT
,"exclusions"
#endif
);
const MessageFragment ParserMessages::minimumLiteral(
MessageFragment::libModule,
1024
#ifndef SP_NO_MESSAGE_TEXT
,"minimum literal"
#endif
);
const MessageFragment ParserMessages::attributeValueLiteral(
MessageFragment::libModule,
1025
#ifndef SP_NO_MESSAGE_TEXT
,"attribute value literal"
#endif
);
const MessageFragment ParserMessages::systemIdentifier(
MessageFragment::libModule,
1026
#ifndef SP_NO_MESSAGE_TEXT
,"system identifier"
#endif
);
const MessageFragment ParserMessages::number(
MessageFragment::libModule,
1027
#ifndef SP_NO_MESSAGE_TEXT
,"number"
#endif
);
const MessageFragment ParserMessages::attributeValue(
MessageFragment::libModule,
1028
#ifndef SP_NO_MESSAGE_TEXT
,"attribute value"
#endif
);
const MessageFragment ParserMessages::capacityName(
MessageFragment::libModule,
1029
#ifndef SP_NO_MESSAGE_TEXT
,"name of capacity"
#endif
);
const MessageFragment ParserMessages::generalDelimiteRoleName(
MessageFragment::libModule,
1030
#ifndef SP_NO_MESSAGE_TEXT
,"name of general delimiter role"
#endif
);
const MessageFragment ParserMessages::referenceReservedName(
MessageFragment::libModule,
1031
#ifndef SP_NO_MESSAGE_TEXT
,"reference reserved name"
#endif
);
const MessageFragment ParserMessages::quantityName(
MessageFragment::libModule,
1032
#ifndef SP_NO_MESSAGE_TEXT
,"name of quantity"
#endif
);
const MessageFragment ParserMessages::entityEnd(
MessageFragment::libModule,
1033
#ifndef SP_NO_MESSAGE_TEXT
,"entity end"
#endif
);
const MessageFragment ParserMessages::shortrefDelim(
MessageFragment::libModule,
1034
#ifndef SP_NO_MESSAGE_TEXT
,"short reference delimiter"
#endif
);
#ifdef SP_NAMESPACE
}
#endif
