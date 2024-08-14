package com.example.demo.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.example.demo.model.AdminModel;
import com.example.demo.model.MarkModel;
import com.example.demo.model.StudentModel;
import com.example.demo.model.SubjectModel;
import com.example.demo.repository.AdminRepository;
import com.example.demo.repository.MarkRepository;
import com.example.demo.repository.StudentRepository;
import com.example.demo.repository.SubjectRepository;

@Service("studService")
public class StudentService 
{
	@Autowired
	AdminRepository adRepo;
	@Autowired
	StudentRepository studRepo;
	@Autowired
	MarkRepository markRepo;
	@Autowired
	SubjectRepository subRepo;
	
	public boolean isSaveAdmin(AdminModel model) {
		AdminModel am = adRepo.save(model);
		return am != null ? true : false;
	}

	public List<AdminModel> fetchAdminData(AdminModel model) {
		List<AdminModel> list = adRepo.findAll();
		return list;
	}

	public boolean isSaveStudent(StudentModel smodel) {
		StudentModel sm = studRepo.save(smodel);
		return sm != null ? true : false;
	}

	public List<StudentModel> viewAllStudent(StudentModel model) {
		List<StudentModel> list = studRepo.findAll();
		return list;
	}

	public boolean isSaveSubject(SubjectModel model) {
		SubjectModel subm = subRepo.save(model);
		return subm != null ? true : false;
	}

	public MarkModel isSaveMark(MarkModel model) {
		return markRepo.save(model);
	}
}

