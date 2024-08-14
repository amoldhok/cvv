package com.example.demo.model;
import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="Student")
public class SubjectModel 
{
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name="subid")
	private int subid;
	@Column(name="subname")
	private String subname;
	public int getSubid()
	{
		return subid;
	}
	public void setSubid(int subid) 
	{
		this.subid = subid;
	}
	public String getSubname()
	{
		return subname;
	}
	public void setSubname(String subname)
	{
		this.subname = subname;
	}
}