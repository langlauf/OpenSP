// This file was automatically generated from NsgmlsMessages.msg by msggen.pl.
#include "Message.h"

#ifdef SP_NAMESPACE
namespace SP_NAMESPACE {
#endif

struct NsgmlsMessages {
  // 0
  static const MessageType1 unknownOutputOption;
  // 1
  static const MessageType1 BHelp;
  // 2
  static const MessageType1 oHelp;
  // 3
  static const MessageType1 pHelp;
  // 4
  static const MessageType1 sHelp;
  // 5
  static const MessageType1 tHelp;
  // 6
  static const MessageType1 dHelp;
  // 7
  static const MessageType1 lHelp;
  // 8
  static const MessageType1 mHelp;
  // 9
  static const MessageType1 rHelp;
  // 10
  static const MessageType1 uHelp;
  // 11
  static const MessageType1 info1;
  // 12
  static const MessageType1 info2;
  // 13
  static const MessageType1 info3;
  // 14
  static const MessageType1 info4;
  // 15
  static const MessageType1 info5;
  // 16
  static const MessageType1 info6;
  // 17
  static const MessageType1 info7;
  // 18
  static const MessageType1 info8;
  // 19
  static const MessageFragment file;
  // 20
  static const MessageFragment option;
};
const MessageType1 NsgmlsMessages::unknownOutputOption(
MessageType::error,
MessageFragment::appModule,
0
#ifndef SP_NO_MESSAGE_TEXT
,"unknown output option %1"
#endif
);
const MessageType1 NsgmlsMessages::BHelp(
MessageType::info,
MessageFragment::appModule,
1
#ifndef SP_NO_MESSAGE_TEXT
,"Enable batch mode."
#endif
);
const MessageType1 NsgmlsMessages::oHelp(
MessageType::info,
MessageFragment::appModule,
2
#ifndef SP_NO_MESSAGE_TEXT
,"Produce output according to %1."
#endif
);
const MessageType1 NsgmlsMessages::pHelp(
MessageType::info,
MessageFragment::appModule,
3
#ifndef SP_NO_MESSAGE_TEXT
,"Stop after the document prolog."
#endif
);
const MessageType1 NsgmlsMessages::sHelp(
MessageType::info,
MessageFragment::appModule,
4
#ifndef SP_NO_MESSAGE_TEXT
,"Suppress output."
#endif
);
const MessageType1 NsgmlsMessages::tHelp(
MessageType::info,
MessageFragment::appModule,
5
#ifndef SP_NO_MESSAGE_TEXT
,"Send RAST output to file %1."
#endif
);
const MessageType1 NsgmlsMessages::dHelp(
MessageType::info,
MessageFragment::appModule,
6
#ifndef SP_NO_MESSAGE_TEXT
,"Same as -wduplicate."
#endif
);
const MessageType1 NsgmlsMessages::lHelp(
MessageType::info,
MessageFragment::appModule,
7
#ifndef SP_NO_MESSAGE_TEXT
,"Same as -oline."
#endif
);
const MessageType1 NsgmlsMessages::mHelp(
MessageType::info,
MessageFragment::appModule,
8
#ifndef SP_NO_MESSAGE_TEXT
,"Same as -c."
#endif
);
const MessageType1 NsgmlsMessages::rHelp(
MessageType::info,
MessageFragment::appModule,
9
#ifndef SP_NO_MESSAGE_TEXT
,"Same as -wdefault."
#endif
);
const MessageType1 NsgmlsMessages::uHelp(
MessageType::info,
MessageFragment::appModule,
10
#ifndef SP_NO_MESSAGE_TEXT
,"Same as -wundef."
#endif
);
const MessageType1 NsgmlsMessages::info1(
MessageType::info,
MessageFragment::appModule,
11
#ifndef SP_NO_MESSAGE_TEXT
,"%1 parses and validates the SGML document whose document entity is"
#endif
);
const MessageType1 NsgmlsMessages::info2(
MessageType::info,
MessageFragment::appModule,
12
#ifndef SP_NO_MESSAGE_TEXT
,"specified by the system identifiers SYSID... and prints on the standard"
#endif
);
const MessageType1 NsgmlsMessages::info3(
MessageType::info,
MessageFragment::appModule,
13
#ifndef SP_NO_MESSAGE_TEXT
,"output a simple text representation of its Element Structure Information Set."
#endif
);
const MessageType1 NsgmlsMessages::info4(
MessageType::info,
MessageFragment::appModule,
14
#ifndef SP_NO_MESSAGE_TEXT
,"If more than one system identifier is specified, then the corresponding"
#endif
);
const MessageType1 NsgmlsMessages::info5(
MessageType::info,
MessageFragment::appModule,
15
#ifndef SP_NO_MESSAGE_TEXT
,"entities will be concatenated to form the document entity. If no system"
#endif
);
const MessageType1 NsgmlsMessages::info6(
MessageType::info,
MessageFragment::appModule,
16
#ifndef SP_NO_MESSAGE_TEXT
,"identifiers are specified, then %1 will read the document entity from"
#endif
);
const MessageType1 NsgmlsMessages::info7(
MessageType::info,
MessageFragment::appModule,
17
#ifndef SP_NO_MESSAGE_TEXT
,"the standard input. A command line system identifier of - can be used"
#endif
);
const MessageType1 NsgmlsMessages::info8(
MessageType::info,
MessageFragment::appModule,
18
#ifndef SP_NO_MESSAGE_TEXT
,"to refer to the standard input."
#endif
);
const MessageFragment NsgmlsMessages::file(
MessageFragment::appModule,
19
#ifndef SP_NO_MESSAGE_TEXT
,"FILE"
#endif
);
const MessageFragment NsgmlsMessages::option(
MessageFragment::appModule,
20
#ifndef SP_NO_MESSAGE_TEXT
,"OPTION"
#endif
);
#ifdef SP_NAMESPACE
}
#endif
