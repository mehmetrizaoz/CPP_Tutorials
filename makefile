SUBDIRS := polymorphism inheritance class

.PHONY: subdirs $(SUBDIRS)

subdirs: all $(SUBDIRS)
all: $(SUBDIRS)

$(SUBDIRS):
	@echo "-------\n" $@ "will be built"
	$(MAKE) --directory=$@ $(TARGET)

clean:
	$(MAKE) TARGET=clean
