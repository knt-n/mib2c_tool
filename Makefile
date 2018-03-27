
export SMICINCL=smic\mibs\name;.;

smic_dir := ./smic/bin

.PHONY: all clean debug
all:

clean:
	$(RM) *.inc *.smi *.pass* *.log *.done

debug:
	$(smic_dir)/SMICng /H

%.inc: %.mib
	@if [ -f $@ ]; then $(RM) $@; fi
	$(smic_dir)/SMICbmi $<

%.smi: %.inc
	$(smic_dir)/SMICng -z -cm $< > $@

%.done: %.smi
	./codegen -l -o $(basename $<) $<
	touch $@
