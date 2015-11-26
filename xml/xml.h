typedef struct xml_node
{
    char * name;
    xml_attr attr[];
    char * content;
    struct xml_node * parent;
    struct xml_node child[];
} xml_node;

typedef struct xml_attr
{
    char * name;
    char * content;
} xml_attr;
