struct xkas65ce02 : xkasArch {
	bool assemble_command(string&);
	xkas65ce02(xkas &self);

private:
	bool force_byte, force_word;
	lstring part, subpart;

	void force_test();

	bool assemble_direct();
	bool assemble_const();
	bool assemble_sry();
	bool assemble_indirect_x();
	bool assemble_indirect_y();
	bool assemble_indirect_z();
	bool assemble_indirect();
	bool assemble_addr_x();
	bool assemble_dp_x();
	bool assemble_addr_y();
	bool assemble_dp_y();
	bool assemble_addr();
	bool assemble_dp();
	bool assemble_branch();
};
