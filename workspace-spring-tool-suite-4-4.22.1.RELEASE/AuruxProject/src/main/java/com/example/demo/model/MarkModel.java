package com.example.demo.model;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.Table;

@Entity
@Table(name = "marks")
public class MarkModel {
	@Id
//	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name = "markid")
	private long markid;

	@ManyToOne
	@JoinColumn(name = "subid")
	private SubjectModel Subject;
	@ManyToOne
	@JoinColumn(name = "sid")
	private StudentModel Student;

	@Column(name = "marks")
	private double marks;

	public long getMarkid() {
		return markid;
	}

	public void setMarkid(long markid) {
		this.markid = markid;
	}

	public SubjectModel getSubject() {
		return Subject;
	}

	public void setSubject(SubjectModel subject) {
		Subject = subject;
	}

	public StudentModel getStudent() {
		return Student;
	}

	public void setStudent(StudentModel student) {
		Student = student;
	}

	public double getMarks() {
		return marks;
	}

	public void setMarks(double marks) {
		this.marks = marks;
	}
}
