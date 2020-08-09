SUBDIRS := polymorphism inheritance class strategy \
 template_function template_class

.PHONY: $(SUBDIRS) subdirs

#default target
subdirs: $(SUBDIRS) 

$(SUBDIRS):
	@echo "\n\n**********" $@ "**********"
	$(MAKE) --directory=$@ $(TARGET)
clean:
	$(MAKE) TARGET=clean
