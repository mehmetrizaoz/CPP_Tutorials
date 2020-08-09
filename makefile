SUBDIRS := polymorphism inheritance class strategy template_function template_class

.PHONY: subdirs $(SUBDIRS)

subdirs: $(SUBDIRS)

$(SUBDIRS):
	@echo "-------\n" $@ "will be built"
	$(MAKE) --directory=$@ $(TARGET)

clean:
	$(MAKE) TARGET=clean
