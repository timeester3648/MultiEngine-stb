void main(MultiBuild::Workspace& workspace) {	
	auto project = workspace.create_project(".");
	auto properties = project.properties();

	project.name("stb");
	properties.binary_object_kind(MultiBuild::BinaryObjectKind::eStaticLib);
	project.license("./LICENSE");

	project.include_own_required_includes(true);
	project.add_required_project_include({
		"."
	});

	properties.files({
		"./*.h",
		"./*.cpp"
	});
	
	{
		MultiBuild::ScopedFilter _(project, "project.compiler:VisualCpp");
		properties.defines("__STDC_LIB_EXT1__");
	}
}