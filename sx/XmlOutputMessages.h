// This file was automatically generated from XmlOutputMessages.msg by msggen.pl.
#include "Message.h"

#ifdef SP_NAMESPACE
namespace SP_NAMESPACE {
#endif

struct XmlOutputMessages {
  // 100
  static const MessageType1 sdataEntityReference;
  // 101
  static const MessageType1 externalDataEntityReference;
  // 102
  static const MessageType1 subdocEntityReference;
  // 103
  static const MessageType0 piQuestionLt;
  // 104
  static const MessageType0 piNoName;
  // 105
  static const MessageType1 externalDataNdata;
  // 106
  static const MessageType1 notationAttributes;
  // 107
  static const MessageType1 cannotConvertFsiToUrl;
  // 108
  static const MessageType1 cannotOpenOutputFile;
  // 109
  static const MessageType1 missingSystemId;
  // 110
  static const MessageType1 unexpectedEntityType;
};
extern MessageModule appModule;

const MessageType1 XmlOutputMessages::sdataEntityReference(
MessageType::warning,
&appModule,
100
#ifndef SP_NO_MESSAGE_TEXT
,"reference to internal SDATA entity %1 not allowed in XML"
#endif
);
const MessageType1 XmlOutputMessages::externalDataEntityReference(
MessageType::error,
&appModule,
101
#ifndef SP_NO_MESSAGE_TEXT
,"reference to external data entity %1 not allowed in XML"
#endif
);
const MessageType1 XmlOutputMessages::subdocEntityReference(
MessageType::warning,
&appModule,
102
#ifndef SP_NO_MESSAGE_TEXT
,"reference to subdocument entity %1 not allowed in XML"
#endif
);
const MessageType0 XmlOutputMessages::piQuestionLt(
MessageType::warning,
&appModule,
103
#ifndef SP_NO_MESSAGE_TEXT
,"processing instruction containing \"?>\" not allowed in XML"
#endif
);
const MessageType0 XmlOutputMessages::piNoName(
MessageType::warning,
&appModule,
104
#ifndef SP_NO_MESSAGE_TEXT
,"XML requires processing instructions to start with a name"
#endif
);
const MessageType1 XmlOutputMessages::externalDataNdata(
MessageType::warning,
&appModule,
105
#ifndef SP_NO_MESSAGE_TEXT
,"external data entity %1 is CDATA or SDATA, but XML allows only NDATA"
#endif
);
const MessageType1 XmlOutputMessages::notationAttributes(
MessageType::warning,
&appModule,
106
#ifndef SP_NO_MESSAGE_TEXT
,"attributes were defined for notation %1; not allowed in XML"
#endif
);
const MessageType1 XmlOutputMessages::cannotConvertFsiToUrl(
MessageType::warning,
&appModule,
107
#ifndef SP_NO_MESSAGE_TEXT
,"cannot convert formal system identifier %1 to URL"
#endif
);
const MessageType1 XmlOutputMessages::cannotOpenOutputFile(
MessageType::warning,
&appModule,
108
#ifndef SP_NO_MESSAGE_TEXT
,"cannot open output file %1"
#endif
);
const MessageType1 XmlOutputMessages::missingSystemId(
MessageType::warning,
&appModule,
109
#ifndef SP_NO_MESSAGE_TEXT
,"missing system ID for entity %1"
#endif
);
const MessageType1 XmlOutputMessages::unexpectedEntityType(
MessageType::warning,
&appModule,
110
#ifndef SP_NO_MESSAGE_TEXT
,"unexpected entity type for entity named %1"
#endif
);
#ifdef SP_NAMESPACE
}
#endif
