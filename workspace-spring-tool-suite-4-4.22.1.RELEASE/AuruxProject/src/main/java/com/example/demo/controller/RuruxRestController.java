package com.example.demo.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;

import com.example.demo.model.AdminModel;
import com.example.demo.model.MarkModel;
import com.example.demo.model.StudentModel;
import com.example.demo.model.SubjectModel;
import com.example.demo.service.StudentService;


public class RuruxRestController 
{
	@Autowired
	StudentService studService;
	boolean b;

	@PostMapping("/adminsave")
	public String isSaveAdmin(@RequestBody AdminModel model)
	{
		b = studService.isSaveAdmin(model);
		return b ? "Admin record save..." : "Fail to save Admin data...";
	}

	@GetMapping("/adminview")
	public List<AdminModel> getUser(AdminModel model)
	{
		return studService.fetchAdminData(model);
	}

	@PostMapping("/studsave")
	public String isSaveStudent(@RequestBody StudentModel sm)
	{
		b = studService.isSaveStudent(sm);
		return b ? "Student record save..." : "Fail to save student data...";
	}

	@GetMapping("/studview")
	public List<StudentModel> getAllStudent(StudentModel model) 
	{
		return studService.viewAllStudent(model);
	}

	@PostMapping("/savesub")
	public String isSaveSubject(@RequestBody SubjectModel model) {
		b = studService.isSaveSubject(model);
		return b ? "Subject reecord save..." : "Fail to save subject data...";
	}
	@PostMapping("/savemark")
	public MarkModel isSaveMark(@RequestBody MarkModel model) {
		return studService.isSaveMark(model);
	}
}
