#ifndef register_h
#define register_h

void jabber_iq_get_register(Stream *s,const char *from,const char *id,xmlnode q);
void jabber_iq_set_register(Stream *s,const char *from,const char *id,xmlnode q);

struct request_s;
int register_error(struct request_s *r);
int register_done(struct request_s *r);

#endif
